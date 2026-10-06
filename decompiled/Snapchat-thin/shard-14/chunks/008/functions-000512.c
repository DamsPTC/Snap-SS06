/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b637868; end: 10b63786f; -[SCNMessagingEditedMessageContent setMentionInfo:] */

void FUN_10b637868(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b637870; end: 10b63789f; -[SCNMessagingEditedMessageContent .cxx_destruct] */

void FUN_10b637870(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6378a0; end: 10b637a47; -[SCNMessagingEelMessageReEncryptEvent initWithAnalyticsMessageId:requestBatchId:currentUserPkId:isSuccess:reEncryptionType:failureReason:decryptFailureReason:latencyUs:messageVersion:pkIds:] */

undefined8 *
FUN_10b6378a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_112706ef0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x00010b637ba8(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x00010b637ba8(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_6;
    puVar1[4] = param_5;
    puVar1[5] = param_7;
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    puVar1[8] = param_10;
    puVar1[9] = param_11;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x00010b637ba8(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b637a48; end: 10b637a73; -[SCNMessagingEelMessageReEncryptEvent initWithAnalyticsMessageId:requestBatchId:currentUserPkId:isSuccess:reEncryptionType:latencyUs:messageVersion:pkIds:] */

void FUN_10b637a48(void)

{
  func_0x00010bff2d60();
  return;
}



/* Entry: 10b637a74; end: 10b637a7b; -[SCNMessagingEelMessageReEncryptEvent analyticsMessageId] */

undefined8 FUN_10b637a74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b637a7c; end: 10b637a83; -[SCNMessagingEelMessageReEncryptEvent setAnalyticsMessageId:] */

void FUN_10b637a7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b637a84; end: 10b637a8b; -[SCNMessagingEelMessageReEncryptEvent requestBatchId] */

undefined8 FUN_10b637a84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b637a8c; end: 10b637a93; -[SCNMessagingEelMessageReEncryptEvent setRequestBatchId:] */

void FUN_10b637a8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b637a94; end: 10b637a9b; -[SCNMessagingEelMessageReEncryptEvent currentUserPkId] */

undefined8 FUN_10b637a94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b637a9c; end: 10b637aa3; -[SCNMessagingEelMessageReEncryptEvent setCurrentUserPkId:] */

void FUN_10b637a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b637aa4; end: 10b637aab; -[SCNMessagingEelMessageReEncryptEvent isSuccess] */

undefined1 FUN_10b637aa4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b637aac; end: 10b637ab3; -[SCNMessagingEelMessageReEncryptEvent setIsSuccess:] */

void FUN_10b637aac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b637ab4; end: 10b637abb; -[SCNMessagingEelMessageReEncryptEvent reEncryptionType] */

undefined8 FUN_10b637ab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b637abc; end: 10b637ac3; -[SCNMessagingEelMessageReEncryptEvent setReEncryptionType:] */

void FUN_10b637abc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b637ac4; end: 10b637acb; -[SCNMessagingEelMessageReEncryptEvent failureReason] */

undefined8 FUN_10b637ac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b637acc; end: 10b637aef; -[SCNMessagingEelMessageReEncryptEvent setFailureReason:] */

void FUN_10b637acc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b637b90();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b637af0; end: 10b637af7; -[SCNMessagingEelMessageReEncryptEvent decryptFailureReason] */

undefined8 FUN_10b637af0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b637af8; end: 10b637b1b; -[SCNMessagingEelMessageReEncryptEvent setDecryptFailureReason:] */

void FUN_10b637af8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b637b90();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b637b1c; end: 10b637b23; -[SCNMessagingEelMessageReEncryptEvent latencyUs] */

undefined8 FUN_10b637b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b637b24; end: 10b637b2b; -[SCNMessagingEelMessageReEncryptEvent setLatencyUs:] */

void FUN_10b637b24(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10b637b2c; end: 10b637b33; -[SCNMessagingEelMessageReEncryptEvent messageVersion] */

undefined8 FUN_10b637b2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b637b34; end: 10b637b3b; -[SCNMessagingEelMessageReEncryptEvent setMessageVersion:] */

void FUN_10b637b34(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 10b637b3c; end: 10b637b43; -[SCNMessagingEelMessageReEncryptEvent pkIds] */

undefined8 FUN_10b637b3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b637b44; end: 10b637b4b; -[SCNMessagingEelMessageReEncryptEvent setPkIds:] */

void FUN_10b637b44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b637b4c; end: 10b637b8f; -[SCNMessagingEelMessageReEncryptEvent .cxx_destruct] */

void FUN_10b637b4c(long param_1)

{
  func_0x00010b637ba0(param_1 + 0x50);
  func_0x00010b637ba0(param_1 + 0x38);
  func_0x00010b637ba0(param_1 + 0x30);
  func_0x00010b637ba0(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b637b90; end: 10b637baf;  */

void FUN_10b637b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b637bb0; end: 10b637c73; -[SCNMessagingEnhancedNotificationPreference isEqual:] */

bool FUN_10b637bb0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126da9c8;
  _objc_opt_class(PTR_PTR_1126da9c8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_3);
    uVar3 = param_1;
    func_0x00010bf69d60();
    uVar4 = param_3;
    func_0x00010bf69d60();
    if (uVar3 == uVar4) {
      func_0x00010c26b2e0(param_1);
      func_0x00010c26b2e0(param_3);
      bVar1 = param_1 == param_3;
    }
    else {
      bVar1 = false;
    }
    func_0x00010b637cf8();
  }
  func_0x00010b637cf8();
  return bVar1;
}



/* Entry: 10b637c74; end: 10b637ce7; -[SCNMessagingEnhancedNotificationPreference hash] */

ulong FUN_10b637c74(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010bf69d60(param_1);
  func_0x00010c26b2e0(param_1);
  func_0x00010b637cf8();
  return uVar2 ^ uVar1 ^ param_1;
}



/* Entry: 10b637ce8; end: 10b637cef; -[SCNMessagingEnhancedNotificationPreference setDefaultNotificationPreference:] */

void FUN_10b637ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b637cf0; end: 10b637cff; -[SCNMessagingEnhancedNotificationPreference setTemporaryMuteExpirationDeadlineMillis:] */

void FUN_10b637cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b637d00; end: 10b637d73; -[SCNMessagingExpiredStreakMetadata initWithStreakCount:timestampMs:isRestorable:isRestorableExtended:restoreExpirationTimestampMs:] */

void FUN_10b637d00(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_112706f00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
  }
  return;
}



/* Entry: 10b637d74; end: 10b637d7b; -[SCNMessagingExpiredStreakMetadata streakCount] */

undefined4 FUN_10b637d74(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b637d7c; end: 10b637d83; -[SCNMessagingExpiredStreakMetadata setStreakCount:] */

void FUN_10b637d7c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10b637d84; end: 10b637d8b; -[SCNMessagingExpiredStreakMetadata timestampMs] */

undefined8 FUN_10b637d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b637d8c; end: 10b637d93; -[SCNMessagingExpiredStreakMetadata setTimestampMs:] */

void FUN_10b637d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b637d94; end: 10b637d9b; -[SCNMessagingExpiredStreakMetadata isRestorable] */

undefined1 FUN_10b637d94(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b637d9c; end: 10b637da3; -[SCNMessagingExpiredStreakMetadata setIsRestorable:] */

void FUN_10b637d9c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b637da4; end: 10b637dab; -[SCNMessagingExpiredStreakMetadata isRestorableExtended] */

undefined1 FUN_10b637da4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b637dac; end: 10b637db3; -[SCNMessagingExpiredStreakMetadata setIsRestorableExtended:] */

void FUN_10b637dac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b637db4; end: 10b637dbb; -[SCNMessagingExpiredStreakMetadata restoreExpirationTimestampMs] */

undefined8 FUN_10b637db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b637dbc; end: 10b637dc3; -[SCNMessagingExpiredStreakMetadata setRestoreExpirationTimestampMs:] */

void FUN_10b637dbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b637dc4; end: 10b637e9f; -[SCNMessagingExternalContentMetadata initWithContentReferences:remoteMediaEncryption:] */

undefined1 *
FUN_10b637dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706f08;
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



/* Entry: 10b637ea0; end: 10b637eab; -[SCNMessagingExternalContentMetadata init] */

void FUN_10b637ea0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c003b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithContentReferences_remote_1125de888,0,0);
  return;
}



/* Entry: 10b637eac; end: 10b637eb3; -[SCNMessagingExternalContentMetadata contentReferences] */

undefined8 FUN_10b637eac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b637eb4; end: 10b637ebb; -[SCNMessagingExternalContentMetadata setContentReferences:] */

void FUN_10b637eb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b637ebc; end: 10b637ec3; -[SCNMessagingExternalContentMetadata remoteMediaEncryption] */

undefined8 FUN_10b637ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b637ec4; end: 10b637ecb; -[SCNMessagingExternalContentMetadata setRemoteMediaEncryption:] */

void FUN_10b637ec4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b637ecc; end: 10b637efb; -[SCNMessagingExternalContentMetadata .cxx_destruct] */

void FUN_10b637ecc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b637efc; end: 10b637f93; -[SCNMessagingExternalContentReference initWithReference:appOrigin:] */

undefined1 *
FUN_10b637efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706f10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b637f94; end: 10b637f9b; -[SCNMessagingExternalContentReference reference] */

undefined8 FUN_10b637f94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b637f9c; end: 10b637fcb; -[SCNMessagingExternalContentReference setReference:] */

void FUN_10b637f9c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b637fcc; end: 10b637fd3; -[SCNMessagingExternalContentReference appOrigin] */

undefined8 FUN_10b637fcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b637fd4; end: 10b637fdb; -[SCNMessagingExternalContentReference setAppOrigin:] */

void FUN_10b637fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b637fdc; end: 10b637fe7; -[SCNMessagingExternalContentReference .cxx_destruct] */

void FUN_10b637fdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b637fe8; end: 10b6380bb; -[SCNMessagingExtractMessageResultLite initWithError:contents:] */

undefined1 *
FUN_10b637fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706f18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
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



/* Entry: 10b6380bc; end: 10b6380c7; -[SCNMessagingExtractMessageResultLite init] */

void FUN_10b6380bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithError_contents__1125e1bb0,0,0);
  return;
}



/* Entry: 10b6380c8; end: 10b6380cf; -[SCNMessagingExtractMessageResultLite error] */

undefined8 FUN_10b6380c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6380d0; end: 10b6380ff; -[SCNMessagingExtractMessageResultLite setError:] */

void FUN_10b6380d0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b638100; end: 10b638107; -[SCNMessagingExtractMessageResultLite contents] */

undefined8 FUN_10b638100(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b638108; end: 10b63810f; -[SCNMessagingExtractMessageResultLite setContents:] */

void FUN_10b638108(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b638110; end: 10b63813f; -[SCNMessagingExtractMessageResultLite .cxx_destruct] */

void FUN_10b638110(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b638140; end: 10b63822f; -[SCNMessagingFailedMedia initWithLocalMediaReference:failureReason:failedUploadStep:] */

undefined1 *
FUN_10b638140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112706f20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
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
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b638230; end: 10b63823b; -[SCNMessagingFailedMedia initWithLocalMediaReference:] */

void FUN_10b638230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0268f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLocalMediaReference_fail_1125e7420,param_3,0,0);
  return;
}



/* Entry: 10b63823c; end: 10b638243; -[SCNMessagingFailedMedia localMediaReference] */

undefined8 FUN_10b63823c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b638244; end: 10b638263; -[SCNMessagingFailedMedia setLocalMediaReference:] */

void FUN_10b638244(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6382f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b638264; end: 10b63826b; -[SCNMessagingFailedMedia failureReason] */

undefined8 FUN_10b638264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63826c; end: 10b63828b; -[SCNMessagingFailedMedia setFailureReason:] */

void FUN_10b63826c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6382f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63828c; end: 10b638293; -[SCNMessagingFailedMedia failedUploadStep] */

undefined8 FUN_10b63828c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b638294; end: 10b6382b3; -[SCNMessagingFailedMedia setFailedUploadStep:] */

void FUN_10b638294(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6382f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6382b4; end: 10b6382ef; -[SCNMessagingFailedMedia .cxx_destruct] */

void FUN_10b6382b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6382f0; end: 10b638307;  */

void FUN_10b6382f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b638308; end: 10b638357; -[SCNMessagingFailedRetrievedMessageResult initWithServerMessageId:isRetryable:] */

void FUN_10b638308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706f28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  return;
}



/* Entry: 10b638358; end: 10b63835f; -[SCNMessagingFailedRetrievedMessageResult serverMessageId] */

undefined8 FUN_10b638358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b638360; end: 10b638367; -[SCNMessagingFailedRetrievedMessageResult setServerMessageId:] */

void FUN_10b638360(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b638368; end: 10b63836f; -[SCNMessagingFailedRetrievedMessageResult isRetryable] */

undefined1 FUN_10b638368(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b638370; end: 10b638377; -[SCNMessagingFailedRetrievedMessageResult setIsRetryable:] */

void FUN_10b638370(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b638378; end: 10b6383bb; -[SCNMessagingFeedEntry initWithConversationId:lastEventUpdateTimestamp:participants:conversationType:displayInfo:interactionInfo:notificationSettings:categoryType:] */

void FUN_10b638378(void)

{
  func_0x00010c005080();
  return;
}



/* Entry: 10b6383bc; end: 10b6383db; -[SCNMessagingFeedEntry setConversationId:] */

void FUN_10b6383bc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6385f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6383dc; end: 10b6383e3; -[SCNMessagingFeedEntry setLastEventUpdateTimestamp:] */

void FUN_10b6383dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b6383e4; end: 10b6383eb; -[SCNMessagingFeedEntry setParticipants:] */

void FUN_10b6383e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b6383ec; end: 10b6383f3; -[SCNMessagingFeedEntry conversationTitle] */

undefined8 FUN_10b6383ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6383f4; end: 10b6383fb; -[SCNMessagingFeedEntry setConversationTitle:] */

void FUN_10b6383f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b6383fc; end: 10b638403; -[SCNMessagingFeedEntry setConversationType:] */

void FUN_10b6383fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b638404; end: 10b63840b; -[SCNMessagingFeedEntry conversationSubType] */

undefined8 FUN_10b638404(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b63840c; end: 10b63842b; -[SCNMessagingFeedEntry setConversationSubType:] */

void FUN_10b63840c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6385f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63842c; end: 10b63844b; -[SCNMessagingFeedEntry setDisplayInfo:] */

void FUN_10b63842c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6385f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63844c; end: 10b63846b; -[SCNMessagingFeedEntry setInteractionInfo:] */

void FUN_10b63844c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6385f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63846c; end: 10b63848b; -[SCNMessagingFeedEntry setStreakMetadata:] */

void FUN_10b63846c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6385f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63848c; end: 10b6384ab; -[SCNMessagingFeedEntry setNotificationSettings:] */

void FUN_10b63848c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6385f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6384ac; end: 10b6384b3; -[SCNMessagingFeedEntry pinnedTimestampMs] */

undefined8 FUN_10b6384ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b6384b4; end: 10b6384d3; -[SCNMessagingFeedEntry setPinnedTimestampMs:] */

void FUN_10b6384b4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6385f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6384d4; end: 10b6384db; -[SCNMessagingFeedEntry categoryType] */

undefined8 FUN_10b6384d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b6384dc; end: 10b6384e3; -[SCNMessagingFeedEntry setCategoryType:] */

void FUN_10b6384dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 10b6384e4; end: 10b6384eb; -[SCNMessagingFeedEntry categoryId] */

undefined8 FUN_10b6384e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b6384ec; end: 10b63850b; -[SCNMessagingFeedEntry setCategoryId:] */

void FUN_10b6384ec(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6385f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x68) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63850c; end: 10b63852b; -[SCNMessagingFeedEntry setSequenceId:] */

void FUN_10b63850c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6385f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x70) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63852c; end: 10b63854b; -[SCNMessagingFeedEntry setConversationSubTypeMetadata:] */

void FUN_10b63852c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6385f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x78) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63854c; end: 10b63856b; -[SCNMessagingFeedEntry setConversationInvitationMetadata:] */

void FUN_10b63854c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6385f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x80) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63856c; end: 10b6385ef; -[SCNMessagingFeedEntry .cxx_destruct] */

void FUN_10b63856c(long param_1)

{
  func_0x00010b638600(param_1 + 0x80);
  func_0x00010b638600(param_1 + 0x78);
  func_0x00010b638600(param_1 + 0x70);
  func_0x00010b638600(param_1 + 0x68);
  func_0x00010b638600(param_1 + 0x58);
  func_0x00010b638600(param_1 + 0x50);
  func_0x00010b638600(param_1 + 0x48);
  func_0x00010b638600(param_1 + 0x40);
  func_0x00010b638600(param_1 + 0x38);
  func_0x00010b638600(param_1 + 0x30);
  func_0x00010b638600(param_1 + 0x20);
  func_0x00010b638600(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6385f0; end: 10b63860f;  */

void FUN_10b6385f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}


