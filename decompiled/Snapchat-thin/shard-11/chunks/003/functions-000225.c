/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10843bd6c; end: 10843bd73; -[EphemeralMedia quotedStickerType] */

undefined8 FUN_10843bd6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10843bd74; end: 10843bd7b; -[EphemeralMedia setQuotedStickerType:] */

void FUN_10843bd74(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10843bd7c; end: 10843bd83; -[EphemeralMedia repostedMentionUserId] */

undefined8 FUN_10843bd7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10843bd84; end: 10843bd8b; -[EphemeralMedia setRepostedMentionUserId:] */

void FUN_10843bd84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10843bd8c; end: 10843bd93; -[EphemeralMedia shareYoursId] */

undefined8 FUN_10843bd8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10843bd94; end: 10843bd9b; -[EphemeralMedia setShareYoursId:] */

void FUN_10843bd94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10843bd9c; end: 10843bda3; -[EphemeralMedia mediaOrigins] */

undefined8 FUN_10843bd9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10843bda4; end: 10843bdd3; -[EphemeralMedia setMediaOrigins:] */

void FUN_10843bda4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10843bdd4; end: 10843bddb; -[EphemeralMedia _id] */

undefined8 FUN_10843bdd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10843bddc; end: 10843be0b; -[EphemeralMedia set_id:] */

void FUN_10843bddc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10843be0c; end: 10843be13; -[EphemeralMedia captionText] */

undefined8 FUN_10843be0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10843be14; end: 10843be43; -[EphemeralMedia setCaptionText:] */

void FUN_10843be14(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10843be44; end: 10843be4b; -[EphemeralMedia attachmentUrl] */

undefined8 FUN_10843be44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10843be4c; end: 10843be53; -[EphemeralMedia setAttachmentUrl:] */

void FUN_10843be4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10843be54; end: 10843be5b; -[EphemeralMedia setAnimatedSnapType:] */

void FUN_10843be54(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 10843be5c; end: 10843be63; -[EphemeralMedia clientId] */

undefined8 FUN_10843be5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10843be64; end: 10843be93; -[EphemeralMedia setClientId:] */

void FUN_10843be64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843be94; end: 10843be9b; -[EphemeralMedia venueId] */

undefined8 FUN_10843be94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10843be9c; end: 10843bea3; -[EphemeralMedia setVenueId:] */

void FUN_10843be9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10843bea4; end: 10843beab; -[EphemeralMedia ephemeralMediaState] */

undefined8 FUN_10843bea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10843beac; end: 10843beb3; -[EphemeralMedia setEphemeralMediaState:] */

void FUN_10843beac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 10843beb4; end: 10843bebb; -[EphemeralMedia firstPostDate] */

undefined8 FUN_10843beb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10843bebc; end: 10843beeb; -[EphemeralMedia setFirstPostDate:] */

void FUN_10843bebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843beec; end: 10843bef3; -[EphemeralMedia geoFilterId] */

undefined8 FUN_10843beec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10843bef4; end: 10843bf23; -[EphemeralMedia setGeoFilterId:] */

void FUN_10843bef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843bf24; end: 10843bf2b; -[EphemeralMedia encryptedGeoData] */

undefined8 FUN_10843bf24(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10843bf2c; end: 10843bf5b; -[EphemeralMedia setEncryptedGeoData:] */

void FUN_10843bf2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843bf5c; end: 10843bf63; -[EphemeralMedia storyFilterId] */

undefined8 FUN_10843bf5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10843bf64; end: 10843bf93; -[EphemeralMedia setStoryFilterId:] */

void FUN_10843bf64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843bf94; end: 10843bf9b; -[EphemeralMedia storyLensId] */

undefined8 FUN_10843bf94(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10843bf9c; end: 10843bfcb; -[EphemeralMedia setStoryLensId:] */

void FUN_10843bf9c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10843bfcc; end: 10843bfd3; -[EphemeralMedia postLocation] */

undefined8 FUN_10843bfcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10843bfd4; end: 10843c003; -[EphemeralMedia setPostLocation:] */

void FUN_10843bfd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843c004; end: 10843c00b; -[EphemeralMedia captureLocation] */

undefined8 FUN_10843c004(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10843c00c; end: 10843c03b; -[EphemeralMedia setCaptureLocation:] */

void FUN_10843c00c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843c03c; end: 10843c043; -[EphemeralMedia placeID] */

undefined8 FUN_10843c03c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10843c044; end: 10843c04b; -[EphemeralMedia setPlaceID:] */

void FUN_10843c044(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10843c04c; end: 10843c053; -[EphemeralMedia time] */

undefined8 FUN_10843c04c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10843c054; end: 10843c05b; -[EphemeralMedia infiniteDuration] */

undefined1 FUN_10843c054(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 10843c05c; end: 10843c063; -[EphemeralMedia setInfiniteDuration:] */

void FUN_10843c05c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10843c064; end: 10843c06b; -[EphemeralMedia type] */

undefined8 FUN_10843c064(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 10843c06c; end: 10843c073; -[EphemeralMedia setType:] */

void FUN_10843c06c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  return;
}



/* Entry: 10843c074; end: 10843c07b; -[EphemeralMedia videoFilter] */

undefined8 FUN_10843c074(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10843c07c; end: 10843c083; -[EphemeralMedia videoTimeSoFar] */

undefined8 FUN_10843c07c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 10843c084; end: 10843c08b; -[EphemeralMedia setVideoTimeSoFar:] */

void FUN_10843c084(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xf0) = param_1;
  return;
}



/* Entry: 10843c08c; end: 10843c093; -[EphemeralMedia viewedTimestamp] */

undefined8 FUN_10843c08c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 10843c094; end: 10843c0c3; -[EphemeralMedia setViewedTimestamp:] */

void FUN_10843c094(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843c0c4; end: 10843c0cb; -[EphemeralMedia cameraFrontFacing] */

undefined1 FUN_10843c0c4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 10843c0cc; end: 10843c0d3; -[EphemeralMedia setCameraFrontFacing:] */

void FUN_10843c0cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x19) = param_3;
  return;
}



/* Entry: 10843c0d4; end: 10843c0db; -[EphemeralMedia orientation] */

undefined8 FUN_10843c0d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 10843c0dc; end: 10843c0e3; -[EphemeralMedia setOrientation:] */

void FUN_10843c0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x100) = param_3;
  return;
}



/* Entry: 10843c0e4; end: 10843c0eb; -[EphemeralMedia ephemeralMediaKey] */

undefined8 FUN_10843c0e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 10843c0ec; end: 10843c0f3; -[EphemeralMedia ephemeralMediaIv] */

undefined8 FUN_10843c0ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 10843c0f4; end: 10843c0fb; -[EphemeralMedia gallerySnapId] */

undefined8 FUN_10843c0f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 10843c0fc; end: 10843c12b; -[EphemeralMedia setUpdateAnnouncer:] */

void FUN_10843c0fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843c12c; end: 10843c133; -[EphemeralMedia forceTranscodeOnServer] */

undefined1 FUN_10843c12c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



/* Entry: 10843c134; end: 10843c13b; -[EphemeralMedia setForceTranscodeOnServer:] */

void FUN_10843c134(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1a) = param_3;
  return;
}



/* Entry: 10843c13c; end: 10843c143; -[EphemeralMedia crossPostToStoryInfo] */

undefined8 FUN_10843c13c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 10843c144; end: 10843c173; -[EphemeralMedia setCrossPostToStoryInfo:] */

void FUN_10843c144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843c174; end: 10843c17b; -[EphemeralMedia mediaChecksum] */

undefined8 FUN_10843c174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 10843c17c; end: 10843c1ab; -[EphemeralMedia setMediaChecksum:] */

void FUN_10843c17c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843c1ac; end: 10843c1b3; -[EphemeralMedia setRotationLocked:] */

void FUN_10843c1ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1b) = param_3;
  return;
}



/* Entry: 10843c1b4; end: 10843c1bb; -[EphemeralMedia contextHint] */

undefined8 FUN_10843c1b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 10843c1bc; end: 10843c1c3; -[EphemeralMedia setContextHint:] */

void FUN_10843c1bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10843c1c4; end: 10843c1cb; -[EphemeralMedia notifiedUsernames] */

undefined8 FUN_10843c1c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 10843c1cc; end: 10843c1fb; -[EphemeralMedia setNotifiedUsernames:] */

void FUN_10843c1cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843c1fc; end: 10843c203; -[EphemeralMedia shouldIncludeLocationData] */

undefined1 FUN_10843c1fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



/* Entry: 10843c204; end: 10843c20b; -[EphemeralMedia setShouldIncludeLocationData:] */

void FUN_10843c204(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1c) = param_3;
  return;
}



/* Entry: 10843c20c; end: 10843c213; -[EphemeralMedia multiSnapMetadata] */

undefined8 FUN_10843c20c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 10843c214; end: 10843c243; -[EphemeralMedia setMultiSnapMetadata:] */

void FUN_10843c214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843c244; end: 10843c24b; -[EphemeralMedia storySnapClientMetadata] */

undefined8 FUN_10843c244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 10843c24c; end: 10843c253; -[EphemeralMedia setStorySnapClientMetadata:] */

void FUN_10843c24c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10843c254; end: 10843c25b; -[EphemeralMedia lensMetadata] */

undefined8 FUN_10843c254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 10843c25c; end: 10843c263; -[EphemeralMedia setLensMetadata:] */

void FUN_10843c25c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10843c264; end: 10843c26b; -[EphemeralMedia unlockablesSnapInfo] */

undefined8 FUN_10843c264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 10843c26c; end: 10843c273; -[EphemeralMedia setUnlockablesSnapInfo:] */

void FUN_10843c26c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10843c274; end: 10843c27b; -[EphemeralMedia adsTracking] */

undefined8 FUN_10843c274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 10843c27c; end: 10843c2ab; -[EphemeralMedia setAdsTracking:] */

void FUN_10843c27c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843c2ac; end: 10843c2b3; -[EphemeralMedia snapSource] */

undefined8 FUN_10843c2ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 10843c2b4; end: 10843c2bb; -[EphemeralMedia setSnapSource:] */

void FUN_10843c2b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x170) = param_3;
  return;
}



/* Entry: 10843c2bc; end: 10843c2c3; -[EphemeralMedia cameraDeepLinkMetadata] */

undefined8 FUN_10843c2bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 10843c2c4; end: 10843c2cb; -[EphemeralMedia setCameraDeepLinkMetadata:] */

void FUN_10843c2c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10843c2cc; end: 10843c2d3; -[EphemeralMedia quotedUserId] */

undefined8 FUN_10843c2cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 10843c2d4; end: 10843c2db; -[EphemeralMedia setQuotedUserId:] */

void FUN_10843c2d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10843c2dc; end: 10843c2e3; -[EphemeralMedia externalContent] */

undefined8 FUN_10843c2dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 10843c2e4; end: 10843c313; -[EphemeralMedia setExternalContent:] */

void FUN_10843c2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843c314; end: 10843c31b; -[EphemeralMedia localPlatformData] */

undefined8 FUN_10843c314(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



/* Entry: 10843c31c; end: 10843c323; -[EphemeralMedia setLocalPlatformData:] */

void FUN_10843c31c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10843c324; end: 10843c32b; -[EphemeralMedia secretShareLoggingParams] */

undefined8 FUN_10843c324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 10843c32c; end: 10843c35b; -[EphemeralMedia setSecretShareLoggingParams:] */

void FUN_10843c32c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843c35c; end: 10843c363; -[EphemeralMedia shareLoggingParams] */

undefined8 FUN_10843c35c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Entry: 10843c364; end: 10843c393; -[EphemeralMedia setShareLoggingParams:] */

void FUN_10843c364(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843c394; end: 10843c3c3; -[EphemeralMedia setEventLoggingParams:] */

void FUN_10843c394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843c3c4; end: 10843c3cb; -[EphemeralMedia encryptedVenueId] */

undefined8 FUN_10843c3c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b0);
}



/* Entry: 10843c3cc; end: 10843c3d3; -[EphemeralMedia setEncryptedVenueId:] */

void FUN_10843c3cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10843c3d4; end: 10843c607; -[EphemeralMedia .cxx_destruct] */

void FUN_10843c3d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10843c608; end: 10843c67b; -[SCEphemeralMediaAdapter initWithEphemeralMedia:] */

undefined1 * FUN_10843c608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc868;
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



/* Entry: 10843c67c; end: 10843c683; -[SCEphemeralMediaAdapter setType:] */

void FUN_10843c67c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21acd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setType__112664558);
  return;
}



/* Entry: 10843c684; end: 10843c68b; -[SCEphemeralMediaAdapter type] */

void FUN_10843c684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_type_11267d188);
  return;
}



/* Entry: 10843c68c; end: 10843c693; -[SCEphemeralMediaAdapter commonLoggingParamsBuilder] */

void FUN_10843c68c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf42a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_commonLoggingParamsBuilder_1125ae428);
  return;
}


