/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e3f714; end: 108e3f71b; -[SCCaptionStateUtils setStylePreference:] */

void FUN_108e3f714(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108e3f71c; end: 108e3f723; -[SCCaptionStateUtils attributedText] */

undefined8 FUN_108e3f71c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e3f724; end: 108e3f72b; -[SCCaptionStateUtils setAttributedText:] */

void FUN_108e3f724(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e3f72c; end: 108e3f733; -[SCCaptionStateUtils centerX] */

undefined8 FUN_108e3f72c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e3f734; end: 108e3f73b; -[SCCaptionStateUtils setCenterX:] */

void FUN_108e3f734(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 108e3f73c; end: 108e3f743; -[SCCaptionStateUtils centerY] */

undefined8 FUN_108e3f73c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108e3f744; end: 108e3f74b; -[SCCaptionStateUtils setCenterY:] */

void FUN_108e3f744(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 108e3f74c; end: 108e3f753; -[SCCaptionStateUtils displayingFontSize] */

undefined8 FUN_108e3f74c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108e3f754; end: 108e3f75b; -[SCCaptionStateUtils setDisplayingFontSize:] */

void FUN_108e3f754(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 108e3f75c; end: 108e3f763; -[SCCaptionStateUtils editing] */

undefined1 FUN_108e3f75c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108e3f764; end: 108e3f76b; -[SCCaptionStateUtils setEditing:] */

void FUN_108e3f764(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108e3f76c; end: 108e3f773; -[SCCaptionStateUtils editingFontSize] */

undefined8 FUN_108e3f76c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108e3f774; end: 108e3f77b; -[SCCaptionStateUtils setEditingFontSize:] */

void FUN_108e3f774(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 108e3f77c; end: 108e3f783; -[SCCaptionStateUtils hidden] */

undefined1 FUN_108e3f77c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108e3f784; end: 108e3f78b; -[SCCaptionStateUtils setHidden:] */

void FUN_108e3f784(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 108e3f78c; end: 108e3f793; -[SCCaptionStateUtils isTracking] */

undefined1 FUN_108e3f78c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108e3f794; end: 108e3f79b; -[SCCaptionStateUtils setIsTracking:] */

void FUN_108e3f794(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 108e3f79c; end: 108e3f7a3; -[SCCaptionStateUtils keyboardHeight] */

undefined8 FUN_108e3f79c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108e3f7a4; end: 108e3f7ab; -[SCCaptionStateUtils setKeyboardHeight:] */

void FUN_108e3f7a4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 108e3f7ac; end: 108e3f7b3; -[SCCaptionStateUtils relativeSize] */

undefined1  [16] FUN_108e3f7ac(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0xd0);
}



/* Entry: 108e3f7b4; end: 108e3f7bb; -[SCCaptionStateUtils setRelativeSize:] */

void FUN_108e3f7b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0xd0) = param_1;
  *(undefined8 *)(param_3 + 0xd8) = param_2;
  return;
}



/* Entry: 108e3f7bc; end: 108e3f7c3; -[SCCaptionStateUtils rotation] */

undefined8 FUN_108e3f7bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108e3f7c4; end: 108e3f7cb; -[SCCaptionStateUtils setRotation:] */

void FUN_108e3f7c4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x50) = param_1;
  return;
}



/* Entry: 108e3f7cc; end: 108e3f7d3; -[SCCaptionStateUtils text] */

undefined8 FUN_108e3f7cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108e3f7d4; end: 108e3f7db; -[SCCaptionStateUtils setText:] */

void FUN_108e3f7d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e3f7dc; end: 108e3f7e3; -[SCCaptionStateUtils alignment] */

undefined8 FUN_108e3f7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108e3f7e4; end: 108e3f7eb; -[SCCaptionStateUtils setAlignment:] */

void FUN_108e3f7e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 108e3f7ec; end: 108e3f7f3; -[SCCaptionStateUtils captionStyle] */

undefined8 FUN_108e3f7ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108e3f7f4; end: 108e3f823; -[SCCaptionStateUtils setCaptionStyle:] */

void FUN_108e3f7f4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108e3f824; end: 108e3f82b; -[SCCaptionStateUtils appliedStyle] */

undefined8 FUN_108e3f824(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108e3f82c; end: 108e3f85b; -[SCCaptionStateUtils setAppliedStyle:] */

void FUN_108e3f82c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108e3f85c; end: 108e3f863; -[SCCaptionStateUtils lastTextTransform] */

undefined8 FUN_108e3f85c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108e3f864; end: 108e3f86b; -[SCCaptionStateUtils setLastTextTransform:] */

void FUN_108e3f864(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 108e3f86c; end: 108e3f873; -[SCCaptionStateUtils pickedColor] */

undefined8 FUN_108e3f86c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108e3f874; end: 108e3f87b; -[SCCaptionStateUtils setPickedColor:] */

void FUN_108e3f874(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e3f87c; end: 108e3f883; -[SCCaptionStateUtils source] */

undefined8 FUN_108e3f87c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108e3f884; end: 108e3f88b; -[SCCaptionStateUtils setSource:] */

void FUN_108e3f884(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 108e3f88c; end: 108e3f893; -[SCCaptionStateUtils taggedUsers] */

undefined8 FUN_108e3f88c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 108e3f894; end: 108e3f89b; -[SCCaptionStateUtils setTaggedUsers:] */

void FUN_108e3f894(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e3f89c; end: 108e3f8a3; -[SCCaptionStateUtils topics] */

undefined8 FUN_108e3f89c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 108e3f8a4; end: 108e3f8ab; -[SCCaptionStateUtils setTopics:] */

void FUN_108e3f8a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e3f8ac; end: 108e3f8b3; -[SCCaptionStateUtils trackingTrajectory] */

undefined8 FUN_108e3f8ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 108e3f8b4; end: 108e3f8bb; -[SCCaptionStateUtils setTrackingTrajectory:] */

void FUN_108e3f8b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e3f8bc; end: 108e3f8c3; -[SCCaptionStateUtils uniqueId] */

undefined8 FUN_108e3f8bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 108e3f8c4; end: 108e3f8cb; -[SCCaptionStateUtils setUniqueId:] */

void FUN_108e3f8c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 108e3f8cc; end: 108e3f8d3; -[SCCaptionStateUtils playbackLayerId] */

undefined4 FUN_108e3f8cc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 108e3f8d4; end: 108e3f8db; -[SCCaptionStateUtils setPlaybackLayerId:] */

void FUN_108e3f8d4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108e3f8dc; end: 108e3f8e3; -[SCCaptionStateUtils userTaggingStartIndex] */

undefined8 FUN_108e3f8dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 108e3f8e4; end: 108e3f8eb; -[SCCaptionStateUtils setUserTaggingStartIndex:] */

void FUN_108e3f8e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}



/* Entry: 108e3f8ec; end: 108e3f8f3; -[SCCaptionStateUtils isTimed] */

undefined1 FUN_108e3f8ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108e3f8f4; end: 108e3f8fb; -[SCCaptionStateUtils setIsTimed:] */

void FUN_108e3f8f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 108e3f8fc; end: 108e3f903; -[SCCaptionStateUtils taggedTextBounds] */

undefined8 FUN_108e3f8fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 108e3f904; end: 108e3f90b; -[SCCaptionStateUtils setTaggedTextBounds:] */

void FUN_108e3f904(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e3f90c; end: 108e3f913; -[SCCaptionStateUtils hasDismissedPollsSuggestions] */

undefined1 FUN_108e3f90c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 108e3f914; end: 108e3f91b; -[SCCaptionStateUtils setHasDismissedPollsSuggestions:] */

void FUN_108e3f914(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 108e3f91c; end: 108e3f923; -[SCCaptionStateUtils editCapabilities] */

undefined8 FUN_108e3f91c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 108e3f924; end: 108e3f92b; -[SCCaptionStateUtils setEditCapabilities:] */

void FUN_108e3f924(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e3f92c; end: 108e3f933; -[SCCaptionStateUtils generatedMagicCaptionText] */

undefined8 FUN_108e3f92c(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 108e3f934; end: 108e3f93b; -[SCCaptionStateUtils setGeneratedMagicCaptionText:] */

void FUN_108e3f934(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e3f93c; end: 108e3f9d7; -[SCCaptionStateUtils .cxx_destruct] */

void FUN_108e3f93c(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108e3f9d8; end: 108e3fa43; -[SCColorPickerDropletView initWithFrame:] */

undefined1 *
FUN_108e3f9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fead8;
  uStack_30 = param_5;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beab100(puVar1);
    func_0x00010bfb68e0(puVar1);
    func_0x00010c192080(param_3,param_4,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e3fa44; end: 108e3fb03; -[SCColorPickerDropletView initWithColorDropletView:] */

long FUN_108e3fa44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  
  _objc_retain(param_7);
  func_0x00010bfb68e0(param_7);
  func_0x00010c013de0();
  if (param_5 != 0) {
    lVar1 = param_7;
    func_0x00010bf40c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_7;
      func_0x00010bf40c40(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17e800(param_5,param_6,lVar1);
      _objc_release(lVar1);
    }
    lVar1 = param_7;
    func_0x00010bf8ab00(param_7);
    func_0x00010bfb68e0(param_7);
    func_0x00010c192080(param_3,param_4,param_5,param_6,lVar1);
  }
  _objc_release(param_7);
  return param_5;
}



/* Entry: 108e3fb04; end: 108e3fc4b; -[SCColorPickerDropletView _setupBorderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e3fb04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b52f0;
  _objc_alloc_init();
  lVar3 = (long)_DAT_11277c300;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fa999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd00(0x3fe0000000000000);
  _objc_release(uVar2);
  func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar3),param_2,0x12);
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e3fc4c; end: 108e3fc8f; -[SCColorPickerDropletView borderShapeLayer] */

void FUN_108e3fc4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf1fc60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e3fc90; end: 108e3fd5b; -[SCColorPickerDropletView setColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e3fc90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277c304;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_s_fillColor_1125c8ee8;
  _NSStringFromSelector(PTR_s_fillColor_1125c8ee8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bdc0fe0(uVar4);
  _objc_release(param_3);
  func_0x00010c14c6a0(lVar2,param_2,puVar3,uVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e3fd5c; end: 108e400c7; -[SCColorPickerDropletView setCurrentPath:] */

void FUN_108e3fd5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126fead8;
  uStack_80 = param_1;
  _objc_msgSendSuper2(&uStack_80,PTR_s_setCurrentPath__11263f828);
  uVar1 = param_1;
  func_0x00010c072360();
  dVar6 = 2.5;
  dVar10 = 3.0;
  if ((int)uVar1 == 0) {
    dVar10 = 2.5;
  }
  func_0x00010bf20c00(param_1);
  _CGRectGetHeight();
  dVar6 = dVar6 + dVar10 * -2.0;
  uVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  dVar7 = dVar10;
  dVar8 = dVar10;
  dVar9 = dVar6;
  func_0x00010c19f0e0(dVar10,dVar10,dVar6,dVar6);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = param_1;
  func_0x00010bf1fc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar7,dVar8,dVar6,dVar9);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c072360();
  uVar2 = param_1;
  if ((int)uVar1 == 0) {
    func_0x00010bf20c00(param_1);
    _CGRectGetMidX();
    dVar6 = dVar7;
    func_0x00010bf20c00(param_1);
    _CGRectGetMidY();
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar7,dVar6);
  }
  else {
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidX();
    dVar10 = dVar10 + dVar7;
    func_0x00010bf20c00(param_1);
    _CGRectGetMidY();
    uVar1 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar10,dVar7);
    _objc_release(uVar1);
    dVar7 = dVar10;
  }
  _objc_release(uVar2);
  uVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  uVar2 = param_1;
  dVar6 = dVar7;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  uVar3 = param_1;
  func_0x00010bf1fc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar7,dVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  uVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010bf199a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  uVar1 = param_1;
  func_0x00010bf1fc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectInset();
  func_0x00010bf199a0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9840(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf1fc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9840(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  return;
}



/* Entry: 108e400c8; end: 108e400d7; -[SCColorPickerDropletView color] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e400c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c304);
}



/* Entry: 108e400d8; end: 108e400e7; -[SCColorPickerDropletView borderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e400d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c300);
}



/* Entry: 108e400e8; end: 108e40127; -[SCColorPickerDropletView setBorderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e400e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c300;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e40128; end: 108e40167; -[SCColorPickerDropletView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e40128(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c300,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c304,0);
  return;
}



/* Entry: 108e40168; end: 108e401db; -[SCColorPickerGradientView initWithPaletteModel:] */

undefined1 * FUN_108e40168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126feae0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beab9e0(puVar1);
    func_0x00010beacda0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e401dc; end: 108e40797; -[SCColorPickerGradientView _setupColorsFromPalette:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e401dc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

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
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar22 = param_4;
  func_0x00010bf41180();
  *(bool *)(param_2 + _DAT_11277c314) = lVar22 == 1;
  if (lVar22 == 1) {
    lVar1 = param_4;
    func_0x00010bfcd900();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = (long)_DAT_11277c318;
    uVar20 = *(undefined8 *)(param_2 + lVar22);
    *(long *)(param_2 + lVar22) = lVar1;
    _objc_release(uVar20);
    func_0x00010bf01c00(param_4);
  }
  else {
    param_1 = 0x3ff0000000000000;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fea3d70a3d70a3d,0x3f9eb851eb851eb8,0x3fcc28f5c28f5c29,0x3ff0000000000000)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fe6b851eb851eb8,0x3fc0a3d70a3d70a4,0x3fdccccccccccccd,0x3ff0000000000000)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fe0a3d70a3d70a4,0x3fc70a3d70a3d70a,0x3fe2e147ae147ae1,0x3ff0000000000000)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fd0000000000000,0x3fc999999999999a,0x3fe3d70a3d70a3d7,0x3ff0000000000000)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fc3333333333333,0x3fcd70a3d70a3d71,0x3fe47ae147ae147b,0x3ff0000000000000)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fcc28f5c28f5c29,0x3fdc28f5c28f5c29,0x3fe6b851eb851eb8,0x3ff0000000000000)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fd3333333333333,0x3fe47ae147ae147b,0x3fe8f5c28f5c28f6,0x3ff0000000000000)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fd851eb851eb852,0x3fe947ae147ae148,0x3fe75c28f5c28f5c,0x3ff0000000000000)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fd851eb851eb852,0x3fe851eb851eb852,0x3fc70a3d70a3d70a,0x3ff0000000000000)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fde147ae147ae14,0x3fe947ae147ae148,0,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fe999999999999a,0x3fec28f5c28f5c29,0,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fedc28f5c28f5c3,0x3fe8000000000000,0,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3fedc28f5c28f5c3,0x3fe5c28f5c28f5c3,0,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3febd70a3d70a3d7,0x3fc999999999999a,0,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0,0,0,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    lVar22 = (long)_DAT_11277c318;
    uVar20 = *(undefined8 *)(param_2 + lVar22);
    *(undefined **)(param_2 + lVar22) = puVar18;
    _objc_release(uVar20);
  }
  *(undefined8 *)(param_2 + _DAT_11277c31c) = param_1;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(*(undefined8 *)(param_2 + lVar22));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = 0;
  lVar23 = *(long *)(param_2 + lVar22);
  _objc_retain(lVar23);
  lVar22 = lVar23;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar22 != 0) {
    lVar24 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar23);
      }
      _objc_retainAutorelease(*(undefined8 *)(lVar24 * 8));
      func_0x00010bdc0fe0();
      func_0x00010befa120(puVar2);
      lVar24 = lVar24 + 1;
    } while (lVar22 != lVar24);
    lVar22 = lVar23;
    func_0x00010bf52a60();
  }
  _objc_release(lVar23);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  uVar21 = *(undefined8 *)(param_2 + _DAT_11277c320);
  *(undefined **)(param_2 + _DAT_11277c320) = puVar3;
  _objc_release(uVar21);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b1198;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  uVar21 = uVar20;
  func_0x00010bf20c00(param_4);
  _CGRectGetHeight();
  func_0x00010c013de0(0,0,uVar20,uVar21);
  lVar22 = (long)_DAT_11277c324;
  uVar20 = *(undefined8 *)(param_4 + lVar22);
  *(undefined **)(param_4 + lVar22) = puVar2;
  _objc_release(uVar20);
  _objc_release(puVar3);
  func_0x00010c16d4a0(*(undefined8 *)(param_4 + lVar22));
  uVar20 = *(undefined8 *)(param_4 + lVar22);
  func_0x00010bfcd9c0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209760(0x3fe0000000000000,0);
  _objc_release(uVar20);
  uVar20 = *(undefined8 *)(param_4 + lVar22);
  func_0x00010bfcd9c0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000);
  _objc_release(uVar20);
  func_0x00010c17eb60(*(undefined8 *)(param_4 + lVar22));
  uVar20 = *(undefined8 *)(param_4 + _DAT_11277c31c);
  func_0x00010c1677c0(uVar20,*(undefined8 *)(param_4 + lVar22));
  puVar2 = PTR_PTR_1126b1198;
  _objc_alloc();
  func_0x00010bf20c00(param_4);
  _CGRectGetHeight();
  func_0x00010c013de0(0,0,0x3ff0000000000000,uVar20);
  lVar19 = (long)_DAT_11277c328;
  uVar20 = *(undefined8 *)(param_4 + lVar19);
  *(undefined **)(param_4 + lVar19) = puVar2;
  _objc_release(uVar20);
  uVar20 = *(undefined8 *)(param_4 + lVar19);
  func_0x00010bfcd9c0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209760(0x3fe0000000000000,0);
  _objc_release(uVar20);
  uVar20 = *(undefined8 *)(param_4 + lVar19);
  func_0x00010bfcd9c0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = 0x3fe0000000000000;
  func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000);
  _objc_release(uVar20);
  func_0x00010c17eb60(*(undefined8 *)(param_4 + lVar19));
  puVar2 = PTR_PTR_1126b52f0;
  _objc_alloc();
  func_0x00010bf20c00(param_4);
  _CGRectGetHeight();
  func_0x00010c013de0(0,0,0,uVar21);
  lVar19 = (long)_DAT_11277c32c;
  uVar20 = *(undefined8 *)(param_4 + lVar19);
  *(undefined **)(param_4 + lVar19) = puVar2;
  _objc_release(uVar20);
  func_0x00010c16d4a0(*(undefined8 *)(param_4 + lVar19));
  uVar20 = *(undefined8 *)(param_4 + lVar19);
  func_0x00010c22a660(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb40();
  _objc_release(uVar20);
  uVar20 = *(undefined8 *)(param_4 + lVar19);
  func_0x00010c22a660(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd00(0);
  _objc_release(uVar20);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar20 = *(undefined8 *)(param_4 + lVar19);
  func_0x00010c22a660(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(uVar20);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar20 = *(undefined8 *)(param_4 + lVar19);
  func_0x00010c22a660(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar20);
  _objc_release(puVar2);
  func_0x00010c1c2ca0(*(undefined8 *)(param_4 + lVar22));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_4,PTR_s_addSubview__11259c880,*(undefined8 *)(param_4 + lVar22));
  return;
}



/* Entry: 108e40798; end: 108e40ac3; -[SCColorPickerGradientView _setupGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e40798(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b1198;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  uVar3 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010c013de0(0,0,param_1,uVar3);
  lVar4 = (long)_DAT_11277c324;
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  *(undefined **)(param_2 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010c16d4a0(*(undefined8 *)(param_2 + lVar4));
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010bfcd9c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209760(0x3fe0000000000000,0);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010bfcd9c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000);
  _objc_release(uVar3);
  func_0x00010c17eb60(*(undefined8 *)(param_2 + lVar4));
  uVar3 = *(undefined8 *)(param_2 + _DAT_11277c31c);
  func_0x00010c1677c0(uVar3,*(undefined8 *)(param_2 + lVar4));
  puVar1 = PTR_PTR_1126b1198;
  _objc_alloc();
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010c013de0(0,0,0x3ff0000000000000,uVar3);
  lVar5 = (long)_DAT_11277c328;
  uVar3 = *(undefined8 *)(param_2 + lVar5);
  *(undefined **)(param_2 + lVar5) = puVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010bfcd9c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209760(0x3fe0000000000000,0);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010bfcd9c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x3fe0000000000000;
  func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000);
  _objc_release(uVar3);
  func_0x00010c17eb60(*(undefined8 *)(param_2 + lVar5));
  puVar1 = PTR_PTR_1126b52f0;
  _objc_alloc();
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010c013de0(0,0,0,uVar6);
  lVar5 = (long)_DAT_11277c32c;
  uVar3 = *(undefined8 *)(param_2 + lVar5);
  *(undefined **)(param_2 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c16d4a0(*(undefined8 *)(param_2 + lVar5));
  uVar3 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c22a660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb40();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c22a660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd00(0);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar3 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c22a660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(uVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar3 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c22a660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar3);
  _objc_release(puVar1);
  func_0x00010c1c2ca0(*(undefined8 *)(param_2 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_addSubview__11259c880,*(undefined8 *)(param_2 + lVar4));
  return;
}



/* Entry: 108e40ac4; end: 108e40bd7; -[SCColorPickerGradientView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e40ac4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126feae0;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010c1739e0(0,0,0x3ff0000000000000,param_1,*(undefined8 *)(param_2 + _DAT_11277c328));
  uVar1 = *(undefined8 *)(param_2 + _DAT_11277c32c);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_position_11261eab8;
  _NSStringFromSelector(PTR_s_position_11261eab8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010bfcda40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  func_0x00010c297180(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c6a0(uVar1);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 108e40bd8; end: 108e40c0f; -[SCColorPickerGradientView pointInside:withEvent:] */

void FUN_108e40bd8(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 108e40c10; end: 108e40e17; -[SCColorPickerGradientView setMaskPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e40c10(double param_1,undefined8 param_2,undefined8 param_3,double param_4,ulong param_5
                  ,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain(param_7);
  lVar6 = (long)_DAT_11277c330;
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_5 + lVar6);
  *(undefined8 *)(param_5 + lVar6) = param_7;
  _objc_release(uVar1);
  lVar6 = (long)_DAT_11277c32c;
  uVar2 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_s_path_11261b020;
  _NSStringFromSelector(PTR_s_path_11261b020);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  _objc_retainAutorelease(param_7);
  func_0x00010bdc1040();
  func_0x00010c14c6a0(uVar2,param_6,puVar3,uVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010bf20c00(param_7);
  uVar4 = param_5;
  dVar11 = param_1;
  func_0x00010c22a6a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099460();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _CGRectGetHeight(param_1,param_2,param_3,param_4 + dVar11);
  dVar11 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  param_1 = param_1 - dVar11;
  dVar10 = 0.0;
  dVar11 = param_1;
  if (param_1 <= 0.0) {
    dVar11 = 0.0;
  }
  lVar7 = (long)_DAT_11277c324;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
  uVar4 = param_5;
  dVar8 = param_1;
  func_0x00010bf02e40();
  if ((uVar4 & 1) == 0) {
    func_0x00010bf20c00(param_5);
    _CGRectGetHeight();
    dVar10 = dVar11 + dVar8;
  }
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  dVar9 = 0.5;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  func_0x00010c1739e0(param_1,param_2,param_3,dVar10,*(undefined8 *)(param_5 + lVar7));
  func_0x00010c17a6a0(dVar8,dVar11 * 0.5 + dVar9,*(undefined8 *)(param_5 + lVar7));
  uVar4 = param_5;
  func_0x00010bfcda40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  func_0x00010c17a6a0(*(undefined8 *)(param_5 + lVar6));
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 108e40e18; end: 108e40e67; -[SCColorPickerGradientView setAdjustingColorEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e40e18(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  func_0x00010c06ba80();
  if (param_3 != iVar1) {
    *(char *)(param_1 + _DAT_11277c334) = (char)param_3;
    *(undefined8 *)(param_1 + _DAT_11277c338) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + _DAT_11277c33c) = 0x3ff0000000000000;
  }
  return;
}



/* Entry: 108e40e68; end: 108e40e77; -[SCColorPickerGradientView adjustSaturation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e40e68(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277c33c) = param_1;
  return;
}



/* Entry: 108e40e78; end: 108e40e87; -[SCColorPickerGradientView adjustBrightness:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e40e78(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277c338) = param_1;
  return;
}



/* Entry: 108e40e88; end: 108e4102b; -[SCColorPickerGradientView gradientColorForLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e40e88(double param_1,double param_2,long param_3,undefined8 param_4)

{
  double dVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_70 [8];
  double dStack_68;
  double dStack_60;
  undefined8 uStack_58;
  
  if (*(char *)(param_3 + _DAT_11277c314) == '\x01') {
    puVar2 = *(undefined **)(param_3 + _DAT_11277c328);
    func_0x00010bfc3d40(0,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if ((*(byte *)(param_3 + _DAT_11277c334) & 1) == 0) {
      puVar4 = puVar2;
      func_0x00010bf414e0(*(undefined8 *)(param_3 + _DAT_11277c31c),puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfc63e0(puVar2,param_4,&uStack_58,&dStack_60,&dStack_68,auStack_70);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf415e0(uStack_58,dStack_60 * *(double *)(param_3 + _DAT_11277c33c),
                          dStack_68 * *(double *)(param_3 + _DAT_11277c338),
                          *(undefined8 *)(param_3 + _DAT_11277c31c),
                          PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
  }
  else {
    lVar3 = param_3;
    func_0x00010c06ba80();
    dVar7 = 1.0;
    if ((int)lVar3 != 0) {
      func_0x00010befda40(param_3);
      dVar7 = param_1;
    }
    lVar3 = param_3;
    func_0x00010c06ba80();
    dVar5 = 1.0;
    if ((int)lVar3 != 0) {
      func_0x00010befd9e0(param_3);
      dVar5 = param_1;
    }
    func_0x00010bf20c00(param_3);
    _CGRectGetHeight();
    param_2 = param_2 / param_1;
    dVar6 = dVar7;
    if (param_2 < 0.0) {
      dVar6 = 0.0;
    }
    dVar1 = 0.0;
    if (param_2 <= 1.0) {
      dVar7 = dVar6;
      dVar1 = dVar5;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    dVar5 = 1.0;
    if (param_2 <= 1.0) {
      dVar5 = param_2;
    }
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf415e0(1.0 - dVar5,dVar7,dVar1,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e4102c; end: 108e4113b; -[SCColorPickerGradientView locationForColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108e4102c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dStack_40;
  double dStack_38;
  
  if (*(char *)(param_2 + _DAT_11277c314) == '\x01') {
    func_0x00010bfca580(*(undefined8 *)(param_2 + _DAT_11277c328),param_3,param_4);
    dVar3 = param_1;
    func_0x00010bf20c00(param_2);
    _CGRectGetMidX();
    dVar5 = 0.0;
    bVar1 = false;
    bVar2 = true;
    if (0.0 <= param_1) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 == 1.0;
        bVar2 = 1.0 <= param_1;
      }
    }
    dVar4 = 1.0;
    if (bVar2 && !bVar1) goto LAB_108e41124;
  }
  else {
    func_0x00010bfc63e0(param_4,param_3,&dStack_38,0,&dStack_40,0);
    if ((int)param_4 == 0) {
      func_0x00010bf20c00(param_2);
      _CGRectGetMidX();
      dVar5 = 0.0;
      dVar3 = param_1;
      goto LAB_108e41124;
    }
    dVar3 = 0.0;
    if (0.0 <= dStack_38) {
      dVar3 = dStack_38;
    }
    dVar5 = (double)NEON_fminnm(dVar3,0x3ff0000000000000);
    bVar1 = false;
    if ((0.5 < dStack_40) && (bVar1 = false, !NAN(dVar5))) {
      bVar1 = dVar5 == 0.0;
    }
    dVar3 = 1.0;
    if (!bVar1) {
      dVar3 = dVar5;
    }
    dStack_38 = dVar3;
    func_0x00010bf20c00(param_2);
    _CGRectGetMidX();
    param_1 = 1.0 - dStack_38;
    dVar4 = dStack_38;
  }
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  dVar5 = param_1 * dVar4;
LAB_108e41124:
  auVar6._8_8_ = dVar5;
  auVar6._0_8_ = dVar3;
  return auVar6;
}



/* Entry: 108e4113c; end: 108e413d7; -[SCColorPickerGradientView _adjustColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4113c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *unaff_x21;
  long lVar6;
  long lVar7;
  undefined8 unaff_x22;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  puVar1 = param_1;
  func_0x00010c06ba80();
  if ((int)puVar1 == 0) {
    puVar5 = *(undefined **)(param_1 + _DAT_11277c320);
    func_0x00010bfcda40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c17eb60();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  else {
    lVar6 = (long)_DAT_11277c318;
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010bf529e0();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar7 = *(long *)(param_1 + lVar6);
    _objc_retain(lVar7);
    lVar6 = lVar7;
    func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar6 != 0) {
      lVar9 = 0;
      lVar10 = *plStack_120;
      lStack_150 = lVar2 + -1;
      do {
        lVar2 = 0;
        lVar11 = lStack_150 - lVar9;
        do {
          uVar13 = uVar12;
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar7);
            uVar13 = uVar12;
          }
          uVar8 = *(undefined8 *)(lStack_128 + lVar2 * 8);
          uVar12 = uVar13;
          if (((-lVar2 == lVar9) || (lVar11 == lVar2)) ||
             (uVar3 = uVar8,
             func_0x00010bfc63e0(uVar8,param_2,&uStack_138,&uStack_140,&uStack_148,0),
             uVar12 = uVar13, (int)uVar3 == 0)) {
            _objc_retainAutorelease(uVar8);
            func_0x00010bdc0fe0();
            func_0x00010befa120(puVar5,param_2,uVar8);
          }
          else {
            func_0x00010befd9e0(param_1);
            uStack_148 = uVar13;
            func_0x00010befda40(param_1);
            puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
            uVar12 = uStack_138;
            uStack_140 = uVar13;
            func_0x00010bf415e0(uStack_138,uVar13,uStack_148,0x3ff0000000000000,
                                PTR__OBJC_CLASS___UIColor_1126aea70);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar1;
            _objc_retainAutorelease();
            func_0x00010bdc0fe0();
            func_0x00010befa120(puVar5,param_2,puVar4);
            _objc_release(puVar1);
          }
          lVar2 = lVar2 + 1;
        } while (lVar6 != lVar2);
        lVar9 = lVar6 + lVar9;
        lVar6 = lVar7;
        func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_f0,0x10);
        unaff_x22 = 0;
      } while (lVar6 != 0);
    }
    _objc_release(lVar7);
    unaff_x21 = puVar5;
    func_0x00010bf51e00();
    func_0x00010bfcda40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60();
    _objc_release(param_1);
    _objc_release(unaff_x21);
    puVar1 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_108e413d8;
  uStack_180 = unaff_x22;
  puStack_178 = unaff_x21;
  puStack_170 = puVar5;
  puStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x00010beab9e0();
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar4 = puVar1;
  func_0x00010bfcda40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_108e414ac;
  puStack_190 = &UNK_110842e18;
  puStack_188 = puVar1;
  func_0x00010c27ac60(0x3fb99999a0000000,puVar5,param_2,puVar4,0x500000,&puStack_1a8,0);
  _objc_release(puVar4);
  func_0x00010bfcda60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(puVar1);
  return;
}



/* Entry: 108e413d8; end: 108e414ab; -[SCColorPickerGradientView reloadColorsFromPalette:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e413d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010beab9e0();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = param_1;
  func_0x00010bfcda40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108e414ac;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_1;
  func_0x00010c27ac60(0x3fb99999a0000000,puVar1,param_2,uVar2,0x500000,&puStack_58,0);
  _objc_release(uVar2);
  func_0x00010bfcda60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(param_1);
  return;
}



/* Entry: 108e414ac; end: 108e41533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e414ac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfcda40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(lVar2 + _DAT_11277c31c);
  func_0x00010bfcda40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108e41534; end: 108e41543; -[SCColorPickerGradientView animateForCompact] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e41534(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c308);
}



/* Entry: 108e41544; end: 108e41553; -[SCColorPickerGradientView setAnimateForCompact:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e41544(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c308) = param_3;
  return;
}



/* Entry: 108e41554; end: 108e41563; -[SCColorPickerGradientView maskPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e41554(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c330);
}



/* Entry: 108e41564; end: 108e41573; -[SCColorPickerGradientView isAdjustingColorEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e41564(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c334);
}



/* Entry: 108e41574; end: 108e41583; -[SCColorPickerGradientView gradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e41574(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c324);
}



/* Entry: 108e41584; end: 108e415c3; -[SCColorPickerGradientView setGradientView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e41584(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c324;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e415c4; end: 108e415d3; -[SCColorPickerGradientView gradientViewForColorLookup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e415c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c328);
}



/* Entry: 108e415d4; end: 108e41613; -[SCColorPickerGradientView setGradientViewForColorLookup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e415d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c328;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e41614; end: 108e41623; -[SCColorPickerGradientView shapeMaskView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e41614(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c32c);
}



/* Entry: 108e41624; end: 108e41663; -[SCColorPickerGradientView setShapeMaskView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e41624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c32c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e41664; end: 108e41673; -[SCColorPickerGradientView currentColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e41664(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c318);
}



/* Entry: 108e41674; end: 108e416b3; -[SCColorPickerGradientView setCurrentColors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e41674(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c318;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e416b4; end: 108e416c3; -[SCColorPickerGradientView currentCGColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e416b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c320);
}



/* Entry: 108e416c4; end: 108e41703; -[SCColorPickerGradientView setCurrentCGColors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e416c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c320;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e41704; end: 108e41713; -[SCColorPickerGradientView adjustedBrightness] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e41704(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c338);
}



/* Entry: 108e41714; end: 108e41723; -[SCColorPickerGradientView setAdjustedBrightness:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e41714(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277c338) = param_1;
  return;
}


