/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107de2cc8; end: 107de2cd7; -[SCOperaVideoControlsView allowsTapToSeek] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107de2cc8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276fa24);
}



/* Entry: 107de2cd8; end: 107de2ce7; -[SCOperaVideoControlsView setAllowsTapToSeek:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de2cd8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276fa24) = param_3;
  return;
}



/* Entry: 107de2ce8; end: 107de2d07; -[SCOperaVideoControlsView delegateViewForGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de2ce8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276fa38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107de2d08; end: 107de2d1b; -[SCOperaVideoControlsView setDelegateViewForGestures:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de2d08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276fa38,param_3);
  return;
}



/* Entry: 107de2d1c; end: 107de2d6f; -[SCOperaVideoControlsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de2d1c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276fa38);
  _objc_destroyWeak(param_1 + _DAT_11276fa34);
  _objc_destroyWeak(param_1 + _DAT_11276fa30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fa28,0);
  return;
}



/* Entry: 107de2d70; end: 107de2ebb; -[SCOperaVideoControlsViewController enableControls:shouldShowControls:viewModel:videoViewControllingDelegate:dataSource:videoPlayerStateProvider:delegateViewForGestures:isMediaLandscape:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de2d70(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined1 param_10)

{
  long lVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_9);
  *(undefined1 *)(param_1 + _DAT_11276fa3c) = param_10;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bed6180(param_1);
  lVar1 = (long)_DAT_11276fa40;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c221440(*(undefined8 *)(param_1 + lVar1));
  _objc_release(param_6);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar1));
  _objc_release(param_7);
  _objc_storeWeak(param_1 + _DAT_11276fa44,param_8);
  _objc_release(param_8);
  if (param_4 != 0) {
    func_0x00010c2849e0(*(undefined8 *)(param_1 + lVar1));
  }
  func_0x00010c18b700(*(undefined8 *)(param_1 + lVar1));
  if (*(long *)(param_1 + _DAT_11276fa48) - 1U < 4) {
    func_0x00010c228ae0(*(undefined8 *)(param_1 + lVar1));
  }
  else if (*(long *)(param_1 + _DAT_11276fa48) == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
  }
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107de2ebc; end: 107de2fab; -[SCOperaVideoControlsViewController _createPlaybackControlsViewForType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de2ebc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *unaff_x19;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      unaff_x19 = PTR_PTR_1126d6cb0;
      _objc_alloc(PTR_PTR_1126d6cb0);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c039f60(unaff_x19,param_2,puVar1,0,*(undefined1 *)(param_1 + _DAT_11276fa3c));
      _objc_release(puVar1);
      goto LAB_107de2f3c;
    }
    puVar1 = PTR_PTR_1126d7e60;
    if (param_3 != 1) goto LAB_107de2f3c;
  }
  else {
    puVar1 = PTR_PTR_1126d7e68;
    if (param_3 != 2) {
      if (param_3 == 3) {
        unaff_x19 = PTR_PTR_1126d7e70;
        _objc_opt_new(PTR_PTR_1126d7e70);
        goto LAB_107de2f3c;
      }
      puVar1 = PTR_PTR_1126d7e60;
      if (param_3 != 4) goto LAB_107de2f3c;
    }
  }
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  unaff_x19 = puVar1;
LAB_107de2f3c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 107de2fac; end: 107de302b; -[SCOperaVideoControlsViewController updateScrubberSafeAreaHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de2fac(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126d7e70;
  uVar4 = *(ulong *)(param_2 + _DAT_11276fa40);
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
  if (uVar1 != 0) {
    func_0x00010c288540(param_1,uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107de302c; end: 107de3123; -[SCOperaVideoControlsViewController setupControlsForViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de302c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010bed6180(param_1,param_2,param_3);
  lVar3 = (long)_DAT_11276fa40;
  func_0x00010c2849e0(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
  lVar2 = *(long *)(param_1 + _DAT_11276fa48);
  if (lVar2 == 4) {
    func_0x00010c236c40(*(undefined8 *)(param_1 + lVar3));
  }
  else if (lVar2 == 1) {
    uVar1 = param_3;
    func_0x00010befe400(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0beba0();
    _objc_release(uVar1);
  }
  else if (lVar2 == 0) {
    func_0x00010c272b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107de3124; end: 107de313f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de3124(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276fa40);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9f570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_fadeControls_1125c5700);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c236c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_showControls_11266b538);
  return;
}



/* Entry: 107de3140; end: 107de314f; -[SCOperaVideoControlsViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de3140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276fa4c),PTR_s_invalidate_1125f8150);
  return;
}



/* Entry: 107de3150; end: 107de31a7; -[SCOperaVideoControlsViewController didBeginSeeking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de3150(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + _DAT_11276fa48) == 1) {
    lVar3 = (long)_DAT_11276fa4c;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
    func_0x00010c082b20();
    if (iVar1 != 0) {
      func_0x00010c069d00(*(undefined8 *)(param_1 + lVar3));
    }
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107de31a8; end: 107de31db; -[SCOperaVideoControlsViewController didStartToPlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de31a8(long param_1)

{
  if (*(long *)(param_1 + _DAT_11276fa48) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c272af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11276fa40),PTR_s_togglePlayButton__11267a4e0,0);
    return;
  }
  if (*(long *)(param_1 + _DAT_11276fa48) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010beabd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupControlsFadeTimer_1125888e8);
    return;
  }
  return;
}



/* Entry: 107de31dc; end: 107de3267; -[SCOperaVideoControlsViewController fadeInControls] */

void FUN_107de31dc(undefined8 param_1,undefined8 param_2)

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
  pcStack_28 = FUN_107de3268;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107de327c;
  puStack_48 = &UNK_110841f20;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,&puStack_38,
                      &puStack_60);
  return;
}



/* Entry: 107de3268; end: 107de3283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de3268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276fa40),
             PTR_s_showControls_11266b538);
  return;
}



/* Entry: 107de3284; end: 107de32b3; -[SCOperaVideoControlsViewController didToggleVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de3284(long param_1)

{
  func_0x00010c272600(*(undefined8 *)(param_1 + _DAT_11276fa40));
                    /* WARNING: Could not recover jumptable at 0x00010beabd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupControlsFadeTimer_1125888e8);
  return;
}



/* Entry: 107de32b4; end: 107de32e3; -[SCOperaVideoControlsViewController toggleRotateButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de32b4(long param_1)

{
  func_0x00010c272b60(*(undefined8 *)(param_1 + _DAT_11276fa40));
                    /* WARNING: Could not recover jumptable at 0x00010beabd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupControlsFadeTimer_1125888e8);
  return;
}



/* Entry: 107de32e4; end: 107de3353; -[SCOperaVideoControlsViewController didPause] */

/* WARNING: Possible PIC construction at 0x000107de331c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107de3320) */
/* WARNING: Removing unreachable block (ram,0x00010beabd00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de32e4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_11276fa48) == 4) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276fa40);
  }
  else {
    if (*(long *)(param_1 + _DAT_11276fa48) != 1) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276fa40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c236c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_showControls_11266b538);
  return;
}



/* Entry: 107de3354; end: 107de3383; -[SCOperaVideoControlsViewController didSeekToTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de3354(long param_1)

{
  func_0x00010c236c40(*(undefined8 *)(param_1 + _DAT_11276fa40));
                    /* WARNING: Could not recover jumptable at 0x00010beabd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupControlsFadeTimer_1125888e8);
  return;
}



/* Entry: 107de3384; end: 107de3387; -[SCOperaVideoControlsViewController hideControls] */

void FUN_107de3384(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beabd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupControlsFadeTimer_1125888e8);
  return;
}



/* Entry: 107de3388; end: 107de338f; -[SCOperaVideoControlsViewController fadeOutControls] */

void FUN_107de3388(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9f7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fadeOutControlsWithCompletion__1125c5798,0);
  return;
}



/* Entry: 107de3390; end: 107de3453; -[SCOperaVideoControlsViewController fadeOutControlsWithCompletion:] */

void FUN_107de3390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
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
  pcStack_48 = FUN_107de3454;
  puStack_40 = &UNK_110842e18;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x107de3468;
  puStack_68 = &UNK_110842508;
  uStack_60 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010bf03440(0x3fc999999999999a,0,puVar1,param_2,4,&puStack_58,&puStack_80);
  _objc_release(uStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 107de3454; end: 107de347b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de3454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9f570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276fa40),
             PTR_s_fadeControls_1125c5700);
  return;
}



/* Entry: 107de347c; end: 107de3503; -[SCOperaVideoControlsViewController toggleControlsVisibilityAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de347c(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276fa40;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010bf500a0();
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9f570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_fadeControls_1125c5700);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c236c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_showControls_11266b538);
    return;
  }
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9f7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fadeOutControls_1125c5790);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf9f5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fadeInControls_1125c5720);
  return;
}



/* Entry: 107de3504; end: 107de35a7; -[SCOperaVideoControlsViewController _setupControlsFadeTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de3504(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276fa4c;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar5));
  lVar1 = param_1 + _DAT_11276fa44;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c29a520();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c1503c0(0x4008000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                        PTR_s_fadeOutControls_1125c5790,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 107de35a8; end: 107de36a3; -[SCOperaVideoControlsViewController _updateControlsViewIfNecessaryWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de35a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11276fa40;
  if (*(long *)(param_1 + lVar4) != 0) {
    lVar1 = param_3;
    func_0x00010bf50000();
    if (lVar1 == *(long *)(param_1 + _DAT_11276fa48)) goto LAB_107de3690;
  }
  lVar1 = param_3;
  func_0x00010bf50000();
  *(long *)(param_1 + _DAT_11276fa48) = lVar1;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
  lVar1 = param_3;
  func_0x00010bf50000(param_3);
  lVar2 = param_1;
  func_0x00010bdf1840(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = lVar2;
  _objc_release(uVar3);
  func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar4),param_2,0x12);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar1);
LAB_107de3690:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107de36a4; end: 107de36b3; -[SCOperaVideoControlsViewController playbackControlsView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107de36a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fa40);
}



/* Entry: 107de36b4; end: 107de36f3; -[SCOperaVideoControlsViewController setPlaybackControlsView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de36b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276fa40;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107de36f4; end: 107de3703; -[SCOperaVideoControlsViewController videoControlsType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107de36f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fa48);
}



/* Entry: 107de3704; end: 107de374f; -[SCOperaVideoControlsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de3704(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276fa40,0);
  _objc_destroyWeak(param_1 + _DAT_11276fa44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fa4c,0);
  return;
}



/* Entry: 107de3750; end: 107de3853; -[SCOperaVideoScrubbingControlsView setupGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de3750(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fb2e0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_setupGesture_112667ce0);
  lVar5 = (long)_DAT_11276fa54;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010bf6b140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  if (lVar3 != 0) {
    lVar1 = lVar3;
  }
  _objc_retain(lVar1);
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126d7e78;
  _objc_alloc();
  func_0x00010c050900();
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar4;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010bef9040(lVar1);
  *(undefined8 *)(param_1 + _DAT_11276fa58) = 0x4044000000000000;
  _objc_release(lVar1);
  return;
}



/* Entry: 107de3854; end: 107de39e7; -[SCOperaVideoScrubbingControlsView _didPanView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de3854(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  func_0x00010c09ef00(param_4,param_3,param_2);
  dVar3 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  lVar1 = param_2;
  dVar4 = dVar3;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    func_0x00010c299b80(&uStack_68,lVar1,param_3,param_2);
  }
  _CMTimeGetSeconds(&uStack_68);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c252440();
  _objc_release(param_4);
  if (lVar1 - 3U < 3) {
    func_0x00010bdc3cc0(param_1,dVar3 + -120.0,dVar4,param_2);
    func_0x00010be9d300(param_2,param_3,1);
    func_0x00010c299980(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c299a20();
    _objc_release(param_2);
  }
  else {
    if (lVar1 != 2) {
      if (lVar1 != 1) {
        return;
      }
      lVar1 = param_2;
      func_0x00010c299980(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_2 + _DAT_11276fa5c);
      func_0x00010c0f5de0(uVar2);
      func_0x00010c299b00(lVar1,param_3,param_2,uVar2);
      _objc_release(lVar1);
    }
    func_0x00010bdc3cc0(param_1,dVar3 + -120.0,dVar4,param_2);
    func_0x00010be9d300(param_2,param_3,0);
  }
  return;
}



/* Entry: 107de39e8; end: 107de3a1f; -[SCOperaVideoScrubbingControlsView _absoluteTargetTimeForXPosition:scrubbableWidth:duration:] */

double FUN_107de39e8(double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1 + -60.0;
  if (param_2 <= param_1 + -60.0) {
    dVar1 = param_2;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar2 = 0.99;
  if (dVar1 / param_2 <= 0.99) {
    dVar2 = dVar1 / param_2;
  }
  return param_3 * dVar2;
}



/* Entry: 107de3a20; end: 107de3ae7; -[SCOperaVideoScrubbingControlsView adjustForTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de3a20(double param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fb2e0;
  dVar3 = param_1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_adjustForTime__11259cfe8);
  lVar2 = param_2;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010c299b80(&uStack_58,lVar2);
  }
  _CMTimeGetSeconds(&uStack_58);
  _objc_release(lVar2);
  bVar1 = true;
  if ((dVar3 != 0.0) && (bVar1 = false, !NAN(param_1))) {
    bVar1 = param_1 == 0.0;
  }
  dVar4 = 0.0;
  if (!bVar1) {
    dVar4 = param_1 / dVar3;
  }
  if ((ulong)ABS(dVar4) < 0x7ff0000000000000) {
    *(double *)(param_2 + _DAT_11276fa50) = dVar4;
  }
  return;
}



/* Entry: 107de3ae8; end: 107de3bcf; -[SCOperaVideoScrubbingControlsView _seekToTargetTime:isSeekDone:] */

void FUN_107de3ae8(double param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  double dVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_2;
  dVar2 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010c299b80(&uStack_58,lVar1,param_3,param_2);
  }
  _CMTimeGetSeconds(&uStack_58);
  _objc_release(lVar1);
  if (!NAN(dVar2)) {
    if (param_4 == 0) {
      func_0x00010c299980(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c299a00(param_1);
    }
    else {
      func_0x00010befd900(param_1);
      func_0x00010c299980(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c299a40(param_1);
    }
    _objc_release(param_2);
  }
  return;
}



/* Entry: 107de3bd0; end: 107de3c07; -[SCOperaVideoScrubbingControlsView updateControlsWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de3bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276fa5c);
  *(undefined8 *)(param_1 + _DAT_11276fa5c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107de3c08; end: 107de3c0b; -[SCOperaVideoScrubbingControlsView updatePanGestureSafeAreaHeight:] */

void FUN_107de3c08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1735f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setBottomHeightForScrubbingArea__11263a798);
  return;
}



/* Entry: 107de3c0c; end: 107de3cb3; -[SCOperaVideoScrubbingControlsView gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_107de3c0c(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
             undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_7 == *(long *)(param_5 + _DAT_11276fa54)) {
    func_0x00010c09ef00(param_8,param_6,param_5);
    func_0x00010bf20c00(param_5);
    func_0x00010bf201a0(param_5);
    if (param_2 < param_4 - param_1) {
      uVar1 = 0;
      goto LAB_107de3c84;
    }
  }
  uVar1 = 1;
LAB_107de3c84:
  _objc_release(param_8);
  _objc_release(param_7);
  return uVar1;
}



/* Entry: 107de3cb4; end: 107de3d03; -[SCOperaVideoScrubbingControlsView gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107de3cb4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11276fa54);
  if (param_3 == lVar1) {
    func_0x00010c264780(lVar1,param_2,param_1);
    if (lVar1 + 1U < 4) {
      uVar2 = 4 >> (ulong)((uint)(lVar1 + 1U) & 0x1f);
      goto LAB_107de3cfc;
    }
  }
  uVar2 = 1;
LAB_107de3cfc:
  return uVar2 & 1;
}



/* Entry: 107de3d04; end: 107de3d0b; -[SCOperaVideoScrubbingControlsView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_107de3d04(void)

{
  return 0;
}



/* Entry: 107de3d0c; end: 107de3d9b; -[SCOperaVideoScrubbingControlsView gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107de3d0c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  _objc_release(param_4);
  if ((uVar3 & 1) == 0) {
    bVar1 = param_3 != *(long *)(param_1 + _DAT_11276fa54);
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107de3d9c; end: 107de3db3; -[SCOperaVideoScrubbingControlsView gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107de3d9c(long param_1,undefined8 param_2,long param_3)

{
  return param_3 == *(long *)(param_1 + _DAT_11276fa54);
}



/* Entry: 107de3db4; end: 107de3dc3; -[SCOperaVideoScrubbingControlsView bottomHeightForScrubbingArea] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107de3db4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fa58);
}



/* Entry: 107de3dc4; end: 107de3dd3; -[SCOperaVideoScrubbingControlsView setBottomHeightForScrubbingArea:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de3dc4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276fa58) = param_1;
  return;
}



/* Entry: 107de3dd4; end: 107de3e13; -[SCOperaVideoScrubbingControlsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de3dd4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276fa5c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fa54,0);
  return;
}



/* Entry: 107de3e14; end: 107de3fb7; -[SCOperaPlaybackMonitorManager initWithNetworkBandwidthEstimator:operaDebugServices:] */

undefined8 *
FUN_107de3e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb2e8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[5];
    puVar1[5] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010bfdea80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0ff6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[5];
    puVar1[5] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107de3fb8; end: 107de3fbf;  */

void FUN_107de3fb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ff0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_playbackDebugOverlay_11261d658);
  return;
}



/* Entry: 107de3fc0; end: 107de3ff3; -[SCOperaPlaybackMonitorManager activateAllMonitors] */

void FUN_107de3fc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be3dec0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc4db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activateMonitorObserving_11254ed08);
    return;
  }
  return;
}



/* Entry: 107de3ff4; end: 107de4027; -[SCOperaPlaybackMonitorManager deactivateAllMonitors] */

void FUN_107de3ff4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be3f7c0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdf8410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deactivateMonitorObserving_11255baa0);
    return;
  }
  return;
}



/* Entry: 107de4028; end: 107de4053; -[SCOperaPlaybackMonitorManager teardown] */

void FUN_107de4028(long param_1)

{
  func_0x00010bdf8400();
  func_0x00010bfe1560(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 107de4054; end: 107de4137; -[SCOperaPlaybackMonitorManager attachPlaybackMonitorTo:] */

void FUN_107de4054(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar4 = *(ulong *)(param_1 + 8);
    lVar1 = param_3;
    func_0x00010c101060(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar4,param_2,lVar1);
    _objc_release(lVar1);
    if ((uVar4 & 1) == 0) {
      lVar1 = param_3;
      func_0x00010c101060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        puVar2 = PTR_PTR_1126d7e80;
        _objc_alloc(PTR_PTR_1126d7e80);
        func_0x00010c0270e0(0x3ff0000000000000);
        func_0x00010c1ddca0(param_3,param_2,puVar2);
        _objc_release(puVar2);
      }
      uVar3 = *(undefined8 *)(param_1 + 8);
      lVar1 = param_3;
      func_0x00010c101060(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3,param_2,lVar1);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107de4138; end: 107de41bf; -[SCOperaPlaybackMonitorManager detachPlaybackMonitorFrom:] */

void FUN_107de4138(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c101060(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c101060(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f1e0();
  _objc_release(uVar1);
  func_0x00010c1ddca0(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107de41c0; end: 107de41cf; -[SCOperaPlaybackMonitorManager updateLogViewerVisibility:] */

void FUN_107de41c0(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf85310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_display_1125bee68);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_hide_1125d5f18);
  return;
}



/* Entry: 107de41d0; end: 107de4473; -[SCOperaPlaybackMonitorManager _activateMonitorObserving] */

void FUN_107de41d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x18));
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar10 = *(long *)(param_1 + 8);
  _objc_retain(lVar10);
  lVar2 = lVar10;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar10);
        }
        uVar11 = *(ulong *)(lStack_128 + lVar13 * 8);
        uVar3 = uVar11;
        func_0x00010bfd6400();
        if ((uVar3 & 1) == 0) {
          func_0x00010beef6e0(uVar11);
          func_0x00010c0ff6c0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(uVar11);
        }
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      lVar2 = lVar10;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar10);
  _objc_initWeak(auStack_138,param_1);
  puVar5 = PTR_PTR_1126ae6b8;
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c0cab40(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c0e0e60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_138;
  _objc_copyWeak(auStack_140,puVar9);
  puVar8 = puVar7;
  func_0x00010c25ff60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010bdc4e40(param_1);
  func_0x00010bdc4e20(param_1);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(puVar9);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c0d9840(*(undefined8 *)(puVar1 + 0x10));
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 107de4474; end: 107de44c3;  */

void FUN_107de4474(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107de44c4; end: 107de45cf; -[SCOperaPlaybackMonitorManager _deactivateMonitorObserving] */

void FUN_107de44c4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x18));
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 8);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(ulong *)(lStack_108 + lVar6 * 8);
        uVar2 = uVar4;
        func_0x00010bfd6400();
        if ((uVar2 & 1) == 0) {
          func_0x00010bf65b20(uVar4);
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107de45d0; end: 107de45d3; -[SCOperaPlaybackMonitorManager _activatePlaybackLogViewer] */

void FUN_107de45d0(void)

{
  return;
}



/* Entry: 107de45d4; end: 107de45d7; -[SCOperaPlaybackMonitorManager _activatePlaybackDebugOverlay] */

void FUN_107de45d4(void)

{
  return;
}



/* Entry: 107de45d8; end: 107de45df; -[SCOperaPlaybackMonitorManager _isActivationAllowed] */

undefined8 FUN_107de45d8(void)

{
  return 0;
}



/* Entry: 107de45e0; end: 107de45e7; -[SCOperaPlaybackMonitorManager _isDeactivationAllowed] */

undefined8 FUN_107de45e0(void)

{
  return 1;
}



/* Entry: 107de45e8; end: 107de45ef; -[SCOperaPlaybackMonitorManager allPlaybackLogs] */

undefined8 FUN_107de45e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107de45f0; end: 107de465b; -[SCOperaPlaybackMonitorManager .cxx_destruct] */

void FUN_107de45f0(long param_1)

{
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



/* Entry: 107de465c; end: 107de4667; +[SCOperaPlayerView layerClass] */

void FUN_107de465c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  return;
}



/* Entry: 107de4668; end: 107de466f; -[SCOperaPlayerView initWithFrame:] */

void FUN_107de4668(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c014b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFrame_prerollOnReadyEnab_1125e2ca0,0)
  ;
  return;
}



/* Entry: 107de4670; end: 107de4683; -[SCOperaPlayerView initWithPrerollOnReadyEnabled:] */

void FUN_107de4670(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c014b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),param_1,
             PTR_s_initWithFrame_prerollOnReadyEnab_1125e2ca0);
  return;
}



/* Entry: 107de4684; end: 107de477f; -[SCOperaPlayerView initWithFrame:prerollOnReadyEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107de4684(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fb2f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b44c8;
    _objc_alloc();
    func_0x00010c030dc0();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276fa7c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276fa7c) = puVar2;
    _objc_release(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c100c60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2218a0();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276fa80);
    *(undefined **)((long)puVar1 + (long)_DAT_11276fa80) = puVar2;
    _objc_release(uVar4);
    lRam0000000113727f98 = lRam0000000113727f98 + 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276fa84) = param_3;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107de4780; end: 107de491b; -[SCOperaPlayerView setPlayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de4780(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = param_1;
  func_0x00010c100c60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  if (lVar1 != param_3) {
    lVar5 = (long)_DAT_11276fa88;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = param_1;
    func_0x00010c100c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dda40();
    _objc_release(lVar5);
    lVar3 = *(long *)(param_1 + _DAT_11276fa80);
    func_0x00010c1eb900();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010c101000(*(undefined8 *)(lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
      lVar5 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + _DAT_11276fa80),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 107de491c; end: 107de492b; -[SCOperaPlayerView addPlayerChangeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de491c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276fa80),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 107de492c; end: 107de493b; -[SCOperaPlayerView removePlayerChangeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de492c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276fa80),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 107de493c; end: 107de4b73; -[SCOperaPlayerView setPlayerItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de493c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  lVar7 = (long)_DAT_11276fa8c;
  lVar1 = *(long *)(param_2 + lVar7);
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar1 != lVar2) {
    func_0x00010bddaba0(param_2);
    lVar1 = (long)_DAT_11276fa88;
    lVar2 = *(long *)(param_2 + lVar1);
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_2 + lVar1);
      func_0x00010bf5f0a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_48,uVar3);
      _objc_release(uVar3);
      uVar6 = *(undefined8 *)(param_2 + _DAT_11276fa7c);
      uVar3 = *(undefined8 *)(param_2 + lVar1);
      func_0x00010bf5f0a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c281a80(uVar6);
      _objc_release(uVar3);
      func_0x00010c130d60(*(undefined8 *)(param_2 + lVar1));
      uVar3 = *(undefined8 *)(param_2 + _DAT_11276fa90);
      puVar4 = auStack_48;
      _objc_loadWeakRetained(puVar4);
      func_0x00010bf79a40(uVar3);
      _objc_release(puVar4);
      _objc_destroyWeak(auStack_48);
    }
    if (param_4 == 0) {
      uVar3 = *(undefined8 *)(param_2 + lVar7);
      *(undefined8 *)(param_2 + lVar7) = 0;
      _objc_release(uVar3);
      *(undefined1 *)(param_2 + _DAT_11276fa94) = 0;
    }
    else {
      _objc_retain(param_4);
      uVar3 = *(undefined8 *)(param_2 + lVar7);
      *(long *)(param_2 + lVar7) = param_4;
      _objc_release(uVar3);
      *(undefined8 *)(param_2 + _DAT_11276fa98) = 0;
      _CACurrentMediaTime();
      *(undefined8 *)(param_2 + _DAT_11276fa9c) = param_1;
      *(undefined1 *)(param_2 + _DAT_11276fa94) = *(undefined1 *)(param_2 + _DAT_11276fa84);
      func_0x00010c130d60(*(undefined8 *)(param_2 + lVar1));
      func_0x00010bf72300(*(undefined8 *)(param_2 + _DAT_11276fa90));
      uVar3 = *(undefined8 *)(param_2 + _DAT_11276fa7c);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e0760(uVar3);
      _objc_release(puVar5);
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107de4b74; end: 107de4c93; -[SCOperaPlayerView _playerItemStatusDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de4b74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c067fc0();
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar3;
  func_0x00010c067fc0();
  _objc_release(lVar3);
  if (lVar1 == 0 && lVar2 == 1) {
    lVar3 = (long)_DAT_11276fa98;
    dVar4 = *(double *)(param_1 + lVar3);
    if (dVar4 == 0.0) {
      _CACurrentMediaTime();
      *(double *)(param_1 + lVar3) = dVar4 - *(double *)(param_1 + _DAT_11276fa9c);
      func_0x00010c281a80(*(undefined8 *)(param_1 + _DAT_11276fa7c));
    }
    if (*(char *)(param_1 + _DAT_11276fa94) == '\x01') {
      *(undefined1 *)(param_1 + _DAT_11276fa94) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be79b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (0x3f800000,param_1,PTR_s__prerollIfReadyAtRate__11257c070);
      return;
    }
  }
  return;
}



/* Entry: 107de4c94; end: 107de4ddf; -[SCOperaPlayerView _prerollIfReadyAtRate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de4c94(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  if (*(char *)(param_2 + _DAT_11276fa84) == '\x01') {
    lVar4 = *(long *)(param_2 + _DAT_11276fa88);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar4 != 0 && lVar2 != 0) && (lVar3 = lVar2, func_0x00010c252d60(), lVar3 == 1)) {
      lVar1 = param_2 + _DAT_11276fa94;
      lVar3 = *(long *)(lVar1 + 8) + 1;
      *(long *)(lVar1 + 8) = lVar3;
      *(undefined1 *)(lVar1 + 1) = 1;
      _objc_initWeak(auStack_48,param_2);
      _objc_copyWeak(auStack_60,auStack_48);
      uStack_50 = (undefined4)param_1;
      lStack_58 = lVar3;
      func_0x00010c10a7e0(param_1,lVar4);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar2);
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 107de4de0; end: 107de4e9f;  */

void FUN_107de4de0(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined4 *)(param_1 + 0x30);
  uStack_34 = param_2;
  func_0x00010c0f88c0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107de4ea0; end: 107de4ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de4ea0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x28) == *(long *)(lVar1 + _DAT_11276fa94 + 8))) {
    *(undefined1 *)(lVar1 + _DAT_11276fa94 + 1) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107de4ee8; end: 107de4f37; -[SCOperaPlayerView _cancelPendingPrerolls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de4ee8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_11276fa94;
  if (*(char *)(lVar1 + 1) == '\x01') {
    func_0x00010bf2e9a0(*(undefined8 *)(param_1 + _DAT_11276fa88));
    *(undefined1 *)(lVar1 + 1) = 0;
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  return;
}



/* Entry: 107de4f38; end: 107de4fdb; -[SCOperaPlayerView setViewModel:] */

void FUN_107de4f38(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010beece80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(param_1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010beecf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(param_1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c074c20(param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,lVar1);
    return;
  }
  return;
}



/* Entry: 107de4fdc; end: 107de503f; -[SCOperaPlayerView snapShotFromPlayer] */

void FUN_107de4fdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c100c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29afc0();
  func_0x00010c13a180(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107de5040; end: 107de50af; -[SCOperaPlayerView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de5040(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf6f1e0(*(undefined8 *)(param_1 + _DAT_11276fa90));
  lRam0000000113727f98 = lRam0000000113727f98 + -1;
  func_0x00010c281b20(*(undefined8 *)(param_1 + _DAT_11276fa7c));
  puStack_28 = PTR_PTR_1126fb2f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107de50b0; end: 107de510b; -[SCOperaPlayerView playerLayer] */

void FUN_107de50b0(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  _objc_opt_class(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107de510c; end: 107de511b; -[SCOperaPlayerView player] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107de510c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fa88);
}



/* Entry: 107de511c; end: 107de512b; -[SCOperaPlayerView playerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107de511c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fa8c);
}



/* Entry: 107de512c; end: 107de513b; -[SCOperaPlayerView playerViewMonitor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107de512c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fa90);
}



/* Entry: 107de513c; end: 107de517b; -[SCOperaPlayerView setPlayerViewMonitor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de513c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276fa90;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107de517c; end: 107de518b; -[SCOperaPlayerView timeToPrepareSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107de517c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fa98);
}



/* Entry: 107de518c; end: 107de519b; -[SCOperaPlayerView startPreparingTimeSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107de518c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fa9c);
}



/* Entry: 107de519c; end: 107de51ab; -[SCOperaPlayerView prerollOnReadyEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107de519c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276fa84);
}



/* Entry: 107de51ac; end: 107de51bb; -[SCOperaPlayerView pageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107de51ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276faa0);
}



/* Entry: 107de51bc; end: 107de51c7; -[SCOperaPlayerView setPageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de51bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107de51c8; end: 107de5247; -[SCOperaPlayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107de51c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276faa0,0);
  _objc_storeStrong(param_1 + _DAT_11276fa90,0);
  _objc_storeStrong(param_1 + _DAT_11276fa88,0);
  _objc_storeStrong(param_1 + _DAT_11276fa80,0);
  _objc_storeStrong(param_1 + _DAT_11276fa7c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fa8c,0);
  return;
}



/* Entry: 107de5248; end: 107de530b; -[SCOperaPlayerViewMonitor initWithLogInterval:networkBandwidthEstimator:] */

undefined1 *
FUN_107de5248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb2f8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x48) = 0;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined2 *)((long)puVar1 + 0x20) = 0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107de530c; end: 107de5323; -[SCOperaPlayerViewMonitor activate] */

void FUN_107de530c(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010beb0930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupTimer_112589bf0);
  return;
}



/* Entry: 107de5324; end: 107de535b; -[SCOperaPlayerViewMonitor deactivate] */

void FUN_107de5324(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 0;
    func_0x00010bec9180();
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_disposeAll_1125bf508);
    return;
  }
  return;
}



/* Entry: 107de535c; end: 107de5367; -[SCOperaPlayerViewMonitor detach] */

void FUN_107de535c(long param_1)

{
  *(undefined1 *)(param_1 + 0x48) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be92150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reset_1125821f0);
  return;
}



/* Entry: 107de5368; end: 107de536b; -[SCOperaPlayerViewMonitor didAddPlayerItemToPlayerView:item:] */

void FUN_107de5368(void)

{
  return;
}



/* Entry: 107de536c; end: 107de536f; -[SCOperaPlayerViewMonitor didRemovePlayerItemFromPlayerView:item:] */

void FUN_107de536c(void)

{
  return;
}



/* Entry: 107de5370; end: 107de5373; -[SCOperaPlayerViewMonitor didDisplayPlayerView:] */

void FUN_107de5370(void)

{
  return;
}



/* Entry: 107de5374; end: 107de537f; -[SCOperaPlayerViewMonitor willDisplayPlayerView:] */

void FUN_107de5374(long param_1)

{
  *(undefined1 *)(param_1 + 0x21) = 1;
  return;
}



/* Entry: 107de5380; end: 107de5383; -[SCOperaPlayerViewMonitor didHidePlayerView:] */

void FUN_107de5380(void)

{
  return;
}



/* Entry: 107de5384; end: 107de538b; -[SCOperaPlayerViewMonitor willHidePlayerView:] */

void FUN_107de5384(long param_1)

{
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}



/* Entry: 107de538c; end: 107de547f; -[SCOperaPlayerViewMonitor _setupTimer] */

void FUN_107de538c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 8));
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c150360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  func_0x00010bfb0060(*(undefined8 *)(param_1 + 8));
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}


