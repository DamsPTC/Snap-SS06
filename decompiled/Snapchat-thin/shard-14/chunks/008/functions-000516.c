/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b63b1f4; end: 10b63b2b7; -[SCNMessagingMediaPrefetchResult initWithIsSuccess:isDownloaded:mediaSizeBytes:error:startTimestampMs:endToEndLatencyMs:] */

undefined1 *
FUN_10b63b1f4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_112707038;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63b2b8; end: 10b63b2c7; -[SCNMessagingMediaPrefetchResult initWithIsSuccess:isDownloaded:mediaSizeBytes:startTimestampMs:endToEndLatencyMs:] */

void FUN_10b63b2b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01f930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithIsSuccess_isDownloaded_m_1125e5830);
  return;
}



/* Entry: 10b63b2c8; end: 10b63b2cf; -[SCNMessagingMediaPrefetchResult isSuccess] */

undefined1 FUN_10b63b2c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b63b2d0; end: 10b63b2d7; -[SCNMessagingMediaPrefetchResult setIsSuccess:] */

void FUN_10b63b2d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63b2d8; end: 10b63b2df; -[SCNMessagingMediaPrefetchResult isDownloaded] */

undefined1 FUN_10b63b2d8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b63b2e0; end: 10b63b2e7; -[SCNMessagingMediaPrefetchResult setIsDownloaded:] */

void FUN_10b63b2e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b63b2e8; end: 10b63b2ef; -[SCNMessagingMediaPrefetchResult mediaSizeBytes] */

undefined8 FUN_10b63b2e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63b2f0; end: 10b63b2f7; -[SCNMessagingMediaPrefetchResult setMediaSizeBytes:] */

void FUN_10b63b2f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b63b2f8; end: 10b63b2ff; -[SCNMessagingMediaPrefetchResult error] */

undefined8 FUN_10b63b2f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63b300; end: 10b63b32f; -[SCNMessagingMediaPrefetchResult setError:] */

void FUN_10b63b300(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b63b330; end: 10b63b337; -[SCNMessagingMediaPrefetchResult startTimestampMs] */

undefined8 FUN_10b63b330(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b63b338; end: 10b63b33f; -[SCNMessagingMediaPrefetchResult setStartTimestampMs:] */

void FUN_10b63b338(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b63b340; end: 10b63b347; -[SCNMessagingMediaPrefetchResult endToEndLatencyMs] */

undefined8 FUN_10b63b340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b63b348; end: 10b63b34f; -[SCNMessagingMediaPrefetchResult setEndToEndLatencyMs:] */

void FUN_10b63b348(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b63b350; end: 10b63b35b; -[SCNMessagingMediaPrefetchResult .cxx_destruct] */

void FUN_10b63b350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b63b35c; end: 10b63b367; -[SCNMessagingMediaReference initWithContentObject:mediaListId:mediaType:mediaReferenceKey:] */

void FUN_10b63b35c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c003990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithContentObject_mediaListI_1125de828);
  return;
}



/* Entry: 10b63b368; end: 10b63b36f; -[SCNMessagingMediaReference setContentObject:] */

void FUN_10b63b368(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63b370; end: 10b63b377; -[SCNMessagingMediaReference setMediaListId:] */

void FUN_10b63b370(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b63b378; end: 10b63b37f; -[SCNMessagingMediaReference mediaType] */

undefined8 FUN_10b63b378(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63b380; end: 10b63b387; -[SCNMessagingMediaReference setMediaType:] */

void FUN_10b63b380(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b63b388; end: 10b63b38f; -[SCNMessagingMediaReference setMediaReferenceKey:] */

void FUN_10b63b388(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63b390; end: 10b63b397; -[SCNMessagingMediaReference videoDescription] */

undefined8 FUN_10b63b390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b63b398; end: 10b63b3bb; -[SCNMessagingMediaReference setVideoDescription:] */

void FUN_10b63b398(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63b424();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63b3bc; end: 10b63b3c3; -[SCNMessagingMediaReference metadataType] */

undefined8 FUN_10b63b3bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b63b3c4; end: 10b63b3e7; -[SCNMessagingMediaReference setMetadataType:] */

void FUN_10b63b3c4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63b424();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63b3e8; end: 10b63b423; -[SCNMessagingMediaReference .cxx_destruct] */

void FUN_10b63b3e8(long param_1)

{
  func_0x00010b63b434(param_1 + 0x30);
  func_0x00010b63b434(param_1 + 0x28);
  func_0x00010b63b434(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63b424; end: 10b63b43b;  */

void FUN_10b63b424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b63b43c; end: 10b63b443; -[SCNMessagingMediaReferenceList setMediaReferences:] */

void FUN_10b63b43c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63b444; end: 10b63b44f; -[SCNMessagingMediaReferenceList .cxx_destruct] */

void FUN_10b63b444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63b450; end: 10b63b487; -[SCNMessagingMessage initWithDescriptor:senderId:metadata:releasePolicy:state:messageAnalytics:orderKey:] */

void FUN_10b63b450(void)

{
  func_0x00010c00baa0();
  return;
}



/* Entry: 10b63b488; end: 10b63b4a7; -[SCNMessagingMessage setDescriptor:] */

void FUN_10b63b488(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63b5a4();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63b4a8; end: 10b63b4c7; -[SCNMessagingMessage setSenderId:] */

void FUN_10b63b4a8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63b5a4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63b4c8; end: 10b63b4e7; -[SCNMessagingMessage setMessageContent:] */

void FUN_10b63b4c8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63b5a4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63b4e8; end: 10b63b507; -[SCNMessagingMessage setMetadata:] */

void FUN_10b63b4e8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63b5a4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63b508; end: 10b63b50f; -[SCNMessagingMessage releasePolicy] */

undefined8 FUN_10b63b508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b63b510; end: 10b63b517; -[SCNMessagingMessage setReleasePolicy:] */

void FUN_10b63b510(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b63b518; end: 10b63b51f; -[SCNMessagingMessage state] */

undefined8 FUN_10b63b518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b63b520; end: 10b63b527; -[SCNMessagingMessage setState:] */

void FUN_10b63b520(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b63b528; end: 10b63b52f; -[SCNMessagingMessage messageAnalytics] */

undefined8 FUN_10b63b528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b63b530; end: 10b63b54f; -[SCNMessagingMessage setMessageAnalytics:] */

void FUN_10b63b530(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63b5a4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63b550; end: 10b63b557; -[SCNMessagingMessage orderKey] */

undefined8 FUN_10b63b550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b63b558; end: 10b63b55f; -[SCNMessagingMessage setOrderKey:] */

void FUN_10b63b558(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10b63b560; end: 10b63b5a3; -[SCNMessagingMessage .cxx_destruct] */

void FUN_10b63b560(long param_1)

{
  func_0x00010b63b5bc(param_1 + 0x38);
  func_0x00010b63b5bc(param_1 + 0x20);
  func_0x00010b63b5bc(param_1 + 0x18);
  func_0x00010b63b5bc(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63b5a4; end: 10b63b5c3;  */

void FUN_10b63b5a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b63b5c4; end: 10b63b5d3; -[SCNMessagingMessageAnalytics initWithMessageEncryption:isReencrypted:] */

void FUN_10b63b5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff2d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithAnalyticsMessageId_messa_1125da518,0,param_3,param_4);
  return;
}



/* Entry: 10b63b5d4; end: 10b63b5db; -[SCNMessagingMessageAnalytics analyticsMessageId] */

undefined8 FUN_10b63b5d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63b5dc; end: 10b63b5e3; -[SCNMessagingMessageAnalytics setAnalyticsMessageId:] */

void FUN_10b63b5dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63b5e4; end: 10b63b5eb; -[SCNMessagingMessageAnalytics messageEncryption] */

undefined8 FUN_10b63b5e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63b5ec; end: 10b63b5f3; -[SCNMessagingMessageAnalytics setMessageEncryption:] */

void FUN_10b63b5ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b63b5f4; end: 10b63b5fb; -[SCNMessagingMessageAnalytics isReencrypted] */

undefined1 FUN_10b63b5f4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b63b5fc; end: 10b63b603; -[SCNMessagingMessageAnalytics setIsReencrypted:] */

void FUN_10b63b5fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63b604; end: 10b63b60f; -[SCNMessagingMessageAnalytics .cxx_destruct] */

void FUN_10b63b604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b63b610; end: 10b63b647; -[SCNMessagingMessageContent initWithContent:contentType:thumbnailIndexLists:] */

void FUN_10b63b610(void)

{
  func_0x00010c002c00();
  return;
}



/* Entry: 10b63b648; end: 10b63b64f; -[SCNMessagingMessageContent setContent:] */

void FUN_10b63b648(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63b650; end: 10b63b657; -[SCNMessagingMessageContent contentType] */

undefined8 FUN_10b63b650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63b658; end: 10b63b65f; -[SCNMessagingMessageContent setContentType:] */

void FUN_10b63b658(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b63b660; end: 10b63b667; -[SCNMessagingMessageContent remoteMediaInfo] */

undefined8 FUN_10b63b660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63b668; end: 10b63b66f; -[SCNMessagingMessageContent setRemoteMediaInfo:] */

void FUN_10b63b668(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63b670; end: 10b63b677; -[SCNMessagingMessageContent setRemoteMediaReferences:] */

void FUN_10b63b670(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63b678; end: 10b63b67f; -[SCNMessagingMessageContent setLocalMediaReferences:] */

void FUN_10b63b678(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63b680; end: 10b63b687; -[SCNMessagingMessageContent setThumbnailIndexLists:] */

void FUN_10b63b680(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63b688; end: 10b63b68f; -[SCNMessagingMessageContent quotedMessage] */

undefined8 FUN_10b63b688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b63b690; end: 10b63b6af; -[SCNMessagingMessageContent setQuotedMessage:] */

void FUN_10b63b690(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63b7ec();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63b6b0; end: 10b63b6b7; -[SCNMessagingMessageContent snapDisplayInfo] */

undefined8 FUN_10b63b6b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b63b6b8; end: 10b63b6d7; -[SCNMessagingMessageContent setSnapDisplayInfo:] */

void FUN_10b63b6b8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63b7ec();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63b6d8; end: 10b63b6df; -[SCNMessagingMessageContent messageTypeMetadata] */

undefined8 FUN_10b63b6d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b63b6e0; end: 10b63b6ff; -[SCNMessagingMessageContent setMessageTypeMetadata:] */

void FUN_10b63b6e0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63b7ec();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63b700; end: 10b63b707; -[SCNMessagingMessageContent snapModeInfo] */

undefined8 FUN_10b63b700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b63b708; end: 10b63b727; -[SCNMessagingMessageContent setSnapModeInfo:] */

void FUN_10b63b708(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63b7ec();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63b728; end: 10b63b72f; -[SCNMessagingMessageContent publicGroupMessageMetadata] */

undefined8 FUN_10b63b728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b63b730; end: 10b63b74f; -[SCNMessagingMessageContent setPublicGroupMessageMetadata:] */

void FUN_10b63b730(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63b7ec();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63b750; end: 10b63b757; -[SCNMessagingMessageContent massSnapMessageMetadata] */

undefined8 FUN_10b63b750(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b63b758; end: 10b63b777; -[SCNMessagingMessageContent setMassSnapMessageMetadata:] */

void FUN_10b63b758(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63b7ec();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63b778; end: 10b63b7eb; -[SCNMessagingMessageContent .cxx_destruct] */

void FUN_10b63b778(long param_1)

{
  func_0x00010b63b7fc(param_1 + 0x60);
  func_0x00010b63b7fc(param_1 + 0x58);
  func_0x00010b63b7fc(param_1 + 0x50);
  func_0x00010b63b7fc(param_1 + 0x48);
  func_0x00010b63b7fc(param_1 + 0x40);
  func_0x00010b63b7fc(param_1 + 0x38);
  func_0x00010b63b7fc(param_1 + 0x30);
  func_0x00010b63b7fc(param_1 + 0x28);
  func_0x00010b63b7fc(param_1 + 0x20);
  func_0x00010b63b7fc(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63b7ec; end: 10b63b80b;  */

void FUN_10b63b7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b63b80c; end: 10b63b83b; -[SCNMessagingMessageDescriptor setConversationId:] */

void FUN_10b63b80c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b63b83c; end: 10b63b843; -[SCNMessagingMessageDescriptor setMessageId:] */

void FUN_10b63b83c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b63b844; end: 10b63b84f; -[SCNMessagingMessageDescriptor .cxx_destruct] */

void FUN_10b63b844(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63b850; end: 10b63b993; -[SCNMessagingMessageDestinations initWithConversations:stories:phoneNumbers:massSnaps:] */

undefined1 *
FUN_10b63b850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112707070;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    FUN_10b63ba10(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_10b63ba10(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10b63ba10(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_10b63ba10(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63b994; end: 10b63b99b; -[SCNMessagingMessageDestinations conversations] */

undefined8 FUN_10b63b994(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63b99c; end: 10b63b9a3; -[SCNMessagingMessageDestinations setConversations:] */

void FUN_10b63b99c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63b9a4; end: 10b63b9ab; -[SCNMessagingMessageDestinations stories] */

undefined8 FUN_10b63b9a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63b9ac; end: 10b63b9b3; -[SCNMessagingMessageDestinations setStories:] */

void FUN_10b63b9ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63b9b4; end: 10b63b9bb; -[SCNMessagingMessageDestinations phoneNumbers] */

undefined8 FUN_10b63b9b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63b9bc; end: 10b63b9c3; -[SCNMessagingMessageDestinations setPhoneNumbers:] */

void FUN_10b63b9bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63b9c4; end: 10b63b9cb; -[SCNMessagingMessageDestinations massSnaps] */

undefined8 FUN_10b63b9c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b63b9cc; end: 10b63b9d3; -[SCNMessagingMessageDestinations setMassSnaps:] */

void FUN_10b63b9cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63b9d4; end: 10b63ba0f; -[SCNMessagingMessageDestinations .cxx_destruct] */

void FUN_10b63b9d4(long param_1)

{
  func_0x00010b63ba18(param_1 + 0x20);
  func_0x00010b63ba18(param_1 + 0x18);
  func_0x00010b63ba18(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63ba10; end: 10b63ba1f;  */

void FUN_10b63ba10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b63ba20; end: 10b63bafb; -[SCNMessagingMessageDestinationsLite initWithConversations:stories:] */

undefined1 *
FUN_10b63ba20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707078;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63bafc; end: 10b63bb03; -[SCNMessagingMessageDestinationsLite conversations] */

undefined8 FUN_10b63bafc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63bb04; end: 10b63bb0b; -[SCNMessagingMessageDestinationsLite setConversations:] */

void FUN_10b63bb04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63bb0c; end: 10b63bb13; -[SCNMessagingMessageDestinationsLite stories] */

undefined8 FUN_10b63bb0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63bb14; end: 10b63bb1b; -[SCNMessagingMessageDestinationsLite setStories:] */

void FUN_10b63bb14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63bb1c; end: 10b63bb4b; -[SCNMessagingMessageDestinationsLite .cxx_destruct] */

void FUN_10b63bb1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63bb4c; end: 10b63bbef; -[SCNMessagingMessageMetadata initWithSeenBy:openedBy:savedBy:mentionedUserIds:screenShottedBy:screenRecordedBy:reactions:tombstone:createdAt:readAt:isSaveable:isFriendLinkPending:isReactable:isReplyable:isErasable:isEdited:isEditable:replayedByUsers:savePolicy:isPriorityChatNotificationEligible:didSendPriorityChatNotification:] */

void FUN_10b63bb4c(void)

{
  func_0x00010c0438e0();
  return;
}



/* Entry: 10b63bbf0; end: 10b63bbf7; -[SCNMessagingMessageMetadata seenBy] */

undefined8 FUN_10b63bbf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63bbf8; end: 10b63bbff; -[SCNMessagingMessageMetadata setSeenBy:] */

void FUN_10b63bbf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63bc00; end: 10b63bc07; -[SCNMessagingMessageMetadata openedBy] */

undefined8 FUN_10b63bc00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b63bc08; end: 10b63bc0f; -[SCNMessagingMessageMetadata setOpenedBy:] */

void FUN_10b63bc08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}


