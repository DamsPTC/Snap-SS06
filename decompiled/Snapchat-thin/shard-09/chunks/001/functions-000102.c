/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069e0500; end: 1069e0533; -[SCMediaDrawerCameraRollHeaderView _viewAlbumsTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e0500(long param_1)

{
  param_1 = param_1 + _DAT_1127555e0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069e0534; end: 1069e0553; -[SCMediaDrawerCameraRollHeaderView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e0534(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127555e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069e0554; end: 1069e0567; -[SCMediaDrawerCameraRollHeaderView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e0554(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127555e0,param_3);
  return;
}



/* Entry: 1069e0568; end: 1069e05a3; -[SCMediaDrawerCameraRollHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e0568(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127555e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127555dc,0);
  return;
}



/* Entry: 1069e05a4; end: 1069e08a7; -[SCMediaDrawerCameraRollTabController initWithDelegate:cameraRollAlbumPickerScopeExposer:filterFactory:grapheneRegistry:videoImporter:imageImporter:previewURLVideoProvider:mediaTranscodingLogger:photoPermissionCoordinator:circumstanceEngine:coreConfigProvider:memoriesExperimentService:applicationLifecycleEvents:userPreferences:downloader:topOffset:containerViewController:fetchLimit:] */

undefined8 *
FUN_1069e05a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_80 = PTR_PTR_1126f42a8;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 0x1d,param_4);
    _objc_retain(param_12);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cfa40;
    _objc_alloc();
    func_0x00010c013080();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xe,param_5);
    _objc_retain(param_17);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_7;
    _objc_release(uVar2);
    puVar1[0x18] = param_1;
    _objc_storeWeak(puVar1 + 0xc,param_19);
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
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
  return puVar1;
}



/* Entry: 1069e08a8; end: 1069e08f3; -[SCMediaDrawerCameraRollTabController dealloc] */

void FUN_1069e08a8(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x68),param_2,param_1);
  puStack_28 = PTR_PTR_1126f42a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1069e08f4; end: 1069e08fb; -[SCMediaDrawerCameraRollTabController itemType] */

undefined8 FUN_1069e08f4(void)

{
  return 0;
}



/* Entry: 1069e08fc; end: 1069e126b; -[SCMediaDrawerCameraRollTabController view] */

void FUN_1069e08fc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 auStack_e0 [4];
  undefined8 auStack_c0 [4];
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(param_1 + 0xe0);
  if (lVar16 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar19 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar19,uVar20,uVar21,uVar22);
    uVar15 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined **)(param_1 + 0xe0) = puVar2;
    _objc_release(uVar15);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0xe0),param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_alloc_init();
    uVar15 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar15);
    func_0x00010c1c82c0(0x4000000000000000,*(undefined8 *)(param_1 + 0x10));
    func_0x00010c1c8300(0x4000000000000000,*(undefined8 *)(param_1 + 0x10));
    dVar18 = 2.0;
    func_0x00010c1f93e0(0,0,0x4000000000000000,0,*(undefined8 *)(param_1 + 0x10));
    func_0x00010c1f7ac0(*(undefined8 *)(param_1 + 0x10),param_2,0);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _objc_release(puVar2);
    dVar18 = (double)(long)((dVar18 + -6.0) * 0.25);
    *(double *)(param_1 + 0x38) = dVar18;
    *(double *)(param_1 + 0x40) = (dVar18 * 4.0) / 3.0;
    func_0x00010c1b6260(*(undefined8 *)(param_1 + 0x10));
    puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x00010c014040(uVar19,uVar20,uVar21,uVar22);
    uVar15 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar15);
    func_0x00010c167680(*(undefined8 *)(param_1 + 8),param_2,1);
    func_0x00010c1d8be0(*(undefined8 *)(param_1 + 8),param_2,0);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 8),param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c2025c0(*(undefined8 *)(param_1 + 8),param_2,0);
    func_0x00010c2026e0(*(undefined8 *)(param_1 + 8),param_2,0);
    func_0x00010c17d4c0(*(undefined8 *)(param_1 + 8),param_2,1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 8),param_2,param_1);
    func_0x00010c189840(*(undefined8 *)(param_1 + 8),param_2,param_1);
    func_0x00010c1738c0(*(undefined8 *)(param_1 + 8),param_2,1);
    func_0x00010c167a20(*(undefined8 *)(param_1 + 8),param_2,1);
    uVar15 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126cf9d8;
    _objc_opt_class(PTR_PTR_1126cf9d8);
    func_0x00010c126000(uVar15,param_2,puVar2,&PTR____CFConstantStringClassReference_110e67318);
    uVar15 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126cfa48;
    _objc_opt_class(PTR_PTR_1126cfa48);
    uVar17 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
    puVar3 = PTR_PTR_1126cfa48;
    _objc_opt_class(PTR_PTR_1126cfa48);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126060(uVar15,param_2,puVar2,uVar17,puVar3);
    _objc_release(puVar3);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0xe0),param_2,*(undefined8 *)(param_1 + 8));
    lVar16 = param_1;
    func_0x00010beb5ae0();
    func_0x00010c219b60(*(undefined8 *)(param_1 + 8),param_2,0);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar15 = *(undefined8 *)(param_1 + 8);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = auStack_c0;
    dVar18 = *(double *)(param_1 + 0xc0) + 48.0;
    if ((int)lVar16 == 0) {
      puVar1 = auStack_e0;
      dVar18 = *(double *)(param_1 + 0xc0);
    }
    uVar10 = uVar15;
    func_0x00010bf493c0(dVar18,uVar15,param_2,uVar17);
    _objc_retainAutoreleasedReturnValue();
    *puVar1 = uVar10;
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c08de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar4;
    func_0x00010bf493a0(uVar4,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1[1] = uVar11;
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c2793a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    func_0x00010bf493a0(uVar6,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar1[2] = uVar12;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010bf1ff80(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar8;
    func_0x00010bf493a0(uVar8,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar1[3] = uVar13;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar1,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar13);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar12);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar10);
    _objc_release(uVar17);
    _objc_release(uVar15);
    func_0x00010c173660(0x4042000000000000,param_1);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar2;
    _objc_release(uVar15);
    func_0x00010bef9040(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x18));
    uVar17 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar17;
    func_0x00010c079f80();
    _objc_release(uVar17);
    if ((int)uVar15 == 0) {
      lVar16 = param_1;
      func_0x00010beb5ae0();
      if ((int)lVar16 != 0) {
        puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_opt_new();
        uVar15 = *(undefined8 *)(param_1 + 0x50);
        *(undefined **)(param_1 + 0x50) = puVar2;
        _objc_release(uVar15);
        func_0x00010befbb60(*(undefined8 *)(param_1 + 0xe0),param_2,*(undefined8 *)(param_1 + 0x50))
        ;
        func_0x00010c219b60(*(undefined8 *)(param_1 + 0x50),param_2,0);
        puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uVar21 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar22 = *(undefined8 *)(param_1 + 0xe0);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar21;
        func_0x00010bf493c0(*(undefined8 *)(param_1 + 0xc0),uVar21,param_2,uVar22);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + 0x50);
        uStack_118 = uVar15;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + 0xe0);
        func_0x00010c08de00(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar10;
        func_0x00010bf493a0(uVar10,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = *(undefined8 *)(param_1 + 0x50);
        uStack_110 = uVar17;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_1 + 0xe0);
        func_0x00010c2793a0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar12;
        func_0x00010bf493a0(uVar12,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x50);
        uStack_108 = uVar20;
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar4;
        func_0x00010bf49420(0x4048000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_100 = uVar19;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_118,4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar2,param_2,puVar3);
        _objc_release(puVar3);
        _objc_release(uVar19);
        _objc_release(uVar4);
        _objc_release(uVar20);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar17);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar15);
        _objc_release(uVar22);
        _objc_release(uVar21);
        func_0x00010be04260(param_1,param_2,1);
      }
    }
    else {
      puVar2 = PTR_PTR_1126cfa50;
      _objc_alloc();
      func_0x00010c014920(uVar19,uVar20,uVar21,uVar22);
      uVar15 = *(undefined8 *)(param_1 + 0x48);
      *(undefined **)(param_1 + 0x48) = puVar2;
      _objc_release(uVar15);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x48),param_2,param_1);
      func_0x00010befbb60(*(undefined8 *)(param_1 + 0xe0),param_2,*(undefined8 *)(param_1 + 0x48));
      func_0x00010c219b60(*(undefined8 *)(param_1 + 0x48),param_2,0);
      uVar17 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(param_1 + 0xe0);
      func_0x00010c274200(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar17;
      func_0x00010bf493c0(0,uVar17,param_2,uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = uVar15;
      _objc_release(uVar21);
      _objc_release(uVar19);
      _objc_release(uVar17);
      func_0x00010c162480(*(undefined8 *)(param_1 + 0x58),param_2,1);
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar21 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = *(undefined8 *)(param_1 + 0xe0);
      func_0x00010bf34860(uVar22);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar21;
      func_0x00010bf493a0(uVar21,param_2,uVar22);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x48);
      uStack_f8 = uVar15;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0699c0(*(undefined8 *)(param_1 + 0x48));
      uVar17 = uVar10;
      func_0x00010bf49420();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x48);
      uStack_f0 = uVar17;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0699c0(*(undefined8 *)(param_1 + 0x48));
      uVar19 = uVar11;
      func_0x00010bf49420(uVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_e8 = uVar19;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_f8,3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(uVar19);
      _objc_release(uVar11);
      _objc_release(uVar17);
      _objc_release(uVar10);
      _objc_release(uVar15);
      _objc_release(uVar22);
      _objc_release(uVar21);
    }
    func_0x00010bef9980(*(undefined8 *)(param_1 + 0x68),param_2,param_1);
    lVar16 = param_1 + 0xe8;
    _objc_loadWeakRetained(lVar16);
    func_0x00010c267a80();
    _objc_release(lVar16);
    lVar16 = *(long *)(param_1 + 0xe0);
  }
  lVar14 = lVar16;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    lVar16 = *(long *)(lVar14 + 8);
    _objc_retain(lVar16);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar16);
  return;
}



/* Entry: 1069e126c; end: 1069e1293; -[SCMediaDrawerCameraRollTabController scrollView] */

void FUN_1069e126c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069e1294; end: 1069e14cb; -[SCMediaDrawerCameraRollTabController itemsInScrollViewRect:] */

undefined8
FUN_1069e1294(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_4 + 8);
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08c940(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar12 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60(lVar4,param_5,&uStack_150,auStack_108,0x10);
  if (lVar3 != 0) {
    lVar10 = *plStack_140;
    do {
      lVar11 = 0;
      do {
        if (*plStack_140 != lVar10) {
          _objc_enumerationMutation(lVar4);
        }
        uVar9 = *(ulong *)(lStack_148 + lVar11 * 8);
        uVar5 = uVar9;
        func_0x00010c1345a0();
        if (uVar5 == 0) {
          uVar5 = uVar9;
          func_0x00010bfb68e0();
          iVar1 = (int)uVar5;
          _CGRectIntersectsRect();
          if (iVar1 != 0) {
            func_0x00010bfecf20();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar9;
            func_0x00010c0840e0();
            _objc_release(uVar9);
            if (-1 < (long)uVar5) {
              uVar9 = *(ulong *)(param_4 + 0x30);
              func_0x00010bf529e0();
              if (uVar5 < uVar9) {
                uVar6 = *(undefined8 *)(param_4 + 0x30);
                func_0x00010c0dfd40(uVar6,param_5,uVar5);
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar6;
                func_0x00010c0fa940();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar2,param_5,uVar7);
                _objc_release(uVar7);
                _objc_release(uVar6);
              }
            }
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar4;
      func_0x00010bf52a60(lVar4,param_5,&uStack_150,auStack_108,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar4);
  puVar8 = puVar2;
  func_0x00010bf51e00();
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return uVar12;
  }
  ___stack_chk_fail();
  puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar8);
  func_0x00010bf20c00(*(undefined8 *)(puVar2 + 8));
  func_0x00010bf4c7c0(*(undefined8 *)(puVar2 + 8));
  func_0x00010bf4c7c0(*(undefined8 *)(puVar2 + 8));
  func_0x00010bf20c00(*(undefined8 *)(puVar2 + 8));
  return 0;
}



/* Entry: 1069e14cc; end: 1069e1563; -[SCMediaDrawerCameraRollTabController _placeholderFrameInCollectionView] */

undefined8 FUN_1069e14cc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 8));
  func_0x00010bf4c7c0(*(undefined8 *)(param_1 + 8));
  func_0x00010bf4c7c0(*(undefined8 *)(param_1 + 8));
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 8));
  return 0;
}



/* Entry: 1069e1564; end: 1069e156b; -[SCMediaDrawerCameraRollTabController animateSelectingDrawerItem:] */

void FUN_1069e1564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf03110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_animateSelectingDrawerItem_updat_11259e5e8,param_3,0);
  return;
}



/* Entry: 1069e156c; end: 1069e1573; -[SCMediaDrawerCameraRollTabController restoreSelectionForDrawerItem:] */

void FUN_1069e156c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf03110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_animateSelectingDrawerItem_updat_11259e5e8,param_3,1);
  return;
}



/* Entry: 1069e1574; end: 1069e171f; -[SCMediaDrawerCameraRollTabController animateSelectingDrawerItem:updateCollectionViewState:] */

void FUN_1069e1574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7,int param_8)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126cfa58;
  _objc_opt_class(PTR_PTR_1126cfa58);
  uVar3 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar2);
  uVar1 = param_7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar4 = *(long *)(param_5 + 0x30);
  func_0x00010bfecde0();
  if ((lVar4 != 0x7fffffffffffffff) ||
     (lVar4 = param_5, func_0x00010be16a00(), lVar4 != 0x7fffffffffffffff)) {
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    if (param_8 != 0) {
      func_0x00010c158b60(*(undefined8 *)(param_5 + 8));
    }
    uVar5 = *(ulong *)(param_5 + 8);
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5 + 0xe8;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bfc4fa0();
    func_0x00010bf030c0(uVar5);
    _objc_release(lVar4);
    func_0x00010c217520(0,param_5);
    uVar6 = 0x404b800000000000;
    func_0x00010c173660(0x404b800000000000,param_5);
    func_0x00010bf20c00(*(undefined8 *)(param_5 + 8));
    uVar3 = uVar5;
    uVar7 = uVar6;
    uVar8 = param_2;
    uVar9 = param_3;
    uVar10 = param_4;
    func_0x00010bfb68e0();
    _CGRectContainsRect(uVar6,param_2,param_3,param_4,uVar7,uVar8,uVar9,uVar10);
    if ((uVar3 & 1) == 0) {
      func_0x00010c1525a0(*(undefined8 *)(param_5 + 8));
    }
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1069e1720; end: 1069e19a3; -[SCMediaDrawerCameraRollTabController animateDeselectDrawerItem:itemsIdWithUpdatedIndex:isDeselectingLastItem:] */

void FUN_1069e1720(long param_1,undefined8 param_2,ulong param_3,long param_4,int param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126cfa58;
  _objc_opt_class(PTR_PTR_1126cfa58);
  uVar10 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar10 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010bfecde0();
  if (lVar3 == 0x7fffffffffffffff) {
    func_0x00010be16a00(param_1);
  }
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e840(*(undefined8 *)(param_1 + 8));
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf030c0();
  if (param_5 != 0) {
    func_0x00010c173660(0x4042000000000000,param_1);
  }
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uVar10 = 0;
    do {
      uVar5 = *(ulong *)(param_1 + 0x30);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126cfa58;
      _objc_opt_class(PTR_PTR_1126cfa58);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar9 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar9 = 0;
      }
      _objc_retain(uVar9);
      _objc_release(uVar5);
      if (uVar9 != 0) {
        uVar7 = uVar5;
        func_0x00010c0844e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar7);
        if (lVar3 != 0) {
          puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(param_1 + 8);
          func_0x00010bf33b60(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0844e0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_4;
          func_0x00010c0e00e0(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067ec0();
          func_0x00010bf030c0(uVar8);
          _objc_release(lVar3);
          _objc_release(uVar5);
          _objc_release(uVar8);
          _objc_release(puVar6);
        }
      }
      _objc_release(uVar9);
      uVar10 = uVar10 + 1;
      uVar9 = *(ulong *)(param_1 + 0x30);
      func_0x00010bf529e0();
    } while (uVar10 < uVar9);
  }
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069e19a4; end: 1069e1af3; -[SCMediaDrawerCameraRollTabController animateDeselectAll] */

void FUN_1069e19a4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  iVar6 = (int)&uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfed180();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(undefined8 *)(param_1 + 8);
        func_0x00010bf33b60(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf030c0();
        func_0x00010c1fadc0(uVar3);
        func_0x00010bf6e840(*(undefined8 *)(param_1 + 8));
        _objc_release(uVar3);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      iVar6 = (int)&uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  uVar3 = 0x4042000000000000;
  func_0x00010c173660(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = uVar3;
  func_0x00010bf4cdc0(*(undefined8 *)(lVar1 + 8));
  uVar4 = *(undefined8 *)(lVar1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c079f80();
  _objc_release(uVar4);
  if ((int)uVar5 != 0) {
    func_0x00010c0699c0(*(undefined8 *)(lVar1 + 0x48));
    uVar9 = 0;
  }
  if (iVar6 != 0) {
    func_0x00010bf03440(0x3fc3333340000000,0,PTR__OBJC_CLASS___UIView_1126aec20);
    return;
  }
  func_0x00010c1822e0(uVar9,*(undefined8 *)(lVar1 + 8));
  func_0x00010c217520(uVar3,lVar1);
  func_0x00010bed92c0(lVar1);
  func_0x00010bed92e0(lVar1);
  func_0x00010bedd180(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed2df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__updateAlbumPickerViewIfExists_112592520);
  return;
}



/* Entry: 1069e1af4; end: 1069e1c3b; -[SCMediaDrawerCameraRollTabController updateScrollViewWithTopMargin:deltaContentOffset:animated:] */

void FUN_1069e1af4(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_1;
  func_0x00010bf4cdc0(*(undefined8 *)(param_2 + 8));
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c079f80();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c0699c0(*(undefined8 *)(param_2 + 0x48));
    uVar3 = 0;
  }
  if (param_4 != 0) {
    func_0x00010bf03440(0x3fc3333340000000,0,PTR__OBJC_CLASS___UIView_1126aec20);
    return;
  }
  func_0x00010c1822e0(uVar3,*(undefined8 *)(param_2 + 8));
  func_0x00010c217520(param_1,param_2);
  func_0x00010bed92c0(param_2);
  func_0x00010bed92e0(param_2);
  func_0x00010bedd180(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bed2df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateAlbumPickerViewIfExists_112592520);
  return;
}



/* Entry: 1069e1c3c; end: 1069e1c8f;  */

void FUN_1069e1c3c(long param_1)

{
  func_0x00010c1822e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  func_0x00010c217520(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
  func_0x00010bed92c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bed92e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bedd180(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bed2df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateAlbumPickerViewIfExists_112592520);
  return;
}



/* Entry: 1069e1c90; end: 1069e1cd7; -[SCMediaDrawerCameraRollTabController scrollToTopWithTopMargin:] */

void FUN_1069e1c90(double param_1,long param_2)

{
  func_0x00010c1822e0(0,-param_1,*(undefined8 *)(param_2 + 8));
  func_0x00010c217520(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bedd190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updatePlaceholderFrameIfExists_112594e08);
  return;
}



/* Entry: 1069e1cd8; end: 1069e1da3; -[SCMediaDrawerCameraRollTabController scrollToDrawerItem:] */

void FUN_1069e1cd8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cfa58;
  _objc_opt_class(PTR_PTR_1126cfa58);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar4 = *(long *)(param_1 + 0x30);
  func_0x00010bfecde0();
  if ((lVar4 != 0x7fffffffffffffff) ||
     (lVar4 = param_1, func_0x00010be16a00(), lVar4 != 0x7fffffffffffffff)) {
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1525a0(*(undefined8 *)(param_1 + 8));
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069e1da4; end: 1069e1e1f; -[SCMediaDrawerCameraRollTabController scrollToPercent:] */

void FUN_1069e1da4(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  func_0x00010bf4d5e0(*(undefined8 *)(param_5 + 8));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 8));
  func_0x00010c2746e0(param_5);
  dVar2 = dVar1 + (param_2 - param_4);
  func_0x00010bf20340(param_5);
  dVar2 = dVar1 + dVar2;
  func_0x00010c2746e0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,(double)(float)(int)(param_1 * dVar2) - dVar1,*(undefined8 *)(param_5 + 8),
             PTR_s_setContentOffset__11263e2d8);
  return;
}



/* Entry: 1069e1e20; end: 1069e1f1f; -[SCMediaDrawerCameraRollTabController tabCellWillDisplay] */

void FUN_1069e1e20(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar1 == (undefined *)0x0) {
    _objc_initWeak(auStack_28,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c134a40(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar1 != (undefined *)0x3) {
                    /* WARNING: Could not recover jumptable at 0x00010beba570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showPlaceholder__11258c300,2);
      return;
    }
  }
  return;
}



/* Entry: 1069e1f20; end: 1069e1fcf;  */

void FUN_1069e1f20(long param_1,int param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  if (param_2 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1069e1f9c;
    puStack_30 = &UNK_1108434b0;
    _objc_copyWeak(auStack_28,param_1 + 0x20);
    func_0x000100162d98("APPSTORE",&puStack_48);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1069e1fd0; end: 1069e1fd3; -[SCMediaDrawerCameraRollTabController didFocusOnTab] */

void FUN_1069e1fd0(void)

{
  return;
}



/* Entry: 1069e1fd4; end: 1069e20e3; -[SCMediaDrawerCameraRollTabController collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

void FUN_1069e1fd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010beb6860();
  if (((int)lVar1 == 0) ||
     (uVar4 = param_4,
     func_0x00010c0720c0(param_4,param_2,
                         *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00),
     (int)uVar4 == 0)) {
    uVar4 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126cfa48;
    _objc_opt_class(PTR_PTR_1126cfa48);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf6e120(param_3,param_2,param_4,puVar2,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c18b5e0(uVar4,param_2,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c29bf80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28b1a0(uVar4,param_2,uVar3);
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1069e20e4; end: 1069e20eb; -[SCMediaDrawerCameraRollTabController collectionView:numberOfItemsInSection:] */

void FUN_1069e20e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1069e20ec; end: 1069e221f; -[SCMediaDrawerCameraRollTabController collectionView:cellForItemAtIndexPath:] */

void FUN_1069e20ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c142240(param_4);
  func_0x00010c0dfd40(uVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e67318,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c18b5e0(uVar1,param_2,param_1);
  func_0x00010c1c4040(uVar1,param_2,uVar4,1);
  lVar2 = param_1 + 0xe8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfc4fa0();
  _objc_release(lVar2);
  if (lVar3 != 0x7fffffffffffffff) {
    func_0x00010c1fadc0(uVar1,param_2,1);
    func_0x00010c158b60(*(undefined8 *)(param_1 + 8),param_2,param_4,0,0);
    param_1 = param_1 + 0xe8;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bfc4fa0();
    func_0x00010bf030c0(uVar1,param_2,lVar2);
    _objc_release(param_1);
  }
  _objc_release(uVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069e2220; end: 1069e228f; -[SCMediaDrawerCameraRollTabController collectionView:layout:referenceSizeForHeaderInSection:] */

undefined1  [16]
FUN_1069e2220(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  _objc_retain(param_6);
  func_0x00010beb6860();
  if (param_4 == 0) {
    param_3 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar1 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    func_0x00010bf20c00(param_6);
    uVar1 = 0x4046000000000000;
  }
  _objc_release(param_6);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 1069e2290; end: 1069e238b; -[SCMediaDrawerCameraRollTabController collectionView:didSelectItemAtIndexPath:] */

void FUN_1069e2290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf33b60(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar3 = param_1 + 0xe8;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010c267760();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      param_1 = param_1 + 0xe8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c267880();
      _objc_release(param_1);
      lVar5 = lVar1;
      func_0x00010c08c0e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c227960(0x7fefffffffffffff);
      _objc_release(lVar5);
      goto LAB_1069e2364;
    }
  }
  func_0x00010bf6e840(*(undefined8 *)(param_1 + 8),param_2,param_4,0);
LAB_1069e2364:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1069e238c; end: 1069e2427; -[SCMediaDrawerCameraRollTabController collectionView:didDeselectItemAtIndexPath:] */

void FUN_1069e238c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf33b60(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227960(0);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c0c3fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0xe8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c267800();
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069e2428; end: 1069e247b; -[SCMediaDrawerCameraRollTabController scrollViewWillBeginDragging:] */

void FUN_1069e2428(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0xe8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c267960();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069e247c; end: 1069e250b; -[SCMediaDrawerCameraRollTabController scrollViewDidScroll:] */

void FUN_1069e247c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0xe8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c267860();
  _objc_release(lVar1);
  func_0x00010bed92e0(param_1);
  lVar1 = *(long *)(param_1 + 8);
  _objc_release(param_3);
  if ((param_3 == lVar1) && (*(char *)(param_1 + 200) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),lVar1,
               PTR_s_setContentOffset__11263e2d8);
    return;
  }
  return;
}



/* Entry: 1069e250c; end: 1069e257f; -[SCMediaDrawerCameraRollTabController scrollViewDidEndDragging:willDecelerate:] */

void FUN_1069e250c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0xe8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c267820();
  _objc_release(param_3);
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + 200) = 0;
  uVar2 = *(undefined8 *)PTR__CGPointZero_110347540;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  return;
}



/* Entry: 1069e2580; end: 1069e25b3; -[SCMediaDrawerCameraRollTabController scrollViewDidEndDecelerating:] */

void FUN_1069e2580(long param_1)

{
  param_1 = param_1 + 0xe8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c267a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069e25b4; end: 1069e25cf; -[SCMediaDrawerCameraRollTabController chatMediaDrawerShouldRemoveOversizedDataSourceMedia:] */

undefined8 FUN_1069e25b4(long param_1)

{
  func_0x00010c12d100(*(undefined8 *)(param_1 + 0x68));
  return 1;
}



/* Entry: 1069e25d0; end: 1069e2607; -[SCMediaDrawerCameraRollTabController newSendingLimitDurationSeconds] */

double FUN_1069e25d0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110e67338,0,0);
  uVar1 = (uint)uVar2;
  if ((int)uVar1 < 0xb5) {
    uVar1 = 0xb4;
  }
  return (double)uVar1;
}



/* Entry: 1069e2608; end: 1069e26af; -[SCMediaDrawerCameraRollTabController didTapGrantFullAccess] */

void FUN_1069e2608(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c079f80();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c10cde0(uVar2);
    _objc_release(lVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bfb04f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126b24e0,PTR_s_fireGrantFullAccessTappedWithCon_1125c9ae0,1,
               *(undefined8 *)(param_1 + 0xb8));
    return;
  }
  return;
}



/* Entry: 1069e26b0; end: 1069e26b3; -[SCMediaDrawerCameraRollTabController mediaListDidChangeWithOnlyReloadedIndexPathes:] */

void FUN_1069e26b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8a830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadDataAndShowPlaceholderIfN_1125803a8);
  return;
}



/* Entry: 1069e26b4; end: 1069e27bf; -[SCMediaDrawerCameraRollTabController _handleLongPress:] */

void FUN_1069e26b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  func_0x00010c09ef00(param_5,param_4,*(undefined8 *)(param_3 + 8));
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 == 1) {
    lVar1 = *(long *)(param_3 + 8);
    func_0x00010bfed040(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_3 + 8);
      func_0x00010bf33b60(uVar2,param_4,lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3 + 0xe8;
      _objc_loadWeakRetained(lVar3);
      uVar4 = uVar2;
      func_0x00010c0c3fe0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c267840(lVar3,param_4,param_3,uVar4);
      _objc_release(uVar4);
      _objc_release(lVar3);
      _objc_release(uVar2);
    }
    _objc_release(lVar1);
  }
  else {
    lVar1 = param_5;
    func_0x00010c252440();
    if (lVar1 != 4) {
      func_0x00010c252440(param_5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1069e27c0; end: 1069e294f; -[SCMediaDrawerCameraRollTabController _reloadDataAndShowPlaceholderIfNeededWithOnlyReloadedItemsAtIndexPathes:] */

void FUN_1069e27c0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c0c55c0(uVar2,param_2,*(undefined8 *)(param_1 + 0x88));
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar7);
  lVar5 = param_1 + 0xe8;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c267900();
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  else {
    lVar5 = param_3;
    func_0x00010bf529e0();
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c0deec0(lVar3,param_2,0);
    lVar4 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0();
    uVar2 = *(undefined8 *)(param_1 + 8);
    if (lVar3 + lVar5 == lVar4) {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_1069e2950;
      puStack_48 = &UNK_110841f80;
      lStack_40 = param_1;
      _objc_retain(param_3);
      lStack_38 = param_3;
      func_0x00010c0f8420(uVar2,param_2,&puStack_60,&PTR___NSConcreteGlobalBlock_110952920);
      _objc_release(lStack_38);
      goto LAB_1069e28d0;
    }
  }
  func_0x00010c128b60(uVar2);
LAB_1069e28d0:
  lVar5 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    puVar6 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar6 == (undefined *)0x3) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x68);
      func_0x00010bf76860();
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 2;
    }
    func_0x00010beba560(param_1,param_2,uVar2);
  }
  else {
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069e2950; end: 1069e295f;  */

void FUN_1069e2950(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_insertItemsAtIndexPaths__1125f74a0
             ,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069e2960; end: 1069e2c27; -[SCMediaDrawerCameraRollTabController _showPlaceholder:] */

void FUN_1069e2960(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    *(long *)(param_1 + 0x28) = param_3;
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010be74380(param_1);
    func_0x00010c013de0();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar3;
    _objc_release(uVar6);
    func_0x00010c17d4c0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010befbb60(*(undefined8 *)(param_1 + 8));
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    if (*(long *)(param_1 + 0x28) == param_3) goto LAB_1069e2bf0;
    *(long *)(param_1 + 0x28) = param_3;
  }
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010c12c960(*(undefined8 *)(lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (param_3 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
    _objc_alloc();
    func_0x00010bff0f20();
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c24dbc0(puVar3);
  }
  else {
    if (param_3 == 2) {
      puVar3 = PTR_PTR_1126cfa68;
      _objc_alloc();
      func_0x00010c00e460();
      func_0x00010c18b5e0();
      func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      if (param_3 != 1) goto LAB_1069e2bf0;
      puVar3 = PTR_PTR_1126cfa60;
      _objc_alloc_init();
      func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20));
    }
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release();
LAB_1069e2bf0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069e2c28; end: 1069e2e1b;  */

void FUN_1069e2c28(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069e2e1c; end: 1069e2e4b; -[SCMediaDrawerCameraRollTabController _updatePlaceholderFrameIfExists] */

void FUN_1069e2e1c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010be74380();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setFrame__112645658);
    return;
  }
  return;
}



/* Entry: 1069e2e4c; end: 1069e2e7f; -[SCMediaDrawerCameraRollTabController didPressAllow] */

void FUN_1069e2e4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e99c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069e2e80; end: 1069e2e83; -[SCMediaDrawerCameraRollTabController setCenterCell:] */

void FUN_1069e2e80(void)

{
  return;
}



/* Entry: 1069e2e84; end: 1069e2ecf; -[SCMediaDrawerCameraRollTabController setTopMargin:] */

void FUN_1069e2e84(double param_1,double param_2,undefined8 param_3,long param_4)

{
  func_0x00010c0699c0(*(undefined8 *)(param_4 + 0x48));
  func_0x00010bf4c7c0(*(undefined8 *)(param_4 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c181f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 + param_2,0,param_3,0,*(undefined8 *)(param_4 + 8),
             PTR_s_setContentInset__11263e200);
  return;
}



/* Entry: 1069e2ed0; end: 1069e2ed7; -[SCMediaDrawerCameraRollTabController topMargin] */

void FUN_1069e2ed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4c7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_contentInset_1125b0b98);
  return;
}



/* Entry: 1069e2ed8; end: 1069e2f17; -[SCMediaDrawerCameraRollTabController setBottomMargin:] */

void FUN_1069e2ed8(long param_1)

{
  func_0x00010bf4c7c0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c181f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setContentInset__11263e200);
  return;
}



/* Entry: 1069e2f18; end: 1069e2f33; -[SCMediaDrawerCameraRollTabController bottomMargin] */

undefined8 FUN_1069e2f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010bf4c7c0(*(undefined8 *)(param_4 + 8));
  return param_3;
}



/* Entry: 1069e2f34; end: 1069e3037; -[SCMediaDrawerCameraRollTabController _animate:completionBlock:] */

void FUN_1069e2f34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_3 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1069e3038;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_3);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x1069e3044;
    puStack_78 = &UNK_110842508;
    lStack_48 = param_3;
    _objc_retain(param_4);
    uStack_70 = param_4;
    func_0x00010bf03460(0x3fd3333333333333,0,0x3febd70a3d70a3d7,0x3fe999999999999a,puVar2,param_2,
                        0x82,&puStack_68,&puStack_90);
    _objc_release(uStack_70);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069e3038; end: 1069e3057;  */

void FUN_1069e3038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001069e3040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1069e3058; end: 1069e30c7; -[SCMediaDrawerCameraRollTabController _updateHeaderViewCoveredHeightIfNeeded] */

void FUN_1069e3058(double param_1,double param_2,long param_3)

{
  double dVar1;
  
  if (*(long *)(param_3 + 0x48) != 0) {
    func_0x00010c0699c0();
    dVar1 = param_2;
    func_0x00010bf4cdc0(*(undefined8 *)(param_3 + 8));
    func_0x00010c2746e0(param_3);
    dVar1 = dVar1 + param_1;
    if (dVar1 <= 0.0) {
      dVar1 = 0.0;
    }
    if (dVar1 <= param_2) {
      param_2 = dVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c184c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,*(undefined8 *)(param_3 + 0x48),PTR_s_setCoveredHeight__11263ed40);
    return;
  }
  return;
}



/* Entry: 1069e30c8; end: 1069e3193; -[SCMediaDrawerCameraRollTabController _updateHeaderViewConstraintsIfNeeded] */

/* WARNING: Possible PIC construction at 0x0001069e30fc: Changing call to branch */

void FUN_1069e30c8(double param_1,double param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_3 + 0x48) != 0) {
    iVar1 = (int)*(undefined8 *)(param_3 + 0x58);
    func_0x00010c06b700();
    if (iVar1 == 0) {
      uVar3 = *(undefined8 *)(param_3 + 0x48);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_3 + 0xe0);
      func_0x00010c274200(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2746e0(param_3);
      func_0x00010c0699c0(*(undefined8 *)(param_3 + 0x48));
      uVar2 = uVar3;
      func_0x00010bf493c0(param_1 - param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_3 + 0x58);
      *(undefined8 *)(param_3 + 0x58) = uVar2;
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar2 = *(undefined8 *)(param_3 + 0x58);
    }
    else {
      uVar2 = *(undefined8 *)(param_3 + 0x58);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setActive__112636340,iVar1 == 0);
    return;
  }
  return;
}



/* Entry: 1069e3194; end: 1069e31cb; -[SCMediaDrawerCameraRollTabController _updateAlbumPickerViewIfExists] */

void FUN_1069e3194(long param_1)

{
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x00010c2746e0();
    func_0x00010c181140(*(undefined8 *)(param_1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0xe0),PTR_s_layoutIfNeeded_112600d80);
    return;
  }
  return;
}



/* Entry: 1069e31cc; end: 1069e32eb; -[SCMediaDrawerCameraRollTabController _displayCameraRollAlbumViewWithPillsUIEnabled:] */

void FUN_1069e31cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar3 = PTR_PTR_1126c66e8;
  _objc_alloc(PTR_PTR_1126c66e8);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c09da80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041f00(puVar3,param_2,param_1,param_1,puVar4,uVar5,1,param_3,0x101);
  _objc_release(uVar5);
  _objc_release(puVar4);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1069e32ec; end: 1069e32f3; -[SCMediaDrawerCameraRollTabController _shouldShowViewAlbumsSectionHeader] */

undefined8 FUN_1069e32ec(void)

{
  return 0;
}



/* Entry: 1069e32f4; end: 1069e335f; -[SCMediaDrawerCameraRollTabController _shouldShowAlbumPillView] */

undefined8 FUN_1069e32f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c079f60();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 1069e3360; end: 1069e350b; -[SCMediaDrawerCameraRollTabController _findItemIndexInDataSource:] */

ulong FUN_1069e3360(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cfa58;
  _objc_opt_class(PTR_PTR_1126cfa58);
  uVar11 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar11 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      uVar11 = 0;
      do {
        uVar4 = *(ulong *)(param_1 + 0x30);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126cfa58;
        _objc_opt_class(PTR_PTR_1126cfa58);
        uVar5 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar2);
        uVar10 = uVar4;
        if ((uVar5 & 1) == 0) {
          uVar10 = 0;
        }
        _objc_retain(uVar10);
        _objc_release(uVar4);
        if (uVar10 != 0) {
          uVar5 = uVar4;
          func_0x00010c0fa940();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_3;
          func_0x00010c0fa940(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar5;
          func_0x00010c09da80();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar6;
          func_0x00010c09da80(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar7;
          func_0x00010c0720c0();
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          if ((int)uVar9 != 0) {
            _objc_release(uVar4);
            goto LAB_1069e34d8;
          }
        }
        _objc_release(uVar10);
        uVar11 = uVar11 + 1;
        uVar10 = *(ulong *)(param_1 + 0x30);
        func_0x00010bf529e0();
      } while (uVar11 < uVar10);
      uVar11 = 0x7fffffffffffffff;
      goto LAB_1069e34d8;
    }
  }
  uVar11 = 0x7fffffffffffffff;
LAB_1069e34d8:
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar11;
}



/* Entry: 1069e350c; end: 1069e3513; -[SCMediaDrawerCameraRollTabController didTapViewAlbumsButton] */

void FUN_1069e350c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be04270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayCameraRollAlbumViewWithP_11255ea38,0)
  ;
  return;
}



/* Entry: 1069e3514; end: 1069e35b7; -[SCMediaDrawerCameraRollTabController cameraRollAlbumPickerViewWillDimiss:] */

void FUN_1069e3514(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(long *)(param_1 + 0x88) = param_3;
    _objc_release(uVar1);
    func_0x00010bfa8640(*(undefined8 *)(param_1 + 0x68),param_2,param_3);
  }
  lVar2 = param_1 + 0x70;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    param_1 = param_1 + 0x70;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069e35b8; end: 1069e361f; -[SCMediaDrawerCameraRollTabController didSelectCameraRollAlbumPill:] */

void FUN_1069e35b8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010c182300(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),*(undefined8 *)(param_1 + 8)
                        ,param_2,1);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(long *)(param_1 + 0x88) = param_3;
    _objc_release(uVar1);
    func_0x00010bfa8640(*(undefined8 *)(param_1 + 0x68),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069e3620; end: 1069e364b; -[SCMediaDrawerCameraRollTabController willAlbumPillsViewBeginScrolling] */

void FUN_1069e3620(long param_1)

{
  param_1 = param_1 + 0xe8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fbd80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069e364c; end: 1069e3677; -[SCMediaDrawerCameraRollTabController didAlbumPillsViewFinishScrolling] */

void FUN_1069e364c(long param_1)

{
  param_1 = param_1 + 0xe8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fbd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069e3678; end: 1069e367b; -[SCMediaDrawerCameraRollTabController showAlbumPicker] */

void FUN_1069e3678(void)

{
  return;
}



/* Entry: 1069e367c; end: 1069e377b; -[SCMediaDrawerCameraRollTabController attachUI:] */

void FUN_1069e367c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = param_3;
    _objc_release(uVar1);
    lVar2 = param_1;
    func_0x00010beb5ae0();
    if ((int)lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x78);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0xe0);
      func_0x00010c274200(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2746e0(param_1);
      uVar5 = uVar1;
      func_0x00010bf493c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = uVar5;
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar1);
      _objc_release(uVar3);
      FUN_106d02708(0x404e000000000000,*(undefined8 *)(param_1 + 0xe0),
                    *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
    }
    else {
      FUN_106d02ad0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x78));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069e377c; end: 1069e37f7; -[SCMediaDrawerCameraRollTabController detachUI:] */

void FUN_1069e377c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069e37f8; end: 1069e380f; -[SCMediaDrawerCameraRollTabController delegate] */

void FUN_1069e37f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069e3810; end: 1069e381b; -[SCMediaDrawerCameraRollTabController setDelegate:] */

void FUN_1069e3810(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xe8,param_3);
  return;
}



/* Entry: 1069e381c; end: 1069e392f; -[SCMediaDrawerCameraRollTabController .cxx_destruct] */

void FUN_1069e381c(long param_1)

{
  _objc_destroyWeak(param_1 + 0xe8);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069e3930; end: 1069e3aaf; -[SCMediaDrawerGalleryTabController initWithDelegate:cloudSync:memoriesMergedDataSource:memoriesEntryThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:memoriesExperimentService:topOffset:] */

undefined1 *
FUN_1069e3930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f42b0;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x80),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_9;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x58) = param_1;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1069e3ab0; end: 1069e3ab7; -[SCMediaDrawerGalleryTabController itemType] */

undefined8 FUN_1069e3ab0(void)

{
  return 1;
}



/* Entry: 1069e3ab8; end: 1069e400b; -[SCMediaDrawerGalleryTabController view] */

void FUN_1069e3ab8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 0x78);
  if (lVar13 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar15 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
    uVar12 = *(undefined8 *)(param_1 + 0x78);
    *(undefined **)(param_1 + 0x78) = puVar1;
    _objc_release(uVar12);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x78),param_2,puVar1);
    _objc_release(puVar1);
    puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_alloc_init();
    func_0x00010c1c82c0(0x4000000000000000);
    func_0x00010c1c8300(0x4000000000000000,puVar2);
    dVar14 = 2.0;
    func_0x00010c1f93e0(0x4000000000000000,0,0x4000000000000000,0,puVar2);
    func_0x00010c1f7ac0(puVar2,param_2,0);
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _objc_release(puVar1);
    dVar14 = (double)(long)((dVar14 + -6.0) * 0.25);
    *(double *)(param_1 + 0x20) = dVar14;
    *(double *)(param_1 + 0x28) = (dVar14 * 4.0) / 3.0;
    func_0x00010c1b6260(puVar2);
    puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x00010c014040(uVar15,uVar16,uVar17,uVar18);
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar12);
    func_0x00010c167680(*(undefined8 *)(param_1 + 0x10),param_2,1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c2025c0(*(undefined8 *)(param_1 + 0x10),param_2,0);
    func_0x00010c2026e0(*(undefined8 *)(param_1 + 0x10),param_2,0);
    func_0x00010c17d4c0(*(undefined8 *)(param_1 + 0x10),param_2,1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
    func_0x00010c189840(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
    func_0x00010c1738c0(*(undefined8 *)(param_1 + 0x10),param_2,1);
    func_0x00010c167a20(*(undefined8 *)(param_1 + 0x10),param_2,1);
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    puVar1 = PTR_PTR_1126cfa70;
    _objc_opt_class(PTR_PTR_1126cfa70);
    func_0x00010c126000(uVar12,param_2,puVar1,&PTR____CFConstantStringClassReference_110e67598);
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    puVar1 = PTR_PTR_1126cfa78;
    _objc_opt_class(PTR_PTR_1126cfa78);
    func_0x00010c126000(uVar12,param_2,puVar1,&PTR____CFConstantStringClassReference_110e87a58);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x78),param_2,*(undefined8 *)(param_1 + 0x10));
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0x10),param_2,0);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar18 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar18;
    func_0x00010bf493c0(*(undefined8 *)(param_1 + 0x58),uVar18,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uStack_b8 = uVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf1ff80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar4;
    func_0x00010bf493a0(uVar4,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uStack_b0 = uVar15;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c08de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar6;
    func_0x00010bf493a0(uVar6,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uStack_a8 = uVar16;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c2793a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar8;
    func_0x00010bf493a0(uVar8,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a0 = uVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b8,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar10);
    _objc_release(puVar10);
    _objc_release(uVar17);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar16);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar15);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar12);
    _objc_release(uVar3);
    _objc_release(uVar18);
    func_0x00010c217520(*(undefined8 *)(param_1 + 0x88),param_1);
    func_0x00010c173660(*(undefined8 *)(param_1 + 0x90),param_1);
    puVar1 = PTR_PTR_1126c3bb0;
    _objc_alloc();
    func_0x00010bfff900();
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar12);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110e67078);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fad60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c189840(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
    func_0x00010c2003a0(*(undefined8 *)(param_1 + 0x18),param_2,1);
    lVar13 = param_1 + 0x80;
    _objc_loadWeakRetained();
    func_0x00010c267a80();
    _objc_release(lVar13);
    _objc_release(puVar2);
    lVar13 = *(long *)(param_1 + 0x78);
  }
  lVar11 = lVar13;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    lVar13 = *(long *)(lVar11 + 0x10);
    _objc_retain(lVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar13);
  return;
}



/* Entry: 1069e400c; end: 1069e4033; -[SCMediaDrawerGalleryTabController scrollView] */

void FUN_1069e400c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069e4034; end: 1069e423f; -[SCMediaDrawerGalleryTabController itemsInScrollViewRect:] */

void FUN_1069e4034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_5 + 0x10);
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08c940(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_retain(lVar5);
  lVar4 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      lVar9 = *(long *)(lVar11 * 8);
      lVar6 = lVar9;
      func_0x00010c1345a0();
      if (lVar6 == 0) {
        lVar6 = lVar9;
        func_0x00010bfb68e0();
        iVar2 = (int)lVar6;
        _CGRectIntersectsRect();
        if (iVar2 != 0) {
          uVar10 = *(undefined8 *)(param_5 + 8);
          func_0x00010bfecf20(lVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0840e0();
          func_0x00010c0dfd40(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(uVar10);
          _objc_release(lVar9);
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar4 != lVar11);
    lVar4 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  puVar7 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar3 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1069e4240; end: 1069e4247; -[SCMediaDrawerGalleryTabController galleryEntryCount] */

void FUN_1069e4240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1069e4248; end: 1069e427b; -[SCMediaDrawerGalleryTabController willDisplayMediaDrawerTab] */

void FUN_1069e4248(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf011a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069e427c; end: 1069e4283; -[SCMediaDrawerGalleryTabController collectionView:numberOfItemsInSection:] */

void FUN_1069e427c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1069e4284; end: 1069e4447; -[SCMediaDrawerGalleryTabController collectionView:cellForItemAtIndexPath:] */

void FUN_1069e4284(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain(param_5);
  lVar8 = *(long *)(param_2 + 8);
  _objc_retain(param_4);
  uVar2 = param_5;
  func_0x00010c0840e0(param_5);
  func_0x00010c0dfd40(lVar8,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  ppuVar1 = &PTR_PTR_11097eb90;
  if (lVar3 != 2) {
    ppuVar1 = &PTR_PTR_110952f00;
  }
  uVar2 = param_4;
  func_0x00010bf6e0c0(param_4,param_3,*ppuVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  dVar10 = *(double *)(param_2 + 0x20);
  dVar11 = *(double *)(param_2 + 0x28);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  dVar10 = dVar10 * param_1;
  puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar9 = *(undefined8 *)(param_2 + 8);
  uVar7 = param_5;
  func_0x00010c0840e0(param_5);
  func_0x00010c0dfd40(uVar9,param_3,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196780(dVar10,dVar11 * param_1,uVar2,param_3,uVar9,*(undefined8 *)(param_2 + 0x40),
                      *(undefined8 *)(param_2 + 0x48));
  lVar3 = param_2 + 0x80;
  _objc_loadWeakRetained(lVar3);
  lVar6 = lVar3;
  func_0x00010bfc4fa0();
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c158f20(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fae20(uVar2,param_3,lVar6 != 0x7fffffffffffffff,uVar7,0);
  _objc_release(uVar7);
  _objc_release(lVar3);
  func_0x00010c24eda0(uVar2);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1069e4448; end: 1069e4553; -[SCMediaDrawerGalleryTabController collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_1069e4448(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_4;
  func_0x00010010fab4(param_4,PTR_DAT_1126a56b0);
  if ((param_4 != 0) && ((int)lVar2 != 0)) {
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0840e0(param_5);
    func_0x00010c0dfd40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_DAT_1126a56b8;
    _objc_retain(param_4);
    lVar3 = param_4;
    func_0x00010010fab4(param_4,puVar1);
    lVar2 = param_4;
    if ((int)lVar3 == 0) {
      lVar2 = 0;
    }
    _objc_retain(lVar2);
    _objc_release(param_4);
    if (lVar2 != 0) {
      param_1 = param_1 + 0x80;
      _objc_loadWeakRetained(param_1);
      func_0x00010bfc4fa0();
      func_0x00010bf030c0(param_4);
      _objc_release(param_1);
      _objc_release(param_4);
    }
    _objc_release(uVar4);
    _objc_release(param_4);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1069e4554; end: 1069e45a7; -[SCMediaDrawerGalleryTabController collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_1069e4554(void)

{
  long lVar1;
  long in_x3;
  
  _objc_retain(in_x3);
  lVar1 = in_x3;
  func_0x00010010fab4(in_x3,PTR_DAT_1126a56b0);
  if ((in_x3 != 0) && ((int)lVar1 != 0)) {
    func_0x00010c1fae20(in_x3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 1069e45a8; end: 1069e45fb; -[SCMediaDrawerGalleryTabController scrollViewWillBeginDragging:] */

void FUN_1069e45a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  func_0x00010c267960();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069e45fc; end: 1069e4683; -[SCMediaDrawerGalleryTabController scrollViewDidScroll:] */

void FUN_1069e45fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x80;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c267860();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x10);
  _objc_release(param_3);
  if ((param_3 == lVar1) && (*(char *)(param_1 + 0x60) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),lVar1,
               PTR_s_setContentOffset__11263e2d8);
    return;
  }
  return;
}



/* Entry: 1069e4684; end: 1069e46f7; -[SCMediaDrawerGalleryTabController scrollViewDidEndDragging:willDecelerate:] */

void FUN_1069e4684(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x80;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c267820();
  _objc_release(param_3);
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + 0x60) = 0;
  uVar2 = *(undefined8 *)PTR__CGPointZero_110347540;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  return;
}



/* Entry: 1069e46f8; end: 1069e472b; -[SCMediaDrawerGalleryTabController scrollViewDidEndDecelerating:] */

void FUN_1069e46f8(long param_1)

{
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  func_0x00010c267a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069e472c; end: 1069e4757; -[SCMediaDrawerGalleryTabController memoriesCollectionViewSelectionHelper:galleryItemAtIndexPath:] */

void FUN_1069e472c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0840e0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_4);
  return;
}



/* Entry: 1069e4758; end: 1069e475f; -[SCMediaDrawerGalleryTabController memoriesCollectionViewSelectionHelper:shouldChangeSelectedAtIndexPath:] */

undefined8 FUN_1069e4758(void)

{
  return 0;
}



/* Entry: 1069e4760; end: 1069e4763; -[SCMediaDrawerGalleryTabController memoriesCollectionViewSelectionHelper:didChangeSelected:forItem:] */

void FUN_1069e4760(void)

{
  return;
}



/* Entry: 1069e4764; end: 1069e4833; -[SCMediaDrawerGalleryTabController memoriesCollectionViewSelectionHelper:didTapItemAtIndexPath:] */

void FUN_1069e4764(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0840e0(param_4);
  func_0x00010c0dfd40(uVar3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x80;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfc4fa0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x80;
  _objc_loadWeakRetained();
  if (lVar2 == 0x7fffffffffffffff) {
    lVar2 = lVar1;
    func_0x00010c267760();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) goto LAB_1069e4820;
    lVar1 = param_1 + 0x80;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c267880();
  }
  else {
    func_0x00010c267800();
  }
  _objc_release(lVar1);
LAB_1069e4820:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1069e4834; end: 1069e48cb; -[SCMediaDrawerGalleryTabController memoriesCollectionViewSelectionHelper:handleLongPress:itemAtIndexPath:] */

void FUN_1069e4834(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  func_0x00010c252440();
  if (param_4 == 1) {
    lVar1 = param_1 + 0x80;
    _objc_loadWeakRetained(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = param_5;
    func_0x00010c0840e0(param_5);
    func_0x00010c0dfd40(uVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c267840(lVar1,param_2,param_1,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1069e48cc; end: 1069e4977; -[SCMediaDrawerGalleryTabController memoriesCollectionViewIsFullyVisible:] */

undefined * FUN_1069e48cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010bf51460(uVar1,param_2,0);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c14c760();
  _CGRectContainsRect();
  _objc_release(puVar2);
  return puVar3;
}



/* Entry: 1069e4978; end: 1069e497f; -[SCMediaDrawerGalleryTabController memoriesCollectionViewSelectionHelper:overrideTapHandlingAtIndexPath:] */

undefined8 FUN_1069e4978(void)

{
  return 0;
}



/* Entry: 1069e4980; end: 1069e4987; -[SCMediaDrawerGalleryTabController animateSelectingDrawerItem:] */

void FUN_1069e4980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf03110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_animateSelectingDrawerItem_updat_11259e5e8,param_3,0);
  return;
}



/* Entry: 1069e4988; end: 1069e498f; -[SCMediaDrawerGalleryTabController restoreSelectionForDrawerItem:] */

void FUN_1069e4988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf03110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_animateSelectingDrawerItem_updat_11259e5e8,param_3,1);
  return;
}



/* Entry: 1069e4990; end: 1069e4adf; -[SCMediaDrawerGalleryTabController animateSelectingDrawerItem:updateCollectionViewState:] */

void FUN_1069e4990(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfecde0(lVar1,param_2,param_3);
  if (lVar1 == 0x7fffffffffffffff) {
    uVar3 = param_3;
    func_0x00010c0844e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010be16900(param_1,param_2,uVar3);
    _objc_release(uVar3);
    if (lVar1 == 0x7fffffffffffffff) goto LAB_1069e4ac0;
  }
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    func_0x00010c158b60(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,0,0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf33b60(uVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1069e4ae0;
  puStack_58 = &UNK_110841f80;
  lStack_50 = param_1;
  uStack_48 = uVar3;
  _objc_retain();
  func_0x00010bdca7e0(param_1,param_2,&puStack_70,&PTR___NSConcreteGlobalBlock_110952940);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  _objc_release(puVar2);
LAB_1069e4ac0:
  _objc_release(param_3);
  return;
}



/* Entry: 1069e4ae0; end: 1069e4b83;  */

void FUN_1069e4ae0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(uVar1);
  func_0x00010c217520(0,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c173660(0x404b800000000000,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1521c0(uVar1,param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c158f20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fae20(uVar1,param_2,1,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1069e4b84; end: 1069e4b87;  */

void FUN_1069e4b84(void)

{
  return;
}



/* Entry: 1069e4b88; end: 1069e4cc3; -[SCMediaDrawerGalleryTabController animateDeselectDrawerItem:itemsIdWithUpdatedIndex:isDeselectingLastItem:] */

void FUN_1069e4b88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfecde0(lVar1,param_2,param_3);
  if (lVar1 == 0x7fffffffffffffff) {
    uVar3 = param_3;
    func_0x00010c0844e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010be16900(param_1,param_2,uVar3);
    _objc_release(uVar3);
    if (lVar1 == 0x7fffffffffffffff) goto LAB_1069e4ca4;
  }
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf33b60(uVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1069e4cc4;
  puStack_60 = &UNK_11084d5f8;
  uStack_58 = uVar3;
  lStack_50 = param_1;
  uStack_48 = param_5;
  _objc_retain();
  func_0x00010bdca7e0(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110952960);
  _objc_release(uStack_58);
  _objc_release(uVar3);
  _objc_release(puVar2);
LAB_1069e4ca4:
  _objc_release(param_3);
  return;
}



/* Entry: 1069e4cc4; end: 1069e4d3b;  */

void FUN_1069e4cc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1fae20(*(undefined8 *)(param_1 + 0x20),param_2,0,0,0);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    func_0x00010bf408e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069fe0();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c173670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0x4042000000000000,*(undefined8 *)(param_1 + 0x28),PTR_s_setBottomMargin__11263a7b8);
    return;
  }
  return;
}



/* Entry: 1069e4d3c; end: 1069e4d3f;  */

void FUN_1069e4d3c(void)

{
  return;
}


