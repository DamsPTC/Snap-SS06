/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e1ef44; end: 106e1ef67; -[SCMemoriesOperaPlaybackItem copyWithZone:] */

undefined8 FUN_106e1ef44(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e1ef68; end: 106e1effb; -[SCMemoriesOperaPlaybackItem hash] */

undefined8 * FUN_106e1ef68(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  long lStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = (ulong)*(byte *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106e1f0cc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e1f0d8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(char *)((long)puVar3 + 8) == param_3[8])) &&
         (*(char *)((long)puVar3 + 9) == param_3[9])))) &&
       ((*(char *)((long)puVar3 + 10) == param_3[10] &&
        (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
        if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_106e1f0d8;
        }
        goto LAB_106e1f0cc;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106e1f0d8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106e1effc; end: 106e1f0f3; -[SCMemoriesOperaPlaybackItem isEqual:] */

long FUN_106e1effc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e1f0cc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e1f0d8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) &&
       ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if (lVar3 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_106e1f0d8;
        }
        goto LAB_106e1f0cc;
      }
    }
    lVar3 = 0;
  }
LAB_106e1f0d8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e1f0f4; end: 106e1f0fb; -[SCMemoriesOperaPlaybackItem itemId] */

undefined8 FUN_106e1f0f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e1f0fc; end: 106e1f103; -[SCMemoriesOperaPlaybackItem entryType] */

undefined8 FUN_106e1f0fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e1f104; end: 106e1f10b; -[SCMemoriesOperaPlaybackItem isFavorited] */

undefined1 FUN_106e1f104(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e1f10c; end: 106e1f113; -[SCMemoriesOperaPlaybackItem isPersisted] */

undefined1 FUN_106e1f10c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106e1f114; end: 106e1f11b; -[SCMemoriesOperaPlaybackItem isPrivate] */

undefined1 FUN_106e1f114(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106e1f11c; end: 106e1f123; -[SCMemoriesOperaPlaybackItem operaFeatureType] */

undefined8 FUN_106e1f11c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e1f124; end: 106e1f12b; -[SCMemoriesOperaPlaybackItem snapFeedItemLevelPriorityAndStoryId] */

undefined8 FUN_106e1f124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e1f12c; end: 106e1f15b; -[SCMemoriesOperaPlaybackItem .cxx_destruct] */

void FUN_106e1f12c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e1f15c; end: 106e1f1c7; +[SCMemoriesOperaItem cameraRollWithCameraRoll:] */

void FUN_106e1f15c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cdc28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e1f1c8; end: 106e1f22b; +[SCMemoriesOperaItem snapWithOperaItemInfo:] */

void FUN_106e1f1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cdc28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e1f22c; end: 106e1f297; +[SCMemoriesOperaItem timelineSnapWithOperaItemInfos:] */

void FUN_106e1f22c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cdc28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e1f298; end: 106e1f2db; -[SCMemoriesOperaItem internalInit] */

void FUN_106e1f298(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f7060;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e1f2dc; end: 106e1f387; -[SCMemoriesOperaItem matchSnap:cameraRoll:timelineSnap:] */

void FUN_106e1f2dc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_106e1f364;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 1) {
    if (param_4 == 0) goto LAB_106e1f364;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_106e1f364;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_106e1f364:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e1f388; end: 106e1f3c3; -[SCMemoriesOperaItem .cxx_destruct] */

void FUN_106e1f388(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e1f3c4; end: 106e1f487; -[SCMemoriesOperaItemInfo initWithSnapId:mediaType:mediaId:isPersisted:] */

undefined1 *
FUN_106e1f3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f7068;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e1f488; end: 106e1f48f; -[SCMemoriesOperaItemInfo snapId] */

undefined8 FUN_106e1f488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e1f490; end: 106e1f497; -[SCMemoriesOperaItemInfo mediaType] */

undefined8 FUN_106e1f490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e1f498; end: 106e1f49f; -[SCMemoriesOperaItemInfo mediaId] */

undefined8 FUN_106e1f498(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e1f4a0; end: 106e1f4a7; -[SCMemoriesOperaItemInfo isPersisted] */

undefined1 FUN_106e1f4a0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e1f4a8; end: 106e1f4d7; -[SCMemoriesOperaItemInfo .cxx_destruct] */

void FUN_106e1f4a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e1f4d8; end: 106e1f6cb; -[SCMemoriesOperaSessionConfig initWithBrowseStyle:customLayer:operaPageProperties:isFeatured:featuredStoriesOpenType:shouldAutoDismissOnLastSnap:shouldEnableActionMenu:shouldEnableContextMenu:shouldEnableLeftTap:shouldEnableNilNextViewModelPaging:shouldShowFavoriteButton:shouldShowSaveChangesPrompt:shouldShowRemixButton:shouldAllowTrimmingLongCameraRollVideo:shouldCheckItemIdBeforeRegeneratingProperties:viewSource:viewLocation:shouldDisablePagingGestureForCameraRollItems:shouldKeepPresentingWhenAppBackgrounded:shouldDisablePresentingAnimation:customOperaPlugins:shouldHideThreeDotContextMenuButton:shouldUseSingleEditButtonForOperaCreativeToolBar:shouldSupportLivePhotoPlaybackStyle:shouldUseVOpera:shouldShowSoundPill:shouldShowPromoteSnapButton:] */

undefined8 *
FUN_106e1f4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17,undefined4 param_18,undefined4 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_5);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126f7070;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = param_3;
    puVar1[5] = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xb) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 0xc) = param_9._2_1_;
    *(undefined1 *)((long)puVar1 + 0xd) = param_9._3_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 0xf) = param_10._1_1_;
    *(undefined1 *)(puVar1 + 2) = param_10._2_1_;
    *(undefined1 *)((long)puVar1 + 0x11) = param_10._3_1_;
    *(undefined1 *)((long)puVar1 + 0x12) = param_11;
    puVar1[7] = param_7;
    puVar1[8] = param_13;
    puVar1[9] = param_14;
    *(undefined1 *)((long)puVar1 + 0x13) = (undefined1)param_15;
    *(undefined1 *)((long)puVar1 + 0x14) = param_15._1_1_;
    *(undefined1 *)((long)puVar1 + 0x15) = param_15._2_1_;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x16) = (undefined1)param_18;
    *(undefined1 *)((long)puVar1 + 0x17) = param_18._1_1_;
    *(undefined1 *)(puVar1 + 3) = param_18._2_1_;
    *(undefined1 *)((long)puVar1 + 0x19) = param_18._3_1_;
    *(undefined1 *)((long)puVar1 + 0x1a) = (undefined1)param_19;
    *(undefined1 *)((long)puVar1 + 0x1b) = param_19._1_1_;
  }
  _objc_release(param_17);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 106e1f6cc; end: 106e1f6d3; -[SCMemoriesOperaSessionConfig browseStyle] */

undefined8 FUN_106e1f6cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e1f6d4; end: 106e1f6db; -[SCMemoriesOperaSessionConfig customLayer] */

undefined8 FUN_106e1f6d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e1f6dc; end: 106e1f6e3; -[SCMemoriesOperaSessionConfig operaPageProperties] */

undefined8 FUN_106e1f6dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e1f6e4; end: 106e1f6eb; -[SCMemoriesOperaSessionConfig isFeatured] */

undefined1 FUN_106e1f6e4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e1f6ec; end: 106e1f6f3; -[SCMemoriesOperaSessionConfig featuredStoriesOpenType] */

undefined8 FUN_106e1f6ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e1f6f4; end: 106e1f6fb; -[SCMemoriesOperaSessionConfig shouldAutoDismissOnLastSnap] */

undefined1 FUN_106e1f6f4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106e1f6fc; end: 106e1f703; -[SCMemoriesOperaSessionConfig shouldEnableActionMenu] */

undefined1 FUN_106e1f6fc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106e1f704; end: 106e1f70b; -[SCMemoriesOperaSessionConfig shouldEnableContextMenu] */

undefined1 FUN_106e1f704(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106e1f70c; end: 106e1f713; -[SCMemoriesOperaSessionConfig shouldEnableLeftTap] */

undefined1 FUN_106e1f70c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 106e1f714; end: 106e1f71b; -[SCMemoriesOperaSessionConfig shouldEnableNilNextViewModelPaging] */

undefined1 FUN_106e1f714(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 106e1f71c; end: 106e1f723; -[SCMemoriesOperaSessionConfig shouldShowFavoriteButton] */

undefined1 FUN_106e1f71c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 106e1f724; end: 106e1f72b; -[SCMemoriesOperaSessionConfig shouldShowSaveChangesPrompt] */

undefined1 FUN_106e1f724(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 106e1f72c; end: 106e1f733; -[SCMemoriesOperaSessionConfig shouldShowRemixButton] */

undefined1 FUN_106e1f72c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 106e1f734; end: 106e1f73b; -[SCMemoriesOperaSessionConfig shouldAllowTrimmingLongCameraRollVideo] */

undefined1 FUN_106e1f734(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 106e1f73c; end: 106e1f743; -[SCMemoriesOperaSessionConfig shouldCheckItemIdBeforeRegeneratingProperties] */

undefined1 FUN_106e1f73c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 106e1f744; end: 106e1f74b; -[SCMemoriesOperaSessionConfig viewSource] */

undefined8 FUN_106e1f744(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106e1f74c; end: 106e1f753; -[SCMemoriesOperaSessionConfig viewLocation] */

undefined8 FUN_106e1f74c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106e1f754; end: 106e1f75b; -[SCMemoriesOperaSessionConfig shouldDisablePagingGestureForCameraRollItems] */

undefined1 FUN_106e1f754(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 106e1f75c; end: 106e1f763; -[SCMemoriesOperaSessionConfig shouldKeepPresentingWhenAppBackgrounded] */

undefined1 FUN_106e1f75c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 106e1f764; end: 106e1f76b; -[SCMemoriesOperaSessionConfig shouldDisablePresentingAnimation] */

undefined1 FUN_106e1f764(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 106e1f76c; end: 106e1f773; -[SCMemoriesOperaSessionConfig customOperaPlugins] */

undefined8 FUN_106e1f76c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106e1f774; end: 106e1f77b; -[SCMemoriesOperaSessionConfig shouldHideThreeDotContextMenuButton] */

undefined1 FUN_106e1f774(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



/* Entry: 106e1f77c; end: 106e1f783; -[SCMemoriesOperaSessionConfig shouldUseSingleEditButtonForOperaCreativeToolBar] */

undefined1 FUN_106e1f77c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x17);
}



/* Entry: 106e1f784; end: 106e1f78b; -[SCMemoriesOperaSessionConfig shouldSupportLivePhotoPlaybackStyle] */

undefined1 FUN_106e1f784(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 106e1f78c; end: 106e1f793; -[SCMemoriesOperaSessionConfig shouldUseVOpera] */

undefined1 FUN_106e1f78c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 106e1f794; end: 106e1f79b; -[SCMemoriesOperaSessionConfig shouldShowSoundPill] */

undefined1 FUN_106e1f794(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



/* Entry: 106e1f79c; end: 106e1f7a3; -[SCMemoriesOperaSessionConfig shouldShowPromoteSnapButton] */

undefined1 FUN_106e1f79c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b);
}



/* Entry: 106e1f7a4; end: 106e1f7d3; -[SCMemoriesOperaSessionConfig .cxx_destruct] */

void FUN_106e1f7a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 106e1f7d4; end: 106e1f81f; -[SCMemoriesOperaProgressBarModel initWithSnapIndex:snapCount:] */

void FUN_106e1f7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7078;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 106e1f820; end: 106e1f827; -[SCMemoriesOperaProgressBarModel snapIndex] */

undefined8 FUN_106e1f820(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e1f828; end: 106e1f82f; -[SCMemoriesOperaProgressBarModel snapCount] */

undefined8 FUN_106e1f828(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e1f830; end: 106e1f837; -[SCGalleryTabsConfiguration supportsCameraRollTabIntroPopup] */

undefined1 FUN_106e1f830(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e1f838; end: 106e1f83f; -[SCGalleryTabsConfiguration setSupportsCameraRollTabIntroPopup:] */

void FUN_106e1f838(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106e1f840; end: 106e1f847; -[SCGalleryTabsConfiguration supportsSnapsTabEmptyState] */

undefined1 FUN_106e1f840(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106e1f848; end: 106e1f84f; -[SCGalleryTabsConfiguration setSupportsSnapsTabEmptyState:] */

void FUN_106e1f848(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106e1f850; end: 106e1f857; -[SCGalleryTabsConfiguration showSnapsTabEmptyStateAction] */

undefined1 FUN_106e1f850(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106e1f858; end: 106e1f85f; -[SCGalleryTabsConfiguration setShowSnapsTabEmptyStateAction:] */

void FUN_106e1f858(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 106e1f860; end: 106e1f867; -[SCGalleryTabsConfiguration supportsLagunaTabIncompatibleWithMyEyesOnlyByDefaultPopup] */

undefined1 FUN_106e1f860(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106e1f868; end: 106e1f86f; -[SCGalleryTabsConfiguration setSupportsLagunaTabIncompatibleWithMyEyesOnlyByDefaultPopup:] */

void FUN_106e1f868(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 106e1f870; end: 106e1f877; -[SCGalleryTabsConfiguration supportsPrivateGalleryPasscodeOptions] */

undefined1 FUN_106e1f870(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 106e1f878; end: 106e1f87f; -[SCGalleryTabsConfiguration setSupportsPrivateGalleryPasscodeOptions:] */

void FUN_106e1f878(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 106e1f880; end: 106e1f887; -[SCGalleryTabsConfiguration supportsPrivateGalleryPassphraseOptions] */

undefined1 FUN_106e1f880(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 106e1f888; end: 106e1f88f; -[SCGalleryTabsConfiguration setSupportsPrivateGalleryPassphraseOptions:] */

void FUN_106e1f888(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 106e1f890; end: 106e1f897; -[SCGalleryTabsConfiguration hideFeaturedStory] */

undefined1 FUN_106e1f890(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 106e1f898; end: 106e1f89f; -[SCGalleryTabsConfiguration setHideFeaturedStory:] */

void FUN_106e1f898(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xe) = param_3;
  return;
}



/* Entry: 106e1f8a0; end: 106e1f8a7; -[SCGalleryTabsConfiguration allowUpdatesDuringSelectionMode] */

undefined1 FUN_106e1f8a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 106e1f8a8; end: 106e1f8af; -[SCGalleryTabsConfiguration setAllowUpdatesDuringSelectionMode:] */

void FUN_106e1f8a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf) = param_3;
  return;
}



/* Entry: 106e1f8b0; end: 106e1f8b7; -[SCGalleryTabsConfiguration videoEntriesOnly] */

undefined1 FUN_106e1f8b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 106e1f8b8; end: 106e1f8bf; -[SCGalleryTabsConfiguration setVideoEntriesOnly:] */

void FUN_106e1f8b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106e1f8c0; end: 106e1f8c7; -[SCGalleryTabsConfiguration photoEntriesOnly] */

undefined1 FUN_106e1f8c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 106e1f8c8; end: 106e1f8cf; -[SCGalleryTabsConfiguration setPhotoEntriesOnly:] */

void FUN_106e1f8c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 106e1f8d0; end: 106e1f8d7; -[SCGalleryTabsConfiguration directorModeDraftsOnly] */

undefined1 FUN_106e1f8d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 106e1f8d8; end: 106e1f8df; -[SCGalleryTabsConfiguration setDirectorModeDraftsOnly:] */

void FUN_106e1f8d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 106e1f8e0; end: 106e1f8e7; -[SCGalleryTabsConfiguration supportsTimeline] */

undefined1 FUN_106e1f8e0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 106e1f8e8; end: 106e1f8ef; -[SCGalleryTabsConfiguration setSupportsTimeline:] */

void FUN_106e1f8e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x13) = param_3;
  return;
}



/* Entry: 106e1f8f0; end: 106e1f8f7; -[SCGalleryTabsConfiguration scrollToLastSelected] */

undefined1 FUN_106e1f8f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 106e1f8f8; end: 106e1f8ff; -[SCGalleryTabsConfiguration setScrollToLastSelected:] */

void FUN_106e1f8f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 106e1f900; end: 106e1f907; -[SCGalleryTabsConfiguration hideDraftsFolder] */

undefined1 FUN_106e1f900(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 106e1f908; end: 106e1f90f; -[SCGalleryTabsConfiguration setHideDraftsFolder:] */

void FUN_106e1f908(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x15) = param_3;
  return;
}



/* Entry: 106e1f910; end: 106e1f917; -[SCGalleryTabsConfiguration disabledSnapIds] */

undefined8 FUN_106e1f910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e1f918; end: 106e1f947; -[SCGalleryTabsConfiguration setDisabledSnapIds:] */

void FUN_106e1f918(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106e1f948; end: 106e1f953; -[SCGalleryTabsConfiguration .cxx_destruct] */

void FUN_106e1f948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106e1f954; end: 106e1fa87; -[SCMemoriesCollectionViewTableIndexController initWithParentView:configurationModel:] */

undefined1 *
FUN_106e1f954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7080;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d2bf0;
    _objc_alloc();
    func_0x00010c050360();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c267ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c267ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c267ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c267ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_3);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e1fa88; end: 106e1fb0f; -[SCMemoriesCollectionViewTableIndexController setScrollViewToTrack:initialTopOffset:initialBottomTopOffset:] */

void FUN_106e1fa88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1;
  uVar3 = param_2;
  _objc_retain(param_7);
  _objc_storeWeak(param_5 + 0x10,param_7);
  uVar1 = *(undefined8 *)(param_5 + 8);
  func_0x00010bfb68e0(param_7);
  func_0x00010c229720(param_1,param_2,uVar2,uVar3,param_3,param_4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106e1fb10; end: 106e1fbbb; -[SCMemoriesCollectionViewTableIndexController updateTableIndexPositionWithTopOffset:bottomOffset:animated:] */

void FUN_106e1fb10(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_3 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    *(undefined8 *)(param_3 + 0x38) = param_1;
    uVar2 = *(undefined8 *)(param_3 + 8);
    lVar1 = param_3 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c28ab60(param_1,param_2,uVar2);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c28abb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)PTR__CGRectZero_110347608,
               *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
               *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),0,*(undefined8 *)(param_3 + 8),
               PTR_s_updateTableIndexWithHiddenFrame__112680510);
    return;
  }
  return;
}



/* Entry: 106e1fbbc; end: 106e1fc9b; -[SCMemoriesCollectionViewTableIndexController showTableIndexAnimated] */

void FUN_106e1fbbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c267ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106e1fc60;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010bf03440(0x3fe0000000000000,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,&puStack_48,
                      0);
  return;
}



/* Entry: 106e1fc9c; end: 106e1fca7; -[SCMemoriesCollectionViewTableIndexController hideTableIndexAnimated] */

void FUN_106e1fc9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be35e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hideTableIndexWithShouldDelay_a_11256b138,0,1);
  return;
}



/* Entry: 106e1fca8; end: 106e1fd53; -[SCMemoriesCollectionViewTableIndexController _hideTableIndexWithShouldDelay:animated:] */

void FUN_106e1fca8(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x3ff4000000000000;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  func_0x00010c0f7fe0(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 106e1fd54; end: 106e1fe7b;  */

void FUN_106e1fd54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x28) == *(long *)(*(long *)(param_1 + 0x20) + 0x18)) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c267ec0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar1);
    if (*(char *)(param_1 + 0x30) != '\x01') {
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
      func_0x00010c267ec0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x106e1fe40;
    puStack_30 = &UNK_110842e18;
    uStack_28 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf03440(0x3fe0000000000000,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,
                        &puStack_48,0);
  }
  return;
}



/* Entry: 106e1fe7c; end: 106e1feb7; -[SCMemoriesCollectionViewTableIndexController didEndScrolling] */

void FUN_106e1fe7c(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
  func_0x00010c267e40(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010be35e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hideTableIndexWithShouldDelay_a_11256b138,1,1);
  return;
}



/* Entry: 106e1feb8; end: 106e1ff83; -[SCMemoriesCollectionViewTableIndexController tableIndexFocusRect] */

undefined8 FUN_106e1feb8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  func_0x00010c267ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c151de0();
  _objc_release(uVar1);
  lVar2 = param_3 + 0x10;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_3 + 8);
  func_0x00010c267ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51200(param_1,param_2,lVar2,param_4,uVar1);
  _objc_release(uVar1);
  _objc_release(lVar2);
  param_3 = param_3 + 0x10;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(param_3);
  return 0;
}



/* Entry: 106e1ff84; end: 106e1ffdb; -[SCMemoriesCollectionViewTableIndexController scrollToPercent:] */

void FUN_106e1ff84(undefined8 param_1,long param_2)

{
  *(undefined1 *)(param_2 + 0x20) = 1;
  *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + 1;
  param_2 = param_2 + 0x30;
  _objc_loadWeakRetained(param_2);
  func_0x00010bfbdb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e1ffdc; end: 106e20053; -[SCMemoriesCollectionViewTableIndexController getLabelTextWithCompletion:] */

void FUN_106e1ffdc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c26bf80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,lVar1,0);
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e20054; end: 106e20063; -[SCMemoriesCollectionViewTableIndexController didFinishLongPressingTableIndex] */

void FUN_106e20054(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be35e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hideTableIndexWithShouldDelay_a_11256b138,1,1);
  return;
}



/* Entry: 106e20064; end: 106e2006b; -[SCMemoriesCollectionViewTableIndexController tableIndexOffset] */

undefined8 FUN_106e20064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e2006c; end: 106e20083; -[SCMemoriesCollectionViewTableIndexController dataSource] */

void FUN_106e2006c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


