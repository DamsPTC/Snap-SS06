/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e1f108; end: 108e1f12f; -[SCCaptionDefaultTextView trackableView] */

void FUN_108e1f108(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e1f130; end: 108e1f137; -[SCCaptionDefaultTextView isTracking] */

void FUN_108e1f130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c081670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x98),PTR_s_isTracking_1125fdfa8)
  ;
  return;
}



/* Entry: 108e1f138; end: 108e1f17b; -[SCCaptionDefaultTextView isTimed] */

bool FUN_108e1f138(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x98);
  func_0x00010c2796c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf46340();
  _objc_release(lVar1);
  return lVar2 == 1;
}



/* Entry: 108e1f17c; end: 108e1f1d7; -[SCCaptionDefaultTextView trackingTrajectoryState] */

void FUN_108e1f17c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c081660();
  if ((int)lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c26a1a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2723c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108e1f1d8; end: 108e1f25b; -[SCCaptionDefaultTextView durationEnabledState] */

void FUN_108e1f1d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dc080;
  _objc_alloc(PTR_PTR_1126dc080);
  uVar2 = param_1;
  func_0x00010c252440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c279100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04bfe0(puVar1,param_2,uVar2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e1f25c; end: 108e1f263; -[SCCaptionDefaultTextView durationEnabledToolType] */

undefined8 FUN_108e1f25c(void)

{
  return 0;
}



/* Entry: 108e1f264; end: 108e1f26b; -[SCCaptionDefaultTextView isSelfResizing] */

undefined8 FUN_108e1f264(void)

{
  return 0;
}



/* Entry: 108e1f26c; end: 108e1f273; -[SCCaptionDefaultTextView uniqueId] */

undefined8 FUN_108e1f26c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 108e1f274; end: 108e1f27b; -[SCCaptionDefaultTextView setUniqueId:] */

void FUN_108e1f274(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  return;
}



/* Entry: 108e1f27c; end: 108e1f283; -[SCCaptionDefaultTextView playbackLayerId] */

undefined4 FUN_108e1f27c(long param_1)

{
  return *(undefined4 *)(param_1 + 200);
}



/* Entry: 108e1f284; end: 108e1f28b; -[SCCaptionDefaultTextView setPlaybackLayerId:] */

void FUN_108e1f284(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 200) = param_3;
  return;
}



/* Entry: 108e1f28c; end: 108e1f293; -[SCCaptionDefaultTextView userTaggingStartIndex] */

undefined8 FUN_108e1f28c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 108e1f294; end: 108e1f29b; -[SCCaptionDefaultTextView setUserTaggingStartIndex:] */

void FUN_108e1f294(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  return;
}



/* Entry: 108e1f29c; end: 108e1f2a3; -[SCCaptionDefaultTextView editCapabilities] */

undefined8 FUN_108e1f29c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 108e1f2a4; end: 108e1f2ab; -[SCCaptionDefaultTextView setEditCapabilities:] */

void FUN_108e1f2a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e1f2ac; end: 108e1f2b3; -[SCCaptionDefaultTextView generatedMagicCaptionText] */

undefined8 FUN_108e1f2ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 108e1f2b4; end: 108e1f2bb; -[SCCaptionDefaultTextView setGeneratedMagicCaptionText:] */

void FUN_108e1f2b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e1f2bc; end: 108e1f2c3; -[SCCaptionDefaultTextView hasPromptText] */

undefined1 FUN_108e1f2bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc3);
}



/* Entry: 108e1f2c4; end: 108e1f2db; -[SCCaptionDefaultTextView killSwitchProvider] */

void FUN_108e1f2c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e1f2dc; end: 108e1f2f3; -[SCCaptionDefaultTextView editingDelegate] */

void FUN_108e1f2dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e1f2f4; end: 108e1f2ff; -[SCCaptionDefaultTextView setEditingDelegate:] */

void FUN_108e1f2f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xf8,param_3);
  return;
}



/* Entry: 108e1f300; end: 108e1f30b; -[SCCaptionDefaultTextView edgeMargins] */

undefined8 FUN_108e1f300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 108e1f30c; end: 108e1f317; -[SCCaptionDefaultTextView setEdgeMargins:] */

void FUN_108e1f30c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x120) = param_1;
  *(undefined8 *)(param_5 + 0x128) = param_2;
  *(undefined8 *)(param_5 + 0x130) = param_3;
  *(undefined8 *)(param_5 + 0x138) = param_4;
  return;
}



/* Entry: 108e1f318; end: 108e1f31f; -[SCCaptionDefaultTextView containerView] */

undefined8 FUN_108e1f318(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 108e1f320; end: 108e1f34f; -[SCCaptionDefaultTextView setContainerView:] */

void FUN_108e1f320(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e1f350; end: 108e1f357; -[SCCaptionDefaultTextView isEditing] */

undefined1 FUN_108e1f350(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc5);
}



/* Entry: 108e1f358; end: 108e1f35f; -[SCCaptionDefaultTextView lastVertical] */

undefined8 FUN_108e1f358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 108e1f360; end: 108e1f367; -[SCCaptionDefaultTextView setLastVertical:] */

void FUN_108e1f360(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x108) = param_1;
  return;
}



/* Entry: 108e1f368; end: 108e1f36f; -[SCCaptionDefaultTextView textView] */

undefined8 FUN_108e1f368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 108e1f370; end: 108e1f39f; -[SCCaptionDefaultTextView setTextView:] */

void FUN_108e1f370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e1f3a0; end: 108e1f3a7; -[SCCaptionDefaultTextView keyboardHeight] */

undefined8 FUN_108e1f3a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 108e1f3a8; end: 108e1f3af; -[SCCaptionDefaultTextView setKeyboardHeight:] */

void FUN_108e1f3a8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x118) = param_1;
  return;
}



/* Entry: 108e1f3b0; end: 108e1f3bb; -[SCCaptionDefaultTextView superviewBounds] */

undefined8 FUN_108e1f3b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 108e1f3bc; end: 108e1f3c7; -[SCCaptionDefaultTextView setSuperviewBounds:] */

void FUN_108e1f3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x140) = param_1;
  *(undefined8 *)(param_5 + 0x148) = param_2;
  *(undefined8 *)(param_5 + 0x150) = param_3;
  *(undefined8 *)(param_5 + 0x158) = param_4;
  return;
}



/* Entry: 108e1f3c8; end: 108e1f3d3; -[SCCaptionDefaultTextView superviewContentBounds] */

undefined8 FUN_108e1f3c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 108e1f3d4; end: 108e1f3df; -[SCCaptionDefaultTextView setSuperviewContentBounds:] */

void FUN_108e1f3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x160) = param_1;
  *(undefined8 *)(param_5 + 0x168) = param_2;
  *(undefined8 *)(param_5 + 0x170) = param_3;
  *(undefined8 *)(param_5 + 0x178) = param_4;
  return;
}



/* Entry: 108e1f3e0; end: 108e1f47f; -[SCCaptionDefaultTextView .cxx_destruct] */

void FUN_108e1f3e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_destroyWeak(param_1 + 0xf8);
  _objc_destroyWeak(param_1 + 0xf0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 108e1f480; end: 108e1f5e7; +[SCCaptionFactoryImpl captionForState:editingDelegate:resourceDelegate:isLagunaMedia:shouldEnableUserTagging:initialTransform:originalContentBounds:captionCarouselContainerView:superviewBounds:superviewContentBounds:superviewEdgeInsets:useFirstNameForTagging:shouldKeepStyles:] */

void FUN_108e1f480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 in_stack_00000000;
  
  _objc_retain(in_stack_00000000);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  uVar1 = param_11;
  func_0x00010c06e960();
  puVar2 = PTR_PTR_1126c4178;
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126c4180;
  }
  _objc_alloc(puVar2);
  func_0x00010c04be80(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release(in_stack_00000000);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e1f5e8; end: 108e1f74f; +[SCCaptionFactoryImpl captionForState:editingDelegate:backgroundImage:isLagunaMedia:shouldEnableUserTagging:initialTransform:originalContentBounds:captionCarouselContainerView:superviewBounds:superviewContentBounds:superviewEdgeInsets:useFirstNameForTagging:shouldKeepStyles:] */

void FUN_108e1f5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 in_stack_00000000;
  
  _objc_retain(in_stack_00000000);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  uVar1 = param_11;
  func_0x00010c06e960();
  puVar2 = PTR_PTR_1126c4178;
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126c4180;
  }
  _objc_alloc(puVar2);
  func_0x00010c04be40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release(in_stack_00000000);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e1f750; end: 108e1f7d7; +[SCCaptionStateTaggedItem convertToTaggedItemFromSCSnapchatter:range:] */

void FUN_108e1f750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dc090;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c05a700();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126d2ab0;
  func_0x00010c268440(PTR_PTR_1126d2ab0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e1f7d8; end: 108e1f89b; -[SCCaptionStateTaggedItem user] */

void FUN_108e1f7d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108e1f89c;
  uStack_30 = 0x108e1f8ac;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108e1f8b4;
  puStack_60 = &UNK_1108e6ea8;
  puStack_48 = puStack_58;
  func_0x00010c0c0b00(param_1,param_2,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e1f89c; end: 108e1f8b3;  */

void FUN_108e1f89c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e1f8b4; end: 108e1f8f3;  */

void FUN_108e1f8b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e1f8f4; end: 108e1f9a3; -[SCCaptionStateTaggedItem range] */

undefined1  [16] FUN_108e1f8f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3010000000;
  uStack_28 = 0;
  pcStack_38 = "";
  uStack_30 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108e1f9a4;
  puStack_60 = &UNK_1108e6ea8;
  puStack_48 = puStack_58;
  func_0x00010c0c0b00(param_1,param_2,&puStack_78);
  auVar1 = *(undefined1 (*) [16])(puStack_48 + 4);
  __Block_object_dispose(&uStack_50,8);
  return auVar1;
}



/* Entry: 108e1f9a4; end: 108e1f9d3;  */

void FUN_108e1f9a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  func_0x00010c11f2a0();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  return;
}



/* Entry: 108e1f9d4; end: 108e1fd2f; -[SCCaptionStyleResourceProviderImpl initWithPreferences:sessionRequestManager:] */

undefined1 *
FUN_108e1f9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126fea48;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x50);
    *(undefined8 *)((long)puVar2 + 0x50) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x58);
    *(undefined8 *)((long)puVar2 + 0x58) = param_4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x40);
    *(undefined **)((long)puVar2 + 0x40) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined **)((long)puVar2 + 0x18) = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar6 = (undefined1 *)puVar2;
    func_0x00010bf68f20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x68);
    *(undefined1 **)((long)puVar2 + 0x68) = puVar6;
    _objc_release(uVar3);
    *(undefined2 *)((long)puVar2 + 0x38) = 0x100;
    puVar4 = PTR_PTR_1126b9940;
    _objc_alloc(PTR_PTR_1126b9940);
    func_0x00010c02d5c0();
    puVar5 = PTR_PTR_1126dc000;
    _objc_alloc();
    func_0x00010c02d660();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined **)((long)puVar2 + 0x20) = puVar5;
    _objc_release(uVar3);
    lVar7 = *(long *)((long)puVar2 + 0x50);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010c0d3c80();
    if (lVar9 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)((long)puVar2 + 0x28);
      *(long *)((long)puVar2 + 0x28) = (long)puVar5;
    }
    else {
      _objc_retain(lVar9);
      lVar8 = *(long *)((long)puVar2 + 0x28);
      *(long *)((long)puVar2 + 0x28) = lVar9;
    }
    _objc_release(lVar8);
    _objc_release(lVar9);
    _objc_release(lVar7);
    lVar9 = *(long *)((long)puVar2 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf655e0(0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
      *(undefined **)((long)puVar2 + 0x10) = puVar5;
    }
    else {
      _objc_retain(lVar9);
      uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
      *(long *)((long)puVar2 + 0x10) = lVar9;
    }
    _objc_release(uVar3);
    _objc_release(lVar9);
    lVar9 = *(long *)((long)puVar2 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar2 + 8);
      *(undefined **)((long)puVar2 + 8) = puVar5;
    }
    else {
      _objc_retain(lVar9);
      uVar3 = *(undefined8 *)((long)puVar2 + 8);
      *(long *)((long)puVar2 + 8) = lVar9;
    }
    _objc_release(uVar3);
    _objc_release(lVar9);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined8 *)((long)puVar2 + 0x30) = uVar3;
    _objc_release(uVar11);
    ppuVar10 = *(undefined ***)((long)puVar2 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar10 != (undefined **)0x0) {
      ppuVar1 = ppuVar10;
    }
    _objc_retain(ppuVar1);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x48);
    *(undefined ***)((long)puVar2 + 0x48) = ppuVar1;
    _objc_release(uVar3);
    _objc_release(ppuVar10);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 108e1fd30; end: 108e1fdbf; -[SCCaptionStyleResourceProviderImpl indexOfStyleInAvailableArray:] */

undefined8 FUN_108e1fd30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108e1fdc0;
  puStack_30 = &UNK_110ac6410;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfece40(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 108e1fdc0; end: 108e1fe3f;  */

undefined8 FUN_108e1fdc0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d4f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  if ((int)uVar2 != 0) {
    *param_4 = 1;
  }
  return uVar2;
}



/* Entry: 108e1fe40; end: 108e2006b; -[SCCaptionStyleResourceProviderImpl _prepareCaptionStyle:completeBlock:] */

void FUN_108e1fe40(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_3;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar4 == 0) {
      _objc_release();
      uStack_70 = 0;
      uStack_60 = 0x2020000000;
      uStack_58 = 1;
      puStack_68 = &uStack_70;
      _dispatch_group_create();
      _dispatch_group_enter();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_108e2006c;
      puStack_90 = &UNK_1108e78b8;
      _objc_retain(param_3);
      uStack_88 = param_3;
      puStack_78 = &uStack_70;
      _objc_retain(uVar2);
      uStack_80 = uVar2;
      func_0x00010be894e0(param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_e0 = puVar1;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_108e20088;
      puStack_c8 = &UNK_110883360;
      puStack_b0 = &uStack_70;
      _objc_retain(param_3);
      uStack_c0 = param_3;
      _objc_retain(param_4);
      lStack_b8 = param_4;
      func_0x000107c27d98(uVar2,uVar5,&puStack_e0);
      _objc_release(uVar5);
      _objc_release(lStack_b8);
      _objc_release(uStack_c0);
      _objc_release(uStack_80);
      _objc_release(uStack_88);
      _objc_release(uVar2);
      __Block_object_dispose(&uStack_70,8);
      goto LAB_108e20028;
    }
  }
  _objc_release(uVar2);
  uVar2 = param_3;
  FUN_108e267fc(param_3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,uVar2);
  _objc_release(uVar2);
LAB_108e20028:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108e2006c; end: 108e20087;  */

void FUN_108e2006c(long param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  *(byte *)(lVar1 + 0x18) = param_2 & *(byte *)(lVar1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108e20088; end: 108e2014b;  */

void FUN_108e20088(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) == '\x01') {
    puVar2 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c127f20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf49920(puVar2);
    _objc_release(uVar3);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    FUN_108e267fc(uVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108e20148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  return;
}



/* Entry: 108e2014c; end: 108e2043f; -[SCCaptionStyleResourceProviderImpl _registerFont:collectorBlock:] */

void FUN_108e2014c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar5 = param_3;
  func_0x00010c127f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_3;
    func_0x00010c127f20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1);
    _objc_release(lVar5);
  }
  lVar5 = param_3;
  func_0x00010bf1edc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_3;
    func_0x00010bf1edc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1);
    _objc_release(lVar5);
  }
  lVar5 = param_3;
  func_0x00010c0840a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_3;
    func_0x00010c0840a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1);
    _objc_release(lVar5);
  }
  lVar5 = param_3;
  func_0x00010c084080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_3;
    func_0x00010c084080(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1);
    _objc_release(lVar5);
  }
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  puVar2 = puVar1;
  func_0x00010bf529e0();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_108e20440;
  uStack_70 = 0x108e20450;
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_48 = puVar2;
  _objc_opt_new();
  lVar5 = puStack_58[3];
  puStack_68 = puVar3;
  if (lVar5 != 0) {
    lVar4 = param_3;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010bf97ce0(puVar1);
      _objc_release(param_4);
      _objc_release(param_3);
      goto LAB_108e203c4;
    }
  }
  (**(code **)(param_4 + 0x10))(param_4,lVar5 == 0);
LAB_108e203c4:
  __Block_object_dispose(&uStack_90,8);
  _objc_release(puStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108e20440; end: 108e20457;  */

void FUN_108e20440(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e20458; end: 108e2054f;  */

void FUN_108e20458(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010be12e40(uVar1);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 108e20550; end: 108e20833;  */

void FUN_108e20550(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lStack_58;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0);
    goto LAB_108e20810;
  }
  uVar2 = param_2;
  _CGDataProviderCreateWithCFData();
  uVar4 = uVar2;
  _CGFontCreateWithDataProvider();
  uVar1 = uVar4;
  _CGFontCopyPostScriptName();
  _CGDataProviderRelease(uVar2);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x28) + 0x40);
  func_0x00010bf4b900();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar4;
    _CTFontManagerRegisterGraphicsFont(uVar4,&lStack_58);
    if ((uVar2 & 1) != 0) {
LAB_108e205e4:
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfb3f20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((int)uVar2 != 0) {
        func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40));
        func_0x00010bdd77e0(*(undefined8 *)(param_1 + 0x28));
        goto LAB_108e20630;
      }
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0);
      _CGFontRelease(uVar4);
      goto LAB_108e20808;
    }
    lVar8 = lStack_58;
    func_0x00010bf3ec40();
    if (lVar8 == 0x69) {
      _objc_release(lStack_58);
      goto LAB_108e205e4;
    }
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0);
    _CGFontRelease(uVar4);
LAB_108e20804:
    _objc_release(lStack_58);
  }
  else {
LAB_108e20630:
    _CGFontRelease(uVar4);
    func_0x00010c1d0560(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
    lVar8 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    *(long *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + -1;
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) == 0) {
      lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
      func_0x00010c0dff20(lVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(ulong *)(param_1 + 0x20);
      func_0x00010c25e1e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf4b900();
      if ((uVar2 & 1) == 0) {
        _objc_release(uVar4);
LAB_108e20738:
        uVar4 = *(ulong *)(param_1 + 0x20);
        func_0x00010c25e1e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        func_0x00010bf4b900();
        _objc_release(uVar4);
        if ((uVar2 & 1) != 0) goto LAB_108e207a0;
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c25e1e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        func_0x00010bf4b900();
        _objc_release(uVar6);
        if ((int)uVar3 != 0) goto LAB_108e207a0;
      }
      else {
        uVar5 = *(ulong *)(param_1 + 0x20);
        func_0x00010c25e1e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        func_0x00010bf4b900();
        _objc_release(uVar5);
        _objc_release(uVar4);
        if ((uVar2 & 1) == 0) goto LAB_108e20738;
LAB_108e207a0:
        lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
        func_0x00010c0dff20(lVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        lVar8 = lVar7;
      }
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),lVar8 != 0);
      lStack_58 = lVar8;
      goto LAB_108e20804;
    }
  }
LAB_108e20808:
  _objc_release(uVar1);
LAB_108e20810:
  _objc_release(param_2);
  return;
}



/* Entry: 108e20834; end: 108e20a2b; -[SCCaptionStyleResourceProviderImpl loadDependencyOfCaptionStyles:completeBlock:] */

void FUN_108e20834(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = param_3;
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  puVar3 = PTR_PTR_1126b33c0;
  _objc_alloc_init();
  lVar4 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      _objc_retain(puVar3);
      _objc_retain(lVar4);
      _objc_retain(param_4);
      func_0x00010be780e0(param_1);
      _objc_release(param_4);
      _objc_release(lVar4);
      _objc_release(puVar3);
      lVar7 = lVar7 + 1;
    } while (lVar5 != lVar7);
    lVar5 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  iVar2 = (int)*(undefined8 *)(param_3 + 0x20);
  func_0x00010bfec280();
  lVar5 = *(long *)(param_3 + 0x28);
  func_0x00010bf529e0();
  if (lVar5 == iVar2) {
                    /* WARNING: Could not recover jumptable at 0x000108e20a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108e20a2c; end: 108e20a77;  */

void FUN_108e20a2c(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfec280();
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar2 == iVar1) {
                    /* WARNING: Could not recover jumptable at 0x000108e20a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108e20a78; end: 108e20d1f; -[SCCaptionStyleResourceProviderImpl _updateAvailableCaptionStylesIfNecessary:controllerVersion:] */

void FUN_108e20a78(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  if (*(char *)(param_2 + 0x39) == '\x01') {
    if (*(double *)(param_2 + 0x70) == param_1) {
      lVar1 = param_2 + 0x60;
      _objc_loadWeakRetained(lVar1);
      uVar2 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c25e2e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c0cc500(lVar1);
      _objc_release(uVar2);
      _objc_release(lVar1);
    }
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_108e20440;
    uStack_70 = 0x108e20450;
    lVar1 = param_2;
    func_0x00010bf68f20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0d3c80();
    lStack_68 = lVar3;
    _objc_release(lVar1);
    func_0x00010bf529e0();
    puVar4 = PTR_PTR_1126cbf68;
    func_0x00010bf32660();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0;
    while( true ) {
      uVar5 = *(ulong *)(param_2 + 0x30);
      func_0x00010c25e2e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
      if (uVar6 <= uVar8) break;
      func_0x00010befa120(puStack_88[5]);
      uVar8 = uVar8 + 1;
    }
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x2020000000;
    uStack_98 = 0;
    puVar7 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c25e2e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar7);
    _objc_retain(puVar4);
    _objc_retain(param_4);
    func_0x00010bf97e80(uVar2);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar7);
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(puVar4);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(lStack_68);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 108e20d20; end: 108e20e57;  */

void FUN_108e20d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_68,auStack_48);
  uStack_50 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = param_3;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  func_0x00010be780e0(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 108e20e58; end: 108e2112f;  */

void FUN_108e20e58(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  if (*(double *)(param_1 + 0x58) == *(double *)(*(long *)(param_1 + 0x20) + 0x70)) {
    lVar2 = param_1 + 0x50;
    _objc_loadWeakRetained();
    if (param_2 == 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 8);
      *(long *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + 1;
    }
    else {
      lVar7 = lVar2 + 0x60;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c25e0c0();
      _objc_release(lVar7);
      func_0x00010c1d04c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
      iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
      func_0x00010bfec280();
      lVar3 = *(long *)(lVar2 + 0x30);
      func_0x00010c25e2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      if (lVar7 == iVar1) {
        uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar9);
        func_0x00010c1063a0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfae5e0(uVar8);
        _objc_release(puVar4);
        uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
        func_0x00010bf51e00();
        uVar6 = *(undefined8 *)(lVar2 + 0x68);
        *(undefined8 *)(lVar2 + 0x68) = uVar8;
        _objc_release(uVar6);
        func_0x00010c1d0640(*(undefined8 *)(lVar2 + 0x28));
        puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
        func_0x00010c106cc0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(lVar2 + 0x48);
        *(undefined **)(lVar2 + 0x48) = puVar5;
        _objc_release(uVar8);
        _objc_release(puVar4);
        func_0x00010c1d0640(*(undefined8 *)(lVar2 + 0x28));
        if (*(long *)(lVar2 + 8) != *(long *)(param_1 + 0x38)) {
          func_0x00010c1d0640(*(undefined8 *)(lVar2 + 0x28));
          uVar6 = *(undefined8 *)(param_1 + 0x38);
          _objc_retain(uVar6);
          uVar8 = *(undefined8 *)(lVar2 + 8);
          *(undefined8 *)(lVar2 + 8) = uVar6;
          _objc_release(uVar8);
          func_0x00010c1d0640(*(undefined8 *)(lVar2 + 0x28));
          func_0x00010beda300(lVar2);
        }
        *(undefined1 *)(lVar2 + 0x39) = 0;
        uVar6 = *(undefined8 *)(lVar2 + 0x50);
        uVar8 = *(undefined8 *)(lVar2 + 0x28);
        func_0x00010bf51e00(uVar8);
        func_0x00010c1d0560(uVar6);
        _objc_release(uVar8);
        if (*(double *)(param_1 + 0x58) == *(double *)(lVar2 + 0x70)) {
          lVar7 = lVar2 + 0x60;
          _objc_loadWeakRetained(lVar7);
          func_0x00010bf529e0(*(undefined8 *)(lVar2 + 0x68));
          func_0x00010bfafce0(lVar7);
          _objc_release(lVar7);
        }
        _objc_release(uVar9);
      }
    }
    _objc_release(lVar2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108e21130; end: 108e2114f;  */

uint FUN_108e21130(long param_1,undefined8 param_2)

{
  func_0x00010c071ae0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  return (uint)param_2 ^ 1;
}



/* Entry: 108e21150; end: 108e211f3; -[SCCaptionStyleResourceProviderImpl defaultCaptionStyles] */

void FUN_108e21150(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cbf68;
  func_0x00010bf8b640(PTR_PTR_1126cbf68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126cbf68;
  func_0x00010bf8b5a0(PTR_PTR_1126cbf68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,puVar3);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e211f4; end: 108e2122f; -[SCCaptionStyleResourceProviderImpl countOfDefaultStyle] */

undefined8 FUN_108e211f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf68f20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108e21230; end: 108e2129b; -[SCCaptionStyleResourceProviderImpl _isCaptionStyleResourceTTLExpired] */

bool FUN_108e21230(double param_1,long param_2)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar2 = param_1;
  func_0x00010c26f320(*(undefined8 *)(param_2 + 0x10));
  _objc_release(puVar1);
  return 864000.0 < param_1 - dVar2;
}



/* Entry: 108e2129c; end: 108e21307; -[SCCaptionStyleResourceProviderImpl _updateLastCheckingTimestamp] */

void FUN_108e2129c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110efb1b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e21308; end: 108e213e3; -[SCCaptionStyleResourceProviderImpl _fetchOnDemandTypefaceWithURLString:completeBlock:] */

void FUN_108e21308(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110efb2d8,
                      &PTR____CFConstantStringClassReference_110efb2f8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108e213e4;
  puStack_50 = &UNK_110ac6530;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0dff40(uVar1,param_2,param_3,0,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108e213e4; end: 108e216d7;  */

void FUN_108e213e4(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    if ((param_3 == 0) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_108e21684;
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b4960;
    puVar2 = PTR_PTR_1126b19f8;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bbf20;
    func_0x00010bdc1d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58700(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
    func_0x00010c11de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar9);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar8);
    func_0x00010c25f560(puVar2);
    _objc_release(uVar7);
    _objc_release(puVar2);
    puVar2 = puVar5;
    func_0x00010c086560(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2193a0(puVar5);
    _objc_release(puVar2);
    _objc_release(uVar8);
    _objc_release(uVar9);
    _objc_release(puVar5);
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x30);
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
    _objc_retain(puVar1);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar7);
    _objc_release(param_4);
  }
  _objc_release(puVar1);
LAB_108e21684:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(param_2 + 0x28);
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108e216ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 0x10))(lVar6,*(undefined8 *)(param_2 + 0x20));
    return;
  }
  return;
}



/* Entry: 108e216d8; end: 108e216f3;  */

void FUN_108e216d8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108e216ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 108e216f4; end: 108e21763;  */

void FUN_108e216f4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  func_0x00010c252ee0();
  lVar2 = 0;
  lVar1 = *(long *)(param_1 + 0x28);
  if ((((param_5 != 0) || (param_4 == 0)) || (param_3 != 200)) || (lVar2 = param_4, lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))(lVar1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e21764; end: 108e21787; -[SCCaptionStyleResourceProviderImpl _cacheFontFile:forKey:] */

void FUN_108e21764(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((param_3 != 0) && (param_4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c1d0510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_dataEncoding_forKey_ex_112651b68,
               param_3,0,param_4,0,0);
    return;
  }
  return;
}



/* Entry: 108e21788; end: 108e21903; -[SCCaptionStyleResourceProviderImpl initWithCoder:] */

undefined1 * FUN_108e21788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fea48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    _objc_release(uVar3);
    if (*(long *)((long)puVar1 + 0x10) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf655e0(0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
      *(undefined **)((long)puVar1 + 0x10) = puVar2;
      _objc_release(uVar4);
    }
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    if (*(long *)((long)puVar1 + 8) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined **)((long)puVar1 + 8) = puVar2;
      _objc_release(uVar4);
    }
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar4;
    _objc_release(uVar3);
    if (*(long *)((long)puVar1 + 0x48) == 0) {
      *(undefined ***)((long)puVar1 + 0x48) = &PTR____CFConstantStringClassReference_110daafd8;
      _objc_release(0);
    }
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e21904; end: 108e2198b; -[SCCaptionStyleResourceProviderImpl encodeWithCoder:] */

void FUN_108e21904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110efb318);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110efb338);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110efb358);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110efb398);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e2198c; end: 108e219f3; -[SCCaptionStyleResourceProviderImpl resetDownloader] */

void FUN_108e2198c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (*(char *)(param_1 + 0x39) == '\x01') {
    lVar1 = param_1;
    func_0x00010bf68f20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(long *)(param_1 + 0x68) = lVar1;
    _objc_release(uVar2);
    *(undefined2 *)(param_1 + 0x38) = 0x100;
  }
  else if (*(char *)(param_1 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 108e219f4; end: 108e21a0b; -[SCCaptionStyleResourceProviderImpl delegate] */

void FUN_108e219f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e21a0c; end: 108e21a17; -[SCCaptionStyleResourceProviderImpl setDelegate:] */

void FUN_108e21a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 108e21a18; end: 108e21a1f; -[SCCaptionStyleResourceProviderImpl availableCaptionStyles] */

undefined8 FUN_108e21a18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108e21a20; end: 108e21a4f; -[SCCaptionStyleResourceProviderImpl setAvailableCaptionStyles:] */

void FUN_108e21a20(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108e21a50; end: 108e21a57; -[SCCaptionStyleResourceProviderImpl currentControllerVersion] */

undefined8 FUN_108e21a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108e21a58; end: 108e21a5f; -[SCCaptionStyleResourceProviderImpl setCurrentControllerVersion:] */

void FUN_108e21a58(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x70) = param_1;
  return;
}



/* Entry: 108e21a60; end: 108e21b03; -[SCCaptionStyleResourceProviderImpl .cxx_destruct] */

void FUN_108e21a60(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 108e21b04; end: 108e2233b;  */

void FUN_108e21b04(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
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
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uStack_70;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c229ee0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_70 = (undefined *)0x0;
  }
  else {
    uStack_70 = PTR_PTR_1126dc098;
    _objc_alloc();
    lVar2 = lVar1;
    func_0x00010bf40c40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e1dc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0e1e00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c11ef60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffb00();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  puVar6 = PTR_PTR_1126dc0a0;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bfb3f20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c25e1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010bf2fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010c086520();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010bf1fc80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_2;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_2;
  func_0x00010bfb3c40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_2;
  func_0x00010bfb3f60();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2;
  func_0x00010bfb3c60();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_2;
  func_0x00010bf40d20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_2;
  func_0x00010c141a80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_2;
  func_0x00010bf8ccc0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_2;
  func_0x00010c127f20();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_2;
  func_0x00010bf1edc0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_2;
  func_0x00010c0840a0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_2;
  func_0x00010c084080();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_2;
  func_0x00010bf13e40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_2;
  func_0x00010bfb3dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_2;
  func_0x00010bf14160();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c02d740();
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
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
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108e2233c; end: 108e22353; -[SCCaptionTouchControlUIView isTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108e2233c(long param_1)

{
  return *(long *)(param_1 + _DAT_11277c108) != 0;
}



/* Entry: 108e22354; end: 108e22383; -[SCCaptionTouchControlUIView trajectoryManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e22354(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c108);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e22384; end: 108e22393; -[SCCaptionTouchControlUIView targetTrajectory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e22384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26a1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c108),PTR_s_targetTrajectory_112678290);
  return;
}



/* Entry: 108e22394; end: 108e223f3; -[SCCaptionTouchControlUIView enableTrackingWithManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e22394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277c108;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e223f4; end: 108e2242b; -[SCCaptionTouchControlUIView disableTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e223f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c108;
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e2242c; end: 108e224f3; -[SCCaptionTouchControlUIView trajectoryManager:didOutputTransform:shouldAnimate:] */

void FUN_108e2242c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108e224f4;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  _objc_retain(param_4);
  uStack_38 = param_4;
  _objc_retainBlock();
  if (param_5 == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    func_0x00010bf03400(0x3f9eb851eb851eb8,PTR__OBJC_CLASS___UIView_1126aec20,param_2,ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 108e224f4; end: 108e225a7;  */

void FUN_108e224f4(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c27ada0(*(undefined8 *)(param_5 + 0x28));
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c27ada0(*(undefined8 *)(param_5 + 0x28));
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c262ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c219b80(param_1 * param_3,param_2 * param_4,*(undefined8 *)(param_5 + 0x20));
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c14e120(*(undefined8 *)(param_5 + 0x28));
  func_0x00010c1f5fe0(*(undefined8 *)(param_5 + 0x20));
  func_0x00010c141a80(*(undefined8 *)(param_5 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c1ee7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + 0x20),PTR_s_setRotation__112659410);
  return;
}



/* Entry: 108e225a8; end: 108e225c7; -[SCCaptionTouchControlUIView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e225a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c108,0);
  return;
}



/* Entry: 108e225c8; end: 108e226d7;  */

void FUN_108e225c8(ulong param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010c08fa60();
  uVar4 = param_1;
  if (uVar1 == param_3) {
    _objc_retain(param_1);
  }
  else {
    uVar1 = param_1;
    func_0x00010c08fa60();
    if (uVar1 < param_3) {
      uVar1 = param_1;
      func_0x00010c08fa60();
      lVar2 = param_2;
      func_0x00010c08fa60();
      uVar3 = param_1;
      func_0x00010c25ce40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      if (param_3 < lVar2 + uVar1) {
        func_0x00010c08fa60();
        func_0x00010c260c80(uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
      }
    }
    else {
      func_0x00010c260c80(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108e226d8; end: 108e22723;  */

void FUN_108e226d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000107c31908();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e22724; end: 108e227f3;  */

void FUN_108e22724(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bfda7c0();
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c11bb40(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0d3c80();
    _objc_release(puVar1);
    func_0x00010c12b740(puVar2);
    uVar3 = param_2;
    func_0x00010bf44700(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108e227f4; end: 108e22f3b;  */

void FUN_108e227f4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf01c80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  func_0x00010bef7620(puVar2);
  puVar1 = puVar2;
  func_0x00010c06a520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf44700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar3);
  puVar19 = &uStack_130;
  lStack_138 = lVar3;
  func_0x00010bf52a60();
  if (lStack_138 != 0) {
    lVar20 = *plStack_120;
    do {
      lVar21 = 0;
      do {
        if (*plStack_120 != lVar20) {
          _objc_enumerationMutation(lVar3);
        }
        uVar5 = *(ulong *)(lStack_128 + lVar21 * 8);
        func_0x00010bf44740();
        _objc_retainAutoreleasedReturnValue();
        uVar22 = uVar5;
        func_0x00010bf529e0();
        if (1 < uVar22) {
          uVar22 = 1;
          do {
            uVar6 = uVar5;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c08fa60();
            if (uVar7 != 0) {
              puVar8 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
              func_0x00010bf01c80(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              func_0x00010c11f340();
              _objc_release(puVar8);
              if (uVar7 != 0x7fffffffffffffff) {
                puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar4);
                _objc_release(puVar8);
              }
            }
            _objc_release(uVar6);
            uVar22 = uVar22 + 1;
            uVar6 = uVar5;
            func_0x00010bf529e0();
          } while (uVar22 < uVar6);
        }
        _objc_release(uVar5);
        lVar21 = lVar21 + 1;
      } while (lVar21 != lStack_138);
      puVar19 = &uStack_130;
      lStack_138 = lVar3;
      func_0x00010bf52a60();
    } while (lStack_138 != 0);
  }
  _objc_release(lVar3);
  puVar8 = puVar4;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  puVar17 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(puVar19);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = param_1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar9 = puVar19;
  func_0x00010c26b700(puVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(puVar9);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar19;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c08fa60();
  _objc_release(puVar9);
  if (puVar11 != (undefined8 *)0x0) {
    do {
      puVar9 = puVar19;
      func_0x00010c26b700(puVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(puVar9);
      puVar11 = puVar19;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar11;
      func_0x00010c11f460();
      puVar18 = puVar17;
      _objc_release(puVar12);
      _objc_release(puVar11);
      if (puVar9 == (undefined8 *)0x7fffffffffffffff) break;
      puVar11 = puVar19;
      func_0x00010c26b700(puVar19);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar1;
      func_0x00010c08fa60();
      if (puVar12 < puVar17) {
        puVar13 = puVar11;
        func_0x00010c260c80(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11f420();
        func_0x00010c08fa60(puVar1);
        _objc_release(puVar13);
      }
      puVar13 = puVar11;
      func_0x00010c25cf80(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      func_0x00010c08fa60(puVar13);
      puVar11 = puVar19;
      func_0x00010c26b700(puVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(puVar11);
      puVar14 = PTR_PTR_1126d2ab0;
      func_0x00010c08fa60(puVar1);
      func_0x00010bf51620(puVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126c4438;
      func_0x00010c08fa60(puVar1);
      func_0x00010befbcc0(puVar12);
      puVar11 = puVar19;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar11;
      func_0x00010c08fa60();
      _objc_release(puVar11);
      puVar11 = puVar19;
      if (puVar15 == (undefined8 *)0x0) {
        puVar15 = (undefined8 *)PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        func_0x00010c26b700(puVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e820(puVar15);
        puVar16 = puVar15;
        func_0x00010c14c840();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16b720(puVar19);
        _objc_release(puVar16);
      }
      else {
        func_0x00010bf0e540(puVar19);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar11;
        func_0x00010c14c840();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16b720(puVar19);
      }
      _objc_release(puVar15);
      _objc_release(puVar11);
      puVar9 = (undefined8 *)((long)puVar9 + (long)puVar17);
      _objc_release(puVar14);
      _objc_release(puVar13);
      puVar11 = puVar19;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar11;
      func_0x00010c08fa60();
      _objc_release(puVar11);
      puVar17 = puVar18;
    } while (puVar9 < puVar13);
  }
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar19);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e22f3c; end: 108e2301f;  */

void FUN_108e22f3c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  if (param_2 != 0) {
    lVar1 = param_1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar2 = param_1;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      FUN_10901e6c8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      goto LAB_108e22fcc;
    }
  }
  lVar1 = param_1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
LAB_108e22fcc:
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e23020; end: 108e2327b;  */

void FUN_108e23020(ulong param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 auStack_128 [6];
  undefined8 auStack_f8 [6];
  undefined8 auStack_c8 [6];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 != 0) {
    uVar6 = param_1;
    func_0x00010c0849c0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)PTR__kUTTypeGIF_11034b1c0;
    uVar7 = uVar6;
    func_0x00010bfd8240();
    _objc_release(uVar6);
    uVar6 = param_1;
    func_0x00010c0849c0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)PTR__kUTTypeImage_11034b1d0;
    uVar8 = uVar6;
    func_0x00010bfd8240();
    _objc_release(uVar6);
    uVar6 = param_1;
    func_0x00010c0849c0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)PTR__kUTTypePlainText_11034b1f8;
    uVar9 = uVar6;
    func_0x00010bfd8240();
    _objc_release(uVar6);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    if ((((uVar7 & 1) != 0) || ((uVar8 & 1) != 0)) || ((uVar9 & 1) != 0)) {
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_108e2327c;
      puStack_80 = &UNK_110849530;
      _objc_retain(param_2);
      ppuVar10 = &puStack_98;
      lStack_78 = param_2;
      _objc_retainBlock();
      bVar5 = (int)uVar8 == 0;
      pcVar1 = FUN_108e233ec;
      if (bVar5) {
        pcVar1 = FUN_108e234d0;
      }
      puVar11 = auStack_f8;
      if (bVar5) {
        uVar13 = uVar14;
        puVar11 = auStack_128;
      }
      puVar2 = auStack_c8;
      pcVar3 = FUN_108e23308;
      if ((int)uVar7 == 0) {
        uVar12 = uVar13;
        puVar2 = puVar11;
        pcVar3 = pcVar1;
      }
      _objc_retain(uVar12);
      *puVar2 = puVar4;
      puVar2[1] = 0xc2000000;
      puVar2[2] = pcVar3;
      puVar2[3] = &UNK_110ac6600;
      _objc_retain(ppuVar10);
      puVar2[4] = ppuVar10;
      _objc_retain(param_2);
      puVar2[5] = param_2;
      puVar11 = puVar2;
      _objc_retainBlock(puVar2);
      _objc_release(puVar2[5]);
      _objc_release(puVar2[4]);
      uVar6 = param_1;
      func_0x00010c0849c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09b300();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(ppuVar10);
      _objc_release(lStack_78);
      _objc_release(puVar11);
      _objc_release(uVar12);
      goto LAB_108e23248;
    }
  }
  (**(code **)(param_2 + 0x10))(param_2,0,0,0);
LAB_108e23248:
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 108e2327c; end: 108e232ef;  */

void FUN_108e2327c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108e232f0;
  puStack_30 = &UNK_110849530;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x000107c312cc("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 108e232f0; end: 108e23307;  */

void FUN_108e232f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108e23304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0);
  return;
}



/* Entry: 108e23308; end: 108e233d3;  */

void FUN_108e23308(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if ((param_3 == 0) && (lVar1 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108e233d4;
    puStack_48 = &UNK_11084aaa8;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    _objc_retain(param_2);
    lStack_40 = param_2;
    func_0x000107c312d0("APPSTORE",&puStack_60);
    _objc_release(lStack_40);
    _objc_release(uStack_38);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108e233d4; end: 108e233eb;  */

void FUN_108e233d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108e233e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0,1);
  return;
}



/* Entry: 108e233ec; end: 108e234b7;  */

void FUN_108e233ec(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if ((param_3 == 0) && (lVar1 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108e234b8;
    puStack_48 = &UNK_11084aaa8;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    _objc_retain(param_2);
    lStack_40 = param_2;
    func_0x000107c312d0("APPSTORE",&puStack_60);
    _objc_release(lStack_40);
    _objc_release(uStack_38);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  _objc_release(param_2);
  return;
}


