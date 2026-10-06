/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a7b458; end: 106a7b45f; -[SCSpotlightPlaybackManager storyPlayerModerationData] */

undefined8 FUN_106a7b458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x480);
}



/* Entry: 106a7b460; end: 106a7b467; -[SCSpotlightPlaybackManager setStoryPlayerModerationData:] */

void FUN_106a7b460(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106a7b468; end: 106a7b46f; -[SCSpotlightPlaybackManager currentPlaylist] */

undefined8 FUN_106a7b468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x488);
}



/* Entry: 106a7b470; end: 106a7b477; -[SCSpotlightPlaybackManager currentlyPlayingStory] */

undefined8 FUN_106a7b470(long param_1)

{
  return *(undefined8 *)(param_1 + 0x490);
}



/* Entry: 106a7b478; end: 106a7b47f; -[SCSpotlightPlaybackManager currentSectionKeyIndex] */

undefined8 FUN_106a7b478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x498);
}



/* Entry: 106a7b480; end: 106a7b487; -[SCSpotlightPlaybackManager eofFeedsObservable] */

undefined8 FUN_106a7b480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4a0);
}



/* Entry: 106a7b488; end: 106a7b48f; -[SCSpotlightPlaybackManager associatedSubfeed] */

undefined8 FUN_106a7b488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4a8);
}



/* Entry: 106a7b490; end: 106a7b4bf; -[SCSpotlightPlaybackManager setAssociatedSubfeed:] */

void FUN_106a7b490(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x4a8);
  *(undefined8 *)(param_1 + 0x4a8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a7b4c0; end: 106a7b4c7; -[SCSpotlightPlaybackManager fallbackSectionIndex] */

undefined8 FUN_106a7b4c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4b0);
}



/* Entry: 106a7b4c8; end: 106a7b4cf; -[SCSpotlightPlaybackManager lastPlayedStory] */

undefined8 FUN_106a7b4c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4b8);
}



/* Entry: 106a7b4d0; end: 106a7b4ff; -[SCSpotlightPlaybackManager setLastPlayedStory:] */

void FUN_106a7b4d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x4b8);
  *(undefined8 *)(param_1 + 0x4b8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a7b500; end: 106a7b507; -[SCSpotlightPlaybackManager desiredPlaylistReordering] */

undefined8 FUN_106a7b500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4c0);
}



/* Entry: 106a7b508; end: 106a7b50f; -[SCSpotlightPlaybackManager lastLoopedStory] */

undefined8 FUN_106a7b508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4c8);
}



/* Entry: 106a7b510; end: 106a7b53f; -[SCSpotlightPlaybackManager setLastLoopedStory:] */

void FUN_106a7b510(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x4c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a7b540; end: 106a7bb7f; -[SCSpotlightPlaybackManager .cxx_destruct] */

void FUN_106a7b540(long param_1)

{
  _objc_storeStrong(param_1 + 0x4c8,0);
  _objc_storeStrong(param_1 + 0x4c0,0);
  _objc_storeStrong(param_1 + 0x4b8,0);
  _objc_storeStrong(param_1 + 0x4a8,0);
  _objc_storeStrong(param_1 + 0x4a0,0);
  _objc_storeStrong(param_1 + 0x490,0);
  _objc_storeStrong(param_1 + 0x488,0);
  _objc_storeStrong(param_1 + 0x480,0);
  _objc_storeStrong(param_1 + 0x478,0);
  _objc_storeStrong(param_1 + 0x470,0);
  _objc_destroyWeak(param_1 + 0x468);
  _objc_storeStrong(param_1 + 0x460,0);
  _objc_storeStrong(param_1 + 0x458,0);
  _objc_storeStrong(param_1 + 0x440,0);
  _objc_storeStrong(param_1 + 0x438,0);
  _objc_storeStrong(param_1 + 0x430,0);
  _objc_storeStrong(param_1 + 0x410,0);
  _objc_storeStrong(param_1 + 0x408,0);
  _objc_storeStrong(param_1 + 0x400,0);
  _objc_storeStrong(param_1 + 0x3f8,0);
  _objc_storeStrong(param_1 + 1000,0);
  _objc_storeStrong(param_1 + 0x3e0,0);
  _objc_storeStrong(param_1 + 0x3c8,0);
  _objc_storeStrong(param_1 + 0x3c0,0);
  _objc_storeStrong(param_1 + 0x3b8,0);
  _objc_storeStrong(param_1 + 0x3b0,0);
  _objc_storeStrong(param_1 + 0x3a8,0);
  _objc_storeStrong(param_1 + 0x3a0,0);
  _objc_storeStrong(param_1 + 0x390,0);
  _objc_storeStrong(param_1 + 0x380,0);
  _objc_storeStrong(param_1 + 0x378,0);
  _objc_storeStrong(param_1 + 0x370,0);
  _objc_storeStrong(param_1 + 0x368,0);
  _objc_storeStrong(param_1 + 0x360,0);
  _objc_storeStrong(param_1 + 0x358,0);
  _objc_storeStrong(param_1 + 0x350,0);
  _objc_storeStrong(param_1 + 0x340,0);
  _objc_storeStrong(param_1 + 0x330,0);
  _objc_storeStrong(param_1 + 0x328,0);
  _objc_storeStrong(param_1 + 800,0);
  _objc_storeStrong(param_1 + 0x318,0);
  _objc_storeStrong(param_1 + 0x310,0);
  _objc_storeStrong(param_1 + 0x308,0);
  _objc_storeStrong(param_1 + 0x300,0);
  _objc_storeStrong(param_1 + 0x2e8,0);
  _objc_storeStrong(param_1 + 0x2e0,0);
  _objc_storeStrong(param_1 + 0x2d0,0);
  _objc_storeStrong(param_1 + 0x2c8,0);
  _objc_storeStrong(param_1 + 0x2c0,0);
  _objc_storeStrong(param_1 + 0x2b8,0);
  _objc_storeStrong(param_1 + 0x2a8,0);
  _objc_storeStrong(param_1 + 0x298,0);
  _objc_storeStrong(param_1 + 0x290,0);
  _objc_storeStrong(param_1 + 0x288,0);
  _objc_storeStrong(param_1 + 0x280,0);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_storeStrong(param_1 + 0x270,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 600,0);
  _objc_storeStrong(param_1 + 0x250,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_destroyWeak(param_1 + 0x108);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_destroyWeak(param_1 + 0xd8);
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a7bb80; end: 106a7bca7;  */

void FUN_106a7bb80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf8c980(param_2);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259740(uVar3);
  puVar4 = puVar2;
  func_0x000108072414(puVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar4;
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a7bca8; end: 106a7bcff;  */

void FUN_106a7bca8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a7bd00; end: 106a7bd7b; -[SCSpotlightPlaylistFetcher initWithResolver:] */

undefined1 * FUN_106a7bd00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4830;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a7bd7c; end: 106a7bdc3; -[SCSpotlightPlaylistFetcher _setLoadingState:] */

void FUN_106a7bd7c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x10) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x10) = param_3;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09d3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a7bdc4; end: 106a7be87; -[SCSpotlightPlaylistFetcher fetchPlaylist] */

void FUN_106a7bdc4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (1 < *(long *)(param_1 + 0x10) - 1U) {
    func_0x00010bea5620(param_1,param_2,1);
    _objc_initWeak(auStack_28,param_1);
    lVar1 = *(long *)(param_1 + 8);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_106a7be88;
    puStack_38 = &UNK_110959358;
    _objc_copyWeak(auStack_30,auStack_28);
    (**(code **)(lVar1 + 0x10))(lVar1,&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 106a7be88; end: 106a7bf3b;  */

void FUN_106a7be88(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x10) == 1)) {
    if ((param_2 != 0) && (param_4 == 0)) {
      lVar1 = param_2;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = lVar1;
      _objc_release(uVar2);
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = param_3;
      _objc_release(uVar2);
    }
    func_0x00010bea5620(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a7bf3c; end: 106a7c1ab; -[SCSpotlightPlaylistFetcher currentLoadingProperties] */

void FUN_106a7bf3c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar6 < 2) {
    func_0x00010c1d0640(puVar1);
  }
  else {
    if (uVar6 - 3 < 2) {
      func_0x00010c1d0640(puVar1);
      func_0x00010c1d0640(puVar1);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(param_1);
      ppuVar4 = &PTR____CFConstantStringClassReference_110db3738;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3738,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(ppuVar4);
      _objc_release(puVar7);
      goto LAB_106a7c160;
    }
    if (uVar6 != 2) goto LAB_106a7c160;
  }
  func_0x00010c1d0640(puVar1);
LAB_106a7c160:
  puVar7 = puVar1;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar7 = *(undefined **)(puVar1 + 0x18);
    _objc_retain(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106a7c1ac; end: 106a7c1d3; -[SCSpotlightPlaylistFetcher resolvedDataModels] */

void FUN_106a7c1ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a7c1d4; end: 106a7c1fb; -[SCSpotlightPlaylistFetcher firstDisplayGroupDataModel] */

void FUN_106a7c1d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a7c1fc; end: 106a7c203; -[SCSpotlightPlaylistFetcher loadingState] */

undefined8 FUN_106a7c1fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a7c204; end: 106a7c21b; -[SCSpotlightPlaylistFetcher delegate] */

void FUN_106a7c204(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a7c21c; end: 106a7c227; -[SCSpotlightPlaylistFetcher setDelegate:] */

void FUN_106a7c21c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 106a7c228; end: 106a7c26b; -[SCSpotlightPlaylistFetcher .cxx_destruct] */

void FUN_106a7c228(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a7c26c; end: 106a7c2f3; -[SCSpotlightResumePlaybackOperaPlugin initWithCompositeStoryId:startTimeMs:] */

undefined1 *
FUN_106a7c26c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4838;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106a7c2f4; end: 106a7c2f7; -[SCSpotlightResumePlaybackOperaPlugin setPlaylistItemController:] */

void FUN_106a7c2f4(void)

{
  return;
}



/* Entry: 106a7c2f8; end: 106a7c2fb; -[SCSpotlightResumePlaybackOperaPlugin extraPropertiesProvider] */

void FUN_106a7c2f8(void)

{
  return;
}



/* Entry: 106a7c2fc; end: 106a7c303; -[SCSpotlightResumePlaybackOperaPlugin playlistDataSource] */

undefined8 FUN_106a7c2fc(void)

{
  return 0;
}



/* Entry: 106a7c304; end: 106a7c3cf; -[SCSpotlightResumePlaybackOperaPlugin addEventListenersWithEventAnnouncing:] */

undefined ** FUN_106a7c304(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuStack_40;
  long lStack_38;
  
  ppuVar1 = (undefined **)PTR_PTR_1126b2338;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c29aaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_40 = ppuVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(param_3,param_2,param_1,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110e69238;
}



/* Entry: 106a7c3d0; end: 106a7c3db; -[SCSpotlightResumePlaybackOperaPlugin type] */

undefined ** FUN_106a7c3d0(void)

{
  return &PTR____CFConstantStringClassReference_110e69238;
}



/* Entry: 106a7c3dc; end: 106a7c54f; -[SCSpotlightResumePlaybackOperaPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_106a7c3dc(ulong param_1,undefined8 param_2,long param_3,undefined ***param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_3;
  pppuVar6 = param_4;
  uVar7 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    if ((((*(byte *)(param_1 + 0x18) & 1) != 0) || (*(double *)(param_1 + 0x10) <= 0.0)) ||
       (uVar1 = param_1, func_0x00010be44820(), (uVar1 & 1) == 0)) {
      lVar5 = 0;
      (**(code **)(param_6 + 0x10))(param_6,0);
    }
    else {
      ppuStack_58 = &PTR____CFConstantStringClassReference_110f0d398;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(*(double *)(param_1 + 0x10) / 1000.0);
      _objc_retainAutoreleasedReturnValue();
      pppuVar6 = &ppuStack_58;
      uVar7 = 1;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_50 = puVar2;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = 0;
      (**(code **)(param_6 + 0x10))(param_6,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  _objc_retain(pppuVar6);
  _objc_retain(uVar7);
  if (((*(byte *)(param_3 + 0x18) & 1) == 0) &&
     (lVar4 = param_3, func_0x00010be44820(), (int)lVar4 != 0)) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c29aaa0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)lVar4 != 0) {
      *(undefined1 *)(param_3 + 0x18) = 1;
    }
  }
  _objc_release(uVar7);
  _objc_release(pppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 106a7c550; end: 106a7c607; -[SCSpotlightResumePlaybackOperaPlugin operaViewDidSendEvent:page:params:] */

void FUN_106a7c550(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((*(byte *)(param_1 + 0x18) & 1) == 0) &&
     (lVar1 = param_1, func_0x00010be44820(param_1,param_2,param_4), (int)lVar1 != 0)) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c29aaa0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a7c608; end: 106a7c6d7; -[SCSpotlightResumePlaybackOperaPlugin _isTargetPage:] */

ulong FUN_106a7c608(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar5 = uVar1;
    func_0x00010c0720c0(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 106a7c6d8; end: 106a7c6e3; -[SCSpotlightResumePlaybackOperaPlugin .cxx_destruct] */

void FUN_106a7c6d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a7c6e4; end: 106a7c70f; +[SCGrapheneFirstStoryMediaStateMetric firstStoryNotLoaded] */

void FUN_106a7c6e4(void)

{
  _objc_alloc(PTR_PTR_1126d0028);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a7c710; end: 106a7c73b; +[SCGrapheneFirstStoryMediaStateMetric firstStoryLoading] */

void FUN_106a7c710(void)

{
  _objc_alloc(PTR_PTR_1126d0028);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a7c73c; end: 106a7c767; +[SCGrapheneFirstStoryMediaStateMetric firstStoryLoaded] */

void FUN_106a7c73c(void)

{
  _objc_alloc(PTR_PTR_1126d0028);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a7c768; end: 106a7c807; -[SCGrapheneFirstStoryMediaStateMetric description] */

void FUN_106a7c768(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e69258;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e69258,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f4840;
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



/* Entry: 106a7c808; end: 106a7c95f; -[SCGrapheneRegistry firstStoryMediaStateGraphene] */

void FUN_106a7c808(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106a7c890;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c48a0 != -1) {
    func_0x00010002a2fc(0x1136c48a0,&puStack_48);
  }
  uVar1 = uRam00000001136c4898;
  _objc_retain(uRam00000001136c4898);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a7c960; end: 106a7c9d3; -[SCGrapheneSpotlightMetadataMetric2 init] */

undefined1 * FUN_106a7c960(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4848;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106a7c9d4; end: 106a7cc03;  */

void FUN_106a7c9d4(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 *puStack_b40;
  undefined8 auStack_b38 [2];
  char cStack_b21;
  undefined8 auStack_b20 [2];
  char cStack_b09;
  long lStack_b08;
  undefined8 *puStack_b00;
  undefined8 *puStack_af8;
  undefined8 *puStack_af0;
  undefined8 *puStack_ae8;
  undefined8 *puStack_ae0;
  undefined8 *puStack_ad8;
  undefined8 ***pppuStack_ad0;
  code *pcStack_ac8;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 *puStack_aa0;
  undefined8 auStack_a98 [2];
  char cStack_a81;
  undefined8 auStack_a80 [2];
  char cStack_a69;
  long lStack_a68;
  undefined8 *puStack_a60;
  undefined8 *puStack_a58;
  undefined8 *puStack_a50;
  long *plStack_a48;
  undefined8 *puStack_a40;
  undefined8 *puStack_a38;
  undefined8 ***pppuStack_a30;
  code *pcStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined1 *puStack_a08;
  undefined8 auStack_a00 [2];
  char cStack_9e9;
  long lStack_9e8;
  undefined8 *puStack_9e0;
  undefined8 *puStack_9d8;
  undefined8 *puStack_9d0;
  long *plStack_9c8;
  undefined8 *puStack_9c0;
  undefined8 *puStack_9b8;
  undefined8 ***pppuStack_9b0;
  code *pcStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined1 *puStack_988;
  undefined8 auStack_980 [2];
  char cStack_969;
  long lStack_968;
  undefined8 *puStack_960;
  undefined8 *puStack_958;
  undefined8 *puStack_950;
  long *plStack_948;
  undefined8 *puStack_940;
  undefined8 *puStack_938;
  undefined8 ***pppuStack_930;
  code *pcStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined1 *puStack_908;
  undefined8 auStack_900 [2];
  char cStack_8e9;
  long lStack_8e8;
  undefined8 *puStack_8e0;
  undefined8 *puStack_8d8;
  undefined8 *puStack_8d0;
  undefined8 *puStack_8c8;
  undefined8 *puStack_8c0;
  undefined8 *puStack_8b8;
  undefined8 ***pppuStack_8b0;
  code *pcStack_8a8;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 *puStack_880;
  undefined8 auStack_878 [2];
  char cStack_861;
  undefined8 auStack_860 [2];
  char cStack_849;
  long lStack_848;
  undefined8 *puStack_840;
  undefined8 *puStack_838;
  undefined8 *puStack_830;
  undefined8 *puStack_828;
  undefined8 *puStack_820;
  undefined8 *puStack_818;
  undefined8 ***pppuStack_810;
  code *pcStack_808;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 *puStack_7e0;
  undefined8 auStack_7d8 [2];
  char cStack_7c1;
  undefined8 auStack_7c0 [2];
  char cStack_7a9;
  long lStack_7a8;
  undefined8 *puStack_7a0;
  undefined8 *puStack_798;
  undefined8 *puStack_790;
  long *plStack_788;
  undefined8 *puStack_780;
  undefined8 *puStack_778;
  undefined8 ***pppuStack_770;
  code *pcStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined1 *puStack_748;
  undefined8 auStack_740 [2];
  char cStack_729;
  long lStack_728;
  undefined8 *puStack_720;
  undefined8 *puStack_718;
  undefined8 *puStack_710;
  undefined8 *puStack_708;
  undefined8 *puStack_700;
  undefined8 *puStack_6f8;
  undefined8 ***pppuStack_6f0;
  code *pcStack_6e8;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 auStack_6b8 [2];
  char cStack_6a1;
  undefined8 auStack_6a0 [2];
  char cStack_689;
  long lStack_688;
  undefined8 *puStack_680;
  undefined8 *puStack_678;
  undefined8 *puStack_670;
  undefined8 *puStack_668;
  undefined8 *puStack_660;
  undefined8 *puStack_658;
  undefined8 ***pppuStack_650;
  code *pcStack_648;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 *puStack_620;
  undefined8 auStack_618 [2];
  char cStack_601;
  undefined8 auStack_600 [2];
  char cStack_5e9;
  long lStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 *puStack_5d0;
  undefined8 *puStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 *puStack_580;
  undefined8 auStack_578 [2];
  char cStack_561;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 auStack_4d8 [2];
  char cStack_4c1;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 *puStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  puVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_110959388;
    unaff_x23 = &uStack_98;
    puVar7 = &uStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959388,puVar7,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar14 = 0;
    puVar4 = auStack_78;
    puVar5 = param_4;
    do {
      if ((&cStack_49)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_106a7cc04;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar1;
  puVar9 = puVar7;
  puVar8 = puVar5;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar4;
  puStack_c8 = puVar2;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  puVar4 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar4 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar4);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar4 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_100,puVar4);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar10 = (undefined8 *)&UNK_1109593d8;
    unaff_x23 = &uStack_138;
    puVar9 = &uStack_138;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109593d8,puVar9,puVar5);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar14 = 0;
    puVar4 = auStack_118;
    puVar8 = puVar5;
    do {
      if ((&cStack_e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar7);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_148 = FUN_106a7ce34;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar10;
  puVar3 = puVar9;
  puVar13 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar4;
  puStack_168 = puVar5;
  puStack_160 = puVar7;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar10);
  _objc_retain(puVar9);
  puVar1 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar2 = (undefined8 *)&UNK_110959428;
    unaff_x23 = &uStack_1d8;
    puVar3 = &uStack_1d8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959428,puVar3,puVar8);
    puStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1c0);
    lVar14 = 0;
    puVar1 = auStack_1b8;
    puVar13 = puVar8;
    do {
      if ((&cStack_189)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar9);
  puVar7 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar10);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106a7d064;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar5 = puVar3;
  puVar6 = puVar13;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar1;
  puStack_208 = puVar7;
  puStack_200 = puVar9;
  puStack_1f8 = puVar10;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  puVar1 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_240,puVar1);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar4 = (undefined8 *)&UNK_110959478;
    unaff_x23 = &uStack_278;
    puVar5 = &uStack_278;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959478,puVar5,puVar13);
    puStack_260 = unaff_x23;
    func_0x00010007e5dc(&puStack_260);
    lVar14 = 0;
    puVar1 = auStack_258;
    puVar6 = puVar13;
    do {
      if ((&cStack_229)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_288 = FUN_106a7d294;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar4;
  puVar9 = puVar5;
  puVar13 = puVar6;
  puStack_2c0 = unaff_x24;
  puStack_2b8 = unaff_x23;
  puStack_2b0 = puVar1;
  puStack_2a8 = puVar7;
  puStack_2a0 = puVar3;
  puStack_298 = puVar2;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  puVar1 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_2f8;
    func_0x00010002b838(auStack_2f8,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar1 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_2e0,puVar1);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
    puVar10 = (undefined8 *)&UNK_1109594c8;
    unaff_x23 = &uStack_318;
    puVar9 = &uStack_318;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109594c8,puVar9,puVar6);
    puStack_300 = unaff_x23;
    func_0x00010007e5dc(&puStack_300);
    lVar14 = 0;
    puVar1 = auStack_2f8;
    puVar13 = puVar6;
    do {
      if ((&cStack_2c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar5);
  puVar7 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_328 = FUN_106a7d4c4;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar10;
  puVar3 = puVar9;
  puVar6 = puVar13;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar1;
  puStack_348 = puVar7;
  puStack_340 = puVar5;
  puStack_338 = puVar4;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(puVar10);
  _objc_retain(puVar9);
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    puVar2 = (undefined8 *)&UNK_110959518;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar8[1];
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar1 = puVar10;
        _objc_retainAutorelease(puVar10);
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      unaff_x24 = auStack_398;
      func_0x00010002b838(auStack_398,puVar1);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar1 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_380,puVar1);
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      uStack_3a8 = 0;
      func_0x00010007e1e8(&uStack_3b8,auStack_398,&lStack_368,2);
      puVar2 = (undefined8 *)&UNK_110959518;
      unaff_x23 = &uStack_3b8;
      puVar3 = &uStack_3b8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959518,puVar3,puVar13);
      puStack_3a0 = unaff_x23;
      func_0x00010007e5dc(&puStack_3a0);
      lVar14 = 0;
      puVar8 = auStack_398;
      puVar6 = puVar13;
      do {
        if ((&cStack_369)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  _objc_release(puVar9);
  puVar1 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar10);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_3c8 = FUN_106a7d714;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar4 = puVar3;
  puVar13 = puVar6;
  puStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  puStack_3f0 = puVar8;
  puStack_3e8 = puVar1;
  puStack_3e0 = puVar9;
  puStack_3d8 = puVar10;
  pppuStack_3d0 = &pppuStack_330;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if (puVar5 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar5[1];
    puVar7 = (undefined8 *)&UNK_110959568;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar5[1];
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar1 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      unaff_x24 = auStack_438;
      func_0x00010002b838(auStack_438,puVar1);
      _objc_retain(puVar3);
      if (puVar3 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar3);
        puVar1 = puVar3;
        func_0x00010bdc3520(puVar3);
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_420,puVar1);
      uStack_458 = 0;
      uStack_450 = 0;
      uStack_448 = 0;
      func_0x00010007e1e8(&uStack_458,auStack_438,&lStack_408,2);
      puVar7 = (undefined8 *)&UNK_110959568;
      unaff_x23 = &uStack_458;
      puVar4 = &uStack_458;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959568,puVar4,puVar6);
      puStack_440 = unaff_x23;
      func_0x00010007e5dc(&puStack_440);
      lVar14 = 0;
      puVar5 = auStack_438;
      puVar13 = puVar6;
      do {
        if ((&cStack_409)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  _objc_release(puVar3);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_421 < '\0') {
    __ZdlPv(auStack_438[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar8 = puVar1;
  __Unwind_Resume();
  pcStack_468 = FUN_106a7d964;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar7;
  puVar9 = puVar4;
  puVar6 = puVar13;
  puStack_4a0 = unaff_x24;
  puStack_498 = unaff_x23;
  puStack_490 = puVar5;
  puStack_488 = puVar1;
  puStack_480 = puVar3;
  puStack_478 = puVar2;
  pppuStack_470 = &pppuStack_3d0;
  _objc_retain(puVar7);
  _objc_retain(puVar4);
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    puVar10 = (undefined8 *)&UNK_1109595b8;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar8[1];
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x24 = auStack_4d8;
      func_0x00010002b838(auStack_4d8,puVar1);
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar1 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_4c0,puVar1);
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      uStack_4e8 = 0;
      func_0x00010007e1e8(&uStack_4f8,auStack_4d8,&lStack_4a8,2);
      puVar10 = (undefined8 *)&UNK_1109595b8;
      unaff_x23 = &uStack_4f8;
      puVar9 = &uStack_4f8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109595b8,puVar9,puVar13);
      puStack_4e0 = unaff_x23;
      func_0x00010007e5dc(&puStack_4e0);
      lVar14 = 0;
      puVar8 = auStack_4d8;
      puVar6 = puVar13;
      do {
        if ((&cStack_4a9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4c0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  _objc_release(puVar4);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_4c1 < '\0') {
    __ZdlPv(auStack_4d8[0]);
  }
  _objc_release(puVar4);
  _objc_release(puVar7);
  puVar3 = puVar1;
  __Unwind_Resume();
  pcStack_508 = FUN_106a7dbb4;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar10;
  puVar2 = puVar9;
  puVar13 = puVar6;
  puStack_540 = unaff_x24;
  puStack_538 = unaff_x23;
  puStack_530 = puVar8;
  puStack_528 = puVar1;
  puStack_520 = puVar4;
  puStack_518 = puVar7;
  pppuStack_510 = &pppuStack_470;
  _objc_retain(puVar10);
  _objc_retain(puVar9);
  puVar1 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    unaff_x24 = auStack_578;
    func_0x00010002b838(auStack_578,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_560,puVar1);
    uStack_598 = 0;
    uStack_590 = 0;
    uStack_588 = 0;
    func_0x00010007e1e8(&uStack_598,auStack_578,&lStack_548,2);
    puVar5 = (undefined8 *)&UNK_110959608;
    unaff_x23 = &uStack_598;
    puVar2 = &uStack_598;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959608,puVar2,puVar6);
    puStack_580 = unaff_x23;
    func_0x00010007e5dc(&puStack_580);
    lVar14 = 0;
    puVar1 = auStack_578;
    puVar13 = puVar6;
    do {
      if ((&cStack_549)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_560 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar9);
  puVar7 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_561 < '\0') {
    __ZdlPv(auStack_578[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar10);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_5a8 = FUN_106a7dde4;
  lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puVar3 = puVar2;
  puVar6 = puVar13;
  puStack_5e0 = unaff_x24;
  puStack_5d8 = unaff_x23;
  puStack_5d0 = puVar1;
  puStack_5c8 = puVar7;
  puStack_5c0 = puVar9;
  puStack_5b8 = puVar10;
  pppuStack_5b0 = &pppuStack_510;
  _objc_retain(puVar5);
  _objc_retain(puVar2);
  puVar1 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_618;
    func_0x00010002b838(auStack_618,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar1 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_600,puVar1);
    uStack_638 = 0;
    uStack_630 = 0;
    uStack_628 = 0;
    func_0x00010007e1e8(&uStack_638,auStack_618,&lStack_5e8,2);
    puVar4 = (undefined8 *)&UNK_110959658;
    unaff_x23 = &uStack_638;
    puVar3 = &uStack_638;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959658,puVar3,puVar13);
    puStack_620 = unaff_x23;
    func_0x00010007e5dc(&puStack_620);
    lVar14 = 0;
    puVar1 = auStack_618;
    puVar6 = puVar13;
    do {
      if ((&cStack_5e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_600 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar2);
  puVar7 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_601 < '\0') {
    __ZdlPv(auStack_618[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar5);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_648 = FUN_106a7e014;
  lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar4;
  puVar9 = puVar3;
  puVar13 = puVar6;
  puStack_680 = unaff_x24;
  puStack_678 = unaff_x23;
  puStack_670 = puVar1;
  puStack_668 = puVar7;
  puStack_660 = puVar2;
  puStack_658 = puVar5;
  pppuStack_650 = &pppuStack_5b0;
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  puVar1 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_6b8;
    func_0x00010002b838(auStack_6b8,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_6a0,puVar1);
    uStack_6d8 = 0;
    uStack_6d0 = 0;
    uStack_6c8 = 0;
    func_0x00010007e1e8(&uStack_6d8,auStack_6b8,&lStack_688,2);
    puVar10 = (undefined8 *)&UNK_1109596a8;
    unaff_x23 = &uStack_6d8;
    puVar9 = &uStack_6d8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109596a8,puVar9,puVar6);
    puStack_6c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_6c0);
    lVar14 = 0;
    puVar1 = auStack_6b8;
    puVar13 = puVar6;
    do {
      if ((&cStack_689)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_6a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar7 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_688) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_6a1 < '\0') {
    __ZdlPv(auStack_6b8[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar2 = puVar7;
  __Unwind_Resume();
  puVar6 = &uStack_760;
  pcStack_6e8 = FUN_106a7e244;
  lStack_728 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar10;
  puVar8 = puVar9;
  puStack_720 = unaff_x24;
  puStack_718 = unaff_x23;
  puStack_710 = puVar1;
  puStack_708 = puVar7;
  puStack_700 = puVar3;
  puStack_6f8 = puVar4;
  pppuStack_6f0 = &pppuStack_650;
  _objc_retain(puVar10);
  plVar15 = (long *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar2[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    unaff_x23 = auStack_740;
    func_0x00010002b838(auStack_740,puVar1);
    uStack_760 = 0;
    uStack_758 = 0;
    uStack_750 = 0;
    func_0x00010007e1e8(&uStack_760,auStack_740,&lStack_728,1);
    puVar5 = (undefined8 *)&UNK_1109596f8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109596f8,&uStack_760,puVar9);
    puStack_748 = (undefined1 *)&uStack_760;
    func_0x00010007e5dc(&puStack_748);
    puVar8 = puVar6;
    puVar13 = puVar9;
    puVar1 = &uStack_760;
    if (cStack_729 < '\0') {
      __ZdlPv(auStack_740[0]);
      puVar8 = puVar6;
      puVar13 = puVar9;
      puVar1 = &uStack_760;
    }
  }
  puVar7 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_728) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(puVar10);
  puVar9 = puVar7;
  __Unwind_Resume();
  pcStack_768 = FUN_106a7e3b8;
  lStack_7a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puVar2 = puVar8;
  puVar3 = puVar13;
  puStack_7a0 = unaff_x24;
  puStack_798 = unaff_x23;
  puStack_790 = puVar1;
  plStack_788 = plVar15;
  puStack_780 = puVar7;
  puStack_778 = puVar10;
  pppuStack_770 = &pppuStack_6f0;
  _objc_retain(puVar5);
  _objc_retain(puVar8);
  puVar1 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar9[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_7d8;
    func_0x00010002b838(auStack_7d8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_7c0,puVar1);
    uStack_7f8 = 0;
    uStack_7f0 = 0;
    uStack_7e8 = 0;
    func_0x00010007e1e8(&uStack_7f8,auStack_7d8,&lStack_7a8,2);
    puVar4 = (undefined8 *)&UNK_110959748;
    unaff_x23 = &uStack_7f8;
    puVar2 = &uStack_7f8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959748,puVar2,puVar13);
    puStack_7e0 = unaff_x23;
    func_0x00010007e5dc(&puStack_7e0);
    lVar14 = 0;
    puVar1 = auStack_7d8;
    puVar3 = puVar13;
    do {
      if ((&cStack_7a9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_7c0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar8);
  puVar7 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_7c1 < '\0') {
    __ZdlPv(auStack_7d8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar5);
  puVar6 = puVar7;
  __Unwind_Resume();
  pcStack_808 = FUN_106a7e5e8;
  lStack_848 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar4;
  puVar9 = puVar2;
  puVar13 = puVar3;
  puStack_840 = unaff_x24;
  puStack_838 = unaff_x23;
  puStack_830 = puVar1;
  puStack_828 = puVar7;
  puStack_820 = puVar8;
  puStack_818 = puVar5;
  pppuStack_810 = &pppuStack_770;
  _objc_retain(puVar4);
  _objc_retain(puVar2);
  puVar1 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_878;
    func_0x00010002b838(auStack_878,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar1 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_860,puVar1);
    uStack_898 = 0;
    uStack_890 = 0;
    uStack_888 = 0;
    func_0x00010007e1e8(&uStack_898,auStack_878,&lStack_848,2);
    puVar10 = (undefined8 *)&UNK_110959798;
    unaff_x23 = &uStack_898;
    puVar9 = &uStack_898;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959798,puVar9,puVar3);
    puStack_880 = unaff_x23;
    func_0x00010007e5dc(&puStack_880);
    lVar14 = 0;
    puVar1 = auStack_878;
    puVar13 = puVar3;
    do {
      if ((&cStack_849)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_860 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar2);
  puVar7 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_848) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_861 < '\0') {
    __ZdlPv(auStack_878[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar3 = puVar7;
  __Unwind_Resume();
  puVar6 = &uStack_920;
  pcStack_8a8 = FUN_106a7e818;
  lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar10;
  puVar8 = puVar9;
  puStack_8e0 = unaff_x24;
  puStack_8d8 = unaff_x23;
  puStack_8d0 = puVar1;
  puStack_8c8 = puVar7;
  puStack_8c0 = puVar2;
  puStack_8b8 = puVar4;
  pppuStack_8b0 = &pppuStack_810;
  _objc_retain(puVar10);
  plVar15 = (long *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    unaff_x23 = auStack_900;
    func_0x00010002b838(auStack_900,puVar1);
    uStack_920 = 0;
    uStack_918 = 0;
    uStack_910 = 0;
    func_0x00010007e1e8(&uStack_920,auStack_900,&lStack_8e8,1);
    puVar5 = (undefined8 *)&UNK_1109597e8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109597e8,&uStack_920,puVar9);
    puStack_908 = (undefined1 *)&uStack_920;
    func_0x00010007e5dc(&puStack_908);
    puVar8 = puVar6;
    puVar13 = puVar9;
    puVar1 = &uStack_920;
    if (cStack_8e9 < '\0') {
      __ZdlPv(auStack_900[0]);
      puVar8 = puVar6;
      puVar13 = puVar9;
      puVar1 = &uStack_920;
    }
  }
  puVar7 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(puVar10);
  puVar2 = puVar7;
  __Unwind_Resume();
  puVar3 = &uStack_9a0;
  pcStack_928 = FUN_106a7e98c;
  lStack_968 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puVar9 = puVar8;
  puStack_960 = unaff_x24;
  puStack_958 = unaff_x23;
  puStack_950 = puVar1;
  plStack_948 = plVar15;
  puStack_940 = puVar7;
  puStack_938 = puVar10;
  pppuStack_930 = &pppuStack_8b0;
  _objc_retain(puVar5);
  plVar15 = (long *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar2[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_980;
    func_0x00010002b838(auStack_980,puVar1);
    uStack_9a0 = 0;
    uStack_998 = 0;
    uStack_990 = 0;
    func_0x00010007e1e8(&uStack_9a0,auStack_980,&lStack_968,1);
    puVar4 = (undefined8 *)&UNK_110959838;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959838,&uStack_9a0,puVar8);
    puStack_988 = (undefined1 *)&uStack_9a0;
    func_0x00010007e5dc(&puStack_988);
    puVar9 = puVar3;
    puVar13 = puVar8;
    puVar1 = &uStack_9a0;
    if (cStack_969 < '\0') {
      __ZdlPv(auStack_980[0]);
      puVar9 = puVar3;
      puVar13 = puVar8;
      puVar1 = &uStack_9a0;
    }
  }
  puVar7 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_968) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar10 = puVar7;
  __Unwind_Resume();
  puVar8 = &uStack_a20;
  pcStack_9a8 = FUN_106a7eb00;
  lStack_9e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  puVar3 = puVar9;
  puStack_9e0 = unaff_x24;
  puStack_9d8 = unaff_x23;
  puStack_9d0 = puVar1;
  plStack_9c8 = plVar15;
  puStack_9c0 = puVar7;
  puStack_9b8 = puVar5;
  pppuStack_9b0 = &pppuStack_930;
  _objc_retain(puVar4);
  plVar15 = (long *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar10[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_a00;
    func_0x00010002b838(auStack_a00,puVar1);
    uStack_a20 = 0;
    uStack_a18 = 0;
    uStack_a10 = 0;
    func_0x00010007e1e8(&uStack_a20,auStack_a00,&lStack_9e8,1);
    puVar2 = (undefined8 *)&UNK_110959888;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959888,&uStack_a20,puVar9);
    puStack_a08 = (undefined1 *)&uStack_a20;
    func_0x00010007e5dc(&puStack_a08);
    puVar3 = puVar8;
    puVar13 = puVar9;
    puVar1 = &uStack_a20;
    if (cStack_9e9 < '\0') {
      __ZdlPv(auStack_a00[0]);
      puVar3 = puVar8;
      puVar13 = puVar9;
      puVar1 = &uStack_a20;
    }
  }
  puVar7 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar9 = puVar7;
  __Unwind_Resume();
  pcStack_a28 = FUN_106a7ec74;
  lStack_a68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar10 = puVar3;
  puVar8 = puVar13;
  puStack_a60 = unaff_x24;
  puStack_a58 = unaff_x23;
  puStack_a50 = puVar1;
  plStack_a48 = plVar15;
  puStack_a40 = puVar7;
  puStack_a38 = puVar4;
  pppuStack_a30 = &pppuStack_9b0;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  puVar1 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar9[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_a98;
    func_0x00010002b838(auStack_a98,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_a80,puVar1);
    uStack_ab8 = 0;
    uStack_ab0 = 0;
    uStack_aa8 = 0;
    func_0x00010007e1e8(&uStack_ab8,auStack_a98,&lStack_a68,2);
    puVar5 = (undefined8 *)&UNK_1109598d8;
    unaff_x23 = &uStack_ab8;
    puVar10 = &uStack_ab8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109598d8,puVar10,puVar13);
    puStack_aa0 = unaff_x23;
    func_0x00010007e5dc(&puStack_aa0);
    lVar14 = 0;
    puVar1 = auStack_a98;
    puVar8 = puVar13;
    do {
      if ((&cStack_a69)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_a80 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_a81 < '\0') {
    __ZdlPv(auStack_a98[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar6 = puVar7;
  __Unwind_Resume();
  pcStack_ac8 = FUN_106a7eea4;
  lStack_b08 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puVar9 = puVar10;
  puVar13 = puVar8;
  puStack_b00 = unaff_x24;
  puStack_af8 = unaff_x23;
  puStack_af0 = puVar1;
  puStack_ae8 = puVar7;
  puStack_ae0 = puVar3;
  puStack_ad8 = puVar2;
  pppuStack_ad0 = &pppuStack_a30;
  _objc_retain(puVar5);
  _objc_retain(puVar10);
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_b38,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar1 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_b20,puVar1);
    uStack_b58 = 0;
    uStack_b50 = 0;
    uStack_b48 = 0;
    func_0x00010007e1e8(&uStack_b58,auStack_b38,&lStack_b08,2);
    puVar4 = (undefined8 *)&UNK_110959928;
    puVar9 = &uStack_b58;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959928,puVar9,puVar8);
    puStack_b40 = &uStack_b58;
    func_0x00010007e5dc(&puStack_b40);
    lVar14 = 0;
    puVar13 = puVar8;
    do {
      if ((&cStack_b09)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_b20 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar10);
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b08) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_b21 < '\0') {
    __ZdlPv(auStack_b38[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar5);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar13);
  _objc_retain(puVar9);
  _objc_retain(puVar1);
  func_0x00010c0b5ac0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  FUN_106a7f1bc(puVar1,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  puVar11 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar9);
  puVar12 = puVar11;
  func_0x00010c22b9e0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106a7cc04; end: 106a7ce33;  */

void FUN_106a7cc04(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 *puStack_aa0;
  undefined8 auStack_a98 [2];
  char cStack_a81;
  undefined8 auStack_a80 [2];
  char cStack_a69;
  long lStack_a68;
  undefined8 *puStack_a60;
  undefined8 *puStack_a58;
  undefined8 *puStack_a50;
  undefined8 *puStack_a48;
  undefined8 *puStack_a40;
  undefined8 *puStack_a38;
  undefined8 ***pppuStack_a30;
  code *pcStack_a28;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 *puStack_a00;
  undefined8 auStack_9f8 [2];
  char cStack_9e1;
  undefined8 auStack_9e0 [2];
  char cStack_9c9;
  long lStack_9c8;
  undefined8 *puStack_9c0;
  undefined8 *puStack_9b8;
  undefined8 *puStack_9b0;
  long *plStack_9a8;
  undefined8 *puStack_9a0;
  undefined8 *puStack_998;
  undefined8 ***pppuStack_990;
  code *pcStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined1 *puStack_968;
  undefined8 auStack_960 [2];
  char cStack_949;
  long lStack_948;
  undefined8 *puStack_940;
  undefined8 *puStack_938;
  undefined8 *puStack_930;
  long *plStack_928;
  undefined8 *puStack_920;
  undefined8 *puStack_918;
  undefined8 ***pppuStack_910;
  code *pcStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined1 *puStack_8e8;
  undefined8 auStack_8e0 [2];
  char cStack_8c9;
  long lStack_8c8;
  undefined8 *puStack_8c0;
  undefined8 *puStack_8b8;
  undefined8 *puStack_8b0;
  long *plStack_8a8;
  undefined8 *puStack_8a0;
  undefined8 *puStack_898;
  undefined8 ***pppuStack_890;
  code *pcStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined1 *puStack_868;
  undefined8 auStack_860 [2];
  char cStack_849;
  long lStack_848;
  undefined8 *puStack_840;
  undefined8 *puStack_838;
  undefined8 *puStack_830;
  undefined8 *puStack_828;
  undefined8 *puStack_820;
  undefined8 *puStack_818;
  undefined8 ***pppuStack_810;
  code *pcStack_808;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 *puStack_7e0;
  undefined8 auStack_7d8 [2];
  char cStack_7c1;
  undefined8 auStack_7c0 [2];
  char cStack_7a9;
  long lStack_7a8;
  undefined8 *puStack_7a0;
  undefined8 *puStack_798;
  undefined8 *puStack_790;
  undefined8 *puStack_788;
  undefined8 *puStack_780;
  undefined8 *puStack_778;
  undefined8 ***pppuStack_770;
  code *pcStack_768;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 *puStack_740;
  undefined8 auStack_738 [2];
  char cStack_721;
  undefined8 auStack_720 [2];
  char cStack_709;
  long lStack_708;
  undefined8 *puStack_700;
  undefined8 *puStack_6f8;
  undefined8 *puStack_6f0;
  long *plStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined1 *puStack_6a8;
  undefined8 auStack_6a0 [2];
  char cStack_689;
  long lStack_688;
  undefined8 *puStack_680;
  undefined8 *puStack_678;
  undefined8 *puStack_670;
  undefined8 *puStack_668;
  undefined8 *puStack_660;
  undefined8 *puStack_658;
  undefined8 ***pppuStack_650;
  code *pcStack_648;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 *puStack_620;
  undefined8 auStack_618 [2];
  char cStack_601;
  undefined8 auStack_600 [2];
  char cStack_5e9;
  long lStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 *puStack_5d0;
  undefined8 *puStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 *puStack_580;
  undefined8 auStack_578 [2];
  char cStack_561;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 auStack_4d8 [2];
  char cStack_4c1;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 *puStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  puVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_1109593d8;
    unaff_x23 = &uStack_98;
    puVar7 = &uStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109593d8,puVar7,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar14 = 0;
    puVar4 = auStack_78;
    puVar5 = param_4;
    do {
      if ((&cStack_49)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_106a7ce34;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar1;
  puVar9 = puVar7;
  puVar8 = puVar5;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar4;
  puStack_c8 = puVar2;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  puVar4 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar4 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar4);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar4 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_100,puVar4);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar12 = (undefined8 *)&UNK_110959428;
    unaff_x23 = &uStack_138;
    puVar9 = &uStack_138;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959428,puVar9,puVar5);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar14 = 0;
    puVar4 = auStack_118;
    puVar8 = puVar5;
    do {
      if ((&cStack_e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar7);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_148 = FUN_106a7d064;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar12;
  puVar3 = puVar9;
  puVar13 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar4;
  puStack_168 = puVar5;
  puStack_160 = puVar7;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar12);
  _objc_retain(puVar9);
  puVar1 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar12;
      _objc_retainAutorelease(puVar12);
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar2 = (undefined8 *)&UNK_110959478;
    unaff_x23 = &uStack_1d8;
    puVar3 = &uStack_1d8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959478,puVar3,puVar8);
    puStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1c0);
    lVar14 = 0;
    puVar1 = auStack_1b8;
    puVar13 = puVar8;
    do {
      if ((&cStack_189)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar9);
  puVar7 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar12);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106a7d294;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar5 = puVar3;
  puVar6 = puVar13;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar1;
  puStack_208 = puVar7;
  puStack_200 = puVar9;
  puStack_1f8 = puVar12;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  puVar1 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_240,puVar1);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar4 = (undefined8 *)&UNK_1109594c8;
    unaff_x23 = &uStack_278;
    puVar5 = &uStack_278;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109594c8,puVar5,puVar13);
    puStack_260 = unaff_x23;
    func_0x00010007e5dc(&puStack_260);
    lVar14 = 0;
    puVar1 = auStack_258;
    puVar6 = puVar13;
    do {
      if ((&cStack_229)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_288 = FUN_106a7d4c4;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar4;
  puVar9 = puVar5;
  puVar13 = puVar6;
  puStack_2c0 = unaff_x24;
  puStack_2b8 = unaff_x23;
  puStack_2b0 = puVar1;
  puStack_2a8 = puVar7;
  puStack_2a0 = puVar3;
  puStack_298 = puVar2;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    puVar12 = (undefined8 *)&UNK_110959518;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar8[1];
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar1 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      unaff_x24 = auStack_2f8;
      func_0x00010002b838(auStack_2f8,puVar1);
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar1 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x00010002b838(auStack_2e0,puVar1);
      uStack_318 = 0;
      uStack_310 = 0;
      uStack_308 = 0;
      func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
      puVar12 = (undefined8 *)&UNK_110959518;
      unaff_x23 = &uStack_318;
      puVar9 = &uStack_318;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959518,puVar9,puVar6);
      puStack_300 = unaff_x23;
      func_0x00010007e5dc(&puStack_300);
      lVar14 = 0;
      puVar8 = auStack_2f8;
      puVar13 = puVar6;
      do {
        if ((&cStack_2c9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  _objc_release(puVar5);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar3 = puVar1;
  __Unwind_Resume();
  pcStack_328 = FUN_106a7d714;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar12;
  puVar2 = puVar9;
  puVar6 = puVar13;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar8;
  puStack_348 = puVar1;
  puStack_340 = puVar5;
  puStack_338 = puVar4;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(puVar12);
  _objc_retain(puVar9);
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    puVar7 = (undefined8 *)&UNK_110959568;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar3[1];
      _objc_retain(puVar12);
      if (puVar12 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar1 = puVar12;
        _objc_retainAutorelease(puVar12);
        func_0x00010bdc3520();
      }
      _objc_release(puVar12);
      unaff_x24 = auStack_398;
      func_0x00010002b838(auStack_398,puVar1);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar1 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_380,puVar1);
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      uStack_3a8 = 0;
      func_0x00010007e1e8(&uStack_3b8,auStack_398,&lStack_368,2);
      puVar7 = (undefined8 *)&UNK_110959568;
      unaff_x23 = &uStack_3b8;
      puVar2 = &uStack_3b8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959568,puVar2,puVar13);
      puStack_3a0 = unaff_x23;
      func_0x00010007e5dc(&puStack_3a0);
      lVar14 = 0;
      puVar3 = auStack_398;
      puVar6 = puVar13;
      do {
        if ((&cStack_369)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  _objc_release(puVar9);
  puVar1 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar12);
  puVar8 = puVar1;
  __Unwind_Resume();
  pcStack_3c8 = FUN_106a7d964;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar5 = puVar2;
  puVar13 = puVar6;
  puStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  puStack_3f0 = puVar3;
  puStack_3e8 = puVar1;
  puStack_3e0 = puVar9;
  puStack_3d8 = puVar12;
  pppuStack_3d0 = &pppuStack_330;
  _objc_retain(puVar7);
  _objc_retain(puVar2);
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    puVar4 = (undefined8 *)&UNK_1109595b8;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar8[1];
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x24 = auStack_438;
      func_0x00010002b838(auStack_438,puVar1);
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar2);
        puVar1 = puVar2;
        func_0x00010bdc3520(puVar2);
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_420,puVar1);
      uStack_458 = 0;
      uStack_450 = 0;
      uStack_448 = 0;
      func_0x00010007e1e8(&uStack_458,auStack_438,&lStack_408,2);
      puVar4 = (undefined8 *)&UNK_1109595b8;
      unaff_x23 = &uStack_458;
      puVar5 = &uStack_458;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109595b8,puVar5,puVar6);
      puStack_440 = unaff_x23;
      func_0x00010007e5dc(&puStack_440);
      lVar14 = 0;
      puVar8 = auStack_438;
      puVar13 = puVar6;
      do {
        if ((&cStack_409)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  _objc_release(puVar2);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_421 < '\0') {
    __ZdlPv(auStack_438[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar7);
  puVar3 = puVar1;
  __Unwind_Resume();
  pcStack_468 = FUN_106a7dbb4;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar4;
  puVar9 = puVar5;
  puVar6 = puVar13;
  puStack_4a0 = unaff_x24;
  puStack_498 = unaff_x23;
  puStack_490 = puVar8;
  puStack_488 = puVar1;
  puStack_480 = puVar2;
  puStack_478 = puVar7;
  pppuStack_470 = &pppuStack_3d0;
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  puVar1 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_4d8;
    func_0x00010002b838(auStack_4d8,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar1 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_4c0,puVar1);
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    uStack_4e8 = 0;
    func_0x00010007e1e8(&uStack_4f8,auStack_4d8,&lStack_4a8,2);
    puVar12 = (undefined8 *)&UNK_110959608;
    unaff_x23 = &uStack_4f8;
    puVar9 = &uStack_4f8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959608,puVar9,puVar13);
    puStack_4e0 = unaff_x23;
    func_0x00010007e5dc(&puStack_4e0);
    lVar14 = 0;
    puVar1 = auStack_4d8;
    puVar6 = puVar13;
    do {
      if ((&cStack_4a9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4c0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar5);
  puVar7 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_4c1 < '\0') {
    __ZdlPv(auStack_4d8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_508 = FUN_106a7dde4;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar12;
  puVar3 = puVar9;
  puVar13 = puVar6;
  puStack_540 = unaff_x24;
  puStack_538 = unaff_x23;
  puStack_530 = puVar1;
  puStack_528 = puVar7;
  puStack_520 = puVar5;
  puStack_518 = puVar4;
  pppuStack_510 = &pppuStack_470;
  _objc_retain(puVar12);
  _objc_retain(puVar9);
  puVar1 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar12;
      _objc_retainAutorelease(puVar12);
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    unaff_x24 = auStack_578;
    func_0x00010002b838(auStack_578,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_560,puVar1);
    uStack_598 = 0;
    uStack_590 = 0;
    uStack_588 = 0;
    func_0x00010007e1e8(&uStack_598,auStack_578,&lStack_548,2);
    puVar2 = (undefined8 *)&UNK_110959658;
    unaff_x23 = &uStack_598;
    puVar3 = &uStack_598;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959658,puVar3,puVar6);
    puStack_580 = unaff_x23;
    func_0x00010007e5dc(&puStack_580);
    lVar14 = 0;
    puVar1 = auStack_578;
    puVar13 = puVar6;
    do {
      if ((&cStack_549)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_560 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar9);
  puVar7 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_561 < '\0') {
    __ZdlPv(auStack_578[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar12);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_5a8 = FUN_106a7e014;
  lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar5 = puVar3;
  puVar6 = puVar13;
  puStack_5e0 = unaff_x24;
  puStack_5d8 = unaff_x23;
  puStack_5d0 = puVar1;
  puStack_5c8 = puVar7;
  puStack_5c0 = puVar9;
  puStack_5b8 = puVar12;
  pppuStack_5b0 = &pppuStack_510;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  puVar1 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_618;
    func_0x00010002b838(auStack_618,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_600,puVar1);
    uStack_638 = 0;
    uStack_630 = 0;
    uStack_628 = 0;
    func_0x00010007e1e8(&uStack_638,auStack_618,&lStack_5e8,2);
    puVar4 = (undefined8 *)&UNK_1109596a8;
    unaff_x23 = &uStack_638;
    puVar5 = &uStack_638;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109596a8,puVar5,puVar13);
    puStack_620 = unaff_x23;
    func_0x00010007e5dc(&puStack_620);
    lVar14 = 0;
    puVar1 = auStack_618;
    puVar6 = puVar13;
    do {
      if ((&cStack_5e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_600 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_601 < '\0') {
    __ZdlPv(auStack_618[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar9 = puVar7;
  __Unwind_Resume();
  puVar13 = &uStack_6c0;
  pcStack_648 = FUN_106a7e244;
  lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar4;
  puVar8 = puVar5;
  puStack_680 = unaff_x24;
  puStack_678 = unaff_x23;
  puStack_670 = puVar1;
  puStack_668 = puVar7;
  puStack_660 = puVar3;
  puStack_658 = puVar2;
  pppuStack_650 = &pppuStack_5b0;
  _objc_retain(puVar4);
  plVar15 = (long *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar9[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_6a0;
    func_0x00010002b838(auStack_6a0,puVar1);
    uStack_6c0 = 0;
    uStack_6b8 = 0;
    uStack_6b0 = 0;
    func_0x00010007e1e8(&uStack_6c0,auStack_6a0,&lStack_688,1);
    puVar12 = (undefined8 *)&UNK_1109596f8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109596f8,&uStack_6c0,puVar5);
    puStack_6a8 = (undefined1 *)&uStack_6c0;
    func_0x00010007e5dc(&puStack_6a8);
    puVar8 = puVar13;
    puVar6 = puVar5;
    puVar1 = &uStack_6c0;
    if (cStack_689 < '\0') {
      __ZdlPv(auStack_6a0[0]);
      puVar8 = puVar13;
      puVar6 = puVar5;
      puVar1 = &uStack_6c0;
    }
  }
  puVar7 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_688) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar9 = puVar7;
  __Unwind_Resume();
  pcStack_6c8 = FUN_106a7e3b8;
  lStack_708 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar12;
  puVar2 = puVar8;
  puVar3 = puVar6;
  puStack_700 = unaff_x24;
  puStack_6f8 = unaff_x23;
  puStack_6f0 = puVar1;
  plStack_6e8 = plVar15;
  puStack_6e0 = puVar7;
  puStack_6d8 = puVar4;
  pppuStack_6d0 = &pppuStack_650;
  _objc_retain(puVar12);
  _objc_retain(puVar8);
  puVar1 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar9[1];
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar12;
      _objc_retainAutorelease(puVar12);
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    unaff_x24 = auStack_738;
    func_0x00010002b838(auStack_738,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_720,puVar1);
    uStack_758 = 0;
    uStack_750 = 0;
    uStack_748 = 0;
    func_0x00010007e1e8(&uStack_758,auStack_738,&lStack_708,2);
    puVar5 = (undefined8 *)&UNK_110959748;
    unaff_x23 = &uStack_758;
    puVar2 = &uStack_758;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959748,puVar2,puVar6);
    puStack_740 = unaff_x23;
    func_0x00010007e5dc(&puStack_740);
    lVar14 = 0;
    puVar1 = auStack_738;
    puVar3 = puVar6;
    do {
      if ((&cStack_709)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_720 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar8);
  puVar7 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_708) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_721 < '\0') {
    __ZdlPv(auStack_738[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar12);
  puVar6 = puVar7;
  __Unwind_Resume();
  pcStack_768 = FUN_106a7e5e8;
  lStack_7a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puVar9 = puVar2;
  puVar13 = puVar3;
  puStack_7a0 = unaff_x24;
  puStack_798 = unaff_x23;
  puStack_790 = puVar1;
  puStack_788 = puVar7;
  puStack_780 = puVar8;
  puStack_778 = puVar12;
  pppuStack_770 = &pppuStack_6d0;
  _objc_retain(puVar5);
  _objc_retain(puVar2);
  puVar1 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_7d8;
    func_0x00010002b838(auStack_7d8,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar1 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_7c0,puVar1);
    uStack_7f8 = 0;
    uStack_7f0 = 0;
    uStack_7e8 = 0;
    func_0x00010007e1e8(&uStack_7f8,auStack_7d8,&lStack_7a8,2);
    puVar4 = (undefined8 *)&UNK_110959798;
    unaff_x23 = &uStack_7f8;
    puVar9 = &uStack_7f8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959798,puVar9,puVar3);
    puStack_7e0 = unaff_x23;
    func_0x00010007e5dc(&puStack_7e0);
    lVar14 = 0;
    puVar1 = auStack_7d8;
    puVar13 = puVar3;
    do {
      if ((&cStack_7a9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_7c0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar2);
  puVar7 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_7c1 < '\0') {
    __ZdlPv(auStack_7d8[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar5);
  puVar3 = puVar7;
  __Unwind_Resume();
  puVar6 = &uStack_880;
  pcStack_808 = FUN_106a7e818;
  lStack_848 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar4;
  puVar8 = puVar9;
  puStack_840 = unaff_x24;
  puStack_838 = unaff_x23;
  puStack_830 = puVar1;
  puStack_828 = puVar7;
  puStack_820 = puVar2;
  puStack_818 = puVar5;
  pppuStack_810 = &pppuStack_770;
  _objc_retain(puVar4);
  plVar15 = (long *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_860;
    func_0x00010002b838(auStack_860,puVar1);
    uStack_880 = 0;
    uStack_878 = 0;
    uStack_870 = 0;
    func_0x00010007e1e8(&uStack_880,auStack_860,&lStack_848,1);
    puVar12 = (undefined8 *)&UNK_1109597e8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109597e8,&uStack_880,puVar9);
    puStack_868 = (undefined1 *)&uStack_880;
    func_0x00010007e5dc(&puStack_868);
    puVar8 = puVar6;
    puVar13 = puVar9;
    puVar1 = &uStack_880;
    if (cStack_849 < '\0') {
      __ZdlPv(auStack_860[0]);
      puVar8 = puVar6;
      puVar13 = puVar9;
      puVar1 = &uStack_880;
    }
  }
  puVar7 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_848) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar2 = puVar7;
  __Unwind_Resume();
  puVar3 = &uStack_900;
  pcStack_888 = FUN_106a7e98c;
  lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar12;
  puVar9 = puVar8;
  puStack_8c0 = unaff_x24;
  puStack_8b8 = unaff_x23;
  puStack_8b0 = puVar1;
  plStack_8a8 = plVar15;
  puStack_8a0 = puVar7;
  puStack_898 = puVar4;
  pppuStack_890 = &pppuStack_810;
  _objc_retain(puVar12);
  plVar15 = (long *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar2[1];
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar12;
      _objc_retainAutorelease(puVar12);
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    unaff_x23 = auStack_8e0;
    func_0x00010002b838(auStack_8e0,puVar1);
    uStack_900 = 0;
    uStack_8f8 = 0;
    uStack_8f0 = 0;
    func_0x00010007e1e8(&uStack_900,auStack_8e0,&lStack_8c8,1);
    puVar5 = (undefined8 *)&UNK_110959838;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959838,&uStack_900,puVar8);
    puStack_8e8 = (undefined1 *)&uStack_900;
    func_0x00010007e5dc(&puStack_8e8);
    puVar9 = puVar3;
    puVar13 = puVar8;
    puVar1 = &uStack_900;
    if (cStack_8c9 < '\0') {
      __ZdlPv(auStack_8e0[0]);
      puVar9 = puVar3;
      puVar13 = puVar8;
      puVar1 = &uStack_900;
    }
  }
  puVar7 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  _objc_release(puVar12);
  puVar2 = puVar7;
  __Unwind_Resume();
  puVar8 = &uStack_980;
  pcStack_908 = FUN_106a7eb00;
  lStack_948 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puVar3 = puVar9;
  puStack_940 = unaff_x24;
  puStack_938 = unaff_x23;
  puStack_930 = puVar1;
  plStack_928 = plVar15;
  puStack_920 = puVar7;
  puStack_918 = puVar12;
  pppuStack_910 = &pppuStack_890;
  _objc_retain(puVar5);
  plVar15 = (long *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar2[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_960;
    func_0x00010002b838(auStack_960,puVar1);
    uStack_980 = 0;
    uStack_978 = 0;
    uStack_970 = 0;
    func_0x00010007e1e8(&uStack_980,auStack_960,&lStack_948,1);
    puVar4 = (undefined8 *)&UNK_110959888;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959888,&uStack_980,puVar9);
    puStack_968 = (undefined1 *)&uStack_980;
    func_0x00010007e5dc(&puStack_968);
    puVar3 = puVar8;
    puVar13 = puVar9;
    puVar1 = &uStack_980;
    if (cStack_949 < '\0') {
      __ZdlPv(auStack_960[0]);
      puVar3 = puVar8;
      puVar13 = puVar9;
      puVar1 = &uStack_980;
    }
  }
  puVar7 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_948) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar9 = puVar7;
  __Unwind_Resume();
  pcStack_988 = FUN_106a7ec74;
  lStack_9c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  puVar12 = puVar3;
  puVar8 = puVar13;
  puStack_9c0 = unaff_x24;
  puStack_9b8 = unaff_x23;
  puStack_9b0 = puVar1;
  plStack_9a8 = plVar15;
  puStack_9a0 = puVar7;
  puStack_998 = puVar5;
  pppuStack_990 = &pppuStack_910;
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  puVar1 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar9[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_9f8;
    func_0x00010002b838(auStack_9f8,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_9e0,puVar1);
    uStack_a18 = 0;
    uStack_a10 = 0;
    uStack_a08 = 0;
    func_0x00010007e1e8(&uStack_a18,auStack_9f8,&lStack_9c8,2);
    puVar2 = (undefined8 *)&UNK_1109598d8;
    unaff_x23 = &uStack_a18;
    puVar12 = &uStack_a18;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109598d8,puVar12,puVar13);
    puStack_a00 = unaff_x23;
    func_0x00010007e5dc(&puStack_a00);
    lVar14 = 0;
    puVar1 = auStack_9f8;
    puVar8 = puVar13;
    do {
      if ((&cStack_9c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_9e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar7 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_9e1 < '\0') {
    __ZdlPv(auStack_9f8[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar6 = puVar7;
  __Unwind_Resume();
  pcStack_a28 = FUN_106a7eea4;
  lStack_a68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar9 = puVar12;
  puVar13 = puVar8;
  puStack_a60 = unaff_x24;
  puStack_a58 = unaff_x23;
  puStack_a50 = puVar1;
  puStack_a48 = puVar7;
  puStack_a40 = puVar3;
  puStack_a38 = puVar4;
  pppuStack_a30 = &pppuStack_990;
  _objc_retain(puVar2);
  _objc_retain(puVar12);
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_a98,puVar1);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar1 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_a80,puVar1);
    uStack_ab8 = 0;
    uStack_ab0 = 0;
    uStack_aa8 = 0;
    func_0x00010007e1e8(&uStack_ab8,auStack_a98,&lStack_a68,2);
    puVar5 = (undefined8 *)&UNK_110959928;
    puVar9 = &uStack_ab8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959928,puVar9,puVar8);
    puStack_aa0 = &uStack_ab8;
    func_0x00010007e5dc(&puStack_aa0);
    lVar14 = 0;
    puVar13 = puVar8;
    do {
      if ((&cStack_a69)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_a80 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar12);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  if (cStack_a81 < '\0') {
    __ZdlPv(auStack_a98[0]);
  }
  _objc_release(puVar12);
  _objc_release(puVar2);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar13);
  _objc_retain(puVar9);
  _objc_retain(puVar1);
  func_0x00010c0b5ac0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  FUN_106a7f1bc(puVar1,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar5);
  puVar10 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar9);
  puVar11 = puVar10;
  func_0x00010c22b9e0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106a7ce34; end: 106a7d063;  */

void FUN_106a7ce34(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 *puStack_a00;
  undefined8 auStack_9f8 [2];
  char cStack_9e1;
  undefined8 auStack_9e0 [2];
  char cStack_9c9;
  long lStack_9c8;
  undefined8 *puStack_9c0;
  undefined8 *puStack_9b8;
  undefined8 *puStack_9b0;
  undefined8 *puStack_9a8;
  undefined8 *puStack_9a0;
  undefined8 *puStack_998;
  undefined8 ***pppuStack_990;
  code *pcStack_988;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 *puStack_960;
  undefined8 auStack_958 [2];
  char cStack_941;
  undefined8 auStack_940 [2];
  char cStack_929;
  long lStack_928;
  undefined8 *puStack_920;
  undefined8 *puStack_918;
  undefined8 *puStack_910;
  long *plStack_908;
  undefined8 *puStack_900;
  undefined8 *puStack_8f8;
  undefined8 ***pppuStack_8f0;
  code *pcStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined1 *puStack_8c8;
  undefined8 auStack_8c0 [2];
  char cStack_8a9;
  long lStack_8a8;
  undefined8 *puStack_8a0;
  undefined8 *puStack_898;
  undefined8 *puStack_890;
  long *plStack_888;
  undefined8 *puStack_880;
  undefined8 *puStack_878;
  undefined8 ***pppuStack_870;
  code *pcStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined1 *puStack_848;
  undefined8 auStack_840 [2];
  char cStack_829;
  long lStack_828;
  undefined8 *puStack_820;
  undefined8 *puStack_818;
  undefined8 *puStack_810;
  long *plStack_808;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined8 ***pppuStack_7f0;
  code *pcStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined1 *puStack_7c8;
  undefined8 auStack_7c0 [2];
  char cStack_7a9;
  long lStack_7a8;
  undefined8 *puStack_7a0;
  undefined8 *puStack_798;
  undefined8 *puStack_790;
  undefined8 *puStack_788;
  undefined8 *puStack_780;
  undefined8 *puStack_778;
  undefined8 ***pppuStack_770;
  code *pcStack_768;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 *puStack_740;
  undefined8 auStack_738 [2];
  char cStack_721;
  undefined8 auStack_720 [2];
  char cStack_709;
  long lStack_708;
  undefined8 *puStack_700;
  undefined8 *puStack_6f8;
  undefined8 *puStack_6f0;
  undefined8 *puStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 auStack_698 [2];
  char cStack_681;
  undefined8 auStack_680 [2];
  char cStack_669;
  long lStack_668;
  undefined8 *puStack_660;
  undefined8 *puStack_658;
  undefined8 *puStack_650;
  long *plStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 ***pppuStack_630;
  code *pcStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined1 *puStack_608;
  undefined8 auStack_600 [2];
  char cStack_5e9;
  long lStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 *puStack_5d0;
  undefined8 *puStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 *puStack_580;
  undefined8 auStack_578 [2];
  char cStack_561;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 auStack_4d8 [2];
  char cStack_4c1;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 *puStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  puVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_110959428;
    unaff_x23 = &uStack_98;
    puVar7 = &uStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959428,puVar7,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar14 = 0;
    puVar4 = auStack_78;
    puVar5 = param_4;
    do {
      if ((&cStack_49)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_106a7d064;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar1;
  puVar9 = puVar7;
  puVar8 = puVar5;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar4;
  puStack_c8 = puVar2;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  puVar4 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar4 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar4);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar4 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_100,puVar4);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar10 = (undefined8 *)&UNK_110959478;
    unaff_x23 = &uStack_138;
    puVar9 = &uStack_138;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959478,puVar9,puVar5);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar14 = 0;
    puVar4 = auStack_118;
    puVar8 = puVar5;
    do {
      if ((&cStack_e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar7);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_148 = FUN_106a7d294;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar10;
  puVar3 = puVar9;
  puVar13 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar4;
  puStack_168 = puVar5;
  puStack_160 = puVar7;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar10);
  _objc_retain(puVar9);
  puVar1 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar2 = (undefined8 *)&UNK_1109594c8;
    unaff_x23 = &uStack_1d8;
    puVar3 = &uStack_1d8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109594c8,puVar3,puVar8);
    puStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1c0);
    lVar14 = 0;
    puVar1 = auStack_1b8;
    puVar13 = puVar8;
    do {
      if ((&cStack_189)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar9);
  puVar7 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar10);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106a7d4c4;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar5 = puVar3;
  puVar6 = puVar13;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar1;
  puStack_208 = puVar7;
  puStack_200 = puVar9;
  puStack_1f8 = puVar10;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    puVar4 = (undefined8 *)&UNK_110959518;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar8[1];
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar1 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      unaff_x24 = auStack_258;
      func_0x00010002b838(auStack_258,puVar1);
      _objc_retain(puVar3);
      if (puVar3 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar3);
        puVar1 = puVar3;
        func_0x00010bdc3520(puVar3);
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_240,puVar1);
      uStack_278 = 0;
      uStack_270 = 0;
      uStack_268 = 0;
      func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
      puVar4 = (undefined8 *)&UNK_110959518;
      unaff_x23 = &uStack_278;
      puVar5 = &uStack_278;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959518,puVar5,puVar13);
      puStack_260 = unaff_x23;
      func_0x00010007e5dc(&puStack_260);
      lVar14 = 0;
      puVar8 = auStack_258;
      puVar6 = puVar13;
      do {
        if ((&cStack_229)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  _objc_release(puVar3);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar9 = puVar1;
  __Unwind_Resume();
  pcStack_288 = FUN_106a7d714;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar4;
  puVar10 = puVar5;
  puVar13 = puVar6;
  puStack_2c0 = unaff_x24;
  puStack_2b8 = unaff_x23;
  puStack_2b0 = puVar8;
  puStack_2a8 = puVar1;
  puStack_2a0 = puVar3;
  puStack_298 = puVar2;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  if (puVar9 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar9[1];
    puVar7 = (undefined8 *)&UNK_110959568;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar9[1];
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar1 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      unaff_x24 = auStack_2f8;
      func_0x00010002b838(auStack_2f8,puVar1);
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar1 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x00010002b838(auStack_2e0,puVar1);
      uStack_318 = 0;
      uStack_310 = 0;
      uStack_308 = 0;
      func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
      puVar7 = (undefined8 *)&UNK_110959568;
      unaff_x23 = &uStack_318;
      puVar10 = &uStack_318;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959568,puVar10,puVar6);
      puStack_300 = unaff_x23;
      func_0x00010007e5dc(&puStack_300);
      lVar14 = 0;
      puVar9 = auStack_2f8;
      puVar13 = puVar6;
      do {
        if ((&cStack_2c9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  _objc_release(puVar5);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar8 = puVar1;
  __Unwind_Resume();
  pcStack_328 = FUN_106a7d964;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar3 = puVar10;
  puVar6 = puVar13;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar9;
  puStack_348 = puVar1;
  puStack_340 = puVar5;
  puStack_338 = puVar4;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(puVar7);
  _objc_retain(puVar10);
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    puVar2 = (undefined8 *)&UNK_1109595b8;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar8[1];
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x24 = auStack_398;
      func_0x00010002b838(auStack_398,puVar1);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar1 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_380,puVar1);
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      uStack_3a8 = 0;
      func_0x00010007e1e8(&uStack_3b8,auStack_398,&lStack_368,2);
      puVar2 = (undefined8 *)&UNK_1109595b8;
      unaff_x23 = &uStack_3b8;
      puVar3 = &uStack_3b8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109595b8,puVar3,puVar13);
      puStack_3a0 = unaff_x23;
      func_0x00010007e5dc(&puStack_3a0);
      lVar14 = 0;
      puVar8 = auStack_398;
      puVar6 = puVar13;
      do {
        if ((&cStack_369)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  _objc_release(puVar10);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar7);
  puVar9 = puVar1;
  __Unwind_Resume();
  pcStack_3c8 = FUN_106a7dbb4;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar5 = puVar3;
  puVar13 = puVar6;
  puStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  puStack_3f0 = puVar8;
  puStack_3e8 = puVar1;
  puStack_3e0 = puVar10;
  puStack_3d8 = puVar7;
  pppuStack_3d0 = &pppuStack_330;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  puVar1 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar9[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_438;
    func_0x00010002b838(auStack_438,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_420,puVar1);
    uStack_458 = 0;
    uStack_450 = 0;
    uStack_448 = 0;
    func_0x00010007e1e8(&uStack_458,auStack_438,&lStack_408,2);
    puVar4 = (undefined8 *)&UNK_110959608;
    unaff_x23 = &uStack_458;
    puVar5 = &uStack_458;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959608,puVar5,puVar6);
    puStack_440 = unaff_x23;
    func_0x00010007e5dc(&puStack_440);
    lVar14 = 0;
    puVar1 = auStack_438;
    puVar13 = puVar6;
    do {
      if ((&cStack_409)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_421 < '\0') {
    __ZdlPv(auStack_438[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_468 = FUN_106a7dde4;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar4;
  puVar9 = puVar5;
  puVar6 = puVar13;
  puStack_4a0 = unaff_x24;
  puStack_498 = unaff_x23;
  puStack_490 = puVar1;
  puStack_488 = puVar7;
  puStack_480 = puVar3;
  puStack_478 = puVar2;
  pppuStack_470 = &pppuStack_3d0;
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  puVar1 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_4d8;
    func_0x00010002b838(auStack_4d8,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar1 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_4c0,puVar1);
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    uStack_4e8 = 0;
    func_0x00010007e1e8(&uStack_4f8,auStack_4d8,&lStack_4a8,2);
    puVar10 = (undefined8 *)&UNK_110959658;
    unaff_x23 = &uStack_4f8;
    puVar9 = &uStack_4f8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959658,puVar9,puVar13);
    puStack_4e0 = unaff_x23;
    func_0x00010007e5dc(&puStack_4e0);
    lVar14 = 0;
    puVar1 = auStack_4d8;
    puVar6 = puVar13;
    do {
      if ((&cStack_4a9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4c0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar5);
  puVar7 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_4c1 < '\0') {
    __ZdlPv(auStack_4d8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_508 = FUN_106a7e014;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar10;
  puVar3 = puVar9;
  puVar13 = puVar6;
  puStack_540 = unaff_x24;
  puStack_538 = unaff_x23;
  puStack_530 = puVar1;
  puStack_528 = puVar7;
  puStack_520 = puVar5;
  puStack_518 = puVar4;
  pppuStack_510 = &pppuStack_470;
  _objc_retain(puVar10);
  _objc_retain(puVar9);
  puVar1 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    unaff_x24 = auStack_578;
    func_0x00010002b838(auStack_578,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_560,puVar1);
    uStack_598 = 0;
    uStack_590 = 0;
    uStack_588 = 0;
    func_0x00010007e1e8(&uStack_598,auStack_578,&lStack_548,2);
    puVar2 = (undefined8 *)&UNK_1109596a8;
    unaff_x23 = &uStack_598;
    puVar3 = &uStack_598;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109596a8,puVar3,puVar6);
    puStack_580 = unaff_x23;
    func_0x00010007e5dc(&puStack_580);
    lVar14 = 0;
    puVar1 = auStack_578;
    puVar13 = puVar6;
    do {
      if ((&cStack_549)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_560 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar9);
  puVar7 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_561 < '\0') {
    __ZdlPv(auStack_578[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar10);
  puVar5 = puVar7;
  __Unwind_Resume();
  puVar6 = &uStack_620;
  pcStack_5a8 = FUN_106a7e244;
  lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar8 = puVar3;
  puStack_5e0 = unaff_x24;
  puStack_5d8 = unaff_x23;
  puStack_5d0 = puVar1;
  puStack_5c8 = puVar7;
  puStack_5c0 = puVar9;
  puStack_5b8 = puVar10;
  pppuStack_5b0 = &pppuStack_510;
  _objc_retain(puVar2);
  plVar15 = (long *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar5[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_600;
    func_0x00010002b838(auStack_600,puVar1);
    uStack_620 = 0;
    uStack_618 = 0;
    uStack_610 = 0;
    func_0x00010007e1e8(&uStack_620,auStack_600,&lStack_5e8,1);
    puVar4 = (undefined8 *)&UNK_1109596f8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109596f8,&uStack_620,puVar3);
    puStack_608 = (undefined1 *)&uStack_620;
    func_0x00010007e5dc(&puStack_608);
    puVar8 = puVar6;
    puVar13 = puVar3;
    puVar1 = &uStack_620;
    if (cStack_5e9 < '\0') {
      __ZdlPv(auStack_600[0]);
      puVar8 = puVar6;
      puVar13 = puVar3;
      puVar1 = &uStack_620;
    }
  }
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar9 = puVar7;
  __Unwind_Resume();
  pcStack_628 = FUN_106a7e3b8;
  lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  puVar10 = puVar8;
  puVar3 = puVar13;
  puStack_660 = unaff_x24;
  puStack_658 = unaff_x23;
  puStack_650 = puVar1;
  plStack_648 = plVar15;
  puStack_640 = puVar7;
  puStack_638 = puVar2;
  pppuStack_630 = &pppuStack_5b0;
  _objc_retain(puVar4);
  _objc_retain(puVar8);
  puVar1 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar9[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_698;
    func_0x00010002b838(auStack_698,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_680,puVar1);
    uStack_6b8 = 0;
    uStack_6b0 = 0;
    uStack_6a8 = 0;
    func_0x00010007e1e8(&uStack_6b8,auStack_698,&lStack_668,2);
    puVar5 = (undefined8 *)&UNK_110959748;
    unaff_x23 = &uStack_6b8;
    puVar10 = &uStack_6b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959748,puVar10,puVar13);
    puStack_6a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_6a0);
    lVar14 = 0;
    puVar1 = auStack_698;
    puVar3 = puVar13;
    do {
      if ((&cStack_669)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_680 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar8);
  puVar7 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_668) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_681 < '\0') {
    __ZdlPv(auStack_698[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar4);
  puVar6 = puVar7;
  __Unwind_Resume();
  pcStack_6c8 = FUN_106a7e5e8;
  lStack_708 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar5;
  puVar9 = puVar10;
  puVar13 = puVar3;
  puStack_700 = unaff_x24;
  puStack_6f8 = unaff_x23;
  puStack_6f0 = puVar1;
  puStack_6e8 = puVar7;
  puStack_6e0 = puVar8;
  puStack_6d8 = puVar4;
  pppuStack_6d0 = &pppuStack_630;
  _objc_retain(puVar5);
  _objc_retain(puVar10);
  puVar1 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_738;
    func_0x00010002b838(auStack_738,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar1 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_720,puVar1);
    uStack_758 = 0;
    uStack_750 = 0;
    uStack_748 = 0;
    func_0x00010007e1e8(&uStack_758,auStack_738,&lStack_708,2);
    puVar2 = (undefined8 *)&UNK_110959798;
    unaff_x23 = &uStack_758;
    puVar9 = &uStack_758;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959798,puVar9,puVar3);
    puStack_740 = unaff_x23;
    func_0x00010007e5dc(&puStack_740);
    lVar14 = 0;
    puVar1 = auStack_738;
    puVar13 = puVar3;
    do {
      if ((&cStack_709)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_720 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar10);
  puVar7 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_708) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_721 < '\0') {
    __ZdlPv(auStack_738[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar5);
  puVar3 = puVar7;
  __Unwind_Resume();
  puVar6 = &uStack_7e0;
  pcStack_768 = FUN_106a7e818;
  lStack_7a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar8 = puVar9;
  puStack_7a0 = unaff_x24;
  puStack_798 = unaff_x23;
  puStack_790 = puVar1;
  puStack_788 = puVar7;
  puStack_780 = puVar10;
  puStack_778 = puVar5;
  pppuStack_770 = &pppuStack_6d0;
  _objc_retain(puVar2);
  plVar15 = (long *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_7c0;
    func_0x00010002b838(auStack_7c0,puVar1);
    uStack_7e0 = 0;
    uStack_7d8 = 0;
    uStack_7d0 = 0;
    func_0x00010007e1e8(&uStack_7e0,auStack_7c0,&lStack_7a8,1);
    puVar4 = (undefined8 *)&UNK_1109597e8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109597e8,&uStack_7e0,puVar9);
    puStack_7c8 = (undefined1 *)&uStack_7e0;
    func_0x00010007e5dc(&puStack_7c8);
    puVar8 = puVar6;
    puVar13 = puVar9;
    puVar1 = &uStack_7e0;
    if (cStack_7a9 < '\0') {
      __ZdlPv(auStack_7c0[0]);
      puVar8 = puVar6;
      puVar13 = puVar9;
      puVar1 = &uStack_7e0;
    }
  }
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar10 = puVar7;
  __Unwind_Resume();
  puVar3 = &uStack_860;
  pcStack_7e8 = FUN_106a7e98c;
  lStack_828 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  puVar9 = puVar8;
  puStack_820 = unaff_x24;
  puStack_818 = unaff_x23;
  puStack_810 = puVar1;
  plStack_808 = plVar15;
  puStack_800 = puVar7;
  puStack_7f8 = puVar2;
  pppuStack_7f0 = &pppuStack_770;
  _objc_retain(puVar4);
  plVar15 = (long *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar10[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_840;
    func_0x00010002b838(auStack_840,puVar1);
    uStack_860 = 0;
    uStack_858 = 0;
    uStack_850 = 0;
    func_0x00010007e1e8(&uStack_860,auStack_840,&lStack_828,1);
    puVar5 = (undefined8 *)&UNK_110959838;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959838,&uStack_860,puVar8);
    puStack_848 = (undefined1 *)&uStack_860;
    func_0x00010007e5dc(&puStack_848);
    puVar9 = puVar3;
    puVar13 = puVar8;
    puVar1 = &uStack_860;
    if (cStack_829 < '\0') {
      __ZdlPv(auStack_840[0]);
      puVar9 = puVar3;
      puVar13 = puVar8;
      puVar1 = &uStack_860;
    }
  }
  puVar7 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_828) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar10 = puVar7;
  __Unwind_Resume();
  puVar8 = &uStack_8e0;
  pcStack_868 = FUN_106a7eb00;
  lStack_8a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar5;
  puVar3 = puVar9;
  puStack_8a0 = unaff_x24;
  puStack_898 = unaff_x23;
  puStack_890 = puVar1;
  plStack_888 = plVar15;
  puStack_880 = puVar7;
  puStack_878 = puVar4;
  pppuStack_870 = &pppuStack_7f0;
  _objc_retain(puVar5);
  plVar15 = (long *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar10[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_8c0;
    func_0x00010002b838(auStack_8c0,puVar1);
    uStack_8e0 = 0;
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    func_0x00010007e1e8(&uStack_8e0,auStack_8c0,&lStack_8a8,1);
    puVar2 = (undefined8 *)&UNK_110959888;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959888,&uStack_8e0,puVar9);
    puStack_8c8 = (undefined1 *)&uStack_8e0;
    func_0x00010007e5dc(&puStack_8c8);
    puVar3 = puVar8;
    puVar13 = puVar9;
    puVar1 = &uStack_8e0;
    if (cStack_8a9 < '\0') {
      __ZdlPv(auStack_8c0[0]);
      puVar3 = puVar8;
      puVar13 = puVar9;
      puVar1 = &uStack_8e0;
    }
  }
  puVar7 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar9 = puVar7;
  __Unwind_Resume();
  pcStack_8e8 = FUN_106a7ec74;
  lStack_928 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar10 = puVar3;
  puVar8 = puVar13;
  puStack_920 = unaff_x24;
  puStack_918 = unaff_x23;
  puStack_910 = puVar1;
  plStack_908 = plVar15;
  puStack_900 = puVar7;
  puStack_8f8 = puVar5;
  pppuStack_8f0 = &pppuStack_870;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  puVar1 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar9[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_958;
    func_0x00010002b838(auStack_958,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_940,puVar1);
    uStack_978 = 0;
    uStack_970 = 0;
    uStack_968 = 0;
    func_0x00010007e1e8(&uStack_978,auStack_958,&lStack_928,2);
    puVar4 = (undefined8 *)&UNK_1109598d8;
    unaff_x23 = &uStack_978;
    puVar10 = &uStack_978;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109598d8,puVar10,puVar13);
    puStack_960 = unaff_x23;
    func_0x00010007e5dc(&puStack_960);
    lVar14 = 0;
    puVar1 = auStack_958;
    puVar8 = puVar13;
    do {
      if ((&cStack_929)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_940 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_928) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_941 < '\0') {
    __ZdlPv(auStack_958[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar6 = puVar7;
  __Unwind_Resume();
  pcStack_988 = FUN_106a7eea4;
  lStack_9c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  puVar9 = puVar10;
  puVar13 = puVar8;
  puStack_9c0 = unaff_x24;
  puStack_9b8 = unaff_x23;
  puStack_9b0 = puVar1;
  puStack_9a8 = puVar7;
  puStack_9a0 = puVar3;
  puStack_998 = puVar2;
  pppuStack_990 = &pppuStack_8f0;
  _objc_retain(puVar4);
  _objc_retain(puVar10);
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_9f8,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar1 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_9e0,puVar1);
    uStack_a18 = 0;
    uStack_a10 = 0;
    uStack_a08 = 0;
    func_0x00010007e1e8(&uStack_a18,auStack_9f8,&lStack_9c8,2);
    puVar5 = (undefined8 *)&UNK_110959928;
    puVar9 = &uStack_a18;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959928,puVar9,puVar8);
    puStack_a00 = &uStack_a18;
    func_0x00010007e5dc(&puStack_a00);
    lVar14 = 0;
    puVar13 = puVar8;
    do {
      if ((&cStack_9c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_9e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar10);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_9e1 < '\0') {
    __ZdlPv(auStack_9f8[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar4);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar13);
  _objc_retain(puVar9);
  _objc_retain(puVar1);
  func_0x00010c0b5ac0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  FUN_106a7f1bc(puVar1,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar5);
  puVar11 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar9);
  puVar12 = puVar11;
  func_0x00010c22b9e0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106a7d064; end: 106a7d293;  */

void FUN_106a7d064(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 *puStack_960;
  undefined8 auStack_958 [2];
  char cStack_941;
  undefined8 auStack_940 [2];
  char cStack_929;
  long lStack_928;
  undefined8 *puStack_920;
  undefined8 *puStack_918;
  undefined8 *puStack_910;
  undefined8 *puStack_908;
  undefined8 *puStack_900;
  undefined8 *puStack_8f8;
  undefined8 ***pppuStack_8f0;
  code *pcStack_8e8;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 *puStack_8c0;
  undefined8 auStack_8b8 [2];
  char cStack_8a1;
  undefined8 auStack_8a0 [2];
  char cStack_889;
  long lStack_888;
  undefined8 *puStack_880;
  undefined8 *puStack_878;
  undefined8 *puStack_870;
  long *plStack_868;
  undefined8 *puStack_860;
  undefined8 *puStack_858;
  undefined8 ***pppuStack_850;
  code *pcStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined1 *puStack_828;
  undefined8 auStack_820 [2];
  char cStack_809;
  long lStack_808;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  undefined8 *puStack_7f0;
  long *plStack_7e8;
  undefined8 *puStack_7e0;
  undefined8 *puStack_7d8;
  undefined8 ***pppuStack_7d0;
  code *pcStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined1 *puStack_7a8;
  undefined8 auStack_7a0 [2];
  char cStack_789;
  long lStack_788;
  undefined8 *puStack_780;
  undefined8 *puStack_778;
  undefined8 *puStack_770;
  long *plStack_768;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 ***pppuStack_750;
  code *pcStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined1 *puStack_728;
  undefined8 auStack_720 [2];
  char cStack_709;
  long lStack_708;
  undefined8 *puStack_700;
  undefined8 *puStack_6f8;
  undefined8 *puStack_6f0;
  undefined8 *puStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 auStack_698 [2];
  char cStack_681;
  undefined8 auStack_680 [2];
  char cStack_669;
  long lStack_668;
  undefined8 *puStack_660;
  undefined8 *puStack_658;
  undefined8 *puStack_650;
  undefined8 *puStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 ***pppuStack_630;
  code *pcStack_628;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 *puStack_600;
  undefined8 auStack_5f8 [2];
  char cStack_5e1;
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 *puStack_5b0;
  long *plStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 ***pppuStack_590;
  code *pcStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 *puStack_568;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 auStack_4d8 [2];
  char cStack_4c1;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 *puStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  puVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_110959478;
    unaff_x23 = &uStack_98;
    puVar7 = &uStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959478,puVar7,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar14 = 0;
    puVar4 = auStack_78;
    puVar5 = param_4;
    do {
      if ((&cStack_49)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_106a7d294;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar1;
  puVar9 = puVar7;
  puVar8 = puVar5;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar4;
  puStack_c8 = puVar2;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  puVar4 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar4 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar4);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar4 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_100,puVar4);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar10 = (undefined8 *)&UNK_1109594c8;
    unaff_x23 = &uStack_138;
    puVar9 = &uStack_138;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109594c8,puVar9,puVar5);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar14 = 0;
    puVar4 = auStack_118;
    puVar8 = puVar5;
    do {
      if ((&cStack_e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar7);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_148 = FUN_106a7d4c4;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar10;
  puVar3 = puVar9;
  puVar13 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar4;
  puStack_168 = puVar5;
  puStack_160 = puVar7;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar10);
  _objc_retain(puVar9);
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    puVar2 = (undefined8 *)&UNK_110959518;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar6[1];
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar1 = puVar10;
        _objc_retainAutorelease(puVar10);
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      unaff_x24 = auStack_1b8;
      func_0x00010002b838(auStack_1b8,puVar1);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar1 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_1a0,puVar1);
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
      puVar2 = (undefined8 *)&UNK_110959518;
      unaff_x23 = &uStack_1d8;
      puVar3 = &uStack_1d8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959518,puVar3,puVar8);
      puStack_1c0 = unaff_x23;
      func_0x00010007e5dc(&puStack_1c0);
      lVar14 = 0;
      puVar6 = auStack_1b8;
      puVar13 = puVar8;
      do {
        if ((&cStack_189)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  _objc_release(puVar9);
  puVar1 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar10);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106a7d714;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar4 = puVar3;
  puVar8 = puVar13;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar6;
  puStack_208 = puVar1;
  puStack_200 = puVar9;
  puStack_1f8 = puVar10;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if (puVar5 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar5[1];
    puVar7 = (undefined8 *)&UNK_110959568;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar5[1];
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar1 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      unaff_x24 = auStack_258;
      func_0x00010002b838(auStack_258,puVar1);
      _objc_retain(puVar3);
      if (puVar3 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar3);
        puVar1 = puVar3;
        func_0x00010bdc3520(puVar3);
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_240,puVar1);
      uStack_278 = 0;
      uStack_270 = 0;
      uStack_268 = 0;
      func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
      puVar7 = (undefined8 *)&UNK_110959568;
      unaff_x23 = &uStack_278;
      puVar4 = &uStack_278;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959568,puVar4,puVar13);
      puStack_260 = unaff_x23;
      func_0x00010007e5dc(&puStack_260);
      lVar14 = 0;
      puVar5 = auStack_258;
      puVar8 = puVar13;
      do {
        if ((&cStack_229)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  _objc_release(puVar3);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_288 = FUN_106a7d964;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar7;
  puVar9 = puVar4;
  puVar13 = puVar8;
  puStack_2c0 = unaff_x24;
  puStack_2b8 = unaff_x23;
  puStack_2b0 = puVar5;
  puStack_2a8 = puVar1;
  puStack_2a0 = puVar3;
  puStack_298 = puVar2;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(puVar7);
  _objc_retain(puVar4);
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    puVar10 = (undefined8 *)&UNK_1109595b8;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar6[1];
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x24 = auStack_2f8;
      func_0x00010002b838(auStack_2f8,puVar1);
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar1 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_2e0,puVar1);
      uStack_318 = 0;
      uStack_310 = 0;
      uStack_308 = 0;
      func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
      puVar10 = (undefined8 *)&UNK_1109595b8;
      unaff_x23 = &uStack_318;
      puVar9 = &uStack_318;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109595b8,puVar9,puVar8);
      puStack_300 = unaff_x23;
      func_0x00010007e5dc(&puStack_300);
      lVar14 = 0;
      puVar6 = auStack_2f8;
      puVar13 = puVar8;
      do {
        if ((&cStack_2c9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  _objc_release(puVar4);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(puVar4);
  _objc_release(puVar7);
  puVar3 = puVar1;
  __Unwind_Resume();
  pcStack_328 = FUN_106a7dbb4;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar10;
  puVar2 = puVar9;
  puVar8 = puVar13;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar6;
  puStack_348 = puVar1;
  puStack_340 = puVar4;
  puStack_338 = puVar7;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(puVar10);
  _objc_retain(puVar9);
  puVar1 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    unaff_x24 = auStack_398;
    func_0x00010002b838(auStack_398,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_380,puVar1);
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    func_0x00010007e1e8(&uStack_3b8,auStack_398,&lStack_368,2);
    puVar5 = (undefined8 *)&UNK_110959608;
    unaff_x23 = &uStack_3b8;
    puVar2 = &uStack_3b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959608,puVar2,puVar13);
    puStack_3a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_3a0);
    lVar14 = 0;
    puVar1 = auStack_398;
    puVar8 = puVar13;
    do {
      if ((&cStack_369)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar9);
  puVar7 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar10);
  puVar6 = puVar7;
  __Unwind_Resume();
  pcStack_3c8 = FUN_106a7dde4;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puVar3 = puVar2;
  puVar13 = puVar8;
  puStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  puStack_3f0 = puVar1;
  puStack_3e8 = puVar7;
  puStack_3e0 = puVar9;
  puStack_3d8 = puVar10;
  pppuStack_3d0 = &pppuStack_330;
  _objc_retain(puVar5);
  _objc_retain(puVar2);
  puVar1 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_438;
    func_0x00010002b838(auStack_438,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar1 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_420,puVar1);
    uStack_458 = 0;
    uStack_450 = 0;
    uStack_448 = 0;
    func_0x00010007e1e8(&uStack_458,auStack_438,&lStack_408,2);
    puVar4 = (undefined8 *)&UNK_110959658;
    unaff_x23 = &uStack_458;
    puVar3 = &uStack_458;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959658,puVar3,puVar8);
    puStack_440 = unaff_x23;
    func_0x00010007e5dc(&puStack_440);
    lVar14 = 0;
    puVar1 = auStack_438;
    puVar13 = puVar8;
    do {
      if ((&cStack_409)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar2);
  puVar7 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_421 < '\0') {
    __ZdlPv(auStack_438[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar5);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_468 = FUN_106a7e014;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar4;
  puVar9 = puVar3;
  puVar6 = puVar13;
  puStack_4a0 = unaff_x24;
  puStack_498 = unaff_x23;
  puStack_490 = puVar1;
  puStack_488 = puVar7;
  puStack_480 = puVar2;
  puStack_478 = puVar5;
  pppuStack_470 = &pppuStack_3d0;
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  puVar1 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar8[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_4d8;
    func_0x00010002b838(auStack_4d8,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_4c0,puVar1);
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    uStack_4e8 = 0;
    func_0x00010007e1e8(&uStack_4f8,auStack_4d8,&lStack_4a8,2);
    puVar10 = (undefined8 *)&UNK_1109596a8;
    unaff_x23 = &uStack_4f8;
    puVar9 = &uStack_4f8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109596a8,puVar9,puVar13);
    puStack_4e0 = unaff_x23;
    func_0x00010007e5dc(&puStack_4e0);
    lVar14 = 0;
    puVar1 = auStack_4d8;
    puVar6 = puVar13;
    do {
      if ((&cStack_4a9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4c0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar7 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_4c1 < '\0') {
    __ZdlPv(auStack_4d8[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar2 = puVar7;
  __Unwind_Resume();
  puVar13 = &uStack_580;
  pcStack_508 = FUN_106a7e244;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar10;
  puVar8 = puVar9;
  puStack_540 = unaff_x24;
  puStack_538 = unaff_x23;
  puStack_530 = puVar1;
  puStack_528 = puVar7;
  puStack_520 = puVar3;
  puStack_518 = puVar4;
  pppuStack_510 = &pppuStack_470;
  _objc_retain(puVar10);
  plVar15 = (long *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar2[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    unaff_x23 = auStack_560;
    func_0x00010002b838(auStack_560,puVar1);
    uStack_580 = 0;
    uStack_578 = 0;
    uStack_570 = 0;
    func_0x00010007e1e8(&uStack_580,auStack_560,&lStack_548,1);
    puVar5 = (undefined8 *)&UNK_1109596f8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109596f8,&uStack_580,puVar9);
    puStack_568 = (undefined1 *)&uStack_580;
    func_0x00010007e5dc(&puStack_568);
    puVar8 = puVar13;
    puVar6 = puVar9;
    puVar1 = &uStack_580;
    if (cStack_549 < '\0') {
      __ZdlPv(auStack_560[0]);
      puVar8 = puVar13;
      puVar6 = puVar9;
      puVar1 = &uStack_580;
    }
  }
  puVar7 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(puVar10);
  puVar9 = puVar7;
  __Unwind_Resume();
  pcStack_588 = FUN_106a7e3b8;
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puVar2 = puVar8;
  puVar3 = puVar6;
  puStack_5c0 = unaff_x24;
  puStack_5b8 = unaff_x23;
  puStack_5b0 = puVar1;
  plStack_5a8 = plVar15;
  puStack_5a0 = puVar7;
  puStack_598 = puVar10;
  pppuStack_590 = &pppuStack_510;
  _objc_retain(puVar5);
  _objc_retain(puVar8);
  puVar1 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar9[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_5f8;
    func_0x00010002b838(auStack_5f8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_5e0,puVar1);
    uStack_618 = 0;
    uStack_610 = 0;
    uStack_608 = 0;
    func_0x00010007e1e8(&uStack_618,auStack_5f8,&lStack_5c8,2);
    puVar4 = (undefined8 *)&UNK_110959748;
    unaff_x23 = &uStack_618;
    puVar2 = &uStack_618;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959748,puVar2,puVar6);
    puStack_600 = unaff_x23;
    func_0x00010007e5dc(&puStack_600);
    lVar14 = 0;
    puVar1 = auStack_5f8;
    puVar3 = puVar6;
    do {
      if ((&cStack_5c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar8);
  puVar7 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_5e1 < '\0') {
    __ZdlPv(auStack_5f8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar5);
  puVar6 = puVar7;
  __Unwind_Resume();
  pcStack_628 = FUN_106a7e5e8;
  lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar4;
  puVar9 = puVar2;
  puVar13 = puVar3;
  puStack_660 = unaff_x24;
  puStack_658 = unaff_x23;
  puStack_650 = puVar1;
  puStack_648 = puVar7;
  puStack_640 = puVar8;
  puStack_638 = puVar5;
  pppuStack_630 = &pppuStack_590;
  _objc_retain(puVar4);
  _objc_retain(puVar2);
  puVar1 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_698;
    func_0x00010002b838(auStack_698,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar1 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_680,puVar1);
    uStack_6b8 = 0;
    uStack_6b0 = 0;
    uStack_6a8 = 0;
    func_0x00010007e1e8(&uStack_6b8,auStack_698,&lStack_668,2);
    puVar10 = (undefined8 *)&UNK_110959798;
    unaff_x23 = &uStack_6b8;
    puVar9 = &uStack_6b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959798,puVar9,puVar3);
    puStack_6a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_6a0);
    lVar14 = 0;
    puVar1 = auStack_698;
    puVar13 = puVar3;
    do {
      if ((&cStack_669)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_680 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar2);
  puVar7 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_668) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_681 < '\0') {
    __ZdlPv(auStack_698[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar3 = puVar7;
  __Unwind_Resume();
  puVar6 = &uStack_740;
  pcStack_6c8 = FUN_106a7e818;
  lStack_708 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar10;
  puVar8 = puVar9;
  puStack_700 = unaff_x24;
  puStack_6f8 = unaff_x23;
  puStack_6f0 = puVar1;
  puStack_6e8 = puVar7;
  puStack_6e0 = puVar2;
  puStack_6d8 = puVar4;
  pppuStack_6d0 = &pppuStack_630;
  _objc_retain(puVar10);
  plVar15 = (long *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    unaff_x23 = auStack_720;
    func_0x00010002b838(auStack_720,puVar1);
    uStack_740 = 0;
    uStack_738 = 0;
    uStack_730 = 0;
    func_0x00010007e1e8(&uStack_740,auStack_720,&lStack_708,1);
    puVar5 = (undefined8 *)&UNK_1109597e8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109597e8,&uStack_740,puVar9);
    puStack_728 = (undefined1 *)&uStack_740;
    func_0x00010007e5dc(&puStack_728);
    puVar8 = puVar6;
    puVar13 = puVar9;
    puVar1 = &uStack_740;
    if (cStack_709 < '\0') {
      __ZdlPv(auStack_720[0]);
      puVar8 = puVar6;
      puVar13 = puVar9;
      puVar1 = &uStack_740;
    }
  }
  puVar7 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_708) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(puVar10);
  puVar2 = puVar7;
  __Unwind_Resume();
  puVar3 = &uStack_7c0;
  pcStack_748 = FUN_106a7e98c;
  lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puVar9 = puVar8;
  puStack_780 = unaff_x24;
  puStack_778 = unaff_x23;
  puStack_770 = puVar1;
  plStack_768 = plVar15;
  puStack_760 = puVar7;
  puStack_758 = puVar10;
  pppuStack_750 = &pppuStack_6d0;
  _objc_retain(puVar5);
  plVar15 = (long *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar2[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_7a0;
    func_0x00010002b838(auStack_7a0,puVar1);
    uStack_7c0 = 0;
    uStack_7b8 = 0;
    uStack_7b0 = 0;
    func_0x00010007e1e8(&uStack_7c0,auStack_7a0,&lStack_788,1);
    puVar4 = (undefined8 *)&UNK_110959838;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959838,&uStack_7c0,puVar8);
    puStack_7a8 = (undefined1 *)&uStack_7c0;
    func_0x00010007e5dc(&puStack_7a8);
    puVar9 = puVar3;
    puVar13 = puVar8;
    puVar1 = &uStack_7c0;
    if (cStack_789 < '\0') {
      __ZdlPv(auStack_7a0[0]);
      puVar9 = puVar3;
      puVar13 = puVar8;
      puVar1 = &uStack_7c0;
    }
  }
  puVar7 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_788) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar10 = puVar7;
  __Unwind_Resume();
  puVar8 = &uStack_840;
  pcStack_7c8 = FUN_106a7eb00;
  lStack_808 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  puVar3 = puVar9;
  puStack_800 = unaff_x24;
  puStack_7f8 = unaff_x23;
  puStack_7f0 = puVar1;
  plStack_7e8 = plVar15;
  puStack_7e0 = puVar7;
  puStack_7d8 = puVar5;
  pppuStack_7d0 = &pppuStack_750;
  _objc_retain(puVar4);
  plVar15 = (long *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar10[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_820;
    func_0x00010002b838(auStack_820,puVar1);
    uStack_840 = 0;
    uStack_838 = 0;
    uStack_830 = 0;
    func_0x00010007e1e8(&uStack_840,auStack_820,&lStack_808,1);
    puVar2 = (undefined8 *)&UNK_110959888;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959888,&uStack_840,puVar9);
    puStack_828 = (undefined1 *)&uStack_840;
    func_0x00010007e5dc(&puStack_828);
    puVar3 = puVar8;
    puVar13 = puVar9;
    puVar1 = &uStack_840;
    if (cStack_809 < '\0') {
      __ZdlPv(auStack_820[0]);
      puVar3 = puVar8;
      puVar13 = puVar9;
      puVar1 = &uStack_840;
    }
  }
  puVar7 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_808) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar9 = puVar7;
  __Unwind_Resume();
  pcStack_848 = FUN_106a7ec74;
  lStack_888 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar10 = puVar3;
  puVar8 = puVar13;
  puStack_880 = unaff_x24;
  puStack_878 = unaff_x23;
  puStack_870 = puVar1;
  plStack_868 = plVar15;
  puStack_860 = puVar7;
  puStack_858 = puVar4;
  pppuStack_850 = &pppuStack_7d0;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  puVar1 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar9[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_8b8;
    func_0x00010002b838(auStack_8b8,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_8a0,puVar1);
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    uStack_8c8 = 0;
    func_0x00010007e1e8(&uStack_8d8,auStack_8b8,&lStack_888,2);
    puVar5 = (undefined8 *)&UNK_1109598d8;
    unaff_x23 = &uStack_8d8;
    puVar10 = &uStack_8d8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109598d8,puVar10,puVar13);
    puStack_8c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_8c0);
    lVar14 = 0;
    puVar1 = auStack_8b8;
    puVar8 = puVar13;
    do {
      if ((&cStack_889)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_8a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_888) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_8a1 < '\0') {
    __ZdlPv(auStack_8b8[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar6 = puVar7;
  __Unwind_Resume();
  pcStack_8e8 = FUN_106a7eea4;
  lStack_928 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puVar9 = puVar10;
  puVar13 = puVar8;
  puStack_920 = unaff_x24;
  puStack_918 = unaff_x23;
  puStack_910 = puVar1;
  puStack_908 = puVar7;
  puStack_900 = puVar3;
  puStack_8f8 = puVar2;
  pppuStack_8f0 = &pppuStack_850;
  _objc_retain(puVar5);
  _objc_retain(puVar10);
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar6[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_958,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar1 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_940,puVar1);
    uStack_978 = 0;
    uStack_970 = 0;
    uStack_968 = 0;
    func_0x00010007e1e8(&uStack_978,auStack_958,&lStack_928,2);
    puVar4 = (undefined8 *)&UNK_110959928;
    puVar9 = &uStack_978;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959928,puVar9,puVar8);
    puStack_960 = &uStack_978;
    func_0x00010007e5dc(&puStack_960);
    lVar14 = 0;
    puVar13 = puVar8;
    do {
      if ((&cStack_929)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_940 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar10);
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_928) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_941 < '\0') {
    __ZdlPv(auStack_958[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar5);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar13);
  _objc_retain(puVar9);
  _objc_retain(puVar1);
  func_0x00010c0b5ac0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  FUN_106a7f1bc(puVar1,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  puVar11 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar9);
  puVar12 = puVar11;
  func_0x00010c22b9e0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106a7d294; end: 106a7d4c3;  */

void FUN_106a7d294(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 *puStack_8c0;
  undefined8 auStack_8b8 [2];
  char cStack_8a1;
  undefined8 auStack_8a0 [2];
  char cStack_889;
  long lStack_888;
  undefined8 *puStack_880;
  undefined8 *puStack_878;
  undefined8 *puStack_870;
  undefined8 *puStack_868;
  undefined8 *puStack_860;
  undefined8 *puStack_858;
  undefined8 ***pppuStack_850;
  code *pcStack_848;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 *puStack_820;
  undefined8 auStack_818 [2];
  char cStack_801;
  undefined8 auStack_800 [2];
  char cStack_7e9;
  long lStack_7e8;
  undefined8 *puStack_7e0;
  undefined8 *puStack_7d8;
  undefined8 *puStack_7d0;
  long *plStack_7c8;
  undefined8 *puStack_7c0;
  undefined8 *puStack_7b8;
  undefined8 ***pppuStack_7b0;
  code *pcStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined1 *puStack_788;
  undefined8 auStack_780 [2];
  char cStack_769;
  long lStack_768;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 *puStack_750;
  long *plStack_748;
  undefined8 *puStack_740;
  undefined8 *puStack_738;
  undefined8 ***pppuStack_730;
  code *pcStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined1 *puStack_708;
  undefined8 auStack_700 [2];
  char cStack_6e9;
  long lStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 *puStack_6d0;
  long *plStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 *puStack_6b8;
  undefined8 ***pppuStack_6b0;
  code *pcStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined1 *puStack_688;
  undefined8 auStack_680 [2];
  char cStack_669;
  long lStack_668;
  undefined8 *puStack_660;
  undefined8 *puStack_658;
  undefined8 *puStack_650;
  undefined8 *puStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 ***pppuStack_630;
  code *pcStack_628;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 *puStack_600;
  undefined8 auStack_5f8 [2];
  char cStack_5e1;
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 ***pppuStack_590;
  code *pcStack_588;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 *puStack_560;
  undefined8 auStack_558 [2];
  char cStack_541;
  undefined8 auStack_540 [2];
  char cStack_529;
  long lStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  long *plStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 *puStack_4c8;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 *puStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar8 = param_3;
  puVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_1109594c8;
    unaff_x23 = &uStack_98;
    puVar8 = &uStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109594c8,puVar8,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar14 = 0;
    puVar4 = auStack_78;
    puVar6 = param_4;
    do {
      if ((&cStack_49)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_106a7d4c4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar1;
  puVar9 = puVar8;
  puVar7 = puVar6;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar4;
  puStack_c8 = puVar2;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar8);
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    puVar12 = (undefined8 *)&UNK_110959518;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar3[1];
      _objc_retain(puVar1);
      if (puVar1 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar4 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      unaff_x24 = auStack_118;
      func_0x00010002b838(auStack_118,puVar4);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar4 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_100,puVar4);
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
      puVar12 = (undefined8 *)&UNK_110959518;
      unaff_x23 = &uStack_138;
      puVar9 = &uStack_138;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959518,puVar9,puVar6);
      puStack_120 = unaff_x23;
      func_0x00010007e5dc(&puStack_120);
      lVar14 = 0;
      puVar3 = auStack_118;
      puVar7 = puVar6;
      do {
        if ((&cStack_e9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  _objc_release(puVar8);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar1);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_148 = FUN_106a7d714;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar12;
  puVar2 = puVar9;
  puVar13 = puVar7;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar3;
  puStack_168 = puVar4;
  puStack_160 = puVar8;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar12);
  _objc_retain(puVar9);
  if (puVar5 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar5[1];
    puVar6 = (undefined8 *)&UNK_110959568;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar5[1];
      _objc_retain(puVar12);
      if (puVar12 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar1 = puVar12;
        _objc_retainAutorelease(puVar12);
        func_0x00010bdc3520();
      }
      _objc_release(puVar12);
      unaff_x24 = auStack_1b8;
      func_0x00010002b838(auStack_1b8,puVar1);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar1 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_1a0,puVar1);
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
      puVar6 = (undefined8 *)&UNK_110959568;
      unaff_x23 = &uStack_1d8;
      puVar2 = &uStack_1d8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959568,puVar2,puVar7);
      puStack_1c0 = unaff_x23;
      func_0x00010007e5dc(&puStack_1c0);
      lVar14 = 0;
      puVar5 = auStack_1b8;
      puVar13 = puVar7;
      do {
        if ((&cStack_189)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  _objc_release(puVar9);
  puVar1 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar12);
  puVar3 = puVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106a7d964;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar6;
  puVar4 = puVar2;
  puVar7 = puVar13;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar5;
  puStack_208 = puVar1;
  puStack_200 = puVar9;
  puStack_1f8 = puVar12;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar6);
  _objc_retain(puVar2);
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    puVar8 = (undefined8 *)&UNK_1109595b8;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar3[1];
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar1 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      unaff_x24 = auStack_258;
      func_0x00010002b838(auStack_258,puVar1);
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar2);
        puVar1 = puVar2;
        func_0x00010bdc3520(puVar2);
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_240,puVar1);
      uStack_278 = 0;
      uStack_270 = 0;
      uStack_268 = 0;
      func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
      puVar8 = (undefined8 *)&UNK_1109595b8;
      unaff_x23 = &uStack_278;
      puVar4 = &uStack_278;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109595b8,puVar4,puVar13);
      puStack_260 = unaff_x23;
      func_0x00010007e5dc(&puStack_260);
      lVar14 = 0;
      puVar3 = auStack_258;
      puVar7 = puVar13;
      do {
        if ((&cStack_229)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  _objc_release(puVar2);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar6);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_288 = FUN_106a7dbb4;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar8;
  puVar9 = puVar4;
  puVar13 = puVar7;
  puStack_2c0 = unaff_x24;
  puStack_2b8 = unaff_x23;
  puStack_2b0 = puVar3;
  puStack_2a8 = puVar1;
  puStack_2a0 = puVar2;
  puStack_298 = puVar6;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(puVar8);
  _objc_retain(puVar4);
  puVar1 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar5[1];
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x24 = auStack_2f8;
    func_0x00010002b838(auStack_2f8,puVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar1 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_2e0,puVar1);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
    puVar12 = (undefined8 *)&UNK_110959608;
    unaff_x23 = &uStack_318;
    puVar9 = &uStack_318;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959608,puVar9,puVar7);
    puStack_300 = unaff_x23;
    func_0x00010007e5dc(&puStack_300);
    lVar14 = 0;
    puVar1 = auStack_2f8;
    puVar13 = puVar7;
    do {
      if ((&cStack_2c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar4);
  puVar6 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(puVar4);
  _objc_release(puVar8);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_328 = FUN_106a7dde4;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar12;
  puVar3 = puVar9;
  puVar5 = puVar13;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar1;
  puStack_348 = puVar6;
  puStack_340 = puVar4;
  puStack_338 = puVar8;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(puVar12);
  _objc_retain(puVar9);
  puVar1 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar7[1];
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar12;
      _objc_retainAutorelease(puVar12);
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    unaff_x24 = auStack_398;
    func_0x00010002b838(auStack_398,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_380,puVar1);
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    func_0x00010007e1e8(&uStack_3b8,auStack_398,&lStack_368,2);
    puVar2 = (undefined8 *)&UNK_110959658;
    unaff_x23 = &uStack_3b8;
    puVar3 = &uStack_3b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959658,puVar3,puVar13);
    puStack_3a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_3a0);
    lVar14 = 0;
    puVar1 = auStack_398;
    puVar5 = puVar13;
    do {
      if ((&cStack_369)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar9);
  puVar8 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar12);
  puVar7 = puVar8;
  __Unwind_Resume();
  pcStack_3c8 = FUN_106a7e014;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar6 = puVar3;
  puVar13 = puVar5;
  puStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  puStack_3f0 = puVar1;
  puStack_3e8 = puVar8;
  puStack_3e0 = puVar9;
  puStack_3d8 = puVar12;
  pppuStack_3d0 = &pppuStack_330;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  puVar1 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar7[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_438;
    func_0x00010002b838(auStack_438,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_420,puVar1);
    uStack_458 = 0;
    uStack_450 = 0;
    uStack_448 = 0;
    func_0x00010007e1e8(&uStack_458,auStack_438,&lStack_408,2);
    puVar4 = (undefined8 *)&UNK_1109596a8;
    unaff_x23 = &uStack_458;
    puVar6 = &uStack_458;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109596a8,puVar6,puVar5);
    puStack_440 = unaff_x23;
    func_0x00010007e5dc(&puStack_440);
    lVar14 = 0;
    puVar1 = auStack_438;
    puVar13 = puVar5;
    do {
      if ((&cStack_409)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar8 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_421 < '\0') {
    __ZdlPv(auStack_438[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar9 = puVar8;
  __Unwind_Resume();
  puVar5 = &uStack_4e0;
  pcStack_468 = FUN_106a7e244;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar4;
  puVar7 = puVar6;
  puStack_4a0 = unaff_x24;
  puStack_498 = unaff_x23;
  puStack_490 = puVar1;
  puStack_488 = puVar8;
  puStack_480 = puVar3;
  puStack_478 = puVar2;
  pppuStack_470 = &pppuStack_3d0;
  _objc_retain(puVar4);
  plVar15 = (long *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar9[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_4c0;
    func_0x00010002b838(auStack_4c0,puVar1);
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    func_0x00010007e1e8(&uStack_4e0,auStack_4c0,&lStack_4a8,1);
    puVar12 = (undefined8 *)&UNK_1109596f8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109596f8,&uStack_4e0,puVar6);
    puStack_4c8 = (undefined1 *)&uStack_4e0;
    func_0x00010007e5dc(&puStack_4c8);
    puVar7 = puVar5;
    puVar13 = puVar6;
    puVar1 = &uStack_4e0;
    if (cStack_4a9 < '\0') {
      __ZdlPv(auStack_4c0[0]);
      puVar7 = puVar5;
      puVar13 = puVar6;
      puVar1 = &uStack_4e0;
    }
  }
  puVar8 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar9 = puVar8;
  __Unwind_Resume();
  pcStack_4e8 = FUN_106a7e3b8;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar12;
  puVar2 = puVar7;
  puVar3 = puVar13;
  puStack_520 = unaff_x24;
  puStack_518 = unaff_x23;
  puStack_510 = puVar1;
  plStack_508 = plVar15;
  puStack_500 = puVar8;
  puStack_4f8 = puVar4;
  pppuStack_4f0 = &pppuStack_470;
  _objc_retain(puVar12);
  _objc_retain(puVar7);
  puVar1 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar9[1];
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar12;
      _objc_retainAutorelease(puVar12);
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    unaff_x24 = auStack_558;
    func_0x00010002b838(auStack_558,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar1 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_540,puVar1);
    uStack_578 = 0;
    uStack_570 = 0;
    uStack_568 = 0;
    func_0x00010007e1e8(&uStack_578,auStack_558,&lStack_528,2);
    puVar6 = (undefined8 *)&UNK_110959748;
    unaff_x23 = &uStack_578;
    puVar2 = &uStack_578;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959748,puVar2,puVar13);
    puStack_560 = unaff_x23;
    func_0x00010007e5dc(&puStack_560);
    lVar14 = 0;
    puVar1 = auStack_558;
    puVar3 = puVar13;
    do {
      if ((&cStack_529)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_540 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar7);
  puVar8 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_541 < '\0') {
    __ZdlPv(auStack_558[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar12);
  puVar5 = puVar8;
  __Unwind_Resume();
  pcStack_588 = FUN_106a7e5e8;
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puVar9 = puVar2;
  puVar13 = puVar3;
  puStack_5c0 = unaff_x24;
  puStack_5b8 = unaff_x23;
  puStack_5b0 = puVar1;
  puStack_5a8 = puVar8;
  puStack_5a0 = puVar7;
  puStack_598 = puVar12;
  pppuStack_590 = &pppuStack_4f0;
  _objc_retain(puVar6);
  _objc_retain(puVar2);
  puVar1 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar5[1];
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_5f8;
    func_0x00010002b838(auStack_5f8,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar1 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_5e0,puVar1);
    uStack_618 = 0;
    uStack_610 = 0;
    uStack_608 = 0;
    func_0x00010007e1e8(&uStack_618,auStack_5f8,&lStack_5c8,2);
    puVar4 = (undefined8 *)&UNK_110959798;
    unaff_x23 = &uStack_618;
    puVar9 = &uStack_618;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959798,puVar9,puVar3);
    puStack_600 = unaff_x23;
    func_0x00010007e5dc(&puStack_600);
    lVar14 = 0;
    puVar1 = auStack_5f8;
    puVar13 = puVar3;
    do {
      if ((&cStack_5c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar2);
  puVar8 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_5e1 < '\0') {
    __ZdlPv(auStack_5f8[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar6);
  puVar3 = puVar8;
  __Unwind_Resume();
  puVar5 = &uStack_6a0;
  pcStack_628 = FUN_106a7e818;
  lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar4;
  puVar7 = puVar9;
  puStack_660 = unaff_x24;
  puStack_658 = unaff_x23;
  puStack_650 = puVar1;
  puStack_648 = puVar8;
  puStack_640 = puVar2;
  puStack_638 = puVar6;
  pppuStack_630 = &pppuStack_590;
  _objc_retain(puVar4);
  plVar15 = (long *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar3[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_680;
    func_0x00010002b838(auStack_680,puVar1);
    uStack_6a0 = 0;
    uStack_698 = 0;
    uStack_690 = 0;
    func_0x00010007e1e8(&uStack_6a0,auStack_680,&lStack_668,1);
    puVar12 = (undefined8 *)&UNK_1109597e8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109597e8,&uStack_6a0,puVar9);
    puStack_688 = (undefined1 *)&uStack_6a0;
    func_0x00010007e5dc(&puStack_688);
    puVar7 = puVar5;
    puVar13 = puVar9;
    puVar1 = &uStack_6a0;
    if (cStack_669 < '\0') {
      __ZdlPv(auStack_680[0]);
      puVar7 = puVar5;
      puVar13 = puVar9;
      puVar1 = &uStack_6a0;
    }
  }
  puVar8 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_668) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar2 = puVar8;
  __Unwind_Resume();
  puVar3 = &uStack_720;
  pcStack_6a8 = FUN_106a7e98c;
  lStack_6e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar12;
  puVar9 = puVar7;
  puStack_6e0 = unaff_x24;
  puStack_6d8 = unaff_x23;
  puStack_6d0 = puVar1;
  plStack_6c8 = plVar15;
  puStack_6c0 = puVar8;
  puStack_6b8 = puVar4;
  pppuStack_6b0 = &pppuStack_630;
  _objc_retain(puVar12);
  plVar15 = (long *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar2[1];
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar12;
      _objc_retainAutorelease(puVar12);
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    unaff_x23 = auStack_700;
    func_0x00010002b838(auStack_700,puVar1);
    uStack_720 = 0;
    uStack_718 = 0;
    uStack_710 = 0;
    func_0x00010007e1e8(&uStack_720,auStack_700,&lStack_6e8,1);
    puVar6 = (undefined8 *)&UNK_110959838;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959838,&uStack_720,puVar7);
    puStack_708 = (undefined1 *)&uStack_720;
    func_0x00010007e5dc(&puStack_708);
    puVar9 = puVar3;
    puVar13 = puVar7;
    puVar1 = &uStack_720;
    if (cStack_6e9 < '\0') {
      __ZdlPv(auStack_700[0]);
      puVar9 = puVar3;
      puVar13 = puVar7;
      puVar1 = &uStack_720;
    }
  }
  puVar8 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  _objc_release(puVar12);
  puVar2 = puVar8;
  __Unwind_Resume();
  puVar7 = &uStack_7a0;
  pcStack_728 = FUN_106a7eb00;
  lStack_768 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puVar3 = puVar9;
  puStack_760 = unaff_x24;
  puStack_758 = unaff_x23;
  puStack_750 = puVar1;
  plStack_748 = plVar15;
  puStack_740 = puVar8;
  puStack_738 = puVar12;
  pppuStack_730 = &pppuStack_6b0;
  _objc_retain(puVar6);
  plVar15 = (long *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar2[1];
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_780;
    func_0x00010002b838(auStack_780,puVar1);
    uStack_7a0 = 0;
    uStack_798 = 0;
    uStack_790 = 0;
    func_0x00010007e1e8(&uStack_7a0,auStack_780,&lStack_768,1);
    puVar4 = (undefined8 *)&UNK_110959888;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959888,&uStack_7a0,puVar9);
    puStack_788 = (undefined1 *)&uStack_7a0;
    func_0x00010007e5dc(&puStack_788);
    puVar3 = puVar7;
    puVar13 = puVar9;
    puVar1 = &uStack_7a0;
    if (cStack_769 < '\0') {
      __ZdlPv(auStack_780[0]);
      puVar3 = puVar7;
      puVar13 = puVar9;
      puVar1 = &uStack_7a0;
    }
  }
  puVar8 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_768) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar9 = puVar8;
  __Unwind_Resume();
  pcStack_7a8 = FUN_106a7ec74;
  lStack_7e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  puVar12 = puVar3;
  puVar7 = puVar13;
  puStack_7e0 = unaff_x24;
  puStack_7d8 = unaff_x23;
  puStack_7d0 = puVar1;
  plStack_7c8 = plVar15;
  puStack_7c0 = puVar8;
  puStack_7b8 = puVar6;
  pppuStack_7b0 = &pppuStack_730;
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  puVar1 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar9[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_818;
    func_0x00010002b838(auStack_818,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_800,puVar1);
    uStack_838 = 0;
    uStack_830 = 0;
    uStack_828 = 0;
    func_0x00010007e1e8(&uStack_838,auStack_818,&lStack_7e8,2);
    puVar2 = (undefined8 *)&UNK_1109598d8;
    unaff_x23 = &uStack_838;
    puVar12 = &uStack_838;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109598d8,puVar12,puVar13);
    puStack_820 = unaff_x23;
    func_0x00010007e5dc(&puStack_820);
    lVar14 = 0;
    puVar1 = auStack_818;
    puVar7 = puVar13;
    do {
      if ((&cStack_7e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_800 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar8 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_801 < '\0') {
    __ZdlPv(auStack_818[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar5 = puVar8;
  __Unwind_Resume();
  pcStack_848 = FUN_106a7eea4;
  lStack_888 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar9 = puVar12;
  puVar13 = puVar7;
  puStack_880 = unaff_x24;
  puStack_878 = unaff_x23;
  puStack_870 = puVar1;
  puStack_868 = puVar8;
  puStack_860 = puVar3;
  puStack_858 = puVar4;
  pppuStack_850 = &pppuStack_7b0;
  _objc_retain(puVar2);
  _objc_retain(puVar12);
  if (puVar5 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar5[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_8b8,puVar1);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar1 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_8a0,puVar1);
    uStack_8d8 = 0;
    uStack_8d0 = 0;
    uStack_8c8 = 0;
    func_0x00010007e1e8(&uStack_8d8,auStack_8b8,&lStack_888,2);
    puVar6 = (undefined8 *)&UNK_110959928;
    puVar9 = &uStack_8d8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110959928,puVar9,puVar7);
    puStack_8c0 = &uStack_8d8;
    func_0x00010007e5dc(&puStack_8c0);
    lVar14 = 0;
    puVar13 = puVar7;
    do {
      if ((&cStack_889)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_8a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar12);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_888) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  if (cStack_8a1 < '\0') {
    __ZdlPv(auStack_8b8[0]);
  }
  _objc_release(puVar12);
  _objc_release(puVar2);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar13);
  _objc_retain(puVar9);
  _objc_retain(puVar1);
  func_0x00010c0b5ac0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  FUN_106a7f1bc(puVar1,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar6);
  puVar10 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar9);
  puVar11 = puVar10;
  func_0x00010c22b9e0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106a7d4c4; end: 106a7d713;  */

void FUN_106a7d4c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 *puStack_820;
  undefined8 auStack_818 [2];
  char cStack_801;
  undefined8 auStack_800 [2];
  char cStack_7e9;
  long lStack_7e8;
  undefined8 *puStack_7e0;
  undefined8 *puStack_7d8;
  undefined8 *puStack_7d0;
  undefined8 *puStack_7c8;
  undefined8 *puStack_7c0;
  undefined8 *puStack_7b8;
  undefined8 ***pppuStack_7b0;
  code *pcStack_7a8;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 *puStack_780;
  undefined8 auStack_778 [2];
  char cStack_761;
  undefined8 auStack_760 [2];
  char cStack_749;
  long lStack_748;
  undefined8 *puStack_740;
  undefined8 *puStack_738;
  undefined8 *puStack_730;
  long *plStack_728;
  undefined8 *puStack_720;
  undefined8 *puStack_718;
  undefined8 ***pppuStack_710;
  code *pcStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined1 *puStack_6e8;
  undefined8 auStack_6e0 [2];
  char cStack_6c9;
  long lStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 *puStack_6b8;
  undefined8 *puStack_6b0;
  long *plStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 ***pppuStack_690;
  code *pcStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined1 *puStack_668;
  undefined8 auStack_660 [2];
  char cStack_649;
  long lStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  long *plStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 ***pppuStack_610;
  code *pcStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 *puStack_5e8;
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 ***pppuStack_590;
  code *pcStack_588;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 *puStack_560;
  undefined8 auStack_558 [2];
  char cStack_541;
  undefined8 auStack_540 [2];
  char cStack_529;
  long lStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 auStack_4b8 [2];
  char cStack_4a1;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  long *plStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar9 = param_3;
  puVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != (undefined8 *)0x0) {
    plVar1 = (long *)param_1[1];
    puVar2 = (undefined8 *)&UNK_110959518;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)param_1[1];
      _objc_retain(param_2);
      if (param_2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x24 = auStack_78;
      func_0x00010002b838(auStack_78,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar2);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      puVar2 = (undefined8 *)&UNK_110959518;
      unaff_x23 = &uStack_98;
      puVar9 = &uStack_98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959518,puVar9,param_4);
      puStack_80 = unaff_x23;
      func_0x00010007e5dc(&puStack_80);
      lVar15 = 0;
      param_1 = auStack_78;
      puVar5 = param_4;
      do {
        if ((&cStack_49)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106a7d714;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar11 = puVar9;
  puVar10 = puVar5;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_1;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar9);
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar4[1];
    puVar7 = (undefined8 *)&UNK_110959568;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)puVar4[1];
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      unaff_x24 = auStack_118;
      func_0x00010002b838(auStack_118,puVar3);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar3 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_100,puVar3);
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
      puVar7 = (undefined8 *)&UNK_110959568;
      unaff_x23 = &uStack_138;
      puVar11 = &uStack_138;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959568,puVar11,puVar5);
      puStack_120 = unaff_x23;
      func_0x00010007e5dc(&puStack_120);
      lVar15 = 0;
      puVar4 = auStack_118;
      puVar10 = puVar5;
      do {
        if ((&cStack_e9)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
  }
  _objc_release(puVar9);
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar2);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_148 = FUN_106a7d964;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar7;
  puVar8 = puVar11;
  puVar14 = puVar10;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar4;
  puStack_168 = puVar5;
  puStack_160 = puVar9;
  puStack_158 = puVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar11);
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar6[1];
    puVar3 = (undefined8 *)&UNK_1109595b8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)puVar6[1];
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar2 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x24 = auStack_1b8;
      func_0x00010002b838(auStack_1b8,puVar2);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar2 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_1a0,puVar2);
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
      puVar3 = (undefined8 *)&UNK_1109595b8;
      unaff_x23 = &uStack_1d8;
      puVar8 = &uStack_1d8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109595b8,puVar8,puVar10);
      puStack_1c0 = unaff_x23;
      func_0x00010007e5dc(&puStack_1c0);
      lVar15 = 0;
      puVar6 = auStack_1b8;
      puVar14 = puVar10;
      do {
        if ((&cStack_189)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
  }
  _objc_release(puVar11);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar11);
  _objc_release(puVar7);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106a7dbb4;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  puVar5 = puVar8;
  puVar10 = puVar14;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar6;
  puStack_208 = puVar2;
  puStack_200 = puVar11;
  puStack_1f8 = puVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar3);
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar4[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_240,puVar2);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar9 = (undefined8 *)&UNK_110959608;
    unaff_x23 = &uStack_278;
    puVar5 = &uStack_278;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959608,puVar5,puVar14);
    puStack_260 = unaff_x23;
    func_0x00010007e5dc(&puStack_260);
    lVar15 = 0;
    puVar2 = auStack_258;
    puVar10 = puVar14;
    do {
      if ((&cStack_229)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar8);
  puVar7 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar3);
  puVar6 = puVar7;
  __Unwind_Resume();
  pcStack_288 = FUN_106a7dde4;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar9;
  puVar4 = puVar5;
  puVar14 = puVar10;
  puStack_2c0 = unaff_x24;
  puStack_2b8 = unaff_x23;
  puStack_2b0 = puVar2;
  puStack_2a8 = puVar7;
  puStack_2a0 = puVar8;
  puStack_298 = puVar3;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(puVar9);
  _objc_retain(puVar5);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar6[1];
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    unaff_x24 = auStack_2f8;
    func_0x00010002b838(auStack_2f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar2 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_2e0,puVar2);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
    puVar11 = (undefined8 *)&UNK_110959658;
    unaff_x23 = &uStack_318;
    puVar4 = &uStack_318;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959658,puVar4,puVar10);
    puStack_300 = unaff_x23;
    func_0x00010007e5dc(&puStack_300);
    lVar15 = 0;
    puVar2 = auStack_2f8;
    puVar14 = puVar10;
    do {
      if ((&cStack_2c9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar5);
  puVar3 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar9);
  puVar8 = puVar3;
  __Unwind_Resume();
  pcStack_328 = FUN_106a7e014;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar11;
  puVar10 = puVar4;
  puVar6 = puVar14;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar2;
  puStack_348 = puVar3;
  puStack_340 = puVar5;
  puStack_338 = puVar9;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(puVar11);
  _objc_retain(puVar4);
  puVar2 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar8[1];
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar11;
      _objc_retainAutorelease(puVar11);
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    unaff_x24 = auStack_398;
    func_0x00010002b838(auStack_398,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_380,puVar2);
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    func_0x00010007e1e8(&uStack_3b8,auStack_398,&lStack_368,2);
    puVar7 = (undefined8 *)&UNK_1109596a8;
    unaff_x23 = &uStack_3b8;
    puVar10 = &uStack_3b8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109596a8,puVar10,puVar14);
    puStack_3a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_3a0);
    lVar15 = 0;
    puVar2 = auStack_398;
    puVar6 = puVar14;
    do {
      if ((&cStack_369)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar4);
  puVar9 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(puVar4);
  _objc_release(puVar11);
  puVar3 = puVar9;
  __Unwind_Resume();
  puVar14 = &uStack_440;
  pcStack_3c8 = FUN_106a7e244;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar7;
  puVar8 = puVar10;
  puStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  puStack_3f0 = puVar2;
  puStack_3e8 = puVar9;
  puStack_3e0 = puVar4;
  puStack_3d8 = puVar11;
  pppuStack_3d0 = &pppuStack_330;
  _objc_retain(puVar7);
  plVar1 = (long *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar3[1];
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_420;
    func_0x00010002b838(auStack_420,puVar2);
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x00010007e1e8(&uStack_440,auStack_420,&lStack_408,1);
    puVar5 = (undefined8 *)&UNK_1109596f8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109596f8,&uStack_440,puVar10);
    puStack_428 = (undefined1 *)&uStack_440;
    func_0x00010007e5dc(&puStack_428);
    puVar8 = puVar14;
    puVar6 = puVar10;
    puVar2 = &uStack_440;
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
      puVar8 = puVar14;
      puVar6 = puVar10;
      puVar2 = &uStack_440;
    }
  }
  puVar9 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar4 = puVar9;
  __Unwind_Resume();
  pcStack_448 = FUN_106a7e3b8;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar5;
  puVar11 = puVar8;
  puVar10 = puVar6;
  puStack_480 = unaff_x24;
  puStack_478 = unaff_x23;
  puStack_470 = puVar2;
  plStack_468 = plVar1;
  puStack_460 = puVar9;
  puStack_458 = puVar7;
  pppuStack_450 = &pppuStack_3d0;
  _objc_retain(puVar5);
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar4[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_4b8;
    func_0x00010002b838(auStack_4b8,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_4a0,puVar2);
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    func_0x00010007e1e8(&uStack_4d8,auStack_4b8,&lStack_488,2);
    puVar3 = (undefined8 *)&UNK_110959748;
    unaff_x23 = &uStack_4d8;
    puVar11 = &uStack_4d8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959748,puVar11,puVar6);
    puStack_4c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_4c0);
    lVar15 = 0;
    puVar2 = auStack_4b8;
    puVar10 = puVar6;
    do {
      if ((&cStack_489)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4a0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar8);
  puVar9 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_4a1 < '\0') {
    __ZdlPv(auStack_4b8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar5);
  puVar6 = puVar9;
  __Unwind_Resume();
  pcStack_4e8 = FUN_106a7e5e8;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar4 = puVar11;
  puVar14 = puVar10;
  puStack_520 = unaff_x24;
  puStack_518 = unaff_x23;
  puStack_510 = puVar2;
  puStack_508 = puVar9;
  puStack_500 = puVar8;
  puStack_4f8 = puVar5;
  pppuStack_4f0 = &pppuStack_450;
  _objc_retain(puVar3);
  _objc_retain(puVar11);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar6[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_558;
    func_0x00010002b838(auStack_558,puVar2);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar2 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_540,puVar2);
    uStack_578 = 0;
    uStack_570 = 0;
    uStack_568 = 0;
    func_0x00010007e1e8(&uStack_578,auStack_558,&lStack_528,2);
    puVar7 = (undefined8 *)&UNK_110959798;
    unaff_x23 = &uStack_578;
    puVar4 = &uStack_578;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959798,puVar4,puVar10);
    puStack_560 = unaff_x23;
    func_0x00010007e5dc(&puStack_560);
    lVar15 = 0;
    puVar2 = auStack_558;
    puVar14 = puVar10;
    do {
      if ((&cStack_529)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_540 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar11);
  puVar9 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_541 < '\0') {
    __ZdlPv(auStack_558[0]);
  }
  _objc_release(puVar11);
  _objc_release(puVar3);
  puVar10 = puVar9;
  __Unwind_Resume();
  puVar6 = &uStack_600;
  pcStack_588 = FUN_106a7e818;
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar7;
  puVar8 = puVar4;
  puStack_5c0 = unaff_x24;
  puStack_5b8 = unaff_x23;
  puStack_5b0 = puVar2;
  puStack_5a8 = puVar9;
  puStack_5a0 = puVar11;
  puStack_598 = puVar3;
  pppuStack_590 = &pppuStack_4f0;
  _objc_retain(puVar7);
  plVar1 = (long *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar10[1];
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_5e0;
    func_0x00010002b838(auStack_5e0,puVar2);
    uStack_600 = 0;
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    func_0x00010007e1e8(&uStack_600,auStack_5e0,&lStack_5c8,1);
    puVar5 = (undefined8 *)&UNK_1109597e8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109597e8,&uStack_600,puVar4);
    puStack_5e8 = (undefined1 *)&uStack_600;
    func_0x00010007e5dc(&puStack_5e8);
    puVar8 = puVar6;
    puVar14 = puVar4;
    puVar2 = &uStack_600;
    if (cStack_5c9 < '\0') {
      __ZdlPv(auStack_5e0[0]);
      puVar8 = puVar6;
      puVar14 = puVar4;
      puVar2 = &uStack_600;
    }
  }
  puVar9 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar11 = puVar9;
  __Unwind_Resume();
  puVar10 = &uStack_680;
  pcStack_608 = FUN_106a7e98c;
  lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar5;
  puVar4 = puVar8;
  puStack_640 = unaff_x24;
  puStack_638 = unaff_x23;
  puStack_630 = puVar2;
  plStack_628 = plVar1;
  puStack_620 = puVar9;
  puStack_618 = puVar7;
  pppuStack_610 = &pppuStack_590;
  _objc_retain(puVar5);
  plVar1 = (long *)0x0;
  if (puVar11 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar11[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_660;
    func_0x00010002b838(auStack_660,puVar2);
    uStack_680 = 0;
    uStack_678 = 0;
    uStack_670 = 0;
    func_0x00010007e1e8(&uStack_680,auStack_660,&lStack_648,1);
    puVar3 = (undefined8 *)&UNK_110959838;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959838,&uStack_680,puVar8);
    puStack_668 = (undefined1 *)&uStack_680;
    func_0x00010007e5dc(&puStack_668);
    puVar4 = puVar10;
    puVar14 = puVar8;
    puVar2 = &uStack_680;
    if (cStack_649 < '\0') {
      __ZdlPv(auStack_660[0]);
      puVar4 = puVar10;
      puVar14 = puVar8;
      puVar2 = &uStack_680;
    }
  }
  puVar9 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_648) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar11 = puVar9;
  __Unwind_Resume();
  puVar8 = &uStack_700;
  pcStack_688 = FUN_106a7eb00;
  lStack_6c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar10 = puVar4;
  puStack_6c0 = unaff_x24;
  puStack_6b8 = unaff_x23;
  puStack_6b0 = puVar2;
  plStack_6a8 = plVar1;
  puStack_6a0 = puVar9;
  puStack_698 = puVar5;
  pppuStack_690 = &pppuStack_610;
  _objc_retain(puVar3);
  plVar1 = (long *)0x0;
  if (puVar11 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar11[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_6e0;
    func_0x00010002b838(auStack_6e0,puVar2);
    uStack_700 = 0;
    uStack_6f8 = 0;
    uStack_6f0 = 0;
    func_0x00010007e1e8(&uStack_700,auStack_6e0,&lStack_6c8,1);
    puVar7 = (undefined8 *)&UNK_110959888;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959888,&uStack_700,puVar4);
    puStack_6e8 = (undefined1 *)&uStack_700;
    func_0x00010007e5dc(&puStack_6e8);
    puVar10 = puVar8;
    puVar14 = puVar4;
    puVar2 = &uStack_700;
    if (cStack_6c9 < '\0') {
      __ZdlPv(auStack_6e0[0]);
      puVar10 = puVar8;
      puVar14 = puVar4;
      puVar2 = &uStack_700;
    }
  }
  puVar9 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar4 = puVar9;
  __Unwind_Resume();
  pcStack_708 = FUN_106a7ec74;
  lStack_748 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar7;
  puVar11 = puVar10;
  puVar8 = puVar14;
  puStack_740 = unaff_x24;
  puStack_738 = unaff_x23;
  puStack_730 = puVar2;
  plStack_728 = plVar1;
  puStack_720 = puVar9;
  puStack_718 = puVar3;
  pppuStack_710 = &pppuStack_690;
  _objc_retain(puVar7);
  _objc_retain(puVar10);
  puVar2 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar4[1];
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_778;
    func_0x00010002b838(auStack_778,puVar2);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar2 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_760,puVar2);
    uStack_798 = 0;
    uStack_790 = 0;
    uStack_788 = 0;
    func_0x00010007e1e8(&uStack_798,auStack_778,&lStack_748,2);
    puVar5 = (undefined8 *)&UNK_1109598d8;
    unaff_x23 = &uStack_798;
    puVar11 = &uStack_798;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109598d8,puVar11,puVar14);
    puStack_780 = unaff_x23;
    func_0x00010007e5dc(&puStack_780);
    lVar15 = 0;
    puVar2 = auStack_778;
    puVar8 = puVar14;
    do {
      if ((&cStack_749)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_760 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar10);
  puVar9 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_748) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_761 < '\0') {
    __ZdlPv(auStack_778[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar7);
  puVar6 = puVar9;
  __Unwind_Resume();
  pcStack_7a8 = FUN_106a7eea4;
  lStack_7e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar5;
  puVar4 = puVar11;
  puVar14 = puVar8;
  puStack_7e0 = unaff_x24;
  puStack_7d8 = unaff_x23;
  puStack_7d0 = puVar2;
  puStack_7c8 = puVar9;
  puStack_7c0 = puVar10;
  puStack_7b8 = puVar7;
  pppuStack_7b0 = &pppuStack_710;
  _objc_retain(puVar5);
  _objc_retain(puVar11);
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar6[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_818,puVar2);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar2 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_800,puVar2);
    uStack_838 = 0;
    uStack_830 = 0;
    uStack_828 = 0;
    func_0x00010007e1e8(&uStack_838,auStack_818,&lStack_7e8,2);
    puVar3 = (undefined8 *)&UNK_110959928;
    puVar4 = &uStack_838;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959928,puVar4,puVar8);
    puStack_820 = &uStack_838;
    func_0x00010007e5dc(&puStack_820);
    lVar15 = 0;
    puVar14 = puVar8;
    do {
      if ((&cStack_7e9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_800 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar11);
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  if (cStack_801 < '\0') {
    __ZdlPv(auStack_818[0]);
  }
  _objc_release(puVar11);
  _objc_release(puVar5);
  __Unwind_Resume(puVar2);
  _objc_retain(puVar14);
  _objc_retain(puVar4);
  _objc_retain(puVar2);
  func_0x00010c0b5ac0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  FUN_106a7f1bc(puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar12 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar4);
  puVar13 = puVar12;
  func_0x00010c22b9e0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106a7d714; end: 106a7d963;  */

void FUN_106a7d714(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 *puStack_780;
  undefined8 auStack_778 [2];
  char cStack_761;
  undefined8 auStack_760 [2];
  char cStack_749;
  long lStack_748;
  undefined8 *puStack_740;
  undefined8 *puStack_738;
  undefined8 *puStack_730;
  undefined8 *puStack_728;
  undefined8 *puStack_720;
  undefined8 *puStack_718;
  undefined8 ***pppuStack_710;
  code *pcStack_708;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 auStack_6d8 [2];
  char cStack_6c1;
  undefined8 auStack_6c0 [2];
  char cStack_6a9;
  long lStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 *puStack_690;
  long *plStack_688;
  undefined8 *puStack_680;
  undefined8 *puStack_678;
  undefined8 ***pppuStack_670;
  code *pcStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 *puStack_648;
  undefined8 auStack_640 [2];
  char cStack_629;
  long lStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 *puStack_610;
  long *plStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 *puStack_5c8;
  undefined8 auStack_5c0 [2];
  char cStack_5a9;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  long *plStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 ***pppuStack_570;
  code *pcStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 *puStack_548;
  undefined8 auStack_540 [2];
  char cStack_529;
  long lStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 auStack_4b8 [2];
  char cStack_4a1;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 *puStack_420;
  undefined8 auStack_418 [2];
  char cStack_401;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar7 = param_3;
  puVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != (undefined8 *)0x0) {
    plVar1 = (long *)param_1[1];
    puVar2 = (undefined8 *)&UNK_110959568;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)param_1[1];
      _objc_retain(param_2);
      if (param_2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x24 = auStack_78;
      func_0x00010002b838(auStack_78,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar2);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      puVar2 = (undefined8 *)&UNK_110959568;
      unaff_x23 = &uStack_98;
      puVar7 = &uStack_98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959568,puVar7,param_4);
      puStack_80 = unaff_x23;
      func_0x00010007e5dc(&puStack_80);
      lVar15 = 0;
      param_1 = auStack_78;
      puVar5 = param_4;
      do {
        if ((&cStack_49)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106a7d964;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar2;
  puVar9 = puVar7;
  puVar8 = puVar5;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_1;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar7);
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar4[1];
    puVar12 = (undefined8 *)&UNK_1109595b8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)puVar4[1];
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      unaff_x24 = auStack_118;
      func_0x00010002b838(auStack_118,puVar3);
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar3 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_100,puVar3);
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
      puVar12 = (undefined8 *)&UNK_1109595b8;
      unaff_x23 = &uStack_138;
      puVar9 = &uStack_138;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109595b8,puVar9,puVar5);
      puStack_120 = unaff_x23;
      func_0x00010007e5dc(&puStack_120);
      lVar15 = 0;
      puVar4 = auStack_118;
      puVar8 = puVar5;
      do {
        if ((&cStack_e9)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
  }
  _objc_release(puVar7);
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_148 = FUN_106a7dbb4;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar12;
  puVar13 = puVar9;
  puVar14 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar4;
  puStack_168 = puVar5;
  puStack_160 = puVar7;
  puStack_158 = puVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar12);
  _objc_retain(puVar9);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar6[1];
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar12;
      _objc_retainAutorelease(puVar12);
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar2);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar3 = (undefined8 *)&UNK_110959608;
    unaff_x23 = &uStack_1d8;
    puVar13 = &uStack_1d8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959608,puVar13,puVar8);
    puStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1c0);
    lVar15 = 0;
    puVar2 = auStack_1b8;
    puVar14 = puVar8;
    do {
      if ((&cStack_189)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar9);
  puVar7 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar12);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106a7dde4;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar3;
  puVar4 = puVar13;
  puVar6 = puVar14;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar2;
  puStack_208 = puVar7;
  puStack_200 = puVar9;
  puStack_1f8 = puVar12;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar3);
  _objc_retain(puVar13);
  puVar2 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar8[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,puVar2);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar2 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_240,puVar2);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar5 = (undefined8 *)&UNK_110959658;
    unaff_x23 = &uStack_278;
    puVar4 = &uStack_278;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959658,puVar4,puVar14);
    puStack_260 = unaff_x23;
    func_0x00010007e5dc(&puStack_260);
    lVar15 = 0;
    puVar2 = auStack_258;
    puVar6 = puVar14;
    do {
      if ((&cStack_229)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar13);
  puVar7 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar13);
  _objc_release(puVar3);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_288 = FUN_106a7e014;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar5;
  puVar9 = puVar4;
  puVar14 = puVar6;
  puStack_2c0 = unaff_x24;
  puStack_2b8 = unaff_x23;
  puStack_2b0 = puVar2;
  puStack_2a8 = puVar7;
  puStack_2a0 = puVar13;
  puStack_298 = puVar3;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  puVar2 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar8[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_2f8;
    func_0x00010002b838(auStack_2f8,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_2e0,puVar2);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
    puVar12 = (undefined8 *)&UNK_1109596a8;
    unaff_x23 = &uStack_318;
    puVar9 = &uStack_318;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109596a8,puVar9,puVar6);
    puStack_300 = unaff_x23;
    func_0x00010007e5dc(&puStack_300);
    lVar15 = 0;
    puVar2 = auStack_2f8;
    puVar14 = puVar6;
    do {
      if ((&cStack_2c9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar4);
  puVar7 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar8 = puVar7;
  __Unwind_Resume();
  puVar6 = &uStack_3a0;
  pcStack_328 = FUN_106a7e244;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar12;
  puVar13 = puVar9;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar2;
  puStack_348 = puVar7;
  puStack_340 = puVar4;
  puStack_338 = puVar5;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(puVar12);
  plVar1 = (long *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar8[1];
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar12;
      _objc_retainAutorelease(puVar12);
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    unaff_x23 = auStack_380;
    func_0x00010002b838(auStack_380,puVar2);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x00010007e1e8(&uStack_3a0,auStack_380,&lStack_368,1);
    puVar3 = (undefined8 *)&UNK_1109596f8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109596f8,&uStack_3a0,puVar9);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    puVar13 = puVar6;
    puVar14 = puVar9;
    puVar2 = &uStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      puVar13 = puVar6;
      puVar14 = puVar9;
      puVar2 = &uStack_3a0;
    }
  }
  puVar7 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  _objc_release(puVar12);
  puVar4 = puVar7;
  __Unwind_Resume();
  pcStack_3a8 = FUN_106a7e3b8;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar3;
  puVar9 = puVar13;
  puVar8 = puVar14;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar2;
  plStack_3c8 = plVar1;
  puStack_3c0 = puVar7;
  puStack_3b8 = puVar12;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(puVar3);
  _objc_retain(puVar13);
  puVar2 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar4[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_418;
    func_0x00010002b838(auStack_418,puVar2);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar2 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_400,puVar2);
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_428 = 0;
    func_0x00010007e1e8(&uStack_438,auStack_418,&lStack_3e8,2);
    puVar5 = (undefined8 *)&UNK_110959748;
    unaff_x23 = &uStack_438;
    puVar9 = &uStack_438;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959748,puVar9,puVar14);
    puStack_420 = unaff_x23;
    func_0x00010007e5dc(&puStack_420);
    lVar15 = 0;
    puVar2 = auStack_418;
    puVar8 = puVar14;
    do {
      if ((&cStack_3e9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_400 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar13);
  puVar7 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  if (cStack_401 < '\0') {
    __ZdlPv(auStack_418[0]);
  }
  _objc_release(puVar13);
  _objc_release(puVar3);
  puVar6 = puVar7;
  __Unwind_Resume();
  pcStack_448 = FUN_106a7e5e8;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar5;
  puVar4 = puVar9;
  puVar14 = puVar8;
  puStack_480 = unaff_x24;
  puStack_478 = unaff_x23;
  puStack_470 = puVar2;
  puStack_468 = puVar7;
  puStack_460 = puVar13;
  puStack_458 = puVar3;
  pppuStack_450 = &pppuStack_3b0;
  _objc_retain(puVar5);
  _objc_retain(puVar9);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar6[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_4b8;
    func_0x00010002b838(auStack_4b8,puVar2);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_4a0,puVar2);
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    func_0x00010007e1e8(&uStack_4d8,auStack_4b8,&lStack_488,2);
    puVar12 = (undefined8 *)&UNK_110959798;
    unaff_x23 = &uStack_4d8;
    puVar4 = &uStack_4d8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959798,puVar4,puVar8);
    puStack_4c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_4c0);
    lVar15 = 0;
    puVar2 = auStack_4b8;
    puVar14 = puVar8;
    do {
      if ((&cStack_489)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4a0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar9);
  puVar7 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_4a1 < '\0') {
    __ZdlPv(auStack_4b8[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar5);
  puVar8 = puVar7;
  __Unwind_Resume();
  puVar6 = &uStack_560;
  pcStack_4e8 = FUN_106a7e818;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar12;
  puVar13 = puVar4;
  puStack_520 = unaff_x24;
  puStack_518 = unaff_x23;
  puStack_510 = puVar2;
  puStack_508 = puVar7;
  puStack_500 = puVar9;
  puStack_4f8 = puVar5;
  pppuStack_4f0 = &pppuStack_450;
  _objc_retain(puVar12);
  plVar1 = (long *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar8[1];
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar12;
      _objc_retainAutorelease(puVar12);
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    unaff_x23 = auStack_540;
    func_0x00010002b838(auStack_540,puVar2);
    uStack_560 = 0;
    uStack_558 = 0;
    uStack_550 = 0;
    func_0x00010007e1e8(&uStack_560,auStack_540,&lStack_528,1);
    puVar3 = (undefined8 *)&UNK_1109597e8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109597e8,&uStack_560,puVar4);
    puStack_548 = (undefined1 *)&uStack_560;
    func_0x00010007e5dc(&puStack_548);
    puVar13 = puVar6;
    puVar14 = puVar4;
    puVar2 = &uStack_560;
    if (cStack_529 < '\0') {
      __ZdlPv(auStack_540[0]);
      puVar13 = puVar6;
      puVar14 = puVar4;
      puVar2 = &uStack_560;
    }
  }
  puVar7 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  _objc_release(puVar12);
  puVar9 = puVar7;
  __Unwind_Resume();
  puVar8 = &uStack_5e0;
  pcStack_568 = FUN_106a7e98c;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar3;
  puVar4 = puVar13;
  puStack_5a0 = unaff_x24;
  puStack_598 = unaff_x23;
  puStack_590 = puVar2;
  plStack_588 = plVar1;
  puStack_580 = puVar7;
  puStack_578 = puVar12;
  pppuStack_570 = &pppuStack_4f0;
  _objc_retain(puVar3);
  plVar1 = (long *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar9[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_5c0;
    func_0x00010002b838(auStack_5c0,puVar2);
    uStack_5e0 = 0;
    uStack_5d8 = 0;
    uStack_5d0 = 0;
    func_0x00010007e1e8(&uStack_5e0,auStack_5c0,&lStack_5a8,1);
    puVar5 = (undefined8 *)&UNK_110959838;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959838,&uStack_5e0,puVar13);
    puStack_5c8 = (undefined1 *)&uStack_5e0;
    func_0x00010007e5dc(&puStack_5c8);
    puVar4 = puVar8;
    puVar14 = puVar13;
    puVar2 = &uStack_5e0;
    if (cStack_5a9 < '\0') {
      __ZdlPv(auStack_5c0[0]);
      puVar4 = puVar8;
      puVar14 = puVar13;
      puVar2 = &uStack_5e0;
    }
  }
  puVar7 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar9 = puVar7;
  __Unwind_Resume();
  puVar13 = &uStack_660;
  pcStack_5e8 = FUN_106a7eb00;
  lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar5;
  puVar8 = puVar4;
  puStack_620 = unaff_x24;
  puStack_618 = unaff_x23;
  puStack_610 = puVar2;
  plStack_608 = plVar1;
  puStack_600 = puVar7;
  puStack_5f8 = puVar3;
  pppuStack_5f0 = &pppuStack_570;
  _objc_retain(puVar5);
  plVar1 = (long *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar9[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_640;
    func_0x00010002b838(auStack_640,puVar2);
    uStack_660 = 0;
    uStack_658 = 0;
    uStack_650 = 0;
    func_0x00010007e1e8(&uStack_660,auStack_640,&lStack_628,1);
    puVar12 = (undefined8 *)&UNK_110959888;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959888,&uStack_660,puVar4);
    puStack_648 = (undefined1 *)&uStack_660;
    func_0x00010007e5dc(&puStack_648);
    puVar8 = puVar13;
    puVar14 = puVar4;
    puVar2 = &uStack_660;
    if (cStack_629 < '\0') {
      __ZdlPv(auStack_640[0]);
      puVar8 = puVar13;
      puVar14 = puVar4;
      puVar2 = &uStack_660;
    }
  }
  puVar7 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_628) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar7;
  __Unwind_Resume();
  pcStack_668 = FUN_106a7ec74;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar12;
  puVar9 = puVar8;
  puVar13 = puVar14;
  puStack_6a0 = unaff_x24;
  puStack_698 = unaff_x23;
  puStack_690 = puVar2;
  plStack_688 = plVar1;
  puStack_680 = puVar7;
  puStack_678 = puVar5;
  pppuStack_670 = &pppuStack_5f0;
  _objc_retain(puVar12);
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar4[1];
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar12;
      _objc_retainAutorelease(puVar12);
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    unaff_x24 = auStack_6d8;
    func_0x00010002b838(auStack_6d8,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_6c0,puVar2);
    uStack_6f8 = 0;
    uStack_6f0 = 0;
    uStack_6e8 = 0;
    func_0x00010007e1e8(&uStack_6f8,auStack_6d8,&lStack_6a8,2);
    puVar3 = (undefined8 *)&UNK_1109598d8;
    unaff_x23 = &uStack_6f8;
    puVar9 = &uStack_6f8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109598d8,puVar9,puVar14);
    puStack_6e0 = unaff_x23;
    func_0x00010007e5dc(&puStack_6e0);
    lVar15 = 0;
    puVar2 = auStack_6d8;
    puVar13 = puVar14;
    do {
      if ((&cStack_6a9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_6c0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar8);
  puVar7 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_6c1 < '\0') {
    __ZdlPv(auStack_6d8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar12);
  puVar6 = puVar7;
  __Unwind_Resume();
  pcStack_708 = FUN_106a7eea4;
  lStack_748 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar3;
  puVar4 = puVar9;
  puVar14 = puVar13;
  puStack_740 = unaff_x24;
  puStack_738 = unaff_x23;
  puStack_730 = puVar2;
  puStack_728 = puVar7;
  puStack_720 = puVar8;
  puStack_718 = puVar12;
  pppuStack_710 = &pppuStack_670;
  _objc_retain(puVar3);
  _objc_retain(puVar9);
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar6[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_778,puVar2);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_760,puVar2);
    uStack_798 = 0;
    uStack_790 = 0;
    uStack_788 = 0;
    func_0x00010007e1e8(&uStack_798,auStack_778,&lStack_748,2);
    puVar5 = (undefined8 *)&UNK_110959928;
    puVar4 = &uStack_798;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959928,puVar4,puVar13);
    puStack_780 = &uStack_798;
    func_0x00010007e5dc(&puStack_780);
    lVar15 = 0;
    puVar14 = puVar13;
    do {
      if ((&cStack_749)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_760 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar9);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_748) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_761 < '\0') {
    __ZdlPv(auStack_778[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar3);
  __Unwind_Resume(puVar2);
  _objc_retain(puVar14);
  _objc_retain(puVar4);
  _objc_retain(puVar2);
  func_0x00010c0b5ac0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  FUN_106a7f1bc(puVar2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar5);
  puVar10 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar4);
  puVar11 = puVar10;
  func_0x00010c22b9e0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar10);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106a7d964; end: 106a7dbb3;  */

void FUN_106a7d964(undefined8 *param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 auStack_6d8 [2];
  char cStack_6c1;
  undefined8 auStack_6c0 [2];
  char cStack_6a9;
  long lStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 *puStack_690;
  undefined *puStack_688;
  undefined8 *puStack_680;
  undefined *puStack_678;
  undefined8 ***pppuStack_670;
  code *pcStack_668;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 *puStack_640;
  undefined8 auStack_638 [2];
  char cStack_621;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 *puStack_5f0;
  long *plStack_5e8;
  undefined *puStack_5e0;
  undefined *puStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined1 *puStack_5a8;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  long *plStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  long *plStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined *puStack_468;
  undefined8 *puStack_460;
  undefined *puStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 *puStack_420;
  undefined8 auStack_418 [2];
  char cStack_401;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  long *plStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar3 = param_3;
  puVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != (undefined8 *)0x0) {
    plVar1 = (long *)param_1[1];
    puVar2 = &UNK_1109595b8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)param_1[1];
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3ab4b5;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x24 = auStack_78;
      func_0x00010002b838(auStack_78,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3ab4b5;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar3 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar3);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      puVar2 = &UNK_1109595b8;
      unaff_x23 = &uStack_98;
      puVar3 = &uStack_98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109595b8,puVar3,param_4);
      puStack_80 = unaff_x23;
      func_0x00010007e5dc(&puStack_80);
      lVar13 = 0;
      param_1 = auStack_78;
      puVar9 = param_4;
      do {
        if ((&cStack_49)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
  }
  _objc_release(param_3);
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_a8 = FUN_106a7dbb4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar6 = puVar3;
  puVar12 = puVar9;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_1;
  puStack_c8 = puVar4;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  puVar10 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = &UNK_10f3ab4b5;
    }
    else {
      puVar4 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar4);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar6 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_100,puVar6);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar8 = &UNK_110959608;
    unaff_x23 = &uStack_138;
    puVar6 = &uStack_138;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959608,puVar6,puVar9);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar13 = 0;
    puVar10 = auStack_118;
    puVar12 = puVar9;
    do {
      if ((&cStack_e9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar3);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar7 = puVar4;
  __Unwind_Resume();
  pcStack_148 = FUN_106a7dde4;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar8;
  puVar9 = puVar6;
  puVar11 = puVar12;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar10;
  puStack_168 = puVar4;
  puStack_160 = puVar3;
  puStack_158 = puVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar8);
  _objc_retain(puVar6);
  puVar3 = (undefined8 *)0x0;
  if (puVar7 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar7 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar2);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar3 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_1a0,puVar3);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar5 = &UNK_110959658;
    unaff_x23 = &uStack_1d8;
    puVar9 = &uStack_1d8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959658,puVar9,puVar12);
    puStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1c0);
    lVar13 = 0;
    puVar3 = auStack_1b8;
    puVar11 = puVar12;
    do {
      if ((&cStack_189)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar6);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar8);
  puVar7 = puVar2;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106a7e014;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puVar10 = puVar9;
  puVar12 = puVar11;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar3;
  puStack_208 = puVar2;
  puStack_200 = puVar6;
  puStack_1f8 = puVar8;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar5);
  _objc_retain(puVar9);
  puVar3 = (undefined8 *)0x0;
  if (puVar7 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar7 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar2 = &UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,puVar2);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar3 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_240,puVar3);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar4 = &UNK_1109596a8;
    unaff_x23 = &uStack_278;
    puVar10 = &uStack_278;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109596a8,puVar10,puVar11);
    puStack_260 = unaff_x23;
    func_0x00010007e5dc(&puStack_260);
    lVar13 = 0;
    puVar3 = auStack_258;
    puVar12 = puVar11;
    do {
      if ((&cStack_229)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar9);
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar5);
  puVar7 = puVar2;
  __Unwind_Resume();
  puVar11 = &uStack_300;
  pcStack_288 = FUN_106a7e244;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar4;
  puVar6 = puVar10;
  puStack_2c0 = unaff_x24;
  puStack_2b8 = unaff_x23;
  puStack_2b0 = puVar3;
  puStack_2a8 = puVar2;
  puStack_2a0 = puVar9;
  puStack_298 = puVar5;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(puVar4);
  plVar1 = (long *)0x0;
  if (puVar7 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar7 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar2 = &UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_2e0;
    func_0x00010002b838(auStack_2e0,puVar2);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
    puVar8 = &UNK_1109596f8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109596f8,&uStack_300,puVar10);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    puVar6 = puVar11;
    puVar12 = puVar10;
    puVar3 = &uStack_300;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar6 = puVar11;
      puVar12 = puVar10;
      puVar3 = &uStack_300;
    }
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar7 = puVar2;
  __Unwind_Resume();
  pcStack_308 = FUN_106a7e3b8;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar8;
  puVar9 = puVar6;
  puVar10 = puVar12;
  puStack_340 = unaff_x24;
  puStack_338 = unaff_x23;
  puStack_330 = puVar3;
  plStack_328 = plVar1;
  puStack_320 = puVar2;
  puStack_318 = puVar4;
  pppuStack_310 = &pppuStack_290;
  _objc_retain(puVar8);
  _objc_retain(puVar6);
  puVar3 = (undefined8 *)0x0;
  if (puVar7 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar7 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x24 = auStack_378;
    func_0x00010002b838(auStack_378,puVar2);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar3 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_360,puVar3);
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    func_0x00010007e1e8(&uStack_398,auStack_378,&lStack_348,2);
    puVar5 = &UNK_110959748;
    unaff_x23 = &uStack_398;
    puVar9 = &uStack_398;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959748,puVar9,puVar12);
    puStack_380 = unaff_x23;
    func_0x00010007e5dc(&puStack_380);
    lVar13 = 0;
    puVar3 = auStack_378;
    puVar10 = puVar12;
    do {
      if ((&cStack_349)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar6);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_361 < '\0') {
    __ZdlPv(auStack_378[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar8);
  puVar7 = puVar2;
  __Unwind_Resume();
  pcStack_3a8 = FUN_106a7e5e8;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puVar12 = puVar9;
  puVar11 = puVar10;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar3;
  puStack_3c8 = puVar2;
  puStack_3c0 = puVar6;
  puStack_3b8 = puVar8;
  pppuStack_3b0 = &pppuStack_310;
  _objc_retain(puVar5);
  _objc_retain(puVar9);
  puVar3 = (undefined8 *)0x0;
  if (puVar7 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar7 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar2 = &UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_418;
    func_0x00010002b838(auStack_418,puVar2);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar3 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_400,puVar3);
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_428 = 0;
    func_0x00010007e1e8(&uStack_438,auStack_418,&lStack_3e8,2);
    puVar4 = &UNK_110959798;
    unaff_x23 = &uStack_438;
    puVar12 = &uStack_438;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959798,puVar12,puVar10);
    puStack_420 = unaff_x23;
    func_0x00010007e5dc(&puStack_420);
    lVar13 = 0;
    puVar3 = auStack_418;
    puVar11 = puVar10;
    do {
      if ((&cStack_3e9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_400 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar9);
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_401 < '\0') {
    __ZdlPv(auStack_418[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar5);
  puVar7 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_4c0;
  pcStack_448 = FUN_106a7e818;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar4;
  puVar6 = puVar12;
  puStack_480 = unaff_x24;
  puStack_478 = unaff_x23;
  puStack_470 = puVar3;
  puStack_468 = puVar2;
  puStack_460 = puVar9;
  puStack_458 = puVar5;
  pppuStack_450 = &pppuStack_3b0;
  _objc_retain(puVar4);
  plVar1 = (long *)0x0;
  if (puVar7 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar7 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar2 = &UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_4a0;
    func_0x00010002b838(auStack_4a0,puVar2);
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x00010007e1e8(&uStack_4c0,auStack_4a0,&lStack_488,1);
    puVar8 = &UNK_1109597e8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109597e8,&uStack_4c0,puVar12);
    puStack_4a8 = (undefined1 *)&uStack_4c0;
    func_0x00010007e5dc(&puStack_4a8);
    puVar6 = puVar10;
    puVar11 = puVar12;
    puVar3 = &uStack_4c0;
    if (cStack_489 < '\0') {
      __ZdlPv(auStack_4a0[0]);
      puVar6 = puVar10;
      puVar11 = puVar12;
      puVar3 = &uStack_4c0;
    }
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar7 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_540;
  pcStack_4c8 = FUN_106a7e98c;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar8;
  puVar9 = puVar6;
  puStack_500 = unaff_x24;
  puStack_4f8 = unaff_x23;
  puStack_4f0 = puVar3;
  plStack_4e8 = plVar1;
  puStack_4e0 = puVar2;
  puStack_4d8 = puVar4;
  pppuStack_4d0 = &pppuStack_450;
  _objc_retain(puVar8);
  plVar1 = (long *)0x0;
  if (puVar7 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar7 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_520;
    func_0x00010002b838(auStack_520,puVar2);
    uStack_540 = 0;
    uStack_538 = 0;
    uStack_530 = 0;
    func_0x00010007e1e8(&uStack_540,auStack_520,&lStack_508,1);
    puVar5 = &UNK_110959838;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959838,&uStack_540,puVar6);
    puStack_528 = (undefined1 *)&uStack_540;
    func_0x00010007e5dc(&puStack_528);
    puVar9 = puVar10;
    puVar11 = puVar6;
    puVar3 = &uStack_540;
    if (cStack_509 < '\0') {
      __ZdlPv(auStack_520[0]);
      puVar9 = puVar10;
      puVar11 = puVar6;
      puVar3 = &uStack_540;
    }
  }
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar7 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_5c0;
  pcStack_548 = FUN_106a7eb00;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puVar6 = puVar9;
  puStack_580 = unaff_x24;
  puStack_578 = unaff_x23;
  puStack_570 = puVar3;
  plStack_568 = plVar1;
  puStack_560 = puVar2;
  puStack_558 = puVar8;
  pppuStack_550 = &pppuStack_4d0;
  _objc_retain(puVar5);
  plVar1 = (long *)0x0;
  if (puVar7 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar7 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar2 = &UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_5a0;
    func_0x00010002b838(auStack_5a0,puVar2);
    uStack_5c0 = 0;
    uStack_5b8 = 0;
    uStack_5b0 = 0;
    func_0x00010007e1e8(&uStack_5c0,auStack_5a0,&lStack_588,1);
    puVar4 = &UNK_110959888;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959888,&uStack_5c0,puVar9);
    puStack_5a8 = (undefined1 *)&uStack_5c0;
    func_0x00010007e5dc(&puStack_5a8);
    puVar6 = puVar10;
    puVar11 = puVar9;
    puVar3 = &uStack_5c0;
    if (cStack_589 < '\0') {
      __ZdlPv(auStack_5a0[0]);
      puVar6 = puVar10;
      puVar11 = puVar9;
      puVar3 = &uStack_5c0;
    }
  }
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar7 = puVar2;
  __Unwind_Resume();
  pcStack_5c8 = FUN_106a7ec74;
  lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar4;
  puVar9 = puVar6;
  puVar10 = puVar11;
  puStack_600 = unaff_x24;
  puStack_5f8 = unaff_x23;
  puStack_5f0 = puVar3;
  plStack_5e8 = plVar1;
  puStack_5e0 = puVar2;
  puStack_5d8 = puVar5;
  pppuStack_5d0 = &pppuStack_550;
  _objc_retain(puVar4);
  _objc_retain(puVar6);
  puVar3 = (undefined8 *)0x0;
  if (puVar7 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar7 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar2 = &UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_638;
    func_0x00010002b838(auStack_638,puVar2);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar3 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_620,puVar3);
    uStack_658 = 0;
    uStack_650 = 0;
    uStack_648 = 0;
    func_0x00010007e1e8(&uStack_658,auStack_638,&lStack_608,2);
    puVar8 = &UNK_1109598d8;
    unaff_x23 = &uStack_658;
    puVar9 = &uStack_658;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109598d8,puVar9,puVar11);
    puStack_640 = unaff_x23;
    func_0x00010007e5dc(&puStack_640);
    lVar13 = 0;
    puVar3 = auStack_638;
    puVar10 = puVar11;
    do {
      if ((&cStack_609)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_620 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar6);
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_608) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_621 < '\0') {
    __ZdlPv(auStack_638[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar7 = puVar2;
  __Unwind_Resume();
  pcStack_668 = FUN_106a7eea4;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar8;
  puVar12 = puVar9;
  puVar11 = puVar10;
  puStack_6a0 = unaff_x24;
  puStack_698 = unaff_x23;
  puStack_690 = puVar3;
  puStack_688 = puVar2;
  puStack_680 = puVar6;
  puStack_678 = puVar4;
  pppuStack_670 = &pppuStack_5d0;
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  if (puVar7 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar7 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_6d8,puVar2);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar3 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_6c0,puVar3);
    uStack_6f8 = 0;
    uStack_6f0 = 0;
    uStack_6e8 = 0;
    func_0x00010007e1e8(&uStack_6f8,auStack_6d8,&lStack_6a8,2);
    puVar5 = &UNK_110959928;
    puVar12 = &uStack_6f8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110959928,puVar12,puVar10);
    puStack_6e0 = &uStack_6f8;
    func_0x00010007e5dc(&puStack_6e0);
    lVar13 = 0;
    puVar11 = puVar10;
    do {
      if ((&cStack_6a9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_6c0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar9);
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_6c1 < '\0') {
    __ZdlPv(auStack_6d8[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  __Unwind_Resume(puVar2);
  _objc_retain(puVar11);
  _objc_retain(puVar12);
  _objc_retain(puVar2);
  func_0x00010c0b5ac0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  FUN_106a7f1bc(puVar2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar5);
  puVar2 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar12);
  puVar8 = puVar2;
  func_0x00010c22b9e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106a7dbb4; end: 106a7dde3;  */

void FUN_106a7dbb4(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 *puStack_640;
  undefined8 auStack_638 [2];
  char cStack_621;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 *puStack_5f0;
  undefined *puStack_5e8;
  undefined8 *puStack_5e0;
  undefined *puStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 auStack_598 [2];
  char cStack_581;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  long *plStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined1 *puStack_508;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  long *plStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 *puStack_488;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  long *plStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined *puStack_328;
  undefined8 *puStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  long *plStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110959608;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959608,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar5 = auStack_78;
    puVar9 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106a7dde4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puVar10 = puVar9;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3ab4b5;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_110959658;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959658,puVar8,puVar9);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar12 = 0;
    puVar5 = auStack_118;
    puVar10 = puVar9;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_106a7e014;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  puVar11 = puVar10;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar4 = &UNK_1109596a8;
    unaff_x23 = &uStack_1d8;
    puVar9 = &uStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109596a8,puVar9,puVar10);
    puStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1c0);
    lVar12 = 0;
    puVar2 = auStack_1b8;
    puVar11 = puVar10;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_260;
  pcStack_1e8 = FUN_106a7e244;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar5 = puVar9;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar2;
  puStack_208 = puVar1;
  puStack_200 = puVar8;
  puStack_1f8 = puVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar4);
  plVar13 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_240;
    func_0x00010002b838(auStack_240,puVar1);
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    func_0x00010007e1e8(&uStack_260,auStack_240,&lStack_228,1);
    puVar3 = &UNK_1109596f8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109596f8,&uStack_260,puVar9);
    puStack_248 = (undefined1 *)&uStack_260;
    func_0x00010007e5dc(&puStack_248);
    puVar5 = puVar10;
    puVar11 = puVar9;
    puVar2 = &uStack_260;
    if (cStack_229 < '\0') {
      __ZdlPv(auStack_240[0]);
      puVar5 = puVar10;
      puVar11 = puVar9;
      puVar2 = &uStack_260;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_268 = FUN_106a7e3b8;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar9 = puVar5;
  puVar8 = puVar11;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar2;
  plStack_288 = plVar13;
  puStack_280 = puVar1;
  puStack_278 = puVar4;
  pppuStack_270 = &pppuStack_1f0;
  _objc_retain(puVar3);
  _objc_retain(puVar5);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_2d8;
    func_0x00010002b838(auStack_2d8,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar2 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_2c0,puVar2);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x00010007e1e8(&uStack_2f8,auStack_2d8,&lStack_2a8,2);
    puVar7 = &UNK_110959748;
    unaff_x23 = &uStack_2f8;
    puVar9 = &uStack_2f8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959748,puVar9,puVar11);
    puStack_2e0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2e0);
    lVar12 = 0;
    puVar2 = auStack_2d8;
    puVar8 = puVar11;
    do {
      if ((&cStack_2a9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar5);
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_2c1 < '\0') {
    __ZdlPv(auStack_2d8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_308 = FUN_106a7e5e8;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar10 = puVar9;
  puVar11 = puVar8;
  puStack_340 = unaff_x24;
  puStack_338 = unaff_x23;
  puStack_330 = puVar2;
  puStack_328 = puVar1;
  puStack_320 = puVar5;
  puStack_318 = puVar3;
  pppuStack_310 = &pppuStack_270;
  _objc_retain(puVar7);
  _objc_retain(puVar9);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_378;
    func_0x00010002b838(auStack_378,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_360,puVar2);
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    func_0x00010007e1e8(&uStack_398,auStack_378,&lStack_348,2);
    puVar4 = &UNK_110959798;
    unaff_x23 = &uStack_398;
    puVar10 = &uStack_398;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959798,puVar10,puVar8);
    puStack_380 = unaff_x23;
    func_0x00010007e5dc(&puStack_380);
    lVar12 = 0;
    puVar2 = auStack_378;
    puVar11 = puVar8;
    do {
      if ((&cStack_349)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_361 < '\0') {
    __ZdlPv(auStack_378[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_420;
  pcStack_3a8 = FUN_106a7e818;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar5 = puVar10;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar2;
  puStack_3c8 = puVar1;
  puStack_3c0 = puVar9;
  puStack_3b8 = puVar7;
  pppuStack_3b0 = &pppuStack_310;
  _objc_retain(puVar4);
  plVar13 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_400;
    func_0x00010002b838(auStack_400,puVar1);
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_410 = 0;
    func_0x00010007e1e8(&uStack_420,auStack_400,&lStack_3e8,1);
    puVar3 = &UNK_1109597e8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109597e8,&uStack_420,puVar10);
    puStack_408 = (undefined1 *)&uStack_420;
    func_0x00010007e5dc(&puStack_408);
    puVar5 = puVar8;
    puVar11 = puVar10;
    puVar2 = &uStack_420;
    if (cStack_3e9 < '\0') {
      __ZdlPv(auStack_400[0]);
      puVar5 = puVar8;
      puVar11 = puVar10;
      puVar2 = &uStack_420;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_4a0;
  pcStack_428 = FUN_106a7e98c;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar9 = puVar5;
  puStack_460 = unaff_x24;
  puStack_458 = unaff_x23;
  puStack_450 = puVar2;
  plStack_448 = plVar13;
  puStack_440 = puVar1;
  puStack_438 = puVar4;
  pppuStack_430 = &pppuStack_3b0;
  _objc_retain(puVar3);
  plVar13 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_480;
    func_0x00010002b838(auStack_480,puVar1);
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_490 = 0;
    func_0x00010007e1e8(&uStack_4a0,auStack_480,&lStack_468,1);
    puVar7 = &UNK_110959838;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959838,&uStack_4a0,puVar5);
    puStack_488 = (undefined1 *)&uStack_4a0;
    func_0x00010007e5dc(&puStack_488);
    puVar9 = puVar8;
    puVar11 = puVar5;
    puVar2 = &uStack_4a0;
    if (cStack_469 < '\0') {
      __ZdlPv(auStack_480[0]);
      puVar9 = puVar8;
      puVar11 = puVar5;
      puVar2 = &uStack_4a0;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_520;
  pcStack_4a8 = FUN_106a7eb00;
  lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar5 = puVar9;
  puStack_4e0 = unaff_x24;
  puStack_4d8 = unaff_x23;
  puStack_4d0 = puVar2;
  plStack_4c8 = plVar13;
  puStack_4c0 = puVar1;
  puStack_4b8 = puVar3;
  pppuStack_4b0 = &pppuStack_430;
  _objc_retain(puVar7);
  plVar13 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_500;
    func_0x00010002b838(auStack_500,puVar1);
    uStack_520 = 0;
    uStack_518 = 0;
    uStack_510 = 0;
    func_0x00010007e1e8(&uStack_520,auStack_500,&lStack_4e8,1);
    puVar4 = &UNK_110959888;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959888,&uStack_520,puVar9);
    puStack_508 = (undefined1 *)&uStack_520;
    func_0x00010007e5dc(&puStack_508);
    puVar5 = puVar8;
    puVar11 = puVar9;
    puVar2 = &uStack_520;
    if (cStack_4e9 < '\0') {
      __ZdlPv(auStack_500[0]);
      puVar5 = puVar8;
      puVar11 = puVar9;
      puVar2 = &uStack_520;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_528 = FUN_106a7ec74;
  lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar9 = puVar5;
  puVar8 = puVar11;
  puStack_560 = unaff_x24;
  puStack_558 = unaff_x23;
  puStack_550 = puVar2;
  plStack_548 = plVar13;
  puStack_540 = puVar1;
  puStack_538 = puVar7;
  pppuStack_530 = &pppuStack_4b0;
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_598;
    func_0x00010002b838(auStack_598,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar2 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_580,puVar2);
    uStack_5b8 = 0;
    uStack_5b0 = 0;
    uStack_5a8 = 0;
    func_0x00010007e1e8(&uStack_5b8,auStack_598,&lStack_568,2);
    puVar3 = &UNK_1109598d8;
    unaff_x23 = &uStack_5b8;
    puVar9 = &uStack_5b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109598d8,puVar9,puVar11);
    puStack_5a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_5a0);
    lVar12 = 0;
    puVar2 = auStack_598;
    puVar8 = puVar11;
    do {
      if ((&cStack_569)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_580 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar5);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_581 < '\0') {
    __ZdlPv(auStack_598[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_5c8 = FUN_106a7eea4;
  lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar10 = puVar9;
  puVar11 = puVar8;
  puStack_600 = unaff_x24;
  puStack_5f8 = unaff_x23;
  puStack_5f0 = puVar2;
  puStack_5e8 = puVar1;
  puStack_5e0 = puVar5;
  puStack_5d8 = puVar4;
  pppuStack_5d0 = &pppuStack_530;
  _objc_retain(puVar3);
  _objc_retain(puVar9);
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_638,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_620,puVar2);
    uStack_658 = 0;
    uStack_650 = 0;
    uStack_648 = 0;
    func_0x00010007e1e8(&uStack_658,auStack_638,&lStack_608,2);
    puVar7 = &UNK_110959928;
    puVar10 = &uStack_658;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959928,puVar10,puVar8);
    puStack_640 = &uStack_658;
    func_0x00010007e5dc(&puStack_640);
    lVar12 = 0;
    puVar11 = puVar8;
    do {
      if ((&cStack_609)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_620 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_608) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_621 < '\0') {
    __ZdlPv(auStack_638[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar3);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar11);
  _objc_retain(puVar10);
  _objc_retain(puVar1);
  func_0x00010c0b5ac0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  FUN_106a7f1bc(puVar1,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar7);
  puVar1 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar10);
  puVar7 = puVar1;
  func_0x00010c22b9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106a7dde4; end: 106a7e013;  */

void FUN_106a7dde4(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 auStack_598 [2];
  char cStack_581;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  undefined *puStack_548;
  undefined8 *puStack_540;
  undefined *puStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  long *plStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  long *plStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  long *plStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined *puStack_328;
  undefined8 *puStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110959658;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959658,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar5 = auStack_78;
    puVar9 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106a7e014;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puVar11 = puVar9;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3ab4b5;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_1109596a8;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109596a8,puVar8,puVar9);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar12 = 0;
    puVar5 = auStack_118;
    puVar11 = puVar9;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  puVar10 = &uStack_1c0;
  pcStack_148 = FUN_106a7e244;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  plVar13 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_1a0;
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar4 = &UNK_1109596f8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109596f8,&uStack_1c0,puVar8);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    puVar9 = puVar10;
    puVar11 = puVar8;
    puVar5 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar9 = puVar10;
      puVar11 = puVar8;
      puVar5 = &uStack_1c0;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_1c8 = FUN_106a7e3b8;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar2 = puVar9;
  puVar8 = puVar11;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar5;
  plStack_1e8 = plVar13;
  puStack_1e0 = puVar1;
  puStack_1d8 = puVar7;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  puVar5 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_238;
    func_0x00010002b838(auStack_238,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_220,puVar2);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
    puVar3 = &UNK_110959748;
    unaff_x23 = &uStack_258;
    puVar2 = &uStack_258;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959748,puVar2,puVar11);
    puStack_240 = unaff_x23;
    func_0x00010007e5dc(&puStack_240);
    lVar12 = 0;
    puVar5 = auStack_238;
    puVar8 = puVar11;
    do {
      if ((&cStack_209)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar4);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_268 = FUN_106a7e5e8;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar11 = puVar2;
  puVar10 = puVar8;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar5;
  puStack_288 = puVar1;
  puStack_280 = puVar9;
  puStack_278 = puVar4;
  pppuStack_270 = &pppuStack_1d0;
  _objc_retain(puVar3);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_2d8;
    func_0x00010002b838(auStack_2d8,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_2c0,puVar5);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x00010007e1e8(&uStack_2f8,auStack_2d8,&lStack_2a8,2);
    puVar7 = &UNK_110959798;
    unaff_x23 = &uStack_2f8;
    puVar11 = &uStack_2f8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959798,puVar11,puVar8);
    puStack_2e0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2e0);
    lVar12 = 0;
    puVar5 = auStack_2d8;
    puVar10 = puVar8;
    do {
      if ((&cStack_2a9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_2c1 < '\0') {
    __ZdlPv(auStack_2d8[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_380;
  pcStack_308 = FUN_106a7e818;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar11;
  puStack_340 = unaff_x24;
  puStack_338 = unaff_x23;
  puStack_330 = puVar5;
  puStack_328 = puVar1;
  puStack_320 = puVar2;
  puStack_318 = puVar3;
  pppuStack_310 = &pppuStack_270;
  _objc_retain(puVar7);
  plVar13 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_360;
    func_0x00010002b838(auStack_360,puVar1);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
    puVar4 = &UNK_1109597e8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109597e8,&uStack_380,puVar11);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x00010007e5dc(&puStack_368);
    puVar9 = puVar8;
    puVar10 = puVar11;
    puVar5 = &uStack_380;
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
      puVar9 = puVar8;
      puVar10 = puVar11;
      puVar5 = &uStack_380;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_400;
  pcStack_388 = FUN_106a7e98c;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar2 = puVar9;
  puStack_3c0 = unaff_x24;
  puStack_3b8 = unaff_x23;
  puStack_3b0 = puVar5;
  plStack_3a8 = plVar13;
  puStack_3a0 = puVar1;
  puStack_398 = puVar7;
  pppuStack_390 = &pppuStack_310;
  _objc_retain(puVar4);
  plVar13 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_3e0;
    func_0x00010002b838(auStack_3e0,puVar1);
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
    puVar3 = &UNK_110959838;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959838,&uStack_400,puVar9);
    puStack_3e8 = (undefined1 *)&uStack_400;
    func_0x00010007e5dc(&puStack_3e8);
    puVar2 = puVar8;
    puVar10 = puVar9;
    puVar5 = &uStack_400;
    if (cStack_3c9 < '\0') {
      __ZdlPv(auStack_3e0[0]);
      puVar2 = puVar8;
      puVar10 = puVar9;
      puVar5 = &uStack_400;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_480;
  pcStack_408 = FUN_106a7eb00;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar9 = puVar2;
  puStack_440 = unaff_x24;
  puStack_438 = unaff_x23;
  puStack_430 = puVar5;
  plStack_428 = plVar13;
  puStack_420 = puVar1;
  puStack_418 = puVar4;
  pppuStack_410 = &pppuStack_390;
  _objc_retain(puVar3);
  plVar13 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_460;
    func_0x00010002b838(auStack_460,puVar1);
    uStack_480 = 0;
    uStack_478 = 0;
    uStack_470 = 0;
    func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_448,1);
    puVar7 = &UNK_110959888;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959888,&uStack_480,puVar2);
    puStack_468 = (undefined1 *)&uStack_480;
    func_0x00010007e5dc(&puStack_468);
    puVar9 = puVar8;
    puVar10 = puVar2;
    puVar5 = &uStack_480;
    if (cStack_449 < '\0') {
      __ZdlPv(auStack_460[0]);
      puVar9 = puVar8;
      puVar10 = puVar2;
      puVar5 = &uStack_480;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_488 = FUN_106a7ec74;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar2 = puVar9;
  puVar8 = puVar10;
  puStack_4c0 = unaff_x24;
  puStack_4b8 = unaff_x23;
  puStack_4b0 = puVar5;
  plStack_4a8 = plVar13;
  puStack_4a0 = puVar1;
  puStack_498 = puVar3;
  pppuStack_490 = &pppuStack_410;
  _objc_retain(puVar7);
  _objc_retain(puVar9);
  puVar5 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_4f8;
    func_0x00010002b838(auStack_4f8,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_4e0,puVar2);
    uStack_518 = 0;
    uStack_510 = 0;
    uStack_508 = 0;
    func_0x00010007e1e8(&uStack_518,auStack_4f8,&lStack_4c8,2);
    puVar4 = &UNK_1109598d8;
    unaff_x23 = &uStack_518;
    puVar2 = &uStack_518;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109598d8,puVar2,puVar10);
    puStack_500 = unaff_x23;
    func_0x00010007e5dc(&puStack_500);
    lVar12 = 0;
    puVar5 = auStack_4f8;
    puVar8 = puVar10;
    do {
      if ((&cStack_4c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_4e1 < '\0') {
    __ZdlPv(auStack_4f8[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_528 = FUN_106a7eea4;
  lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar11 = puVar2;
  puVar10 = puVar8;
  puStack_560 = unaff_x24;
  puStack_558 = unaff_x23;
  puStack_550 = puVar5;
  puStack_548 = puVar1;
  puStack_540 = puVar9;
  puStack_538 = puVar7;
  pppuStack_530 = &pppuStack_490;
  _objc_retain(puVar4);
  _objc_retain(puVar2);
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_598,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_580,puVar5);
    uStack_5b8 = 0;
    uStack_5b0 = 0;
    uStack_5a8 = 0;
    func_0x00010007e1e8(&uStack_5b8,auStack_598,&lStack_568,2);
    puVar3 = &UNK_110959928;
    puVar11 = &uStack_5b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959928,puVar11,puVar8);
    puStack_5a0 = &uStack_5b8;
    func_0x00010007e5dc(&puStack_5a0);
    lVar12 = 0;
    puVar10 = puVar8;
    do {
      if ((&cStack_569)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_580 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_581 < '\0') {
    __ZdlPv(auStack_598[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  _objc_retain(puVar1);
  func_0x00010c0b5ac0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  FUN_106a7f1bc(puVar1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  puVar1 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar11);
  puVar3 = puVar1;
  func_0x00010c22b9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106a7e014; end: 106a7e243;  */

void FUN_106a7e014(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  long *plStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  long *plStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  long *plStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar6 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1109596a8;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109596a8,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar6 = auStack_78;
    puVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar9 = &uStack_120;
  pcStack_a8 = FUN_106a7e244;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar6;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar13 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3ab4b5;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar7 = &UNK_1109596f8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109596f8,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar8 = puVar9;
    puVar10 = puVar2;
    puVar6 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar8 = puVar9;
      puVar10 = puVar2;
      puVar6 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_106a7e3b8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar2 = puVar8;
  puVar9 = puVar10;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar6;
  plStack_148 = plVar13;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_180,puVar2);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar4 = &UNK_110959748;
    unaff_x23 = &uStack_1b8;
    puVar2 = &uStack_1b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959748,puVar2,puVar10);
    puStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1a0);
    lVar12 = 0;
    puVar6 = auStack_198;
    puVar9 = puVar10;
    do {
      if ((&cStack_169)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_1c8 = FUN_106a7e5e8;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar10 = puVar2;
  puVar11 = puVar9;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar6;
  puStack_1e8 = puVar1;
  puStack_1e0 = puVar8;
  puStack_1d8 = puVar7;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar4);
  _objc_retain(puVar2);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_238;
    func_0x00010002b838(auStack_238,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar6 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_220,puVar6);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
    puVar3 = &UNK_110959798;
    unaff_x23 = &uStack_258;
    puVar10 = &uStack_258;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959798,puVar10,puVar9);
    puStack_240 = unaff_x23;
    func_0x00010007e5dc(&puStack_240);
    lVar12 = 0;
    puVar6 = auStack_238;
    puVar11 = puVar9;
    do {
      if ((&cStack_209)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_2e0;
  pcStack_268 = FUN_106a7e818;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar8 = puVar10;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar6;
  puStack_288 = puVar1;
  puStack_280 = puVar2;
  puStack_278 = puVar4;
  pppuStack_270 = &pppuStack_1d0;
  _objc_retain(puVar3);
  plVar13 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_2c0;
    func_0x00010002b838(auStack_2c0,puVar1);
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    func_0x00010007e1e8(&uStack_2e0,auStack_2c0,&lStack_2a8,1);
    puVar7 = &UNK_1109597e8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109597e8,&uStack_2e0,puVar10);
    puStack_2c8 = (undefined1 *)&uStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    puVar8 = puVar9;
    puVar11 = puVar10;
    puVar6 = &uStack_2e0;
    if (cStack_2a9 < '\0') {
      __ZdlPv(auStack_2c0[0]);
      puVar8 = puVar9;
      puVar11 = puVar10;
      puVar6 = &uStack_2e0;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_360;
  pcStack_2e8 = FUN_106a7e98c;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar2 = puVar8;
  puStack_320 = unaff_x24;
  puStack_318 = unaff_x23;
  puStack_310 = puVar6;
  plStack_308 = plVar13;
  puStack_300 = puVar1;
  puStack_2f8 = puVar3;
  pppuStack_2f0 = &pppuStack_270;
  _objc_retain(puVar7);
  plVar13 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_340;
    func_0x00010002b838(auStack_340,puVar1);
    uStack_360 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    func_0x00010007e1e8(&uStack_360,auStack_340,&lStack_328,1);
    puVar4 = &UNK_110959838;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959838,&uStack_360,puVar8);
    puStack_348 = (undefined1 *)&uStack_360;
    func_0x00010007e5dc(&puStack_348);
    puVar2 = puVar10;
    puVar11 = puVar8;
    puVar6 = &uStack_360;
    if (cStack_329 < '\0') {
      __ZdlPv(auStack_340[0]);
      puVar2 = puVar10;
      puVar11 = puVar8;
      puVar6 = &uStack_360;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_3e0;
  pcStack_368 = FUN_106a7eb00;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar10 = puVar2;
  puStack_3a0 = unaff_x24;
  puStack_398 = unaff_x23;
  puStack_390 = puVar6;
  plStack_388 = plVar13;
  puStack_380 = puVar1;
  puStack_378 = puVar7;
  pppuStack_370 = &pppuStack_2f0;
  _objc_retain(puVar4);
  plVar13 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_3c0;
    func_0x00010002b838(auStack_3c0,puVar1);
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    func_0x00010007e1e8(&uStack_3e0,auStack_3c0,&lStack_3a8,1);
    puVar3 = &UNK_110959888;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959888,&uStack_3e0,puVar2);
    puStack_3c8 = (undefined1 *)&uStack_3e0;
    func_0x00010007e5dc(&puStack_3c8);
    puVar10 = puVar8;
    puVar11 = puVar2;
    puVar6 = &uStack_3e0;
    if (cStack_3a9 < '\0') {
      __ZdlPv(auStack_3c0[0]);
      puVar10 = puVar8;
      puVar11 = puVar2;
      puVar6 = &uStack_3e0;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_3e8 = FUN_106a7ec74;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar2 = puVar10;
  puVar8 = puVar11;
  puStack_420 = unaff_x24;
  puStack_418 = unaff_x23;
  puStack_410 = puVar6;
  plStack_408 = plVar13;
  puStack_400 = puVar1;
  puStack_3f8 = puVar4;
  pppuStack_3f0 = &pppuStack_370;
  _objc_retain(puVar3);
  _objc_retain(puVar10);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_458;
    func_0x00010002b838(auStack_458,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar2 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_440,puVar2);
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 0;
    func_0x00010007e1e8(&uStack_478,auStack_458,&lStack_428,2);
    puVar7 = &UNK_1109598d8;
    unaff_x23 = &uStack_478;
    puVar2 = &uStack_478;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109598d8,puVar2,puVar11);
    puStack_460 = unaff_x23;
    func_0x00010007e5dc(&puStack_460);
    lVar12 = 0;
    puVar6 = auStack_458;
    puVar8 = puVar11;
    do {
      if ((&cStack_429)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar10);
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_441 < '\0') {
    __ZdlPv(auStack_458[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar3);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_488 = FUN_106a7eea4;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar2;
  puVar11 = puVar8;
  puStack_4c0 = unaff_x24;
  puStack_4b8 = unaff_x23;
  puStack_4b0 = puVar6;
  puStack_4a8 = puVar1;
  puStack_4a0 = puVar10;
  puStack_498 = puVar3;
  pppuStack_490 = &pppuStack_3f0;
  _objc_retain(puVar7);
  _objc_retain(puVar2);
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_4f8,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar6 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_4e0,puVar6);
    uStack_518 = 0;
    uStack_510 = 0;
    uStack_508 = 0;
    func_0x00010007e1e8(&uStack_518,auStack_4f8,&lStack_4c8,2);
    puVar4 = &UNK_110959928;
    puVar9 = &uStack_518;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959928,puVar9,puVar8);
    puStack_500 = &uStack_518;
    func_0x00010007e5dc(&puStack_500);
    lVar12 = 0;
    puVar11 = puVar8;
    do {
      if ((&cStack_4c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_4e1 < '\0') {
    __ZdlPv(auStack_4f8[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar7);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar11);
  _objc_retain(puVar9);
  _objc_retain(puVar1);
  func_0x00010c0b5ac0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  FUN_106a7f1bc(puVar1,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  puVar1 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar9);
  puVar7 = puVar1;
  func_0x00010c22b9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106a7e244; end: 106a7e3b7;  */

void FUN_106a7e244(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined *puStack_408;
  undefined8 *puStack_400;
  undefined *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1109596f8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109596f8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_106a7e3b8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar5;
  puVar10 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar9 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_110959748;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110959748,puVar3,param_4);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar13 = 0;
    puVar9 = auStack_f8;
    puVar10 = param_4;
    do {
      if ((&cStack_c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_106a7e5e8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar8 = puVar3;
  puVar11 = puVar10;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar9;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar6);
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_180,puVar5);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar7 = &UNK_110959798;
    unaff_x23 = &uStack_1b8;
    puVar8 = &uStack_1b8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110959798,puVar8,puVar10);
    puStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1a0);
    lVar13 = 0;
    puVar5 = auStack_198;
    puVar11 = puVar10;
    do {
      if ((&cStack_169)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_240;
  pcStack_1c8 = FUN_106a7e818;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar9 = puVar8;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar5;
  puStack_1e8 = puVar1;
  puStack_1e0 = puVar3;
  puStack_1d8 = puVar6;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar7);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_220;
    func_0x00010002b838(auStack_220,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
    puVar2 = &UNK_1109597e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109597e8,&uStack_240,puVar8);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    puVar9 = puVar10;
    puVar11 = puVar8;
    puVar5 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar9 = puVar10;
      puVar11 = puVar8;
      puVar5 = &uStack_240;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_2c0;
  pcStack_248 = FUN_106a7e98c;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar3 = puVar9;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar5;
  plStack_268 = plVar12;
  puStack_260 = puVar1;
  puStack_258 = puVar7;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(puVar2);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_2a0;
    func_0x00010002b838(auStack_2a0,puVar1);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_288,1);
    puVar6 = &UNK_110959838;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110959838,&uStack_2c0,puVar9);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    puVar3 = puVar10;
    puVar11 = puVar9;
    puVar5 = &uStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar3 = puVar10;
      puVar11 = puVar9;
      puVar5 = &uStack_2c0;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_340;
  pcStack_2c8 = FUN_106a7eb00;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar9 = puVar3;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar5;
  plStack_2e8 = plVar12;
  puStack_2e0 = puVar1;
  puStack_2d8 = puVar2;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(puVar6);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_320;
    func_0x00010002b838(auStack_320,puVar1);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_308,1);
    puVar7 = &UNK_110959888;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110959888,&uStack_340,puVar3);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x00010007e5dc(&puStack_328);
    puVar9 = puVar10;
    puVar11 = puVar3;
    puVar5 = &uStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar9 = puVar10;
      puVar11 = puVar3;
      puVar5 = &uStack_340;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_348 = FUN_106a7ec74;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar3 = puVar9;
  puVar10 = puVar11;
  puStack_380 = unaff_x24;
  puStack_378 = unaff_x23;
  puStack_370 = puVar5;
  plStack_368 = plVar12;
  puStack_360 = puVar1;
  puStack_358 = puVar6;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(puVar7);
  _objc_retain(puVar9);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_3b8;
    func_0x00010002b838(auStack_3b8,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar5 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_3a0,puVar5);
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    func_0x00010007e1e8(&uStack_3d8,auStack_3b8,&lStack_388,2);
    puVar2 = &UNK_1109598d8;
    unaff_x23 = &uStack_3d8;
    puVar3 = &uStack_3d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109598d8,puVar3,puVar11);
    puStack_3c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_3c0);
    lVar13 = 0;
    puVar5 = auStack_3b8;
    puVar10 = puVar11;
    do {
      if ((&cStack_389)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_3a1 < '\0') {
    __ZdlPv(auStack_3b8[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_3e8 = FUN_106a7eea4;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar8 = puVar3;
  puVar11 = puVar10;
  puStack_420 = unaff_x24;
  puStack_418 = unaff_x23;
  puStack_410 = puVar5;
  puStack_408 = puVar1;
  puStack_400 = puVar9;
  puStack_3f8 = puVar7;
  pppuStack_3f0 = &pppuStack_350;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_458,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_440,puVar5);
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 0;
    func_0x00010007e1e8(&uStack_478,auStack_458,&lStack_428,2);
    puVar6 = &UNK_110959928;
    puVar8 = &uStack_478;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110959928,puVar8,puVar10);
    puStack_460 = &uStack_478;
    func_0x00010007e5dc(&puStack_460);
    lVar13 = 0;
    puVar11 = puVar10;
    do {
      if ((&cStack_429)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_441 < '\0') {
    __ZdlPv(auStack_458[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar11);
  _objc_retain(puVar8);
  _objc_retain(puVar1);
  func_0x00010c0b5ac0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106a7f1bc(puVar1,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar6);
  puVar1 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar8);
  puVar6 = puVar1;
  func_0x00010c22b9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106a7e3b8; end: 106a7e5e7;  */

void FUN_106a7e3b8(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined *puStack_388;
  undefined8 *puStack_380;
  undefined *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110959748;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959748,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar5 = auStack_78;
    puVar9 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106a7e5e8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puVar11 = puVar9;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3ab4b5;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_110959798;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959798,puVar8,puVar9);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar12 = 0;
    puVar5 = auStack_118;
    puVar11 = puVar9;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  puVar10 = &uStack_1c0;
  pcStack_148 = FUN_106a7e818;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  plVar13 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_1a0;
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar4 = &UNK_1109597e8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109597e8,&uStack_1c0,puVar8);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    puVar9 = puVar10;
    puVar11 = puVar8;
    puVar5 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar9 = puVar10;
      puVar11 = puVar8;
      puVar5 = &uStack_1c0;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_240;
  pcStack_1c8 = FUN_106a7e98c;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar2 = puVar9;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar5;
  plStack_1e8 = plVar13;
  puStack_1e0 = puVar1;
  puStack_1d8 = puVar7;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(puVar4);
  plVar13 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_220;
    func_0x00010002b838(auStack_220,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
    puVar3 = &UNK_110959838;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959838,&uStack_240,puVar9);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    puVar2 = puVar8;
    puVar11 = puVar9;
    puVar5 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar2 = puVar8;
      puVar11 = puVar9;
      puVar5 = &uStack_240;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_2c0;
  pcStack_248 = FUN_106a7eb00;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar9 = puVar2;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar5;
  plStack_268 = plVar13;
  puStack_260 = puVar1;
  puStack_258 = puVar4;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(puVar3);
  plVar13 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_2a0;
    func_0x00010002b838(auStack_2a0,puVar1);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_288,1);
    puVar7 = &UNK_110959888;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959888,&uStack_2c0,puVar2);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    puVar9 = puVar8;
    puVar11 = puVar2;
    puVar5 = &uStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar9 = puVar8;
      puVar11 = puVar2;
      puVar5 = &uStack_2c0;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_2c8 = FUN_106a7ec74;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar2 = puVar9;
  puVar8 = puVar11;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar5;
  plStack_2e8 = plVar13;
  puStack_2e0 = puVar1;
  puStack_2d8 = puVar3;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(puVar7);
  _objc_retain(puVar9);
  puVar5 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_338;
    func_0x00010002b838(auStack_338,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_320,puVar2);
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x00010007e1e8(&uStack_358,auStack_338,&lStack_308,2);
    puVar4 = &UNK_1109598d8;
    unaff_x23 = &uStack_358;
    puVar2 = &uStack_358;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109598d8,puVar2,puVar11);
    puStack_340 = unaff_x23;
    func_0x00010007e5dc(&puStack_340);
    lVar12 = 0;
    puVar5 = auStack_338;
    puVar8 = puVar11;
    do {
      if ((&cStack_309)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_321 < '\0') {
    __ZdlPv(auStack_338[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_368 = FUN_106a7eea4;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar11 = puVar2;
  puVar10 = puVar8;
  puStack_3a0 = unaff_x24;
  puStack_398 = unaff_x23;
  puStack_390 = puVar5;
  puStack_388 = puVar1;
  puStack_380 = puVar9;
  puStack_378 = puVar7;
  pppuStack_370 = &pppuStack_2d0;
  _objc_retain(puVar4);
  _objc_retain(puVar2);
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_3d8,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_3c0,puVar5);
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    func_0x00010007e1e8(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
    puVar3 = &UNK_110959928;
    puVar11 = &uStack_3f8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959928,puVar11,puVar8);
    puStack_3e0 = &uStack_3f8;
    func_0x00010007e5dc(&puStack_3e0);
    lVar12 = 0;
    puVar10 = puVar8;
    do {
      if ((&cStack_3a9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_3c1 < '\0') {
    __ZdlPv(auStack_3d8[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  _objc_retain(puVar1);
  func_0x00010c0b5ac0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  FUN_106a7f1bc(puVar1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  puVar1 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar11);
  puVar3 = puVar1;
  func_0x00010c22b9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106a7e5e8; end: 106a7e817;  */

void FUN_106a7e5e8(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar6 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110959798;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959798,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar6 = auStack_78;
    puVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar9 = &uStack_120;
  pcStack_a8 = FUN_106a7e818;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar6;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar13 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3ab4b5;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar7 = &UNK_1109597e8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109597e8,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar8 = puVar9;
    puVar10 = puVar2;
    puVar6 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar8 = puVar9;
      puVar10 = puVar2;
      puVar6 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar9 = &uStack_1a0;
  pcStack_128 = FUN_106a7e98c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar2 = puVar8;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar6;
  plStack_148 = plVar13;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar7);
  plVar13 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_180;
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar4 = &UNK_110959838;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959838,&uStack_1a0,puVar8);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar2 = puVar9;
    puVar10 = puVar8;
    puVar6 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar2 = puVar9;
      puVar10 = puVar8;
      puVar6 = &uStack_1a0;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_220;
  pcStack_1a8 = FUN_106a7eb00;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar8 = puVar2;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar6;
  plStack_1c8 = plVar13;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar7;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar4);
  plVar13 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_200;
    func_0x00010002b838(auStack_200,puVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar3 = &UNK_110959888;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959888,&uStack_220,puVar2);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    puVar8 = puVar9;
    puVar10 = puVar2;
    puVar6 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar8 = puVar9;
      puVar10 = puVar2;
      puVar6 = &uStack_220;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_228 = FUN_106a7ec74;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar2 = puVar8;
  puVar9 = puVar10;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar6;
  plStack_248 = plVar13;
  puStack_240 = puVar1;
  puStack_238 = puVar4;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar3);
  _objc_retain(puVar8);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_298;
    func_0x00010002b838(auStack_298,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_280,puVar2);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x00010007e1e8(&uStack_2b8,auStack_298,&lStack_268,2);
    puVar7 = &UNK_1109598d8;
    unaff_x23 = &uStack_2b8;
    puVar2 = &uStack_2b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109598d8,puVar2,puVar10);
    puStack_2a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2a0);
    lVar12 = 0;
    puVar6 = auStack_298;
    puVar9 = puVar10;
    do {
      if ((&cStack_269)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar3);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_2c8 = FUN_106a7eea4;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar10 = puVar2;
  puVar11 = puVar9;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar6;
  puStack_2e8 = puVar1;
  puStack_2e0 = puVar8;
  puStack_2d8 = puVar3;
  pppuStack_2d0 = &pppuStack_230;
  _objc_retain(puVar7);
  _objc_retain(puVar2);
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_338,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar6 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_320,puVar6);
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x00010007e1e8(&uStack_358,auStack_338,&lStack_308,2);
    puVar4 = &UNK_110959928;
    puVar10 = &uStack_358;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110959928,puVar10,puVar9);
    puStack_340 = &uStack_358;
    func_0x00010007e5dc(&puStack_340);
    lVar12 = 0;
    puVar11 = puVar9;
    do {
      if ((&cStack_309)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_321 < '\0') {
    __ZdlPv(auStack_338[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar7);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar11);
  _objc_retain(puVar10);
  _objc_retain(puVar1);
  func_0x00010c0b5ac0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  FUN_106a7f1bc(puVar1,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  puVar1 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar10);
  puVar7 = puVar1;
  func_0x00010c22b9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106a7e818; end: 106a7e98b;  */

void FUN_106a7e818(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1109597e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109597e8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_106a7e98c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_e0;
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar7 = &UNK_110959838;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110959838,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar3 = puVar8;
    param_4 = puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar3 = puVar8;
      param_4 = puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar8 = &uStack_180;
  pcStack_108 = FUN_106a7eb00;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar5 = puVar3;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar7);
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_160;
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110959888;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110959888,&uStack_180,puVar3);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar5 = puVar8;
    param_4 = puVar3;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar5 = puVar8;
      param_4 = puVar3;
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  pcStack_188 = FUN_106a7ec74;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar5;
  puVar10 = param_4;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar8 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_1f8;
    func_0x00010002b838(auStack_1f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_1e0,puVar3);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
    puVar7 = &UNK_1109598d8;
    unaff_x23 = &uStack_218;
    puVar3 = &uStack_218;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109598d8,puVar3,param_4);
    puStack_200 = unaff_x23;
    func_0x00010007e5dc(&puStack_200);
    lVar13 = 0;
    puVar8 = auStack_1f8;
    puVar10 = param_4;
    do {
      if ((&cStack_1c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_228 = FUN_106a7eea4;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puVar9 = puVar3;
  puVar11 = puVar10;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar8;
  puStack_248 = puVar2;
  puStack_240 = puVar5;
  puStack_238 = puVar1;
  pppuStack_230 = &pppuStack_190;
  _objc_retain(puVar7);
  _objc_retain(puVar3);
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_298,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_280,puVar5);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x00010007e1e8(&uStack_2b8,auStack_298,&lStack_268,2);
    puVar6 = &UNK_110959928;
    puVar9 = &uStack_2b8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110959928,puVar9,puVar10);
    puStack_2a0 = &uStack_2b8;
    func_0x00010007e5dc(&puStack_2a0);
    lVar13 = 0;
    puVar11 = puVar10;
    do {
      if ((&cStack_269)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar7);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar11);
  _objc_retain(puVar9);
  _objc_retain(puVar1);
  func_0x00010c0b5ac0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106a7f1bc(puVar1,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar6);
  puVar1 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar9);
  puVar7 = puVar1;
  func_0x00010c22b9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106a7e98c; end: 106a7eaff;  */

void FUN_106a7e98c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110959838;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110959838,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_106a7eb00;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar5 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_e0;
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar7 = &UNK_110959888;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110959888,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar5 = puVar8;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar5 = puVar8;
      param_4 = puVar3;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_106a7ec74;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar3 = puVar5;
  puVar10 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar7);
  _objc_retain(puVar5);
  puVar8 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_160,puVar3);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&uStack_198,auStack_178,&lStack_148,2);
    puVar1 = &UNK_1109598d8;
    unaff_x23 = &uStack_198;
    puVar3 = &uStack_198;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109598d8,puVar3,param_4);
    puStack_180 = unaff_x23;
    func_0x00010007e5dc(&puStack_180);
    lVar13 = 0;
    puVar8 = auStack_178;
    puVar10 = param_4;
    do {
      if ((&cStack_149)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar7);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_1a8 = FUN_106a7eea4;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar9 = puVar3;
  puVar11 = puVar10;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar8;
  puStack_1c8 = puVar2;
  puStack_1c0 = puVar5;
  puStack_1b8 = puVar7;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(puVar1);
  _objc_retain(puVar3);
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_218,puVar2);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_200,puVar5);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    puVar6 = &UNK_110959928;
    puVar9 = &uStack_238;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110959928,puVar9,puVar10);
    puStack_220 = &uStack_238;
    func_0x00010007e5dc(&puStack_220);
    lVar13 = 0;
    puVar11 = puVar10;
    do {
      if ((&cStack_1e9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar3);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  __Unwind_Resume(puVar2);
  _objc_retain(puVar11);
  _objc_retain(puVar9);
  _objc_retain(puVar2);
  func_0x00010c0b5ac0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  FUN_106a7f1bc(puVar2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar6);
  puVar2 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar9);
  puVar7 = puVar2;
  func_0x00010c22b9e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106a7eb00; end: 106a7ec73;  */

void FUN_106a7eb00(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110959888;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110959888,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_106a7ec74;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar5;
  puVar9 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar13 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3ab4b5;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar7 = &UNK_1109598d8;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109598d8,puVar3,param_4);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar12 = 0;
    puVar13 = auStack_f8;
    puVar9 = param_4;
    do {
      if ((&cStack_c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_106a7eea4;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puVar8 = puVar3;
  puVar10 = puVar9;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar13;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar7);
  _objc_retain(puVar3);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_198,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_180,puVar5);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar6 = &UNK_110959928;
    puVar8 = &uStack_1b8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110959928,puVar8,puVar9);
    puStack_1a0 = &uStack_1b8;
    func_0x00010007e5dc(&puStack_1a0);
    lVar12 = 0;
    puVar10 = puVar9;
    do {
      if ((&cStack_169)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar7);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar10);
  _objc_retain(puVar8);
  _objc_retain(puVar1);
  func_0x00010c0b5ac0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106a7f1bc(puVar1,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar6);
  puVar1 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar8);
  puVar7 = puVar1;
  func_0x00010c22b9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106a7ec74; end: 106a7eea3;  */

void FUN_106a7ec74(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  uVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1109598d8;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109598d8,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar10 = 0;
    puVar5 = auStack_78;
    uVar8 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106a7eea4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  uVar9 = uVar8;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3ab4b5;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar6 = &UNK_110959928;
    puVar7 = &uStack_138;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110959928,puVar7,uVar8);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar10 = 0;
    uVar9 = uVar8;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume(puVar3);
  _objc_retain(uVar9);
  _objc_retain(puVar7);
  _objc_retain(puVar3);
  func_0x00010c0b5ac0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  FUN_106a7f1bc(puVar3,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar6);
  puVar3 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar7);
  puVar6 = puVar3;
  func_0x00010c22b9e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106a7eea4; end: 106a7f0d3;  */

void FUN_106a7eea4(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  uVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3ab4b5;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3ab4b5;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110959928;
    puVar2 = &uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110959928,puVar2,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar6 = 0;
    uVar5 = param_4;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(puVar3);
  _objc_retain(uVar5);
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  func_0x00010c0b5ac0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_106a7f1bc(puVar3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(puVar2);
  puVar3 = puVar1;
  func_0x00010c22b9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106a7f0d4; end: 106a7f1bb;  */

void FUN_106a7f0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010c0b5ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_106a7f1bc(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010c22b9e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106a7f1bc; end: 106a7f24b;  */

void FUN_106a7f1bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ba528;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010bfef8e0();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ba528;
  _objc_alloc(PTR_PTR_1126ba528);
  func_0x00010c033a00();
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a7f24c; end: 106a7f677; -[SCSpotlightOperaPresenterImpl initWithStoriesPluginCreator:storiesManagementPluginCreator:otherSharedPluginsCreator:spotlightManagementPlaybackDataProvider:circumstanceEngine:spotlightConfigProvider:storiesConfigProvider:networkRequester:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:adConfigProvider:snapchattersDataFetcher:operaSessionScopeExposer:operaSessionScopeServices:spotlightScopeExposer:networkConnectivityMonitor:locationProvider:adRenderDataParser:spotlightScopeServices:] */

undefined8 *
FUN_106a7f24c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126f4850;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_21;
    _objc_release(uVar2);
  }
  _objc_release(param_21);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106a7f678; end: 106a7fb5f; -[SCSpotlightOperaPresenterImpl presentTopic:displayName:topicStories:startingIndexPath:presentingViewController:viewLocation:baseView:pageSessionId:topicStoryType:] */

void FUN_106a7f678(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  uVar3 = param_7;
  func_0x00010c142240();
  uVar4 = param_6;
  func_0x00010bf529e0();
  if (uVar3 < uVar4) {
    uVar3 = param_6;
    func_0x00010050471c(param_6,&PTR___NSConcreteGlobalBlock_110959bb8,
                        &PTR___NSConcreteGlobalBlock_110959bf8);
    puVar5 = PTR_PTR_1126d0038;
    _objc_alloc();
    func_0x00010c054540();
    uVar13 = *(undefined8 *)(param_2 + 0x20);
    *(undefined **)(param_2 + 0x20) = puVar5;
    _objc_release(uVar13);
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_2 + 0x30);
    (**(code **)(lVar6 + 0x10))
              (lVar6,*(undefined8 *)(param_2 + 0x20),(long)(param_1 * 1000.0),param_9,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_2 + 8);
    *(long *)(param_2 + 8) = lVar6;
    _objc_release(uVar13);
    lVar7 = *(long *)(param_2 + 0x40);
    (**(code **)(lVar7 + 0x10))(lVar7,param_9,param_7,param_11,param_12);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010c0d3c80();
    _objc_release(lVar7);
    func_0x00010c066b00(lVar6);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain();
    func_0x00010bf97e80(param_6);
    func_0x00010c142240(param_7);
    puVar9 = puVar8;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)(param_2 + 0xc0) = 0;
    iVar2 = (int)*(undefined8 *)(param_2 + 0x48);
    func_0x0001005929c0();
    if (iVar2 == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 0x10) = 0;
      _objc_release(uVar13);
    }
    else {
      *(undefined8 *)(param_2 + 0xc0) = 1;
      puVar10 = PTR_PTR_1126cc5b0;
      _objc_alloc();
      func_0x00010bff71e0();
      uVar13 = *(undefined8 *)(param_2 + 0x10);
      *(undefined **)(param_2 + 0x10) = puVar10;
      _objc_release(uVar13);
      func_0x00010c21db00(*(undefined8 *)(param_2 + 0x10));
      uVar13 = param_8;
      func_0x00010c29bf00(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f50c0(*(undefined8 *)(param_2 + 0x10));
      _objc_release(uVar13);
      func_0x00010befa120(lVar6);
    }
    uVar1 = (undefined1)*(undefined8 *)(param_2 + 0x10);
    func_0x00010c07ef00();
    *(undefined1 *)(param_2 + 0xf0) = uVar1;
    _objc_storeWeak(param_2 + 0xe0,param_8);
    *(undefined8 *)(param_2 + 0xe8) = param_12;
    puVar10 = PTR_PTR_1126b2400;
    _objc_alloc();
    func_0x00010c018aa0(0);
    lVar7 = *(long *)(param_2 + 0xa8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      func_0x00010bddf8a0(param_2);
    }
    puVar11 = PTR_PTR_1126b23f0;
    _objc_alloc(PTR_PTR_1126b23f0);
    func_0x000108534aa8(param_9);
    func_0x00010c011ae0(puVar11);
    uVar13 = *(undefined8 *)(param_2 + 0xb0);
    puVar12 = PTR_PTR_1126b23f8;
    _objc_alloc(PTR_PTR_1126b23f8);
    func_0x00010c0087a0();
    lVar7 = lVar6;
    func_0x00010bf51e00();
    func_0x00010bf23920(uVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(puVar12);
    func_0x00010bf9d620(*(undefined8 *)(param_2 + 0xa8));
    _objc_release(uVar13);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar8);
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a7fb60; end: 106a7fb67;  */

void FUN_106a7fb60(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2756b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_topicStoryId_11267afd0);
  return;
}



/* Entry: 106a7fb68; end: 106a7fb8f;  */

void FUN_106a7fb68(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106a7fb90; end: 106a7fc2f;  */

void FUN_106a7fb90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b4d28;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2756a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c04dcc0(puVar1);
  _objc_release(uVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a7fc30; end: 106a7fd8f; -[SCSpotlightOperaPresenterImpl updateTopicStories:] */

void FUN_106a7fc30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = param_3;
    func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_110959c48,
                        &PTR___NSConcreteGlobalBlock_110959c68);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106a7fdc0;
    puStack_60 = &UNK_110959c18;
    _objc_retain();
    puStack_58 = puVar4;
    func_0x00010bf97e80(param_3);
    func_0x00010c288820(*(undefined8 *)(param_1 + 0x20));
    _objc_initWeak(auStack_80,param_1);
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106a7fe60;
    puStack_98 = &UNK_110841fb0;
    _objc_copyWeak(auStack_88,auStack_80);
    puStack_90 = puVar4;
    _objc_retain(puVar4);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_b0);
    _objc_release(puStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puStack_58);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106a7fd90; end: 106a7fd97;  */

void FUN_106a7fd90(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2756b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_topicStoryId_11267afd0);
  return;
}



/* Entry: 106a7fd98; end: 106a7fdbf;  */

void FUN_106a7fd98(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106a7fdc0; end: 106a7fe5f;  */

void FUN_106a7fdc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b4d28;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2756a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c04dcc0(puVar1);
  _objc_release(uVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a7fe60; end: 106a7fe93;  */

void FUN_106a7fe60(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedd620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a7fe94; end: 106a7fedb; -[SCSpotlightOperaPresenterImpl _updatePlaylistGroupDataModel:] */

void FUN_106a7fe94(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2889e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a7fedc; end: 106a802cb; -[SCSpotlightOperaPresenterImpl presentSpotlightManagementWithStoryId:presentingViewController:baseView:playbackCompletion:] */

void FUN_106a7fedc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_2 + 0xf0) = 0;
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uStack_78 = param_7;
  _objc_retain(param_7);
  uStack_80 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c26f3c0(puVar6);
  lVar2 = *(long *)(param_2 + 0x40);
  (**(code **)(lVar2 + 0x10))(lVar2,0x54,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d3c80();
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  lVar2 = *(long *)(param_2 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4,(long)(param_1 * 1000.0),0x54,1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = *(undefined8 *)(param_2 + 8);
  *(long *)(param_2 + 8) = lVar2;
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010befa120(lVar3);
  lVar2 = *(long *)(param_2 + 0x38);
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lStack_88 = lVar2;
  func_0x00010befa120(lVar3);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x48);
  func_0x0001005929c0();
  if (iVar1 != 0) {
    puVar6 = PTR_PTR_1126cc5b0;
    _objc_alloc(PTR_PTR_1126cc5b0);
    uStack_a8 = *(undefined8 *)(param_2 + 0x58);
    puStack_b0 = *(undefined **)(param_2 + 0x50);
    uStack_a0 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010bff71e0();
    func_0x00010befa120(lVar3);
    _objc_release(puVar6);
  }
  puVar6 = PTR_PTR_1126b4d28;
  _objc_alloc();
  func_0x00010c04dcc0();
  puVar7 = PTR_PTR_1126b2400;
  _objc_alloc();
  puStack_b0 = (undefined *)(((ulong)puStack_b0 >> 0x18 & 0xff) << 0x18);
  func_0x00010c018aa0(0);
  lVar2 = *(long *)(param_2 + 0xa8);
  puStack_90 = puVar7;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010bddf8a0(param_2);
  }
  puVar8 = PTR_PTR_1126b23f0;
  _objc_alloc(PTR_PTR_1126b23f0);
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = 0x13c;
  puStack_b0 = puVar7;
  func_0x00010c011ae0(puVar8);
  _objc_release(puVar7);
  uVar18 = *(undefined8 *)(param_2 + 0xb0);
  puVar9 = PTR_PTR_1126b23f8;
  _objc_alloc();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0087a0();
  lVar2 = lVar3;
  func_0x00010bf51e00();
  uVar4 = uStack_80;
  puVar7 = puStack_90;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uVar15 = param_5;
  uVar16 = uStack_80;
  puVar17 = puVar9;
  puStack_b0 = (undefined *)lVar2;
  puStack_98 = puVar6;
  func_0x00010bf23920(uVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(lVar2);
  _objc_release(puVar9);
  _objc_release(puVar10);
  uVar14 = uVar18;
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0xa8));
  uVar5 = uStack_78;
  uVar11 = uStack_78;
  _objc_retainBlock();
  _objc_release(uVar5);
  uVar12 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = uVar11;
  _objc_release(uVar12);
  _objc_release(uVar18);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puStack_98);
  _objc_release(lStack_88);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uStack_e0 = uVar5;
  uStack_d8 = uVar4;
  pcStack_b8 = FUN_106a802cc;
  puStack_f0 = puVar9;
  uStack_e8 = param_5;
  uStack_d0 = uVar11;
  lStack_c8 = param_2;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar14);
  _objc_retain(uVar15);
  _objc_retain(puVar17);
  *(undefined1 *)(lVar3 + 0xf0) = 0;
  _objc_initWeak(auStack_f8,lVar3);
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_106a80408;
  puStack_120 = &UNK_110959c88;
  _objc_copyWeak(auStack_108,auStack_f8);
  _objc_retain(uVar15);
  uStack_118 = uVar15;
  _objc_retain(puVar17);
  ppuVar13 = &puStack_138;
  puStack_110 = puVar17;
  uStack_100 = uVar16;
  _objc_retainBlock(ppuVar13);
  func_0x00010be13ee0(lVar3);
  _objc_release(ppuVar13);
  _objc_release(puStack_110);
  _objc_release(uStack_118);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_f8);
  _objc_release(puVar17);
  _objc_release(uVar15);
  _objc_release(uVar14);
  return;
}



/* Entry: 106a802cc; end: 106a80407; -[SCSpotlightOperaPresenterImpl presentSingleSpotlightSnapWithSnapId:presentingViewController:sourcePage:playbackCompletion:] */

void FUN_106a802cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  *(undefined1 *)(param_1 + 0xf0) = 0;
  _objc_initWeak(auStack_48,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106a80408;
  puStack_70 = &UNK_110959c88;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_68 = param_4;
  _objc_retain(param_6);
  ppuVar1 = &puStack_88;
  uStack_60 = param_6;
  uStack_50 = param_5;
  _objc_retainBlock(ppuVar1);
  func_0x00010be13ee0(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a80408; end: 106a80493;  */

void FUN_106a80408(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  if (param_2 == 0) {
    func_0x00010bebb3e0(lVar1);
    _objc_release(lVar1);
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
  }
  else {
    func_0x00010be7e940(lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a80494; end: 106a805fb; -[SCSpotlightOperaPresenterImpl presentSpotlightSnapWithSnapId:presentingViewController:sourcePage:startTimeMs:playbackCompletion:] */

void FUN_106a80494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106a805fc;
  puStack_88 = &UNK_110959cb8;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  uStack_80 = param_4;
  _objc_retain(param_7);
  uStack_70 = param_7;
  uStack_60 = param_5;
  _objc_retain(param_6);
  uStack_78 = param_6;
  _objc_retainBlock(&puStack_a0);
  func_0x00010be13ee0(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_78);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a805fc; end: 106a80687;  */

void FUN_106a805fc(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  if (param_2 == 0) {
    func_0x00010bebb3e0(lVar1);
    _objc_release(lVar1);
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    }
  }
  else {
    func_0x00010be7e9c0(lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a80688; end: 106a806b3; -[SCSpotlightOperaPresenterImpl operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_106a80688(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + 0x18,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be3d050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__installUseSoundStripIfNeeded_11256cdb0);
  return;
}



/* Entry: 106a806b4; end: 106a806b7; -[SCSpotlightOperaPresenterImpl operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_106a806b4(void)

{
  return;
}



/* Entry: 106a806b8; end: 106a80847; -[SCSpotlightOperaPresenterImpl operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_106a806b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  func_0x00010bea9e60(param_1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  _objc_release();
  if (param_3 == lVar1) {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010bfb8fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf5ed60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126d0040;
    _objc_opt_class(PTR_PTR_1126d0040);
    uVar2 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    if (uVar3 != 0) {
      func_0x00010c2589c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      func_0x00010c0bdf40(uVar4);
      _objc_release(param_3);
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a80848; end: 106a80853;  */

void FUN_106a80848(void)

{
  return;
}



/* Entry: 106a80854; end: 106a80927;  */

void FUN_106a80854(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar3 = lVar3 + 0xf8;
  _objc_loadWeakRetained(lVar3);
  uVar1 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5f00(lVar3);
  _objc_release(uVar1);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x20) + 0xf8;
  _objc_loadWeakRetained(lVar3);
  uVar1 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar3;
  func_0x00010bf163e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar3);
  func_0x00010c283ba0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106a80928; end: 106a80937;  */

void FUN_106a80928(void)

{
  return;
}



/* Entry: 106a80938; end: 106a8093f; -[SCSpotlightOperaPresenterImpl operaPresenterDidCancelDismissing:] */

void FUN_106a80938(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea9e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUseSoundStripHidden__112588140,0);
  return;
}



/* Entry: 106a80940; end: 106a80943; -[SCSpotlightOperaPresenterImpl operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_106a80940(void)

{
  return;
}



/* Entry: 106a80944; end: 106a80947; -[SCSpotlightOperaPresenterImpl operaPresenterDidFailToPresent:] */

void FUN_106a80944(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8ddb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeUseSoundStrip_112581108);
  return;
}



/* Entry: 106a80948; end: 106a8094b; -[SCSpotlightOperaPresenterImpl operaPresenterDidFinishDismissing:] */

void FUN_106a80948(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8ddb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeUseSoundStrip_112581108);
  return;
}



/* Entry: 106a8094c; end: 106a8098f; -[SCSpotlightOperaPresenterImpl operaPresenterDidTearDown:] */

void FUN_106a8094c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bddf8a0();
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*(long *)(param_1 + 0x98) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106a80990; end: 106a80abb; -[SCSpotlightOperaPresenterImpl operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_106a80990(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  _objc_release(param_3);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126c2118;
  if (param_3 == param_1) {
    _objc_retain(param_4);
    _objc_opt_class(puVar2);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    if (uVar1 != 0) {
      func_0x00010c0bdf40(param_4);
      _objc_release(param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a80abc; end: 106a80ac7;  */

void FUN_106a80abc(void)

{
  return;
}



/* Entry: 106a80ac8; end: 106a80b37;  */

void FUN_106a80ac8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar2 = lVar2 + 0xf8;
  _objc_loadWeakRetained(lVar2);
  uVar1 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf729c0(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106a80b38; end: 106a80b47;  */

void FUN_106a80b38(void)

{
  return;
}



/* Entry: 106a80b48; end: 106a80b4b; -[SCSpotlightOperaPresenterImpl operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_106a80b48(void)

{
  return;
}



/* Entry: 106a80b4c; end: 106a80bcb; -[SCSpotlightOperaPresenterImpl _cleanupOpera] */

void FUN_106a80b4c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + 0x18,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  func_0x00010be8dda0(param_1);
  lVar2 = *(long *)(param_1 + 0xa8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xa8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106a80bcc; end: 106a8115b; -[SCSpotlightOperaPresenterImpl _installUseSoundStripIfNeeded] */

void FUN_106a80bcc(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
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
  double dVar30;
  double dVar31;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
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
  lVar2 = param_1;
  if ((*(char *)(param_1 + 0xf0) == '\x01') && (*(long *)(param_1 + 0xd8) == 0)) {
    lVar1 = param_1 + 0xe0;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      dVar31 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),dVar31,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      func_0x00010c219b60();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar3);
      _objc_release(puVar4);
      func_0x00010befbb60(lVar2);
      puVar5 = PTR_PTR_1126aec40;
      func_0x00010bf25ce0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20eaa0();
      uVar6 = *(undefined8 *)(param_1 + 0xe8);
      func_0x000107a6ecf0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(puVar5);
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + 0xe8);
      func_0x000107a6ed80(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9fc0(puVar5);
      _objc_release(uVar6);
      _objc_initWeak(auStack_c8,param_1);
      dVar30 = 1.60807493534087e-314;
      param_2 = auStack_c8;
      _objc_copyWeak(auStack_d0,param_2);
      func_0x00010c1d3960(puVar5);
      func_0x00010c219b60(puVar5);
      func_0x00010befbb60(puVar3);
      func_0x00010c148fc0(lVar2);
      func_0x000100594f4c();
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar7 = puVar3;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      puStack_c0 = puVar8;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar2;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar3;
      puStack_b8 = puVar11;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar2;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar12;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar3;
      puStack_b0 = puVar14;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010bf49420(dVar31 + dVar30);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar5;
      puStack_a8 = puVar16;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar3;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar17;
      func_0x00010bf493c0(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar5;
      puStack_a0 = puVar19;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar3;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar20;
      func_0x00010bf493c0(0xc030000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar5;
      puStack_98 = puVar22;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar23;
      func_0x00010bf49420(0x4046000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar5;
      puStack_90 = puVar24;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar3;
      func_0x00010c149040(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar27 = puVar26;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar28 = puVar25;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar29 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar28;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar4);
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
      _objc_release(lVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(lVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(lVar1);
      _objc_release(puVar7);
      uVar6 = *(undefined8 *)(param_1 + 0xd8);
      *(undefined **)(param_1 + 0xd8) = puVar3;
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_d0);
      _objc_destroyWeak(auStack_c8);
      _objc_release(puVar5);
    }
    _objc_release(lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  __Unwind_Resume(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setTypeStyle__112664568,0x16);
  return;
}



/* Entry: 106a8115c; end: 106a81167;  */

void FUN_106a8115c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setTypeStyle__112664568,0x16);
  return;
}


