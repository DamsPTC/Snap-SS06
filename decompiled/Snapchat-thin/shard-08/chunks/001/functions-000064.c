/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105cd7c08; end: 105cd7c0f; -[SCMemoriesDreamsTabController galleryItemIdToSnapsMap] */

undefined8 FUN_105cd7c08(void)

{
  return 0;
}



/* Entry: 105cd7c10; end: 105cd7c17; -[SCMemoriesDreamsTabController galleryItemIdToPHAssetsMap] */

undefined8 FUN_105cd7c10(void)

{
  return 0;
}



/* Entry: 105cd7c18; end: 105cd7c1f; -[SCMemoriesDreamsTabController itemIdsToExclude] */

undefined8 FUN_105cd7c18(void)

{
  return 0;
}



/* Entry: 105cd7c20; end: 105cd7c27; -[SCMemoriesDreamsTabController prefersAllItemsAreNotIterated] */

undefined8 FUN_105cd7c20(void)

{
  return 0;
}



/* Entry: 105cd7c28; end: 105cd7c67; -[SCMemoriesDreamsTabController allItemsCount] */

undefined8 FUN_105cd7c28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0d4660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105cd7c68; end: 105cd7c73; -[SCMemoriesDreamsTabController itemsInRect:] */

undefined * FUN_105cd7c68(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 105cd7c74; end: 105cd7c7b; -[SCMemoriesDreamsTabController indexPathForId:itemLevelIdentifier:] */

undefined8 FUN_105cd7c74(void)

{
  return 0;
}



/* Entry: 105cd7c7c; end: 105cd7c7f; -[SCMemoriesDreamsTabController setScrollContentOffset:animated:completion:] */

void FUN_105cd7c7c(void)

{
  return;
}



/* Entry: 105cd7c80; end: 105cd7c83; -[SCMemoriesDreamsTabController scrollToTop] */

void FUN_105cd7c80(void)

{
  return;
}



/* Entry: 105cd7c84; end: 105cd7c8b; -[SCMemoriesDreamsTabController contentHeight] */

undefined8 FUN_105cd7c84(void)

{
  return 0;
}



/* Entry: 105cd7c8c; end: 105cd7c93; -[SCMemoriesDreamsTabController scrollContentDistanceToTop] */

undefined8 FUN_105cd7c8c(void)

{
  return 0;
}



/* Entry: 105cd7c94; end: 105cd7c97; -[SCMemoriesDreamsTabController changeSelected:forGalleryItem:] */

void FUN_105cd7c94(void)

{
  return;
}



/* Entry: 105cd7c98; end: 105cd7ceb; -[SCMemoriesDreamsTabController shouldShowBadge] */

undefined8 FUN_105cd7c98(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010be3f6c0();
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c233380();
    _objc_release(uVar3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 105cd7cec; end: 105cd7d3b; -[SCMemoriesDreamsTabController _isCurrentlyDisplayed] */

bool FUN_105cd7cec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf86be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  return lVar2 == param_1;
}



/* Entry: 105cd7d3c; end: 105cd7d4b; -[SCMemoriesDreamsTabController selectedGalleryItems] */

void FUN_105cd7d3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c159750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_selectedGalleryItems__112633ff0,
             *(undefined8 *)(param_1 + 0x70));
  return;
}



/* Entry: 105cd7d4c; end: 105cd7d53; -[SCMemoriesDreamsTabController selectedItemCount] */

void FUN_105cd7d4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x70),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105cd7d54; end: 105cd7dd3; -[SCMemoriesDreamsTabController setSelectMode:] */

void FUN_105cd7d54(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x95) = param_3;
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  if ((*(byte *)(param_1 + 0x95) & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = PTR____NSArray0__struct_11034ab48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105cd7dd4; end: 105cd7e2f; -[SCMemoriesDreamsTabController updateSelectMode:] */

void FUN_105cd7dd4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105cd7e30;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 105cd7e30; end: 105cd7e73;  */

void FUN_105cd7e30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cd7e74; end: 105cd7f7f; -[SCMemoriesDreamsTabController updateSelectedDreams:] */

void FUN_105cd7e74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be23900();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar2;
  _objc_release(uVar4);
  lVar2 = param_1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105cd7f80;
  puStack_60 = &UNK_110848ba8;
  _objc_retain(lVar1);
  lStack_58 = lVar1;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  lVar3 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  if (lVar3 == 0) {
    func_0x00010c289a20(param_1);
  }
  _objc_release(lStack_58);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105cd7f80; end: 105cd8013;  */

void FUN_105cd7f80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf6b020(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2677e0();
    _objc_release(uVar2);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf6b020(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2677e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105cd8014; end: 105cd8017; -[SCMemoriesDreamsTabController scrollToGalleryItem:animated:] */

void FUN_105cd8014(void)

{
  return;
}



/* Entry: 105cd8018; end: 105cd801f; -[SCMemoriesDreamsTabController scrollBarTopOffset] */

undefined8 FUN_105cd8018(void)

{
  return 0;
}



/* Entry: 105cd8020; end: 105cd8027; -[SCMemoriesDreamsTabController isDragging] */

undefined8 FUN_105cd8020(void)

{
  return 0;
}



/* Entry: 105cd8028; end: 105cd802f; -[SCMemoriesDreamsTabController isTracking] */

undefined8 FUN_105cd8028(void)

{
  return 0;
}



/* Entry: 105cd8030; end: 105cd8037; -[SCMemoriesDreamsTabController isEditing] */

undefined8 FUN_105cd8030(void)

{
  return 0;
}



/* Entry: 105cd8038; end: 105cd803b; -[SCMemoriesDreamsTabController endEditing] */

void FUN_105cd8038(void)

{
  return;
}



/* Entry: 105cd803c; end: 105cd8043; -[SCMemoriesDreamsTabController isInLineSearchable] */

undefined8 FUN_105cd803c(void)

{
  return 0;
}



/* Entry: 105cd8044; end: 105cd804b; -[SCMemoriesDreamsTabController shouldAlignInitialScrollContentDistanceToTopOfOtherTabControllerToThisTabController] */

undefined8 FUN_105cd8044(void)

{
  return 1;
}



/* Entry: 105cd804c; end: 105cd8053; -[SCMemoriesDreamsTabController shouldAlignInitialScrollContentDistanceToTopOfThisTabControllerToOtherTabController] */

undefined8 FUN_105cd804c(void)

{
  return 1;
}



/* Entry: 105cd8054; end: 105cd8057; -[SCMemoriesDreamsTabController deeplinkToOperaWithDestinationInfo:] */

void FUN_105cd8054(void)

{
  return;
}



/* Entry: 105cd8058; end: 105cd811f; -[SCMemoriesDreamsTabController setFocused:] */

void FUN_105cd8058(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(byte *)(param_1 + 0x93) != param_3) {
    *(char *)(param_1 + 0x93) = (char)param_3;
    lVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf86be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c267c60();
    if ((bool)*(char *)(param_1 + 0x38) != (lVar1 == 0xe)) {
      *(bool *)(param_1 + 0x38) = lVar1 == 0xe;
      if (lVar1 == 0xe) {
        func_0x00010bec1800(param_1);
      }
      else {
        func_0x00010be09d20(param_1);
      }
    }
    _objc_release(lVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1608e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105cd8120; end: 105cd8123; -[SCMemoriesDreamsTabController galleryViewWillAppear] */

void FUN_105cd8120(void)

{
  return;
}



/* Entry: 105cd8124; end: 105cd8127; -[SCMemoriesDreamsTabController galleryViewDidAppear] */

void FUN_105cd8124(void)

{
  return;
}



/* Entry: 105cd8128; end: 105cd814b; -[SCMemoriesDreamsTabController galleryViewDidDisappear] */

void FUN_105cd8128(long param_1)

{
  func_0x00010be09d20();
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 105cd814c; end: 105cd814f; -[SCMemoriesDreamsTabController changeSelected:forGallerySnapItem:] */

void FUN_105cd814c(void)

{
  return;
}



/* Entry: 105cd8150; end: 105cd8153; -[SCMemoriesDreamsTabController didTriggerCreateMashupForStory:] */

void FUN_105cd8150(void)

{
  return;
}



/* Entry: 105cd8154; end: 105cd8157; -[SCMemoriesDreamsTabController didTriggerRefetchLatestFeaturedStories] */

void FUN_105cd8154(void)

{
  return;
}



/* Entry: 105cd8158; end: 105cd815f; -[SCMemoriesDreamsTabController pageViewName] */

undefined8 FUN_105cd8158(void)

{
  return 0x56;
}



/* Entry: 105cd8160; end: 105cd8163; -[SCMemoriesDreamsTabController generativeAIOnboardingScopeWillCompleteWithCancelled:] */

void FUN_105cd8160(void)

{
  return;
}



/* Entry: 105cd8164; end: 105cd81ab; -[SCMemoriesDreamsTabController generativeAIOnboardingScopeDidCompleteWithCancelled:genAIIdentity:] */

void FUN_105cd8164(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105cd81ac; end: 105cd81b3; -[SCMemoriesDreamsTabController generativeAIOnboardingScopeGetSettingsExposer] */

undefined8 FUN_105cd81ac(void)

{
  return 0;
}



/* Entry: 105cd81b4; end: 105cd81bf; -[SCMemoriesDreamsTabController scrollContentInset] */

undefined8 FUN_105cd81b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 105cd81c0; end: 105cd81cb; -[SCMemoriesDreamsTabController setScrollContentInset:] */

void FUN_105cd81c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0xc0) = param_1;
  *(undefined8 *)(param_5 + 200) = param_2;
  *(undefined8 *)(param_5 + 0xd0) = param_3;
  *(undefined8 *)(param_5 + 0xd8) = param_4;
  return;
}



/* Entry: 105cd81cc; end: 105cd81d3; -[SCMemoriesDreamsTabController scrollContentOffset] */

undefined8 FUN_105cd81cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 105cd81d4; end: 105cd81db; -[SCMemoriesDreamsTabController setScrollContentOffset:] */

void FUN_105cd81d4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x98) = param_1;
  return;
}



/* Entry: 105cd81dc; end: 105cd81e3; -[SCMemoriesDreamsTabController visible] */

undefined1 FUN_105cd81dc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x92);
}



/* Entry: 105cd81e4; end: 105cd81eb; -[SCMemoriesDreamsTabController setVisible:] */

void FUN_105cd81e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x92) = param_3;
  return;
}



/* Entry: 105cd81ec; end: 105cd81f3; -[SCMemoriesDreamsTabController focused] */

undefined1 FUN_105cd81ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x93);
}



/* Entry: 105cd81f4; end: 105cd81fb; -[SCMemoriesDreamsTabController loading] */

undefined1 FUN_105cd81f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x94);
}



/* Entry: 105cd81fc; end: 105cd8203; -[SCMemoriesDreamsTabController setLoading:] */

void FUN_105cd81fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x94) = param_3;
  return;
}



/* Entry: 105cd8204; end: 105cd820b; -[SCMemoriesDreamsTabController selectMode] */

undefined1 FUN_105cd8204(long param_1)

{
  return *(undefined1 *)(param_1 + 0x95);
}



/* Entry: 105cd820c; end: 105cd8223; -[SCMemoriesDreamsTabController delegate] */

void FUN_105cd820c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cd8224; end: 105cd822f; -[SCMemoriesDreamsTabController setDelegate:] */

void FUN_105cd8224(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 105cd8230; end: 105cd825f; -[SCMemoriesDreamsTabController setView:] */

void FUN_105cd8230(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cd8260; end: 105cd8347; -[SCMemoriesDreamsTabController .cxx_destruct] */

void FUN_105cd8260(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_destroyWeak(param_1 + 0xa8);
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
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cd8348; end: 105cd841f; -[SCSpectaclesPairingScope initWithUIContainer:deviceProductType:pairingDeviceInfo:scopeDelegate:pairingSource:] */

undefined1 *
FUN_105cd8348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ecc90;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_6);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cd8420; end: 105cd8427; -[SCSpectaclesPairingScope uiContainer] */

undefined8 FUN_105cd8420(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105cd8428; end: 105cd842f; -[SCSpectaclesPairingScope pairingSource] */

undefined8 FUN_105cd8428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105cd8430; end: 105cd8437; -[SCSpectaclesPairingScope deviceProductType] */

undefined8 FUN_105cd8430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105cd8438; end: 105cd843f; -[SCSpectaclesPairingScope pairingDeviceInfo] */

undefined8 FUN_105cd8438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105cd8440; end: 105cd8457; -[SCSpectaclesPairingScope scopeDelegate] */

void FUN_105cd8440(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cd8458; end: 105cd848f; -[SCSpectaclesPairingScope .cxx_destruct] */

void FUN_105cd8458(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cd8490; end: 105cd8533; -[SCSpectaclesSettingsScope initWithUiContainer:productType:scopeDelegate:] */

undefined1 *
FUN_105cd8490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ecc98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cd8534; end: 105cd853b; -[SCSpectaclesSettingsScope uiContainer] */

undefined8 FUN_105cd8534(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105cd853c; end: 105cd8543; -[SCSpectaclesSettingsScope productType] */

undefined8 FUN_105cd853c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105cd8544; end: 105cd855b; -[SCSpectaclesSettingsScope scopeDelegate] */

void FUN_105cd8544(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cd855c; end: 105cd8587; -[SCSpectaclesSettingsScope .cxx_destruct] */

void FUN_105cd855c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cd8588; end: 105cd85fb; -[SCGenAIDreamsAnimationsServices initWithAnimationsFactory:] */

undefined1 * FUN_105cd8588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ecca0;
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



/* Entry: 105cd85fc; end: 105cd8603; -[SCGenAIDreamsAnimationsServices animationsFactory] */

undefined8 FUN_105cd85fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105cd8604; end: 105cd860f; -[SCGenAIDreamsAnimationsServices .cxx_destruct] */

void FUN_105cd8604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cd8610; end: 105cd871b; -[SCGenAIDreamsUnpackingAnimationConfig initWithAnimationUrlPath:packImageUrlPath:packTitle:packWrapColor:] */

undefined1 *
FUN_105cd8610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ecca8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cd871c; end: 105cd881b; -[SCGenAIDreamsUnpackingAnimationConfig initWithCoder:] */

undefined1 * FUN_105cd871c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ecca8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cd881c; end: 105cd883f; -[SCGenAIDreamsUnpackingAnimationConfig copyWithZone:] */

undefined8 FUN_105cd881c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105cd8840; end: 105cd88c7; -[SCGenAIDreamsUnpackingAnimationConfig encodeWithCoder:] */

void FUN_105cd8840(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e27e18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e27e38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e27e58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e27e78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cd88c8; end: 105cd8953; -[SCGenAIDreamsUnpackingAnimationConfig hash] */

undefined8 * FUN_105cd88c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105cd8a04:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105cd8a10;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_105cd8a10;
            }
            goto LAB_105cd8a04;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105cd8a10:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105cd8954; end: 105cd8a2b; -[SCGenAIDreamsUnpackingAnimationConfig isEqual:] */

long FUN_105cd8954(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105cd8a04:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105cd8a10;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_105cd8a10;
            }
            goto LAB_105cd8a04;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105cd8a10:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105cd8a2c; end: 105cd8a33; -[SCGenAIDreamsUnpackingAnimationConfig animationUrlPath] */

undefined8 FUN_105cd8a2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105cd8a34; end: 105cd8a3b; -[SCGenAIDreamsUnpackingAnimationConfig packImageUrlPath] */

undefined8 FUN_105cd8a34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105cd8a3c; end: 105cd8a43; -[SCGenAIDreamsUnpackingAnimationConfig packTitle] */

undefined8 FUN_105cd8a3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105cd8a44; end: 105cd8a4b; -[SCGenAIDreamsUnpackingAnimationConfig packWrapColor] */

undefined8 FUN_105cd8a44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105cd8a4c; end: 105cd8a93; -[SCGenAIDreamsUnpackingAnimationConfig .cxx_destruct] */

void FUN_105cd8a4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cd8a94; end: 105cd8b07; -[SCDreamsSendServices initWithMemoriesSendingService:] */

undefined1 * FUN_105cd8a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eccb0;
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



/* Entry: 105cd8b08; end: 105cd8b0f; -[SCDreamsSendServices memoriesSendingService] */

undefined8 FUN_105cd8b08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105cd8b10; end: 105cd8b1b; -[SCDreamsSendServices .cxx_destruct] */

void FUN_105cd8b10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cd8b1c; end: 105cd8b27; +[SCDreamsTab componentPath] */

undefined ** FUN_105cd8b1c(void)

{
  return &PTR____CFConstantStringClassReference_110e27e98;
}



/* Entry: 105cd8b28; end: 105cd8b5b; -[SCDreamsTab initWithViewModel:componentContext:runtime:] */

void FUN_105cd8b28(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eccb8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105cd8b5c; end: 105cd8bab; -[SCDreamsTab setViewModel:] */

void FUN_105cd8b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cd8bac; end: 105cd8bef; -[SCDreamsTab viewModel] */

void FUN_105cd8bac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cd8bf0; end: 105cd8c13; +[SCCIFriendPickerSelection valdiMarshallableObjectDescriptor] */

void FUN_105cd8bf0(undefined8 *param_1)

{
  *param_1 = &PTR_s_match_1108e4870;
  param_1[1] = &PTR_DAT_1108e48a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105cd8c14; end: 105cd8c1f; +[SCCFriendPickerComponent componentPath] */

undefined ** FUN_105cd8c14(void)

{
  return &PTR____CFConstantStringClassReference_110e27eb8;
}



/* Entry: 105cd8c20; end: 105cd8c53; -[SCCFriendPickerComponent initWithViewModel:componentContext:runtime:] */

void FUN_105cd8c20(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eccc0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105cd8c54; end: 105cd8ca3; -[SCCFriendPickerComponent setViewModel:] */

void FUN_105cd8c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cd8ca4; end: 105cd8ce7; -[SCCFriendPickerComponent viewModel] */

void FUN_105cd8ca4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cd8ce8; end: 105cd8f47; -[SCSpectaclesAuxiliaryContentPreloader initWithProfile:cloudSync:cloudFS:metadataHandler:availabilityHandler:encryptedContentManager:dataObjectContext:networkConnectivityMonitor:] */

undefined8 *
FUN_105cd8ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126eccc8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar1[10] = 0;
    puVar3 = PTR_PTR_1126b33c0;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 105cd8f48; end: 105cd903f; -[SCSpectaclesAuxiliaryContentPreloader _notifierWithSyncedStatusNotifier:] */

void FUN_105cd8f48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126c3c30;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0dcd80(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126c3c38;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_48 = param_3;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a00(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126c3c40;
    func_0x00010c14fbe0(0x3ff0000000000000,PTR_PTR_1126c3c40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be644e0(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105cd9040; end: 105cd909b; -[SCSpectaclesAuxiliaryContentPreloader defaultImmediateNotifier] */

void FUN_105cd9040(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3c40;
  func_0x00010c14fbe0(0x3ff0000000000000,PTR_PTR_1126c3c40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be644e0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105cd909c; end: 105cd90fb; -[SCSpectaclesAuxiliaryContentPreloader defaultLongRunningNotifier] */

void FUN_105cd909c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3c40;
  func_0x00010c14fbe0(0x4072c00000000000,PTR_PTR_1126c3c40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be644e0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105cd90fc; end: 105cd9103; -[SCSpectaclesAuxiliaryContentPreloader dedicatedQueue] */

void FUN_105cd90fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_queue_1126251a0);
  return;
}



/* Entry: 105cd9104; end: 105cd9173; -[SCSpectaclesAuxiliaryContentPreloader runWithServiceTerm:] */

void FUN_105cd9104(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 == 2) {
    func_0x00010be061a0(param_1,param_2,param_3);
  }
  else if (lVar1 == 1) {
    func_0x00010be80e80(param_1,param_2,param_3);
  }
  else if (lVar1 == 0) {
    func_0x00010be0f3a0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


