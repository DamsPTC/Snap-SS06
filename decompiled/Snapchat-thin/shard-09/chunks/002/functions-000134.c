/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a81168; end: 106a811a3;  */

void FUN_106a81168(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x100) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x100) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a811a4; end: 106a8120f; -[SCSpotlightOperaPresenterImpl _setUseSoundStripHidden:] */

void FUN_106a811a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_38 = 0xc2000000;
    pcStack_30 = FUN_106a81210;
    puStack_28 = &UNK_110845ce0;
    lStack_20 = param_1;
    uStack_18 = param_3;
    func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_40);
  }
  return;
}



/* Entry: 106a81210; end: 106a81227;  */

void FUN_106a81210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)(*(byte *)(param_1 + 0x28) ^ 1),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106a81228; end: 106a8125b; -[SCSpotlightOperaPresenterImpl _removeUseSoundStrip] */

void FUN_106a81228(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0xd8));
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0xf0) = 0;
  return;
}



/* Entry: 106a8125c; end: 106a8129b; -[SCSpotlightOperaPresenterImpl removeSpotlightScope:] */

void FUN_106a8125c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    (**(code **)(*(long *)(param_1 + 0xa0) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106a8129c; end: 106a812e3; -[SCSpotlightOperaPresenterImpl _cleanupSpotlightScope] */

void FUN_106a8129c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xb8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106a812e4; end: 106a8143f; -[SCSpotlightOperaPresenterImpl _presentSingleSnapWithStory:presentingViewController:sourcePage:playbackCompletion:] */

void FUN_106a812e4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if ((param_3 == 0) || (param_4 == 0)) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6);
    }
  }
  else {
    puVar1 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    func_0x00010c038f40();
    puVar2 = PTR_PTR_1126c68b8;
    func_0x00010c0d0a00(PTR_PTR_1126c68b8,param_2,param_3,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010bf241c0(uVar3,param_2,puVar1,0,0,0,puVar2,param_5,0x57,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    func_0x00010bddfa80(param_1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xb8),param_2,uVar3);
    lVar4 = param_6;
    _objc_retainBlock();
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    *(long *)(param_1 + 0xa0) = lVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a81440; end: 106a81623; -[SCSpotlightOperaPresenterImpl _presentSnapWithStory:presentingViewController:sourcePage:startTimeMs:playbackCompletion:] */

void FUN_106a81440(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_3 == 0) || (param_4 == 0)) {
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7);
    }
  }
  else {
    puVar1 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    func_0x00010c038f40();
    puVar3 = PTR_PTR_1126c68b8;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = 0;
    uStack_78 = param_6;
    func_0x00010c0d0ac0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    param_5 = *(undefined8 *)(param_1 + 0xd0);
    uStack_80 = 0x57;
    uStack_78 = 0xffffffffffffffff;
    lVar6 = 0;
    func_0x00010bf241c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    func_0x00010bddfa80(param_1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xb8));
    lVar4 = param_7;
    _objc_retainBlock();
    uVar7 = *(undefined8 *)(param_1 + 0xa0);
    *(long *)(param_1 + 0xa0) = lVar4;
    _objc_release(uVar7);
    _objc_release(param_5);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  lVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_106a81624;
  uStack_c0 = param_5;
  lStack_b8 = param_1;
  lStack_b0 = param_7;
  uStack_a8 = param_6;
  lStack_a0 = param_4;
  lStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(lVar6);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_106a81758;
  puStack_d8 = &UNK_110959f28;
  puStack_d0 = puVar3;
  lStack_c8 = lVar6;
  _objc_retain(lVar6);
  ppuVar5 = &puStack_f0;
  _objc_retainBlock();
  uVar7 = *(undefined8 *)(lVar4 + 0x60);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010846f16c();
  _objc_release(uVar7);
  _objc_release(ppuVar5);
  _objc_release(lStack_c8);
  _objc_release(lVar6);
  _objc_release(puVar3);
  return;
}



/* Entry: 106a81624; end: 106a81757; -[SCSpotlightOperaPresenterImpl _fetchSingleSnapDiscoverFeedStoryWithSnapId:completion:] */

void FUN_106a81624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106a81758;
  puStack_58 = &UNK_110959f28;
  puStack_50 = puVar1;
  uStack_48 = param_4;
  _objc_retain(param_4);
  ppuVar2 = &puStack_70;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010846f16c();
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 106a81758; end: 106a8176b;  */

void FUN_106a81758(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106a81764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106a8176c; end: 106a818c3; -[SCSpotlightOperaPresenterImpl _showStoryExpiredErrorOverViewController:] */

void FUN_106a8176c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1c718;
  uVar5 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c718,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  func_0x00010c10eda0(param_3);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 106a818c4; end: 106a818d3;  */

void FUN_106a818c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106a818d4; end: 106a818eb; -[SCSpotlightOperaPresenterImpl delegate] */

void FUN_106a818d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a818ec; end: 106a818f7; -[SCSpotlightOperaPresenterImpl setDelegate:] */

void FUN_106a818ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xf8,param_3);
  return;
}



/* Entry: 106a818f8; end: 106a818ff; -[SCSpotlightOperaPresenterImpl useSoundBlock] */

undefined8 FUN_106a818f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 106a81900; end: 106a81907; -[SCSpotlightOperaPresenterImpl setUseSoundBlock:] */

void FUN_106a81900(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106a81908; end: 106a81a6f; -[SCSpotlightOperaPresenterImpl .cxx_destruct] */

void FUN_106a81908(long param_1)

{
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_destroyWeak(param_1 + 0xf8);
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a81a70; end: 106a81b73; +[SCSpotlightStoryOperaMediaBundleHelper mediaBundleFromSnap:snapItemId:displayName:userName:userId:businessId:bitmojiAvatarId:bitmojiAvatarSelfieId:compositeStoryId:storyType:] */

void FUN_106a81a70(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x000107d03434(0,param_3,0,param_5,param_6,param_7,param_8,param_9,param_10,param_11,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_4;
    FUN_10722e71c(param_4,param_3,0xffffffffffffffff,1,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a81b74; end: 106a81c07; -[SCSpotlightManagementPlaybackDataProvider initWithCircumstanceEngine:] */

undefined1 * FUN_106a81b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4858;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a81c08; end: 106a81e4f; -[SCSpotlightManagementPlaybackDataProvider storiesPlaybackMetadataForStoryIds:completion:] */

void FUN_106a81c08(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 != 0) && (ppuVar1 = param_3, func_0x00010bf529e0(), ppuVar1 != (undefined **)0x0)) {
    ppuVar1 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 8);
    _objc_retain();
    func_0x00010bf97ce0(uVar8);
    ppuVar7 = &puStack_50;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  ppuVar1 = ppuVar7;
  func_0x00010bf529e0();
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar1 = ppuVar7;
    func_0x00010bfb1920(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar1;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf0a8c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c22c3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar1);
    ppuVar1 = ppuVar7;
    func_0x000107a85430(ppuVar7,ppuVar6,*(undefined8 *)(param_3[4] + 0x10),1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(param_3[5]);
    _objc_release(ppuVar1);
    _objc_release(ppuVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 106a81e50; end: 106a81e57; -[SCSpotlightManagementPlaybackDataProvider userStoryPlaybackSequenceByStoryId:clientId:] */

undefined8 FUN_106a81e50(void)

{
  return 0;
}



/* Entry: 106a81e58; end: 106a81e5f; -[SCSpotlightManagementPlaybackDataProvider customStoryPlaybackSequenceByPublicationId:clientId:] */

undefined8 FUN_106a81e58(void)

{
  return 0;
}



/* Entry: 106a81e60; end: 106a81f97; -[SCSpotlightManagementPlaybackDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:] */

void FUN_106a81e60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bfb1920(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf0a8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c22c3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x000107a85430(lVar1,lVar5,*(undefined8 *)(param_1 + 0x10),1,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cc620;
    _objc_alloc(PTR_PTR_1126cc620);
    func_0x00010c032680();
    _objc_release(lVar2);
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106a81f98; end: 106a81f9f; -[SCSpotlightManagementPlaybackDataProvider topicStoryPlaybackSequenceByTopicStoryId:] */

undefined8 FUN_106a81f98(void)

{
  return 0;
}



/* Entry: 106a81fa0; end: 106a81fa7; -[SCSpotlightManagementPlaybackDataProvider singleSnapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_106a81fa0(void)

{
  return 0;
}



/* Entry: 106a81fa8; end: 106a81faf; -[SCSpotlightManagementPlaybackDataProvider bundleStoryPlaybackSequenceByBundleStoryId:] */

undefined8 FUN_106a81fa8(void)

{
  return 0;
}



/* Entry: 106a81fb0; end: 106a81fb7; -[SCSpotlightManagementPlaybackDataProvider mapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_106a81fb0(void)

{
  return 0;
}



/* Entry: 106a81fb8; end: 106a81fbf; -[SCSpotlightManagementPlaybackDataProvider savedStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_106a81fb8(void)

{
  return 0;
}



/* Entry: 106a81fc0; end: 106a81fc3; -[SCSpotlightManagementPlaybackDataProvider triggerPaginationByCompositeId:identifier:] */

void FUN_106a81fc0(void)

{
  return;
}



/* Entry: 106a81fc4; end: 106a8203f; -[SCSpotlightManagementPlaybackDataProvider registerSnapPlaybackInfos:withIdentifier:] */

void FUN_106a81fc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x18);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a82040; end: 106a820b7; -[SCSpotlightManagementPlaybackDataProvider singleSnapPlaybackInfoWithIdentifier:] */

void FUN_106a82040(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a820b8; end: 106a820e7; -[SCSpotlightManagementPlaybackDataProvider .cxx_destruct] */

void FUN_106a820b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a820e8; end: 106a821e7; -[SCTopicPagePlaybackDataProvider initWithTopicPlaybackInfoMap:topic:displayName:storiesConfig:] */

undefined1 *
FUN_106a820e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f4860;
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
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a821e8; end: 106a822bb; -[SCTopicPagePlaybackDataProvider updatePlaybackInfoMap:] */

void FUN_106a821e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0d3c80();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106a822bc;
  puStack_40 = &UNK_110959f78;
  _objc_retain();
  uStack_38 = uVar1;
  func_0x00010bf97ce0(param_3,param_2,&puStack_58);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a822bc; end: 106a822c7;  */

void FUN_106a822bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             param_2);
  return;
}



/* Entry: 106a822c8; end: 106a8243f; -[SCTopicPagePlaybackDataProvider storiesPlaybackMetadataForStoryIds:completion:] */

void FUN_106a822c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(puVar1);
  func_0x00010bf97ce0(uVar3);
  _os_unfair_lock_unlock(param_1 + 0x28);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  (**(code **)(param_4 + 0x10))(param_4,puVar2);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a82440; end: 106a82447; -[SCTopicPagePlaybackDataProvider userStoryPlaybackSequenceByStoryId:clientId:] */

undefined8 FUN_106a82440(void)

{
  return 0;
}



/* Entry: 106a82448; end: 106a8244f; -[SCTopicPagePlaybackDataProvider customStoryPlaybackSequenceByPublicationId:clientId:] */

undefined8 FUN_106a82448(void)

{
  return 0;
}



/* Entry: 106a82450; end: 106a82457; -[SCTopicPagePlaybackDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:] */

undefined8 FUN_106a82450(void)

{
  return 0;
}



/* Entry: 106a82458; end: 106a825b7; -[SCTopicPagePlaybackDataProvider topicStoryPlaybackSequenceByTopicStoryId:] */

void FUN_106a82458(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c245680(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107a830b8();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d0048;
    _objc_alloc(PTR_PTR_1126d0048);
    lVar4 = lVar1;
    func_0x00010bf82560(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c0b3ae0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04d8e0(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106a825b8; end: 106a825bf; -[SCTopicPagePlaybackDataProvider singleSnapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_106a825b8(void)

{
  return 0;
}



/* Entry: 106a825c0; end: 106a825c7; -[SCTopicPagePlaybackDataProvider mapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_106a825c0(void)

{
  return 0;
}



/* Entry: 106a825c8; end: 106a825cf; -[SCTopicPagePlaybackDataProvider savedStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_106a825c8(void)

{
  return 0;
}



/* Entry: 106a825d0; end: 106a825d3; -[SCTopicPagePlaybackDataProvider triggerPaginationByCompositeId:identifier:] */

void FUN_106a825d0(void)

{
  return;
}



/* Entry: 106a825d4; end: 106a825db; -[SCTopicPagePlaybackDataProvider bundleStoryPlaybackSequenceByBundleStoryId:] */

undefined8 FUN_106a825d4(void)

{
  return 0;
}



/* Entry: 106a825dc; end: 106a82623; -[SCTopicPagePlaybackDataProvider .cxx_destruct] */

void FUN_106a825dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a82624; end: 106a827e7; -[SCSpotlightOperaViewControllerTransitionAnimator initWithParentViewController:dismissGestureRecognizer:baseView:storiesConfigProvider:] */

undefined1 *
FUN_106a82624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126f4868;
  uStack_80 = param_5;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x48),param_7);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_8;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c29bf00(param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),uVar2);
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be948c0();
    *(undefined1 **)((long)puVar1 + 0x38) = puVar3;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x60),param_9);
    _objc_retain();
    puVar3 = (undefined1 *)((long)puVar1 + 0x60);
    _objc_loadWeakRetained(puVar3);
    func_0x00010bf20c00();
    puVar4 = (undefined1 *)((long)puVar1 + 0x48);
    _objc_loadWeakRetained(puVar4);
    puVar5 = puVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51460(param_9);
    *(undefined8 *)((long)puVar1 + 0x78) = param_1;
    *(undefined8 *)((long)puVar1 + 0x80) = param_2;
    *(undefined8 *)((long)puVar1 + 0x88) = param_3;
    *(undefined8 *)((long)puVar1 + 0x90) = param_4;
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_9);
    func_0x00010beac180(puVar1);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 106a827e8; end: 106a828c7; -[SCSpotlightOperaViewControllerTransitionAnimator present:] */

void FUN_106a827e8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d0050;
  _objc_alloc();
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c033fe0();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c16f4c0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c209d00(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x18));
  func_0x00010beaaba0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf03270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_animateTransition__11259e640,0);
  return;
}



/* Entry: 106a828c8; end: 106a8293b; -[SCSpotlightOperaViewControllerTransitionAnimator dismiss:] */

void FUN_106a828c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c29c400();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c29c4c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be029f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissDidFinish__11255e418,param_3);
  return;
}



/* Entry: 106a8293c; end: 106a8293f; -[SCSpotlightOperaViewControllerTransitionAnimator updateDismissalAnimationVolumeControl:] */

void FUN_106a8293c(void)

{
  return;
}



/* Entry: 106a82940; end: 106a82963; -[SCSpotlightOperaViewControllerTransitionAnimator resetGestureIfNecessary] */

void FUN_106a82940(long param_1)

{
  func_0x00010beac180();
                    /* WARNING: Could not recover jumptable at 0x00010c138c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_resetGestureIfNecessary_11262bd38);
  return;
}



/* Entry: 106a82964; end: 106a82967; -[SCSpotlightOperaViewControllerTransitionAnimator enableFadeTransitionInDismissal:fadingViews:] */

void FUN_106a82964(void)

{
  return;
}



/* Entry: 106a82968; end: 106a8296b; -[SCSpotlightOperaViewControllerTransitionAnimator disableFadeTransitionInDismissal] */

void FUN_106a82968(void)

{
  return;
}



/* Entry: 106a8296c; end: 106a8296f; -[SCSpotlightOperaViewControllerTransitionAnimator updateBaseView:baseViewOrientation:topInset:transitionMode:] */

void FUN_106a8296c(void)

{
  return;
}



/* Entry: 106a82970; end: 106a82973; -[SCSpotlightOperaViewControllerTransitionAnimator updateTransitionMode:] */

void FUN_106a82970(void)

{
  return;
}



/* Entry: 106a82974; end: 106a8297b; -[SCSpotlightOperaViewControllerTransitionAnimator transitionMode] */

undefined8 FUN_106a82974(void)

{
  return 0;
}



/* Entry: 106a8297c; end: 106a82983; -[SCSpotlightOperaViewControllerTransitionAnimator dismissalSwipeDirection] */

undefined8 FUN_106a8297c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106a82984; end: 106a829b7; -[SCSpotlightOperaViewControllerTransitionAnimator viewControllerTransitionAnimatorWillBeginPresenting] */

void FUN_106a82984(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29c4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a829b8; end: 106a82a0f; -[SCSpotlightOperaViewControllerTransitionAnimator viewControllerTransitionAnimatorDidFinishPresenting] */

void FUN_106a829b8(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x20) = 0;
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c29c460();
  _objc_release(lVar1);
  if (*(char *)(param_1 + 0x21) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bf82f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismiss__1125be580,0);
    return;
  }
  return;
}



/* Entry: 106a82a10; end: 106a82a53; -[SCSpotlightOperaViewControllerTransitionAnimator viewControllerPresentationAnimatorDidCreateBaseViewForDismissal:] */

void FUN_106a82a10(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x60,param_3);
  func_0x00010c16f460(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a82a54; end: 106a82b7f; -[SCSpotlightOperaViewControllerTransitionAnimator setBaseView:] */

void FUN_106a82a54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12c960();
  _objc_release(lVar1);
  func_0x00010c283ba0(*(undefined8 *)(param_1 + 0x18));
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf16300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x60,uVar2);
  _objc_release(uVar2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar4);
  func_0x00010befbb60(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1677c0(0);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c228460(uVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c16f460(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a82b80; end: 106a82c2f; -[SCSpotlightOperaViewControllerTransitionAnimator gestureRecognizerShouldBegin:] */

long FUN_106a82b80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (param_3 == lVar2) {
    lVar1 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c264780(lVar2,param_2,lVar1);
    _objc_release(lVar1);
    *(long *)(param_1 + 0x28) = lVar2;
    lVar2 = param_1 + 0x58;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      lVar1 = 1;
    }
    else {
      param_1 = param_1 + 0x58;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c29c4a0();
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
  else {
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 106a82c30; end: 106a82ddf; -[SCSpotlightOperaViewControllerTransitionAnimator gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

bool FUN_106a82c30(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7,ulong param_8)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_8);
  if (param_7 != *(long *)(param_5 + 8)) {
LAB_106a82c64:
    bVar4 = true;
    goto LAB_106a82cf4;
  }
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_opt_class(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  uVar2 = param_8;
  _objc_opt_isKindOfClass(param_8,puVar1);
  puVar1 = PTR_DAT_1126a56e8;
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_8);
    uVar2 = param_8;
    func_0x00010010fab4(param_8,puVar1);
    _objc_release(param_8);
    if ((param_8 == 0) || ((uVar2 & 1) == 0)) {
      puVar1 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868;
      _objc_opt_class(PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868);
      uVar2 = param_8;
      _objc_opt_isKindOfClass(param_8,puVar1);
      if ((uVar2 & 1) == 0) {
        puVar1 = PTR_PTR_1126d0058;
        _objc_opt_class(PTR_PTR_1126d0058);
        uVar2 = param_8;
        _objc_opt_isKindOfClass(param_8,puVar1);
        if ((uVar2 & 1) == 0) {
          puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
          _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
          uVar2 = param_8;
          _objc_opt_isKindOfClass(param_8,puVar1);
          if ((uVar2 & 1) == 0) goto LAB_106a82c64;
          uVar2 = param_8;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
          _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
          uVar3 = uVar2;
          _objc_opt_isKindOfClass(uVar2,puVar1);
          if ((uVar3 & 1) == 0) {
            bVar4 = true;
          }
          else {
            _objc_retain(uVar2);
            func_0x00010bf4d5e0(uVar2);
            dVar5 = param_1;
            func_0x00010bf20c00(uVar2);
            if (param_1 <= param_3) {
LAB_106a82da0:
              func_0x00010c2bf2a0(uVar2);
              dVar6 = dVar5;
              func_0x00010c0ce7a0(uVar2);
              bVar4 = dVar5 <= dVar6;
            }
            else {
              func_0x00010bf4d5e0(uVar2);
              func_0x00010bf20c00(uVar2);
              if (param_4 < param_2) goto LAB_106a82da0;
              bVar4 = false;
            }
            _objc_release(uVar2);
          }
          _objc_release(uVar2);
          goto LAB_106a82cf4;
        }
      }
    }
  }
  bVar4 = false;
LAB_106a82cf4:
  _objc_release(param_8);
  return bVar4;
}



/* Entry: 106a82de0; end: 106a82e4f; -[SCSpotlightOperaViewControllerTransitionAnimator _resolveCATransactionFlushMode] */

ulong FUN_106a82de0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126c11f8;
  func_0x00010bf261a0(PTR_PTR_1126c11f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067e20(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  if (2 < uVar2) {
    uVar2 = *(ulong *)(param_1 + 0x30);
    func_0x00010bf7fba0(uVar2);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



/* Entry: 106a82e50; end: 106a82ee7; -[SCSpotlightOperaViewControllerTransitionAnimator _setupDismissGestureRecognizer] */

void FUN_106a82e50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010c18b5e0(*(long *)(param_1 + 8),param_2,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0();
    _objc_release(uVar1);
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106a82ee8; end: 106a83047; -[SCSpotlightOperaViewControllerTransitionAnimator _setupAuxViewAnimatorIfPossible] */

void FUN_106a82ee8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 != 0)) {
    if (*(long *)(param_1 + 0x40) == 0) {
      puVar3 = PTR_PTR_1126d0060;
      _objc_alloc();
      func_0x00010c034040(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      *(undefined **)(param_1 + 0x40) = puVar3;
      _objc_release(uVar5);
    }
    lVar4 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x40),param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c16f460(*(undefined8 *)(param_1 + 0x40),param_2,lVar4);
    _objc_release(lVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf63480(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1893e0(*(undefined8 *)(param_1 + 0x40),param_2,uVar5);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c18c2e0(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),uVar5,
                        *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x40));
    lVar4 = lVar1;
    func_0x00010c29bf00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c148fc0();
    func_0x00010c217440(*(undefined8 *)(param_1 + 0x40));
    _objc_release(lVar4);
    lVar4 = lVar1;
    func_0x00010c29bf00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c148fc0();
    func_0x00010c173600(uVar5,*(undefined8 *)(param_1 + 0x40));
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a83048; end: 106a831df; -[SCSpotlightOperaViewControllerTransitionAnimator _dismissDidFinish:] */

void FUN_106a83048(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf17b00();
  _objc_release(lVar3);
  lVar3 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar3);
  lVar1 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar3 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c2a6740();
  _objc_release(lVar3);
  lVar3 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c12c8e0();
  _objc_release(lVar3);
  lVar3 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf941a0();
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf63480(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar2);
  lVar3 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar3);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12b760(lVar3,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar3 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar3);
  lVar1 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained();
  if ((lVar3 != 0) && (lVar3 = *(long *)(param_1 + 8), _objc_release(), lVar3 != 0)) {
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bef9040();
    _objc_release(lVar3);
  }
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29c440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a831e0; end: 106a831f7; -[SCSpotlightOperaViewControllerTransitionAnimator parentVC] */

void FUN_106a831e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a831f8; end: 106a8320f; -[SCSpotlightOperaViewControllerTransitionAnimator childVC] */

void FUN_106a831f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a83210; end: 106a8321b; -[SCSpotlightOperaViewControllerTransitionAnimator setChildVC:] */

void FUN_106a83210(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 106a8321c; end: 106a83233; -[SCSpotlightOperaViewControllerTransitionAnimator delegate] */

void FUN_106a8321c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a83234; end: 106a8323f; -[SCSpotlightOperaViewControllerTransitionAnimator setDelegate:] */

void FUN_106a83234(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 106a83240; end: 106a8324b; -[SCSpotlightOperaViewControllerTransitionAnimator baseViewFrame] */

undefined8 FUN_106a83240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106a8324c; end: 106a83257; -[SCSpotlightOperaViewControllerTransitionAnimator setBaseViewFrame:] */

void FUN_106a8324c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x78) = param_1;
  *(undefined8 *)(param_5 + 0x80) = param_2;
  *(undefined8 *)(param_5 + 0x88) = param_3;
  *(undefined8 *)(param_5 + 0x90) = param_4;
  return;
}



/* Entry: 106a83258; end: 106a8326f; -[SCSpotlightOperaViewControllerTransitionAnimator baseView] */

void FUN_106a83258(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a83270; end: 106a83287; -[SCSpotlightOperaViewControllerTransitionAnimator volumeController] */

void FUN_106a83270(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a83288; end: 106a83293; -[SCSpotlightOperaViewControllerTransitionAnimator setVolumeController:] */

void FUN_106a83288(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 106a83294; end: 106a8329b; -[SCSpotlightOperaViewControllerTransitionAnimator dismissInteractionType] */

undefined8 FUN_106a83294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106a8329c; end: 106a832a3; -[SCSpotlightOperaViewControllerTransitionAnimator setDismissInteractionType:] */

void FUN_106a8329c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 106a832a4; end: 106a8331b; -[SCSpotlightOperaViewControllerTransitionAnimator .cxx_destruct] */

void FUN_106a832a4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a8331c; end: 106a83413; -[SCViewControllerAuxViewActionAnimator initWithParentViewController:childViewController:operaBounds:shouldUseOperaBounds:] */

undefined1 *
FUN_106a8331c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f4870;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_8);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_7);
    *(undefined8 *)((long)puVar1 + 0x40) = param_1;
    *(undefined8 *)((long)puVar1 + 0x48) = param_2;
    *(undefined8 *)((long)puVar1 + 0x50) = param_3;
    *(undefined8 *)((long)puVar1 + 0x58) = param_4;
    *(undefined1 *)((long)puVar1 + 0x60) = param_9;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    func_0x00010be6df20(puVar1);
    func_0x00010c19f0e0(*(undefined8 *)((long)puVar1 + 0x28));
    func_0x00010beaeac0(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 106a83414; end: 106a834a3; -[SCViewControllerAuxViewActionAnimator _operaViewerRestingBounds] */

undefined8 FUN_106a83414(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (*(char *)(param_2 + 0x60) == '\x01') {
    param_1 = *(undefined8 *)(param_2 + 0x40);
  }
  else {
    param_2 = param_2 + 0x10;
    _objc_loadWeakRetained(param_2);
    lVar1 = param_2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(lVar1);
    _objc_release(param_2);
  }
  return param_1;
}



/* Entry: 106a834a4; end: 106a8352f; -[SCViewControllerAuxViewActionAnimator _setupPanRecognizer] */

void FUN_106a834a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc();
  func_0x00010c050900();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar1;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x90),param_2,param_1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a83530; end: 106a835b3; -[SCViewControllerAuxViewActionAnimator resetGestureIfNecessary] */

void FUN_106a83530(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c252440();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010beaead0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupPanRecognizer_112589458);
    return;
  }
  return;
}



/* Entry: 106a835b4; end: 106a83673; -[SCViewControllerAuxViewActionAnimator dealloc] */

void FUN_106a835b4(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x78));
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c12b760(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x70));
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126f4870;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106a83674; end: 106a8371b; -[SCViewControllerAuxViewActionAnimator gestureRecognizerShouldBegin:] */

long FUN_106a83674(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x90);
  if (param_3 == lVar2) {
    _objc_retain(param_3);
    lVar1 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c264780(lVar2,param_2,lVar1);
    *(long *)(param_1 + 0x18) = lVar2;
    _objc_release(lVar1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29c480();
    _objc_release(param_3);
    _objc_release(param_1);
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 106a8371c; end: 106a8379b; -[SCViewControllerAuxViewActionAnimator gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_106a8371c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  FUN_106a894b4(param_3,param_4,uVar2,param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106a8379c; end: 106a8381b; -[SCViewControllerAuxViewActionAnimator _didPan:] */

void FUN_106a8379c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 < 3) {
    if (lVar1 != 0) {
      if (lVar1 == 1) {
        func_0x00010bec1e00(param_1);
      }
      else if (lVar1 == 2) {
        func_0x00010be2db80(param_1,param_2,param_3);
      }
      goto LAB_106a8380c;
    }
  }
  else if (1 < lVar1 - 3U) goto LAB_106a8380c;
  func_0x00010bddafc0(param_1);
LAB_106a8380c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a8381c; end: 106a838e7; -[SCViewControllerAuxViewActionAnimator _startTransition] */

void FUN_106a8381c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bde0820();
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  func_0x00010beadd40(param_1);
  lVar4 = *(long *)(param_1 + 0x90);
  func_0x00010c252440();
  if (lVar4 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be714f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performAnimation_112579ed8);
  return;
}



/* Entry: 106a838e8; end: 106a83a07; -[SCViewControllerAuxViewActionAnimator _performAnimation] */

void FUN_106a838e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  lVar1 = param_1;
  func_0x00010bde7680();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21300();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18260();
  _objc_release(puVar4);
  func_0x00010bdcb100(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a83a08; end: 106a83b27; -[SCViewControllerAuxViewActionAnimator _containerMaskView] */

void FUN_106a83a08(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = *(double *)(param_5 + 0x80);
  if (dVar5 <= 0.0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010be6df20();
    dVar6 = *(double *)(param_5 + 0x80);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(dVar5,dVar6 + param_2,param_3,param_4 - dVar6);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1,param_6,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010be6df20(param_5);
    func_0x00010c013de0(puVar4);
    puVar2 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c08c0e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106a83b28; end: 106a83c5f; -[SCViewControllerAuxViewActionAnimator _cancelTransition] */

void FUN_106a83b28(ulong param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    ppuVar2 = &puStack_90;
    *(undefined2 *)(param_1 + 0x30) = 1;
    puStack_68 = puVar3;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106a83c60;
    puStack_50 = &UNK_110842e18;
    ppuVar1 = &puStack_68;
    uStack_48 = param_1;
    _objc_retainBlock();
    puStack_90 = puVar3;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106a83d88;
    puStack_78 = &UNK_110841f20;
    uStack_70 = param_1;
    _objc_retainBlock();
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18260();
    _objc_release(puVar3);
    func_0x00010bdd9960();
    if ((param_1 & 1) == 0) {
      func_0x00010bf03460(0x3fd47ae147ae147b,0,0x3ff0000000000000,0,
                          PTR__OBJC_CLASS___UIView_1126aec20);
    }
    else {
      (*(code *)ppuVar1[2])(ppuVar1);
      (**(code **)((long)ppuVar2 + 0x10))(ppuVar2,1);
    }
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
  }
  return;
}



/* Entry: 106a83c60; end: 106a83d87;  */

void FUN_106a83c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010be6df20(*(undefined8 *)(param_5 + 0x20));
  uVar3 = param_1;
  _CGRectGetMidX();
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  lVar1 = *(long *)(param_5 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(uVar3,param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_5 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x70));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x78));
  return;
}



/* Entry: 106a83d88; end: 106a83daf;  */

void FUN_106a83d88(long param_1)

{
  func_0x00010bde0820(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdcb590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__animationEnded_112550700);
  return;
}



/* Entry: 106a83db0; end: 106a83e7b; -[SCViewControllerAuxViewActionAnimator _canCancelTransitionWithoutAnimation] */

bool FUN_106a83db0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  dVar3 = param_1;
  dVar5 = param_2;
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010be6df20(param_5);
  dVar4 = dVar3;
  _CGRectGetMidX();
  _CGRectGetMidY(dVar3,dVar5,param_3,param_4);
  return (param_2 - dVar3) * (param_2 - dVar3) + (param_1 - dVar4) * (param_1 - dVar4) < 4.0;
}



/* Entry: 106a83e7c; end: 106a83ec7; -[SCViewControllerAuxViewActionAnimator _animationEnded] */

void FUN_106a83e7c(long param_1)

{
  undefined *puVar1;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x28));
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94a40();
  _objc_release(puVar1);
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 106a83ec8; end: 106a83f23; -[SCViewControllerAuxViewActionAnimator _setupLoadingSpinner] */

void FUN_106a83ec8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x78));
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010c23d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_sizeToFit_11266cfb0);
  return;
}



/* Entry: 106a83f24; end: 106a83f4b; -[SCViewControllerAuxViewActionAnimator _clearLoadingSpinner] */

void FUN_106a83f24(long param_1)

{
  func_0x00010c2558c0(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 106a83f4c; end: 106a8401b; -[SCViewControllerAuxViewActionAnimator _animateSlideWithContainerMaskView:] */

void FUN_106a83f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106a8401c;
  puStack_40 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106a8423c;
  puStack_70 = &UNK_110848bd8;
  uStack_68 = param_3;
  uStack_60 = param_1;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010bf03460(0x3fd47ae147ae147b,0,0x3ff0000000000000,0,puVar1,param_2,0,&puStack_58,
                      &puStack_88);
  _objc_release(uStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 106a8401c; end: 106a8423b;  */

void FUN_106a8401c(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_f0 [48];
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
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x20) + 0x18);
  if (lVar2 == 0) {
    func_0x00010be6df20();
    _CGRectGetMinY();
    lVar2 = *(long *)(param_2 + 0x20) + 8;
    _objc_loadWeakRetained(lVar2);
    lVar1 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173440(param_1);
  }
  else {
    if (lVar2 != 1) goto LAB_106a8420c;
    lVar2 = *(long *)(param_2 + 0x20) + 8;
    _objc_loadWeakRetained(lVar2);
    lVar1 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20ca0();
    dVar4 = param_1 * 0.381;
    _objc_release(lVar1);
    _objc_release(lVar2);
    lVar2 = *(long *)(param_2 + 0x20) + 8;
    _objc_loadWeakRetained(lVar2);
    lVar1 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c60();
    dVar5 = param_1 * 0.381;
    _objc_release(lVar1);
    _objc_release(lVar2);
    func_0x00010be6df20(*(undefined8 *)(param_2 + 0x20));
    _CGRectGetMinX();
    dVar6 = param_1 - dVar4;
    func_0x00010be6df20(*(undefined8 *)(param_2 + 0x20));
    _CGRectGetMaxY();
    dVar7 = (param_1 - dVar5) + -64.0;
    _CGAffineTransformMakeScale(&uStack_c0,0x3fd8624dd2f1a9fc,0x3fd8624dd2f1a9fc);
    _CGAffineTransformMakeRotation(auStack_f0,0);
    _CGAffineTransformConcat(&uStack_90,&uStack_c0,auStack_f0);
    lVar2 = *(long *)(param_2 + 0x20) + 8;
    _objc_loadWeakRetained(lVar2);
    lVar1 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    func_0x00010c219960();
    _objc_release(lVar1);
    _objc_release(lVar2);
    dVar3 = dVar6;
    _CGRectGetMidX(dVar6,dVar7,dVar4,dVar5);
    _CGRectGetMidY(dVar6,dVar7,dVar4,dVar5);
    lVar2 = *(long *)(param_2 + 0x20) + 8;
    _objc_loadWeakRetained(lVar2);
    lVar1 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar3,dVar6);
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
LAB_106a8420c:
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x70));
  return;
}


