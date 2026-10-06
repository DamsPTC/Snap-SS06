/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cbaf58; end: 108cbaf5f; -[SCPreviewConfiguration ctLensState] */

undefined8 FUN_108cbaf58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x270);
}



/* Entry: 108cbaf60; end: 108cbaf8f; -[SCPreviewConfiguration setCtLensState:] */

void FUN_108cbaf60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x270) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbaf90; end: 108cbaf97; -[SCPreviewConfiguration drawingMetadata] */

undefined8 FUN_108cbaf90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x278);
}



/* Entry: 108cbaf98; end: 108cbafc7; -[SCPreviewConfiguration setDrawingMetadata:] */

void FUN_108cbaf98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x278) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbafc8; end: 108cbafcf; -[SCPreviewConfiguration stickersState] */

undefined8 FUN_108cbafc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x280);
}



/* Entry: 108cbafd0; end: 108cbafd7; -[SCPreviewConfiguration setStickersState:] */

void FUN_108cbafd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cbafd8; end: 108cbafdf; -[SCPreviewConfiguration infoStickerDataProvider] */

undefined8 FUN_108cbafd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x288);
}



/* Entry: 108cbafe0; end: 108cbb00f; -[SCPreviewConfiguration setInfoStickerDataProvider:] */

void FUN_108cbafe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x288);
  *(undefined8 *)(param_1 + 0x288) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb010; end: 108cbb017; -[SCPreviewConfiguration lensPreviewAction] */

undefined8 FUN_108cbb010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x298);
}



/* Entry: 108cbb018; end: 108cbb047; -[SCPreviewConfiguration setLensPreviewAction:] */

void FUN_108cbb018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x298) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb048; end: 108cbb04f; -[SCPreviewConfiguration minimumScreenBrightness] */

undefined8 FUN_108cbb048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2a0);
}



/* Entry: 108cbb050; end: 108cbb07f; -[SCPreviewConfiguration setMinimumScreenBrightness:] */

void FUN_108cbb050(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x2a0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb080; end: 108cbb087; -[SCPreviewConfiguration targetScreenBrightness] */

undefined8 FUN_108cbb080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2a8);
}



/* Entry: 108cbb088; end: 108cbb0b7; -[SCPreviewConfiguration setTargetScreenBrightness:] */

void FUN_108cbb088(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2a8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb0b8; end: 108cbb0bf; -[SCPreviewConfiguration originalScreenBrightness] */

undefined8 FUN_108cbb0b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2b0);
}



/* Entry: 108cbb0c0; end: 108cbb0ef; -[SCPreviewConfiguration setOriginalScreenBrightness:] */

void FUN_108cbb0c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2b0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb0f0; end: 108cbb0f7; -[SCPreviewConfiguration discoverSharedMessageBlob] */

undefined8 FUN_108cbb0f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2b8);
}



/* Entry: 108cbb0f8; end: 108cbb127; -[SCPreviewConfiguration setDiscoverSharedMessageBlob:] */

void FUN_108cbb0f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2b8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb128; end: 108cbb12f; -[SCPreviewConfiguration setSavingDisabled:] */

void FUN_108cbb128(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa4) = param_3;
  return;
}



/* Entry: 108cbb130; end: 108cbb137; -[SCPreviewConfiguration savingToSnapchatGalleryDisabled] */

undefined1 FUN_108cbb130(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa5);
}



/* Entry: 108cbb138; end: 108cbb13f; -[SCPreviewConfiguration setSavingToSnapchatGalleryDisabled:] */

void FUN_108cbb138(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa5) = param_3;
  return;
}



/* Entry: 108cbb140; end: 108cbb147; -[SCPreviewConfiguration isGamesViewSnap] */

undefined1 FUN_108cbb140(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa6);
}



/* Entry: 108cbb148; end: 108cbb14f; -[SCPreviewConfiguration setIsGamesViewSnap:] */

void FUN_108cbb148(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa6) = param_3;
  return;
}



/* Entry: 108cbb150; end: 108cbb157; -[SCPreviewConfiguration reactionCameraEnabled] */

undefined1 FUN_108cbb150(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa7);
}



/* Entry: 108cbb158; end: 108cbb15f; -[SCPreviewConfiguration setReactionCameraEnabled:] */

void FUN_108cbb158(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa7) = param_3;
  return;
}



/* Entry: 108cbb160; end: 108cbb167; -[SCPreviewConfiguration contextSessionId] */

undefined8 FUN_108cbb160(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2c0);
}



/* Entry: 108cbb168; end: 108cbb16f; -[SCPreviewConfiguration setContextSessionId:] */

void FUN_108cbb168(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cbb170; end: 108cbb177; -[SCPreviewConfiguration isWebLensSnap] */

undefined1 FUN_108cbb170(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa8);
}



/* Entry: 108cbb178; end: 108cbb17f; -[SCPreviewConfiguration setIsWebLensSnap:] */

void FUN_108cbb178(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 108cbb180; end: 108cbb187; -[SCPreviewConfiguration liveCameraLensConfiguration] */

undefined8 FUN_108cbb180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2c8);
}



/* Entry: 108cbb188; end: 108cbb18f; -[SCPreviewConfiguration lensAssetsUploadInfo] */

undefined8 FUN_108cbb188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2d0);
}



/* Entry: 108cbb190; end: 108cbb1bf; -[SCPreviewConfiguration setLensAssetsUploadInfo:] */

void FUN_108cbb190(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2d0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb1c0; end: 108cbb1c7; -[SCPreviewConfiguration lensUsesCameraRoll] */

undefined1 FUN_108cbb1c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa9);
}



/* Entry: 108cbb1c8; end: 108cbb1cf; -[SCPreviewConfiguration setLensUsesCameraRoll:] */

void FUN_108cbb1c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa9) = param_3;
  return;
}



/* Entry: 108cbb1d0; end: 108cbb1d7; -[SCPreviewConfiguration faceCount] */

undefined8 FUN_108cbb1d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2d8);
}



/* Entry: 108cbb1d8; end: 108cbb1df; -[SCPreviewConfiguration setFaceCount:] */

void FUN_108cbb1d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2d8) = param_3;
  return;
}



/* Entry: 108cbb1e0; end: 108cbb1e7; -[SCPreviewConfiguration lensAssetsUploadInfoFuture] */

undefined8 FUN_108cbb1e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2e0);
}



/* Entry: 108cbb1e8; end: 108cbb1ef; -[SCPreviewConfiguration previewLensConfiguration] */

undefined8 FUN_108cbb1e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2e8);
}



/* Entry: 108cbb1f0; end: 108cbb21f; -[SCPreviewConfiguration setPreviewLensConfiguration:] */

void FUN_108cbb1f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2e8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb220; end: 108cbb227; -[SCPreviewConfiguration previewLensAppliedImage] */

undefined8 FUN_108cbb220(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2f0);
}



/* Entry: 108cbb228; end: 108cbb257; -[SCPreviewConfiguration setPreviewLensAppliedImage:] */

void FUN_108cbb228(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2f0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb258; end: 108cbb25f; -[SCPreviewConfiguration recordingMetadata] */

undefined8 FUN_108cbb258(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2f8);
}



/* Entry: 108cbb260; end: 108cbb267; -[SCPreviewConfiguration recordingDeviceMotionData] */

undefined8 FUN_108cbb260(long param_1)

{
  return *(undefined8 *)(param_1 + 0x300);
}



/* Entry: 108cbb268; end: 108cbb26f; -[SCPreviewConfiguration recordingRawAccelerometerData] */

undefined8 FUN_108cbb268(long param_1)

{
  return *(undefined8 *)(param_1 + 0x308);
}



/* Entry: 108cbb270; end: 108cbb277; -[SCPreviewConfiguration recordingRawGyroData] */

undefined8 FUN_108cbb270(long param_1)

{
  return *(undefined8 *)(param_1 + 0x310);
}



/* Entry: 108cbb278; end: 108cbb27f; -[SCPreviewConfiguration hasBakedInSpectaclesLens] */

undefined1 FUN_108cbb278(long param_1)

{
  return *(undefined1 *)(param_1 + 0xaa);
}



/* Entry: 108cbb280; end: 108cbb287; -[SCPreviewConfiguration setHasBakedInSpectaclesLens:] */

void FUN_108cbb280(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xaa) = param_3;
  return;
}



/* Entry: 108cbb288; end: 108cbb28f; -[SCPreviewConfiguration spectaclesRectificationConfig] */

undefined8 FUN_108cbb288(long param_1)

{
  return *(undefined8 *)(param_1 + 0x318);
}



/* Entry: 108cbb290; end: 108cbb2bf; -[SCPreviewConfiguration setSpectaclesRectificationConfig:] */

void FUN_108cbb290(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x318);
  *(undefined8 *)(param_1 + 0x318) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb2c0; end: 108cbb2c7; -[SCPreviewConfiguration snapchatGalleryConfiguration] */

undefined8 FUN_108cbb2c0(long param_1)

{
  return *(undefined8 *)(param_1 + 800);
}



/* Entry: 108cbb2c8; end: 108cbb2f7; -[SCPreviewConfiguration setSnapchatGalleryConfiguration:] */

void FUN_108cbb2c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 800);
  *(undefined8 *)(param_1 + 800) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb2f8; end: 108cbb2ff; -[SCPreviewConfiguration shareURL] */

undefined8 FUN_108cbb2f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x328);
}



/* Entry: 108cbb300; end: 108cbb307; -[SCPreviewConfiguration setShareURL:] */

void FUN_108cbb300(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cbb308; end: 108cbb30f; -[SCPreviewConfiguration creationTime] */

undefined8 FUN_108cbb308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x330);
}



/* Entry: 108cbb310; end: 108cbb317; -[SCPreviewConfiguration contextFilteredImage] */

undefined8 FUN_108cbb310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x338);
}



/* Entry: 108cbb318; end: 108cbb347; -[SCPreviewConfiguration setContextFilteredImage:] */

void FUN_108cbb318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x338);
  *(undefined8 *)(param_1 + 0x338) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb348; end: 108cbb34f; -[SCPreviewConfiguration stylizedImage] */

undefined8 FUN_108cbb348(long param_1)

{
  return *(undefined8 *)(param_1 + 0x340);
}



/* Entry: 108cbb350; end: 108cbb37f; -[SCPreviewConfiguration setStylizedImage:] */

void FUN_108cbb350(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x340);
  *(undefined8 *)(param_1 + 0x340) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb380; end: 108cbb387; -[SCPreviewConfiguration snapCraftStyleId] */

undefined8 FUN_108cbb380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x348);
}



/* Entry: 108cbb388; end: 108cbb38f; -[SCPreviewConfiguration setSnapCraftStyleId:] */

void FUN_108cbb388(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cbb390; end: 108cbb397; -[SCPreviewConfiguration snapAttachmentUrl] */

undefined8 FUN_108cbb390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x350);
}



/* Entry: 108cbb398; end: 108cbb39f; -[SCPreviewConfiguration setSnapAttachmentUrl:] */

void FUN_108cbb398(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cbb3a0; end: 108cbb3a7; -[SCPreviewConfiguration fromMischief] */

undefined1 FUN_108cbb3a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xab);
}



/* Entry: 108cbb3a8; end: 108cbb3af; -[SCPreviewConfiguration shazamSongTitle] */

undefined8 FUN_108cbb3a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x358);
}



/* Entry: 108cbb3b0; end: 108cbb3b7; -[SCPreviewConfiguration setShazamSongTitle:] */

void FUN_108cbb3b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cbb3b8; end: 108cbb3bf; -[SCPreviewConfiguration shazamArtistName] */

undefined8 FUN_108cbb3b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x360);
}



/* Entry: 108cbb3c0; end: 108cbb3c7; -[SCPreviewConfiguration setShazamArtistName:] */

void FUN_108cbb3c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cbb3c8; end: 108cbb3cf; -[SCPreviewConfiguration shazamSource] */

undefined8 FUN_108cbb3c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x368);
}



/* Entry: 108cbb3d0; end: 108cbb3d7; -[SCPreviewConfiguration setShazamSource:] */

void FUN_108cbb3d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x368) = param_3;
  return;
}



/* Entry: 108cbb3d8; end: 108cbb3df; -[SCPreviewConfiguration multiSnapConfiguration] */

undefined8 FUN_108cbb3d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x370);
}



/* Entry: 108cbb3e0; end: 108cbb3e7; -[SCPreviewConfiguration timelineConfiguration] */

undefined8 FUN_108cbb3e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x378);
}



/* Entry: 108cbb3e8; end: 108cbb3ef; -[SCPreviewConfiguration addSnapConfiguration] */

undefined8 FUN_108cbb3e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x380);
}



/* Entry: 108cbb3f0; end: 108cbb3f7; -[SCPreviewConfiguration multiSnapConfigurationFuture] */

undefined8 FUN_108cbb3f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x388);
}



/* Entry: 108cbb3f8; end: 108cbb3ff; -[SCPreviewConfiguration scanInPreviewEnabled] */

undefined1 FUN_108cbb3f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xac);
}



/* Entry: 108cbb400; end: 108cbb407; -[SCPreviewConfiguration legacyAdvancedEdit] */

undefined1 FUN_108cbb400(long param_1)

{
  return *(undefined1 *)(param_1 + 0xad);
}



/* Entry: 108cbb408; end: 108cbb40f; -[SCPreviewConfiguration setLegacyAdvancedEdit:] */

void FUN_108cbb408(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xad) = param_3;
  return;
}



/* Entry: 108cbb410; end: 108cbb417; -[SCPreviewConfiguration shouldOpenSnapEditorOnPreviewExit] */

undefined1 FUN_108cbb410(long param_1)

{
  return *(undefined1 *)(param_1 + 0xae);
}



/* Entry: 108cbb418; end: 108cbb41f; -[SCPreviewConfiguration setShouldOpenSnapEditorOnPreviewExit:] */

void FUN_108cbb418(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xae) = param_3;
  return;
}



/* Entry: 108cbb420; end: 108cbb427; -[SCPreviewConfiguration preselectedPluginType] */

undefined8 FUN_108cbb420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x390);
}



/* Entry: 108cbb428; end: 108cbb42f; -[SCPreviewConfiguration setPreselectedPluginType:] */

void FUN_108cbb428(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cbb430; end: 108cbb437; -[SCPreviewConfiguration transitionSnapshotView] */

undefined8 FUN_108cbb430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x398);
}



/* Entry: 108cbb438; end: 108cbb467; -[SCPreviewConfiguration setTransitionSnapshotView:] */

void FUN_108cbb438(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x398);
  *(undefined8 *)(param_1 + 0x398) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb468; end: 108cbb46f; -[SCPreviewConfiguration bounceVideoOffset] */

undefined8 FUN_108cbb468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3a0);
}



/* Entry: 108cbb470; end: 108cbb49f; -[SCPreviewConfiguration setBounceVideoOffset:] */

void FUN_108cbb470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x3a0);
  *(undefined8 *)(param_1 + 0x3a0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb4a0; end: 108cbb4a7; -[SCPreviewConfiguration scanSessionID] */

undefined8 FUN_108cbb4a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3a8);
}



/* Entry: 108cbb4a8; end: 108cbb4d7; -[SCPreviewConfiguration setScanSessionID:] */

void FUN_108cbb4a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x3a8);
  *(undefined8 *)(param_1 + 0x3a8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb4d8; end: 108cbb4df; -[SCPreviewConfiguration cameraShortcutID] */

undefined8 FUN_108cbb4d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3b0);
}



/* Entry: 108cbb4e0; end: 108cbb50f; -[SCPreviewConfiguration setCameraShortcutID:] */

void FUN_108cbb4e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x3b0);
  *(undefined8 *)(param_1 + 0x3b0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb510; end: 108cbb517; -[SCPreviewConfiguration frameHealthChecker] */

undefined8 FUN_108cbb510(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3b8);
}



/* Entry: 108cbb518; end: 108cbb51f; -[SCPreviewConfiguration deepLinkMetadata] */

undefined8 FUN_108cbb518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3c0);
}



/* Entry: 108cbb520; end: 108cbb527; -[SCPreviewConfiguration quickStickerViewProvider] */

undefined8 FUN_108cbb520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3c8);
}



/* Entry: 108cbb528; end: 108cbb557; -[SCPreviewConfiguration setQuickStickerViewProvider:] */

void FUN_108cbb528(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x3c8);
  *(undefined8 *)(param_1 + 0x3c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb558; end: 108cbb563; -[SCPreviewConfiguration quickStickerCenter] */

undefined1  [16] FUN_108cbb558(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x490);
}



/* Entry: 108cbb564; end: 108cbb56b; -[SCPreviewConfiguration prefilledChatMessageInSendTo] */

undefined8 FUN_108cbb564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3d0);
}



/* Entry: 108cbb56c; end: 108cbb59b; -[SCPreviewConfiguration setPrefilledChatMessageInSendTo:] */

void FUN_108cbb56c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x3d0);
  *(undefined8 *)(param_1 + 0x3d0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb59c; end: 108cbb5a3; -[SCPreviewConfiguration quotedMessageId] */

undefined8 FUN_108cbb59c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3d8);
}



/* Entry: 108cbb5a4; end: 108cbb5ab; -[SCPreviewConfiguration cognacAppAttachment] */

undefined8 FUN_108cbb5a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3e0);
}



/* Entry: 108cbb5ac; end: 108cbb5b3; -[SCPreviewConfiguration musicPickerSelection] */

undefined8 FUN_108cbb5ac(long param_1)

{
  return *(undefined8 *)(param_1 + 1000);
}



/* Entry: 108cbb5b4; end: 108cbb5e3; -[SCPreviewConfiguration setMusicPickerSelection:] */

void FUN_108cbb5b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 1000);
  *(undefined8 *)(param_1 + 1000) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cbb5e4; end: 108cbb5eb; -[SCPreviewConfiguration musicSessionId] */

undefined8 FUN_108cbb5e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3f0);
}


