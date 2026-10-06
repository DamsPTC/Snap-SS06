/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066588f4; end: 106658907; -[SCImpalaStoryPlayerPresenter _setBaseView:] */

void FUN_1066588f4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
    return;
  }
  return;
}



/* Entry: 106658908; end: 1066589bf; -[SCImpalaStoryPlayerPresenter operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_106658908(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  func_0x00010c101480();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfecde0();
  _objc_release(param_5);
  _objc_release(param_3);
  if (uVar1 != 0x7fffffffffffffff) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (uVar1 < uVar2) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dfd40(uVar3,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c283ba0(param_1,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 1066589c0; end: 1066589f7; -[SCImpalaStoryPlayerPresenter _safeOperaPresenting] */

void FUN_1066589c0(long param_1)

{
  if (*(long *)(param_1 + 0x2c0) != 0) {
    _objc_loadWeakRetained(param_1 + 8);
    _objc_release();
  }
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066589f8; end: 106658a7b; -[SCImpalaStoryPlayerPresenter _loggingSourceLocationForContentViewSource:] */

undefined8 FUN_1066589f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 0x68) {
    if (param_3 < 0x3e) {
      if (param_3 == 9) {
        return 3;
      }
      if (param_3 == 0x1e) {
        return 1;
      }
    }
    else {
      if (param_3 == 0x3e) {
        return 2;
      }
      if (param_3 == 0x41) {
        return 4;
      }
      if (param_3 == 0x52) {
        return 5;
      }
    }
  }
  else if (((param_3 - 0x88U < 2) || (param_3 == 0x68)) || (param_3 == 0x6e)) {
    return 2;
  }
  return 0xc;
}



/* Entry: 106658a7c; end: 106658ab3; -[SCImpalaStoryPlayerPresenter _feedPageSectionForComposerFeedPageSection:] */

undefined8 FUN_106658a7c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010c067ec0();
  if (param_3 - 1U < 3) {
    uVar1 = *(undefined8 *)(&UNK_10dddd2c8 + (ulong)(param_3 - 1U) * 8);
  }
  else {
    uVar1 = 0x24;
  }
  return uVar1;
}



/* Entry: 106658ab4; end: 106658b0b; -[SCImpalaStoryPlayerPresenter removeContentForCreatorId:playlistItemController:] */

void FUN_106658ab4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106658b0c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106658b0c; end: 106658b17;  */

void FUN_106658b0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissWithAnimation__1125becd8,1);
  return;
}



/* Entry: 106658b18; end: 106658b63; -[SCImpalaStoryPlayerPresenter playbackPresenterDidTearDown:playbackScope:] */

void FUN_106658b18(long param_1)

{
  long lVar1;
  
  func_0x00010c0eaf20();
  lVar1 = *(long *)(param_1 + 0x380);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x380));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106658b64; end: 106658b67; -[SCImpalaStoryPlayerPresenter playbackPresenterWillBeginDismissing:transitionAnimator:playbackScope:] */

void FUN_106658b64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eb010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterWillBeginDismissin_112618618);
  return;
}



/* Entry: 106658b68; end: 106658b6b; -[SCImpalaStoryPlayerPresenter playbackPresenterDidCancelDismissing:playbackScope:] */

void FUN_106658b68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eadf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidCancelDismissin_112618590);
  return;
}



/* Entry: 106658b6c; end: 106658b6f; -[SCImpalaStoryPlayerPresenter playbackPresenterWillBeginAnimatingToDismiss:playbackScope:] */

void FUN_106658b6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eaff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterWillBeginAnimating_112618610);
  return;
}



/* Entry: 106658b70; end: 106658b73; -[SCImpalaStoryPlayerPresenter playbackPresenterDidFailToPresent:playbackScope:] */

void FUN_106658b70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidFailToPresent__1126185a8);
  return;
}



/* Entry: 106658b74; end: 106658b77; -[SCImpalaStoryPlayerPresenter playbackPresenterDidFinishDismissing:playbackScope:] */

void FUN_106658b74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidFinishDismissin_1126185b0);
  return;
}



/* Entry: 106658b78; end: 106658b7b; -[SCImpalaStoryPlayerPresenter playbackPresenter:didBeginPlayingStory:playbackScope:] */

void FUN_106658b78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ead70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenter_didBeginPlayingPl_112618570);
  return;
}



/* Entry: 106658b7c; end: 106658b7f; -[SCImpalaStoryPlayerPresenter playbackPresenter:didFinishPlayingStory:nextStory:playbackScope:] */

void FUN_106658b7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ead90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenter_didFinishViewingP_112618578);
  return;
}



/* Entry: 106658b80; end: 106658b83; -[SCImpalaStoryPlayerPresenter playbackPresenterDidFinishPresenting:transitionAnimator:playbackScope:] */

void FUN_106658b80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidFinishPresentin_1126185b8);
  return;
}



/* Entry: 106658b84; end: 106658b87; -[SCImpalaStoryPlayerPresenter playbackPresenterWillBeginPresenting:transitionAnimator:playbackScope:] */

void FUN_106658b84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eb030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterWillBeginPresentin_112618620);
  return;
}



/* Entry: 106658b88; end: 106658c37; -[SCImpalaStoryPlayerPresenter _setFeedPageSectionForSearchResultSection:contentViewSource:] */

undefined8 FUN_106658b88(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  if (param_3 < 0x12) {
    if (param_3 < 0xe) {
      if (param_3 == 3) {
        return 0x65;
      }
      if (param_3 == 0xd) {
        return 0x67;
      }
    }
    else {
      if (param_3 == 0xe) {
        return 0x6b;
      }
      if (param_3 == 0x11) {
        return 0x6c;
      }
    }
  }
  else if (param_3 < 0x24) {
    if (param_3 == 0x12) {
      return 0x66;
    }
    if (param_3 == 0x16) {
      return 0x69;
    }
  }
  else {
    if (param_3 == 0x24) {
      return 0x68;
    }
    if (param_3 == 0x25) {
      return 0x6a;
    }
    if (param_3 == 0x2f) {
      return 100;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0ed70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__feedPageSectionForSCAContentVie_1125614f8,param_4);
  return param_1;
}



/* Entry: 106658c38; end: 10665923b; -[SCImpalaStoryPlayerPresenter .cxx_destruct] */

void FUN_106658c38(long param_1)

{
  _objc_storeStrong(param_1 + 0x430,0);
  _objc_storeStrong(param_1 + 0x428,0);
  _objc_storeStrong(param_1 + 0x420,0);
  _objc_storeStrong(param_1 + 0x418,0);
  _objc_storeStrong(param_1 + 0x410,0);
  _objc_storeStrong(param_1 + 0x408,0);
  _objc_storeStrong(param_1 + 0x400,0);
  _objc_storeStrong(param_1 + 0x3f8,0);
  _objc_storeStrong(param_1 + 0x3f0,0);
  _objc_storeStrong(param_1 + 1000,0);
  _objc_storeStrong(param_1 + 0x3e0,0);
  _objc_storeStrong(param_1 + 0x3d8,0);
  _objc_storeStrong(param_1 + 0x3d0,0);
  _objc_storeStrong(param_1 + 0x3c8,0);
  _objc_storeStrong(param_1 + 0x3c0,0);
  _objc_storeStrong(param_1 + 0x3b8,0);
  _objc_storeStrong(param_1 + 0x3b0,0);
  _objc_storeStrong(param_1 + 0x3a8,0);
  _objc_storeStrong(param_1 + 0x3a0,0);
  _objc_destroyWeak(param_1 + 0x398);
  _objc_storeStrong(param_1 + 0x390,0);
  _objc_storeStrong(param_1 + 0x388,0);
  _objc_storeStrong(param_1 + 0x380,0);
  _objc_storeStrong(param_1 + 0x378,0);
  _objc_storeStrong(param_1 + 0x370,0);
  _objc_storeStrong(param_1 + 0x368,0);
  _objc_storeStrong(param_1 + 0x360,0);
  _objc_storeStrong(param_1 + 0x358,0);
  _objc_storeStrong(param_1 + 0x350,0);
  _objc_storeStrong(param_1 + 0x348,0);
  _objc_storeStrong(param_1 + 0x340,0);
  _objc_storeStrong(param_1 + 0x338,0);
  _objc_storeStrong(param_1 + 0x330,0);
  _objc_storeStrong(param_1 + 0x328,0);
  _objc_storeStrong(param_1 + 800,0);
  _objc_storeStrong(param_1 + 0x318,0);
  _objc_storeStrong(param_1 + 0x310,0);
  _objc_storeStrong(param_1 + 0x308,0);
  _objc_storeStrong(param_1 + 0x300,0);
  _objc_storeStrong(param_1 + 0x2f8,0);
  _objc_storeStrong(param_1 + 0x2f0,0);
  _objc_storeStrong(param_1 + 0x2e8,0);
  _objc_storeStrong(param_1 + 0x2e0,0);
  _objc_storeStrong(param_1 + 0x2d8,0);
  _objc_destroyWeak(param_1 + 0x2d0);
  _objc_storeStrong(param_1 + 0x2c0,0);
  _objc_storeStrong(param_1 + 0x2b8,0);
  _objc_storeStrong(param_1 + 0x2b0,0);
  _objc_storeStrong(param_1 + 0x2a8,0);
  _objc_storeStrong(param_1 + 0x2a0,0);
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
  _objc_storeStrong(param_1 + 0x248,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
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
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10665923c; end: 1066592b3; -[SCImpalaStoryPlayerPresenterCreatingFactoryImpl initWithCreationBlock:] */

undefined1 * FUN_10665923c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2350;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066592b4; end: 1066592db; -[SCImpalaStoryPlayerPresenterCreatingFactoryImpl impalaStoryPlayerPresenterCreatingService] */

void FUN_1066592b4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x10))();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066592dc; end: 1066592e7; -[SCImpalaStoryPlayerPresenterCreatingFactoryImpl .cxx_destruct] */

void FUN_1066592dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066592e8; end: 10665941f; -[SCImpalaStoryPlayerPresenterCreatingFactoryServiceProvider provide] */

void FUN_1066592e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126cc5e0;
  _objc_alloc();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c006720();
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cc5e8;
  _objc_alloc(PTR_PTR_1126cc5e8);
  func_0x00010c01d2c0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106659420; end: 106659487;  */

void FUN_106659420(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf31c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106659488; end: 1066595e7; -[SCImpalaStoryPlayerPresenterCreatingFactoryServiceProvider _createService] */

void FUN_106659488(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1066595e8;
  puStack_68 = &UNK_110931be8;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cc5f0;
  _objc_alloc(PTR_PTR_1126cc5f0);
  func_0x00010c01d2e0();
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066595e8; end: 106659667;  */

void FUN_1066595e8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bec4c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106659668; end: 106659967; -[SCImpalaStoryPlayerPresenterCreatingFactoryServiceProvider _storyPlayerCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106659668(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
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
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cc5f8;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11274cd1c;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11274cd20;
  _objc_loadWeakRetained();
  lVar6 = param_1 + _DAT_11274cd24;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11274cd28;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11274cd2c;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  FUN_1066599a8();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11274cd30;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bdf2160();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_11274cd34;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274cd38;
  _objc_loadWeakRetained();
  lVar19 = param_1;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05df40();
  _objc_release(lVar19);
  _objc_release(param_1);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
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
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106659968; end: 1066599a7;  */

void FUN_106659968(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bec4c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1066599a8; end: 1066599cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066599a8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274cea4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066599cc; end: 10665b3ef; -[SCImpalaStoryPlayerPresenterCreatingFactoryServiceProvider _storyPlayerPresenterCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066599cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  long lVar110;
  long lVar111;
  long lVar112;
  long lVar113;
  long lVar114;
  long lVar115;
  long lVar116;
  long lVar117;
  long lVar118;
  long lVar119;
  long lVar120;
  long lVar121;
  long lVar122;
  long lVar123;
  long lVar124;
  long lVar125;
  long lVar126;
  long lVar127;
  long lVar128;
  long lVar129;
  long lVar130;
  long lVar131;
  long lVar132;
  long lVar133;
  long lVar134;
  long lVar135;
  long lVar136;
  long lVar137;
  long lVar138;
  long lVar139;
  long lVar140;
  long lVar141;
  long lVar142;
  long lVar143;
  long lVar144;
  long lVar145;
  long lVar146;
  long lVar147;
  long lVar148;
  long lVar149;
  long lVar150;
  long lVar151;
  long lVar152;
  long lVar153;
  long lVar154;
  long lVar155;
  long lVar156;
  long lVar157;
  long lVar158;
  long lVar159;
  long lVar160;
  long lVar161;
  long lVar162;
  long lVar163;
  long lVar164;
  long lVar165;
  long lVar166;
  long lVar167;
  long lVar168;
  long lVar169;
  long lVar170;
  long lVar171;
  long lVar172;
  long lVar173;
  long lVar174;
  long lVar175;
  long lVar176;
  long lVar177;
  long lVar178;
  long lVar179;
  long lVar180;
  long lVar181;
  long lVar182;
  long lVar183;
  long lVar184;
  long lVar185;
  long lVar186;
  long lVar187;
  long lVar188;
  long lVar189;
  long lVar190;
  long lVar191;
  long lVar192;
  long lVar193;
  long lVar194;
  long lVar195;
  long lVar196;
  long lVar197;
  long lVar198;
  long lVar199;
  long lVar200;
  long lVar201;
  long lVar202;
  long lVar203;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10665b3f0;
  puStack_90 = &UNK_1108c0200;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar6;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10665b464;
  puStack_b8 = &UNK_110931c48;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  puStack_f8 = puVar6;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_10665b4d8;
  puStack_e0 = &UNK_110931c78;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  puStack_120 = puVar6;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_10665b528;
  puStack_108 = &UNK_110931ca8;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  puStack_148 = puVar6;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_10665b5ac;
  puStack_130 = &UNK_110931cd8;
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_150,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126cc600;
  _objc_alloc();
  lVar8 = param_1 + _DAT_11274cd3c;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bef3d60();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11274cd28;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11274cd40;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c0f1b40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11274cd44;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf4e6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar190 = (long)_DAT_11274cd48;
  lVar16 = param_1 + lVar190;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c0e9fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar190 = param_1 + lVar190;
  _objc_loadWeakRetained();
  lVar18 = lVar190;
  func_0x00010c0eb220();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11274cd4c;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11274cd50;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  FUN_1066599a8();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  FUN_1066599a8();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010bf5b780();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  FUN_1066599a8();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010bf5b7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = (long)_DAT_11274cd58;
  lVar29 = param_1 + lVar31;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c108ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + lVar31;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010c108e80();
  _objc_retainAutoreleasedReturnValue();
  lVar191 = (long)_DAT_11274cd38;
  lVar33 = param_1 + lVar191;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010bf82540();
  _objc_retainAutoreleasedReturnValue();
  lVar194 = (long)_DAT_11274cd5c;
  lVar35 = param_1 + lVar194;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar191 = param_1 + lVar191;
  _objc_loadWeakRetained();
  lVar37 = lVar191;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + _DAT_11274cd60;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar197 = (long)_DAT_11274cd64;
  lVar40 = param_1 + lVar197;
  _objc_loadWeakRetained();
  lVar41 = lVar40;
  func_0x00010c0dc780();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1 + _DAT_11274cd68;
  _objc_loadWeakRetained();
  lVar43 = lVar42;
  func_0x00010c11b420();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1 + _DAT_11274cd6c;
  _objc_loadWeakRetained();
  lVar45 = lVar44;
  func_0x00010bf982e0();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1 + _DAT_11274cd70;
  _objc_loadWeakRetained();
  lVar47 = lVar46;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + _DAT_11274cd74;
  _objc_loadWeakRetained();
  lVar49 = lVar48;
  func_0x00010c08f6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + _DAT_11274cd78;
  _objc_loadWeakRetained();
  lVar51 = lVar50;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1 + _DAT_11274cd7c;
  _objc_loadWeakRetained();
  lVar53 = lVar52;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + _DAT_11274cd80;
  _objc_loadWeakRetained();
  lVar55 = lVar54;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = param_1 + _DAT_11274cd84;
  _objc_loadWeakRetained();
  lVar57 = lVar56;
  func_0x00010c12a480();
  _objc_retainAutoreleasedReturnValue();
  lVar192 = (long)_DAT_11274cd88;
  lVar58 = param_1 + lVar192;
  _objc_loadWeakRetained();
  lVar59 = lVar58;
  func_0x00010c08f500();
  _objc_retainAutoreleasedReturnValue();
  lVar192 = param_1 + lVar192;
  _objc_loadWeakRetained();
  lVar60 = lVar192;
  func_0x00010c15d560();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_1 + _DAT_11274cd8c;
  _objc_loadWeakRetained();
  lVar193 = (long)_DAT_11274cd90;
  lVar62 = param_1 + lVar193;
  _objc_loadWeakRetained();
  lVar63 = lVar62;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar198 = (long)_DAT_11274cd94;
  lVar64 = param_1 + lVar198;
  _objc_loadWeakRetained();
  lVar65 = lVar64;
  func_0x00010c23fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar198 = param_1 + lVar198;
  _objc_loadWeakRetained();
  lVar66 = lVar198;
  func_0x00010c2403c0();
  _objc_retainAutoreleasedReturnValue();
  lVar201 = (long)_DAT_11274cd30;
  lVar67 = param_1 + lVar201;
  _objc_loadWeakRetained();
  lVar68 = lVar67;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  lVar199 = (long)_DAT_11274cd98;
  lVar69 = param_1 + lVar199;
  _objc_loadWeakRetained();
  lVar70 = lVar69;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar201 = param_1 + lVar201;
  _objc_loadWeakRetained();
  lVar71 = lVar201;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar72 = param_1 + _DAT_11274cd9c;
  _objc_loadWeakRetained();
  lVar73 = lVar72;
  func_0x00010c0ffb00();
  _objc_retainAutoreleasedReturnValue();
  lVar202 = (long)_DAT_11274cda0;
  lVar74 = param_1 + lVar202;
  _objc_loadWeakRetained();
  lVar75 = lVar74;
  func_0x00010c127bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar76 = lVar75;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar77 = lVar76;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar78 = lVar77;
  func_0x00010beed420();
  _objc_retainAutoreleasedReturnValue();
  lVar203 = (long)_DAT_11274cda4;
  lVar79 = param_1 + lVar203;
  _objc_loadWeakRetained();
  lVar80 = lVar79;
  func_0x00010c08f140();
  _objc_retainAutoreleasedReturnValue();
  lVar203 = param_1 + lVar203;
  _objc_loadWeakRetained();
  lVar81 = lVar203;
  func_0x00010c08f180();
  _objc_retainAutoreleasedReturnValue();
  lVar82 = param_1 + _DAT_11274cda8;
  _objc_loadWeakRetained();
  lVar83 = lVar82;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar202 = param_1 + lVar202;
  _objc_loadWeakRetained();
  lVar84 = lVar202;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar85 = lVar84;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar86 = lVar85;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar87 = param_1 + _DAT_11274cdac;
  _objc_loadWeakRetained();
  lVar88 = lVar87;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  lVar199 = param_1 + lVar199;
  _objc_loadWeakRetained();
  lVar89 = lVar199;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar90 = param_1 + _DAT_11274cdb0;
  _objc_loadWeakRetained();
  lVar91 = lVar90;
  func_0x00010c25b0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar92 = param_1 + _DAT_11274cdb4;
  _objc_loadWeakRetained();
  lVar93 = lVar92;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar94 = param_1 + _DAT_11274cdb8;
  _objc_loadWeakRetained();
  lVar95 = lVar94;
  func_0x00010bf145c0();
  _objc_retainAutoreleasedReturnValue();
  lVar96 = param_1 + _DAT_11274cdbc;
  _objc_loadWeakRetained();
  lVar97 = lVar96;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar98 = lVar97;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar99 = param_1 + _DAT_11274cdc0;
  _objc_loadWeakRetained();
  lVar100 = lVar99;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  lVar101 = param_1 + _DAT_11274cdc4;
  _objc_loadWeakRetained();
  lVar102 = lVar101;
  func_0x00010bef1320();
  _objc_retainAutoreleasedReturnValue();
  lVar103 = param_1 + _DAT_11274cdc8;
  _objc_loadWeakRetained();
  lVar104 = lVar103;
  func_0x00010c243b20();
  _objc_retainAutoreleasedReturnValue();
  lVar105 = param_1 + _DAT_11274cdcc;
  _objc_loadWeakRetained();
  lVar106 = lVar105;
  func_0x00010c112160();
  _objc_retainAutoreleasedReturnValue();
  lVar107 = param_1 + _DAT_11274cdd0;
  _objc_loadWeakRetained();
  lVar108 = lVar107;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  lVar109 = param_1 + _DAT_11274cdd4;
  _objc_loadWeakRetained();
  lVar110 = lVar109;
  func_0x00010c0dccc0();
  _objc_retainAutoreleasedReturnValue();
  lVar111 = param_1 + _DAT_11274cdd8;
  _objc_loadWeakRetained();
  lVar112 = lVar111;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  lVar113 = param_1 + _DAT_11274cddc;
  _objc_loadWeakRetained();
  lVar114 = lVar113;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar200 = (long)_DAT_11274cde0;
  lVar115 = param_1 + lVar200;
  _objc_loadWeakRetained();
  lVar116 = lVar115;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar194 = param_1 + lVar194;
  _objc_loadWeakRetained();
  lVar117 = lVar194;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar197 = param_1 + lVar197;
  _objc_loadWeakRetained();
  lVar118 = lVar197;
  func_0x00010c0dc480();
  _objc_retainAutoreleasedReturnValue();
  lVar119 = lVar118;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar120 = param_1 + _DAT_11274cde8;
  _objc_loadWeakRetained();
  lVar121 = lVar120;
  func_0x00010bf4cd60();
  _objc_retainAutoreleasedReturnValue();
  lVar122 = param_1 + _DAT_11274cdec;
  _objc_loadWeakRetained();
  lVar123 = lVar122;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  lVar124 = param_1 + _DAT_11274cd34;
  _objc_loadWeakRetained();
  lVar125 = lVar124;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar126 = param_1 + _DAT_11274cdf0;
  _objc_loadWeakRetained();
  lVar127 = lVar126;
  func_0x00010c1490a0();
  _objc_retainAutoreleasedReturnValue();
  lVar128 = param_1 + _DAT_11274cdf8;
  _objc_loadWeakRetained();
  lVar129 = param_1 + _DAT_11274cdfc;
  _objc_loadWeakRetained();
  lVar130 = lVar129;
  func_0x00010c14a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar131 = param_1 + _DAT_11274ce00;
  _objc_loadWeakRetained();
  lVar132 = lVar131;
  func_0x00010c101aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar133 = param_1 + _DAT_11274ce04;
  _objc_loadWeakRetained();
  lVar134 = lVar133;
  func_0x00010c22ac20();
  _objc_retainAutoreleasedReturnValue();
  lVar195 = (long)_DAT_11274ce08;
  lVar135 = param_1 + lVar195;
  _objc_loadWeakRetained();
  lVar136 = lVar135;
  func_0x00010c260a80();
  _objc_retainAutoreleasedReturnValue();
  lVar137 = param_1 + lVar193;
  _objc_loadWeakRetained();
  lVar138 = lVar137;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar139 = param_1 + _DAT_11274ce0c;
  _objc_loadWeakRetained();
  lVar140 = param_1 + _DAT_11274ce18;
  _objc_loadWeakRetained();
  lVar141 = param_1 + _DAT_11274ce20;
  _objc_loadWeakRetained();
  lVar142 = lVar141;
  func_0x00010c08d300();
  _objc_retainAutoreleasedReturnValue();
  lVar143 = param_1 + _DAT_11274ce24;
  _objc_loadWeakRetained();
  lVar144 = param_1 + _DAT_11274ce28;
  _objc_loadWeakRetained();
  lVar145 = param_1 + _DAT_11274ce2c;
  _objc_loadWeakRetained();
  lVar146 = param_1 + _DAT_11274ce30;
  _objc_loadWeakRetained();
  lVar147 = lVar146;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar148 = param_1 + _DAT_11274ce34;
  _objc_loadWeakRetained();
  lVar149 = lVar148;
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar150 = param_1 + _DAT_11274ce38;
  _objc_loadWeakRetained();
  lVar195 = param_1 + lVar195;
  _objc_loadWeakRetained();
  lVar151 = lVar195;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar152 = param_1 + _DAT_11274ce3c;
  _objc_loadWeakRetained();
  lVar153 = lVar152;
  func_0x00010bfab9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar154 = param_1 + _DAT_11274ce40;
  _objc_loadWeakRetained();
  lVar155 = lVar154;
  func_0x00010c243200();
  _objc_retainAutoreleasedReturnValue();
  lVar156 = param_1 + _DAT_11274ce44;
  _objc_loadWeakRetained();
  lVar157 = lVar156;
  func_0x00010bf4be60();
  _objc_retainAutoreleasedReturnValue();
  lVar158 = param_1 + _DAT_11274ce48;
  _objc_loadWeakRetained();
  lVar159 = lVar158;
  func_0x00010c29d900();
  _objc_retainAutoreleasedReturnValue();
  lVar160 = param_1 + _DAT_11274ce50;
  _objc_loadWeakRetained();
  lVar161 = param_1 + _DAT_11274ce54;
  _objc_loadWeakRetained();
  lVar162 = param_1 + _DAT_11274ce58;
  _objc_loadWeakRetained();
  lVar163 = lVar162;
  func_0x00010bfbdac0();
  _objc_retainAutoreleasedReturnValue();
  lVar196 = (long)_DAT_11274ce5c;
  lVar164 = param_1 + lVar196;
  _objc_loadWeakRetained();
  lVar165 = lVar164;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar196 = param_1 + lVar196;
  _objc_loadWeakRetained();
  lVar166 = lVar196;
  func_0x00010c24ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar167 = param_1 + _DAT_11274ce64;
  _objc_loadWeakRetained();
  lVar168 = lVar167;
  func_0x00010c110fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar169 = param_1 + _DAT_11274ce68;
  _objc_loadWeakRetained();
  lVar170 = param_1 + _DAT_11274ce6c;
  _objc_loadWeakRetained();
  lVar171 = lVar170;
  func_0x00010c22ac60();
  _objc_retainAutoreleasedReturnValue();
  lVar200 = param_1 + lVar200;
  _objc_loadWeakRetained();
  lVar172 = lVar200;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar173 = param_1 + _DAT_11274ce70;
  _objc_loadWeakRetained();
  lVar193 = param_1 + lVar193;
  _objc_loadWeakRetained();
  lVar174 = lVar193;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar175 = param_1 + _DAT_11274ce74;
  _objc_loadWeakRetained();
  lVar176 = lVar175;
  func_0x00010c258e40();
  _objc_retainAutoreleasedReturnValue();
  lVar177 = param_1 + _DAT_11274ce78;
  _objc_loadWeakRetained();
  lVar178 = lVar177;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar179 = param_1 + _DAT_11274ce7c;
  _objc_loadWeakRetained();
  lVar180 = lVar179;
  func_0x00010c2814a0();
  _objc_retainAutoreleasedReturnValue();
  lVar181 = param_1 + _DAT_11274ce80;
  _objc_loadWeakRetained();
  lVar182 = lVar181;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar183 = param_1 + _DAT_11274ce84;
  _objc_loadWeakRetained();
  lVar184 = lVar183;
  func_0x00010c0ffb20();
  _objc_retainAutoreleasedReturnValue();
  lVar185 = param_1 + _DAT_11274ce88;
  _objc_loadWeakRetained();
  lVar186 = lVar185;
  func_0x00010bf0b640();
  _objc_retainAutoreleasedReturnValue();
  lVar187 = param_1 + _DAT_11274ce8c;
  _objc_loadWeakRetained();
  lVar188 = lVar187;
  func_0x00010bf27540();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274ce90;
  _objc_loadWeakRetained();
  lVar189 = param_1;
  func_0x00010c2609c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1a00();
  _objc_release(lVar189);
  _objc_release(param_1);
  _objc_release(lVar188);
  _objc_release(lVar187);
  _objc_release(lVar186);
  _objc_release(lVar185);
  _objc_release(lVar184);
  _objc_release(lVar183);
  _objc_release(lVar182);
  _objc_release(lVar181);
  _objc_release(lVar180);
  _objc_release(lVar179);
  _objc_release(lVar178);
  _objc_release(lVar177);
  _objc_release(lVar176);
  _objc_release(lVar175);
  _objc_release(lVar174);
  _objc_release(lVar193);
  _objc_release(lVar173);
  _objc_release(lVar172);
  _objc_release(lVar200);
  _objc_release(lVar171);
  _objc_release(lVar170);
  _objc_release(lVar169);
  _objc_release(lVar168);
  _objc_release(lVar167);
  _objc_release(lVar166);
  _objc_release(lVar196);
  _objc_release(lVar165);
  _objc_release(lVar164);
  _objc_release(lVar163);
  _objc_release(lVar162);
  _objc_release(lVar161);
  _objc_release(lVar160);
  _objc_release(lVar159);
  _objc_release(lVar158);
  _objc_release(lVar157);
  _objc_release(lVar156);
  _objc_release(lVar155);
  _objc_release(lVar154);
  _objc_release(lVar153);
  _objc_release(lVar152);
  _objc_release(lVar151);
  _objc_release(lVar195);
  _objc_release(lVar150);
  _objc_release(lVar149);
  _objc_release(lVar148);
  _objc_release(lVar147);
  _objc_release(lVar146);
  _objc_release(lVar145);
  _objc_release(lVar144);
  _objc_release(lVar143);
  _objc_release(lVar142);
  _objc_release(lVar141);
  _objc_release(lVar140);
  _objc_release(lVar139);
  _objc_release(lVar138);
  _objc_release(lVar137);
  _objc_release(lVar136);
  _objc_release(lVar135);
  _objc_release(lVar134);
  _objc_release(lVar133);
  _objc_release(lVar132);
  _objc_release(lVar131);
  _objc_release(lVar130);
  _objc_release(lVar129);
  _objc_release(lVar128);
  _objc_release(lVar127);
  _objc_release(lVar126);
  _objc_release(lVar125);
  _objc_release(lVar124);
  _objc_release(lVar123);
  _objc_release(lVar122);
  _objc_release(lVar121);
  _objc_release(lVar120);
  _objc_release(lVar119);
  _objc_release(lVar118);
  _objc_release(lVar197);
  _objc_release(lVar117);
  _objc_release(lVar194);
  _objc_release(lVar116);
  _objc_release(lVar115);
  _objc_release(lVar114);
  _objc_release(lVar113);
  _objc_release(lVar112);
  _objc_release(lVar111);
  _objc_release(lVar110);
  _objc_release(lVar109);
  _objc_release(lVar108);
  _objc_release(lVar107);
  _objc_release(lVar106);
  _objc_release(lVar105);
  _objc_release(lVar104);
  _objc_release(lVar103);
  _objc_release(lVar102);
  _objc_release(lVar101);
  _objc_release(lVar100);
  _objc_release(lVar99);
  _objc_release(lVar98);
  _objc_release(lVar97);
  _objc_release(lVar96);
  _objc_release(lVar95);
  _objc_release(lVar94);
  _objc_release(lVar93);
  _objc_release(lVar92);
  _objc_release(lVar91);
  _objc_release(lVar90);
  _objc_release(lVar89);
  _objc_release(lVar199);
  _objc_release(lVar88);
  _objc_release(lVar87);
  _objc_release(lVar86);
  _objc_release(lVar85);
  _objc_release(lVar84);
  _objc_release(lVar202);
  _objc_release(lVar83);
  _objc_release(lVar82);
  _objc_release(lVar81);
  _objc_release(lVar203);
  _objc_release(lVar80);
  _objc_release(lVar79);
  _objc_release(lVar78);
  _objc_release(lVar77);
  _objc_release(lVar76);
  _objc_release(lVar75);
  _objc_release(lVar74);
  _objc_release(lVar73);
  _objc_release(lVar72);
  _objc_release(lVar71);
  _objc_release(lVar201);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar198);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar192);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar191);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar190);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_150);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10665b3f0; end: 10665b4d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10665b3f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + _DAT_11274cd24;
    _objc_loadWeakRetained(lVar2);
  }
  lVar1 = lVar2;
  func_0x00010bf398e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10665b4d8; end: 10665b527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10665b4d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_11274cea0;
    _objc_loadWeakRetained(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10665b528; end: 10665b587;  */

void FUN_10665b528(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_10665b588();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe9f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10665b588; end: 10665b5ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10665b588(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274ce0c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10665b5ac; end: 10665b67f;  */

void FUN_10665b5ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_10665b588();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfea160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10665b680; end: 10665b953; -[SCImpalaStoryPlayerPresenterCreatingFactoryServiceProvider _createPublicStoryDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10665b680(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2a60;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11274cd98;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11274ce94;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11274cd30;
  lVar7 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar18);
  lVar10 = lVar18;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11274ce2c;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11274cd24;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11274cd70;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274ce98;
  _objc_loadWeakRetained();
  lVar17 = param_1;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021fa0();
  _objc_release(lVar17);
  _objc_release(param_1);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar18);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10665b954; end: 10665b9c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10665b954(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_11274ceb0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c260aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10665b9c4; end: 10665becb; -[SCImpalaStoryPlayerPresenterCreatingFactoryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10665b9c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274cd40);
  _objc_destroyWeak(param_1 + _DAT_11274ce90);
  _objc_destroyWeak(param_1 + _DAT_11274ce8c);
  _objc_destroyWeak(param_1 + _DAT_11274ce88);
  _objc_destroyWeak(param_1 + _DAT_11274ce84);
  _objc_destroyWeak(param_1 + _DAT_11274ce80);
  _objc_destroyWeak(param_1 + _DAT_11274ce7c);
  _objc_destroyWeak(param_1 + _DAT_11274ce78);
  _objc_destroyWeak(param_1 + _DAT_11274ce74);
  _objc_destroyWeak(param_1 + _DAT_11274ce98);
  _objc_destroyWeak(param_1 + _DAT_11274ceb0);
  _objc_destroyWeak(param_1 + _DAT_11274ce70);
  _objc_storeStrong(param_1 + _DAT_11274ce60,0);
  _objc_destroyWeak(param_1 + _DAT_11274ce54);
  _objc_destroyWeak(param_1 + _DAT_11274ce50);
  _objc_storeStrong(param_1 + _DAT_11274ce4c,0);
  _objc_destroyWeak(param_1 + _DAT_11274ce68);
  _objc_destroyWeak(param_1 + _DAT_11274ce58);
  _objc_destroyWeak(param_1 + _DAT_11274ce5c);
  _objc_destroyWeak(param_1 + _DAT_11274ce48);
  _objc_destroyWeak(param_1 + _DAT_11274ce64);
  _objc_destroyWeak(param_1 + _DAT_11274ce40);
  _objc_destroyWeak(param_1 + _DAT_11274ce3c);
  _objc_destroyWeak(param_1 + _DAT_11274ce38);
  _objc_destroyWeak(param_1 + _DAT_11274ce34);
  _objc_destroyWeak(param_1 + _DAT_11274ce30);
  _objc_destroyWeak(param_1 + _DAT_11274ce2c);
  _objc_destroyWeak(param_1 + _DAT_11274cd58);
  _objc_destroyWeak(param_1 + _DAT_11274ce20);
  _objc_storeStrong(param_1 + _DAT_11274ce10,0);
  _objc_destroyWeak(param_1 + _DAT_11274ce18);
  _objc_storeStrong(param_1 + _DAT_11274ce14,0);
  _objc_storeStrong(param_1 + _DAT_11274ce1c,0);
  _objc_destroyWeak(param_1 + _DAT_11274cdf8);
  _objc_storeStrong(param_1 + _DAT_11274cdf4,0);
  _objc_destroyWeak(param_1 + _DAT_11274ce08);
  _objc_destroyWeak(param_1 + _DAT_11274cd8c);
  _objc_destroyWeak(param_1 + _DAT_11274cd88);
  _objc_storeStrong(param_1 + _DAT_11274cd54,0);
  _objc_destroyWeak(param_1 + _DAT_11274ce28);
  _objc_destroyWeak(param_1 + _DAT_11274ce04);
  _objc_destroyWeak(param_1 + _DAT_11274ce94);
  _objc_storeStrong(param_1 + _DAT_11274cde4,0);
  _objc_destroyWeak(param_1 + _DAT_11274ce00);
  _objc_destroyWeak(param_1 + _DAT_11274cdf0);
  _objc_destroyWeak(param_1 + _DAT_11274cd34);
  _objc_destroyWeak(param_1 + _DAT_11274cdec);
  _objc_destroyWeak(param_1 + _DAT_11274cddc);
  _objc_destroyWeak(param_1 + _DAT_11274cdd8);
  _objc_destroyWeak(param_1 + _DAT_11274cdd4);
  _objc_destroyWeak(param_1 + _DAT_11274cdd0);
  _objc_destroyWeak(param_1 + _DAT_11274cdc0);
  _objc_destroyWeak(param_1 + _DAT_11274cdbc);
  _objc_destroyWeak(param_1 + _DAT_11274cdcc);
  _objc_destroyWeak(param_1 + _DAT_11274cdc8);
  _objc_destroyWeak(param_1 + _DAT_11274cdc4);
  _objc_destroyWeak(param_1 + _DAT_11274cdb8);
  _objc_destroyWeak(param_1 + _DAT_11274cdac);
  _objc_destroyWeak(param_1 + _DAT_11274cdb4);
  _objc_destroyWeak(param_1 + _DAT_11274ceac);
  _objc_destroyWeak(param_1 + _DAT_11274cdb0);
  _objc_destroyWeak(param_1 + _DAT_11274cda8);
  _objc_destroyWeak(param_1 + _DAT_11274cd9c);
  _objc_destroyWeak(param_1 + _DAT_11274cda4);
  _objc_destroyWeak(param_1 + _DAT_11274cd20);
  _objc_destroyWeak(param_1 + _DAT_11274cd6c);
  _objc_destroyWeak(param_1 + _DAT_11274cd78);
  _objc_destroyWeak(param_1 + _DAT_11274cda0);
  _objc_destroyWeak(param_1 + _DAT_11274cd84);
  _objc_destroyWeak(param_1 + _DAT_11274cd30);
  _objc_destroyWeak(param_1 + _DAT_11274cd98);
  _objc_destroyWeak(param_1 + _DAT_11274cea8);
  _objc_destroyWeak(param_1 + _DAT_11274cd94);
  _objc_destroyWeak(param_1 + _DAT_11274cd90);
  _objc_destroyWeak(param_1 + _DAT_11274cd80);
  _objc_destroyWeak(param_1 + _DAT_11274cd7c);
  _objc_destroyWeak(param_1 + _DAT_11274cd74);
  _objc_destroyWeak(param_1 + _DAT_11274ce0c);
  _objc_destroyWeak(param_1 + _DAT_11274cd70);
  _objc_destroyWeak(param_1 + _DAT_11274cd60);
  _objc_destroyWeak(param_1 + _DAT_11274cd68);
  _objc_destroyWeak(param_1 + _DAT_11274cd64);
  _objc_destroyWeak(param_1 + _DAT_11274cdfc);
  _objc_destroyWeak(param_1 + _DAT_11274cd38);
  _objc_destroyWeak(param_1 + _DAT_11274cd5c);
  _objc_destroyWeak(param_1 + _DAT_11274cea4);
  _objc_destroyWeak(param_1 + _DAT_11274cd44);
  _objc_destroyWeak(param_1 + _DAT_11274cd50);
  _objc_destroyWeak(param_1 + _DAT_11274ce44);
  _objc_destroyWeak(param_1 + _DAT_11274cde8);
  _objc_destroyWeak(param_1 + _DAT_11274cd4c);
  _objc_destroyWeak(param_1 + _DAT_11274ce24);
  _objc_destroyWeak(param_1 + _DAT_11274cd48);
  _objc_destroyWeak(param_1 + _DAT_11274cea0);
  _objc_destroyWeak(param_1 + _DAT_11274ce6c);
  _objc_destroyWeak(param_1 + _DAT_11274cd2c);
  _objc_destroyWeak(param_1 + _DAT_11274cd28);
  _objc_destroyWeak(param_1 + _DAT_11274cd24);
  _objc_destroyWeak(param_1 + _DAT_11274cd1c);
  _objc_destroyWeak(param_1 + _DAT_11274cd3c);
  _objc_destroyWeak(param_1 + _DAT_11274cde0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274ce9c);
  return;
}



/* Entry: 10665becc; end: 10665d43b; -[SCImpalaStoryPlayerPresenterCreator initWithAdPluginProvider:bitmojiImageFetcher:bloopsStorySharingServices:cameraAttachmentOperaPageResolver:circumstanceEngine:contextExperimentService:commerceOperaAttachmentPluginProvider:commerceOperaScreenshopPluginProvider:contentDelivery:contextOperaPluginProvider:creatorSettingsDataFetcher:creatorSettingsDataMutator:creatorSettingsDataTracker:deeplinkSendToScopeExposer:premiumStoryShareSender:premiumStoryConversationResolver:discoverBlizzardLogger:discoverFeedDataFetcher:discoverFeedEventsLogger:discoverFeedInteractionHistoryManager:discoverFeedNotificationPromptHandler:discoverPublisherPagePropertiesManager:ephemeralMediaFactory:grapheneRegistry:impalaOperaLayerViewControllerProviderCreator:impalaPublicProfilePresentationHandler:legacyStoriesTooltipsService:notificationPool:offPlatformLinkGenerationService:onDemandResourceDownloader:remoteStoriesDataProvider:legacySendToScopeLauncher:sendToScopeLauncher:sendToScopeServices:snapchattersSynchronousDataFetcher:snapDocConfigurer:snapDocOperaParser:storiesCachedReadReceiptViewStateProvider:storiesGrapheneMetricsEmitter:storiesMediaCoordinator:storiesSnapReadReceiptCoordinator:longformMediaPrefetcher:userAccountCreationDate:streamingURLProvider:streamingMediaFetcher:featureSettingsService:currentUsername:conversationDestinationParser:storiesBlizzardLogger:customStoriesDataFetcher:storyShareSender:photoPermissionCoordinator:backgroundTaskWrapper:imageDownloader:imageFetchingService:activeVideoPaths:snapVideoFilterFactory:previewURLVideoProvider:lazySnapDocMediaResolver:lazyNotificationsPermissionRequester:notificationOSSettingsRetriever:lazyNetworkConnectivityMonitor:lazyUserTrackedLogger:lazyDiscoverFeedDataMutator:discoverFeedNotificationOptInRequestManager:safetyReportScopeExposer:contentObjectResolver:externalLinkSendingService:adConfigProvider:safeBrowsingAPI:operaSessionScopeExposer:operaSessionScopeServices:saveFriendStoryOperaPluginProvider:discoverOperaPluginCreator:snapProShareMessageSender:subscriptionWorkflowStarter:snapchattersDataFetcher:impalaLegacyServices:saveStoryScopeExposer:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:bloopsReportScopeExposer:boostCoordinator:composerServices:offPlatformShareServices:storiesExperimentServices:temporaryFileWriter:snapDocEditorFactory:genAIOnboardingServices:profilesProvider:spotlightDataFetcher:previewSnapSenderFactory:contentBlocker:playableViewModelGenerator:contentProductPlaybackExposer:contentProductPlaybackScopeServices:pageLauncherServices:galleryStorySaver:spotlightShareSender:spotlightPlatformAnalyticsCreator:standardExternalContentShareScopeExposer:previewFilterDataProviderFactory:musicContentRestrictionServices:shareNotificationService:userBlizzardLogger:crashServices:snapchatterObservableRepository:storiesUsageLogger:remixOperaPluginProvider:unlockableViewTracker:snapchatterUserInfoProvider:playbackMediaResolver:playbackAssetRepositoryFactory:storiesCachedSummaryInfoProvider:creatorsSubscriptionStoreDelegate:] */

undefined8 *
FUN_10665becc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
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
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain(param_66);
  _objc_retain(param_67);
  _objc_retain(param_68);
  _objc_retain(param_69);
  _objc_retain(param_70);
  _objc_retain(in_stack_000001f0);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000210);
  _objc_retain(in_stack_00000218);
  _objc_retain(in_stack_00000220);
  _objc_retain(in_stack_00000228);
  _objc_retain(in_stack_00000230);
  _objc_retain(in_stack_00000238);
  _objc_retain(in_stack_00000240);
  _objc_retain(in_stack_00000248);
  _objc_retain(in_stack_00000250);
  _objc_retain(in_stack_00000258);
  _objc_retain(in_stack_00000260);
  _objc_retain(in_stack_00000268);
  _objc_retain(in_stack_00000270);
  _objc_retain(in_stack_00000278);
  _objc_retain(in_stack_00000280);
  _objc_retain(in_stack_00000290);
  _objc_retain(in_stack_00000298);
  _objc_retain(in_stack_000002a0);
  _objc_retain(in_stack_000002a8);
  _objc_retain(in_stack_000002b0);
  _objc_retain(in_stack_000002b8);
  _objc_retain(in_stack_000002c0);
  _objc_retain(in_stack_000002c8);
  _objc_retain(in_stack_000002d0);
  _objc_retain(in_stack_000002d8);
  _objc_retain(in_stack_000002e0);
  _objc_retain(in_stack_000002e8);
  _objc_retain(in_stack_000002f0);
  _objc_retain(in_stack_000002f8);
  _objc_retain(in_stack_00000300);
  _objc_retain(in_stack_00000308);
  _objc_retain(in_stack_00000310);
  _objc_retain(in_stack_00000318);
  _objc_retain(in_stack_00000320);
  _objc_retain(in_stack_00000328);
  _objc_retain(in_stack_00000330);
  _objc_retain(in_stack_00000338);
  _objc_retain(in_stack_00000340);
  _objc_retain(in_stack_00000348);
  _objc_retain(in_stack_00000350);
  _objc_retain(in_stack_00000358);
  _objc_retain(in_stack_00000360);
  puStack_70 = PTR_PTR_1126f2358;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_5;
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
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[1];
    puVar1[1] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_54);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_54;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_55;
    _objc_release(uVar2);
    _objc_retain(param_58);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_58;
    _objc_release(uVar2);
    _objc_retain(param_59);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_59;
    _objc_release(uVar2);
    _objc_retain(param_60);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_60;
    _objc_release(uVar2);
    _objc_retain(param_56);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_56;
    _objc_release(uVar2);
    _objc_retain(param_57);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_57;
    _objc_release(uVar2);
    _objc_retain(param_61);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_61;
    _objc_release(uVar2);
    _objc_retain(param_62);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_62;
    _objc_release(uVar2);
    _objc_retain(param_63);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_63;
    _objc_release(uVar2);
    _objc_retain(param_64);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_64;
    _objc_release(uVar2);
    _objc_retain(param_65);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_65;
    _objc_release(uVar2);
    _objc_retain(param_66);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_66;
    _objc_release(uVar2);
    _objc_retain(param_67);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_67;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x40];
    puVar1[0x40] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x42];
    puVar1[0x42] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_68);
    uVar2 = puVar1[0x43];
    puVar1[0x43] = param_68;
    _objc_release(uVar2);
    _objc_retain(param_70);
    uVar2 = puVar1[0x46];
    puVar1[0x46] = param_70;
    _objc_release(uVar2);
    _objc_retain(in_stack_000001f0);
    uVar2 = puVar1[0x47];
    puVar1[0x47] = in_stack_000001f0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000001f8);
    uVar2 = puVar1[0x48];
    puVar1[0x48] = in_stack_000001f8;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000200);
    uVar2 = puVar1[0x49];
    puVar1[0x49] = in_stack_00000200;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000208);
    uVar2 = puVar1[0x4a];
    puVar1[0x4a] = in_stack_00000208;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000210);
    uVar2 = puVar1[0x4b];
    puVar1[0x4b] = in_stack_00000210;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000218);
    uVar2 = puVar1[0x4c];
    puVar1[0x4c] = in_stack_00000218;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000220);
    uVar2 = puVar1[0x4d];
    puVar1[0x4d] = in_stack_00000220;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000228);
    uVar2 = puVar1[0x4e];
    puVar1[0x4e] = in_stack_00000228;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000230);
    uVar2 = puVar1[0x4f];
    puVar1[0x4f] = in_stack_00000230;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000258);
    uVar2 = puVar1[0x50];
    puVar1[0x50] = in_stack_00000258;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000260);
    uVar2 = puVar1[0x51];
    puVar1[0x51] = in_stack_00000260;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000238);
    uVar2 = puVar1[0x52];
    puVar1[0x52] = in_stack_00000238;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000240);
    uVar2 = puVar1[0x44];
    puVar1[0x44] = in_stack_00000240;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000268);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = in_stack_00000268;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000270);
    uVar2 = puVar1[0x53];
    puVar1[0x53] = in_stack_00000270;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000278);
    uVar2 = puVar1[0x54];
    puVar1[0x54] = in_stack_00000278;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000248);
    uVar2 = puVar1[0x55];
    puVar1[0x55] = in_stack_00000248;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000250);
    uVar2 = puVar1[0x56];
    puVar1[0x56] = in_stack_00000250;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000280);
    uVar2 = puVar1[0x57];
    puVar1[0x57] = in_stack_00000280;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000290);
    uVar2 = puVar1[0x59];
    puVar1[0x59] = in_stack_00000290;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000298);
    uVar2 = puVar1[0x5a];
    puVar1[0x5a] = in_stack_00000298;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002a0);
    uVar2 = puVar1[0x5b];
    puVar1[0x5b] = in_stack_000002a0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002a8);
    uVar2 = puVar1[0x5c];
    puVar1[0x5c] = in_stack_000002a8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002b0);
    uVar2 = puVar1[0x5d];
    puVar1[0x5d] = in_stack_000002b0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002b8);
    uVar2 = puVar1[0x5e];
    puVar1[0x5e] = in_stack_000002b8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002c0);
    uVar2 = puVar1[0x5f];
    puVar1[0x5f] = in_stack_000002c0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002c8);
    uVar2 = puVar1[0x60];
    puVar1[0x60] = in_stack_000002c8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002d8);
    uVar2 = puVar1[0x61];
    puVar1[0x61] = in_stack_000002d8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x62,in_stack_000002d0);
    _objc_retain(in_stack_000002e0);
    uVar2 = puVar1[99];
    puVar1[99] = in_stack_000002e0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002e8);
    uVar2 = puVar1[100];
    puVar1[100] = in_stack_000002e8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002f0);
    uVar2 = puVar1[0x65];
    puVar1[0x65] = in_stack_000002f0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000002f8);
    uVar2 = puVar1[0x66];
    puVar1[0x66] = in_stack_000002f8;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000300);
    uVar2 = puVar1[0x67];
    puVar1[0x67] = in_stack_00000300;
    _objc_release(uVar2);
    _objc_retain(param_69);
    uVar2 = puVar1[0x45];
    puVar1[0x45] = param_69;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000308);
    uVar2 = puVar1[0x68];
    puVar1[0x68] = in_stack_00000308;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000310);
    uVar2 = puVar1[0x69];
    puVar1[0x69] = in_stack_00000310;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000318);
    uVar2 = puVar1[0x6a];
    puVar1[0x6a] = in_stack_00000318;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000320);
    uVar2 = puVar1[0x6b];
    puVar1[0x6b] = in_stack_00000320;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000328);
    uVar2 = puVar1[0x6c];
    puVar1[0x6c] = in_stack_00000328;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000330);
    uVar2 = puVar1[0x6d];
    puVar1[0x6d] = in_stack_00000330;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000338);
    uVar2 = puVar1[0x6e];
    puVar1[0x6e] = in_stack_00000338;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000340);
    uVar2 = puVar1[0x6f];
    puVar1[0x6f] = in_stack_00000340;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000348);
    uVar2 = puVar1[0x70];
    puVar1[0x70] = in_stack_00000348;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000350);
    uVar2 = puVar1[0x71];
    puVar1[0x71] = in_stack_00000350;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000358);
    uVar2 = puVar1[0x72];
    puVar1[0x72] = in_stack_00000358;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000360);
    uVar2 = puVar1[0x73];
    puVar1[0x73] = in_stack_00000360;
    _objc_release(uVar2);
  }
  _objc_release(in_stack_00000360);
  _objc_release(in_stack_00000358);
  _objc_release(in_stack_00000350);
  _objc_release(in_stack_00000348);
  _objc_release(in_stack_00000340);
  _objc_release(in_stack_00000338);
  _objc_release(in_stack_00000330);
  _objc_release(in_stack_00000328);
  _objc_release(in_stack_00000320);
  _objc_release(in_stack_00000318);
  _objc_release(in_stack_00000310);
  _objc_release(in_stack_00000308);
  _objc_release(in_stack_00000300);
  _objc_release(in_stack_000002f8);
  _objc_release(in_stack_000002f0);
  _objc_release(in_stack_000002e8);
  _objc_release(in_stack_000002e0);
  _objc_release(in_stack_000002d8);
  _objc_release(in_stack_000002d0);
  _objc_release(in_stack_000002c8);
  _objc_release(in_stack_000002c0);
  _objc_release(in_stack_000002b8);
  _objc_release(in_stack_000002b0);
  _objc_release(in_stack_000002a8);
  _objc_release(in_stack_000002a0);
  _objc_release(in_stack_00000298);
  _objc_release(in_stack_00000290);
  _objc_release(in_stack_00000280);
  _objc_release(in_stack_00000278);
  _objc_release(in_stack_00000270);
  _objc_release(in_stack_00000268);
  _objc_release(in_stack_00000260);
  _objc_release(in_stack_00000258);
  _objc_release(in_stack_00000250);
  _objc_release(in_stack_00000248);
  _objc_release(in_stack_00000240);
  _objc_release(in_stack_00000238);
  _objc_release(in_stack_00000230);
  _objc_release(in_stack_00000228);
  _objc_release(in_stack_00000220);
  _objc_release(in_stack_00000218);
  _objc_release(in_stack_00000210);
  _objc_release(in_stack_00000208);
  _objc_release(in_stack_00000200);
  _objc_release(in_stack_000001f8);
  _objc_release(in_stack_000001f0);
  _objc_release(param_70);
  _objc_release(param_69);
  _objc_release(param_68);
  _objc_release(param_67);
  _objc_release(param_66);
  _objc_release(param_65);
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
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



/* Entry: 10665d43c; end: 10665d9a3; -[SCImpalaStoryPlayerPresenterCreator createImpalaStoryPlayerPresenting] */

void FUN_10665d43c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined *puVar55;
  long lVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  
  puVar55 = PTR_PTR_1126cc608;
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar28 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar29 = *(undefined8 *)(param_1 + 0x30);
  uVar57 = *(undefined8 *)(param_1 + 0x38);
  uVar69 = *(undefined8 *)(param_1 + 0x48);
  uVar67 = *(undefined8 *)(param_1 + 0x40);
  uVar65 = *(undefined8 *)(param_1 + 0x58);
  uVar63 = *(undefined8 *)(param_1 + 0x50);
  uVar70 = *(undefined8 *)(param_1 + 0x68);
  uVar68 = *(undefined8 *)(param_1 + 0x60);
  uVar66 = *(undefined8 *)(param_1 + 0x208);
  uVar64 = *(undefined8 *)(param_1 + 0x200);
  uVar62 = *(undefined8 *)(param_1 + 0x210);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uVar30 = *(undefined8 *)(param_1 + 0x78);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  uVar31 = *(undefined8 *)(param_1 + 0x88);
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  uVar32 = *(undefined8 *)(param_1 + 0x98);
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  uVar33 = *(undefined8 *)(param_1 + 0xa8);
  uVar7 = *(undefined8 *)(param_1 + 0xb0);
  uVar34 = *(undefined8 *)(param_1 + 0xb8);
  uVar8 = *(undefined8 *)(param_1 + 0xc0);
  uVar35 = *(undefined8 *)(param_1 + 200);
  uVar9 = *(undefined8 *)(param_1 + 0x130);
  uVar36 = *(undefined8 *)(param_1 + 0x138);
  uVar10 = *(undefined8 *)(param_1 + 0xd0);
  uVar37 = *(undefined8 *)(param_1 + 0xd8);
  uVar11 = *(undefined8 *)(param_1 + 0xe0);
  uVar38 = *(undefined8 *)(param_1 + 0xe8);
  uVar12 = *(undefined8 *)(param_1 + 0xf0);
  uVar39 = *(undefined8 *)(param_1 + 0xf8);
  uVar13 = *(undefined8 *)(param_1 + 0x100);
  uVar40 = *(undefined8 *)(param_1 + 0x108);
  uVar14 = *(undefined8 *)(param_1 + 0x120);
  uVar41 = *(undefined8 *)(param_1 + 0x128);
  uVar15 = *(undefined8 *)(param_1 + 8);
  uVar42 = *(undefined8 *)(param_1 + 0x10);
  uVar16 = *(undefined8 *)(param_1 + 0x140);
  uVar43 = *(undefined8 *)(param_1 + 0x148);
  uVar17 = *(undefined8 *)(param_1 + 0x160);
  uVar44 = *(undefined8 *)(param_1 + 0x168);
  uVar18 = *(undefined8 *)(param_1 + 0x170);
  uVar45 = *(undefined8 *)(param_1 + 0x178);
  uVar19 = *(undefined8 *)(param_1 + 0x180);
  uVar46 = *(undefined8 *)(param_1 + 0x188);
  uVar20 = *(undefined8 *)(param_1 + 400);
  uVar47 = *(undefined8 *)(param_1 + 0x198);
  uVar21 = *(undefined8 *)(param_1 + 0x1a0);
  uVar48 = *(undefined8 *)(param_1 + 0x1a8);
  uVar22 = *(undefined8 *)(param_1 + 0x150);
  uVar49 = *(undefined8 *)(param_1 + 0x158);
  uVar23 = *(undefined8 *)(param_1 + 0x1b0);
  uVar50 = *(undefined8 *)(param_1 + 0x1b8);
  uVar24 = *(undefined8 *)(param_1 + 0x1c0);
  uVar51 = *(undefined8 *)(param_1 + 0x1c8);
  uVar25 = *(undefined8 *)(param_1 + 0x1e0);
  uVar52 = *(undefined8 *)(param_1 + 0x1e8);
  uVar26 = *(undefined8 *)(param_1 + 0x1f0);
  uVar53 = *(undefined8 *)(param_1 + 0x1f8);
  uVar58 = *(undefined8 *)(param_1 + 0x218);
  uVar59 = *(undefined8 *)(param_1 + 0x228);
  uVar60 = *(undefined8 *)(param_1 + 0x230);
  uVar61 = *(undefined8 *)(param_1 + 0x238);
  uVar27 = *(undefined8 *)(param_1 + 0x110);
  uVar54 = *(undefined8 *)(param_1 + 0x1d8);
  lVar56 = param_1 + 0x310;
  _objc_loadWeakRetained();
  func_0x00010bff1a20(puVar55,*(undefined8 *)(param_1 + 0x368),uVar42,uVar1,uVar28,uVar2,uVar29,
                      uVar57,uVar67,uVar69,uVar63,uVar65,uVar68,uVar70,uVar64,uVar66,uVar62,uVar3,
                      uVar30,uVar4,uVar31,uVar5,uVar32,uVar6,uVar14,uVar33,uVar7,uVar34,uVar27,uVar8
                      ,uVar35,uVar10,uVar9,uVar36,uVar16,uVar37,uVar11,uVar38,uVar12,uVar39,uVar13,
                      uVar40,uVar41,uVar15,uVar43,uVar49,uVar17,uVar19,uVar45,uVar44,uVar18,uVar46,
                      uVar20,uVar54,uVar25,uVar47,uVar21,uVar48,uVar22,uVar23,uVar50,uVar24,uVar51,
                      uVar52,uVar26,uVar53,uVar58,uVar59,uVar60,uVar61);
  _objc_release(lVar56);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar55);
  return;
}



/* Entry: 10665d9a4; end: 10665df1b; -[SCImpalaStoryPlayerPresenterCreator .cxx_destruct] */

void FUN_10665d9a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x398,0);
  _objc_storeStrong(param_1 + 0x390,0);
  _objc_storeStrong(param_1 + 0x388,0);
  _objc_storeStrong(param_1 + 0x380,0);
  _objc_storeStrong(param_1 + 0x378,0);
  _objc_storeStrong(param_1 + 0x370,0);
  _objc_storeStrong(param_1 + 0x368,0);
  _objc_storeStrong(param_1 + 0x360,0);
  _objc_storeStrong(param_1 + 0x358,0);
  _objc_storeStrong(param_1 + 0x350,0);
  _objc_storeStrong(param_1 + 0x348,0);
  _objc_storeStrong(param_1 + 0x340,0);
  _objc_storeStrong(param_1 + 0x338,0);
  _objc_storeStrong(param_1 + 0x330,0);
  _objc_storeStrong(param_1 + 0x328,0);
  _objc_storeStrong(param_1 + 800,0);
  _objc_storeStrong(param_1 + 0x318,0);
  _objc_destroyWeak(param_1 + 0x310);
  _objc_storeStrong(param_1 + 0x308,0);
  _objc_storeStrong(param_1 + 0x300,0);
  _objc_storeStrong(param_1 + 0x2f8,0);
  _objc_storeStrong(param_1 + 0x2f0,0);
  _objc_storeStrong(param_1 + 0x2e8,0);
  _objc_storeStrong(param_1 + 0x2e0,0);
  _objc_storeStrong(param_1 + 0x2d8,0);
  _objc_storeStrong(param_1 + 0x2d0,0);
  _objc_storeStrong(param_1 + 0x2c8,0);
  _objc_storeStrong(param_1 + 0x2c0,0);
  _objc_storeStrong(param_1 + 0x2b8,0);
  _objc_storeStrong(param_1 + 0x2b0,0);
  _objc_storeStrong(param_1 + 0x2a8,0);
  _objc_storeStrong(param_1 + 0x2a0,0);
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
  _objc_storeStrong(param_1 + 0x248,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
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
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10665df1c; end: 10665dfaf; -[SCManagedStoryPlaybackDataProvider initWithCircumstanceEngine:] */

undefined1 * FUN_10665df1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2360;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10665dfb0; end: 10665e22f; -[SCManagedStoryPlaybackDataProvider storiesPlaybackMetadataForStoryIds:completion:] */

void FUN_10665dfb0(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 != 0) && (ppuVar1 = param_3, func_0x00010bf529e0(), ppuVar1 != (undefined **)0x0)) {
    ppuVar1 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 8);
    _objc_retain();
    func_0x00010bf97ce0(uVar9);
    ppuVar8 = &puStack_50;
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
  _objc_retain(ppuVar8);
  ppuVar1 = ppuVar8;
  func_0x00010bf529e0();
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar1 = ppuVar8;
    func_0x00010bfb1920(ppuVar8);
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
    uVar7 = *(undefined8 *)(param_3[4] + 0x28);
    func_0x00010c0b8220(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c064420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    ppuVar1 = ppuVar8;
    func_0x000107a85430(ppuVar8,ppuVar6,*(undefined8 *)(param_3[4] + 0x20),1,uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(param_3[5]);
    _objc_release(ppuVar1);
    _objc_release(uVar9);
    _objc_release(ppuVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
  return;
}



/* Entry: 10665e230; end: 10665e77f; -[SCManagedStoryPlaybackDataProvider userStoryPlaybackSequenceByStoryId:clientId:] */

void FUN_10665e230(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010bf529e0();
  if (lVar12 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    lVar12 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = &uStack_110;
    uStack_110 = 0;
    uStack_100 = 0x2020000000;
    uStack_f8 = 0;
    puStack_128 = &uStack_130;
    uStack_130 = 0;
    uStack_120 = 0x2020000000;
    uStack_118 = 0;
    lVar2 = lVar12;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c1340();
    _objc_release(lVar2);
    lVar14 = *(long *)(param_1 + 0x18);
    _objc_retain(lVar14);
    lVar2 = lVar14;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      lVar3 = lVar1;
      func_0x000100504554(lVar1,&PTR___NSConcreteGlobalBlock_110931d98);
      uVar4 = *(ulong *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c121820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_retain(lVar3);
      lVar6 = lVar3;
      func_0x00010bf52a60();
      lVar9 = lRam0000000000000000;
      lVar2 = lVar14;
      while (lVar6 != 0) {
        lVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar9) {
            _objc_enumerationMutation(lVar3);
          }
          lVar14 = *(long *)(lVar13 * 8);
          uVar4 = uVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(lVar14);
          _objc_release(lVar2);
          uVar7 = uVar4;
          func_0x00010c29ea60();
          _objc_release(uVar4);
          lVar2 = lVar3;
          if ((uVar7 & 1) == 0) goto LAB_10665e490;
          lVar13 = lVar13 + 1;
          lVar2 = lVar14;
        } while (lVar6 != lVar13);
        lVar6 = lVar3;
        func_0x00010bf52a60();
      }
      _objc_release(lVar3);
      lVar14 = 0;
LAB_10665e490:
      _objc_release(lVar2);
      _objc_release(uVar5);
      _objc_release(lVar3);
    }
    lVar2 = lVar1;
    func_0x000107a85430(lVar1,&PTR____CFConstantStringClassReference_110daafd8,
                        *(undefined8 *)(param_1 + 0x20),0,lVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126cc610;
    _objc_alloc();
    lVar6 = lVar12;
    func_0x00010bf5b380(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar12;
    func_0x00010c0b8240(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bf5b120(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar12;
    func_0x00010bf5b140(lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff9cc0();
    _objc_release(lVar10);
    _objc_release(lVar13);
    _objc_release(lVar3);
    _objc_release(lVar9);
    _objc_release(lVar6);
    puVar11 = PTR_PTR_1126c9028;
    _objc_alloc(PTR_PTR_1126c9028);
    puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000ac0(puVar11);
    _objc_release(puVar15);
    puVar15 = PTR_PTR_1126cc618;
    _objc_alloc(PTR_PTR_1126cc618);
    lVar6 = lVar12;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05b080(puVar15);
    _objc_release(lVar6);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(lVar2);
    _objc_release(lVar14);
    __Block_object_dispose(&uStack_130,8);
    __Block_object_dispose(&uStack_110,8);
    _objc_release(lVar12);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_130,8);
  lVar12 = 8;
  __Block_object_dispose(&uStack_110);
  __Unwind_Resume();
  func_0x00010c27dd80();
  *(bool *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = lVar12 == 3;
  *(ulong *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x18) =
       (ulong)*(byte *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18);
  return;
}



/* Entry: 10665e780; end: 10665e7cb;  */

void FUN_10665e780(long param_1,long param_2)

{
  func_0x00010c27dd80();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 == 3;
  *(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       (ulong)*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
  return;
}



/* Entry: 10665e7cc; end: 10665e7d3;  */

void FUN_10665e7cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15f2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_serverId_1126356d8);
  return;
}



/* Entry: 10665e7d4; end: 10665e7db; -[SCManagedStoryPlaybackDataProvider customStoryPlaybackSequenceByPublicationId:clientId:] */

undefined8 FUN_10665e7d4(void)

{
  return 0;
}



/* Entry: 10665e7dc; end: 10665e913; -[SCManagedStoryPlaybackDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:] */

void FUN_10665e7dc(long param_1,undefined8 param_2,undefined8 param_3)

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
    func_0x000107a85430(lVar1,lVar5,*(undefined8 *)(param_1 + 0x20),1,0);
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



/* Entry: 10665e914; end: 10665e91b; -[SCManagedStoryPlaybackDataProvider topicStoryPlaybackSequenceByTopicStoryId:] */

undefined8 FUN_10665e914(void)

{
  return 0;
}



/* Entry: 10665e91c; end: 10665e923; -[SCManagedStoryPlaybackDataProvider singleSnapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_10665e91c(void)

{
  return 0;
}



/* Entry: 10665e924; end: 10665e92b; -[SCManagedStoryPlaybackDataProvider mapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_10665e924(void)

{
  return 0;
}



/* Entry: 10665e92c; end: 10665e933; -[SCManagedStoryPlaybackDataProvider bundleStoryPlaybackSequenceByBundleStoryId:] */

undefined8 FUN_10665e92c(void)

{
  return 0;
}



/* Entry: 10665e934; end: 10665ed67; -[SCManagedStoryPlaybackDataProvider savedStoryPlaybackSequenceByStoryId:] */

void FUN_10665e934(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x2020000000;
    uStack_70 = 0;
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x2020000000;
    uStack_90 = 0;
    puStack_d0 = &uStack_d8;
    uStack_d8 = 0;
    uStack_c8 = 0x3032000000;
    pcStack_c0 = FUN_10665ed68;
    uStack_b8 = 0x10665ed78;
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110daafd8;
    puStack_100 = &uStack_108;
    uStack_108 = 0;
    uStack_f8 = 0x3032000000;
    pcStack_f0 = FUN_10665ed68;
    uStack_e8 = 0x10665ed78;
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110daafd8;
    lVar3 = lVar2;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c1340();
    _objc_release(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0b8220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c064420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    lVar3 = lVar1;
    func_0x000107a85430(lVar1,&PTR____CFConstantStringClassReference_110daafd8,
                        *(undefined8 *)(param_1 + 0x20),0,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cc610;
    _objc_alloc();
    lVar7 = lVar2;
    func_0x00010bf5b380(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c0b8240(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff9cc0();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    puVar10 = PTR_PTR_1126c9028;
    _objc_alloc(PTR_PTR_1126c9028);
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c0b8240();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000ac0(puVar10);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(puVar11);
    puVar11 = PTR_PTR_1126cc628;
    _objc_alloc(PTR_PTR_1126cc628);
    func_0x00010c00d500();
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(lVar3);
    _objc_release(uVar5);
    __Block_object_dispose(&uStack_108,8);
    _objc_release(ppuStack_e0);
    __Block_object_dispose(&uStack_d8,8);
    _objc_release(ppuStack_b0);
    __Block_object_dispose(&uStack_a8,8);
    __Block_object_dispose(&uStack_88,8);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10665ed68; end: 10665ed7f;  */

void FUN_10665ed68(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10665ed80; end: 10665ee2f;  */

void FUN_10665ed80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c078f60();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar1;
  uVar1 = param_2;
  func_0x00010bf15520();
  *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (long)(int)uVar1;
  uVar1 = param_2;
  func_0x00010c25b6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10665ee30; end: 10665ee33; -[SCManagedStoryPlaybackDataProvider triggerPaginationByCompositeId:identifier:] */

void FUN_10665ee30(void)

{
  return;
}



/* Entry: 10665ee34; end: 10665eeaf; -[SCManagedStoryPlaybackDataProvider registerSnapPlaybackInfos:withIdentifier:] */

void FUN_10665ee34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x30);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10665eeb0; end: 10665ef27; -[SCManagedStoryPlaybackDataProvider singleSnapPlaybackInfoWithIdentifier:] */

void FUN_10665eeb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10665ef28; end: 10665f037; -[SCManagedStoryPlaybackDataProvider prepareStoriesWithPlaybackOptions:options:viewSource:] */

void FUN_10665ef28(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = param_4;
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf31ee0();
  if ((int)uVar1 == 0x26) {
    uVar1 = param_3;
    func_0x00010664ea98(param_3,param_4,param_5,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    _objc_release(uVar4);
  }
  lVar2 = param_4;
  func_0x00010c0b8220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c064420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_4;
    func_0x00010c0b8220();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c064420();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar3;
    _objc_release(uVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10665f038; end: 10665f047; -[SCManagedStoryPlaybackDataProvider clearCommentsPayload] */

void FUN_10665f038(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10665f048; end: 10665f077; -[SCManagedStoryPlaybackDataProvider prepareViewStatesForPlayback:] */

void FUN_10665f048(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10665f078; end: 10665f07f; -[SCManagedStoryPlaybackDataProvider shouldUseMyStoryConfigProvider] */

undefined1 FUN_10665f078(long param_1)

{
  return *(undefined1 *)(param_1 + 0x34);
}



/* Entry: 10665f080; end: 10665f087; -[SCManagedStoryPlaybackDataProvider setShouldUseMyStoryConfigProvider:] */

void FUN_10665f080(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x34) = param_3;
  return;
}



/* Entry: 10665f088; end: 10665f08f; -[SCManagedStoryPlaybackDataProvider repliesTrayPayload] */

undefined8 FUN_10665f088(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10665f090; end: 10665f0bf; -[SCManagedStoryPlaybackDataProvider setRepliesTrayPayload:] */

void FUN_10665f090(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10665f0c0; end: 10665f11f; -[SCManagedStoryPlaybackDataProvider .cxx_destruct] */

void FUN_10665f0c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10665f120; end: 10665f26b; -[SCImpalaSnapInsightsChatPresenter initWithUserSession:messageActionHandler:lazyUserSnapPrivacyProvider:lazySnapchattersDataFetcher:conversationIdResolver:pageLauncher:] */

undefined1 *
FUN_10665f120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f2368;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10665f26c; end: 10665f3ab; -[SCImpalaSnapInsightsChatPresenter presentChatForUserId:conversationId:presentingViewController:] */

void FUN_10665f26c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10665f3ac;
  puStack_70 = &UNK_110850cf8;
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_88);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10665f3ac; end: 10665f3e3;  */

void FUN_10665f3ac(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10665f3e4; end: 10665f55b; -[SCImpalaSnapInsightsChatPresenter _fetchSnapchatterAndPresentChatForUserId:legacyConversationId:presentingViewController:] */

void FUN_10665f3e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c2448c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10665f55c; end: 10665f5b3;  */

void FUN_10665f55c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7a8e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10665f5b4; end: 10665f703; -[SCImpalaSnapInsightsChatPresenter _presentChatForUserId:snapchatter:legacyConversationId:presentingViewController:] */

void FUN_10665f5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bec9880(param_1);
  _objc_initWeak(auStack_48,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10665f704;
  puStack_78 = &UNK_11085ae98;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  uStack_70 = param_5;
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_6);
  uStack_58 = param_6;
  func_0x000100162d98("APPSTORE",&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10665f704; end: 10665f73b;  */

void FUN_10665f704(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7aa20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10665f73c; end: 10665f923; -[SCImpalaSnapInsightsChatPresenter _syncConversation:userId:snapchatter:] */

void FUN_10665f73c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_78;
  _objc_copyWeak(auStack_80);
  _objc_retain(param_3);
  func_0x00010bf504e0(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(puVar6);
  lVar5 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (*(long *)(param_3 + 0x20) != 0) {
    puVar7 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = *(undefined1 **)(param_3 + 0x28);
      _objc_retain(puVar7);
    }
    func_0x00010bfa5f60(*(undefined8 *)(lVar5 + 0x10));
    _objc_release(puVar7);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10665f924; end: 10665f9b3;  */

void FUN_10665f924(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar2);
    }
    func_0x00010bfa5f60(*(undefined8 *)(lVar1 + 0x10));
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10665f9b4; end: 10665fb2b; -[SCImpalaSnapInsightsChatPresenter _presentChatViewControllerForLegacyConversationId:userId:snapchatter:presentingViewController:] */

void FUN_10665f9b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126cb610;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar6 = param_5;
  func_0x000100bf119c(param_5);
  _objc_release(param_5);
  func_0x00010c038820(puVar1,param_2,uVar6,1);
  puVar2 = PTR_PTR_1126b3520;
  _objc_alloc(PTR_PTR_1126b3520);
  func_0x00010bffdd20();
  puVar3 = PTR_PTR_1126cc148;
  _objc_alloc(PTR_PTR_1126cc148);
  puVar4 = PTR_PTR_1126b01c0;
  func_0x00010c294260(PTR_PTR_1126b01c0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar5 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  func_0x00010c038f40();
  _objc_release(param_6);
  func_0x00010bffdb00(puVar3,param_2,puVar4,puVar2,puVar1,0,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c080();
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10665fb2c; end: 10665fb87; -[SCImpalaSnapInsightsChatPresenter .cxx_destruct] */

void FUN_10665fb2c(long param_1)

{
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



/* Entry: 10665fb88; end: 10665ff83; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler initWithUserSession:featureSettingsService:currentUsername:legacySendToScopeLauncher:conversationDestinationParser:blizzardLogger:customStoriesDataFetcher:storyShareSender:photoPermissionCoordinator:backgroundTaskWrapper:activeVideoPaths:saveStoryScopeExposer:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:circumstanceEngine:offPlatformLinkGenerationService:standardExternalContentShareScopeExposer:refreshTilesCallback:snapProShareSender:] */

undefined8 *
FUN_10665fb88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_70 = PTR_PTR_1126f2370;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_10;
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
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_19;
    _objc_release(uVar2);
    uVar2 = param_20;
    _objc_retainBlock();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_21);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_21;
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



/* Entry: 10665ff84; end: 10666009f; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler saveSnapProSnapForStoryId:clientId:uiContainer:snapPlaybackInfos:] */

void FUN_10665ff84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  iVar4 = (int)*(undefined8 *)(param_1 + 0x88);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000108f48390();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_6;
  if (iVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e581b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b10b0;
  _objc_alloc(PTR_PTR_1126b10b0);
  func_0x00010bfff0a0();
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x80),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1066600a0; end: 106660363; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler copyLinkWithMetaData:presentingViewController:] */

void FUN_1066600a0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b5bc0;
  _objc_retain(param_4);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar11 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar11 = 0;
  }
  _objc_retain(uVar11);
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar11;
  func_0x00010853acb4(uVar11,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar5 = uVar11;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfbf8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar8 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  _objc_release(param_4);
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain(uVar7);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2498;
  _objc_alloc(PTR_PTR_1126b2498);
  uVar10 = uVar11;
  func_0x00010bf5b080(uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  uVar11 = uVar10;
  func_0x00010bf5b440(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037ea0(puVar9);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  puVar13 = PTR_PTR_1126b24a0;
  _objc_alloc();
  puVar14 = puVar13;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0574c0(puVar13);
  _objc_release(puVar14);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xb0));
  _objc_release(puVar13);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar7);
  _objc_release(puVar8);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106660364; end: 106660403;  */

void FUN_106660364(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126ae558;
  puVar1 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x20),0,3,0,0);
  func_0x00010bfe9ca0(puVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106660404; end: 106660423; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler didCompleteSaveStoryScope:] */

void FUN_106660404(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x80));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106660424; end: 1066607c7; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler deleteSnapWithDataModel:insightsSnap:uiContainer:delegate:] */

void FUN_106660424(long param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = param_3;
  uVar11 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126cbca0;
  _objc_opt_class(PTR_PTR_1126cbca0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126b5bc0;
  if (uVar1 == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar3 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    uVar4 = uVar3;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = uVar3;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf5b1a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    lVar9 = param_1 + 8;
    _objc_loadWeakRetained(lVar9);
    lVar10 = lVar9;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010853acb4(uVar3,lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar9);
    uVar16 = uVar3;
    func_0x00010853a0e0();
    if (((int)uVar16 == 0) || (uVar16 = uVar8, func_0x00010c08fa60(), uVar16 != 0)) {
      uVar14 = uVar3;
      func_0x00010c25a280(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6b200();
      _objc_release(uVar14);
      puVar2 = PTR_PTR_1126cc630;
      _objc_alloc();
      func_0x00010bff3f60();
      uVar14 = param_4;
      func_0x00010bf6b8e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar14;
      func_0x00010bf28280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar11);
      _objc_release(uVar14);
      puVar12 = PTR_PTR_1126b10b8;
      _objc_alloc();
      uVar14 = uVar4;
      uVar11 = uVar5;
      func_0x00010bfff000();
      _objc_storeWeak(param_1 + 0xa0,param_6);
      uVar16 = *(ulong *)(param_1 + 0x98);
      if (uVar16 != 0) {
        puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = param_5;
        func_0x00010bf239c0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        uVar14 = uVar16;
        func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x90));
        _objc_release(uVar16);
      }
      _objc_release(puVar12);
      _objc_release(puVar2);
    }
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    uVar14 = 0;
    func_0x0001079fa568(param_3,0,0);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar14);
  _objc_retain(uVar11);
  lVar15 = param_3 + 0xa0;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar15 != 0) {
    lVar15 = param_3 + 0xa0;
    _objc_loadWeakRetained(lVar15);
    func_0x00010bf7a900();
    _objc_release(lVar15);
    _objc_storeWeak(param_3 + 0xa0,0);
  }
  lVar15 = *(long *)(param_3 + 0x90);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar15 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_3 + 0x90));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar14);
  return;
}



/* Entry: 1066607c8; end: 10666087b; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler didSelectDeleteStorySnaps:clientIdsBeingDeleted:] */

void FUN_1066607c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0xa0;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0xa0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf7a900();
    _objc_release(lVar1);
    _objc_storeWeak(param_1 + 0xa0,0);
  }
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x90));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10666087c; end: 1066608c3; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler didCancelDeleteStorySnap] */

void FUN_10666087c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x90));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1066608c4; end: 1066608db; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler didDeleteSnapProStorySnaps:] */

void FUN_1066608c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001066608d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 1066608dc; end: 106660a0f; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler sendSnapWithDataModel:shareableMedias:metadataFromStoryCard:presentingViewController:] */

void FUN_1066608dc(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar5 = PTR_PTR_1126cbca0;
  _objc_opt_class(PTR_PTR_1126cbca0);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar5);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar3);
  if (param_5 != 0 || uVar1 != 0) {
    _objc_retain(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x20) = uVar1;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = param_5;
    _objc_release(uVar3);
    lVar4 = param_4;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR_PTR_1126c90a0;
      _objc_alloc(PTR_PTR_1126c90a0);
      func_0x00010c031ee0();
    }
    func_0x00010be47aa0(param_1);
    _objc_release(puVar5);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106660a10; end: 106660b33; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler handleStartSavingStoryId:] */

void FUN_106660a10(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108e00cf8();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000108e00d3c();
  _objc_release(uVar4);
  if (((uVar3 & 1) == 0) && ((uint)uVar5 == 0)) {
    return;
  }
  ppuVar6 = &PTR____CFConstantStringClassReference_110db7638;
  if (((uint)uVar3 & (uint)uVar5) == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110db7658;
  }
  if ((uint)uVar3 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110db7678;
  }
  func_0x00010bcbeaa8(ppuVar6,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126afca8;
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2387a0(0x3ff0000000000000,puVar1);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 106660b34; end: 106660c73; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler handleSavedStoryId:storyDisplayName:error:] */

void FUN_106660b34(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long in_x4;
  uint uVar8;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108e00cf8();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x000108e00d3c();
  _objc_release(uVar4);
  if (in_x4 == 0) {
    uVar8 = (uint)uVar3;
    if (((uVar8 | (uint)uVar2) & 1) == 0) {
      return;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110db76d8;
    if ((uVar8 & (uint)uVar2) == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110db76f8;
    }
    if (uVar8 == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110db7718;
    }
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110db7738;
  }
  func_0x00010bcbeaa8(ppuVar5,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126afca8;
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2387a0(0x3ff0000000000000,puVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 106660c74; end: 106660e57; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler _launchLegacySendToScopeFromViewController:previewViewModel:] */

void FUN_106660c74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1a18;
  if (*(long *)(param_1 + 0x38) == 0) {
    _objc_retain(param_4);
    _objc_alloc(puVar1);
    puVar3 = PTR_DAT_1126a4e58;
    _objc_retain(param_3);
    uVar2 = param_3;
    func_0x00010010fab4(param_3,puVar3);
    uVar5 = param_3;
    if ((int)uVar2 == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    func_0x00010c0f2220(uVar5);
    _objc_release(uVar5);
    func_0x00010c048720(puVar1);
    puVar3 = PTR_PTR_1126b1a20;
    _objc_alloc(PTR_PTR_1126b1a20);
    func_0x00010c01d640();
    if (*(long *)(param_1 + 0x48) == 0) {
      puVar4 = PTR_PTR_1126b1a28;
      _objc_alloc();
      func_0x00010c038ea0();
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      *(undefined **)(param_1 + 0x48) = puVar4;
      _objc_release(uVar5);
      puVar4 = PTR_DAT_1126a5590;
      _objc_retain(param_3);
      uVar2 = param_3;
      func_0x00010010fab4(param_3,puVar4);
      uVar5 = param_3;
      if ((int)uVar2 == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(param_3);
      _objc_storeWeak(param_1 + 0xd0,uVar5);
      _objc_release(uVar5);
    }
    puVar4 = PTR_PTR_1126b1a30;
    _objc_alloc();
    func_0x00010bff5040();
    _objc_release(param_4);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar4;
    _objc_retain(puVar4);
    _objc_release(uVar5);
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106660e58; end: 10666105f; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler _sendToSelection:] */

void FUN_106660e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afca8;
  if ((*(long *)(param_1 + 0x20) != 0) || (*(long *)(param_1 + 0x28) != 0)) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e1f218;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f218,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238760(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    lVar12 = *(long *)(param_1 + 0x28);
    if (lVar12 == 0) {
      lVar12 = *(long *)(param_1 + 0x20);
      func_0x0001071e91d0(lVar12,*(undefined8 *)(param_1 + 0xb8));
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar12);
    }
    uVar5 = param_3;
    func_0x00010c122f00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bfcf800(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010befd440(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + 8;
    _objc_loadWeakRetained(lVar8);
    uVar11 = *(undefined8 *)(param_1 + 0x50);
    uVar15 = *(undefined8 *)(param_1 + 0x68);
    uVar13 = *(undefined8 *)(param_1 + 200);
    uVar14 = *(undefined8 *)(param_1 + 0x88);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c15d5c0();
    _objc_retainAutoreleasedReturnValue();
    FUN_106661eec(param_3,uVar5,uVar6,uVar7,lVar12,lVar8,uVar11,uVar15,uVar13,uVar14,uVar10,
                  PTR___dispatch_main_q_11034be20,&PTR___NSConcreteGlobalBlock_110931de8);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106661060; end: 106661117;  */

void FUN_106661060(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1c5f8;
  if (param_2 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e05498;
  }
  func_0x00010bcbeaa8(ppuVar2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 106661118; end: 106661157; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler legacySendToScopeDidDismiss:selectedItems:] */

void FUN_106661118(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  func_0x00010bf94c20(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdfd570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didDismissSendViewController_11255cef8);
  return;
}



/* Entry: 106661158; end: 106661257; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler legacySendToScopeWillSend:sendToSelection:] */

void FUN_106661158(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010bf6f440(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106661258; end: 10666128b;  */

void FUN_106661258(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10666128c; end: 10666136f; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler _didDetachUIWithSendToSelection:] */

void FUN_10666128c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf94c40(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106661370; end: 1066613bb;  */

void FUN_106661370(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfd560();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea0d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066613bc; end: 1066613f7; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler _didDismissSendViewController] */

void FUN_1066613bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0xd0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0cfa60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd0,0);
  return;
}



/* Entry: 1066613f8; end: 1066613ff; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_1066613f8(void)

{
  return 0;
}



/* Entry: 106661400; end: 106661447; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler shareSheetDismissedWithShareDestination:] */

void FUN_106661400(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xb0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}


