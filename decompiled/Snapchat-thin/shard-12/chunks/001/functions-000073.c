/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cfab00; end: 108cfab0f;  */

void FUN_108cfab00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108cfab10; end: 108cfabfb;  */

void FUN_108cfab10(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x108cfab70;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c312d4(0x40a00000,"APPSTORE",&puStack_38);
  return;
}



/* Entry: 108cfabfc; end: 108cfac13;  */

void FUN_108cfabfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108cfac14; end: 108cfac53; -[SCMultiSnapV2CellTooltipHandler removeSplitTooltips] */

void FUN_108cfac14(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cfac54; end: 108cfac7f; -[SCMultiSnapV2CellTooltipHandler removeTapToTrimTooltip] */

void FUN_108cfac54(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cfac80; end: 108cfaca3; -[SCMultiSnapV2CellTooltipHandler cleanUpForReuse] */

void FUN_108cfac80(undefined8 param_1)

{
  func_0x00010c12e420();
                    /* WARNING: Could not recover jumptable at 0x00010c12e8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeTapToTrimTooltip_112629458);
  return;
}



/* Entry: 108cfaca4; end: 108cfacab; -[SCMultiSnapV2CellTooltipHandler contentView] */

undefined8 FUN_108cfaca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cfacac; end: 108cfacb3; -[SCMultiSnapV2CellTooltipHandler tooltipAdditionalYOffset] */

undefined8 FUN_108cfacac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cfacb4; end: 108cfacbb; -[SCMultiSnapV2CellTooltipHandler setTooltipAdditionalYOffset:] */

void FUN_108cfacb4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 108cfacbc; end: 108cfad03; -[SCMultiSnapV2CellTooltipHandler .cxx_destruct] */

void FUN_108cfacbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cfad04; end: 108cfae7f; -[SCMultiSnapV2CollectionViewController initWithConfiguration:playerHandler:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108cfad04(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fe4b8;
  puVar2 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277adfc);
    _CMTimeMake(&uStack_68,0xffffffffffffffff,1);
    puVar1[2] = uStack_58;
    puVar1[1] = uStack_60;
    *puVar1 = uStack_68;
    _objc_storeWeak((long)puVar2 + (long)_DAT_11277ae00,param_4);
    puVar3 = param_3;
    if (param_3 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126affb0;
      _objc_alloc();
      func_0x00010bffe1e0();
    }
    lVar5 = (long)_DAT_11277ae04;
    _objc_retain(puVar3);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined **)((long)puVar2 + lVar5) = puVar3;
    _objc_release(uVar4);
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277ae08);
    *(undefined **)((long)puVar2 + (long)_DAT_11277ae08) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277ae0c);
    *(undefined **)((long)puVar2 + (long)_DAT_11277ae0c) = puVar3;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar2 + (long)_DAT_11277ae10) = 0;
    uVar4 = param_5;
    FUN_109127d50();
    *(char *)((long)puVar2 + (long)_DAT_11277ae14) = (char)uVar4;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 108cfae80; end: 108cfafef; -[SCMultiSnapV2CollectionViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfae80(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fe4b8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126c4b88;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar4 = (long)_DAT_11277ae18;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c182c20(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar3);
  func_0x00010c18e640(*(undefined8 *)(param_1 + lVar4));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  _objc_opt_class(PTR_PTR_1126b0d88);
  func_0x00010c126000(uVar3);
  func_0x00010c181f80(0x403e000000000000,0x4034000000000000,0,0x4034000000000000,
                      *(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 108cfaff0; end: 108cfb023; -[SCMultiSnapV2CollectionViewController didReceiveMemoryWarning] */

void FUN_108cfaff0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fe4b8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_didReceiveMemoryWarning_1125bbe28);
  return;
}



/* Entry: 108cfb024; end: 108cfb073; -[SCMultiSnapV2CollectionViewController loadView] */

void FUN_108cfb024(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c4b80;
  _objc_alloc(PTR_PTR_1126c4b80);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108cfb074; end: 108cfb0a3; -[SCMultiSnapV2CollectionViewController configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfb074(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277ae04);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cfb0a4; end: 108cfb1bf; -[SCMultiSnapV2CollectionViewController fetchAndSetThumbnailsForCapturedSingleSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfb0a4(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277ae04);
  param_1 = param_1 + _DAT_11277ae00;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa4da0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar1 = auStack_40;
  _objc_copyWeak(puVar1,auStack_38);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108cfb1c0; end: 108cfb263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfb1c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010be9d500(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277ae04);
    func_0x00010c1585e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea71e0(param_1,param_2,lVar1,1,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cfb264; end: 108cfb33b; -[SCMultiSnapV2CollectionViewController startEnterEditingModeWithThumbnailsHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfb264(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11277ae04);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    if (param_3 != 0) {
      lVar2 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e900();
      _objc_release(lVar2);
      lVar2 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0);
      _objc_release(lVar2);
    }
    lVar2 = param_1;
    func_0x00010bf8c7a0();
    if (lVar2 == 0x7fffffffffffffff) {
      lVar2 = param_1;
      func_0x00010bdf6f20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be9db10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__selectSegmentAtIndex__112585068,lVar2);
      return;
    }
  }
  return;
}



/* Entry: 108cfb33c; end: 108cfb36f; -[SCMultiSnapV2CollectionViewController deselectSelectedSegmentIfAny] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108cfb33c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11277ae1c);
  if (lVar1 != 0) {
    func_0x00010bdfb120();
  }
  return lVar1 != 0;
}



/* Entry: 108cfb370; end: 108cfb3cb; -[SCMultiSnapV2CollectionViewController revealThumbnails] */

void FUN_108cfb370(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cfb3cc; end: 108cfb3cf; -[SCMultiSnapV2CollectionViewController exitSegmentThumbnailsReordering] */

void FUN_108cfb3cc(void)

{
  return;
}



/* Entry: 108cfb3d0; end: 108cfb3d3; -[SCMultiSnapV2CollectionViewController restoreThumbnailsToInitialStateInReorder] */

void FUN_108cfb3d0(void)

{
  return;
}



/* Entry: 108cfb3d4; end: 108cfb42b; -[SCMultiSnapV2CollectionViewController displayTapToTrimTooltip] */

void FUN_108cfb3d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be9d500(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebeb60(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86640();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cfb42c; end: 108cfb437; -[SCMultiSnapV2CollectionViewController preferredHeight] */

undefined8 FUN_108cfb42c(void)

{
  return 0x4057000000000000;
}



/* Entry: 108cfb438; end: 108cfb43b; -[SCMultiSnapV2CollectionViewController componentView] */

void FUN_108cfb438(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_view_1126849e8);
  return;
}



/* Entry: 108cfb43c; end: 108cfb473; -[SCMultiSnapV2CollectionViewController updateConfigurationForFastPreview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfb43c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277ae04);
  *(undefined8 *)(param_1 + _DAT_11277ae04) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cfb474; end: 108cfb63f; -[SCMultiSnapV2CollectionViewController updateEditedThumbnails:forSegmentId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfb474(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277ae04;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c158340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x00010c067fc0(lVar3);
    lVar4 = *(long *)(param_1 + lVar6);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar2 = PTR_PTR_1126affb8;
    _objc_alloc(PTR_PTR_1126affb8);
    if (lVar5 == 0) {
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x00010c26f620(&uStack_80,lVar5);
      func_0x00010c27c900(&uStack_b0,lVar5);
    }
    lVar4 = lVar5;
    func_0x00010c26db80(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0525a0(puVar2,param_2,&uStack_80,&uStack_b0,param_3,lVar4);
    _objc_release(lVar4);
    func_0x00010c2899c0(*(undefined8 *)(param_1 + lVar6),param_2,puVar2,lVar1);
    lVar6 = param_1;
    func_0x00010be9d500(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010bf3fb40();
    func_0x00010bea71e0(param_1,param_2,lVar6,lVar1,puVar2);
    _objc_release(lVar6);
    _objc_release(puVar2);
    _objc_release(lVar5);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 108cfb640; end: 108cfb7ff; -[SCMultiSnapV2CollectionViewController updateCaptureSegment:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfb640(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar9 = (long)_DAT_11277ae04;
  lVar1 = *(long *)((long)param_1 + lVar9);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  puVar6 = param_3;
  if (lVar8 == 0) {
    func_0x00010bef9e40(*(undefined8 *)((long)param_1 + lVar9));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2899c0();
  }
  if (param_4 != 0) {
    puVar2 = param_1;
    func_0x00010be9d500(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined8 *)PTR_PTR_1126ae558;
    if (puVar2 == (undefined8 *)0x0) {
      lVar8 = (long)_DAT_11277ae18;
      func_0x00010c18e640(*(undefined8 *)((long)param_1 + lVar8),param_2,0);
      puVar4 = param_1;
      func_0x00010be38de0(param_1,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)((long)param_1 + lVar8);
      puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c128de0(uVar7);
    }
    else {
      puVar4 = param_3;
      func_0x00010bf8c620(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0(puVar3,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010bf02c00(puVar2);
      _objc_release(puVar3);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_108cfb800;
  uStack_78 = puVar6[1];
  uStack_80 = *puVar6;
  uStack_70 = puVar6[2];
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010c2842c0(*(undefined8 *)((long)param_3 + (long)_DAT_11277ae04),param_2,&uStack_80);
  return;
}



/* Entry: 108cfb800; end: 108cfb83b; -[SCMultiSnapV2CollectionViewController updateCaptureSegmentWithFinalDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfb800(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010c2842c0(*(undefined8 *)(param_1 + _DAT_11277ae04),param_2,&uStack_30);
  return;
}



/* Entry: 108cfb83c; end: 108cfb8bf; -[SCMultiSnapV2CollectionViewController editingIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108cfb83c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11277ae04);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_11277ae1c);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1554f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_section_112632f58);
      return lVar2;
    }
    lVar2 = 0x7fffffffffffffff;
  }
  return lVar2;
}



/* Entry: 108cfb8c0; end: 108cfb9ff; -[SCMultiSnapV2CollectionViewController preferredContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108cfb8c0(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  lVar4 = (long)_DAT_11277ae04;
  lVar1 = *(long *)(param_4 + lVar4);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    param_3 = *(double *)PTR__CGSizeZero_110347620;
    uVar5 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    lVar3 = *(long *)(param_4 + lVar4);
    func_0x00010c1585e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf529e0();
    lVar1 = param_4;
    func_0x00010be38de0(param_4,param_5,lVar2 + -1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (*(long *)(param_4 + _DAT_11277ae1c) == 0) {
      dVar6 = 17.5;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c071ae0();
      param_1 = 17.5;
      dVar6 = param_1;
      if ((int)lVar2 == 0) {
        dVar6 = 14.5;
      }
    }
    lVar4 = *(long *)(param_4 + lVar4);
    func_0x00010c1585e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf529e0();
    func_0x00010be19040(param_4,param_5,lVar2 + -1);
    _CGRectGetMaxX();
    _objc_release(lVar4);
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + _DAT_11277ae18));
    param_3 = (param_1 - dVar6) + -40.0 + param_3;
    _objc_release(lVar1);
    uVar5 = 0x404f000000000000;
  }
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = param_3;
  return auVar7;
}



/* Entry: 108cfba00; end: 108cfbabb; -[SCMultiSnapV2CollectionViewController _cellsCollapsed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108cfba00(double param_1,undefined8 param_2,double param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  uVar1 = *(ulong *)(param_4 + _DAT_11277ae04);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (uVar2 < 2) {
    lVar3 = *(long *)(param_4 + _DAT_11277ae1c);
    _objc_release(uVar1);
    if (lVar3 == 0) {
      return false;
    }
  }
  else {
    _objc_release(uVar1);
  }
  func_0x00010c1069a0(param_4);
  lVar3 = (long)_DAT_11277ae18;
  dVar4 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar3));
  func_0x00010bf4cdc0(*(undefined8 *)(param_4 + lVar3));
  return param_1 - (param_3 + dVar4) < 40.0;
}



/* Entry: 108cfbabc; end: 108cfbb23; -[SCMultiSnapV2CollectionViewController _autoScrollAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfbabc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277ae18);
  lVar1 = param_1;
  func_0x00010bdf6f20();
  func_0x00010be38de0(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1525a0(uVar2,param_2,param_1,0x10,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cfbb24; end: 108cfbd2b; -[SCMultiSnapV2CollectionViewController _frameForCellAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108cfbb24(double param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  
  lVar1 = param_3;
  func_0x00010be38de0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11277ae0c;
  lVar2 = *(long *)(param_3 + lVar9);
  func_0x00010c0dff20(lVar2,param_4,lVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    if (-1 < param_5) {
      lVar8 = 0;
      lVar10 = (long)_DAT_11277ae1c;
      dVar11 = 20.0;
      do {
        lVar3 = *(long *)(param_3 + lVar10);
        uVar7 = param_2;
        dVar12 = dVar11;
        if (lVar3 != 0) {
          func_0x00010c1554e0();
          param_1 = dVar11 + 10.0;
          uVar7 = param_2;
          dVar12 = param_1;
          if (lVar8 != lVar3 || lVar8 == 0) {
            dVar12 = dVar11;
          }
        }
        lVar3 = param_3;
        func_0x00010be38de0(param_3,param_4,lVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_3 + _DAT_11277ae08);
        func_0x00010c0e00e0(uVar4,param_4,lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc10a0();
        _objc_release(uVar4);
        param_2 = 0x403e000000000000;
        puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c2971a0(dVar12,0x403e000000000000,param_1,uVar7,
                            PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_3 + lVar9),param_4,puVar5,lVar3);
        _objc_release(puVar5);
        param_1 = dVar12 + param_1;
        dVar12 = param_1 + 5.0;
        lVar6 = *(long *)(param_3 + lVar10);
        dVar11 = dVar12;
        if (lVar6 != 0) {
          func_0x00010c1554e0();
          param_1 = dVar12 + 10.0;
          dVar11 = param_1;
          if (lVar8 != lVar6) {
            dVar11 = dVar12;
          }
        }
        _objc_release(lVar3);
        lVar8 = lVar8 + 1;
      } while (param_5 + 1 != lVar8);
    }
    uVar7 = *(undefined8 *)(param_3 + lVar9);
    func_0x00010c0e00e0(uVar7,param_4,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    _objc_release(uVar7);
  }
  else {
    func_0x00010bdc1080(lVar2);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 108cfbd2c; end: 108cfbd83; -[SCMultiSnapV2CollectionViewController _cellAtIndexIsOffscreenToRight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108cfbd2c(double param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  double dVar2;
  
  func_0x00010be19040();
  _CGRectGetMaxX();
  lVar1 = (long)_DAT_11277ae18;
  dVar2 = param_1;
  func_0x00010bf4cdc0(*(undefined8 *)(param_4 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar1));
  return dVar2 + param_3 < param_1;
}



/* Entry: 108cfbd84; end: 108cfbd8b; -[SCMultiSnapV2CollectionViewController collectionView:numberOfItemsInSection:] */

undefined8 FUN_108cfbd84(void)

{
  return 1;
}



/* Entry: 108cfbd8c; end: 108cfbdd3; -[SCMultiSnapV2CollectionViewController numberOfSectionsInCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cfbd8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277ae04);
  func_0x00010c1585e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108cfbdd4; end: 108cfbfab; -[SCMultiSnapV2CollectionViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfbdd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  lVar5 = *(long *)(param_1 + _DAT_11277ae04);
  _objc_retain(param_3);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c1554e0(param_4);
  lVar2 = lVar5;
  func_0x00010c0dfd40(lVar5,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  uVar1 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e2a558,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    func_0x00010c182980(uVar1,param_2,&uStack_a0);
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010c26f620(&uStack_70,lVar2);
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    func_0x00010c182980(uVar1,param_2,&uStack_a0);
    func_0x00010c27c900(&uStack_d0,lVar2);
  }
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  func_0x00010c21a5e0(uVar1,param_2,&uStack_a0);
  func_0x00010c17e480(uVar1,param_2,1);
  func_0x00010c1da800(uVar1,param_2,*(undefined1 *)(param_1 + _DAT_11277ae10));
  func_0x00010c18b5e0(uVar1,param_2,param_1);
  uVar3 = *(ulong *)(param_1 + _DAT_11277ae1c);
  if ((uVar3 == 0) || (func_0x00010c071ae0(uVar3,param_2,param_4), (uVar3 & 1) == 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  func_0x00010bea71e0(param_1,param_2,uVar1,uVar4,lVar2);
  lVar5 = lVar2;
  func_0x00010c280560(lVar2);
  func_0x00010c211780(uVar1,param_2,lVar5);
  _objc_retain(uVar1);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cfbfac; end: 108cfc053; -[SCMultiSnapV2CollectionViewController collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_108cfbfac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  func_0x00010c142240(param_5);
  func_0x00010c0df780(puVar1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110ef26d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_4,param_2,puVar2);
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108cfc054; end: 108cfc137; -[SCMultiSnapV2CollectionViewController collectionView:shouldSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_108cfc054(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bddc560();
  if ((int)uVar1 == 0) {
    lVar6 = (long)_DAT_11277ae1c;
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c1554e0(uVar2);
    uVar1 = param_1;
    func_0x00010be9d500(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf8cbc0();
    if ((uVar3 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + lVar6);
      if ((uVar4 != 0) && (func_0x00010c071ae0(uVar4,param_2,param_4), (uVar4 & 1) == 0)) {
        func_0x00010bdfb120(param_1);
      }
      lVar6 = param_1 + (long)_DAT_11277ae20;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c0d2500();
      _objc_release(lVar6);
    }
    uVar5 = (uint)uVar3 ^ 1;
    _objc_release(uVar1);
  }
  else {
    func_0x00010bdd1880(param_1,param_2,1);
    uVar5 = 0;
  }
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 108cfc138; end: 108cfc1c3; -[SCMultiSnapV2CollectionViewController collectionView:shouldDeselectItemAtIndexPath:] */

uint FUN_108cfc138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bddc560();
  if ((int)uVar1 == 0) {
    uVar1 = param_4;
    func_0x00010c1554e0(param_4);
    func_0x00010be9d500(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf8cbc0();
    uVar2 = (uint)uVar1 ^ 1;
    _objc_release(param_1);
  }
  else {
    func_0x00010bdd1880(param_1,param_2,1);
    uVar2 = 0;
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 108cfc1c4; end: 108cfc2a7; -[SCMultiSnapV2CollectionViewController collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfc1c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11277ae1c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  lVar4 = (long)_DAT_11277ae24;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar2;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  func_0x00010c12e8e0(*(undefined8 *)(param_1 + _DAT_11277ae28));
  lVar3 = param_1 + _DAT_11277ae00;
  _objc_loadWeakRetained(lVar3);
  uVar1 = param_4;
  func_0x00010c1554e0(param_4);
  _objc_release(param_4);
  func_0x00010c2039a0(lVar3,param_2,uVar1,1);
  _objc_release(lVar3);
  func_0x00010bed5640(param_1);
  param_1 = param_1 + _DAT_11277ae20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d2520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cfc2a8; end: 108cfc37f; -[SCMultiSnapV2CollectionViewController collectionView:didDeselectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfc2a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_11277ae1c;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  lVar4 = (long)_DAT_11277ae24;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar1;
  _objc_retain(param_4);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  lVar3 = param_1 + _DAT_11277ae00;
  _objc_loadWeakRetained(lVar3);
  uVar1 = param_4;
  func_0x00010c1554e0(param_4);
  _objc_release(param_4);
  func_0x00010c2039a0(lVar3,param_2,uVar1,0);
  _objc_release(lVar3);
  func_0x00010bed5640(param_1);
  param_1 = param_1 + _DAT_11277ae20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d2520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cfc380; end: 108cfc5e3; -[SCMultiSnapV2CollectionViewController collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108cfc380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  double *pdVar1;
  bool bVar2;
  double *pdVar3;
  double *pdVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  double *pdVar8;
  double dVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain(param_5);
  pdVar3 = *(double **)(param_1 + _DAT_11277ae04);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_5;
  func_0x00010c1554e0(param_5);
  pdVar4 = pdVar3;
  func_0x00010c0dfd40(pdVar3,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pdVar3);
  lVar5 = param_1;
  func_0x00010be3ec20(param_1,param_2,param_5);
  lVar6 = param_1;
  func_0x00010be3eb80();
  pdVar3 = pdVar4;
  if ((int)lVar6 == 0) {
    uVar10 = param_5;
    func_0x00010c071ae0(param_5,param_2,*(undefined8 *)(param_1 + _DAT_11277ae1c));
    if ((int)uVar10 == 0) {
      lVar6 = param_1;
      func_0x00010be34340();
      if ((int)lVar6 == 0) {
        pdVar8 = (double *)0x1;
      }
      else {
        if (pdVar4 == (double *)0x0) {
          dStack_88 = 0.0;
          uStack_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          func_0x00010c27c900(&uStack_a0,pdVar4);
        }
        uStack_68 = uStack_80;
        dStack_70 = dStack_88;
        uStack_60 = uStack_78;
        pdVar8 = &dStack_70;
        FUN_108cfa398(pdVar8);
      }
      goto LAB_108cfc52c;
    }
    func_0x00010c26db80();
    _objc_retainAutoreleasedReturnValue();
    pdVar8 = pdVar3;
    func_0x00010bf529e0();
    if (pdVar8 == (double *)0x0) {
      if (pdVar4 == (double *)0x0) {
        dStack_88 = 0.0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x00010c26f620(&uStack_a0,pdVar4);
      }
      uStack_68 = uStack_80;
      dStack_70 = dStack_88;
      uStack_60 = uStack_78;
      dVar9 = dStack_88;
      _CMTimeGetSeconds(&dStack_70);
      pdVar8 = (double *)0x3;
      if (3.0 <= dVar9) {
        pdVar8 = (double *)0x4;
      }
      pdVar1 = (double *)0x5;
      if (dVar9 < 4.0) {
        pdVar1 = pdVar8;
      }
      pdVar8 = (double *)0x6;
      if (dVar9 < 5.0) {
        pdVar8 = pdVar1;
      }
    }
  }
  else {
    func_0x00010bf8c620(pdVar4);
    _objc_retainAutoreleasedReturnValue();
    pdVar8 = pdVar3;
    func_0x00010bf529e0();
  }
  _objc_release(pdVar3);
LAB_108cfc52c:
  bVar2 = (int)lVar5 == 0;
  uVar10 = 0x4049000000000000;
  if (bVar2) {
    uVar10 = 0x404f000000000000;
  }
  dVar9 = 29.0;
  if (bVar2) {
    dVar9 = 35.0;
  }
  puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(dVar9 * (double)(long)pdVar8,uVar10,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_11277ae08),param_2,puVar7,param_5);
  _objc_release(puVar7);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + _DAT_11277ae0c),param_2,param_5);
  _objc_release(pdVar4);
  _objc_release(param_5);
  auVar11._8_8_ = uVar10;
  auVar11._0_8_ = dVar9 * (double)(long)pdVar8;
  return auVar11;
}



/* Entry: 108cfc5e4; end: 108cfc5eb; -[SCMultiSnapV2CollectionViewController collectionView:layout:minimumInteritemSpacingForSectionAtIndex:] */

undefined8 FUN_108cfc5e4(void)

{
  return 0x4014000000000000;
}



/* Entry: 108cfc5ec; end: 108cfc673; -[SCMultiSnapV2CollectionViewController collectionView:layout:insetForSectionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_108cfc5ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277ae1c);
  func_0x00010be38de0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0(uVar1,param_2,param_1);
  _objc_release(param_1);
  return 0;
}



/* Entry: 108cfc674; end: 108cfc81f; -[SCMultiSnapV2CollectionViewController videoPlaybackSession:didRenderFrameAtTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108cfc674(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)((long)param_1 + (long)_DAT_11277adfc);
  uStack_e8 = puVar1[1];
  uStack_f0 = *puVar1;
  uStack_e0 = puVar1[2];
  uStack_108 = param_4[1];
  uStack_110 = *param_4;
  uStack_100 = param_4[2];
  puVar6 = &uStack_f0;
  _CMTimeCompare(puVar6,&uStack_110);
  if ((int)puVar6 != 0) {
    uVar10 = param_4[1];
    uVar9 = *param_4;
    puVar1[2] = param_4[2];
    puVar1[1] = uVar10;
    *puVar1 = uVar9;
    lVar7 = (long)_DAT_11277ae18;
    lVar4 = *(long *)((long)param_1 + lVar7);
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar4);
        }
        uStack_e8 = param_4[1];
        uStack_f0 = *param_4;
        uStack_e0 = param_4[2];
        func_0x00010c288960(*(undefined8 *)(lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x00010bdf6f20(param_1);
    puVar6 = param_1;
    func_0x00010bddc160();
    if (((int)puVar6 != 0) && (*(long *)((long)param_1 + (long)_DAT_11277ae1c) == 0)) {
      puVar6 = *(undefined8 **)((long)param_1 + lVar7);
      func_0x00010c070ea0();
      if (((ulong)puVar6 & 1) == 0) {
        func_0x00010bdd1880(param_1);
        puVar6 = param_1;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar6;
  }
  ___stack_chk_fail();
  uVar3 = (uint)puVar6;
  func_0x00010bddc560();
  return (undefined8 *)(ulong)(uVar3 ^ 1);
}



/* Entry: 108cfc820; end: 108cfc837; -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCellShouldHandleTouch:] */

uint FUN_108cfc820(uint param_1)

{
  func_0x00010bddc560();
  return param_1 ^ 1;
}



/* Entry: 108cfc838; end: 108cfc83b; -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCell:didChangeStartTime:] */

void FUN_108cfc838(void)

{
  return;
}



/* Entry: 108cfc83c; end: 108cfc83f; -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCell:didChangeEndTime:] */

void FUN_108cfc83c(void)

{
  return;
}



/* Entry: 108cfc840; end: 108cfc91f; -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCell:didSeekToTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfc840(long param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  
  _objc_retain(param_3);
  pdVar1 = (double *)(param_1 + _DAT_11277adfc);
  if ((*(byte *)((long)pdVar1 + 0xc) & 1) != 0) {
    dStack_58 = pdVar1[1];
    dVar2 = *pdVar1;
    dStack_50 = pdVar1[2];
    dStack_60 = dVar2;
    _CMTimeGetSeconds(&dStack_60);
    dStack_58 = param_4[1];
    dVar3 = *param_4;
    dStack_50 = param_4[2];
    dStack_60 = dVar3;
    _CMTimeGetSeconds(&dStack_60);
    if (ABS(dVar2 - dVar3) <= 0.25) goto LAB_108cfc900;
  }
  param_1 = param_1 + _DAT_11277ae00;
  _objc_loadWeakRetained(param_1);
  dStack_58 = param_4[1];
  dStack_60 = *param_4;
  dStack_50 = param_4[2];
  _CMTimeGetSeconds(&dStack_60);
  func_0x00010c256600(param_1);
  _objc_release(param_1);
LAB_108cfc900:
  _objc_release(param_3);
  return;
}



/* Entry: 108cfc920; end: 108cfca13; -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCell:didTrimSegmentToRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfc920(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277ae18);
  func_0x00010bfecfa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c1554e0();
  lVar4 = (long)_DAT_11277ae04;
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  uStack_58 = param_4[3];
  uStack_60 = param_4[2];
  uStack_48 = param_4[5];
  uStack_50 = param_4[4];
  func_0x00010c289a00(*(undefined8 *)(param_1 + lVar4),param_2,&uStack_70,uVar3);
  lVar2 = param_1 + _DAT_11277ae00;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c26f640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287da0(lVar2,param_2,uVar3,0);
  _objc_release(uVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11277ae20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d24c0();
  _objc_release(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 108cfca14; end: 108cfca47; -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCellFinishedSeeking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfca14(long param_1)

{
  param_1 = param_1 + _DAT_11277ae00;
  _objc_loadWeakRetained(param_1);
  func_0x00010c13dae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cfca48; end: 108cfcd2b; -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCellDidPressDelete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfca48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bddc560();
  if ((int)lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277ae18);
    func_0x00010bfecfa0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1554e0();
    lVar1 = param_1 + _DAT_11277ae20;
    _objc_loadWeakRetained(lVar1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x108cfcb4c;
    puStack_60 = &UNK_110844b80;
    lStack_58 = param_1;
    uStack_50 = uVar2;
    uStack_48 = uVar3;
    _objc_retain(uVar2);
    func_0x00010c0d24e0(lVar1,param_2,param_1,&puStack_78);
    _objc_release(lVar1);
    _objc_release(uStack_50);
    _objc_release(uVar2);
  }
  else {
    func_0x00010bdd1880(param_1,param_2,1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108cfcd2c; end: 108cfcdf3; -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCellShouldShowDeleteButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108cfcd2c(ulong param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277ae1c;
  if ((*(long *)(param_1 + lVar6) == 0) ||
     (uVar2 = param_1, func_0x00010be34340(), (uVar2 & 1) != 0)) {
    bVar1 = false;
  }
  else {
    lVar3 = *(long *)(param_1 + (long)_DAT_11277ae04);
    func_0x00010c1585e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c1554e0(uVar4);
    lVar6 = lVar3;
    func_0x00010c0dfd40(lVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c268120(param_3);
    lVar5 = lVar6;
    func_0x00010c280560(lVar6);
    bVar1 = lVar3 == lVar5;
    _objc_release(lVar6);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108cfcdf4; end: 108cfcdf7; -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCell:didChangeSelectedTimeSlice:] */

void FUN_108cfcdf4(void)

{
  return;
}



/* Entry: 108cfcdf8; end: 108cfcdfb; -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCell:didChangeSelectedTimeRange:] */

void FUN_108cfcdf8(void)

{
  return;
}



/* Entry: 108cfcdfc; end: 108cfce5b; -[SCMultiSnapV2CollectionViewController snapSegmentExpandedCell:didMoveSplitterToX:canSplit:readyToSplit:] */

void FUN_108cfcdfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  func_0x00010bebeb60();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    func_0x00010c12e420();
  }
  else {
    func_0x00010c28a280(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108cfce5c; end: 108cfcf5f; -[SCMultiSnapV2CollectionViewController _splitTooltipHandlerForCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfce5c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277ae28;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar1 != lVar4) {
    func_0x00010bf3a040(*(undefined8 *)(param_1 + lVar5));
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
    _objc_release(uVar2);
  }
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar3 = PTR_PTR_1126dbbb0;
    _objc_alloc();
    lVar4 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003f40(puVar3,param_2,lVar4);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar3;
    _objc_release(uVar2);
    _objc_release(lVar4);
    func_0x00010c217060(0xc018000000000000,*(undefined8 *)(param_1 + lVar5));
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108cfcf60; end: 108cfcf97; -[SCMultiSnapV2CollectionViewController _isCapturing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108cfcf60(long param_1)

{
  param_1 = param_1 + _DAT_11277ae00;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 == 0;
}



/* Entry: 108cfcf98; end: 108cfd033; -[SCMultiSnapV2CollectionViewController _segmentCellAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfcf98(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_11277ae18);
  func_0x00010be38de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b0d88;
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cfd034; end: 108cfd0ab; -[SCMultiSnapV2CollectionViewController _updateCollectionViewCellsLayout] */

void FUN_108cfd034(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108cfd0ac;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf03460(0x3fd0000000000000,0,0x3fe6666666666666,0,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,0,&puStack_38,0);
  return;
}



/* Entry: 108cfd0ac; end: 108cfd14f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfd0ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = (long)_DAT_11277ae1c;
  if (*(long *)(lVar1 + lVar2) != 0) {
    func_0x00010bea2b60(lVar1,param_2,1);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  if (*(long *)(lVar1 + _DAT_11277ae24) != 0) {
    func_0x00010bea2b60();
    lVar1 = *(long *)(param_1 + 0x20);
  }
  lVar3 = (long)_DAT_11277ae18;
  func_0x00010c0f8420(*(undefined8 *)(lVar1 + lVar3));
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1525b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3),
               PTR_s_scrollToItemAtIndexPath_atScroll_112632388,lVar1,0x10,0);
    return;
  }
  return;
}



/* Entry: 108cfd150; end: 108cfd153;  */

void FUN_108cfd150(void)

{
  return;
}



/* Entry: 108cfd154; end: 108cfd267; -[SCMultiSnapV2CollectionViewController _selectSegmentAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfd154(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277ae1c;
  uVar1 = *(ulong *)(param_1 + lVar3);
  if (uVar1 != 0) {
    lVar2 = param_1;
    func_0x00010be38de0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(uVar1,param_2,lVar2);
    _objc_release(lVar2);
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar1 = *(ulong *)(param_1 + lVar3);
    if (uVar1 != 0) {
      lVar3 = param_1;
      func_0x00010be38de0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071ae0(uVar1,param_2,lVar3);
      _objc_release(lVar3);
      if ((uVar1 & 1) == 0) {
        func_0x00010bdfb120(param_1);
      }
    }
  }
  lVar3 = param_1;
  func_0x00010be38de0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_11277ae18;
  func_0x00010c158b60(*(undefined8 *)(param_1 + lVar2),param_2,lVar3,1,0);
  func_0x00010bf40200(param_1,param_2,*(undefined8 *)(param_1 + lVar2),lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 108cfd268; end: 108cfd2cb; -[SCMultiSnapV2CollectionViewController _deselectSelectedSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfd268(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_11277ae1c;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 != 0) {
    lVar3 = (long)_DAT_11277ae18;
    func_0x00010bf6e840(*(undefined8 *)(param_1 + lVar3),param_2,lVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bf40190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_collectionView_didDeselectItemAt_1125ada08,
               *(undefined8 *)(param_1 + lVar3),*(undefined8 *)(param_1 + lVar2));
    return;
  }
  return;
}



/* Entry: 108cfd2cc; end: 108cfd427; -[SCMultiSnapV2CollectionViewController _currentPlayingIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_108cfd2cc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  lVar8 = (long)_DAT_11277ae04;
  lVar2 = *(long *)(param_1 + lVar8);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar7 = 0;
    do {
      lVar2 = *(long *)(param_1 + lVar8);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x00010c27c900(&uStack_a0,lVar3);
      }
      _CMTimeRangeGetEnd(auStack_68,&uStack_a0);
      puVar1 = (undefined8 *)(param_1 + _DAT_11277adfc);
      uStack_98 = puVar1[1];
      uStack_a0 = *puVar1;
      uStack_90 = puVar1[2];
      puVar4 = auStack_68;
      _CMTimeCompare(puVar4,&uStack_a0);
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (-1 < (int)puVar4) {
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      uVar5 = *(ulong *)(param_1 + lVar8);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
    } while (uVar7 < uVar6);
  }
  lVar2 = *(long *)(param_1 + lVar8);
  func_0x00010c1585e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  return lVar3 - 1;
}



/* Entry: 108cfd428; end: 108cfd43b; -[SCMultiSnapV2CollectionViewController _indexPathForSegmentAtIndex:] */

void FUN_108cfd428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfed070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSIndexPath_1126b0990,PTR_s_indexPathForRow_inSection__1125d8de0,0,
             param_3);
  return;
}



/* Entry: 108cfd43c; end: 108cfd487; -[SCMultiSnapV2CollectionViewController _hasOnlyOneSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108cfd43c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11277ae04);
  func_0x00010c1585e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  return lVar2 == 1;
}



/* Entry: 108cfd488; end: 108cfd58f; -[SCMultiSnapV2CollectionViewController _setCollectionViewCellSelected:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfd488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1554e0(param_4);
  lVar4 = lVar3;
  func_0x00010c0dfd40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar5 = *(ulong *)(param_1 + _DAT_11277ae18);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar6 = PTR_PTR_1126b0d88;
  _objc_opt_class(PTR_PTR_1126b0d88);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar1 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  func_0x00010bea71e0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 108cfd590; end: 108cfd7f3; -[SCMultiSnapV2CollectionViewController _setSegmentCell:collapsed:withSegment:] */

/* WARNING: Possible PIC construction at 0x000108cfd6f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108cfd6f8) */

void FUN_108cfd590(int param_1,long param_2,undefined8 param_3,int param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c17e480(param_3);
  lVar1 = param_5;
  if (param_4 == 0) {
    func_0x00010c26db80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214080(param_3);
LAB_108cfd660:
    _objc_release(lVar1);
  }
  else {
    func_0x00010be34340();
    func_0x00010bf8c620();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      lVar2 = lVar1;
      func_0x00010c0b8600(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214080(param_3);
LAB_108cfd634:
      _objc_release(lVar2);
      goto LAB_108cfd660;
    }
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126ae558;
    if (lVar2 != 0) {
      func_0x00010bf8c620(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x00010bfe9ca0;
    }
    lVar1 = param_5;
    func_0x00010c26db80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_5;
      func_0x00010c26db80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214080(param_3);
      _objc_release(puVar3);
      goto LAB_108cfd634;
    }
    func_0x00010c214080(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126ae558;
  param_5 = param_2;
code_r0x00010bfe9ca0:
                    /* WARNING: Could not recover jumptable at 0x00010bfe9cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s_immediateFutureWithValue__1125d80f0,param_5);
  return;
}



/* Entry: 108cfd7f4; end: 108cfd803;  */

void FUN_108cfd7f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe9cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae558,PTR_s_immediateFutureWithValue__1125d80f0,param_2);
  return;
}



/* Entry: 108cfd804; end: 108cfd887; -[SCMultiSnapV2CollectionViewController _isCellDemotedAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cfd804(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be3eb80();
  if ((uVar1 & 1) == 0) {
    lVar3 = (long)_DAT_11277ae1c;
    if (*(long *)(param_1 + lVar3) == 0) {
LAB_108cfd85c:
      func_0x00010be34340();
      if ((param_1 & 1) == 0) goto LAB_108cfd830;
    }
    else {
      uVar2 = param_3;
      func_0x00010c071ae0();
      if ((int)uVar2 != 0) {
        if (*(long *)(param_1 + lVar3) != 0) goto LAB_108cfd830;
        goto LAB_108cfd85c;
      }
    }
    uVar2 = 1;
  }
  else {
LAB_108cfd830:
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108cfd888; end: 108cfd8a7; -[SCMultiSnapV2CollectionViewController segmentOperationDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfd888(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ae2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cfd8a8; end: 108cfd8bb; -[SCMultiSnapV2CollectionViewController setSegmentOperationDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfd8a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ae2c,param_3);
  return;
}



/* Entry: 108cfd8bc; end: 108cfd8db; -[SCMultiSnapV2CollectionViewController previewDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfd8bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ae20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cfd8dc; end: 108cfd8ef; -[SCMultiSnapV2CollectionViewController setPreviewDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfd8dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ae20,param_3);
  return;
}



/* Entry: 108cfd8f0; end: 108cfd9a3; -[SCMultiSnapV2CollectionViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cfd8f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ae20);
  _objc_destroyWeak(param_1 + _DAT_11277ae2c);
  _objc_storeStrong(param_1 + _DAT_11277ae28,0);
  _objc_storeStrong(param_1 + _DAT_11277ae0c,0);
  _objc_storeStrong(param_1 + _DAT_11277ae08,0);
  _objc_storeStrong(param_1 + _DAT_11277ae04,0);
  _objc_storeStrong(param_1 + _DAT_11277ae24,0);
  _objc_storeStrong(param_1 + _DAT_11277ae1c,0);
  _objc_storeStrong(param_1 + _DAT_11277ae18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277ae00);
  return;
}



/* Entry: 108cfd9a4; end: 108cfd9ab; -[SCMultiSnapVideoSegmentedExportSessionTask videoAsset] */

undefined8 FUN_108cfd9a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cfd9ac; end: 108cfd9db; -[SCMultiSnapVideoSegmentedExportSessionTask setVideoAsset:] */

void FUN_108cfd9ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cfd9dc; end: 108cfd9ef; -[SCMultiSnapVideoSegmentedExportSessionTask timeRange] */

void FUN_108cfd9dc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  param_1[1] = *(undefined8 *)(param_2 + 0x48);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  param_1[5] = *(undefined8 *)(param_2 + 0x68);
  param_1[4] = uVar1;
  return;
}



/* Entry: 108cfd9f0; end: 108cfda03; -[SCMultiSnapVideoSegmentedExportSessionTask setTimeRange:] */

void FUN_108cfd9f0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar3 = param_3[2];
  uVar5 = param_3[5];
  uVar4 = param_3[4];
  *(undefined8 *)(param_1 + 0x58) = param_3[3];
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}



/* Entry: 108cfda04; end: 108cfda0b; -[SCMultiSnapVideoSegmentedExportSessionTask shouldForceReencode] */

undefined1 FUN_108cfda04(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108cfda0c; end: 108cfda13; -[SCMultiSnapVideoSegmentedExportSessionTask setShouldForceReencode:] */

void FUN_108cfda0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108cfda14; end: 108cfda1b; -[SCMultiSnapVideoSegmentedExportSessionTask completionQueue] */

undefined8 FUN_108cfda14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cfda1c; end: 108cfda4b; -[SCMultiSnapVideoSegmentedExportSessionTask setCompletionQueue:] */

void FUN_108cfda1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cfda4c; end: 108cfda53; -[SCMultiSnapVideoSegmentedExportSessionTask completionHandler] */

undefined8 FUN_108cfda4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cfda54; end: 108cfda5b; -[SCMultiSnapVideoSegmentedExportSessionTask setCompletionHandler:] */

void FUN_108cfda54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cfda5c; end: 108cfda63; -[SCMultiSnapVideoSegmentedExportSessionTask exportSession] */

undefined8 FUN_108cfda5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cfda64; end: 108cfda93; -[SCMultiSnapVideoSegmentedExportSessionTask setExportSession:] */

void FUN_108cfda64(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108cfda94; end: 108cfda9b; -[SCMultiSnapVideoSegmentedExportSessionTask succeeded] */

undefined1 FUN_108cfda94(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108cfda9c; end: 108cfdaa3; -[SCMultiSnapVideoSegmentedExportSessionTask setSucceeded:] */

void FUN_108cfda9c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 108cfdaa4; end: 108cfdaab; -[SCMultiSnapVideoSegmentedExportSessionTask cancelled] */

undefined1 FUN_108cfdaa4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108cfdaac; end: 108cfdab3; -[SCMultiSnapVideoSegmentedExportSessionTask setCancelled:] */

void FUN_108cfdaac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 108cfdab4; end: 108cfdabb; -[SCMultiSnapVideoSegmentedExportSessionTask url] */

undefined8 FUN_108cfdab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108cfdabc; end: 108cfdaeb; -[SCMultiSnapVideoSegmentedExportSessionTask setUrl:] */

void FUN_108cfdabc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cfdaec; end: 108cfdaf3; -[SCMultiSnapVideoSegmentedExportSessionTask error] */

undefined8 FUN_108cfdaec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108cfdaf4; end: 108cfdb23; -[SCMultiSnapVideoSegmentedExportSessionTask setError:] */

void FUN_108cfdaf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cfdb24; end: 108cfdb83; -[SCMultiSnapVideoSegmentedExportSessionTask .cxx_destruct] */

void FUN_108cfdb24(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108cfdb84; end: 108cfdc8b; -[SCMultiSnapVideoSegmentedExportSession initWithVideoAsset:circumstanceEngine:] */

undefined1 *
FUN_108cfdb84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe4c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


