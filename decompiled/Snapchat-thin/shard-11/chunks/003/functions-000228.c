/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108449d0c; end: 108449d13; -[SCSnapCommonLoggingParameters setWithGroupCustomStory:] */

void FUN_108449d0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x15) = param_3;
  return;
}



/* Entry: 108449d14; end: 108449d1b; -[SCSnapCommonLoggingParameters withStoryPost] */

undefined1 FUN_108449d14(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



/* Entry: 108449d1c; end: 108449d23; -[SCSnapCommonLoggingParameters setWithStoryPost:] */

void FUN_108449d1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x16) = param_3;
  return;
}



/* Entry: 108449d24; end: 108449d2b; -[SCSnapCommonLoggingParameters storyBusinessIds] */

undefined8 FUN_108449d24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108449d2c; end: 108449d33; -[SCSnapCommonLoggingParameters setStoryBusinessIds:] */

void FUN_108449d2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108449d34; end: 108449d3b; -[SCSnapCommonLoggingParameters withMyStoryPrivacyOverride] */

undefined8 FUN_108449d34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 108449d3c; end: 108449d6b; -[SCSnapCommonLoggingParameters setWithMyStoryPrivacyOverride:] */

void FUN_108449d3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108449d6c; end: 108449d73; -[SCSnapCommonLoggingParameters withOurStory] */

undefined1 FUN_108449d6c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x17);
}



/* Entry: 108449d74; end: 108449d7b; -[SCSnapCommonLoggingParameters setWithOurStory:] */

void FUN_108449d74(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x17) = param_3;
  return;
}



/* Entry: 108449d7c; end: 108449d83; -[SCSnapCommonLoggingParameters withSnap] */

undefined1 FUN_108449d7c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 108449d84; end: 108449d8b; -[SCSnapCommonLoggingParameters setWithSnap:] */

void FUN_108449d84(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108449d8c; end: 108449d93; -[SCSnapCommonLoggingParameters withLocationEnabled] */

undefined1 FUN_108449d8c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 108449d94; end: 108449d9b; -[SCSnapCommonLoggingParameters setWithLocationEnabled:] */

void FUN_108449d94(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x19) = param_3;
  return;
}



/* Entry: 108449d9c; end: 108449da3; -[SCSnapCommonLoggingParameters fromPreview] */

undefined1 FUN_108449d9c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



/* Entry: 108449da4; end: 108449dab; -[SCSnapCommonLoggingParameters setFromPreview:] */

void FUN_108449da4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1a) = param_3;
  return;
}



/* Entry: 108449dac; end: 108449db3; -[SCSnapCommonLoggingParameters savedToGalleryByScreenshot] */

undefined1 FUN_108449dac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b);
}



/* Entry: 108449db4; end: 108449dbb; -[SCSnapCommonLoggingParameters setSavedToGalleryByScreenshot:] */

void FUN_108449db4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1b) = param_3;
  return;
}



/* Entry: 108449dbc; end: 108449dc3; -[SCSnapCommonLoggingParameters savedToGalleryByScreenRecording] */

undefined1 FUN_108449dbc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



/* Entry: 108449dc4; end: 108449dcb; -[SCSnapCommonLoggingParameters setSavedToGalleryByScreenRecording:] */

void FUN_108449dc4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1c) = param_3;
  return;
}



/* Entry: 108449dcc; end: 108449dd3; -[SCSnapCommonLoggingParameters reply] */

undefined1 FUN_108449dcc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1d);
}



/* Entry: 108449dd4; end: 108449ddb; -[SCSnapCommonLoggingParameters setReply:] */

void FUN_108449dd4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1d) = param_3;
  return;
}



/* Entry: 108449ddc; end: 108449de3; -[SCSnapCommonLoggingParameters viewTime] */

undefined4 FUN_108449ddc(long param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



/* Entry: 108449de4; end: 108449deb; -[SCSnapCommonLoggingParameters setViewTime:] */

void FUN_108449de4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 100) = param_1;
  return;
}



/* Entry: 108449dec; end: 108449df3; -[SCSnapCommonLoggingParameters caption] */

undefined8 FUN_108449dec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 108449df4; end: 108449dfb; -[SCSnapCommonLoggingParameters setCaption:] */

void FUN_108449df4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 108449dfc; end: 108449e03; -[SCSnapCommonLoggingParameters filterIndexCount] */

undefined8 FUN_108449dfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 108449e04; end: 108449e0b; -[SCSnapCommonLoggingParameters setFilterIndexCount:] */

void FUN_108449e04(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 108449e0c; end: 108449e13; -[SCSnapCommonLoggingParameters filterSeenCount] */

undefined8 FUN_108449e0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 108449e14; end: 108449e1b; -[SCSnapCommonLoggingParameters setFilterSeenCount:] */

void FUN_108449e14(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 108449e1c; end: 108449e23; -[SCSnapCommonLoggingParameters filterIndexPos] */

undefined8 FUN_108449e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 108449e24; end: 108449e2b; -[SCSnapCommonLoggingParameters setFilterIndexPos:] */

void FUN_108449e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}



/* Entry: 108449e2c; end: 108449e33; -[SCSnapCommonLoggingParameters recipientCount] */

undefined8 FUN_108449e2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 108449e34; end: 108449e3b; -[SCSnapCommonLoggingParameters setRecipientCount:] */

void FUN_108449e34(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 108449e3c; end: 108449e43; -[SCSnapCommonLoggingParameters invitedRecipientCount] */

undefined8 FUN_108449e3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 108449e44; end: 108449e4b; -[SCSnapCommonLoggingParameters setInvitedRecipientCount:] */

void FUN_108449e44(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 108449e4c; end: 108449e53; -[SCSnapCommonLoggingParameters storyPostCount] */

undefined8 FUN_108449e4c(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 108449e54; end: 108449e5b; -[SCSnapCommonLoggingParameters setStoryPostCount:] */

void FUN_108449e54(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 200) = param_3;
  return;
}



/* Entry: 108449e5c; end: 108449e63; -[SCSnapCommonLoggingParameters source] */

undefined8 FUN_108449e5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 108449e64; end: 108449e6b; -[SCSnapCommonLoggingParameters setSource:] */

void FUN_108449e64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  return;
}



/* Entry: 108449e6c; end: 108449e73; -[SCSnapCommonLoggingParameters sourcePageSessionId] */

undefined8 FUN_108449e6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 108449e74; end: 108449e7b; -[SCSnapCommonLoggingParameters setSourcePageSessionId:] */

void FUN_108449e74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108449e7c; end: 108449e83; -[SCSnapCommonLoggingParameters productMediaType] */

undefined8 FUN_108449e7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 108449e84; end: 108449e8b; -[SCSnapCommonLoggingParameters setProductMediaType:] */

void FUN_108449e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  return;
}



/* Entry: 108449e8c; end: 108449e93; -[SCSnapCommonLoggingParameters encryptedGeoData] */

undefined8 FUN_108449e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 108449e94; end: 108449e9b; -[SCSnapCommonLoggingParameters setEncryptedGeoData:] */

void FUN_108449e94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108449e9c; end: 108449ea3; -[SCSnapCommonLoggingParameters filterGeoId] */

undefined8 FUN_108449e9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 108449ea4; end: 108449eab; -[SCSnapCommonLoggingParameters setFilterGeoId:] */

void FUN_108449ea4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108449eac; end: 108449eb3; -[SCSnapCommonLoggingParameters filterGeoIdList] */

undefined8 FUN_108449eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 108449eb4; end: 108449ebb; -[SCSnapCommonLoggingParameters setFilterGeoIdList:] */

void FUN_108449eb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108449ebc; end: 108449ec3; -[SCSnapCommonLoggingParameters filterInfo] */

undefined8 FUN_108449ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 108449ec4; end: 108449ecb; -[SCSnapCommonLoggingParameters setFilterInfo:] */

void FUN_108449ec4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108449ecc; end: 108449ed3; -[SCSnapCommonLoggingParameters filterCTPItemRequestId] */

undefined8 FUN_108449ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 108449ed4; end: 108449f03; -[SCSnapCommonLoggingParameters setFilterCTPItemRequestId:] */

void FUN_108449ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108449f04; end: 108449f0b; -[SCSnapCommonLoggingParameters unlockableStickerIds] */

undefined8 FUN_108449f04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 108449f0c; end: 108449f13; -[SCSnapCommonLoggingParameters setUnlockableStickerIds:] */

void FUN_108449f0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108449f14; end: 108449f1b; -[SCSnapCommonLoggingParameters geoFilterDynamicContextSources] */

undefined8 FUN_108449f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 108449f1c; end: 108449f23; -[SCSnapCommonLoggingParameters setGeoFilterDynamicContextSources:] */

void FUN_108449f1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108449f24; end: 108449f2b; -[SCSnapCommonLoggingParameters filterVisual] */

undefined8 FUN_108449f24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 108449f2c; end: 108449f33; -[SCSnapCommonLoggingParameters setFilterVisual:] */

void FUN_108449f2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108449f34; end: 108449f3b; -[SCSnapCommonLoggingParameters lagunaUserAgent] */

undefined8 FUN_108449f34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 108449f3c; end: 108449f43; -[SCSnapCommonLoggingParameters setLagunaUserAgent:] */

void FUN_108449f3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108449f44; end: 108449f4b; -[SCSnapCommonLoggingParameters lagunaDeviceId] */

undefined8 FUN_108449f44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 108449f4c; end: 108449f53; -[SCSnapCommonLoggingParameters setLagunaDeviceId:] */

void FUN_108449f4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108449f54; end: 108449f5b; -[SCSnapCommonLoggingParameters shareChannel] */

undefined8 FUN_108449f54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 108449f5c; end: 108449f8b; -[SCSnapCommonLoggingParameters setShareChannel:] */

void FUN_108449f5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108449f8c; end: 108449f93; -[SCSnapCommonLoggingParameters replyCta] */

undefined8 FUN_108449f8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 108449f94; end: 108449f9b; -[SCSnapCommonLoggingParameters setReplyCta:] */

void FUN_108449f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x140) = param_3;
  return;
}



/* Entry: 108449f9c; end: 108449fa3; -[SCSnapCommonLoggingParameters inChatSource] */

undefined8 FUN_108449f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 108449fa4; end: 108449fab; -[SCSnapCommonLoggingParameters setInChatSource:] */

void FUN_108449fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x148) = param_3;
  return;
}



/* Entry: 108449fac; end: 108449fb3; -[SCSnapCommonLoggingParameters cellViewPosition] */

undefined8 FUN_108449fac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 108449fb4; end: 108449fbb; -[SCSnapCommonLoggingParameters setCellViewPosition:] */

void FUN_108449fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x150) = param_3;
  return;
}



/* Entry: 108449fbc; end: 108449fc3; -[SCSnapCommonLoggingParameters sendToSessionId] */

undefined8 FUN_108449fbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 108449fc4; end: 108449fcb; -[SCSnapCommonLoggingParameters setSendToSessionId:] */

void FUN_108449fc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108449fcc; end: 108449fd3; -[SCSnapCommonLoggingParameters lowLightStatus] */

undefined8 FUN_108449fcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 108449fd4; end: 108449fdb; -[SCSnapCommonLoggingParameters setLowLightStatus:] */

void FUN_108449fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x160) = param_3;
  return;
}



/* Entry: 108449fdc; end: 108449fe3; -[SCSnapCommonLoggingParameters flashOn] */

undefined1 FUN_108449fdc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1e);
}



/* Entry: 108449fe4; end: 108449feb; -[SCSnapCommonLoggingParameters setFlashOn:] */

void FUN_108449fe4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1e) = param_3;
  return;
}



/* Entry: 108449fec; end: 108449ff3; -[SCSnapCommonLoggingParameters flashMode] */

undefined8 FUN_108449fec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 108449ff4; end: 108449ffb; -[SCSnapCommonLoggingParameters setFlashMode:] */

void FUN_108449ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x168) = param_3;
  return;
}



/* Entry: 108449ffc; end: 10844a003; -[SCSnapCommonLoggingParameters frontCamera] */

undefined1 FUN_108449ffc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1f);
}



/* Entry: 10844a004; end: 10844a00b; -[SCSnapCommonLoggingParameters setFrontCamera:] */

void FUN_10844a004(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1f) = param_3;
  return;
}



/* Entry: 10844a00c; end: 10844a013; -[SCSnapCommonLoggingParameters cameraFlipsWhileRecording] */

undefined8 FUN_10844a00c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 10844a014; end: 10844a01b; -[SCSnapCommonLoggingParameters setCameraFlipsWhileRecording:] */

void FUN_10844a014(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x170) = param_3;
  return;
}



/* Entry: 10844a01c; end: 10844a023; -[SCSnapCommonLoggingParameters hasLabel] */

undefined1 FUN_10844a01c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 10844a024; end: 10844a02b; -[SCSnapCommonLoggingParameters setHasLabel:] */

void FUN_10844a024(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10844a02c; end: 10844a033; -[SCSnapCommonLoggingParameters lowLightBoostEnabledBeforeCapture] */

undefined1 FUN_10844a02c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 10844a034; end: 10844a03b; -[SCSnapCommonLoggingParameters setLowLightBoostEnabledBeforeCapture:] */

void FUN_10844a034(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}



/* Entry: 10844a03c; end: 10844a043; -[SCSnapCommonLoggingParameters handsFree] */

undefined1 FUN_10844a03c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x22);
}



/* Entry: 10844a044; end: 10844a04b; -[SCSnapCommonLoggingParameters setHandsFree:] */

void FUN_10844a044(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x22) = param_3;
  return;
}



/* Entry: 10844a04c; end: 10844a053; -[SCSnapCommonLoggingParameters handsFreeActivationType] */

undefined8 FUN_10844a04c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 10844a054; end: 10844a05b; -[SCSnapCommonLoggingParameters setHandsFreeActivationType:] */

void FUN_10844a054(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x178) = param_3;
  return;
}



/* Entry: 10844a05c; end: 10844a063; -[SCSnapCommonLoggingParameters isContinuousCapture] */

undefined1 FUN_10844a05c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x23);
}



/* Entry: 10844a064; end: 10844a06b; -[SCSnapCommonLoggingParameters setIsContinuousCapture:] */

void FUN_10844a064(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x23) = param_3;
  return;
}



/* Entry: 10844a06c; end: 10844a073; -[SCSnapCommonLoggingParameters mediaDuration] */

undefined4 FUN_10844a06c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



/* Entry: 10844a074; end: 10844a07b; -[SCSnapCommonLoggingParameters setMediaDuration:] */

void FUN_10844a074(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x68) = param_1;
  return;
}



/* Entry: 10844a07c; end: 10844a083; -[SCSnapCommonLoggingParameters mediaType] */

undefined8 FUN_10844a07c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 10844a084; end: 10844a08b; -[SCSnapCommonLoggingParameters setMediaType:] */

void FUN_10844a084(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x180) = param_3;
  return;
}



/* Entry: 10844a08c; end: 10844a093; -[SCSnapCommonLoggingParameters mediaSources] */

undefined8 FUN_10844a08c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 10844a094; end: 10844a0c3; -[SCSnapCommonLoggingParameters setMediaSources:] */

void FUN_10844a094(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10844a0c4; end: 10844a0cb; -[SCSnapCommonLoggingParameters cameraSource] */

undefined8 FUN_10844a0c4(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}


