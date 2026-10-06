/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091adb08; end: 1091add47; -[SCLensPreviewCarouselCollectionControllerFactory initWithLensesCarouselContainer:lensIconRepository:lensPerformerProvider:attributionProvider:lensCarouselStudySettings:layoutProvider:lensFeatureContainer:externalScrollSource:uiUpdateAnnouncer:cellOverlayProvider:] */

undefined8 *
FUN_1091adb08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_112700b98;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
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



/* Entry: 1091add48; end: 1091ade2f; -[SCLensPreviewCarouselCollectionControllerFactory lensCarouselCollectionController] */

void FUN_1091add48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  puVar5 = PTR_PTR_1126ddaa0;
  _objc_alloc(PTR_PTR_1126ddaa0);
  lVar6 = param_1;
  func_0x00010bddbd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ddaa8;
  _objc_alloc_init();
  func_0x00010c025ea0(puVar5,param_2,lVar6,uVar1,uVar4,uVar3,uVar2,uVar7,puVar8,
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50));
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1091ade30; end: 1091adfb7; -[SCLensPreviewCarouselCollectionControllerFactory _carouselViewContainer] */

void FUN_1091ade30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c08c7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0700a0();
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126ddab0;
  if ((int)uVar7 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    _objc_alloc(puVar5);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1091adfb8;
    puStack_70 = &UNK_110adf988;
    puVar2 = PTR_PTR_1126ae720;
    uStack_68 = uVar4;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar3;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x1091adfc0;
    puStack_98 = &UNK_110adf988;
    puVar3 = PTR_PTR_1126ae720;
    uStack_90 = uVar4;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0615e0(puVar5,param_2,uVar7,uVar6,puVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  else {
    puVar5 = *(undefined **)(param_1 + 8);
    _objc_retain(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1091adfb8; end: 1091adfc7;  */

void FUN_1091adfb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c090b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_lensCarouselLayoutGuide_112601cd0);
  return;
}



/* Entry: 1091adfc8; end: 1091ae057; -[SCLensPreviewCarouselCollectionControllerFactory .cxx_destruct] */

void FUN_1091adfc8(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091ae058; end: 1091ae153; -[SCLensPreviewCarouselViewContainer initWithViewContainer:layoutProvider:lensCarouselLayoutGuide:lensCarouselVisibleLayoutGuide:] */

undefined1 *
FUN_1091ae058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112700ba0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091ae154; end: 1091ae493; -[SCLensPreviewCarouselViewContainer attachView:] */

void FUN_1091ae154(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010be927c0(param_1);
  _objc_initWeak(auStack_90,param_1);
  puVar2 = PTR_PTR_1126ddab8;
  _objc_alloc();
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010c031380();
  func_0x00010befbb60();
  func_0x00010c219b60(param_3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = param_3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  lStack_88 = lVar5;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  lStack_80 = lVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010c274200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  lStack_78 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010bf1ff80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = lVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar15);
  _objc_release(lVar14);
  _objc_release(puVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_retain(puVar2);
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = puVar2;
  _objc_release(uVar16);
  func_0x00010bf0ca20(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be686c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091ae494; end: 1091ae4bf;  */

void FUN_1091ae494(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be686c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091ae4c0; end: 1091ae4eb; -[SCLensPreviewCarouselViewContainer _resetContainerView] */

void FUN_1091ae4c0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091ae4ec; end: 1091ae5ef; -[SCLensPreviewCarouselViewContainer _onContainerViewDidMoveToWindow] */

void FUN_1091ae4ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar2 = param_1;
    func_0x00010be4a620(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010be4a660(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    puVar4 = puVar3;
    func_0x00010bf529e0();
    if (puVar4 != (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x00010bf51e00();
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar4;
      _objc_release(uVar1);
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1091ae5f0; end: 1091ae8c7; -[SCLensPreviewCarouselViewContainer _lensCarouselLayoutGuideConstraints] */

void FUN_1091ae5f0(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
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
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_4 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = *(long *)(param_4 + 0x28);
  _objc_retain(lVar17);
  puVar12 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    lVar18 = lVar1;
    func_0x00010c0f0780();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar18;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar17;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar13 == lVar2) {
      lVar3 = lVar17;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar13);
      _objc_release(lVar18);
      puVar12 = PTR____NSArray0__struct_11034ab48;
      if (lVar3 != 0) {
        lVar18 = lVar1;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar17;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar18;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar17;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar1;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar17;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar6;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar1;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar17;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar9;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
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
        _objc_release(lVar13);
        _objc_release(lVar18);
      }
    }
    else {
      _objc_release(lVar2);
      _objc_release(lVar13);
      _objc_release(lVar18);
      puVar12 = PTR____NSArray0__struct_11034ab48;
    }
  }
  _objc_release(lVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
    lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar16 = *(long *)(lVar1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = *(long *)(lVar1 + 0x28);
    _objc_retain(lVar18);
    puVar12 = PTR____NSArray0__struct_11034ab48;
    if (lVar16 != 0) {
      lVar13 = *(long *)(lVar1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar12 = PTR____NSArray0__struct_11034ab48;
      if (lVar16 != lVar13) {
        lVar13 = lVar16;
        func_0x00010c0f0780();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar13;
        func_0x00010c2a71e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar18;
        func_0x00010c2a71e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == lVar3) {
          lVar4 = lVar18;
          func_0x00010c2a71e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar3);
          _objc_release(lVar2);
          _objc_release(lVar13);
          puVar12 = PTR____NSArray0__struct_11034ab48;
          if (lVar4 != 0) {
            uVar14 = *(undefined8 *)(lVar1 + 0x10);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar14;
            func_0x00010c08c7c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar14);
            lVar1 = lVar16;
            func_0x00010c274200();
            _objc_retainAutoreleasedReturnValue();
            lVar13 = lVar18;
            func_0x00010c274200();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c152d40(uVar15);
            lVar2 = lVar1;
            func_0x00010bf493c0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar16;
            func_0x00010bf1ff80();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar18;
            func_0x00010bf1ff80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c152d40(uVar15);
            lVar5 = lVar3;
            func_0x00010bf493c0(-param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar16;
            func_0x00010c08e400();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar18;
            func_0x00010c08e400(lVar18);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar6;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar16;
            func_0x00010c1408a0();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar18;
            func_0x00010c1408a0(lVar18);
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar9;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
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
            _objc_release(lVar13);
            _objc_release(lVar1);
            _objc_release(uVar15);
          }
        }
        else {
          _objc_release(lVar3);
          _objc_release(lVar2);
          _objc_release(lVar13);
          puVar12 = PTR____NSArray0__struct_11034ab48;
        }
      }
    }
    _objc_release(lVar18);
    _objc_release(lVar16);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
      ___stack_chk_fail();
      _objc_storeStrong(lVar16 + 0x30,0);
      _objc_storeStrong(lVar16 + 0x28,0);
      _objc_storeStrong(lVar16 + 0x20,0);
      _objc_storeStrong(lVar16 + 0x18,0);
      _objc_storeStrong(lVar16 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(lVar16 + 8,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1091ae8c8; end: 1091aec0f; -[SCLensPreviewCarouselViewContainer _lensCarouselVisibleLayoutGuideConstraints] */

void FUN_1091ae8c8(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_4 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = *(long *)(param_4 + 0x28);
  _objc_retain(lVar18);
  puVar16 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_4 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar16 = PTR____NSArray0__struct_11034ab48;
    if (lVar1 != lVar2) {
      lVar2 = lVar1;
      func_0x00010c0f0780();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar18;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == lVar4) {
        lVar5 = lVar18;
        func_0x00010c2a71e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        puVar16 = PTR____NSArray0__struct_11034ab48;
        if (lVar5 != 0) {
          uVar6 = *(undefined8 *)(param_4 + 0x10);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c08c7c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          lVar2 = lVar1;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar18;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c152d40(uVar7);
          lVar4 = lVar2;
          func_0x00010bf493c0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar1;
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar18;
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c152d40(uVar7);
          lVar9 = lVar5;
          func_0x00010bf493c0(-param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar1;
          func_0x00010c08e400();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar18;
          func_0x00010c08e400(lVar18);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar10;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar1;
          func_0x00010c1408a0();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar18;
          func_0x00010c1408a0(lVar18);
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar13;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar15);
          _objc_release(lVar14);
          _objc_release(lVar13);
          _objc_release(lVar12);
          _objc_release(lVar11);
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(lVar2);
          _objc_release(uVar7);
        }
      }
      else {
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        puVar16 = PTR____NSArray0__struct_11034ab48;
      }
    }
  }
  _objc_release(lVar18);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    _objc_storeStrong(lVar1 + 0x30,0);
    _objc_storeStrong(lVar1 + 0x28,0);
    _objc_storeStrong(lVar1 + 0x20,0);
    _objc_storeStrong(lVar1 + 0x18,0);
    _objc_storeStrong(lVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar1 + 8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 1091aec10; end: 1091aec6f; -[SCLensPreviewCarouselViewContainer .cxx_destruct] */

void FUN_1091aec10(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091aec70; end: 1091aecef; -[SCLensPreviewCarouselWindowTrackingView initWithOnDidMoveToWindow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1091aec70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700ba8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127829f4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127829f4) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091aecf0; end: 1091aed47; -[SCLensPreviewCarouselWindowTrackingView didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091aecf0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112700ba8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didMoveToWindow_112527020);
  if (*(long *)(param_1 + _DAT_1127829f4) != 0) {
    (**(code **)(*(long *)(param_1 + _DAT_1127829f4) + 0x10))();
  }
  return;
}



/* Entry: 1091aed48; end: 1091aed5b; -[SCLensPreviewCarouselWindowTrackingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091aed48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127829f4,0);
  return;
}



/* Entry: 1091aed5c; end: 1091aed63; -[SCLensPreviewStatusProvider statusForLens:] */

undefined8 FUN_1091aed5c(void)

{
  return 1;
}



/* Entry: 1091aed64; end: 1091aed6b; -[SCLensPreviewStatusProvider isLensBeingApplied:] */

undefined8 FUN_1091aed64(void)

{
  return 0;
}



/* Entry: 1091aed6c; end: 1091af05f; -[SCLensBaseCarouselCollectionController initWithLensIconRepository:lensCarouselStudySettings:lensPerformerProvider:attributionProvider:layoutProvider:lensStatusProvider:carouselPresenterFactory:externalScrollSource:hapticsManager:uiUpdateAnnouncer:cellOverlayProvider:] */

undefined8 *
FUN_1091aed6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_112700bb0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[8];
    puVar1[8] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ddac0;
    _objc_alloc(PTR_PTR_1126ddac0);
    _objc_retain(param_8);
    func_0x00010c024200(puVar3);
    puVar4 = PTR_PTR_1126ddac8;
    _objc_alloc();
    func_0x00010c061f40();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ddad0;
    _objc_alloc();
    func_0x00010c0049c0();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(param_8);
  }
  _objc_release(param_13);
  _objc_release(param_12);
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



/* Entry: 1091af060; end: 1091af06b;  */

void FUN_1091af060(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c253170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_statusForLens__112672680,param_2);
  return;
}



/* Entry: 1091af06c; end: 1091af0af; -[SCLensBaseCarouselCollectionController setDelegate:] */

void FUN_1091af06c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x70,param_3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091af0b0; end: 1091af0ff; -[SCLensBaseCarouselCollectionController setDefaultSelectedLensProvider:] */

void FUN_1091af0b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x78,param_3);
  _objc_retain();
  func_0x00010c18b1e0(*(undefined8 *)(param_1 + 8));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091af100; end: 1091af15f; -[SCLensBaseCarouselCollectionController attachCarouselView:] */

undefined8 FUN_1091af100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 1091af160; end: 1091af167; -[SCLensBaseCarouselCollectionController carouselTapHandlerPolicy] */

undefined8 FUN_1091af160(void)

{
  return 0;
}



/* Entry: 1091af168; end: 1091af303; -[SCLensBaseCarouselCollectionController initializeLensCarouselPresenter] */

void FUN_1091af168(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_1 + 8) == 0) {
    _objc_initWeak(auStack_58,param_1);
    puVar1 = PTR_PTR_1126af4a8;
    _objc_alloc(PTR_PTR_1126af4a8);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0311a0(puVar1);
    puVar2 = PTR_PTR_1126ddad8;
    _objc_alloc(PTR_PTR_1126ddad8);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x78;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf32b80(param_1);
    func_0x00010bffcc80(puVar2);
    _objc_release(lVar3);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c1197e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar4;
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 1091af304; end: 1091af353;  */

void FUN_1091af304(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf0c640(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091af354; end: 1091af367;  */

void FUN_1091af354(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001091af360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 1091af368; end: 1091af3bb; -[SCLensBaseCarouselCollectionController activeLens] */

void FUN_1091af368(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bef0980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c094100(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1091af3bc; end: 1091af3c3; -[SCLensBaseCarouselCollectionController lensCarouselDidScrollObservable] */

void FUN_1091af3bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c090930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_lensCarouselDidScrollObservable_112601c58);
  return;
}



/* Entry: 1091af3c4; end: 1091af3cb; -[SCLensBaseCarouselCollectionController reloadCellWithLensId:] */

void FUN_1091af3c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c287cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_updateModelWithLensId__11267f960);
  return;
}



/* Entry: 1091af3cc; end: 1091af3d3; -[SCLensBaseCarouselCollectionController selectLensWithId:animated:] */

void FUN_1091af3cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c158bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_selectItemWithItemId_animated__112633d10);
  return;
}



/* Entry: 1091af3d4; end: 1091af3e3; -[SCLensBaseCarouselCollectionController selectNextLensIfPossible] */

void FUN_1091af3d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c158e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_selectNextItemAnimated_completio_112633db8,0,0);
  return;
}



/* Entry: 1091af3e4; end: 1091af3eb; -[SCLensBaseCarouselCollectionController selectLensWithStrategy:skipDefaultLensSelection:] */

void FUN_1091af3e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c158bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_selectItemWithStrategy_skipDefau_112633d18);
  return;
}



/* Entry: 1091af3ec; end: 1091af443; -[SCLensBaseCarouselCollectionController updateItemWithItemId:contentUpdate:] */

void FUN_1091af3ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c286bc0(uVar1,param_2,param_3,param_4);
  func_0x00010c128ae0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091af444; end: 1091af4cb; -[SCLensBaseCarouselCollectionController updateAllLenses:selectedLensId:requiresAnimation:] */

void FUN_1091af444(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_4);
  func_0x00010c1bd4a0(uVar2,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c29db80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c900(uVar1,param_2,uVar2,param_4,param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1091af4cc; end: 1091af4d3; -[SCLensBaseCarouselCollectionController lensFromCarouselWithId:] */

void FUN_1091af4cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c090390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_lensByLensId__112601af0);
  return;
}



/* Entry: 1091af4d4; end: 1091af4db; -[SCLensBaseCarouselCollectionController setLensesCollectionViewScrollEnabled:] */

void FUN_1091af4d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b1f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setIsInteractionsEnabled__11264a1e8);
  return;
}



/* Entry: 1091af4dc; end: 1091af4e3; -[SCLensBaseCarouselCollectionController pointInsideLensView:cellFramesOnly:] */

void FUN_1091af4dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2cc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_canHandleTouchAtPoint_matchLensV_1125a8cb0);
  return;
}



/* Entry: 1091af4e4; end: 1091af557; -[SCLensBaseCarouselCollectionController showLensesUI:completion:] */

void FUN_1091af4e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c06e340();
  if (iVar1 != 0) {
    func_0x00010c1b1f00(*(undefined8 *)(param_1 + 8),param_2,1);
    func_0x00010c1afe40(*(undefined8 *)(param_1 + 8),param_2,0);
  }
  func_0x00010c2a6b60(*(undefined8 *)(param_1 + 8));
  func_0x00010c2a6ba0(*(undefined8 *)(param_1 + 0x48),param_2,0);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1091af558; end: 1091af59f; -[SCLensBaseCarouselCollectionController hideLensesUIWithKeepCarouselVisible:] */

void FUN_1091af558(long param_1)

{
  func_0x00010bf77320(*(undefined8 *)(param_1 + 8));
  func_0x00010bf77380(*(undefined8 *)(param_1 + 0x48));
  func_0x00010c1afe40(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c1b1f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setIsInteractionsEnabled__11264a1e8,0);
  return;
}



/* Entry: 1091af5a0; end: 1091af5eb; -[SCLensBaseCarouselCollectionController setCollectionInterfaceElementsHidden:] */

void FUN_1091af5a0(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf2d720();
  func_0x00010c1afe40(*(undefined8 *)(param_1 + 8),param_2,param_3 | (uint)lVar2 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091af5ec; end: 1091af603; -[SCLensBaseCarouselCollectionController delegate] */

void FUN_1091af5ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091af604; end: 1091af61b; -[SCLensBaseCarouselCollectionController defaultSelectedLensProvider] */

void FUN_1091af604(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091af61c; end: 1091af6df; -[SCLensBaseCarouselCollectionController .cxx_destruct] */

void FUN_1091af61c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091af6e0; end: 1091af9c3; -[SCLensCarouselCollectionController initWithLegacyUiUpdateAnnouncer:lensIconRepository:lensCarouselSettings:lensCarouselStudySettings:lensPerformerProvider:attributionProvider:miniCameraActivationStateProvider:lensLayoutProvider:studySettingsProvider:hapticsManager:defaultSelectedLensProvider:lensStatusProvider:lensCarouselContainerView:parentView:hidableViewContainer:lensCarouselLayoutGuide:lensCarouselVisibleLayoutGuide:cellOverlayProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1091af6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined4 param_19,undefined4 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puVar1 = PTR_PTR_1126ddae0;
  _objc_retain(param_23);
  _objc_retain(param_16);
  _objc_retain(param_13);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init();
  puStack_70 = PTR_PTR_112700bb8;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithLensIconRepository_lensC_11253fc38,param_4,param_6,
                      param_7,param_8,param_10,param_16,puVar1,0,param_13,param_3,param_23);
  _objc_release(param_23);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112782a38;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_7;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112782a3c;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_9;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112782a40;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_10;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112782a44;
    _objc_retain(param_18);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_18;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112782a48;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_17;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112782a4c;
    _objc_retain(param_21);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_21;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112782a50;
    _objc_retain(param_22);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_22;
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112782a54);
    *(undefined **)((long)puVar2 + (long)_DAT_112782a54) = puVar1;
    _objc_release(uVar3);
    func_0x00010bec6d00(puVar2);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  return puVar2;
}



/* Entry: 1091af9c4; end: 1091afb63; -[SCLensCarouselCollectionController _subscribeOnExternalEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091af9c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar8 = (long)_DAT_112782a3c;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0cdfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112782a38);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0b6bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c0e0ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 1091afb64; end: 1091afbc3;  */

void FUN_1091afb64(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bee2ac0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091afbc4; end: 1091afcd3; -[SCLensCarouselCollectionController attachCarouselView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091afbc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112782a58);
  *(undefined8 *)(param_1 + _DAT_112782a58) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar3 = (long)_DAT_112782a48;
  func_0x00010c066fa0(*(undefined8 *)(param_1 + lVar3),param_2,param_3,0);
  puVar1 = PTR_PTR_1126ddae8;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112782a44);
  func_0x00010bf2b240(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022ce0(puVar1,param_2,uVar4,uVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112782a5c);
  *(undefined **)(param_1 + _DAT_112782a5c) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010be78140(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea2ba0(param_1,param_2,lVar3);
  _objc_release(lVar3);
  func_0x00010bead940(param_1,param_2,param_3);
  func_0x00010bead960(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091afcd4; end: 1091afd57; -[SCLensCarouselCollectionController _setCollectionViewConstraints:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091afcd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112782a60;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + lVar3));
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091afd58; end: 1091b004f; -[SCLensCarouselCollectionController _prepareCollectionViewConstraintsForView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091afd58(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined *puVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined2 uVar22;
  ushort uVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar26 = (undefined2)((ulong)param_1 >> 0x30);
  uVar25 = (undefined2)((ulong)param_1 >> 0x20);
  uVar24 = (undefined2)((ulong)param_1 >> 0x10);
  uVar22 = (undefined2)param_1;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  lVar20 = (long)_DAT_112782a64;
  uVar1 = *(ulong *)(param_5 + lVar20);
  if ((uVar1 == 0) || (func_0x00010c06b700(), (uVar1 & 1) == 0)) {
    lVar3 = param_7;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_5 + _DAT_112782a48);
    func_0x00010c08e400(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_5 + lVar20);
    *(long *)(param_5 + lVar20) = lVar21;
    _objc_release(uVar18);
    _objc_release(uVar2);
    _objc_release(lVar3);
  }
  lVar21 = (long)_DAT_112782a68;
  lVar3 = *(long *)(param_5 + lVar21);
  if ((lVar3 == 0) || (func_0x00010c06b700(), (int)lVar3 == 0)) {
    lVar3 = param_7;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_112782a48;
    uVar2 = *(undefined8 *)(param_5 + lVar19);
    func_0x00010c1408a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_5 + lVar21);
    *(long *)(param_5 + lVar21) = lVar4;
    _objc_release(uVar18);
    _objc_release(uVar2);
    _objc_release(lVar3);
  }
  else {
    lVar19 = (long)_DAT_112782a48;
  }
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar19));
  _CGRectGetWidth();
  func_0x00010c181140(*(undefined8 *)(param_5 + lVar20));
  func_0x00010c181140(*(undefined8 *)(param_5 + lVar21));
  uVar18 = *(undefined8 *)(param_5 + _DAT_112782a40);
  func_0x00010c08c7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152d40();
  dVar28 = param_3;
  func_0x00010c152d40(uVar18);
  dVar27 = 0.5;
  dVar29 = (param_3 - (double)CONCAT26(uVar26,CONCAT24(uVar25,CONCAT22(uVar24,uVar22)))) * 0.5;
  uVar5 = *(undefined8 *)(param_5 + _DAT_112782a5c);
  func_0x00010bf2b300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar3 = param_7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = SUB82(dVar29,0);
  uVar24 = (undefined2)((ulong)dVar29 >> 0x10);
  uVar25 = (undefined2)((ulong)dVar29 >> 0x20);
  uVar26 = (undefined2)((ulong)dVar29 >> 0x30);
  lVar4 = lVar3;
  func_0x00010bf493c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010c152d40(uVar18);
  dVar29 = (double)CONCAT26(uVar26,CONCAT24(uVar25,CONCAT22(uVar24,uVar22)));
  func_0x00010c152d40(uVar18);
  dVar29 = dVar29 + dVar28;
  func_0x00010bf3fe00(uVar18);
  dVar29 = (double)CONCAT26(uVar26,CONCAT24(uVar25,CONCAT22(uVar24,uVar22))) + dVar29;
  lVar3 = param_7;
  lStack_98 = lVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = SUB82(dVar29,0);
  uVar24 = (undefined2)((ulong)dVar29 >> 0x10);
  uVar25 = (undefined2)((ulong)dVar29 >> 0x20);
  uVar26 = (undefined2)((ulong)dVar29 >> 0x30);
  lVar19 = lVar3;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = *(undefined8 *)(param_5 + lVar20);
  uStack_80 = *(undefined8 *)(param_5 + lVar21);
  plVar17 = &lStack_98;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_90 = lVar19;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(uVar2);
  _objc_release(uVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((plVar17 != (long *)0x0) && (lVar3 = *(long *)(param_7 + _DAT_112782a4c), lVar3 != 0)) {
    _objc_retain(lVar3);
    _objc_retain(plVar17);
    param_7 = lVar3;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    plVar7 = plVar17;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    plVar8 = plVar17;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    plVar10 = plVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    plVar13 = plVar17;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar17);
    lVar14 = lVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    plVar15 = (long *)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    plVar17 = plVar15;
    func_0x00010beef8c0(puVar6);
    _objc_release(plVar15);
    _objc_release(lVar14);
    _objc_release(plVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(plVar10);
    _objc_release(lVar9);
    _objc_release(lVar19);
    _objc_release(plVar8);
    _objc_release(lVar4);
    _objc_release(lVar21);
    _objc_release(lVar3);
    _objc_release(plVar7);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(plVar17);
  uVar2 = *(undefined8 *)(param_7 + _DAT_112782a40);
  func_0x00010c08c7c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152d40();
  uVar23 = NEON_uminv(CONCAT26(-(ushort)(param_4 ==
                                        *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18)),
                               CONCAT24(-(ushort)(dVar28 ==
                                                 *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10)
                                                 ),
                                        CONCAT22(-(ushort)(dVar27 ==
                                                          *(double *)
                                                           (PTR__UIEdgeInsetsZero_110345bb0 + 8)),
                                                 -(ushort)((double)CONCAT26(uVar26,CONCAT24(uVar25,
                                                  CONCAT22(uVar24,uVar22))) ==
                                                  *(double *)PTR__UIEdgeInsetsZero_110345bb0)))),2);
  if (((uVar23 & 1) == 0) && (plVar17 != (long *)0x0)) {
    lVar3 = *(long *)(param_7 + _DAT_112782a50);
    if (lVar3 != 0) {
      _objc_retain(lVar3);
      lVar21 = lVar3;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      plVar7 = plVar17;
      func_0x00010c274200(plVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c152d40(uVar2);
      lVar4 = lVar21;
      func_0x00010bf493c0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(param_7 + _DAT_112782a6c);
      *(long *)(param_7 + _DAT_112782a6c) = lVar4;
      _objc_release(uVar18);
      _objc_release(plVar7);
      _objc_release(lVar21);
      lVar21 = lVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      plVar7 = plVar17;
      func_0x00010bf1ff80(plVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c152d40(uVar2);
      lVar4 = lVar21;
      func_0x00010bf493c0(SUB82(-dVar28,0));
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(param_7 + _DAT_112782a70);
      *(long *)(param_7 + _DAT_112782a70) = lVar4;
      _objc_release(uVar18);
      _objc_release(plVar7);
      _objc_release(lVar21);
      puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar21 = lVar3;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      plVar7 = plVar17;
      func_0x00010c08e400(plVar17);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar21;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar3;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      plVar8 = plVar17;
      func_0x00010c1408a0(plVar17);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar19;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar6);
      _objc_release(puVar16);
      _objc_release(lVar9);
      _objc_release(plVar8);
      _objc_release(lVar19);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(plVar7);
      _objc_release(lVar21);
    }
  }
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)((long)plVar17 + (long)_DAT_112782a5c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c287050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)((long)plVar17 + (long)_DAT_112782a5c),
               PTR_s_updateLayoutForMiniCameraActive__11267f638);
    return;
  }
  return;
}



/* Entry: 1091b0050; end: 1091b02ab; -[SCLensCarouselCollectionController _setupLensCarouselLayoutGuideForView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b0050(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined2 uVar18;
  ushort uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  
  puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar22 = (undefined2)((ulong)param_1 >> 0x30);
  uVar21 = (undefined2)((ulong)param_1 >> 0x20);
  uVar20 = (undefined2)((ulong)param_1 >> 0x10);
  uVar18 = (undefined2)param_1;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_7 != (undefined *)0x0) && (lVar17 = *(long *)(param_5 + _DAT_112782a4c), lVar17 != 0))
  {
    _objc_retain(lVar17);
    _objc_retain(param_7);
    param_5 = lVar17;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_7;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar17;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_7;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar17;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    lVar11 = lVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_7 = puVar12;
    func_0x00010beef8c0(puVar14);
    _objc_release(puVar12);
    _objc_release(lVar11);
    _objc_release(puVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar17);
    _objc_release(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uVar13 = *(undefined8 *)(param_5 + _DAT_112782a40);
  func_0x00010c08c7c0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152d40();
  uVar19 = NEON_uminv(CONCAT26(-(ushort)(param_4 ==
                                        *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18)),
                               CONCAT24(-(ushort)(param_3 ==
                                                 *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10)
                                                 ),
                                        CONCAT22(-(ushort)(param_2 ==
                                                          *(double *)
                                                           (PTR__UIEdgeInsetsZero_110345bb0 + 8)),
                                                 -(ushort)((double)CONCAT26(uVar22,CONCAT24(uVar21,
                                                  CONCAT22(uVar20,uVar18))) ==
                                                  *(double *)PTR__UIEdgeInsetsZero_110345bb0)))),2);
  if (((uVar19 & 1) == 0) && (param_7 != (undefined *)0x0)) {
    lVar17 = *(long *)(param_5 + _DAT_112782a50);
    if (lVar17 != 0) {
      _objc_retain(lVar17);
      lVar2 = lVar17;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = param_7;
      func_0x00010c274200(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c152d40(uVar13);
      lVar3 = lVar2;
      func_0x00010bf493c0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_5 + _DAT_112782a6c);
      *(long *)(param_5 + _DAT_112782a6c) = lVar3;
      _objc_release(uVar16);
      _objc_release(puVar14);
      _objc_release(lVar2);
      lVar2 = lVar17;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = param_7;
      func_0x00010bf1ff80(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c152d40(uVar13);
      lVar3 = lVar2;
      func_0x00010bf493c0(SUB82(-param_3,0));
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_5 + _DAT_112782a70);
      *(long *)(param_5 + _DAT_112782a70) = lVar3;
      _objc_release(uVar16);
      _objc_release(puVar14);
      _objc_release(lVar2);
      puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar2 = lVar17;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_7;
      func_0x00010c08e400(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar17;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_7;
      func_0x00010c1408a0(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar14);
      _objc_release(puVar7);
      _objc_release(lVar6);
      _objc_release(puVar4);
      _objc_release(lVar5);
      _objc_release(lVar3);
      _objc_release(lVar17);
      _objc_release(puVar1);
      _objc_release(lVar2);
    }
  }
  _objc_release(uVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_7 + _DAT_112782a5c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c287050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_7 + _DAT_112782a5c),PTR_s_updateLayoutForMiniCameraActive__11267f638)
    ;
    return;
  }
  return;
}



/* Entry: 1091b02ac; end: 1091b058b; -[SCLensCarouselCollectionController _setupLensCarouselVisibleLayoutGuideForView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b02ac(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined2 uVar13;
  ushort uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  
  uVar17 = (undefined2)((ulong)param_1 >> 0x30);
  uVar16 = (undefined2)((ulong)param_1 >> 0x20);
  uVar15 = (undefined2)((ulong)param_1 >> 0x10);
  uVar13 = (undefined2)param_1;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_5 + _DAT_112782a40);
  func_0x00010c08c7c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152d40();
  uVar14 = NEON_uminv(CONCAT26(-(ushort)(param_4 ==
                                        *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18)),
                               CONCAT24(-(ushort)(param_3 ==
                                                 *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10)
                                                 ),
                                        CONCAT22(-(ushort)(param_2 ==
                                                          *(double *)
                                                           (PTR__UIEdgeInsetsZero_110345bb0 + 8)),
                                                 -(ushort)((double)CONCAT26(uVar17,CONCAT24(uVar16,
                                                  CONCAT22(uVar15,uVar13))) ==
                                                  *(double *)PTR__UIEdgeInsetsZero_110345bb0)))),2);
  if (((uVar14 & 1) == 0) && (param_7 != 0)) {
    lVar12 = *(long *)(param_5 + _DAT_112782a50);
    if (lVar12 != 0) {
      _objc_retain(lVar12);
      lVar3 = lVar12;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_7;
      func_0x00010c274200(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c152d40(uVar2);
      lVar5 = lVar3;
      func_0x00010bf493c0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_5 + _DAT_112782a6c);
      *(long *)(param_5 + _DAT_112782a6c) = lVar5;
      _objc_release(uVar11);
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar3 = lVar12;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_7;
      func_0x00010bf1ff80(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c152d40(uVar2);
      lVar5 = lVar3;
      func_0x00010bf493c0(SUB82(-param_3,0));
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_5 + _DAT_112782a70);
      *(long *)(param_5 + _DAT_112782a70) = lVar5;
      _objc_release(uVar11);
      _objc_release(lVar4);
      _objc_release(lVar3);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar3 = lVar12;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_7;
      func_0x00010c08e400(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar12;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_7;
      func_0x00010c1408a0(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar12);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
  }
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_7 + _DAT_112782a5c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c287050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_7 + _DAT_112782a5c),PTR_s_updateLayoutForMiniCameraActive__11267f638)
    ;
    return;
  }
  return;
}



/* Entry: 1091b058c; end: 1091b05a3; -[SCLensCarouselCollectionController _updateUIForMiniCameraActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b058c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112782a5c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c287050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112782a5c),PTR_s_updateLayoutForMiniCameraActive__11267f638)
    ;
    return;
  }
  return;
}



/* Entry: 1091b05a4; end: 1091b064f; -[SCLensCarouselCollectionController initializeLensCarouselPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b05a4(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined8 uVar1;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_112700bb8;
  lStack_50 = param_4;
  _objc_msgSendSuper2(&lStack_50,PTR_s_initializeLensCarouselPresenter_1125f6c48);
  uVar1 = *(undefined8 *)(param_4 + _DAT_112782a40);
  func_0x00010c08c7c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152d40();
  func_0x00010c152d40(uVar1);
  func_0x00010c181140(param_1,*(undefined8 *)(param_4 + _DAT_112782a6c));
  func_0x00010c181140(-param_3,*(undefined8 *)(param_4 + _DAT_112782a70));
  _objc_release(uVar1);
  return;
}



/* Entry: 1091b0650; end: 1091b06b3; -[SCLensCarouselCollectionController pointInsideLensView:cellFramesOnly:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b0650(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf51200(*(undefined8 *)(param_1 + _DAT_112782a58),param_2,
                      *(undefined8 *)(param_1 + _DAT_112782a44));
  puStack_28 = PTR_PTR_112700bb8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_pointInsideLensView_cellFramesOn_11261e578,param_3);
  return;
}



/* Entry: 1091b06b4; end: 1091b07a3; -[SCLensCarouselCollectionController showLensesUI:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b06b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_4);
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_112782a58);
  func_0x00010c074c20();
  if (iVar2 != 0) {
    lVar3 = param_1;
    func_0x00010be78140(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea2ba0(param_1);
    _objc_release(lVar3);
  }
  puVar1 = PTR_s_showLensesUI_completion__11266ba68;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1091b07a4;
  puStack_50 = &UNK_1108523f8;
  uStack_38 = (undefined1)param_3;
  puStack_70 = PTR_PTR_112700bb8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_78 = param_1;
  lStack_48 = param_1;
  uStack_40 = param_4;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_78,puVar1,param_3,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 1091b07a4; end: 1091b088f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b07a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010c08cdc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112782a48));
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar3 = 0x3fd6666660000000;
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar3 = 0;
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1091b0890;
  puStack_40 = &UNK_110842e18;
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1091b08e8;
  puStack_68 = &UNK_110842508;
  _objc_retain(uVar1);
  uStack_60 = uVar1;
  func_0x00010bf03460(uVar3,0,0x3feb333333333333,0,puVar2,param_2,2,&puStack_58,&puStack_80);
  _objc_release(uStack_60);
  return;
}



/* Entry: 1091b0890; end: 1091b08e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b0890(long param_1)

{
  func_0x00010c181140(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112782a64));
  func_0x00010c181140(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112782a68));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112782a48),
             PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1091b08e8; end: 1091b08fb;  */

void FUN_1091b08e8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001091b08f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1091b08fc; end: 1091b0a0b; -[SCLensCarouselCollectionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b08fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112782a70,0);
  _objc_storeStrong(param_1 + _DAT_112782a6c,0);
  _objc_storeStrong(param_1 + _DAT_112782a54,0);
  _objc_storeStrong(param_1 + _DAT_112782a68,0);
  _objc_storeStrong(param_1 + _DAT_112782a64,0);
  _objc_storeStrong(param_1 + _DAT_112782a60,0);
  _objc_storeStrong(param_1 + _DAT_112782a5c,0);
  _objc_storeStrong(param_1 + _DAT_112782a58,0);
  _objc_storeStrong(param_1 + _DAT_112782a50,0);
  _objc_storeStrong(param_1 + _DAT_112782a4c,0);
  _objc_storeStrong(param_1 + _DAT_112782a48,0);
  _objc_storeStrong(param_1 + _DAT_112782a44,0);
  _objc_storeStrong(param_1 + _DAT_112782a40,0);
  _objc_storeStrong(param_1 + _DAT_112782a3c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112782a38,0);
  return;
}



/* Entry: 1091b0a0c; end: 1091b0d4b; -[SCLensCarouselCollectionControllerFactory initWithLegacyUiUpdateAnnouncer:lensIconRepository:lensCarouselSettings:lensCarouselStudySettings:lensPerformerProvider:attributionProvider:lensCarouselLayoutProvider:studySettingsProvider:hapticsManager:lensCarouselApplicator:lensCarouselLensDownloader:parentView:lensFeatureContainer:miniCameraActivationStateProvider:cellOverlayProvider:] */

undefined8 *
FUN_1091b0a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_112700bc0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 10,param_12);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xe,param_14);
    _objc_retain(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_17;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
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



/* Entry: 1091b0d4c; end: 1091b0ed7; -[SCLensCarouselCollectionControllerFactory lensCarouselCollectionController] */

void FUN_1091b0d4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar9 = PTR_PTR_1126ddaf0;
  _objc_alloc();
  lVar10 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar10);
  func_0x00010c022c60(puVar9,param_2,lVar10,*(undefined8 *)(param_1 + 0x60));
  _objc_release(lVar10);
  puVar11 = PTR_PTR_1126ddaf8;
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar17 = *(undefined8 *)(param_1 + 0x80);
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar13 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c090840();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + 0x70;
  _objc_loadWeakRetained();
  uVar14 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bfe12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c090b00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c091300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0225a0(puVar11,param_2,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar17,uVar12,uVar4,uVar8,
                      0,puVar9,uVar13,lVar10,uVar14,uVar15,uVar16,*(undefined8 *)(param_1 + 0x68));
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar10);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1091b0ed8; end: 1091b0fa7; -[SCLensCarouselCollectionControllerFactory .cxx_destruct] */

void FUN_1091b0ed8(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091b0fa8; end: 1091b10b7; -[SCLensCarouselCollectionControllerNotifyer initWithController:lensStatusProvider:uiUpdateAnnouncer:carouselDataAdapter:] */

undefined1 *
FUN_1091b0fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112700bc8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091b10b8; end: 1091b10df; -[SCLensCarouselCollectionControllerNotifyer lensCarouselDidScrollObservable] */

void FUN_1091b10b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091b10e0; end: 1091b11cf; -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didActivateItem:index:selectionType:originalLensIndex:totalLensesCount:] */

void FUN_1091b10e0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010bf0be40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  if (uVar1 != 0) {
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar4);
    lVar5 = param_1 + 8;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c0906c0(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010bf72240(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091b11d0; end: 1091b128f; -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:willSelectItem:index:originalLensIndex:] */

void FUN_1091b11d0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  func_0x00010bf0be40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  if (uVar1 != 0) {
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar4);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0907a0(lVar4);
    _objc_release(param_1);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091b1290; end: 1091b137f; -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didSelectItem:index:selectionType:originalLensIndex:totalLensesCount:] */

void FUN_1091b1290(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010bf0be40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  if (uVar1 != 0) {
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar4);
    lVar5 = param_1 + 8;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c090700(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010bf7ab80(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091b1380; end: 1091b1437; -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:willDisplayItem:] */

void FUN_1091b1380(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  func_0x00010bf0be40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  if (uVar1 != 0) {
    func_0x00010c2a6160(*(undefined8 *)(param_1 + 0x20));
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar4);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c090780(lVar4);
    _objc_release(param_1);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091b1438; end: 1091b14ef; -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didUpdateDisplayedLens:] */

void FUN_1091b1438(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  func_0x00010bf0be40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  if (uVar1 != 0) {
    func_0x00010bf7e180(*(undefined8 *)(param_1 + 0x20));
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar4);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c090720(lVar4);
    _objc_release(param_1);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091b14f0; end: 1091b15a7; -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didEndDisplayingItem:] */

void FUN_1091b14f0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  func_0x00010bf0be40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  if (uVar1 != 0) {
    func_0x00010bf75920(*(undefined8 *)(param_1 + 0x20));
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar4);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0906e0(lVar4);
    _objc_release(param_1);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091b15a8; end: 1091b1653; -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didDrawIcon:forItem:atIndex:] */

void FUN_1091b15a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  func_0x00010bf0be40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_5);
  if (uVar1 != 0) {
    func_0x00010bf75580(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1091b1654; end: 1091b16df; -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didUpdateItemsList:] */

void FUN_1091b1654(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf43280(param_4,param_2,&PTR___NSConcreteGlobalBlock_110adfa28);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c090740(lVar1,param_2,lVar2,param_4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf7df60(*(undefined8 *)(param_1 + 0x20),param_2,param_4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1091b16e0; end: 1091b173f;  */

void FUN_1091b16e0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bf0be40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091b1740; end: 1091b17cf; -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:isItemBeingApplied:] */

undefined8 FUN_1091b1740(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  func_0x00010bf0be40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c076440(uVar4);
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 1091b17d0; end: 1091b17db; -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didScroll:] */

void FUN_1091b17d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_next__112614028,param_4);
  return;
}



/* Entry: 1091b17dc; end: 1091b17df; -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didEndScrolling:atItem:] */

void FUN_1091b17dc(void)

{
  return;
}



/* Entry: 1091b17e0; end: 1091b17e3; -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:willBeginDragging:] */

void FUN_1091b17e0(void)

{
  return;
}



/* Entry: 1091b17e4; end: 1091b1867; -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didUpdateVisibleLenses:selectedLensIndex:originalLensIndex:] */

void FUN_1091b17e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c090760(lVar1,param_2,param_1,param_4,param_5,param_6);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091b1868; end: 1091b187f; -[SCLensCarouselCollectionControllerNotifyer delegate] */

void FUN_1091b1868(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091b1880; end: 1091b188b; -[SCLensCarouselCollectionControllerNotifyer setDelegate:] */

void FUN_1091b1880(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1091b188c; end: 1091b18bb; -[SCLensCarouselCollectionControllerNotifyer setLensCarouselDidScrollObservable:] */

void FUN_1091b188c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091b18bc; end: 1091b1913; -[SCLensCarouselCollectionControllerNotifyer .cxx_destruct] */

void FUN_1091b18bc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1091b1914; end: 1091b1a8f; -[SCLensVideoCallCarouselCollectionController initWithLensesCarouselContainer:lensIconRepository:lensCarouselStudySettings:lensPerformerProvider:attributionProvider:layoutProvider:lensStatusProvider:hapticsManager:uiUpdateAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1091b1914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ddae0;
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init();
  puStack_68 = PTR_PTR_112700bd0;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithLensIconRepository_lensC_11253fc38,param_4,param_5,
                      param_6,param_7,param_8,param_9,puVar1,0,param_10,param_11,0);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112782acc;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1091b1a90; end: 1091b1aeb; -[SCLensVideoCallCarouselCollectionController attachCarouselView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b1a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112782acc;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010befbb60(uVar1,param_2,param_3);
  func_0x00010be0ad40(param_1,param_2,param_3,*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091b1aec; end: 1091b1d33; -[SCLensVideoCallCarouselCollectionController _equalSideAnchorsOfView:toView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b1aec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c274200(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010c1408a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar12 = param_4;
  func_0x00010bf1ff80(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar13 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + _DAT_112782acc,0);
  return;
}



/* Entry: 1091b1d34; end: 1091b1d47; -[SCLensVideoCallCarouselCollectionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b1d34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112782acc,0);
  return;
}



/* Entry: 1091b1d48; end: 1091b1f07; -[SCLensVideoCallCarouselCollectionControllerFactory initWithLensesCarouselContainer:lensIconRepository:lensPerformerProvider:attributionProvider:lensCarouselApplicator:lensCarouselStudySettings:layoutProvider:lensCarouselLensDownloader:uiUpdateAnnouncer:] */

undefined1 *
FUN_1091b1d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_112700bd8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091b1f08; end: 1091b2027; -[SCLensVideoCallCarouselCollectionControllerFactory lensCarouselCollectionController] */

void FUN_1091b1f08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar4 = PTR_PTR_1126ddaf0;
  _objc_alloc();
  lVar5 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c022c60(puVar4,param_2,lVar5,*(undefined8 *)(param_1 + 0x40));
  _objc_release(lVar5);
  puVar6 = PTR_PTR_1126ddb00;
  _objc_alloc(PTR_PTR_1126ddb00);
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained(lVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126affa8;
  func_0x00010c22bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025ec0(puVar6,param_2,lVar5,uVar1,uVar2,uVar3,uVar9,uVar7,puVar4,puVar8,
                      *(undefined8 *)(param_1 + 0x48));
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1091b2028; end: 1091b20a3; -[SCLensVideoCallCarouselCollectionControllerFactory .cxx_destruct] */

void FUN_1091b2028(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1091b20a4; end: 1091b2283; -[SCLensCarouselFeaturesSandbox initWithLensCarouselDataProvider:lensCarouselApplicator:lensesOpenCloseButtonController:cameraViewType:cameraViewDelegate:lensInfoButton:lensFavoriteButton:lensFavoritesTabBarButton:lensCollectionsBackButton:lensExplorerFromCarouselOverlay:lensSendToButton:lensSendToTabBarButton:] */

undefined8 *
FUN_1091b20a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_112700be0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 3,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    puVar1[5] = param_6;
    _objc_storeWeak(puVar1 + 2,param_7);
    _objc_storeWeak(puVar1 + 6,param_8);
    _objc_storeWeak(puVar1 + 7,param_9);
    _objc_storeWeak(puVar1 + 8,param_10);
    _objc_storeWeak(puVar1 + 9,param_11);
    _objc_storeWeak(puVar1 + 10,param_12);
    _objc_storeWeak(puVar1 + 0xb,param_13);
    _objc_storeWeak(puVar1 + 0xc,param_14);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1091b2284; end: 1091b23ef; -[SCLensCarouselFeaturesSandbox topLayoutAnchorForTopLeftLensInfoButton:] */

void FUN_1091b2284(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x28);
  lVar1 = param_1;
  func_0x00010c0f3c80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar4 = lVar1;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126c8ad8;
    _objc_alloc(PTR_PTR_1126c8ad8);
    func_0x00010bff2dc0(0x4010000000000000);
  }
  else {
    lVar4 = lVar1;
    func_0x00010c131ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c06f880();
    _objc_release(lVar4);
    _objc_release(lVar1);
    if ((int)lVar2 == 0) {
      puVar3 = (undefined *)0x0;
      goto LAB_1091b23d0;
    }
    puVar3 = PTR_PTR_1126c8ad8;
    _objc_alloc(PTR_PTR_1126c8ad8);
    func_0x00010c0f3c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c131ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff2dc0(0x4030000000000000,puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
LAB_1091b23d0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091b23f0; end: 1091b2563; -[SCLensCarouselFeaturesSandbox centerXLayoutPostionForTopLeftInfoButton:] */

void FUN_1091b23f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) == 0) {
    puVar4 = PTR_PTR_1126ddb08;
    _objc_alloc(PTR_PTR_1126ddb08);
    lVar1 = param_1;
    func_0x00010c0f3c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bfdfd40();
    func_0x00010bff2dc0(puVar4,param_2,lVar2);
  }
  else {
    lVar3 = param_1;
    func_0x00010c0f3c80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c131ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c06f880();
    _objc_release(lVar1);
    _objc_release(lVar3);
    if ((int)lVar2 == 0) {
      puVar4 = (undefined *)0x0;
      goto LAB_1091b2544;
    }
    puVar4 = PTR_PTR_1126ddb08;
    _objc_alloc(PTR_PTR_1126ddb08);
    func_0x00010c0f3c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c131ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff2dc0(0,puVar4,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_1091b2544:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091b2564; end: 1091b25a3; -[SCLensCarouselFeaturesSandbox parentView] */

void FUN_1091b2564(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1091b25a4; end: 1091b25fb; -[SCLensCarouselFeaturesSandbox pointInsideAnyLensView:] */

ulong FUN_1091b25a4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = param_3;
  func_0x00010be75700(param_3,param_4,0);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c102d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,PTR_s_pointInsideLensSubPicker__11261e570);
  return param_3;
}



/* Entry: 1091b25fc; end: 1091b27bf; -[SCLensCarouselFeaturesSandbox _pointInsideLensView:cellFramesOnly:] */

uint FUN_1091b25fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  
  uVar1 = *(ulong *)(param_3 + 0x20);
  func_0x00010c0986c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074c20();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c0986c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb68e0();
    uVar12 = (uint)uVar4;
    _CGRectContainsPoint();
    _objc_release(uVar3);
  }
  else {
    uVar12 = 0;
  }
  _objc_release(uVar1);
  lVar5 = param_3 + 0x38;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c102d00(param_1,param_2);
  _objc_release(lVar5);
  lVar5 = param_3 + 0x40;
  _objc_loadWeakRetained(lVar5);
  lVar7 = lVar5;
  func_0x00010c102d00(param_1,param_2);
  _objc_release(lVar5);
  lVar5 = param_3 + 0x48;
  _objc_loadWeakRetained(lVar5);
  lVar8 = lVar5;
  func_0x00010c102cc0(param_1,param_2);
  _objc_release(lVar5);
  lVar5 = param_3 + 0x30;
  _objc_loadWeakRetained(lVar5);
  lVar9 = lVar5;
  func_0x00010c102d20(param_1,param_2);
  _objc_release(lVar5);
  lVar5 = param_3 + 0x50;
  _objc_loadWeakRetained(lVar5);
  lVar10 = lVar5;
  func_0x00010c102b40(param_1,param_2);
  _objc_release(lVar5);
  lVar5 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar5);
  lVar11 = lVar5;
  func_0x00010c102da0(param_1,param_2);
  _objc_release(lVar5);
  param_3 = param_3 + 0x60;
  _objc_loadWeakRetained(param_3);
  lVar5 = param_3;
  func_0x00010c102da0(param_1,param_2);
  _objc_release(param_3);
  return (uVar12 | (uint)lVar9 | (uint)lVar6 | (uint)lVar7 |
          (uint)lVar8 | (uint)lVar10 | (uint)lVar11 | (uint)lVar5) & 1;
}



/* Entry: 1091b27c0; end: 1091b2847; -[SCLensCarouselFeaturesSandbox pointInsideLensSubPicker:] */

long FUN_1091b27c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_3 = param_3 + 0x18;
  _objc_loadWeakRetained(param_3);
  lVar1 = param_3;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0fb520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c102d40(param_1,param_2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1091b2848; end: 1091b28bb; -[SCLensCarouselFeaturesSandbox .cxx_destruct] */

void FUN_1091b2848(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1091b28bc; end: 1091b292f; -[SCLensDownloadHintController initWithFeatureContainerView:] */

undefined1 * FUN_1091b28bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700be8;
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



/* Entry: 1091b2930; end: 1091b30f7; -[SCLensDownloadHintController _prepareOverlay] */

void FUN_1091b2930(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
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
  undefined8 uVar24;
  double dVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar26 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar27 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar28 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar29 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar26,uVar27,uVar28,uVar29);
    uVar24 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar24);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x10),param_2,1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0,0,0,0x3fe999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c013de0(uVar26,uVar27,uVar28,uVar29);
    func_0x00010c211e20(param_1,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c2694e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar2);
    _objc_release(puVar1);
    dVar25 = 20.0;
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4034000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c2694e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010c2694e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010c2694e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010c2694e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010c0f3c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c2694e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6940(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010c0f3c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fc0();
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0x10),param_2,0);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar29 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c0f3c80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar29;
    func_0x00010bf493a0(uVar29,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uStack_b8 = uVar24;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010c0f3c80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar4;
    func_0x00010bf493a0(uVar4,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    uStack_b0 = uVar26;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010c0f3c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar7;
    func_0x00010bf493a0(uVar7,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    uStack_a8 = uVar27;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    func_0x00010c0f3c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar10;
    func_0x00010bf493a0(uVar10,param_2,puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a0 = uVar28;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b8,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar13);
    _objc_release(puVar13);
    _objc_release(uVar28);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar27);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar26);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar24);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar29);
    uVar24 = *(undefined8 *)(param_1 + 0x10);
    puVar1 = param_1;
    func_0x00010c2694e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar24,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010c2694e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ddb10;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar11 = param_1;
    func_0x00010c2694e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_1;
    func_0x00010c0f3c80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0942e0(puVar1);
    puVar15 = puVar12;
    func_0x00010bf493c0(puVar12,param_2,puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_1;
    puStack_d8 = puVar15;
    func_0x00010c2694e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = param_1;
    func_0x00010c0f3c80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0942e0(puVar1);
    puVar8 = puVar17;
    func_0x00010bf493c0(-dVar25,puVar17,param_2,puVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = param_1;
    puStack_d0 = puVar8;
    func_0x00010c2694e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = param_1;
    func_0x00010c0f3c80();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar21;
    func_0x00010bf493a0(puVar21,param_2,puVar23);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar9;
    func_0x00010c2694e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0942c0(puVar1);
    puVar5 = puVar6;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_c0 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d8,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(param_1);
    _objc_release(puVar9);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar8);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12c960(*(undefined8 *)(puVar1 + 0x10));
  uVar24 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar24);
  return;
}


