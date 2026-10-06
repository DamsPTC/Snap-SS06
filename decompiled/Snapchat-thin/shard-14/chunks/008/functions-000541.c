/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b660734; end: 10b660753; -[SCCMemoriesSearchPreTypeViewModel init] */

void FUN_10b660734(void)

{
  func_0x00010b6610ec(PTR_PTR_112707e18);
  return;
}



/* Entry: 10b660754; end: 10b660763; +[SCCMemoriesSearchPreTypeViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b660754(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e5d3a78;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660764; end: 10b66079b; -[SCCMemoriesSettingsContext initWithNavigator:] */

void FUN_10b660764(void)

{
  func_0x00010b661138(PTR_PTR_112707e20);
  func_0x00010b661100();
  return;
}



/* Entry: 10b66079c; end: 10b6607bb; +[SCCMemoriesSettingsContext valdiMarshallableObjectDescriptor] */

void FUN_10b66079c(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110d33548;
  param_1[1] = &PTR_s_SCValdiINavigator_110d33668;
  param_1[2] = &PTR_s_ob_v_110d33518;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6607bc; end: 10b6607e3;  */

undefined8 FUN_10b6607bc(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10b6607e4; end: 10b660843;  */

void FUN_10b6607e4(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010b66121c(0x10b661090);
  _objc_retainBlock(&puStack_48);
  func_0x00010b661248();
  func_0x00010b661214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b660844; end: 10b660873; -[SCCMemoriesSettingsV2Context initWithNavigator:] */

void FUN_10b660844(void)

{
  func_0x00010b661138(PTR_PTR_112707e28);
  func_0x00010b661100();
  return;
}



/* Entry: 10b660874; end: 10b660887; +[SCCMemoriesSettingsV2Context valdiMarshallableObjectDescriptor] */

void FUN_10b660874(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110d33690;
  param_1[1] = &PTR_s_SCValdiINavigator_110d33780;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660888; end: 10b6608bb; -[SCCMemoriesTaggingFriend initWithUserId:userName:avatarUri:isCurrentUser:] */

void FUN_10b660888(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b661138(PTR_PTR_112707e30);
  func_0x00010b661198(auStack_20);
  return;
}



/* Entry: 10b6608bc; end: 10b6608cb; +[SCCMemoriesTaggingFriend valdiMarshallableObjectDescriptor] */

void FUN_10b6608bc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110d337b8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6608cc; end: 10b6608f3; -[SCCMyMemoriesLinksContext initWithNavigator:isModal:] */

void FUN_10b6608cc(void)

{
  func_0x00010b661138(PTR_PTR_112707e38);
  func_0x00010b661118();
  return;
}



/* Entry: 10b6608f4; end: 10b660907; +[SCCMyMemoriesLinksContext valdiMarshallableObjectDescriptor] */

void FUN_10b6608f4(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110d33860;
  param_1[1] = &PTR_s_SCValdiINavigator_110d338c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660908; end: 10b660927; -[SCCNetworkOptions initWithNetworkTypes:] */

void FUN_10b660908(void)

{
  func_0x00010b6610d0(PTR_PTR_112707e40);
  return;
}



/* Entry: 10b660928; end: 10b66093b; +[SCCNetworkOptions valdiMarshallableObjectDescriptor] */

void FUN_10b660928(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d338d0;
  param_1[1] = &PTR_DAT_110d33900;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66093c; end: 10b66095b; -[SCCSaveButtonSettingOptions initWithSaveButtonOptionType:] */

void FUN_10b66093c(void)

{
  func_0x00010b6610d0(PTR_PTR_112707e48);
  return;
}



/* Entry: 10b66095c; end: 10b66096f; +[SCCSaveButtonSettingOptions valdiMarshallableObjectDescriptor] */

void FUN_10b66095c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d33910;
  param_1[1] = &PTR_DAT_110d33940;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660970; end: 10b6609a3; -[SCCScreenshopCategoryGridContext initWithScreenshopDataProvider:clickHandler:shoppingStore:navigator:] */

void FUN_10b660970(void)

{
  func_0x00010b661138(PTR_PTR_112707e50);
  func_0x00010b66118c();
  return;
}



/* Entry: 10b6609a4; end: 10b6609b7; +[SCCScreenshopCategoryGridContext valdiMarshallableObjectDescriptor] */

void FUN_10b6609a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d33950;
  param_1[1] = &PTR_DAT_110d33a28;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6609b8; end: 10b6609e7; -[SCCScreenshopCategoryGridViewModel initWithShoppingEnabled:] */

void FUN_10b6609b8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b661138(PTR_PTR_112707e58);
  func_0x00010b661198(auStack_20);
  return;
}



/* Entry: 10b6609e8; end: 10b6609f7; +[SCCScreenshopCategoryGridViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6609e8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d33a70;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6609f8; end: 10b660a2b; -[SCCScreenshopProgress initWithScreenshotsToProcess:screenshotsTotal:screenshotsWithShoppable:finished:onboarded:] */

void FUN_10b6609f8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b661138(PTR_PTR_112707e60);
  func_0x00010b661198(auStack_20);
  return;
}



/* Entry: 10b660a2c; end: 10b660a3b; +[SCCScreenshopProgress valdiMarshallableObjectDescriptor] */

void FUN_10b660a2c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d33ae8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660a3c; end: 10b660a73; -[SCCameraRollTabPageContext initWithCameraRollProvider:nativeActiveSubject:actionHandler:selectSubject:] */

void FUN_10b660a3c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b661138(PTR_PTR_112707e68);
  func_0x00010b661198(auStack_20);
  return;
}



/* Entry: 10b660a74; end: 10b660a87; +[SCCameraRollTabPageContext valdiMarshallableObjectDescriptor] */

void FUN_10b660a74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d33b78;
  param_1[1] = &PTR_DAT_110d33c38;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660a88; end: 10b660abf; -[SCChatMediaDrawerContext initWithCameraRollProvider:] */

void FUN_10b660a88(void)

{
  func_0x00010b661138(PTR_PTR_112707e70);
  func_0x00010b6611e4();
  func_0x00010b661118();
  return;
}



/* Entry: 10b660ac0; end: 10b660ad3; +[SCChatMediaDrawerContext valdiMarshallableObjectDescriptor] */

void FUN_10b660ac0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d33c68;
  param_1[1] = &PTR_DAT_110d33da0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660ad4; end: 10b660b07; -[SCFaceClusteringProgress initWithSnapsProcessed:snapsTotal:snapsWithFaces:finished:] */

void FUN_10b660ad4(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b661138(PTR_PTR_112707e78);
  func_0x00010b661198(auStack_20);
  return;
}



/* Entry: 10b660b08; end: 10b660b17; +[SCFaceClusteringProgress valdiMarshallableObjectDescriptor] */

void FUN_10b660b08(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d33de8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660b18; end: 10b660b4b; -[SCFaceTaggingFaceCarouselTileContext initWithNavigator:] */

void FUN_10b660b18(void)

{
  func_0x00010b661138(PTR_PTR_112707e80);
  func_0x00010b661100();
  return;
}



/* Entry: 10b660b4c; end: 10b660b5f; +[SCFaceTaggingFaceCarouselTileContext valdiMarshallableObjectDescriptor] */

void FUN_10b660b4c(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110d33e78;
  param_1[1] = &PTR_s_SCValdiINavigator_110d33f80;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660b60; end: 10b660b7f; -[SCFaceTaggingFaceCarouselTileViewModel init] */

void FUN_10b660b60(void)

{
  func_0x00010b6610ec(PTR_PTR_112707e88);
  return;
}



/* Entry: 10b660b80; end: 10b660b8f; +[SCFaceTaggingFaceCarouselTileViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b660b80(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e5d3a90;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660b90; end: 10b660baf; -[SCFaceTaggingOnboardingTrayContext initWithClickActions:] */

void FUN_10b660b90(void)

{
  func_0x00010b6610d0(PTR_PTR_112707e90);
  return;
}



/* Entry: 10b660bb0; end: 10b660bc3; +[SCFaceTaggingOnboardingTrayContext valdiMarshallableObjectDescriptor] */

void FUN_10b660bb0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d33fd8;
  param_1[1] = &PTR_DAT_110d34008;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660bc4; end: 10b660bf7; -[SCFaceTaggingStoriesTabTileContext initWithNavigator:] */

void FUN_10b660bc4(void)

{
  func_0x00010b661138(PTR_PTR_112707e98);
  func_0x00010b661100();
  return;
}



/* Entry: 10b660bf8; end: 10b660c0b; +[SCFaceTaggingStoriesTabTileContext valdiMarshallableObjectDescriptor] */

void FUN_10b660bf8(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110d34018;
  param_1[1] = &PTR_s_SCValdiINavigator_110d34120;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660c0c; end: 10b660c2b; -[SCFaceTaggingStoriesTabTileViewModel init] */

void FUN_10b660c0c(void)

{
  func_0x00010b6610ec(PTR_PTR_112707ea0);
  return;
}



/* Entry: 10b660c2c; end: 10b660c3b; +[SCFaceTaggingStoriesTabTileViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b660c2c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e5d3aa8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660c3c; end: 10b660c6f; -[SCMemoriesFaceCluster initWithClusterId:size:snaps:] */

void FUN_10b660c3c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b661138(PTR_PTR_112707ea8);
  func_0x00010b661198(auStack_20);
  return;
}



/* Entry: 10b660c70; end: 10b660c83; +[SCMemoriesFaceCluster valdiMarshallableObjectDescriptor] */

void FUN_10b660c70(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d34178;
  param_1[1] = &PTR_DAT_110d34208;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660c84; end: 10b660caf; -[SCMemoriesPersonInMySnaps initWithImageUri:snapIds:] */

void FUN_10b660c84(void)

{
  func_0x00010b661138(PTR_PTR_112707eb0);
  func_0x00010b661118();
  return;
}



/* Entry: 10b660cb0; end: 10b660cc3; +[SCMemoriesPersonInMySnaps valdiMarshallableObjectDescriptor] */

void FUN_10b660cb0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d34220;
  param_1[1] = &PTR_DAT_110d342b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660cc4; end: 10b660cfb; -[SCMemoriesPickerContext initWithActionHandler:cameraRollProvider:blizzardLogger:] */

void FUN_10b660cc4(void)

{
  func_0x00010b661138(PTR_PTR_112707eb8);
  func_0x00010b6611e4();
  func_0x00010b661118();
  return;
}



/* Entry: 10b660cfc; end: 10b660d0f; +[SCMemoriesPickerContext valdiMarshallableObjectDescriptor] */

void FUN_10b660cfc(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionHandler_110d342c0;
  param_1[1] = &PTR_DAT_110d34410;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660d10; end: 10b660d37; -[SCMemoriesPickerTabSetting initWithTabConfig:] */

void FUN_10b660d10(void)

{
  func_0x00010b661138(PTR_PTR_112707ec0);
  func_0x00010b661118();
  return;
}



/* Entry: 10b660d38; end: 10b660d4b; +[SCMemoriesPickerTabSetting valdiMarshallableObjectDescriptor] */

void FUN_10b660d38(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d34478;
  param_1[1] = &PTR_DAT_110d344d8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660d4c; end: 10b660d7b; -[SCMemoriesPickerVideoDurationConfig initWithWarningText:] */

void FUN_10b660d4c(void)

{
  func_0x00010b661138(PTR_PTR_112707ec8);
  func_0x00010b66118c();
  return;
}



/* Entry: 10b660d7c; end: 10b660d8f; +[SCMemoriesPickerVideoDurationConfig valdiMarshallableObjectDescriptor] */

void FUN_10b660d7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d344f8;
  param_1[1] = &PTR_DAT_110d345a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660d90; end: 10b660df7; -[SCMemoriesPickerViewModel initWithTabs:multiselect:] */

void FUN_10b660d90(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112707ed0;
  uStack_30 = param_1;
  func_0x00010b6611a0();
  func_0x00010b661198(&uStack_30);
  return;
}



/* Entry: 10b660df8; end: 10b660e0b; +[SCMemoriesPickerViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b660df8(undefined8 *param_1)

{
  *param_1 = &PTR_s_headerTitle_110d345b0;
  param_1[1] = &PTR_DAT_110d34880;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660e0c; end: 10b660e33; -[SCMemoriesSelectedItems initWithSnaps:cameraRollItems:] */

void FUN_10b660e0c(void)

{
  func_0x00010b66117c(PTR_PTR_112707ed8);
  func_0x00010b661170();
  return;
}



/* Entry: 10b660e34; end: 10b660e47; +[SCMemoriesSelectedItems valdiMarshallableObjectDescriptor] */

void FUN_10b660e34(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d348d8;
  param_1[1] = &PTR_DAT_110d34920;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660e48; end: 10b660eb3; -[SCMemoriesSnapFace initWithEntryId:snapId:thumbnailUri:createTime:uploadState:isSpectacles:isSpectaclesV3:isVideo:isMultiSnap:isFavorited:durationMs:faceClusterId:faceId:boundingBox:] */

void FUN_10b660e48(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707ee0;
  uStack_20 = param_1;
  func_0x00010b661198(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b660eb4; end: 10b660ec7; +[SCMemoriesSnapFace valdiMarshallableObjectDescriptor] */

void FUN_10b660eb4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d34938;
  param_1[1] = &PTR_DAT_110d34ae8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660ec8; end: 10b660eef; -[SCMultiSelectOrderedMediaLibraryItem initWithItem:order:] */

void FUN_10b660ec8(void)

{
  func_0x00010b66117c(PTR_PTR_112707ee8);
  func_0x00010b661128();
  return;
}



/* Entry: 10b660ef0; end: 10b660f03; +[SCMultiSelectOrderedMediaLibraryItem valdiMarshallableObjectDescriptor] */

void FUN_10b660ef0(undefined8 *param_1)

{
  *param_1 = &PTR_s_item_110d34b00;
  param_1[1] = &PTR_s_SCComposerMediaLibraryItem_110d34b48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660f04; end: 10b660f2b; -[SCMultiSelectOrderedMemoriesSnap initWithItem:order:] */

void FUN_10b660f04(void)

{
  func_0x00010b66117c(PTR_PTR_112707ef0);
  func_0x00010b661128();
  return;
}



/* Entry: 10b660f2c; end: 10b660f3f; +[SCMultiSelectOrderedMemoriesSnap valdiMarshallableObjectDescriptor] */

void FUN_10b660f2c(undefined8 *param_1)

{
  *param_1 = &PTR_s_item_110d34b58;
  param_1[1] = &PTR_DAT_110d34ba0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660f40; end: 10b660f5f; -[SCSaveDialogViewModel init] */

void FUN_10b660f40(void)

{
  func_0x00010b6610ec(PTR_PTR_112707ef8);
  return;
}



/* Entry: 10b660f60; end: 10b660f6f; +[SCSaveDialogViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b660f60(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e5d3ac0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660f70; end: 10b660f9b; -[SCScreenshopGridContext initWithScreenshopDataProvider:clickHandler:navigator:] */

void FUN_10b660f70(void)

{
  func_0x00010b661138(PTR_PTR_112707f00);
  func_0x00010b661118();
  return;
}



/* Entry: 10b660f9c; end: 10b660faf; +[SCScreenshopGridContext valdiMarshallableObjectDescriptor] */

void FUN_10b660f9c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d34bb0;
  param_1[1] = &PTR_DAT_110d34c40;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660fb0; end: 10b660fcf; -[SCScreenshopGridViewModel initWithShoppingEnabled:] */

void FUN_10b660fb0(void)

{
  func_0x00010b6610d0(PTR_PTR_112707f08);
  return;
}



/* Entry: 10b660fd0; end: 10b660fdf; +[SCScreenshopGridViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b660fd0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d34c70;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b660fe0; end: 10b66100b; -[SCScreenshopShoppablePageContext initWithActionHandler:cameraRollGridContext:cameraRollProvider:navigator:] */

void FUN_10b660fe0(void)

{
  func_0x00010b661138(PTR_PTR_112707f10);
  func_0x00010b661118();
  return;
}



/* Entry: 10b66100c; end: 10b66101f; +[SCScreenshopShoppablePageContext valdiMarshallableObjectDescriptor] */

void FUN_10b66100c(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionHandler_110d34ca0;
  param_1[1] = &PTR_DAT_110d34d30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b661020; end: 10b66104f; -[SCTaggedPersonDetails initWithDisplayName:] */

void FUN_10b661020(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b661138(PTR_PTR_112707f18);
  func_0x00010b661198(auStack_20);
  return;
}



/* Entry: 10b661050; end: 10b66105f; +[SCTaggedPersonDetails valdiMarshallableObjectDescriptor] */

void FUN_10b661050(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110d34d58;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b661060; end: 10b6610bf;  */

void FUN_10b661060(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b6610c0; end: 10b66125f;  */

void FUN_10b6610c0(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b661260; end: 10b66137f; -[SCCCommerceBlizzardLoggingCommerceActionType__Enum init] */

void FUN_10b661260(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  
  func_0x00010b661c98();
  func_0x00010b661cd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661cf0();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_00);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661d00();
  func_0x00010b661cd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_01);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661cf0();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_02);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661cf0();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_03);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661cd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_04);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661d00();
  func_0x00010b661cd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_05);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661cac(PTR_PTR_112707f20);
  return;
}



/* Entry: 10b661380; end: 10b661447; -[SCCCommerceBlizzardLoggingCommerceCard__Enum init] */

void FUN_10b661380(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  
  func_0x00010b661c98();
  func_0x00010b661cf0();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661d00();
  func_0x00010b661cd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_00);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661cf0();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_01);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661cf0();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_02);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661cd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_03);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661d00();
  func_0x00010b661cd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_04);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661cac(PTR_PTR_112707f20);
  return;
}



/* Entry: 10b661448; end: 10b661667; -[SCCCommerceBlizzardLoggingCommerceOriginType__Enum init] */

void FUN_10b661448(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  
  func_0x00010b661c98();
  func_0x00010b661d00();
  func_0x00010b661cd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661cf0();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_00);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661cf0();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_01);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661cd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_02);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661d00();
  func_0x00010b661cd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_03);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661cac(PTR_PTR_112707f20);
  return;
}



/* Entry: 10b661668; end: 10b661903; -[SCCCommerceBlizzardLoggingCommercePage__Enum init] */

void FUN_10b661668(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  
  func_0x00010b661c98();
  func_0x00010b661cf0();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661cf0();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_00);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661cd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_01);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661d00();
  func_0x00010b661cd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_02);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661cac(PTR_PTR_112707f20);
  return;
}



/* Entry: 10b661904; end: 10b6619b7; -[SCCCommerceBlizzardLoggingCommerceProductArea__Enum init] */

void FUN_10b661904(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x00010b661c98();
  func_0x00010b661cf0();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661cd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_00);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661d00();
  func_0x00010b661cd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_01);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661cac(PTR_PTR_112707f20);
  return;
}



/* Entry: 10b6619b8; end: 10b661b43; -[SCCCommerceBlizzardLoggingCommerceProductType__Enum init] */

void FUN_10b6619b8(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  
  func_0x00010b661c98();
  func_0x00010b661cd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661c98();
  func_0x00010b661d00();
  func_0x00010b661cd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8_00);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661cac(PTR_PTR_112707f20);
  return;
}



/* Entry: 10b661b44; end: 10b661ba3; -[SCCCommerceBlizzardLoggingSourceType__Enum init] */

void FUN_10b661b44(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  
  func_0x00010b661c98();
  func_0x00010b661d00();
  func_0x00010b661cd8();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b661c74();
  func_0x00010b661cc0();
  func_0x00010b661c84(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b661cac(PTR_PTR_112707f20);
  return;
}



/* Entry: 10b661ba4; end: 10b661bc3; -[SCCCommerceBlizzardLoggingICommerceSession init] */

void FUN_10b661ba4(void)

{
  func_0x00010b661cac(PTR_PTR_112707f20);
  return;
}



/* Entry: 10b661bc4; end: 10b661be3; +[SCCCommerceBlizzardLoggingICommerceSession valdiMarshallableObjectDescriptor] */

void FUN_10b661bc4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d34db8;
  param_1[1] = &PTR_DAT_110d34f20;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b661be4; end: 10b661c03; -[SCCCommerceBlizzardLoggingIContextMetricsModel init] */

void FUN_10b661be4(void)

{
  func_0x00010b661cac(PTR_PTR_112707f28);
  return;
}



/* Entry: 10b661c04; end: 10b661c13; +[SCCCommerceBlizzardLoggingIContextMetricsModel valdiMarshallableObjectDescriptor] */

void FUN_10b661c04(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d34f30;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b661c14; end: 10b661c33; -[SCCCommerceBlizzardLoggingIMutableCommerceSession init] */

void FUN_10b661c14(void)

{
  func_0x00010b661cac(PTR_PTR_112707f30);
  return;
}



/* Entry: 10b661c34; end: 10b661c43; +[SCCCommerceBlizzardLoggingIMutableCommerceSession valdiMarshallableObjectDescriptor] */

void FUN_10b661c34(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_product_id_110d34fa8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b661c44; end: 10b661c63; -[SCCCommerceBlizzardLoggingShoppingHubBaseBlizzardEvent init] */

void FUN_10b661c44(void)

{
  func_0x00010b661cac(PTR_PTR_112707f38);
  return;
}



/* Entry: 10b661c64; end: 10b661d13; +[SCCCommerceBlizzardLoggingShoppingHubBaseBlizzardEvent valdiMarshallableObjectDescriptor] */

void FUN_10b661c64(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d35038;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b661d14; end: 10b661d1b; -[SCCFacetaggingContainerFriendsTabSelectModeCommand__Enum init] */

void FUN_10b661d14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,1);
  return;
}



/* Entry: 10b661d1c; end: 10b661d73; -[SCCFacetaggingContainerFriendsTabHostContext initWithFaceClusterSnapStore:backfillSnapCountProvider:actionSheetPresenter:webLauncher:] */

void FUN_10b661d1c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707f40;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b661d74; end: 10b661d9b; +[SCCFacetaggingContainerFriendsTabHostContext valdiMarshallableObjectDescriptor] */

void FUN_10b661d74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d350b0;
  param_1[1] = &PTR_DAT_110d35200;
  param_1[2] = &PTR_s_od_v_110d35080;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b661d9c; end: 10b661dbf;  */

undefined8 FUN_10b661d9c(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 10b661dc0; end: 10b661e3f;  */

void FUN_10b661dc0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b661e40;
  puStack_30 = &UNK_110853170;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b661e40; end: 10b661e6b;  */

void FUN_10b661e40(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b661e6c; end: 10b661e73; -[SCCFacetaggingFaceTaggingPromptSurface__Enum init] */

void FUN_10b661e6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b661e74; end: 10b661ec3; -[SCCFaceTaggingPermissionTrayContext initWithOnDismissButtonTapped:] */

void FUN_10b661e74(void)

{
  func_0x00010b6620dc();
  func_0x00010b6620e8();
  func_0x00010b6620c8(&stack0xffffffffffffffd0);
  func_0x00010b6620d0();
  return;
}



/* Entry: 10b661ec4; end: 10b661eeb; +[SCCFaceTaggingPermissionTrayContext valdiMarshallableObjectDescriptor] */

void FUN_10b661ec4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d35290;
  param_1[1] = &PTR_DAT_110d35308;
  param_1[2] = &PTR_s_oi_v_110d35260;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b661eec; end: 10b661f0f;  */

undefined8 FUN_10b661eec(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 10b661f10; end: 10b661f8f;  */

void FUN_10b661f10(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b662088;
  puStack_30 = &UNK_11085e0c0;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b661f90; end: 10b661fc3; -[SCCFaceTaggingPermissionTrayViewModel initWithPromptSurface:] */

void FUN_10b661f90(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707f50;
  uStack_20 = param_1;
  func_0x00010b6620e8();
  func_0x00010b6620c8(&uStack_20);
  return;
}



/* Entry: 10b661fc4; end: 10b661fd7; +[SCCFaceTaggingPermissionTrayViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b661fc4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d35320;
  param_1[1] = &PTR_DAT_110d35368;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b661fd8; end: 10b662023; -[SCCFaceTaggingSearchReOptInContext initWithOnTapFaceTaggingCard:] */

void FUN_10b661fd8(void)

{
  func_0x00010b6620dc();
  func_0x00010b6620e8();
  func_0x00010b6620c8(&stack0xffffffffffffffd0);
  func_0x00010b6620d0();
  return;
}



/* Entry: 10b662024; end: 10b66203b; +[SCCFaceTaggingSearchReOptInContext valdiMarshallableObjectDescriptor] */

void FUN_10b662024(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d35378;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


