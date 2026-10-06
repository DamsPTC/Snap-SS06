/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cb5844; end: 108cb584b; -[SCTimelineVideoSavedFilterData geoFilterAppearanceSettings] */

undefined8 FUN_108cb5844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cb584c; end: 108cb587b; -[SCTimelineVideoSavedFilterData setGeoFilterAppearanceSettings:] */

void FUN_108cb584c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108cb587c; end: 108cb5883; -[SCTimelineVideoSavedFilterData venueFilterSelector] */

undefined8 FUN_108cb587c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cb5884; end: 108cb58b3; -[SCTimelineVideoSavedFilterData setVenueFilterSelector:] */

void FUN_108cb5884(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb58b4; end: 108cb58fb; -[SCTimelineVideoSavedFilterData .cxx_destruct] */

void FUN_108cb58b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb58fc; end: 108cb5977; +[SCFilterGrapheneLoggingHelper logGrapheneSwipeMetricWithCarouselGroupName:mediaType:] */

void FUN_108cb58fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000108cb5a7c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b67b220(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_108cc665c(uVar1,param_3,param_4,1);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb5978; end: 108cb5a1f; +[SCFilterGrapheneLoggingHelper logGrapheneFilterStackMetricWithAction:source:] */

void FUN_108cb5978(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  func_0x000108cb5a7c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef0f78;
  if (param_3 != 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e6ed38;
  if (param_3 != 0) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef0fb8;
  if (param_4 != 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110ef0f98;
  if (param_4 != 0) {
    ppuVar3 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  FUN_108cc642c(param_1,ppuVar1,ppuVar3,1);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cb5a20; end: 108cb5acf; +[SCFilterGrapheneLoggingHelper logGrapheneVenueIDAttributedWithItemType:] */

void FUN_108cb5a20(undefined8 param_1)

{
  func_0x000108cb5a7c();
  _objc_retainAutoreleasedReturnValue();
  FUN_108cc688c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cb5ad0; end: 108cb5afb;  */

void FUN_108cb5ad0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126db9c8;
  _objc_alloc_init();
  uVar1 = puRam000000011372e3f0;
  puRam000000011372e3f0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb5afc; end: 108cb5b07; -[SCPreferences hasPostponedLocationPermissions] */

void FUN_108cb5afc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolForKey__1125a5670,&PTR____CFConstantStringClassReference_110ef1078);
  return;
}



/* Entry: 108cb5b08; end: 108cb5b13; -[SCPreferences setHasPostponedLocationPermissions:] */

void FUN_108cb5b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c172ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setBool_forKey__11263a618,param_3,
             &PTR____CFConstantStringClassReference_110ef1078);
  return;
}



/* Entry: 108cb5b14; end: 108cb5b5b; +[SCPreviewContainerViewGestureInteractionBlockEvent createWithGestureRecognizer:] */

void FUN_108cb5b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c017a00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cb5b5c; end: 108cb5bcf; -[SCPreviewContainerViewGestureInteractionBlockEvent initWithGestureRecognizer:] */

undefined1 * FUN_108cb5b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe250;
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



/* Entry: 108cb5bd0; end: 108cb5c5f; -[SCPreviewContainerViewGestureInteractionBlockEvent shouldBlockEventForResponder:] */

ulong FUN_108cb5bd0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x000107c318f8(param_3,PTR_DAT_1126a5b08);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_shouldBlockGesture__112669360);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c22e4e0(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108cb5c60; end: 108cb5c67; -[SCPreviewContainerViewGestureInteractionBlockEvent gestureRecognizer] */

undefined8 FUN_108cb5c60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb5c68; end: 108cb5c97; -[SCPreviewContainerViewGestureInteractionBlockEvent setGestureRecognizer:] */

void FUN_108cb5c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb5c98; end: 108cb5ca3; -[SCPreviewContainerViewGestureInteractionBlockEvent .cxx_destruct] */

void FUN_108cb5c98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb5ca4; end: 108cb5ceb; +[SCPreviewContainerViewLongPressGestureInteractionEvent createWithGestureRecognizer:] */

void FUN_108cb5ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010be3ac40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cb5cec; end: 108cb5d5f; -[SCPreviewContainerViewLongPressGestureInteractionEvent _initWithGestureRecognizer:] */

undefined1 * FUN_108cb5cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe258;
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



/* Entry: 108cb5d60; end: 108cb5e73; -[SCPreviewContainerViewLongPressGestureInteractionEvent processEventForResponder:] */

ulong FUN_108cb5d60(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x000107c318f8(param_3,PTR_DAT_1126a5b08);
  uVar1 = param_3;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c252440();
  uVar4 = uVar1;
  if ((lVar2 == 1) &&
     (uVar3 = uVar1,
     _objc_opt_respondsToSelector(uVar1,PTR_s_didBeginLongPressInPreviewContai_1125ba410),
     (uVar3 & 1) != 0)) {
    func_0x00010bfc1a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf729a0(uVar1);
LAB_108cb5e3c:
    _objc_release(param_1);
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c252440();
    if (lVar2 == 3) {
LAB_108cb5e08:
      uVar3 = uVar1;
      _objc_opt_respondsToSelector(uVar1,PTR_s_didFinishLongPressInPreviewConta_1125bb4a0);
      if ((uVar3 & 1) != 0) {
        func_0x00010bfc1a80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf76be0(uVar1);
        goto LAB_108cb5e3c;
      }
    }
    else {
      lVar2 = *(long *)(param_1 + 8);
      func_0x00010c252440();
      if (lVar2 == 4) goto LAB_108cb5e08;
    }
    uVar4 = 1;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 108cb5e74; end: 108cb5e7b; -[SCPreviewContainerViewLongPressGestureInteractionEvent gestureRecognizer] */

undefined8 FUN_108cb5e74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb5e7c; end: 108cb5e87; -[SCPreviewContainerViewLongPressGestureInteractionEvent .cxx_destruct] */

void FUN_108cb5e7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb5e88; end: 108cb5edf; +[SCPreviewContainerViewLongPressProcessedGestureInteractionEvent createWithGestureRecognizer:result:] */

void FUN_108cb5e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010be3ac60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cb5ee0; end: 108cb5f63; -[SCPreviewContainerViewLongPressProcessedGestureInteractionEvent _initWithGestureRecognizer:result:] */

undefined1 *
FUN_108cb5ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fe260;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cb5f64; end: 108cb603b; -[SCPreviewContainerViewLongPressProcessedGestureInteractionEvent processEventForResponder:] */

undefined8 FUN_108cb5f64(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x000107c318f8(param_3,PTR_DAT_1126a5b08);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c252440();
  if ((lVar3 == 1) &&
     (uVar2 = uVar1,
     _objc_opt_respondsToSelector(uVar1,PTR_s_didProcessBeginLongPressInPrevie_1125bbca0),
     (uVar2 & 1) != 0)) {
    func_0x00010bf78be0(uVar1);
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c252440();
    if (lVar3 != 3) {
      lVar3 = *(long *)(param_1 + 8);
      func_0x00010c252440();
      if (lVar3 != 4) goto LAB_108cb6018;
    }
    uVar2 = uVar1;
    _objc_opt_respondsToSelector(uVar1,PTR_s_didProcessFinishLongPressInPrevi_1125bbcb0);
    if ((uVar2 & 1) != 0) {
      func_0x00010bf78c20(uVar1);
    }
  }
LAB_108cb6018:
  _objc_release(uVar1);
  _objc_release(param_3);
  return 1;
}



/* Entry: 108cb603c; end: 108cb6043; -[SCPreviewContainerViewLongPressProcessedGestureInteractionEvent gestureRecognizer] */

undefined8 FUN_108cb603c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb6044; end: 108cb604b; -[SCPreviewContainerViewLongPressProcessedGestureInteractionEvent result] */

undefined8 FUN_108cb6044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cb604c; end: 108cb6057; -[SCPreviewContainerViewLongPressProcessedGestureInteractionEvent .cxx_destruct] */

void FUN_108cb604c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb6058; end: 108cb609f; +[SCPreviewContainerViewTapGestureInteractionEvent createWithGestureRecognizer:] */

void FUN_108cb6058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c017a00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cb60a0; end: 108cb6113; -[SCPreviewContainerViewTapGestureInteractionEvent initWithGestureRecognizer:] */

undefined1 * FUN_108cb60a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe268;
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



/* Entry: 108cb6114; end: 108cb61bf; -[SCPreviewContainerViewTapGestureInteractionEvent processEventForResponder:] */

ulong FUN_108cb6114(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x000107c318f8(param_3,PTR_DAT_1126a5b08);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_didTapPreviewContainerView__1125bce08);
  if ((uVar2 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    func_0x00010bfc1a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf7d180(uVar1);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108cb61c0; end: 108cb61c7; -[SCPreviewContainerViewTapGestureInteractionEvent gestureRecognizer] */

undefined8 FUN_108cb61c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb61c8; end: 108cb61d3; -[SCPreviewContainerViewTapGestureInteractionEvent .cxx_destruct] */

void FUN_108cb61c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb61d4; end: 108cb622b; +[SCPreviewContainerViewTapProcessedGestureInteractionEvent createWithGestureRecognizer:result:] */

void FUN_108cb61d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c017a20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cb622c; end: 108cb62af; -[SCPreviewContainerViewTapProcessedGestureInteractionEvent initWithGestureRecognizer:result:] */

undefined1 *
FUN_108cb622c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fe270;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cb62b0; end: 108cb6333; -[SCPreviewContainerViewTapProcessedGestureInteractionEvent processEventForResponder:] */

undefined8 FUN_108cb62b0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x000107c318f8(param_3,PTR_DAT_1126a5b08);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_didProcessTapInPreviewContainerV_1125bbcd0);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf78ca0(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return 1;
}



/* Entry: 108cb6334; end: 108cb633b; -[SCPreviewContainerViewTapProcessedGestureInteractionEvent gestureRecognizer] */

undefined8 FUN_108cb6334(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb633c; end: 108cb6343; -[SCPreviewContainerViewTapProcessedGestureInteractionEvent result] */

undefined8 FUN_108cb633c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cb6344; end: 108cb634f; -[SCPreviewContainerViewTapProcessedGestureInteractionEvent .cxx_destruct] */

void FUN_108cb6344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb6350; end: 108cb656f; -[SCPreviewGestureHandler initWithPreviewView:configuration:delegate:] */

undefined8 *
FUN_108cb6350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fe278;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 5,param_5);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(puVar1[3]);
    uVar3 = param_3;
    func_0x00010bf4b2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    uVar3 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar3);
    func_0x00010c083340(param_4);
    func_0x00010c272940(puVar1);
    func_0x00010c1c8340(0x3fc999999999999a,puVar1[4]);
    func_0x00010c18b5e0(puVar1[4]);
    uVar3 = param_3;
    func_0x00010bf4b2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(uVar3);
    _objc_initWeak(auStack_58,puVar1);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010befa300(param_4);
    func_0x00010c1374a0(puVar1[3]);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108cb6570; end: 108cb65d3;  */

void FUN_108cb6570(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c083340(param_2);
  _objc_release(param_2);
  func_0x00010c272940(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cb65d4; end: 108cb65ff; -[SCPreviewGestureHandler toggleGestureOptions:enabled:] */

void FUN_108cb65d4(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  if (param_4 == 0) {
    if ((uVar1 & param_3) != 0) {
      return;
    }
    uVar1 = uVar1 | param_3;
  }
  else {
    if ((uVar1 & param_3) == 0) {
      return;
    }
    uVar1 = uVar1 & (param_3 ^ 0xffffffffffffffff);
  }
  *(ulong *)(param_1 + 0x30) = uVar1;
  return;
}



/* Entry: 108cb6600; end: 108cb674f; -[SCPreviewGestureHandler _handleTapGesture:] */

void FUN_108cb6600(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    uVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    puVar2 = PTR_PTR_1126d4d98;
    func_0x00010bf5a300(PTR_PTR_1126d4d98,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c111220(uVar1,param_2,param_1,puVar2,1);
    _objc_release(puVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      lVar4 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar4);
      puVar2 = PTR_PTR_1126db9d0;
      func_0x00010bf5a300(PTR_PTR_1126db9d0,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c1111e0(lVar4,param_2,param_1,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar4);
      lVar4 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar4);
      puVar2 = PTR_PTR_1126db9d8;
      func_0x00010bf5a320(PTR_PTR_1126db9d8,param_2,param_3,lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1111e0(lVar4,param_2,param_1,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar4);
    }
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c111200();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb6750; end: 108cb689f; -[SCPreviewGestureHandler _handleLongPressGesture:] */

void FUN_108cb6750(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x30) >> 1 & 1) == 0) {
    uVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    puVar2 = PTR_PTR_1126d4d98;
    func_0x00010bf5a300(PTR_PTR_1126d4d98,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c111220(uVar1,param_2,param_1,puVar2,2);
    _objc_release(puVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      lVar4 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar4);
      puVar2 = PTR_PTR_1126db9e0;
      func_0x00010bf5a300(PTR_PTR_1126db9e0,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c1111e0(lVar4,param_2,param_1,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar4);
      lVar4 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar4);
      puVar2 = PTR_PTR_1126db9e8;
      func_0x00010bf5a320(PTR_PTR_1126db9e8,param_2,param_3,lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1111e0(lVar4,param_2,param_1,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar4);
    }
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c111200();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb68a0; end: 108cb6907; -[SCPreviewGestureHandler gestureRecognizerShouldBegin:] */

undefined8 FUN_108cb68a0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (((param_3 == *(long *)(param_1 + 0x20)) && ((*(byte *)(param_1 + 0x30) >> 1 & 1) != 0)) ||
     ((param_3 == *(long *)(param_1 + 0x18) && ((*(byte *)(param_1 + 0x30) & 1) != 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 108cb6908; end: 108cb690f; -[SCPreviewGestureHandler tapGestureRecognizer] */

undefined8 FUN_108cb6908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cb6910; end: 108cb6917; -[SCPreviewGestureHandler longPressGestureRecognizer] */

undefined8 FUN_108cb6910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cb6918; end: 108cb692f; -[SCPreviewGestureHandler delegate] */

void FUN_108cb6918(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb6930; end: 108cb6937; -[SCPreviewGestureHandler disabledOptions] */

undefined8 FUN_108cb6930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108cb6938; end: 108cb693f; -[SCPreviewGestureHandler setDisabledOptions:] */

void FUN_108cb6938(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108cb6940; end: 108cb697f; -[SCPreviewGestureHandler .cxx_destruct] */

void FUN_108cb6940(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108cb6980; end: 108cb6a1b; -[SCPreviewLensCommandMetadataProvider initWithConfiguration:spectaclesRenderingMetadataProvider:] */

undefined1 *
FUN_108cb6980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe280;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cb6a1c; end: 108cb6a8b; -[SCPreviewLensCommandMetadataProvider initWithConfiguration:spectaclesRenderingMetadataProvider:futureGenericAssetMetadataProvider:] */

long FUN_108cb6a1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  func_0x00010c001e80(param_1,param_2,param_3,param_4);
  if (param_1 != 0) {
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_5;
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  return param_1;
}



/* Entry: 108cb6a8c; end: 108cb6b47; -[SCPreviewLensCommandMetadataProvider initWithConfiguration:spectaclesRenderingMetadataProvider:genericAssetMetadataProvider:] */

long FUN_108cb6a8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_5);
  func_0x00010c001e80();
  if (param_1 != 0) {
    puVar1 = auStack_38;
    _objc_loadWeakRetained(puVar1);
    _objc_storeWeak(param_1 + 0x10,puVar1);
    _objc_release(puVar1);
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108cb6b48; end: 108cb6c0f; -[SCPreviewLensCommandMetadataProvider lensCommandMetadata] */

void FUN_108cb6b48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c14bae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0950a0(lVar4,param_2,lVar3,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) goto LAB_108cb6bf8;
  }
  func_0x00010be1c620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0918c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
LAB_108cb6bf8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108cb6c10; end: 108cb6c7f; -[SCPreviewLensCommandMetadataProvider _genericAssetMetadataProvider] */

void FUN_108cb6c10(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if ((lVar1 == 0) && (lVar1 = *(long *)(param_1 + 0x18), lVar1 != 0)) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_1 + 0x10,lVar1);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar2);
  }
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb6c80; end: 108cb6cbf; -[SCPreviewLensCommandMetadataProvider .cxx_destruct] */

void FUN_108cb6c80(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb6cc0; end: 108cb6d2b; -[SCPreviewCaptionLatencyGrapheneLogger init] */

undefined1 * FUN_108cb6cc0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe288;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108cb6d2c; end: 108cb6daf; -[SCPreviewCaptionLatencyGrapheneLogger startTTIMeasurementForCaptionAction:] */

void FUN_108cb6d2c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 != 0) {
    return;
  }
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,puVar1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108cb6db0; end: 108cb6dbb; -[SCPreviewCaptionLatencyGrapheneLogger endTTIMeasurementForCaptionStyle:action:] */

void FUN_108cb6db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be09e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endTTIMeasurementForCaptionStyl_112560140);
  return;
}



/* Entry: 108cb6dbc; end: 108cb6ef7; -[SCPreviewCaptionLatencyGrapheneLogger _endTTIMeasurementForCaptionStyle:withAction:] */

void FUN_108cb6dbc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar4 = *(undefined8 *)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar5 = param_1;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar4);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c3cc8;
  func_0x00010bf307c0(PTR_PTR_1126c3cc8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdce440(param_2,param_3,puVar1,param_5,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c242680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1 - dVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108cb6ef8; end: 108cb6feb; -[SCPreviewCaptionLatencyGrapheneLogger _applyMetricDimensionsToMetric:forAction:forCaptionStyle:] */

void FUN_108cb6ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c113040();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(param_5);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if ((int)uVar3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  uVar2 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110ef1098,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  if (param_4 == 0) {
    func_0x00010c2ac460(uVar2,param_2,&PTR____CFConstantStringClassReference_110daf5b8,
                        &PTR____CFConstantStringClassReference_110ef10b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108cb6fec; end: 108cb6ff7; -[SCPreviewCaptionLatencyGrapheneLogger .cxx_destruct] */

void FUN_108cb6fec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb6ff8; end: 108cb7073; +[SCPreviewViewControllerDismissalHacker dismissPreviewViewController:] */

void FUN_108cb6ff8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c10f940(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_3;
  func_0x00010c27acc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010bf842a0(param_1,param_2,param_3,lVar2 != 0 && lVar1 == 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb7074; end: 108cb7083; +[SCPreviewViewControllerDismissalHacker dismissPreviewViewController:animated:] */

void FUN_108cb7074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf842d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126cb718,PTR_s_dismissPreviewViewController_ani_1125bea58,param_3,param_4,0);
  return;
}



/* Entry: 108cb7084; end: 108cb72c3; +[SCPreviewViewControllerDismissalHacker dismissPreviewViewController:animated:completion:] */

void FUN_108cb7084(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c0d7380(param_2,param_3,param_4);
  if ((int)param_2 == 0) {
    uVar5 = param_4;
    func_0x00010c10fd00(param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_108cb7304;
    puStack_90 = &UNK_110849530;
    uStack_88 = param_6;
    _objc_retain(param_6);
    func_0x00010bf84b00(uVar5,param_3,param_5,&puStack_a8);
    _objc_release(uVar5);
    uVar5 = uStack_88;
  }
  else {
    func_0x00010c24ef00(param_4);
    uVar5 = param_4;
    func_0x00010c29d0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x000107c30a2c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010c245f60(uVar1,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb68e0();
    func_0x00010bd86364();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIViewController_1126af898;
    _objc_alloc(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x00010c02f980();
    func_0x00010c1ee700(uVar2,param_3,puVar3);
    _objc_release(puVar3);
    func_0x00010c2a72a0(uVar1);
    func_0x00010c225b00(param_1 + 1.0,uVar2);
    func_0x00010befbb60(uVar2,param_3,uVar5);
    func_0x00010c1a7f60(uVar2,param_3,0);
    uVar4 = param_4;
    func_0x00010c10fd00(param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_108cb72c4;
    puStack_68 = &UNK_11084aaa8;
    uStack_60 = uVar2;
    uStack_58 = param_6;
    _objc_retain(param_6);
    _objc_retain(uVar2);
    func_0x00010bf84b00(uVar4,param_3,param_5,&puStack_80);
    _objc_release(uVar4);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(param_6);
    _objc_release(uVar2);
    param_6 = uVar1;
  }
  _objc_release(uVar5);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 108cb72c4; end: 108cb7303;  */

void FUN_108cb72c4(long param_1,undefined8 param_2)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x20),param_2,1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108cb72f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108cb7304; end: 108cb7317;  */

void FUN_108cb7304(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108cb7310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108cb7318; end: 108cb7393; +[SCPreviewViewControllerDismissalHacker needsHackingForPreviewViewController:] */

bool FUN_108cb7318(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010c10f940(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108cb7394; end: 108cb73cf; +[SCFilterView idSpecificFilterNameWithFilterName:filterId:] */

void FUN_108cb7394(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc5ed8);
  return;
}



/* Entry: 108cb73d0; end: 108cb7473; +[SCFilterView geofilterIdFromName:] */

void FUN_108cb73d0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110f273f8;
  func_0x00010c08fa60();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db3638;
  func_0x00010c08fa60();
  uVar2 = param_3;
  func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f273f8);
  if ((int)uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c08fa60();
    if ((ulong)((long)ppuVar3 + (long)ppuVar1) < uVar2) {
      uVar2 = param_3;
      func_0x00010c260c00(param_3,param_2,(long)ppuVar3 + (long)ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108cb7458;
    }
  }
  uVar2 = 0;
LAB_108cb7458:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108cb7474; end: 108cb747b; -[SCPreviewBlob mediaType] */

undefined8 FUN_108cb7474(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cb747c; end: 108cb7483; -[SCPreviewBlob setMediaType:] */

void FUN_108cb747c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108cb7484; end: 108cb748b; -[SCPreviewBlob mediaOrientation] */

undefined8 FUN_108cb7484(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cb748c; end: 108cb7493; -[SCPreviewBlob setMediaOrientation:] */

void FUN_108cb748c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108cb7494; end: 108cb749b; -[SCPreviewBlob renderedOverlays] */

undefined8 FUN_108cb7494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cb749c; end: 108cb74a3; -[SCPreviewBlob setRenderedOverlays:] */

void FUN_108cb749c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cb74a4; end: 108cb74ab; -[SCPreviewBlob mediaOverlays] */

undefined8 FUN_108cb74a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cb74ac; end: 108cb74b3; -[SCPreviewBlob setMediaOverlays:] */

void FUN_108cb74ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cb74b4; end: 108cb74bb; -[SCPreviewBlob infiniteDuration] */

undefined1 FUN_108cb74b4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108cb74bc; end: 108cb74c3; -[SCPreviewBlob setInfiniteDuration:] */

void FUN_108cb74bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108cb74c4; end: 108cb74cb; -[SCPreviewBlob mediaAspectRatioForDisplay] */

undefined8 FUN_108cb74c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108cb74cc; end: 108cb74d3; -[SCPreviewBlob setMediaAspectRatioForDisplay:] */

void FUN_108cb74cc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 108cb74d4; end: 108cb74db; -[SCPreviewBlob videoProvider] */

undefined8 FUN_108cb74d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108cb74dc; end: 108cb750b; -[SCPreviewBlob setVideoProvider:] */

void FUN_108cb74dc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108cb750c; end: 108cb7513; -[SCPreviewBlob originalVideoProvider] */

undefined8 FUN_108cb750c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108cb7514; end: 108cb7543; -[SCPreviewBlob setOriginalVideoProvider:] */

void FUN_108cb7514(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb7544; end: 108cb754b; -[SCPreviewBlob audioEnabled] */

undefined1 FUN_108cb7544(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108cb754c; end: 108cb7553; -[SCPreviewBlob setAudioEnabled:] */

void FUN_108cb754c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 108cb7554; end: 108cb755b; -[SCPreviewBlob timeRange] */

undefined8 FUN_108cb7554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108cb755c; end: 108cb758b; -[SCPreviewBlob setTimeRange:] */

void FUN_108cb755c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb758c; end: 108cb7593; -[SCPreviewBlob bounceState] */

undefined8 FUN_108cb758c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108cb7594; end: 108cb759b; -[SCPreviewBlob setBounceState:] */

void FUN_108cb7594(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cb759c; end: 108cb75a3; -[SCPreviewBlob musicSelection] */

undefined8 FUN_108cb759c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108cb75a4; end: 108cb75d3; -[SCPreviewBlob setMusicSelection:] */

void FUN_108cb75a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb75d4; end: 108cb75db; -[SCPreviewBlob baseMediaMusicSelection] */

undefined8 FUN_108cb75d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108cb75dc; end: 108cb760b; -[SCPreviewBlob setBaseMediaMusicSelection:] */

void FUN_108cb75dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb760c; end: 108cb7613; -[SCPreviewBlob image] */

undefined8 FUN_108cb760c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108cb7614; end: 108cb7643; -[SCPreviewBlob setImage:] */

void FUN_108cb7614(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108cb7644; end: 108cb764b; -[SCPreviewBlob mediaDuration] */

undefined8 FUN_108cb7644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}


