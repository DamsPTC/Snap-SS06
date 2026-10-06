/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6723bc; end: 10b6723ff; -[SCPostArchiveSnapMedia initWithKey:iv:id2:url:snapMediaType:] */

void FUN_10b6723bc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709140;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b672400; end: 10b672417; +[SCPostArchiveSnapMedia valdiMarshallableObjectDescriptor] */

void FUN_10b672400(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_key_110d4b478;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672418; end: 10b67241f; -[SCCMusicPillAnimationType__Enum init] */

void FUN_10b672418(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b672420; end: 10b672427; -[SCCMusicPillStyles__Enum init] */

void FUN_10b672420(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b672428; end: 10b67242f; -[SCCMusicPlaybackEvent__Enum init] */

void FUN_10b672428(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b672430; end: 10b6724e3; -[SCCMusicStickerType__Enum init] */

undefined * FUN_10b672430(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_48 = PTR_PTR_1133bb400;
  puStack_40 = PTR_PTR_1133bb408;
  puStack_38 = PTR_PTR_1133bb410;
  puStack_30 = PTR_PTR_1133bb418;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b672790(PTR_PTR_112709148);
  func_0x00010b67277c();
  return puVar1;
}



/* Entry: 10b6724e4; end: 10b67250b; -[SCComposerMusicFavoriteItemUpdate initWithTrackId:favorited:] */

void FUN_10b6724e4(void)

{
  func_0x00010b672790(PTR_PTR_112709148);
  func_0x00010b67277c();
  return;
}



/* Entry: 10b67250c; end: 10b67251f; +[SCComposerMusicFavoriteItemUpdate valdiMarshallableObjectDescriptor] */

void FUN_10b67250c(undefined8 *param_1)

{
  *param_1 = &PTR_s_trackId_110d4b508;
  param_1[1] = &PTR_DAT_110d4b550;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672520; end: 10b672547; -[SCComposerMusicFavoritesResponse initWithItems:] */

void FUN_10b672520(void)

{
  func_0x00010b672790(PTR_PTR_112709150);
  func_0x00010b67277c();
  return;
}



/* Entry: 10b672548; end: 10b67255b; +[SCComposerMusicFavoritesResponse valdiMarshallableObjectDescriptor] */

void FUN_10b672548(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4b560;
  param_1[1] = &PTR_DAT_110d4b5a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b67255c; end: 10b672583; -[SCComposerMusicRecentSection initWithItems:] */

void FUN_10b67255c(void)

{
  func_0x00010b672790(PTR_PTR_112709158);
  func_0x00010b67277c();
  return;
}



/* Entry: 10b672584; end: 10b672597; +[SCComposerMusicRecentSection valdiMarshallableObjectDescriptor] */

void FUN_10b672584(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4b5b8;
  param_1[1] = &PTR_DAT_110d4b5e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672598; end: 10b6725bb; -[SCMusicExperimentInfo init] */

void FUN_10b672598(void)

{
  func_0x00010b6727b0(PTR_PTR_112709160);
  return;
}



/* Entry: 10b6725bc; end: 10b6725d3; +[SCMusicExperimentInfo valdiMarshallableObjectDescriptor] */

void FUN_10b6725bc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4b5f8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6725d4; end: 10b672617; -[SCMusicPickerEntryInfo initWithSourcePageType:pickerLayoutRequestSource:] */

void FUN_10b6725d4(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6727a0(PTR_PTR_112709168);
  func_0x00010b672788(auStack_20);
  return;
}



/* Entry: 10b672618; end: 10b67262b; +[SCMusicPickerEntryInfo valdiMarshallableObjectDescriptor] */

void FUN_10b672618(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4b628;
  param_1[1] = &PTR_DAT_110d4b700;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b67262c; end: 10b67265b; -[SCMusicPickerSelectedSpotlightTrendingCard initWithTrack:topicId:snapId:] */

void FUN_10b67262c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6727a0(PTR_PTR_112709170);
  func_0x00010b672788(auStack_20);
  return;
}



/* Entry: 10b67265c; end: 10b67266f; +[SCMusicPickerSelectedSpotlightTrendingCard valdiMarshallableObjectDescriptor] */

void FUN_10b67265c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4b710;
  param_1[1] = &PTR_DAT_110d4b788;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672670; end: 10b67269f; -[SCMusicPillContext initWithAudioDataLoader:notificationPresenter:blizzardLogger:actionHandler:] */

void FUN_10b672670(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6727a0(PTR_PTR_112709178);
  func_0x00010b672788(auStack_20);
  return;
}



/* Entry: 10b6726a0; end: 10b6726b3; +[SCMusicPillContext valdiMarshallableObjectDescriptor] */

void FUN_10b6726a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4b7a8;
  param_1[1] = &PTR_DAT_110d4b820;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6726b4; end: 10b6726d7; -[SCMusicPillViewModel init] */

void FUN_10b6726b4(void)

{
  func_0x00010b6727b0(PTR_PTR_112709180);
  return;
}



/* Entry: 10b6726d8; end: 10b6726eb; +[SCMusicPillViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6726d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4b848;
  param_1[1] = &PTR_DAT_110d4b998;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6726ec; end: 10b67271b; -[SCMusicStickerLottieData initWithStickerType:] */

void FUN_10b6726ec(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6727a0(PTR_PTR_112709188);
  func_0x00010b672788(auStack_20);
  return;
}



/* Entry: 10b67271c; end: 10b67272f; +[SCMusicStickerLottieData valdiMarshallableObjectDescriptor] */

void FUN_10b67271c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4b9b8;
  param_1[1] = &PTR_DAT_110d4ba30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672730; end: 10b672757; -[SCMusicStickerMediaInfo initWithStickerType:] */

void FUN_10b672730(void)

{
  func_0x00010b672790(PTR_PTR_112709190);
  func_0x00010b67277c();
  return;
}



/* Entry: 10b672758; end: 10b6727d3; +[SCMusicStickerMediaInfo valdiMarshallableObjectDescriptor] */

void FUN_10b672758(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4ba40;
  param_1[1] = &PTR_DAT_110d4ba88;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6727d4; end: 10b6727db; -[SCMusicPickerRankMovementDirection__Enum init] */

void FUN_10b6727d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b6727dc; end: 10b6727e3; -[SCPickerLayoutRequestSource__Enum init] */

void FUN_10b6727dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b6727e4; end: 10b672883; -[SCMusicMiniPickerTab__Enum init] */

void FUN_10b6727e4(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x00010b672e24();
  func_0x00010b672e60();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b672e0c();
  func_0x00010b672e38();
  func_0x00010b672e44(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b672e24();
  func_0x00010b672e60();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b672e0c();
  func_0x00010b672e38();
  func_0x00010b672e44(extraout_x8_00);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b672e24();
    func_0x00010b672e60();
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b672e0c();
    func_0x00010b672e38();
    func_0x00010b672e44(extraout_x8_01);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b672de0(PTR_PTR_112709198);
      func_0x00010b672dd0();
      return;
    }
  }
  return;
}



/* Entry: 10b672884; end: 10b6728f7; -[SCMusicPickerSelectionMode__Enum init] */

void FUN_10b672884(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  
  func_0x00010b672e24();
  func_0x00010b672e60();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b672e0c();
  func_0x00010b672e38();
  func_0x00010b672e44(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b672e24();
    func_0x00010b672e60();
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b672e0c();
    func_0x00010b672e38();
    func_0x00010b672e44(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b672de0(PTR_PTR_112709198);
      func_0x00010b672dd0();
      return;
    }
  }
  return;
}



/* Entry: 10b6728f8; end: 10b67296b; -[SCMusicTabStyle__Enum init] */

void FUN_10b6728f8(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  
  func_0x00010b672e24();
  func_0x00010b672e60();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b672e0c();
  func_0x00010b672e38();
  func_0x00010b672e44(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b672de0(PTR_PTR_112709198);
  func_0x00010b672dd0();
  return;
}



/* Entry: 10b67296c; end: 10b67299b; -[SCMusicActionButtonStrategy initWithShowMiniActionButton:showFullActionFab:showMusicSyncFab:showMusicSyncTooltip:allowCreateSound:] */

void FUN_10b67296c(void)

{
  func_0x00010b672de0(PTR_PTR_112709198);
  func_0x00010b672dd0();
  return;
}



/* Entry: 10b67299c; end: 10b6729ab; +[SCMusicActionButtonStrategy valdiMarshallableObjectDescriptor] */

void FUN_10b67299c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4baa0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6729ac; end: 10b6729e3; -[SCMusicPickerArtistInfo initWithPublicProfileId:] */

void FUN_10b6729ac(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127091a0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b6729e4; end: 10b6729f7; +[SCMusicPickerArtistInfo valdiMarshallableObjectDescriptor] */

void FUN_10b6729e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4bb30;
  param_1[1] = &PTR_DAT_110d4bb78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6729f8; end: 10b672a1f; -[SCMusicPickerEncryptionInfo initWithKey:type:] */

void FUN_10b6729f8(void)

{
  func_0x00010b672de0(PTR_PTR_1127091a8);
  func_0x00010b672dd0();
  return;
}



/* Entry: 10b672a20; end: 10b672a33; +[SCMusicPickerEncryptionInfo valdiMarshallableObjectDescriptor] */

void FUN_10b672a20(undefined8 *param_1)

{
  *param_1 = &PTR_s_key_110d4bb88;
  param_1[1] = &PTR_DAT_110d4bbe8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672a34; end: 10b672a53; -[SCMusicPickerLayoutStrategy initWithHasCollapsibleTray:hostSpansTopSafeArea:] */

void FUN_10b672a34(void)

{
  func_0x00010b672db4(PTR_PTR_1127091b0);
  return;
}



/* Entry: 10b672a54; end: 10b672a63; +[SCMusicPickerLayoutStrategy valdiMarshallableObjectDescriptor] */

void FUN_10b672a54(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4bbf8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672a64; end: 10b672a8b; -[SCMusicPickerMediaInfo initWithUrl:isPermanent:] */

void FUN_10b672a64(void)

{
  func_0x00010b672de0(PTR_PTR_1127091b8);
  func_0x00010b672dd0();
  return;
}



/* Entry: 10b672a8c; end: 10b672a9f; +[SCMusicPickerMediaInfo valdiMarshallableObjectDescriptor] */

void FUN_10b672a8c(undefined8 *param_1)

{
  *param_1 = &PTR_s_url_110d4bc40;
  param_1[1] = &PTR_DAT_110d4bca0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672aa0; end: 10b672ac7; -[SCMusicPickerRelatedTrackInfo initWithTrackId:title:artist:] */

void FUN_10b672aa0(void)

{
  func_0x00010b672de0(PTR_PTR_1127091c0);
  func_0x00010b672dfc();
  return;
}



/* Entry: 10b672ac8; end: 10b672adb; +[SCMusicPickerRelatedTrackInfo valdiMarshallableObjectDescriptor] */

void FUN_10b672ac8(undefined8 *param_1)

{
  *param_1 = &PTR_s_trackId_110d4bcb0;
  param_1[1] = &PTR_DAT_110d4bd28;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672adc; end: 10b672b0f; -[SCMusicPickerSelectedTrack initWithTrack:audioData:startOffsetMs:] */

void FUN_10b672adc(void)

{
  func_0x00010b672de0(PTR_PTR_1127091c8);
  func_0x00010b672dfc();
  return;
}



/* Entry: 10b672b10; end: 10b672b23; +[SCMusicPickerSelectedTrack valdiMarshallableObjectDescriptor] */

void FUN_10b672b10(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4bd40;
  param_1[1] = &PTR_DAT_110d4bde8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672b24; end: 10b672b4b; -[SCMusicPickerSelectedTrackLoggingInfo initWithPickerSessionId:musicItemPos:musicSectionPos:] */

void FUN_10b672b24(void)

{
  func_0x00010b672de0(PTR_PTR_1127091d0);
  func_0x00010b672dd0();
  return;
}



/* Entry: 10b672b4c; end: 10b672b5b; +[SCMusicPickerSelectedTrackLoggingInfo valdiMarshallableObjectDescriptor] */

void FUN_10b672b4c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4be10;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672b5c; end: 10b672b9b; -[SCMusicPickerStrategy initWithSelection:layout:trayHeight:search:soundCell:actionButtons:tabs:] */

void FUN_10b672b5c(undefined8 param_1)

{
  func_0x00010b672dd0(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b672b9c; end: 10b672baf; +[SCMusicPickerStrategy valdiMarshallableObjectDescriptor] */

void FUN_10b672b9c(undefined8 *param_1)

{
  *param_1 = &PTR_s_selection_110d4be70;
  param_1[1] = &PTR_DAT_110d4bf30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672bb0; end: 10b672be3; -[SCMusicPickerSubtextInfo init] */

void FUN_10b672bb0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127091e0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b672be4; end: 10b672bf3; +[SCMusicPickerSubtextInfo valdiMarshallableObjectDescriptor] */

void FUN_10b672be4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4bf70;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672bf4; end: 10b672c3b; -[SCMusicPickerTrack initWithTrackId:title:artistName:audioMedia:defaultStartOffsetMs:isPrivate:] */

void FUN_10b672bf4(void)

{
  func_0x00010b672de0(PTR_PTR_1127091e8);
  func_0x00010b672dfc();
  return;
}



/* Entry: 10b672c3c; end: 10b672c4f; +[SCMusicPickerTrack valdiMarshallableObjectDescriptor] */

void FUN_10b672c3c(undefined8 *param_1)

{
  *param_1 = &PTR_s_trackId_110d4c000;
  param_1[1] = &PTR_DAT_110d4c180;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672c50; end: 10b672c87; -[SCMusicPickerTrendingChartEntry initWithRank:movement:rankChange:] */

void FUN_10b672c50(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b672de0(PTR_PTR_1127091f0);
  _objc_msgSendSuper2(auStack_20,param_2,0);
  return;
}



/* Entry: 10b672c88; end: 10b672c9b; +[SCMusicPickerTrendingChartEntry valdiMarshallableObjectDescriptor] */

void FUN_10b672c88(undefined8 *param_1)

{
  *param_1 = &PTR_s_rank_110d4c1a8;
  param_1[1] = &PTR_DAT_110d4c208;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672c9c; end: 10b672cc3; -[SCMusicSearchStrategy initWithEnabled:showTabSearchButton:hidePreTypeRecents:] */

void FUN_10b672c9c(void)

{
  func_0x00010b672de0(PTR_PTR_1127091f8);
  func_0x00010b672dd0();
  return;
}



/* Entry: 10b672cc4; end: 10b672cd3; +[SCMusicSearchStrategy valdiMarshallableObjectDescriptor] */

void FUN_10b672cc4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_enabled_110d4c218;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672cd4; end: 10b672cf3; -[SCMusicSelectionStrategy initWithMode:autoSelectFirstTrack:] */

void FUN_10b672cd4(void)

{
  func_0x00010b672db4(PTR_PTR_112709200);
  return;
}



/* Entry: 10b672cf4; end: 10b672d07; +[SCMusicSelectionStrategy valdiMarshallableObjectDescriptor] */

void FUN_10b672cf4(undefined8 *param_1)

{
  *param_1 = &PTR_s_mode_110d4c278;
  param_1[1] = &PTR_DAT_110d4c2c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672d08; end: 10b672d2f; -[SCMusicSoundCellStrategy initWithAllowsScrubberButton:allowsHighlight:allowsRowPlayback:allowsRowLongPress:] */

void FUN_10b672d08(void)

{
  func_0x00010b672de0(PTR_PTR_112709208);
  func_0x00010b672dfc();
  return;
}



/* Entry: 10b672d30; end: 10b672d3f; +[SCMusicSoundCellStrategy valdiMarshallableObjectDescriptor] */

void FUN_10b672d30(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4c2d0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672d40; end: 10b672d5f; -[SCMusicTabStrategy initWithTabStyle:tabs:] */

void FUN_10b672d40(void)

{
  func_0x00010b672db4(PTR_PTR_112709210);
  return;
}



/* Entry: 10b672d60; end: 10b672d73; +[SCMusicTabStrategy valdiMarshallableObjectDescriptor] */

void FUN_10b672d60(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4c348;
  param_1[1] = &PTR_DAT_110d4c390;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672d74; end: 10b672d93; -[SCMusicTrayHeightStrategy initWithCapBelowTopOverlay:expandable:] */

void FUN_10b672d74(void)

{
  func_0x00010b672db4(PTR_PTR_112709218);
  return;
}



/* Entry: 10b672d94; end: 10b672e6f; +[SCMusicTrayHeightStrategy valdiMarshallableObjectDescriptor] */

void FUN_10b672d94(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4c3a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672e70; end: 10b672e9f; -[SCCPlacePickerConfigs initWithEnablePlacePickerImprovements:] */

void FUN_10b672e70(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709220;
  uStack_20 = param_1;
  func_0x00010b673200();
  func_0x00010b6731e0(&uStack_20);
  return;
}



/* Entry: 10b672ea0; end: 10b672eb3; +[SCCPlacePickerConfigs valdiMarshallableObjectDescriptor] */

void FUN_10b672ea0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4c3f0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672eb4; end: 10b672f0f; -[SCComposerPlaceSearchService initWithSearch:] */

undefined8 * FUN_10b672eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_112709228;
  uStack_30 = param_1;
  func_0x00010b673200();
  puVar1 = &uStack_30;
  func_0x00010b6731e0(puVar1);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b672f10; end: 10b672f4b; +[SCComposerPlaceSearchService valdiMarshallableObjectDescriptor] */

void FUN_10b672f10(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4c450;
  param_1[1] = &PTR_s_SCBridgeObservable_110d4c480;
  param_1[2] = &PTR_DAT_110d4c420;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b672f4c; end: 10b672fab;  */

void FUN_10b672f4c(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010b6731f0(FUN_10b673188);
  _objc_retainBlock(&puStack_48);
  func_0x00010b673214();
  func_0x00010b67320c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b672fac; end: 10b672feb; -[SCPlacePickerCell initWithVenueId:title:address:cameFromSearch:rank:] */

void FUN_10b672fac(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709230;
  uStack_20 = param_1;
  func_0x00010b673200();
  func_0x00010b6731e0(&uStack_20);
  return;
}



/* Entry: 10b672fec; end: 10b672fff; +[SCPlacePickerCell valdiMarshallableObjectDescriptor] */

void FUN_10b672fec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4c498;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673000; end: 10b673097; -[SCPlacePickerContext initWithTappedVenue:tappedReportVenue:] */

undefined8 *
FUN_10b673000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  _objc_retainBlock();
  func_0x00010b67320c();
  puStack_38 = PTR_PTR_112709238;
  uStack_40 = param_1;
  func_0x00010b673200();
  puVar1 = &uStack_40;
  func_0x00010b6731e0(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b673098; end: 10b6730cf; +[SCPlacePickerContext valdiMarshallableObjectDescriptor] */

void FUN_10b673098(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4c588;
  param_1[1] = &PTR_DAT_110d4c690;
  param_1[2] = &PTR_DAT_110d4c558;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6730d0; end: 10b67312f;  */

void FUN_10b6730d0(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010b6731f0(0x10b6731b4);
  _objc_retainBlock(&puStack_48);
  func_0x00010b673214();
  func_0x00010b67320c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b673130; end: 10b67316b; -[SCPlacePickerViewModel initWithPlaces:isLoading:isErrored:] */

void FUN_10b673130(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709240;
  uStack_20 = param_1;
  func_0x00010b673200();
  func_0x00010b6731e0(&uStack_20);
  return;
}



/* Entry: 10b67316c; end: 10b673187; +[SCPlacePickerViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b67316c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4c6c0;
  param_1[1] = &PTR_DAT_110d4c750;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673188; end: 10b6731df;  */

void FUN_10b673188(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b6731e0; end: 10b673233;  */

void FUN_10b6731e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)(param_1,param_2,0);
  return;
}



/* Entry: 10b673234; end: 10b67323b; -[SCBirthdayPillIconType__Enum init] */

void FUN_10b673234(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b67323c; end: 10b673243; -[SCCCommonProfileProfileTab__Enum init] */

void FUN_10b67323c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b673244; end: 10b67324b; -[SCCCommonProfileProfileType__Enum init] */

void FUN_10b673244(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b67324c; end: 10b673253; -[SCCPrivateProfileWaitlistDialogAction__Enum init] */

void FUN_10b67324c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b673254; end: 10b67325b; -[SCCQuotedStickerType__Enum init] */

void FUN_10b673254(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b67325c; end: 10b673263; -[SCImpalaChatSourceType__Enum init] */

void FUN_10b67325c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,1);
  return;
}



/* Entry: 10b673264; end: 10b67326b; -[SCImpalaProfileSourceType__Enum init] */

void FUN_10b673264(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,1);
  return;
}



/* Entry: 10b67326c; end: 10b673273; -[SCImpalaProfileViewType__Enum init] */

void FUN_10b67326c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b673274; end: 10b6732e3; -[SCLocalStoryEventType__Enum init] */

undefined8
FUN_10b673274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010b674514();
  func_0x00010b6744e4(&PTR____CFConstantStringClassReference_110f6c918);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b6744ac();
  uVar1 = param_1;
  func_0x00010b67449c();
  func_0x00010b6744cc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b674514();
    func_0x00010b6744e4(&PTR____CFConstantStringClassReference_110e52f18);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b6744ac();
    func_0x00010b67449c();
    func_0x00010b6744cc();
    param_1 = uVar1;
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      _objc_retain(param_3);
      _objc_retainBlock();
      func_0x00010b6743b4();
      func_0x00010b67449c();
      func_0x00010b6744a4();
      param_1 = param_4;
    }
  }
  return param_1;
}



/* Entry: 10b6732e4; end: 10b673353; -[SCLocalStoryType__Enum init] */

undefined8
FUN_10b6732e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  
  func_0x00010b674514();
  func_0x00010b6744e4(&PTR____CFConstantStringClassReference_110e52f18);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b6744ac();
  func_0x00010b67449c();
  func_0x00010b6744cc();
  if (!(bool)in_ZR) {
    param_1 = param_4;
    ___stack_chk_fail();
    _objc_retain(param_3);
    _objc_retainBlock();
    func_0x00010b6743b4();
    func_0x00010b67449c();
    func_0x00010b6744a4();
  }
  return param_1;
}



/* Entry: 10b673354; end: 10b6733c3; -[SCCCommonProfileCommunityPillContext initWithCommunityStore:onCommunityPillTap:] */

undefined8
FUN_10b673354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retainBlock();
  func_0x00010b6743b4();
  func_0x00010b67449c();
  func_0x00010b6744a4();
  return param_4;
}



/* Entry: 10b6733c4; end: 10b6733d7; +[SCCCommonProfileCommunityPillContext valdiMarshallableObjectDescriptor] */

void FUN_10b6733c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4c760;
  param_1[1] = &PTR_DAT_110d4c7a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6733d8; end: 10b6733ff; -[SCCCommonProfileHostSurface initWithProfileType:profileTab:userId:] */

void FUN_10b6733d8(void)

{
  func_0x00010b674378(PTR_PTR_112709250);
  func_0x00010b67435c();
  return;
}



/* Entry: 10b673400; end: 10b673413; +[SCCCommonProfileHostSurface valdiMarshallableObjectDescriptor] */

void FUN_10b673400(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4c7b8;
  param_1[1] = &PTR_DAT_110d4c830;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673414; end: 10b67343b; -[SCCCommonProfileMultiProfileContext initWithDisplayMultiProfileSwitcherIcon:] */

void FUN_10b673414(void)

{
  func_0x00010b6743ec(PTR_PTR_112709258);
  func_0x00010b6743b4();
  return;
}



/* Entry: 10b67343c; end: 10b67344f; +[SCCCommonProfileMultiProfileContext valdiMarshallableObjectDescriptor] */

void FUN_10b67343c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4c848;
  param_1[1] = &PTR_s_SCBridgeObservable_110d4c878;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673450; end: 10b673477; -[SCCCommonProfileMutualFriendsPillViewModel initWithProfileUserId:] */

void FUN_10b673450(void)

{
  func_0x00010b6743ec(PTR_PTR_112709260);
  func_0x00010b6743b4();
  return;
}



/* Entry: 10b673478; end: 10b673487; +[SCCCommonProfileMutualFriendsPillViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b673478(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4c888;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673488; end: 10b6734b7; -[SCCCommonProfileProfileSwitcherContext initWithPrivateProfileSwitcherContext:publicProfileSwitcherContext:cofStore:] */

void FUN_10b673488(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b674378(PTR_PTR_112709268);
  func_0x00010b674414(auStack_20);
  return;
}



/* Entry: 10b6734b8; end: 10b6734cb; +[SCCCommonProfileProfileSwitcherContext valdiMarshallableObjectDescriptor] */

void FUN_10b6734b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4c8b8;
  param_1[1] = &PTR_DAT_110d4c918;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6734cc; end: 10b6734fb; -[SCCCommonProfileProfileSwitcherViewModel initWithHostSurface:] */

void FUN_10b6734cc(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b674378(PTR_PTR_112709270);
  func_0x00010b674414(auStack_20);
  return;
}


