/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6424c4; end: 10b6424e7; -[SCNMessagingTask setRequestId:] */

void FUN_10b6424c4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b642554();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6424e8; end: 10b6424ef; -[SCNMessagingTask type] */

undefined8 FUN_10b6424e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6424f0; end: 10b6424f7; -[SCNMessagingTask setType:] */

void FUN_10b6424f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b6424f8; end: 10b6424ff; -[SCNMessagingTask content] */

undefined8 FUN_10b6424f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b642500; end: 10b642523; -[SCNMessagingTask setContent:] */

void FUN_10b642500(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b642554();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b642524; end: 10b642553; -[SCNMessagingTask .cxx_destruct] */

void FUN_10b642524(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b642554; end: 10b642563;  */

void FUN_10b642554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b642564; end: 10b64256b; -[SCNMessagingThumbnailIndexList setIndices:] */

void FUN_10b642564(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b64256c; end: 10b642577; -[SCNMessagingThumbnailIndexList .cxx_destruct] */

void FUN_10b64256c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b642578; end: 10b64263f; -[SCNMessagingTranscodeStatus initWithPhase:progress:attempt:] */

undefined1 *
FUN_10b642578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112707250;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b642640; end: 10b64264b; -[SCNMessagingTranscodeStatus initWithPhase:] */

void FUN_10b642640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c035850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithPhase_progress_attempt__1125eb010,param_3,0,0);
  return;
}



/* Entry: 10b64264c; end: 10b642653; -[SCNMessagingTranscodeStatus phase] */

undefined8 FUN_10b64264c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b642654; end: 10b64265b; -[SCNMessagingTranscodeStatus setPhase:] */

void FUN_10b642654(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b64265c; end: 10b642663; -[SCNMessagingTranscodeStatus progress] */

undefined8 FUN_10b64265c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b642664; end: 10b642687; -[SCNMessagingTranscodeStatus setProgress:] */

void FUN_10b642664(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6426e4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b642688; end: 10b64268f; -[SCNMessagingTranscodeStatus attempt] */

undefined8 FUN_10b642688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b642690; end: 10b6426b3; -[SCNMessagingTranscodeStatus setAttempt:] */

void FUN_10b642690(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6426e4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6426b4; end: 10b6426e3; -[SCNMessagingTranscodeStatus .cxx_destruct] */

void FUN_10b6426b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6426e4; end: 10b6426f3;  */

void FUN_10b6426e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b6426f4; end: 10b642743; -[SCNMessagingTranscriptionInfo initWithMediaListId:mediaReferenceListIndex:] */

void FUN_10b6426f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112707258;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined4 *)((long)puVar1 + 8) = param_4;
  }
  return;
}



/* Entry: 10b642744; end: 10b64274b; -[SCNMessagingTranscriptionInfo mediaListId] */

undefined8 FUN_10b642744(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64274c; end: 10b642753; -[SCNMessagingTranscriptionInfo setMediaListId:] */

void FUN_10b64274c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b642754; end: 10b64275b; -[SCNMessagingTranscriptionInfo mediaReferenceListIndex] */

undefined4 FUN_10b642754(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b64275c; end: 10b642763; -[SCNMessagingTranscriptionInfo setMediaReferenceListIndex:] */

void FUN_10b64275c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b642764; end: 10b64276b; -[SCNMessagingTweaks setTweaks:] */

void FUN_10b642764(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b64276c; end: 10b642777; -[SCNMessagingTweaks .cxx_destruct] */

void FUN_10b64276c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b642778; end: 10b64277f; -[SCNMessagingUUID setId:] */

void FUN_10b642778(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b642780; end: 10b6428ab; -[SCNMessagingUpdateChatWallpaperBlizzardMetadata initWithWallpaperSource:entrySource:didRemove:wallpaperId:isSnapchatPlusExclusive:isWallpaperBlurred:] */

undefined1 *
FUN_10b642780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112707270;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6428ac; end: 10b6428c7; -[SCNMessagingUpdateChatWallpaperBlizzardMetadata initWithEntrySource:didRemove:isSnapchatPlusExclusive:] */

void FUN_10b6428ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0628d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithWallpaperSource_entrySou_1125f6440,0,param_3,param_4,0,param_5,0)
  ;
  return;
}



/* Entry: 10b6428c8; end: 10b6428cf; -[SCNMessagingUpdateChatWallpaperBlizzardMetadata wallpaperSource] */

undefined8 FUN_10b6428c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6428d0; end: 10b6428f3; -[SCNMessagingUpdateChatWallpaperBlizzardMetadata setWallpaperSource:] */

void FUN_10b6428d0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b64299c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6428f4; end: 10b6428fb; -[SCNMessagingUpdateChatWallpaperBlizzardMetadata entrySource] */

undefined4 FUN_10b6428f4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b6428fc; end: 10b642903; -[SCNMessagingUpdateChatWallpaperBlizzardMetadata setEntrySource:] */

void FUN_10b6428fc(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10b642904; end: 10b64290b; -[SCNMessagingUpdateChatWallpaperBlizzardMetadata didRemove] */

undefined1 FUN_10b642904(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b64290c; end: 10b642913; -[SCNMessagingUpdateChatWallpaperBlizzardMetadata setDidRemove:] */

void FUN_10b64290c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b642914; end: 10b64291b; -[SCNMessagingUpdateChatWallpaperBlizzardMetadata wallpaperId] */

undefined8 FUN_10b642914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b64291c; end: 10b642923; -[SCNMessagingUpdateChatWallpaperBlizzardMetadata setWallpaperId:] */

void FUN_10b64291c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b642924; end: 10b64292b; -[SCNMessagingUpdateChatWallpaperBlizzardMetadata isSnapchatPlusExclusive] */

undefined1 FUN_10b642924(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b64292c; end: 10b642933; -[SCNMessagingUpdateChatWallpaperBlizzardMetadata setIsSnapchatPlusExclusive:] */

void FUN_10b64292c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b642934; end: 10b64293b; -[SCNMessagingUpdateChatWallpaperBlizzardMetadata isWallpaperBlurred] */

undefined8 FUN_10b642934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b64293c; end: 10b64295f; -[SCNMessagingUpdateChatWallpaperBlizzardMetadata setIsWallpaperBlurred:] */

void FUN_10b64293c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b64299c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b642960; end: 10b64299b; -[SCNMessagingUpdateChatWallpaperBlizzardMetadata .cxx_destruct] */

void FUN_10b642960(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b64299c; end: 10b6429ab;  */

void FUN_10b64299c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b6429ac; end: 10b642aff; -[SCNMessagingUploadMediaReferenceResult initWithStatus:contentObject:encryptionInfo:failedStep:timers:] */

undefined1 *
FUN_10b6429ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112707278;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b642b00; end: 10b642b13; -[SCNMessagingUploadMediaReferenceResult initWithStatus:timers:] */

void FUN_10b642b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04c230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithStatus_contentObject_enc_1125f0a88,param_3,0,0,0,param_4);
  return;
}



/* Entry: 10b642b14; end: 10b642b1b; -[SCNMessagingUploadMediaReferenceResult status] */

undefined8 FUN_10b642b14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b642b1c; end: 10b642b23; -[SCNMessagingUploadMediaReferenceResult setStatus:] */

void FUN_10b642b1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b642b24; end: 10b642b2b; -[SCNMessagingUploadMediaReferenceResult contentObject] */

undefined8 FUN_10b642b24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b642b2c; end: 10b642b33; -[SCNMessagingUploadMediaReferenceResult setContentObject:] */

void FUN_10b642b2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b642b34; end: 10b642b3b; -[SCNMessagingUploadMediaReferenceResult encryptionInfo] */

undefined8 FUN_10b642b34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b642b3c; end: 10b642b5f; -[SCNMessagingUploadMediaReferenceResult setEncryptionInfo:] */

void FUN_10b642b3c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b642bd8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b642b60; end: 10b642b67; -[SCNMessagingUploadMediaReferenceResult failedStep] */

undefined8 FUN_10b642b60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b642b68; end: 10b642b8b; -[SCNMessagingUploadMediaReferenceResult setFailedStep:] */

void FUN_10b642b68(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b642bd8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b642b8c; end: 10b642b93; -[SCNMessagingUploadMediaReferenceResult timers] */

undefined8 FUN_10b642b8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b642b94; end: 10b642b9b; -[SCNMessagingUploadMediaReferenceResult setTimers:] */

void FUN_10b642b94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b642b9c; end: 10b642bd7; -[SCNMessagingUploadMediaReferenceResult .cxx_destruct] */

void FUN_10b642b9c(long param_1)

{
  func_0x00010b642be8(param_1 + 0x28);
  func_0x00010b642be8(param_1 + 0x20);
  func_0x00010b642be8(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b642bd8; end: 10b642bef;  */

void FUN_10b642bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b642bf0; end: 10b642d43; -[SCNMessagingUploadResetResult initWithLocalMediaReference:outcome:errorCode:errorDomain:failureDescription:] */

undefined1 *
FUN_10b642bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112707280;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b642d44; end: 10b642d53; -[SCNMessagingUploadResetResult initWithLocalMediaReference:outcome:] */

void FUN_10b642d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c026930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLocalMediaReference_outc_1125e7430,param_3,param_4,0,0,0);
  return;
}



/* Entry: 10b642d54; end: 10b642d5b; -[SCNMessagingUploadResetResult localMediaReference] */

undefined8 FUN_10b642d54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b642d5c; end: 10b642d7f; -[SCNMessagingUploadResetResult setLocalMediaReference:] */

void FUN_10b642d5c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b642e18();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b642d80; end: 10b642d87; -[SCNMessagingUploadResetResult outcome] */

undefined8 FUN_10b642d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b642d88; end: 10b642d8f; -[SCNMessagingUploadResetResult setOutcome:] */

void FUN_10b642d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b642d90; end: 10b642d97; -[SCNMessagingUploadResetResult errorCode] */

undefined8 FUN_10b642d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b642d98; end: 10b642dbb; -[SCNMessagingUploadResetResult setErrorCode:] */

void FUN_10b642d98(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b642e18();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b642dbc; end: 10b642dc3; -[SCNMessagingUploadResetResult errorDomain] */

undefined8 FUN_10b642dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b642dc4; end: 10b642dcb; -[SCNMessagingUploadResetResult setErrorDomain:] */

void FUN_10b642dc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b642dcc; end: 10b642dd3; -[SCNMessagingUploadResetResult failureDescription] */

undefined8 FUN_10b642dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b642dd4; end: 10b642ddb; -[SCNMessagingUploadResetResult setFailureDescription:] */

void FUN_10b642dd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b642ddc; end: 10b642e17; -[SCNMessagingUploadResetResult .cxx_destruct] */

void FUN_10b642ddc(long param_1)

{
  func_0x00010b642e28(param_1 + 0x28);
  func_0x00010b642e28(param_1 + 0x20);
  func_0x00010b642e28(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b642e18; end: 10b642e2f;  */

void FUN_10b642e18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b642e30; end: 10b64307f; -[SCNMessagingUploadResult initWithStatus:failureReason:failureDescription:clientError:failedStep:timers:remoteMediaInfo:remoteMediaReferences:mediaOrchestrationAttemptId:mediaRole:] */

undefined8 *
FUN_10b642e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_112707288;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_3;
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x00010b64326c(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x00010b64326c(uVar3);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x00010b64326c(uVar3);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b643080; end: 10b6430b7; -[SCNMessagingUploadResult initWithStatus:timers:] */

void FUN_10b643080(void)

{
  func_0x00010c04c280();
  return;
}



/* Entry: 10b6430b8; end: 10b6430bf; -[SCNMessagingUploadResult status] */

undefined8 FUN_10b6430b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6430c0; end: 10b6430c7; -[SCNMessagingUploadResult setStatus:] */

void FUN_10b6430c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b6430c8; end: 10b6430cf; -[SCNMessagingUploadResult failureReason] */

undefined8 FUN_10b6430c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6430d0; end: 10b6430ef; -[SCNMessagingUploadResult setFailureReason:] */

void FUN_10b6430d0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b64324c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6430f0; end: 10b6430f7; -[SCNMessagingUploadResult failureDescription] */

undefined8 FUN_10b6430f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6430f8; end: 10b6430ff; -[SCNMessagingUploadResult setFailureDescription:] */

void FUN_10b6430f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b643100; end: 10b643107; -[SCNMessagingUploadResult clientError] */

undefined8 FUN_10b643100(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b643108; end: 10b64310f; -[SCNMessagingUploadResult setClientError:] */

void FUN_10b643108(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b643110; end: 10b643117; -[SCNMessagingUploadResult failedStep] */

undefined8 FUN_10b643110(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b643118; end: 10b643137; -[SCNMessagingUploadResult setFailedStep:] */

void FUN_10b643118(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b64324c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b643138; end: 10b64313f; -[SCNMessagingUploadResult timers] */

undefined8 FUN_10b643138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b643140; end: 10b643147; -[SCNMessagingUploadResult setTimers:] */

void FUN_10b643140(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b643148; end: 10b64314f; -[SCNMessagingUploadResult remoteMediaInfo] */

undefined8 FUN_10b643148(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b643150; end: 10b64316f; -[SCNMessagingUploadResult setRemoteMediaInfo:] */

void FUN_10b643150(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b64324c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b643170; end: 10b643177; -[SCNMessagingUploadResult remoteMediaReferences] */

undefined8 FUN_10b643170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b643178; end: 10b643197; -[SCNMessagingUploadResult setRemoteMediaReferences:] */

void FUN_10b643178(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b64324c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b643198; end: 10b64319f; -[SCNMessagingUploadResult mediaOrchestrationAttemptId] */

undefined8 FUN_10b643198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b6431a0; end: 10b6431bf; -[SCNMessagingUploadResult setMediaOrchestrationAttemptId:] */

void FUN_10b6431a0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b64324c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6431c0; end: 10b6431c7; -[SCNMessagingUploadResult mediaRole] */

undefined8 FUN_10b6431c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b6431c8; end: 10b6431e7; -[SCNMessagingUploadResult setMediaRole:] */

void FUN_10b6431c8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b64324c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6431e8; end: 10b64324b; -[SCNMessagingUploadResult .cxx_destruct] */

void FUN_10b6431e8(long param_1)

{
  func_0x00010b64325c(param_1 + 0x50);
  func_0x00010b64325c(param_1 + 0x48);
  func_0x00010b64325c(param_1 + 0x40);
  func_0x00010b64325c(param_1 + 0x38);
  func_0x00010b64325c(param_1 + 0x30);
  func_0x00010b64325c(param_1 + 0x28);
  func_0x00010b64325c(param_1 + 0x20);
  func_0x00010b64325c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b64324c; end: 10b643273;  */

void FUN_10b64324c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b643274; end: 10b643537; -[SCNMessagingUploadStatus initWithLocalMediaReference:state:lastKnownStep:sendStatus:failureReason:failureDescription:clientError:uploadMode:bytesUploaded:totalBytes:lastUpdateTimestampMs:mediaOrchestrationAttemptId:transcodeStatus:] */

undefined8 *
FUN_10b643274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  func_0x00010b6437b0();
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_112707290;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010b6437b0();
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar1[2] = param_4;
    func_0x00010b6437b0();
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    func_0x00010b6437b0();
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    puVar1[8] = param_10;
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b643538; end: 10b643573; -[SCNMessagingUploadStatus initWithLocalMediaReference:state:uploadMode:] */

void FUN_10b643538(void)

{
  func_0x00010c026940();
  return;
}



/* Entry: 10b643574; end: 10b64357b; -[SCNMessagingUploadStatus localMediaReference] */

undefined8 FUN_10b643574(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64357c; end: 10b64359b; -[SCNMessagingUploadStatus setLocalMediaReference:] */

void FUN_10b64357c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b643790();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b64359c; end: 10b6435a3; -[SCNMessagingUploadStatus state] */

undefined8 FUN_10b64359c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


