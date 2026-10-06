/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062780a4; end: 1062780d3; -[SCContextSpotlightDoubleTapToLikeGestureController setContextSpotlightParams:] */

void FUN_1062780a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062780d4; end: 1062780db; -[SCContextSpotlightDoubleTapToLikeGestureController currentStoryType] */

undefined8 FUN_1062780d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1062780dc; end: 1062780e3; -[SCContextSpotlightDoubleTapToLikeGestureController setCurrentStoryType:] */

void FUN_1062780dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 1062780e4; end: 1062780eb; -[SCContextSpotlightDoubleTapToLikeGestureController currentStorySnapCount] */

undefined8 FUN_1062780e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1062780ec; end: 1062780f3; -[SCContextSpotlightDoubleTapToLikeGestureController setCurrentStorySnapCount:] */

void FUN_1062780ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 1062780f4; end: 1062780fb; -[SCContextSpotlightDoubleTapToLikeGestureController currentAdFavoriteEnabled] */

undefined1 FUN_1062780f4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1062780fc; end: 106278103; -[SCContextSpotlightDoubleTapToLikeGestureController setCurrentAdFavoriteEnabled:] */

void FUN_1062780fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106278104; end: 10627810b; -[SCContextSpotlightDoubleTapToLikeGestureController storiesConfigProvider] */

undefined8 FUN_106278104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10627810c; end: 10627813b; -[SCContextSpotlightDoubleTapToLikeGestureController setStoriesConfigProvider:] */

void FUN_10627810c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10627813c; end: 106278143; -[SCContextSpotlightDoubleTapToLikeGestureController contextExperimentService] */

undefined8 FUN_10627813c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106278144; end: 106278173; -[SCContextSpotlightDoubleTapToLikeGestureController setContextExperimentService:] */

void FUN_106278144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106278174; end: 10627817b; -[SCContextSpotlightDoubleTapToLikeGestureController isPauseEnabled] */

undefined1 FUN_106278174(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10627817c; end: 106278183; -[SCContextSpotlightDoubleTapToLikeGestureController setIsPauseEnabled:] */

void FUN_10627817c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106278184; end: 10627818b; -[SCContextSpotlightDoubleTapToLikeGestureController eventAnnouncer] */

undefined8 FUN_106278184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10627818c; end: 1062781bb; -[SCContextSpotlightDoubleTapToLikeGestureController setEventAnnouncer:] */

void FUN_10627818c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062781bc; end: 1062781c3; -[SCContextSpotlightDoubleTapToLikeGestureController isHighSpeedPlaybackActive] */

undefined1 FUN_1062781bc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1062781c4; end: 1062781cb; -[SCContextSpotlightDoubleTapToLikeGestureController setIsHighSpeedPlaybackActive:] */

void FUN_1062781c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 1062781cc; end: 1062781d3; -[SCContextSpotlightDoubleTapToLikeGestureController gestureDetectionExternal] */

undefined1 FUN_1062781cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 1062781d4; end: 1062781db; -[SCContextSpotlightDoubleTapToLikeGestureController setGestureDetectionExternal:] */

void FUN_1062781d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 1062781dc; end: 1062781f3; -[SCContextSpotlightDoubleTapToLikeGestureController currentPage] */

void FUN_1062781dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062781f4; end: 1062781ff; -[SCContextSpotlightDoubleTapToLikeGestureController setCurrentPage:] */

void FUN_1062781f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 106278200; end: 10627829b; -[SCContextSpotlightDoubleTapToLikeGestureController .cxx_destruct] */

void FUN_106278200(long param_1)

{
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10627829c; end: 106278373; -[SCContextSpotlightDoubleTapToLikeUserEdController initWithOnDemandResourcesDownloader:userPreferences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10627829c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f0a58;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127445c0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127445c4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c1c8c00(puVar1);
    _objc_retain(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 106278374; end: 1062783bb; -[SCContextSpotlightDoubleTapToLikeUserEdController viewDidLoad] */

void FUN_106278374(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0a58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beb14e0(param_1);
  return;
}



/* Entry: 1062783bc; end: 106278403; -[SCContextSpotlightDoubleTapToLikeUserEdController viewDidAppear:] */

void FUN_1062783bc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0a58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010be89f20(param_1);
  return;
}



/* Entry: 106278404; end: 1062784d3; -[SCContextSpotlightDoubleTapToLikeUserEdController _setupViews] */

void FUN_106278404(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar1);
  func_0x00010beaa840(param_1);
  func_0x00010beac2c0(param_1);
  func_0x00010beacfa0(param_1);
  func_0x00010beb0b60(param_1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062784d4; end: 106278537; -[SCContextSpotlightDoubleTapToLikeUserEdController _setupTouchGesture] */

void FUN_1062784d4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106278538; end: 106278867; -[SCContextSpotlightDoubleTapToLikeUserEdController _setupAnimatedImage] */

void FUN_106278538(undefined8 param_1)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined1 auStack_280 [8];
  undefined1 auStack_278 [8];
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 **ppuStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined *puStack_d0;
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
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bb2a0;
  _objc_alloc(PTR_PTR_1126bb2a0);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c167ea0(param_1);
  _objc_release(puVar1);
  func_0x00010bebfd40(param_1);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf03660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf03660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puStack_d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_1;
  func_0x00010bf03660();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  uStack_b0 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = uVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  uStack_c0 = uVar2;
  uStack_98 = uVar2;
  func_0x00010bf03660();
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_d8 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  uStack_90 = uVar3;
  func_0x00010bf03660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = uVar7;
  func_0x00010bf03660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4059000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d0);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uStack_d8);
  _objc_release(uStack_c8);
  _objc_release(uStack_c0);
  _objc_release(uStack_b8);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  uVar10 = uStack_a0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_106278868;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = PTR_PTR_1126aea58;
  uStack_140 = uVar2;
  uStack_138 = uVar4;
  puStack_130 = puVar1;
  uStack_128 = uVar9;
  uStack_120 = uVar8;
  uStack_118 = uVar7;
  uStack_110 = uVar6;
  uStack_108 = param_1;
  uStack_100 = uVar5;
  uStack_f8 = uVar3;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  uVar2 = uVar10;
  func_0x00010bf03660(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c013de0();
  _objc_release(uVar2);
  func_0x00010c219b60(puVar11);
  func_0x00010c21ad00(puVar11);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar11);
  _objc_release(puVar1);
  func_0x00010c213040(puVar11);
  func_0x00010c1cfce0(puVar11);
  puVar1 = puVar11;
  func_0x00010c1bdb00(puVar11);
  func_0x000108f5977c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar11);
  _objc_release(puVar1);
  uVar2 = uVar10;
  func_0x00010c29bf00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  puStack_178 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = puVar11;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = puVar1;
  func_0x00010bf49420(0x405e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  puStack_170 = puVar1;
  puStack_160 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010bf03660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  puStack_158 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf03660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf493c0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_150 = puVar14;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_178);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(puVar13);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar12);
  _objc_release(puStack_170);
  _objc_release(puStack_168);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_106278b3c;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  ppuStack_190 = &puStack_f0;
  _objc_alloc();
  puVar12 = puVar1;
  func_0x0001062cd508();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  _objc_release(puVar12);
  func_0x00010c219b60(puVar1);
  puVar12 = puVar11;
  func_0x00010c29bf00(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar12);
  puStack_240 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar12 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_220 = puVar12;
  func_0x00010bf49420(0x4054c00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  puStack_228 = puVar12;
  puStack_218 = puVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_230 = puVar13;
  func_0x00010bf49420(0x4054c00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  puStack_238 = puVar13;
  puStack_210 = puVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf03660(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar12;
  func_0x00010bf493c0(0xc039000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar1;
  puStack_208 = puVar15;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf03660();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010bf493c0(0x4039000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_200 = puVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_240);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar11);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puStack_238);
  _objc_release(puStack_230);
  _objc_release(puStack_228);
  _objc_release(puStack_220);
  puVar11 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_106278dd4;
  puVar12 = PTR_PTR_1126aebd8;
  puStack_270 = puVar18;
  puStack_268 = puVar17;
  puStack_260 = puVar16;
  puStack_258 = puVar1;
  ppuStack_250 = &ppuStack_190;
  func_0x00010c14e320(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_278,puVar11);
  func_0x00010c13b580(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_280,auStack_278);
  func_0x00010bf88760(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar11);
  _objc_destroyWeak(auStack_280);
  _objc_destroyWeak(auStack_278);
  _objc_release(puVar12);
  return;
}



/* Entry: 106278868; end: 106278b3b; -[SCContextSpotlightDoubleTapToLikeUserEdController _setupDoubleTapLabel] */

void FUN_106278868(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010bf03660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c013de0();
  _objc_release(uVar2);
  func_0x00010c219b60(puVar1);
  func_0x00010c21ad00(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar3);
  func_0x00010c213040(puVar1);
  func_0x00010c1cfce0(puVar1);
  puVar3 = puVar1;
  func_0x00010c1bdb00(puVar1);
  func_0x000108f5977c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(puVar3);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  puStack_98 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = puVar3;
  func_0x00010bf49420(0x405e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_90 = puVar3;
  puStack_80 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf03660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_78 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf03660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493c0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_98);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puStack_90);
  _objc_release(puStack_88);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_106278b3c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x0001062cd508();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  _objc_release(puVar4);
  func_0x00010c219b60(puVar3);
  puVar4 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar4);
  puStack_160 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar4;
  func_0x00010bf49420(0x4054c00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  puStack_148 = puVar4;
  puStack_138 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = puVar6;
  func_0x00010bf49420(0x4054c00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  puStack_158 = puVar6;
  puStack_130 = puVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf03660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010bf493c0(0xc039000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  puStack_128 = puVar9;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf03660();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bf493c0(0x4039000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_120 = puVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_160);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar1);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puStack_158);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  puVar1 = puVar3;
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_106278dd4;
  puVar4 = PTR_PTR_1126aebd8;
  puStack_190 = puVar12;
  puStack_188 = puVar11;
  puStack_180 = puVar10;
  puStack_178 = puVar3;
  ppuStack_170 = &puStack_b0;
  func_0x00010c14e320(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_198,puVar1);
  func_0x00010c13b580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1a0,auStack_198);
  func_0x00010bf88760(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_198);
  _objc_release(puVar4);
  return;
}



/* Entry: 106278b3c; end: 106278dd3; -[SCContextSpotlightDoubleTapToLikeUserEdController _setupHeartImageView] */

void FUN_106278b3c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x0001062cd508();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puStack_c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar2;
  func_0x00010bf49420(0x4054c00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_a8 = puVar2;
  puStack_98 = puVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar4;
  func_0x00010bf49420(0x4054c00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  puStack_b8 = puVar4;
  puStack_90 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf03660(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf493c0(0xc039000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_88 = puVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf03660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493c0(0x4039000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c0);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puStack_b8);
  _objc_release(puStack_b0);
  _objc_release(puStack_a8);
  _objc_release(puStack_a0);
  puVar2 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_106278dd4;
  puVar4 = PTR_PTR_1126aebd8;
  puStack_f0 = puVar8;
  uStack_e8 = uVar7;
  puStack_e0 = puVar6;
  puStack_d8 = puVar1;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010c14e320(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_f8,puVar2);
  func_0x00010c13b580(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_100,auStack_f8);
  func_0x00010bf88760(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f8);
  _objc_release(puVar4);
  return;
}



/* Entry: 106278dd4; end: 106278ee7; -[SCContextSpotlightDoubleTapToLikeUserEdController _startDownloadingAnimationImage] */

void FUN_106278dd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126aebd8;
  func_0x00010c14e320(PTR_PTR_1126aebd8,param_2,&PTR____CFConstantStringClassReference_110e47818);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c13b580(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf88760(uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 106278ee8; end: 106278fa7;  */

void FUN_106278ee8(long param_1,long param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106278fa8;
    puStack_48 = &UNK_110841fb0;
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    _objc_retain(param_2);
    lStack_40 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(lStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106278fa8; end: 106279023;  */

void FUN_106278fa8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf03660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2720;
  func_0x00010c14d040(PTR_PTR_1126b2720,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(lVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106279024; end: 10627907f; -[SCContextSpotlightDoubleTapToLikeUserEdController _registerUserSawUserEducation] */

void FUN_106279024(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c293260();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106279080; end: 1062790ff; +[SCContextSpotlightDoubleTapToLikeUserEdController shouldPresentUserEdWithCircumstanceEngine:userPreferences:] */

uint FUN_106279080(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_x3;
  
  _objc_retain(in_x3);
  uVar1 = in_x3;
  func_0x00010c269d40(in_x3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(in_x3);
  return (uint)uVar3 ^ 1;
}



/* Entry: 106279100; end: 10627917f; -[SCContextSpotlightDoubleTapToLikeUserEdController dismiss] */

void FUN_106279100(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106279180;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1062791b8;
  puStack_48 = &UNK_110841f20;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010bf03420(0x3fe0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38,
                      &puStack_60);
  return;
}



/* Entry: 106279180; end: 106279203;  */

void FUN_106279180(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106279204; end: 106279213; -[SCContextSpotlightDoubleTapToLikeUserEdController userPreferences] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106279204(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127445c0);
}



/* Entry: 106279214; end: 106279253; -[SCContextSpotlightDoubleTapToLikeUserEdController setUserPreferences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106279214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127445c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106279254; end: 106279263; -[SCContextSpotlightDoubleTapToLikeUserEdController resourcesDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106279254(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127445c4);
}



/* Entry: 106279264; end: 1062792a3; -[SCContextSpotlightDoubleTapToLikeUserEdController setResourcesDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106279264(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127445c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062792a4; end: 1062792b3; -[SCContextSpotlightDoubleTapToLikeUserEdController animatedImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062792a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127445c8);
}



/* Entry: 1062792b4; end: 1062792f3; -[SCContextSpotlightDoubleTapToLikeUserEdController setAnimatedImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062792b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127445c8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062792f4; end: 106279343; -[SCContextSpotlightDoubleTapToLikeUserEdController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062792f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127445c8,0);
  _objc_storeStrong(param_1 + _DAT_1127445c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127445c0,0);
  return;
}



/* Entry: 106279344; end: 106279427; -[SCContextSpotlightHashtagsViewController initWithHashtags:storiesConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106279344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f0a60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127445cc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127445cc) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127445d0;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127445d4;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
    func_0x00010be662c0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106279428; end: 1062794a3; -[SCContextSpotlightHashtagsViewController viewDidLoad] */

void FUN_106279428(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0a60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c1ae460(0x4010000000000000,param_1);
  func_0x00010c16d420(param_1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(param_1);
  return;
}



/* Entry: 1062794a4; end: 10627955f; -[SCContextSpotlightHashtagsViewController didSelectHashtagView:] */

void FUN_1062794a4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9348;
  _objc_opt_class(PTR_PTR_1126c9348);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    func_0x00010bfdedc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c08fa60();
    if (uVar3 != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfdee20();
      _objc_release(param_1);
    }
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106279560; end: 10627968f; -[SCContextSpotlightHashtagsViewController _observeHashtags] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106279560(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127445d4);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106279690; end: 1062796d7;  */

void FUN_106279690(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a6c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062796d8; end: 106279893; -[SCContextSpotlightHashtagsViewController _handleHashtags:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062796d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c12b1a0(param_1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar4 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar4 * 8);
        puVar2 = PTR_PTR_1126c9348;
        _objc_alloc(PTR_PTR_1126c9348);
        func_0x00010c2711a0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c019ea0(puVar2,param_2,uVar5);
        _objc_release(uVar5);
        puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
        _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
        func_0x00010c050900();
        func_0x00010bef9040(puVar2,param_2,puVar3);
        _objc_release(puVar3);
        func_0x00010c160fc0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e47858);
        func_0x00010befc9c0(param_1,param_2,puVar2);
        _objc_release(puVar2);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(param_3 + _DAT_1127445d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106279894; end: 1062798b3; -[SCContextSpotlightHashtagsViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106279894(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127445d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062798b4; end: 1062798c7; -[SCContextSpotlightHashtagsViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062798b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127445d8,param_3);
  return;
}



/* Entry: 1062798c8; end: 106279923; -[SCContextSpotlightHashtagsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062798c8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127445d8);
  _objc_storeStrong(param_1 + _DAT_1127445d4,0);
  _objc_storeStrong(param_1 + _DAT_1127445d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127445cc,0);
  return;
}



/* Entry: 106279924; end: 10627998f; -[SCContextSpotlightHeaderLabel intrinsicContentSize] */

undefined1  [16] FUN_106279924(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0a68;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_intrinsicContentSize_1125f8080);
  func_0x00010bfec1c0();
  dVar1 = param_1 + 4.0;
  if ((int)param_3 == 0) {
    dVar1 = param_1;
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = dVar1;
  return auVar2;
}



/* Entry: 106279990; end: 10627999f; -[SCContextSpotlightHeaderLabel increaseIntrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106279990(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127445dc);
}



/* Entry: 1062799a0; end: 1062799af; -[SCContextSpotlightHeaderLabel setIncreaseIntrinsicContentSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062799a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127445dc) = param_3;
  return;
}



/* Entry: 1062799b0; end: 106279b7f; -[SCContextSpotlightHeaderHitTestView hitTest:withEvent:] */

void FUN_1062799b0(double param_1,double param_2,double param_3,double param_4,undefined1 *param_5)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 *puStack_80;
  undefined *puStack_78;
  
  ppuVar2 = &puStack_80;
  puStack_78 = PTR_PTR_1126f0a70;
  puStack_80 = param_5;
  _objc_msgSendSuper2(&puStack_80,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 != (undefined1 **)0x0) {
    puVar3 = param_5;
    func_0x00010bf9dc00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)ppuVar2;
      func_0x00010bfc1c00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf529e0();
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = param_5;
        func_0x00010bf9dc00();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c070780();
        _objc_release(puVar4);
        _objc_release(puVar3);
        if ((int)puVar5 != 0) {
          puVar3 = param_5;
          func_0x00010bf9dc00(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf512a0(param_1,param_2,param_5);
          dVar6 = param_1;
          dVar8 = param_2;
          _objc_release(puVar3);
          puVar3 = param_5;
          func_0x00010bf9dc00();
          iVar1 = (int)puVar3;
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf20c00();
          dVar7 = dVar6;
          dVar9 = dVar8;
          dVar10 = param_3;
          dVar11 = param_4;
          func_0x00010bf9dc20(param_5);
          _objc_release();
          _CGRectContainsPoint
                    (dVar6 + dVar9,dVar8 + dVar7,param_3 - (dVar9 + dVar11),
                     param_4 - (dVar7 + dVar10),param_1,param_2);
          if (iVar1 != 0) {
            func_0x00010bf9dc00(param_5);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106279b50;
          }
        }
      }
      else {
        _objc_release(puVar3);
      }
    }
  }
  _objc_retain(ppuVar2);
  param_5 = (undefined1 *)ppuVar2;
LAB_106279b50:
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 106279b80; end: 106279b9f; -[SCContextSpotlightHeaderHitTestView extendedTapTarget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106279b80(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127445e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106279ba0; end: 106279bb3; -[SCContextSpotlightHeaderHitTestView setExtendedTapTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106279ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127445e0,param_3);
  return;
}



/* Entry: 106279bb4; end: 106279bcb; -[SCContextSpotlightHeaderHitTestView extendedTapTargetInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106279bb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127445e4);
}



/* Entry: 106279bcc; end: 106279be3; -[SCContextSpotlightHeaderHitTestView setExtendedTapTargetInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106279bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_1127445e4);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 106279be4; end: 106279bf3; -[SCContextSpotlightHeaderHitTestView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106279be4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127445e0);
  return;
}



/* Entry: 106279bf4; end: 106279f3b; -[SCContextSpotlightHeaderViewController initWithParams:subscriptionSessionProvider:circumstanceEngine:storiesConfigProvider:subscriptionActionsParams:hideSubscribeButton:profileImageProvider:remoteStoriesDataProvider:storiesReadReceiptCoordinator:imageFetchingService:notificationPool:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106279bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f0a78;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127445e8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127445e8) = puVar2;
    _objc_release(uVar6);
    lVar7 = (long)_DAT_1127445ec;
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar6);
    lVar7 = (long)_DAT_1127445f0;
    _objc_retain(param_7);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_7;
    _objc_release(uVar6);
    lVar7 = (long)_DAT_1127445f4;
    _objc_retain(param_4);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_4;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127445f8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127445f8) = puVar2;
    _objc_release(uVar6);
    lVar7 = (long)_DAT_1127445fc;
    _objc_retain(param_5);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_5;
    _objc_release(uVar6);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112744600) = param_8;
    lVar8 = (long)_DAT_112744604;
    _objc_retain(param_9);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_9;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112744608;
    _objc_retain(param_10);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_10;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_11274460c;
    _objc_retain(param_11);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_11;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112744610;
    _objc_retain(param_12);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_12;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112744614;
    _objc_retain(param_13);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_13;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112744618;
    _objc_retain(param_6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_6;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x000108f4b260();
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274461c) = uVar6;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c24afa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c098520();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf926c0();
    *(char *)((long)puVar1 + (long)_DAT_112744620) = (char)uVar5;
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar3);
    func_0x00010be3cd80(puVar1);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106279f3c; end: 106279f97; -[SCContextSpotlightHeaderViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106279f3c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c9350;
  _objc_alloc();
  func_0x00010c01a8a0(0xc034000000000000,0xc028000000000000,0xc028000000000000,0xc034000000000000);
  lVar3 = (long)_DAT_112744624;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 106279f98; end: 10627a01f; -[SCContextSpotlightHeaderViewController _shrinkTopOfHittestView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106279f98(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112744624;
  func_0x00010c1a8c40(0xc024000000000000,0xc028000000000000,0xc028000000000000,0xc034000000000000,
                      *(undefined8 *)(param_1 + lVar3));
  uVar2 = *(ulong *)(param_1 + lVar3);
  puVar1 = PTR_PTR_1126c9350;
  _objc_opt_class(PTR_PTR_1126c9350);
  _objc_opt_isKindOfClass(uVar2,puVar1);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c199250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0xc024000000000000,0xc028000000000000,0xc028000000000000,0xc034000000000000,
               *(undefined8 *)(param_1 + lVar3),PTR_s_setExtendedTapTargetInsets__112643eb0);
    return;
  }
  return;
}



/* Entry: 10627a020; end: 10627a10b; -[SCContextSpotlightHeaderViewController _enableTrendingBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627a020(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127445fc);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf1f400(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10627a10c; end: 10627a13f;  */

void FUN_10627a10c(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bebbec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10627a140; end: 10627a277; -[SCContextSpotlightHeaderViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627a140(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0a78;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be09140(param_1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + _DAT_11274461c);
  if (lVar2 < 3) {
    if (lVar2 == 1) {
LAB_10627a1d8:
      func_0x00010bdf58e0(param_1);
      goto LAB_10627a1f8;
    }
    if (lVar2 != 2) {
LAB_10627a1f0:
      func_0x00010bdeab00(param_1);
      goto LAB_10627a1f8;
    }
  }
  else if (lVar2 != 4) {
    if (lVar2 != 3) goto LAB_10627a1f0;
    goto LAB_10627a1d8;
  }
  func_0x00010bdf5880(param_1);
LAB_10627a1f8:
  lVar2 = (long)_DAT_112744624;
  uVar3 = *(ulong *)(param_1 + lVar2);
  puVar1 = PTR_PTR_1126c9350;
  _objc_opt_class(PTR_PTR_1126c9350);
  _objc_opt_isKindOfClass(uVar3,puVar1);
  if ((uVar3 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar2);
    _objc_retain(uVar4);
    func_0x00010c199220(uVar4);
    func_0x00010c199240(0xc034000000000000,0xc028000000000000,0xc028000000000000,0xc034000000000000,
                        uVar4);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 10627a278; end: 10627a2fb; -[SCContextSpotlightHeaderViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627a278(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  double in_d3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0a78;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar2 = (long)_DAT_11274462c;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(in_d3 * 0.5);
  _objc_release(uVar1);
  return;
}



/* Entry: 10627a2fc; end: 10627a623; -[SCContextSpotlightHeaderViewController configureWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627a2fc(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  func_0x00010c09c7a0(param_1);
  lVar2 = param_1;
  func_0x00010beb2de0();
  if ((int)lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_112744630);
    *(long *)(param_1 + _DAT_112744630) = lVar2;
    _objc_release(uVar5);
    lVar2 = param_3;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c08fa60();
    if (lVar7 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      _objc_alloc();
      lVar7 = param_3;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820();
      _objc_release(lVar7);
    }
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c078f60();
    puVar4 = puVar6;
    if ((int)lVar2 != 0) {
      lVar2 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x00010bf8d060();
      _objc_release(lVar2);
      puVar3 = puVar6;
      if (lVar7 == 1) {
        func_0x000108f474a8();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000108f472f8(puVar6,1);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar4 = puVar3;
      func_0x00010c0d3c80();
      _objc_release(puVar6);
      _objc_release(puVar3);
    }
    if (puVar4 != (undefined *)0x0) {
      func_0x00010bdc82a0(param_1);
    }
    func_0x00010c078f60(param_3);
    lVar7 = (long)_DAT_112744634;
    func_0x00010c1abfa0(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c16b720(*(undefined8 *)(param_1 + lVar7));
    puVar6 = puVar4;
    func_0x00010c25cd40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7));
    _objc_release(puVar6);
    lVar2 = param_3;
    func_0x00010c260dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_112744638;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar8));
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c26b700(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8));
    _objc_release(uVar5);
    iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
    func_0x00010c074c20();
    if (iVar1 != 0) {
      func_0x00010c074c20(*(undefined8 *)(param_1 + lVar8));
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744628));
    lVar2 = param_3;
    func_0x00010beedca0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11274463c);
    *(long *)(param_1 + _DAT_11274463c) = lVar7;
    _objc_release(uVar5);
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112744640);
    lVar2 = param_3;
    func_0x00010c129880(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47a80(uVar5);
    _objc_release(lVar2);
    _objc_release(puVar4);
  }
  else {
    func_0x00010bde50e0(param_1);
  }
  lVar2 = param_3;
  func_0x00010bfe90c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010bfe6ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8eb80(param_1);
  _objc_release(lVar7);
  _objc_release(lVar2);
  func_0x00010bee3d80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10627a624; end: 10627a887; -[SCContextSpotlightHeaderViewController configureWithSubcriptionParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627a624(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  uVar7 = *(undefined8 *)(param_1 + (long)_DAT_1127445f4);
  uVar1 = param_3;
  func_0x00010c260880(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0b3760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15ff00(uVar7,param_2,uVar1,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112744644;
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = uVar7;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c25fd60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0e9620();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + (long)_DAT_112744648);
  *(undefined8 *)(param_1 + (long)_DAT_112744648) = uVar4;
  _objc_release(uVar7);
  if ((*(long *)(param_1 + lVar9) == 0) || (*(char *)(param_1 + (long)_DAT_112744600) == '\x01')) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + (long)_DAT_11274464c),param_2,1);
    uVar4 = param_3;
    func_0x00010c0ea8e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c067fc0();
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar4);
    uVar3 = param_1;
    func_0x00010be440a0(param_1,param_2,uVar2);
    if ((uVar3 & 1) == 0) goto LAB_10627a864;
  }
  else {
    lVar8 = (long)_DAT_11274464c;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8),param_2,0);
    uVar4 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c0e1100(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a120(*(undefined8 *)(param_1 + lVar8),param_2,uVar4);
    _objc_release(uVar4);
  }
  uVar4 = uVar1;
  func_0x00010bf5b360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf1aae0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bf1c040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bfd6300(uVar1);
  func_0x00010bea8180(param_1,param_2,uVar4,uVar7,uVar6,uVar2,uVar5);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar4);
LAB_10627a864:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10627a888; end: 10627aa93; -[SCContextSpotlightHeaderViewController _installObservers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627a888(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127445ec);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10627aa94;
  puStack_78 = &UNK_110919450;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  if (*(long *)(param_1 + _DAT_11274461c) != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127445f0);
    puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0e80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_68);
    uVar2 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_98);
  }
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 10627aa94; end: 10627aadb;  */

void FUN_10627aa94(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf47a80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10627aadc; end: 10627ac9f;  */

void FUN_10627aadc(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf47ba0();
  _objc_release(lVar1);
  uVar2 = param_2;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9358;
  func_0x00010c07b7c0(PTR_PTR_1126c9358);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar7 & 1) != 0) {
    uVar2 = param_2;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9358;
    func_0x00010c07b7c0(PTR_PTR_1126c9358);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf1f3c0();
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar7 & 1) != 0) goto LAB_10627ac84;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar2 = param_2;
  func_0x00010c25fd60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be13500(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
LAB_10627ac84:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10627aca0; end: 10627ad97; -[SCContextSpotlightHeaderViewController _replaceImageView:image:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627aca0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11274462c;
  while( true ) {
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 == 0) break;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c261580(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,param_3 == 0);
  if (param_3 != 0 || param_4 != 0) {
    func_0x00010c16d4a0(param_3,param_2,0x12);
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c19f0e0(param_3);
    func_0x00010c21e900(param_3,param_2,0);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10627ad98; end: 10627ae2b; -[SCContextSpotlightHeaderViewController _didSelectHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627ad98(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112744634);
  func_0x00010c074c20();
  if ((uVar1 & 1) == 0) {
    lVar4 = (long)_DAT_11274463c;
    if (*(long *)(param_1 + lVar4) != 0) {
      lVar2 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010bf51e00(uVar3);
      func_0x00010bfe0240(lVar2,param_2,param_1,uVar3);
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 10627ae2c; end: 10627aed7; -[SCContextSpotlightHeaderViewController _didSelectRemixAttribution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627ae2c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112744640;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010beedca0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    func_0x00010bfe0240(lVar1,param_2,param_1,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10627aed8; end: 10627af47; -[SCContextSpotlightHeaderViewController _updateViewVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627aed8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11274462c);
  if ((lVar1 == 0) || (func_0x00010c074c20(), (int)lVar1 != 0)) {
    func_0x00010c074c20(*(undefined8 *)(param_1 + _DAT_112744628));
  }
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10627af48; end: 10627af5f; -[SCContextSpotlightHeaderViewController _isSpotlightManagementViewLocation:] */

bool FUN_10627af48(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return param_3 == 0x59 || (param_3 & 0xfffffffffffffffd) == 0x54;
}



/* Entry: 10627af60; end: 10627b0a7; -[SCContextSpotlightHeaderViewController _shouldConfigureForGamesWithHeaderParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10627af60(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  if (*(char *)(param_1 + _DAT_112744620) != '\x01') {
    return 0;
  }
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c095b20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar4 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar1 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    if ((uVar1 & 1) != 0) {
      _objc_retain(uVar4);
      uVar1 = uVar4;
      goto joined_r0x00010627b068;
    }
  }
  uVar1 = 0;
joined_r0x00010627b068:
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0(uVar1);
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10627b0a8; end: 10627b1e3; -[SCContextSpotlightHeaderViewController _configureForGamesWithHeaderParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627b0a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  func_0x00010c095b20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar6 = (long)_DAT_112744630;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar1;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  func_0x00010c04e820();
  if (puVar3 != (undefined *)0x0) {
    func_0x00010bdc82a0(param_1,param_2,puVar3);
  }
  lVar6 = (long)_DAT_112744634;
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar6),param_2,puVar3);
  puVar4 = puVar3;
  func_0x00010c25cd40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,puVar5 == (undefined *)0x0);
  _objc_release(puVar4);
  lVar6 = (long)_DAT_112744638;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744628),param_2,0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274463c);
  *(undefined8 *)(param_1 + _DAT_11274463c) = 0;
  _objc_release(uVar2);
  func_0x00010bf47a80(*(undefined8 *)(param_1 + _DAT_112744640),param_2,0);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10627b1e4; end: 10627b297; -[SCContextSpotlightHeaderViewController _createAndConstrainSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627b1e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010be5c380();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112744650;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be5bb00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744654);
  *(long *)(param_1 + _DAT_112744654) = lVar1;
  _objc_release(uVar2);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010bdee6e0(param_1);
  func_0x00010bdf2460(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde65d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__constrainSubviews_112557310);
  return;
}



/* Entry: 10627b298; end: 10627b34f; -[SCContextSpotlightHeaderViewController _createHeaderTextControl] */

/* WARNING: Possible PIC construction at 0x00010627b310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010627b314) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627b298(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010be5bb20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112744628;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + _DAT_112744654));
  lVar1 = param_1;
  func_0x00010be5bb40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112744634;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 10627b350; end: 10627b3a7; -[SCContextSpotlightHeaderViewController _createRemixAttributionTextControl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627b350(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010be5c020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112744640;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bef6d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744650),PTR_s_addArrangedSubview__11259b500,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10627b3a8; end: 10627b417; -[SCContextSpotlightHeaderViewController _makeStackView] */

void FUN_10627b3a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c92b0;
  _objc_alloc_init(PTR_PTR_1126c92b0);
  func_0x00010c207380(0x4000000000000000);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c166c00(puVar1,param_2,1);
  func_0x00010c16e060(puVar1,param_2,1);
  func_0x00010c1a8c40(0xc034000000000000,0xc028000000000000,0xc028000000000000,0xc028000000000000,
                      puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10627b418; end: 10627b457; -[SCContextSpotlightHeaderViewController _makeHeaderStackView] */

void FUN_10627b418(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c92b0;
  _objc_alloc_init(PTR_PTR_1126c92b0);
  func_0x00010c207380(0x401c000000000000);
  func_0x00010c166c00(puVar1,param_2,3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10627b458; end: 10627b503; -[SCContextSpotlightHeaderViewController _makeImageContainerView] */

void FUN_10627b458(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c9360;
  _objc_alloc_init(PTR_PTR_1126c9360);
  func_0x00010c17d4c0();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3ff0000000000000,0x3fb999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10627b504; end: 10627b573; -[SCContextSpotlightHeaderViewController _makeHeaderTextControl] */

void FUN_10627b504(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c9360;
  _objc_alloc_init(PTR_PTR_1126c9360);
  func_0x00010c160fc0();
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10627b574; end: 10627b62f; -[SCContextSpotlightHeaderViewController _makeHeaderTitleLabel] */

void FUN_10627b574(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c9368;
  _objc_alloc_init(PTR_PTR_1126c9368);
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c181f00(0x443b8000,puVar1,param_2,0);
  func_0x00010c181cc0(0x447a0000,puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10627b630; end: 10627b6fb; -[SCContextSpotlightHeaderViewController _addShadowToTitleText:] */

void FUN_10627b630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1fe7a0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar1);
  func_0x00010c1fe720(0x4020000000000000,puVar1);
  uVar4 = *(undefined8 *)PTR__NSShadowAttributeName_110345828;
  uVar3 = param_3;
  func_0x00010c08fa60(param_3);
  func_0x00010bef6f20(param_3,param_2,uVar4,puVar1,0,uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10627b6fc; end: 10627b7bb; -[SCContextSpotlightHeaderViewController _makeSubtitleLabel] */

void FUN_10627b6fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0x3fe6666660000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c21ad00(puVar1,param_2,0x17);
  func_0x00010c181f00(0x443b8000,puVar1,param_2,0);
  func_0x00010c181cc0(0x447a0000,puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10627b7bc; end: 10627b81f; -[SCContextSpotlightHeaderViewController _makeRemixAttributionControl] */

void FUN_10627b7bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c9370;
  _objc_opt_new(PTR_PTR_1126c9370);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10627b820; end: 10627be27; -[SCContextSpotlightHeaderViewController _constrainSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627b820(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_220;
  long lStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
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
  undefined *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_158 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar10 = (long)_DAT_112744650;
  uVar1 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  uStack_e8 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar11;
  func_0x00010bf493a0(uVar1,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  uStack_f8 = uVar1;
  uStack_c8 = uVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  uStack_108 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_100 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_110 = lVar11;
  func_0x00010bf49500(uVar2,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar10);
  uStack_118 = uVar2;
  uStack_c0 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  uStack_128 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_120 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_130 = lVar11;
  func_0x00010bf493a0(uVar1,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  uStack_138 = uVar1;
  uStack_b8 = uVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  uStack_148 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_150 = lVar11;
  func_0x00010bf493a0(uVar2,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112744634;
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  uStack_160 = uVar2;
  uStack_b0 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_112744628;
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  uStack_168 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_170 = uVar1;
  func_0x00010bf493a0(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  uStack_178 = uVar3;
  uStack_a8 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  uStack_180 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_188 = uVar1;
  func_0x00010bf493a0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  uStack_190 = uVar2;
  uStack_a0 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  uStack_198 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a0 = uVar1;
  func_0x00010bf493a0(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112744638;
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_1a8 = uVar3;
  uStack_98 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  uStack_1b0 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b8 = uVar1;
  func_0x00010bf493a0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar12);
  uStack_1c0 = uVar2;
  uStack_90 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = *(undefined **)(param_1 + lVar11);
  uStack_1c8 = uVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = *(undefined **)(param_1 + lVar12);
  uStack_88 = uVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf1ff80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = *(undefined **)(param_1 + lVar12);
  puStack_80 = puVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf1ff80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf493a0(puVar7,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c8,0xb);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_158,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1a0);
  _objc_release(uStack_198);
  _objc_release(uStack_190);
  _objc_release(uStack_188);
  _objc_release(uStack_180);
  _objc_release(uStack_178);
  _objc_release(uStack_170);
  _objc_release(uStack_168);
  _objc_release(uStack_160);
  _objc_release(lStack_150);
  _objc_release(lStack_140);
  _objc_release(uStack_148);
  _objc_release(uStack_138);
  _objc_release(lStack_130);
  _objc_release(lStack_120);
  _objc_release(uStack_128);
  _objc_release(uStack_118);
  _objc_release(lStack_110);
  _objc_release(lStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_f8);
  _objc_release(lStack_f0);
  _objc_release(lStack_e0);
  _objc_release(uStack_e8);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar11 = (long)_DAT_11274462c;
  puVar7 = *(undefined **)(param_1 + lVar11);
  if (puVar7 != (undefined *)0x0) {
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010bf49420(0x4039000000000000);
    _objc_retainAutoreleasedReturnValue();
    param_1 = *(long *)(param_1 + lVar11);
    puStack_d8 = puVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010bf49420(0x4039000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_d0 = lVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d8,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar11);
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release();
    puVar8 = puVar6;
    puVar9 = puVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_1d8 = FUN_10627be28;
    lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = PTR_PTR_1126c9378;
    puStack_210 = puVar5;
    lStack_208 = lVar11;
    puStack_200 = puVar4;
    puStack_1f8 = puVar9;
    puStack_1f0 = puVar8;
    lStack_1e8 = param_1;
    puStack_1e0 = &stack0xfffffffffffffff0;
    _objc_alloc();
    func_0x00010bffa040();
    func_0x00010c219b60();
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf49420(0x4033000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_220 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_220,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(puVar7,param_2,puVar6);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
      ___stack_chk_fail();
      puVar7 = PTR_PTR_1126c92c0;
      _objc_alloc(PTR_PTR_1126c92c0);
      func_0x00010c034bc0();
      func_0x00010c219b60();
      func_0x00010c160fc0(puVar7,param_2,&PTR____CFConstantStringClassReference_110e478d8);
      func_0x00010c21e900(puVar7,param_2,1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  return;
}



/* Entry: 10627be28; end: 10627bf5f; -[SCContextSpotlightHeaderViewController _makeSubscribeButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627be28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9378;
  _objc_alloc();
  func_0x00010bffa040();
  func_0x00010c219b60();
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf49420(0x4033000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar5,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(puVar1,param_2,puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126c92c0;
    _objc_alloc(PTR_PTR_1126c92c0);
    func_0x00010c034bc0();
    func_0x00010c219b60();
    func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e478d8);
    func_0x00010c21e900(puVar1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10627bf60; end: 10627bfc7; -[SCContextSpotlightHeaderViewController _makeAvatarProfileButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627bf60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c92c0;
  _objc_alloc(PTR_PTR_1126c92c0);
  func_0x00010c034bc0();
  func_0x00010c219b60();
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e478d8);
  func_0x00010c21e900(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10627bfc8; end: 10627c63f; -[SCContextSpotlightHeaderViewController _createViewForVerticalPillSubsButtonVariant] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627bfc8(long param_1)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = param_1;
  func_0x00010be5c380();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_112744650;
  uVar21 = *(undefined8 *)(param_1 + lVar22);
  *(long *)(param_1 + lVar22) = lVar24;
  _objc_release(uVar21);
  lVar24 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar24);
  lVar24 = param_1;
  func_0x00010be5c020();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + _DAT_112744640);
  *(long *)(param_1 + _DAT_112744640) = lVar24;
  _objc_release(uVar21);
  puVar1 = PTR_PTR_1126c92b0;
  _objc_alloc_init();
  func_0x00010c16e060();
  func_0x00010c207380(0x4020000000000000,puVar1);
  func_0x00010c219b60(puVar1);
  func_0x00010c166c00(puVar1);
  lVar24 = param_1;
  func_0x00010be5b560();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + _DAT_112744658);
  *(long *)(param_1 + _DAT_112744658) = lVar24;
  _objc_release(uVar21);
  puVar2 = PTR_PTR_1126c92b0;
  _objc_alloc_init();
  func_0x00010c207380(0x4014000000000000);
  func_0x00010c219b60(puVar2);
  func_0x00010c16e060(puVar2);
  func_0x00010c166c00(puVar2);
  lVar24 = param_1;
  func_0x00010be5bb20();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_112744628;
  uVar21 = *(undefined8 *)(param_1 + lVar25);
  *(long *)(param_1 + lVar25) = lVar24;
  _objc_release(uVar21);
  lVar24 = param_1;
  func_0x00010be5bb40();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_112744634;
  uVar21 = *(undefined8 *)(param_1 + lVar23);
  *(long *)(param_1 + lVar23) = lVar24;
  _objc_release(uVar21);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar25));
  puVar19 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c274200(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bf1ff80(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar19);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar21);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar24 = param_1;
  func_0x00010be5c400();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + _DAT_11274464c);
  *(long *)(param_1 + _DAT_11274464c) = lVar24;
  _objc_release(uVar21);
  lVar24 = param_1;
  func_0x00010be5c420();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + _DAT_112744638);
  *(long *)(param_1 + _DAT_112744638) = lVar24;
  _objc_release(uVar21);
  func_0x00010bef6d60(puVar2);
  func_0x00010bef6d60(puVar2);
  func_0x00010bef6d60(puVar2);
  func_0x00010bef6d60(puVar1);
  func_0x00010bef6d60(puVar1);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar22));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar22));
  puVar19 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar19);
  _objc_release(puVar14);
  _objc_release(uVar21);
  _objc_release(lVar24);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(lVar25);
  _objc_release(lVar23);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  puVar19 = puVar1;
  func_0x00010be5c380();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_112744650;
  uVar21 = *(undefined8 *)(puVar1 + lVar23);
  *(undefined **)(puVar1 + lVar23) = puVar19;
  _objc_release(uVar21);
  puVar19 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar19);
  puVar19 = puVar1;
  func_0x00010be5bb00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_112744654;
  uVar21 = *(undefined8 *)(puVar1 + lVar24);
  *(undefined **)(puVar1 + lVar24) = puVar19;
  _objc_release(uVar21);
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar23));
  puVar19 = puVar1;
  func_0x00010be5b560();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(puVar1 + _DAT_112744658);
  *(undefined **)(puVar1 + _DAT_112744658) = puVar19;
  _objc_release(uVar21);
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar24));
  func_0x00010bdee6e0(puVar1);
  puVar19 = puVar1;
  func_0x00010be5c400();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(puVar1 + _DAT_11274464c);
  *(undefined **)(puVar1 + _DAT_11274464c) = puVar19;
  _objc_release(uVar21);
  func_0x00010bef6d60(*(undefined8 *)(puVar1 + lVar24));
  func_0x00010bdf2460(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bde65d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s__constrainSubviews_112557310);
  return;
}



/* Entry: 10627c640; end: 10627c753; -[SCContextSpotlightHeaderViewController _createViewForHorizontalPillSubsButtonVariant] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627c640(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010be5c380();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112744650;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = lVar1;
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be5bb00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112744654;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar4));
  lVar1 = param_1;
  func_0x00010be5b560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744658);
  *(long *)(param_1 + _DAT_112744658) = lVar1;
  _objc_release(uVar2);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010bdee6e0(param_1);
  lVar1 = param_1;
  func_0x00010be5c400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274464c);
  *(long *)(param_1 + _DAT_11274464c) = lVar1;
  _objc_release(uVar2);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010bdf2460(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde65d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__constrainSubviews_112557310);
  return;
}



/* Entry: 10627c754; end: 10627c8a3; -[SCContextSpotlightHeaderViewController _setSubscribeButtonIcon:bitmojiAvatarId:bitmojiSelfieId:userId:hasDefaultIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627c754(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,int param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_7 == 0) || (lVar1 = param_4, func_0x00010c08fa60(), lVar1 == 0)) ||
     (lVar1 = param_5, func_0x00010c08fa60(), lVar1 == 0)) {
    func_0x00010bed38c0(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112744604);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bfa5500(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10627c8a4; end: 10627c973;  */

void FUN_10627c8a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10627c974;
  puStack_48 = &UNK_110841fb0;
  _objc_retain(param_2);
  uStack_40 = param_2;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10627c974; end: 10627c9b7;  */

void FUN_10627c974(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bea2160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}


