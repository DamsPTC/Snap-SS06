/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b08095c; end: 10b080963; -[SCSnapCommonLoggingParamsBuilder withStickerUserEnterSearchCount:] */

void FUN_10b08095c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x638) = param_3;
  return;
}



/* Entry: 10b080964; end: 10b08096b; -[SCSnapCommonLoggingParamsBuilder withPretypeStickerTagSelectCount:] */

void FUN_10b080964(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x640) = param_3;
  return;
}



/* Entry: 10b08096c; end: 10b080973; -[SCSnapCommonLoggingParamsBuilder withPrefixMatchStickerTagSelectCount:] */

void FUN_10b08096c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x648) = param_3;
  return;
}



/* Entry: 10b080974; end: 10b08097b; -[SCSnapCommonLoggingParamsBuilder withInfoStickersCount:] */

void FUN_10b080974(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x650) = param_3;
  return;
}



/* Entry: 10b08097c; end: 10b080983; -[SCSnapCommonLoggingParamsBuilder withContextualStickersCount:] */

void FUN_10b08097c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x658) = param_3;
  return;
}



/* Entry: 10b080984; end: 10b08098b; -[SCSnapCommonLoggingParamsBuilder withInfoStickerTapCount:] */

void FUN_10b080984(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x660) = param_3;
  return;
}



/* Entry: 10b08098c; end: 10b080993; -[SCSnapCommonLoggingParamsBuilder withUnlockableStickerCount:] */

void FUN_10b08098c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x668) = param_3;
  return;
}



/* Entry: 10b080994; end: 10b08099b; -[SCSnapCommonLoggingParamsBuilder withGiphyStickerCount:] */

void FUN_10b080994(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x670) = param_3;
  return;
}



/* Entry: 10b08099c; end: 10b0809a3; -[SCSnapCommonLoggingParamsBuilder withGameSnippetStickerCount:] */

void FUN_10b08099c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x678) = param_3;
  return;
}



/* Entry: 10b0809a4; end: 10b0809db; -[SCSnapCommonLoggingParamsBuilder withEmojiStickersList:] */

long FUN_10b0809a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x680);
  *(undefined8 *)(param_1 + 0x680) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0809dc; end: 10b080a13; -[SCSnapCommonLoggingParamsBuilder withBitmojiStickersList:] */

long FUN_10b0809dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x688);
  *(undefined8 *)(param_1 + 0x688) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080a14; end: 10b080a4b; -[SCSnapCommonLoggingParamsBuilder withBitmojiGeoStickersList:] */

long FUN_10b080a14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x690);
  *(undefined8 *)(param_1 + 0x690) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080a4c; end: 10b080a83; -[SCSnapCommonLoggingParamsBuilder withSnapchatStickersList:] */

long FUN_10b080a4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x698);
  *(undefined8 *)(param_1 + 0x698) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080a84; end: 10b080abb; -[SCSnapCommonLoggingParamsBuilder withInfoStickersList:] */

long FUN_10b080a84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x6a0);
  *(undefined8 *)(param_1 + 0x6a0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080abc; end: 10b080af3; -[SCSnapCommonLoggingParamsBuilder withContextualStickersList:] */

long FUN_10b080abc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x6a8);
  *(undefined8 *)(param_1 + 0x6a8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080af4; end: 10b080b2b; -[SCSnapCommonLoggingParamsBuilder withUnlockableStickerList:] */

long FUN_10b080af4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x6b0);
  *(undefined8 *)(param_1 + 0x6b0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080b2c; end: 10b080b63; -[SCSnapCommonLoggingParamsBuilder withGiphyStickerList:] */

long FUN_10b080b2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x6b8);
  *(undefined8 *)(param_1 + 0x6b8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080b64; end: 10b080b9b; -[SCSnapCommonLoggingParamsBuilder withGameSnippetStickerList:] */

long FUN_10b080b64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x6c0);
  *(undefined8 *)(param_1 + 0x6c0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080b9c; end: 10b080bd3; -[SCSnapCommonLoggingParamsBuilder withCustomStickerList:] */

long FUN_10b080b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x6c8);
  *(undefined8 *)(param_1 + 0x6c8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080bd4; end: 10b080c0b; -[SCSnapCommonLoggingParamsBuilder withStickerPackIds:] */

long FUN_10b080bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x6d0);
  *(undefined8 *)(param_1 + 0x6d0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080c0c; end: 10b080c43; -[SCSnapCommonLoggingParamsBuilder withStaticStickerPlacePositions:] */

long FUN_10b080c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x6d8);
  *(undefined8 *)(param_1 + 0x6d8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080c44; end: 10b080c4b; -[SCSnapCommonLoggingParamsBuilder withStickerMaxScale:] */

void FUN_10b080c44(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x6e0) = param_1;
  return;
}



/* Entry: 10b080c4c; end: 10b080c83; -[SCSnapCommonLoggingParamsBuilder withEncodedStickers:] */

long FUN_10b080c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x6e8);
  *(undefined8 *)(param_1 + 0x6e8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080c84; end: 10b080cbb; -[SCSnapCommonLoggingParamsBuilder withStickerCanvasId:] */

long FUN_10b080c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x6f0);
  *(undefined8 *)(param_1 + 0x6f0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080cbc; end: 10b080cc3; -[SCSnapCommonLoggingParamsBuilder withStickerTimeBasedUseCount:] */

void FUN_10b080cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x6f8) = param_3;
  return;
}



/* Entry: 10b080cc4; end: 10b080cfb; -[SCSnapCommonLoggingParamsBuilder withStickerLoggingParams:] */

long FUN_10b080cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x700);
  *(undefined8 *)(param_1 + 0x700) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080cfc; end: 10b080d03; -[SCSnapCommonLoggingParamsBuilder withCustomStickerCreationCount:] */

void FUN_10b080cfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x708) = param_3;
  return;
}



/* Entry: 10b080d04; end: 10b080d0b; -[SCSnapCommonLoggingParamsBuilder withCustomStickerDeletionCount:] */

void FUN_10b080d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x710) = param_3;
  return;
}



/* Entry: 10b080d0c; end: 10b080d13; -[SCSnapCommonLoggingParamsBuilder withCustomStickerSelectionCount:] */

void FUN_10b080d0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x718) = param_3;
  return;
}



/* Entry: 10b080d14; end: 10b080d1b; -[SCSnapCommonLoggingParamsBuilder withCustomStickerSelectionFromRecentCount:] */

void FUN_10b080d14(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x720) = param_3;
  return;
}



/* Entry: 10b080d1c; end: 10b080d23; -[SCSnapCommonLoggingParamsBuilder withCustomStickerFromCutoutCreationCount:] */

void FUN_10b080d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x728) = param_3;
  return;
}



/* Entry: 10b080d24; end: 10b080d2b; -[SCSnapCommonLoggingParamsBuilder withCustomStickerFromCutoutDeletionCount:] */

void FUN_10b080d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x730) = param_3;
  return;
}



/* Entry: 10b080d2c; end: 10b080d33; -[SCSnapCommonLoggingParamsBuilder withDrawToolButtonClicked:] */

void FUN_10b080d2c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x738) = param_3;
  return;
}



/* Entry: 10b080d34; end: 10b080d3b; -[SCSnapCommonLoggingParamsBuilder withEmojiBrushClicked:] */

void FUN_10b080d34(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x739) = param_3;
  return;
}



/* Entry: 10b080d3c; end: 10b080d43; -[SCSnapCommonLoggingParamsBuilder withAttachmentToolButtonClicked:] */

void FUN_10b080d3c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x73a) = param_3;
  return;
}



/* Entry: 10b080d44; end: 10b080d4b; -[SCSnapCommonLoggingParamsBuilder withTimerToolButtonClicked:] */

void FUN_10b080d44(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x73b) = param_3;
  return;
}



/* Entry: 10b080d4c; end: 10b080d53; -[SCSnapCommonLoggingParamsBuilder withSoundToolButtonClicked:] */

void FUN_10b080d4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x73c) = param_3;
  return;
}



/* Entry: 10b080d54; end: 10b080d5b; -[SCSnapCommonLoggingParamsBuilder withChatReplyAddMoreFriendButtonClicked:] */

void FUN_10b080d54(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x73d) = param_3;
  return;
}



/* Entry: 10b080d5c; end: 10b080d63; -[SCSnapCommonLoggingParamsBuilder withPostStoryButtonClicked:] */

void FUN_10b080d5c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x73e) = param_3;
  return;
}



/* Entry: 10b080d64; end: 10b080d9b; -[SCSnapCommonLoggingParamsBuilder withSnapCreateTime:] */

long FUN_10b080d64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x740);
  *(undefined8 *)(param_1 + 0x740) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080d9c; end: 10b080dd3; -[SCSnapCommonLoggingParamsBuilder withCorrespondentGuidsString:] */

long FUN_10b080d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x748);
  *(undefined8 *)(param_1 + 0x748) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080dd4; end: 10b080e0b; -[SCSnapCommonLoggingParamsBuilder withCorrespondentIdsString:] */

long FUN_10b080dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x750);
  *(undefined8 *)(param_1 + 0x750) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080e0c; end: 10b080e43; -[SCSnapCommonLoggingParamsBuilder withMischiefIdsString:] */

long FUN_10b080e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x758);
  *(undefined8 *)(param_1 + 0x758) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080e44; end: 10b080e7b; -[SCSnapCommonLoggingParamsBuilder withSnapcraftStyleId:] */

long FUN_10b080e44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x760);
  *(undefined8 *)(param_1 + 0x760) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080e7c; end: 10b080e83; -[SCSnapCommonLoggingParamsBuilder withTapCount:] */

void FUN_10b080e7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x768) = param_3;
  return;
}



/* Entry: 10b080e84; end: 10b080e8b; -[SCSnapCommonLoggingParamsBuilder withFilterVenueYOffset:] */

void FUN_10b080e84(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x770) = param_1;
  return;
}



/* Entry: 10b080e8c; end: 10b080e93; -[SCSnapCommonLoggingParamsBuilder withVenueTapIndex:] */

void FUN_10b080e8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x778) = param_3;
  return;
}



/* Entry: 10b080e94; end: 10b080ecb; -[SCSnapCommonLoggingParamsBuilder withVenueID:] */

long FUN_10b080e94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x780);
  *(undefined8 *)(param_1 + 0x780) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080ecc; end: 10b080f03; -[SCSnapCommonLoggingParamsBuilder withGeofilterVenueID:] */

long FUN_10b080ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x788);
  *(undefined8 *)(param_1 + 0x788) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080f04; end: 10b080f0b; -[SCSnapCommonLoggingParamsBuilder withHasVenueSticker:] */

void FUN_10b080f04(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x790) = param_3;
  return;
}



/* Entry: 10b080f0c; end: 10b080f13; -[SCSnapCommonLoggingParamsBuilder withHasVenueFilter:] */

void FUN_10b080f0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x791) = param_3;
  return;
}



/* Entry: 10b080f14; end: 10b080f1b; -[SCSnapCommonLoggingParamsBuilder withHasBackgroundFilter:] */

void FUN_10b080f14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x792) = param_3;
  return;
}



/* Entry: 10b080f1c; end: 10b080f23; -[SCSnapCommonLoggingParamsBuilder withVenueIsFromSearch:] */

void FUN_10b080f1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x793) = param_3;
  return;
}



/* Entry: 10b080f24; end: 10b080f2b; -[SCSnapCommonLoggingParamsBuilder withVenueDistanceFromSnap:] */

void FUN_10b080f24(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x794) = param_1;
  return;
}



/* Entry: 10b080f2c; end: 10b080f63; -[SCSnapCommonLoggingParamsBuilder withDrawToolColorsHexString:] */

long FUN_10b080f2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x798);
  *(undefined8 *)(param_1 + 0x798) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080f64; end: 10b080f6b; -[SCSnapCommonLoggingParamsBuilder withDrawToolColorChanged:] */

void FUN_10b080f64(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x7a0) = param_3;
  return;
}



/* Entry: 10b080f6c; end: 10b080f73; -[SCSnapCommonLoggingParamsBuilder withDrawToolUndoButtonTapCount:] */

void FUN_10b080f6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x7a8) = param_3;
  return;
}



/* Entry: 10b080f74; end: 10b080f7b; -[SCSnapCommonLoggingParamsBuilder withBrushResizeCount:] */

void FUN_10b080f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x7b0) = param_3;
  return;
}



/* Entry: 10b080f7c; end: 10b080fb3; -[SCSnapCommonLoggingParamsBuilder withBrushStroke:] */

long FUN_10b080f7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x7b8);
  *(undefined8 *)(param_1 + 0x7b8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080fb4; end: 10b080feb; -[SCSnapCommonLoggingParamsBuilder withDrawingStartPositions:] */

long FUN_10b080fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x7c0);
  *(undefined8 *)(param_1 + 0x7c0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b080fec; end: 10b080ff3; -[SCSnapCommonLoggingParamsBuilder withDrawingV2PaletteChangeCount:] */

void FUN_10b080fec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x7c8) = param_3;
  return;
}



/* Entry: 10b080ff4; end: 10b08102b; -[SCSnapCommonLoggingParamsBuilder withDrawingV2PalettesUsed:] */

long FUN_10b080ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 2000);
  *(undefined8 *)(param_1 + 2000) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b08102c; end: 10b081033; -[SCSnapCommonLoggingParamsBuilder withDrawingV2StrawPickCount:] */

void FUN_10b08102c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x7d8) = param_3;
  return;
}



/* Entry: 10b081034; end: 10b08103b; -[SCSnapCommonLoggingParamsBuilder withWithAttachment:] */

void FUN_10b081034(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x7e0) = param_3;
  return;
}



/* Entry: 10b08103c; end: 10b081073; -[SCSnapCommonLoggingParamsBuilder withAudioFilterStyleId:] */

long FUN_10b08103c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x7e8);
  *(undefined8 *)(param_1 + 0x7e8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b081074; end: 10b08107b; -[SCSnapCommonLoggingParamsBuilder withSoundToolEffectChanged:] */

void FUN_10b081074(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x7f0) = param_3;
  return;
}



/* Entry: 10b08107c; end: 10b0810b3; -[SCSnapCommonLoggingParamsBuilder withAudioBitrate:] */

long FUN_10b08107c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x7f8);
  *(undefined8 *)(param_1 + 0x7f8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0810b4; end: 10b0810bb; -[SCSnapCommonLoggingParamsBuilder withActiveMicrophoneMode:] */

void FUN_10b0810b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x800) = param_3;
  return;
}



/* Entry: 10b0810bc; end: 10b0810c3; -[SCSnapCommonLoggingParamsBuilder withPreferredMicrophoneMode:] */

void FUN_10b0810bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x808) = param_3;
  return;
}



/* Entry: 10b0810c4; end: 10b0810cb; -[SCSnapCommonLoggingParamsBuilder withLastPreferredMicrophoneMode:] */

void FUN_10b0810c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x810) = param_3;
  return;
}



/* Entry: 10b0810cc; end: 10b0810d3; -[SCSnapCommonLoggingParamsBuilder withVisualFilterIsSeen:] */

void FUN_10b0810cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x820) = param_3;
  return;
}



/* Entry: 10b0810d4; end: 10b0810db; -[SCSnapCommonLoggingParamsBuilder withGroupStoriesSendCount:] */

void FUN_10b0810d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x828) = param_3;
  return;
}



/* Entry: 10b0810dc; end: 10b0810e3; -[SCSnapCommonLoggingParamsBuilder withAvailableGroupStoriesCount:] */

void FUN_10b0810dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x830) = param_3;
  return;
}



/* Entry: 10b0810e4; end: 10b0810eb; -[SCSnapCommonLoggingParamsBuilder withExpiredGroupStoryPostCount:] */

void FUN_10b0810e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x838) = param_3;
  return;
}



/* Entry: 10b0810ec; end: 10b0810f3; -[SCSnapCommonLoggingParamsBuilder withAvailableExpiredGroupStoryCount:] */

void FUN_10b0810ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x840) = param_3;
  return;
}



/* Entry: 10b0810f4; end: 10b0810fb; -[SCSnapCommonLoggingParamsBuilder withOfficialStoriesSendCount:] */

void FUN_10b0810f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x848) = param_3;
  return;
}



/* Entry: 10b0810fc; end: 10b081103; -[SCSnapCommonLoggingParamsBuilder withSharedStoriesSendCount:] */

void FUN_10b0810fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x850) = param_3;
  return;
}



/* Entry: 10b081104; end: 10b08110b; -[SCSnapCommonLoggingParamsBuilder withViewMoreStoriesTapCount:] */

void FUN_10b081104(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x858) = param_3;
  return;
}



/* Entry: 10b08110c; end: 10b081143; -[SCSnapCommonLoggingParamsBuilder withReshareItemId:] */

long FUN_10b08110c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x860);
  *(undefined8 *)(param_1 + 0x860) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b081144; end: 10b08114b; -[SCSnapCommonLoggingParamsBuilder withFilterStackingButtonAddCount:] */

void FUN_10b081144(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x868) = param_3;
  return;
}



/* Entry: 10b08114c; end: 10b081153; -[SCSnapCommonLoggingParamsBuilder withFilterStackingButtonRemoveCount:] */

void FUN_10b08114c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x870) = param_3;
  return;
}



/* Entry: 10b081154; end: 10b08118b; -[SCSnapCommonLoggingParamsBuilder withAutoCreativeFilterId:] */

long FUN_10b081154(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x878);
  *(undefined8 *)(param_1 + 0x878) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b08118c; end: 10b081193; -[SCSnapCommonLoggingParamsBuilder withWithFilterPeeking:] */

void FUN_10b08118c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x880) = param_3;
  return;
}



/* Entry: 10b081194; end: 10b0811cb; -[SCSnapCommonLoggingParamsBuilder withEntryId:] */

long FUN_10b081194(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x888);
  *(undefined8 *)(param_1 + 0x888) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0811cc; end: 10b081203; -[SCSnapCommonLoggingParamsBuilder withSnapId:] */

long FUN_10b0811cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x890);
  *(undefined8 *)(param_1 + 0x890) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b081204; end: 10b08120b; -[SCSnapCommonLoggingParamsBuilder withMediaFormat:] */

void FUN_10b081204(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x898) = param_3;
  return;
}



/* Entry: 10b08120c; end: 10b081243; -[SCSnapCommonLoggingParamsBuilder withSpectaclesContentId:] */

long FUN_10b08120c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x8a0);
  *(undefined8 *)(param_1 + 0x8a0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b081244; end: 10b08124b; -[SCSnapCommonLoggingParamsBuilder withPreviewExitType:] */

void FUN_10b081244(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x8a8) = param_3;
  return;
}



/* Entry: 10b08124c; end: 10b081253; -[SCSnapCommonLoggingParamsBuilder withShutterSpeed:] */

void FUN_10b08124c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x8b0) = param_1;
  return;
}



/* Entry: 10b081254; end: 10b08125b; -[SCSnapCommonLoggingParamsBuilder withISO:] */

void FUN_10b081254(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x8b8) = param_1;
  return;
}



/* Entry: 10b08125c; end: 10b081263; -[SCSnapCommonLoggingParamsBuilder withAperture:] */

void FUN_10b08125c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x8c0) = param_1;
  return;
}



/* Entry: 10b081264; end: 10b08126b; -[SCSnapCommonLoggingParamsBuilder withBrightness:] */

void FUN_10b081264(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x8c8) = param_1;
  return;
}



/* Entry: 10b08126c; end: 10b081273; -[SCSnapCommonLoggingParamsBuilder withWithAdjustingExposure:] */

void FUN_10b08126c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x8d0) = param_3;
  return;
}



/* Entry: 10b081274; end: 10b08127b; -[SCSnapCommonLoggingParamsBuilder withWithAdjustingFocus:] */

void FUN_10b081274(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x8d1) = param_3;
  return;
}



/* Entry: 10b08127c; end: 10b081283; -[SCSnapCommonLoggingParamsBuilder withWithSendToPagePresentedFromPreview:] */

void FUN_10b08127c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x8d2) = param_3;
  return;
}



/* Entry: 10b081284; end: 10b08128b; -[SCSnapCommonLoggingParamsBuilder withFromSendTo:] */

void FUN_10b081284(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x8d3) = param_3;
  return;
}



/* Entry: 10b08128c; end: 10b0812c3; -[SCSnapCommonLoggingParamsBuilder withTopsnapAdId:] */

long FUN_10b08128c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x8d8);
  *(undefined8 *)(param_1 + 0x8d8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0812c4; end: 10b0812fb; -[SCSnapCommonLoggingParamsBuilder withTopsnapAdRequestClientId:] */

long FUN_10b0812c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x8e0);
  *(undefined8 *)(param_1 + 0x8e0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0812fc; end: 10b081303; -[SCSnapCommonLoggingParamsBuilder withFilterSource:] */

void FUN_10b0812fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x8e8) = param_3;
  return;
}



/* Entry: 10b081304; end: 10b08130b; -[SCSnapCommonLoggingParamsBuilder withWithSnapReply:] */

void FUN_10b081304(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x8f0) = param_3;
  return;
}


