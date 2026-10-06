/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b640a74; end: 10b640a7b; -[SCNMessagingSendMessageResult conversationMessagesMetricsData] */

undefined8 FUN_10b640a74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b640a7c; end: 10b640a83; -[SCNMessagingSendMessageResult setConversationMessagesMetricsData:] */

void FUN_10b640a7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b640a84; end: 10b640a8b; -[SCNMessagingSendMessageResult failedConversationsMetricsData] */

undefined8 FUN_10b640a84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b640a8c; end: 10b640a93; -[SCNMessagingSendMessageResult setFailedConversationsMetricsData:] */

void FUN_10b640a8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b640a94; end: 10b640a9b; -[SCNMessagingSendMessageResult sendMessageAttemptType] */

undefined8 FUN_10b640a94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b640a9c; end: 10b640aa3; -[SCNMessagingSendMessageResult setSendMessageAttemptType:] */

void FUN_10b640a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 10b640aa4; end: 10b640aab; -[SCNMessagingSendMessageResult sendMessageAttemptId] */

undefined8 FUN_10b640aa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b640aac; end: 10b640acb; -[SCNMessagingSendMessageResult setSendMessageAttemptId:] */

void FUN_10b640aac(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b640cd0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x90) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b640acc; end: 10b640ad3; -[SCNMessagingSendMessageResult completedConversationDestinations] */

undefined8 FUN_10b640acc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b640ad4; end: 10b640adb; -[SCNMessagingSendMessageResult setCompletedConversationDestinations:] */

void FUN_10b640ad4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b640adc; end: 10b640ae3; -[SCNMessagingSendMessageResult completedStoryDestinations] */

undefined8 FUN_10b640adc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10b640ae4; end: 10b640aeb; -[SCNMessagingSendMessageResult setCompletedStoryDestinations:] */

void FUN_10b640ae4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b640aec; end: 10b640af3; -[SCNMessagingSendMessageResult completedPhoneNumberDestinations] */

undefined8 FUN_10b640aec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b640af4; end: 10b640afb; -[SCNMessagingSendMessageResult setCompletedPhoneNumberDestinations:] */

void FUN_10b640af4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b640afc; end: 10b640b03; -[SCNMessagingSendMessageResult completedMassSnapDestinations] */

undefined8 FUN_10b640afc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10b640b04; end: 10b640b0b; -[SCNMessagingSendMessageResult setCompletedMassSnapDestinations:] */

void FUN_10b640b04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b640b0c; end: 10b640b13; -[SCNMessagingSendMessageResult messageEncryption] */

undefined8 FUN_10b640b0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10b640b14; end: 10b640b1b; -[SCNMessagingSendMessageResult setMessageEncryption:] */

void FUN_10b640b14(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 10b640b1c; end: 10b640b23; -[SCNMessagingSendMessageResult encryptFailure] */

undefined8 FUN_10b640b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10b640b24; end: 10b640b43; -[SCNMessagingSendMessageResult setEncryptFailure:] */

void FUN_10b640b24(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b640cd0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0xc0);
  *(undefined8 *)(unaff_x20 + 0xc0) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b640b44; end: 10b640b4b; -[SCNMessagingSendMessageResult encryptSkipReason] */

undefined8 FUN_10b640b44(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10b640b4c; end: 10b640b6b; -[SCNMessagingSendMessageResult setEncryptSkipReason:] */

void FUN_10b640b4c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b640cd0();
  uVar1 = *(undefined8 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x20 + 200) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b640b6c; end: 10b640b73; -[SCNMessagingSendMessageResult eelCapableDryRunMode] */

undefined1 FUN_10b640b6c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b640b74; end: 10b640b7b; -[SCNMessagingSendMessageResult setEelCapableDryRunMode:] */

void FUN_10b640b74(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b640b7c; end: 10b640b83; -[SCNMessagingSendMessageResult recipientPkIds] */

undefined8 FUN_10b640b7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10b640b84; end: 10b640b8b; -[SCNMessagingSendMessageResult setRecipientPkIds:] */

void FUN_10b640b84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b640b8c; end: 10b640b93; -[SCNMessagingSendMessageResult mediaOrchestrationAttemptIds] */

undefined8 FUN_10b640b8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10b640b94; end: 10b640b9b; -[SCNMessagingSendMessageResult setMediaOrchestrationAttemptIds:] */

void FUN_10b640b94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b640b9c; end: 10b640ba3; -[SCNMessagingSendMessageResult deviceTimeOffsetMs] */

undefined8 FUN_10b640b9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 10b640ba4; end: 10b640bc3; -[SCNMessagingSendMessageResult setDeviceTimeOffsetMs:] */

void FUN_10b640ba4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b640cd0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(unaff_x20 + 0xe0) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b640bc4; end: 10b640bcb; -[SCNMessagingSendMessageResult partialFailures] */

undefined8 FUN_10b640bc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10b640bcc; end: 10b640bd3; -[SCNMessagingSendMessageResult setPartialFailures:] */

void FUN_10b640bcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b640bd4; end: 10b640bdb; -[SCNMessagingSendMessageResult inBackground] */

undefined8 FUN_10b640bd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 10b640bdc; end: 10b640bfb; -[SCNMessagingSendMessageResult setInBackground:] */

void FUN_10b640bdc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b640cd0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x20 + 0xf0) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b640bfc; end: 10b640ccf; -[SCNMessagingSendMessageResult .cxx_destruct] */

void FUN_10b640bfc(long param_1)

{
  func_0x00010b640ce0(param_1 + 0xf0);
  func_0x00010b640ce0(param_1 + 0xe8);
  func_0x00010b640ce0(param_1 + 0xe0);
  func_0x00010b640ce0(param_1 + 0xd8);
  func_0x00010b640ce0(param_1 + 0xd0);
  func_0x00010b640ce0(param_1 + 200);
  func_0x00010b640ce0(param_1 + 0xc0);
  func_0x00010b640ce0(param_1 + 0xb0);
  func_0x00010b640ce0(param_1 + 0xa8);
  func_0x00010b640ce0(param_1 + 0xa0);
  func_0x00010b640ce0(param_1 + 0x98);
  func_0x00010b640ce0(param_1 + 0x90);
  func_0x00010b640ce0(param_1 + 0x80);
  func_0x00010b640ce0(param_1 + 0x78);
  func_0x00010b640ce0(param_1 + 0x70);
  func_0x00010b640ce0(param_1 + 0x68);
  func_0x00010b640ce0(param_1 + 0x60);
  func_0x00010b640ce0(param_1 + 0x40);
  func_0x00010b640ce0(param_1 + 0x38);
  func_0x00010b640ce0(param_1 + 0x30);
  func_0x00010b640ce0(param_1 + 0x28);
  func_0x00010b640ce0(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b640cd0; end: 10b640cff;  */

void FUN_10b640cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b640d00; end: 10b640e03; -[SCNMessagingSendMessageStartedEvent initWithContent:userActionTimestamp:sendMessageAttemptType:userActionId:inBackground:] */

undefined1 *
FUN_10b640d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1127071a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b640e04; end: 10b640e0b; -[SCNMessagingSendMessageStartedEvent initWithContent:userActionTimestamp:sendMessageAttemptType:userActionId:] */

void FUN_10b640e04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c002d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithContent_userActionTimest_1125de510);
  return;
}



/* Entry: 10b640e0c; end: 10b640e13; -[SCNMessagingSendMessageStartedEvent content] */

undefined8 FUN_10b640e0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b640e14; end: 10b640e33; -[SCNMessagingSendMessageStartedEvent setContent:] */

void FUN_10b640e14(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b640ee0();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b640e34; end: 10b640e3b; -[SCNMessagingSendMessageStartedEvent userActionTimestamp] */

undefined8 FUN_10b640e34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b640e3c; end: 10b640e43; -[SCNMessagingSendMessageStartedEvent setUserActionTimestamp:] */

void FUN_10b640e3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b640e44; end: 10b640e4b; -[SCNMessagingSendMessageStartedEvent sendMessageAttemptType] */

undefined8 FUN_10b640e44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b640e4c; end: 10b640e53; -[SCNMessagingSendMessageStartedEvent setSendMessageAttemptType:] */

void FUN_10b640e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b640e54; end: 10b640e5b; -[SCNMessagingSendMessageStartedEvent userActionId] */

undefined8 FUN_10b640e54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b640e5c; end: 10b640e7b; -[SCNMessagingSendMessageStartedEvent setUserActionId:] */

void FUN_10b640e5c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b640ee0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b640e7c; end: 10b640e83; -[SCNMessagingSendMessageStartedEvent inBackground] */

undefined8 FUN_10b640e7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b640e84; end: 10b640ea3; -[SCNMessagingSendMessageStartedEvent setInBackground:] */

void FUN_10b640e84(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b640ee0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b640ea4; end: 10b640edf; -[SCNMessagingSendMessageStartedEvent .cxx_destruct] */

void FUN_10b640ea4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b640ee0; end: 10b640ef7;  */

void FUN_10b640ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b640ef8; end: 10b640f8f; -[SCNMessagingServerMessageIdentifier initWithServerConversationId:serverMessageId:] */

undefined1 *
FUN_10b640ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127071a8;
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



/* Entry: 10b640f90; end: 10b640f97; -[SCNMessagingServerMessageIdentifier serverConversationId] */

undefined8 FUN_10b640f90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b640f98; end: 10b640fc7; -[SCNMessagingServerMessageIdentifier setServerConversationId:] */

void FUN_10b640f98(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b640fc8; end: 10b640fcf; -[SCNMessagingServerMessageIdentifier serverMessageId] */

undefined8 FUN_10b640fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b640fd0; end: 10b640fd7; -[SCNMessagingServerMessageIdentifier setServerMessageId:] */

void FUN_10b640fd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b640fd8; end: 10b640fe3; -[SCNMessagingServerMessageIdentifier .cxx_destruct] */

void FUN_10b640fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b640fe4; end: 10b64100b; -[SCNMessagingSessionParameters initWithDatabaseLocation:userId:userAgentPrefix:debug:] */

void FUN_10b640fe4(void)

{
  func_0x00010c009480();
  return;
}



/* Entry: 10b64100c; end: 10b641013; -[SCNMessagingSessionParameters setDatabaseLocation:] */

void FUN_10b64100c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b641014; end: 10b641033; -[SCNMessagingSessionParameters setUserId:] */

void FUN_10b641014(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6410f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b641034; end: 10b64103b; -[SCNMessagingSessionParameters setUserAgentPrefix:] */

void FUN_10b641034(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b64103c; end: 10b641043; -[SCNMessagingSessionParameters setDebug:] */

void FUN_10b64103c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b641044; end: 10b641063; -[SCNMessagingSessionParameters setTweaks:] */

void FUN_10b641044(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6410f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b641064; end: 10b641083; -[SCNMessagingSessionParameters setCofOverrides:] */

void FUN_10b641064(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6410f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b641084; end: 10b6410a3; -[SCNMessagingSessionParameters setLaunchTrigger:] */

void FUN_10b641084(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6410f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6410a4; end: 10b6410ef; -[SCNMessagingSessionParameters .cxx_destruct] */

void FUN_10b6410a4(long param_1)

{
  func_0x00010b641100(param_1 + 0x38);
  func_0x00010b641100(param_1 + 0x30);
  func_0x00010b641100(param_1 + 0x28);
  func_0x00010b641100(param_1 + 0x20);
  func_0x00010b641100(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6410f0; end: 10b64110f;  */

void FUN_10b6410f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b641110; end: 10b641157; -[SCNMessagingShareMetadata initWithStoryMediaState:] */

void FUN_10b641110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127071b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b641158; end: 10b64115f; -[SCNMessagingShareMetadata storyMediaState] */

undefined8 FUN_10b641158(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b641160; end: 10b641167; -[SCNMessagingShareMetadata setStoryMediaState:] */

void FUN_10b641160(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b641168; end: 10b64116f; -[SCNMessagingSnapDisplayInfo hasAudio] */

undefined1 FUN_10b641168(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b641170; end: 10b641177; -[SCNMessagingSnapDisplayInfo setHasAudio:] */

void FUN_10b641170(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b641178; end: 10b641187; -[SCNMessagingSnapItem initWithState:hasAudio:] */

void FUN_10b641178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04bed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithState_hasAudio_comboSnap_1125f09b0,param_3,param_4,0,0,0);
  return;
}



/* Entry: 10b641188; end: 10b64118f; -[SCNMessagingSnapItem setState:] */

void FUN_10b641188(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b641190; end: 10b641197; -[SCNMessagingSnapItem setHasAudio:] */

void FUN_10b641190(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b641198; end: 10b6411b7; -[SCNMessagingSnapItem setComboSnapItemInfo:] */

void FUN_10b641198(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b641234();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6411b8; end: 10b6411d7; -[SCNMessagingSnapItem setSnapModeState:] */

void FUN_10b6411b8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b641234();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6411d8; end: 10b6411f7; -[SCNMessagingSnapItem setUnviewedSnapCount:] */

void FUN_10b6411d8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b641234();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6411f8; end: 10b641233; -[SCNMessagingSnapItem .cxx_destruct] */

void FUN_10b6411f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b641234; end: 10b64124b;  */

void FUN_10b641234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b64124c; end: 10b64130b; -[SCNMessagingSnapModeInfo initWithOneTimeOnlySnap:selfDestructSnapDurationMs:] */

undefined1 *
FUN_10b64124c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127071d0;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b64130c; end: 10b641317; -[SCNMessagingSnapModeInfo init] */

void FUN_10b64130c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c031af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithOneTimeOnlySnap_selfDest_1125ea0b0,0,0);
  return;
}



/* Entry: 10b641318; end: 10b64131f; -[SCNMessagingSnapModeInfo oneTimeOnlySnap] */

undefined8 FUN_10b641318(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b641320; end: 10b641343; -[SCNMessagingSnapModeInfo setOneTimeOnlySnap:] */

void FUN_10b641320(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6413a0();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b641344; end: 10b64134b; -[SCNMessagingSnapModeInfo selfDestructSnapDurationMs] */

undefined8 FUN_10b641344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64134c; end: 10b64136f; -[SCNMessagingSnapModeInfo setSelfDestructSnapDurationMs:] */

void FUN_10b64134c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6413a0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b641370; end: 10b64139f; -[SCNMessagingSnapModeInfo .cxx_destruct] */

void FUN_10b641370(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6413a0; end: 10b6413af;  */

void FUN_10b6413a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b6413b0; end: 10b6413f7; -[SCNMessagingSnapReplyMetadata initWithStoryMediaState:] */

void FUN_10b6413b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127071d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b6413f8; end: 10b6413ff; -[SCNMessagingSnapReplyMetadata storyMediaState] */

undefined8 FUN_10b6413f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b641400; end: 10b641407; -[SCNMessagingSnapReplyMetadata setStoryMediaState:] */

void FUN_10b641400(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b641408; end: 10b641547; -[SCNMessagingSnapchatterRecipient initWithUserId:displayName:avatarId:selfieId:] */

undefined1 *
FUN_10b641408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1127071e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_10b6415f8(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10b6415f8(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_10b6415f8(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b641548; end: 10b641553; -[SCNMessagingSnapchatterRecipient initWithUserId:displayName:] */

void FUN_10b641548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c05b0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUserId_displayName_avata_1125f4640,param_3,param_4,0,0);
  return;
}



/* Entry: 10b641554; end: 10b64155b; -[SCNMessagingSnapchatterRecipient userId] */

undefined8 FUN_10b641554(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64155c; end: 10b64158b; -[SCNMessagingSnapchatterRecipient setUserId:] */

void FUN_10b64155c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b64158c; end: 10b641593; -[SCNMessagingSnapchatterRecipient displayName] */

undefined8 FUN_10b64158c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b641594; end: 10b64159b; -[SCNMessagingSnapchatterRecipient setDisplayName:] */

void FUN_10b641594(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b64159c; end: 10b6415a3; -[SCNMessagingSnapchatterRecipient avatarId] */

undefined8 FUN_10b64159c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6415a4; end: 10b6415ab; -[SCNMessagingSnapchatterRecipient setAvatarId:] */

void FUN_10b6415a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b6415ac; end: 10b6415b3; -[SCNMessagingSnapchatterRecipient selfieId] */

undefined8 FUN_10b6415ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6415b4; end: 10b6415bb; -[SCNMessagingSnapchatterRecipient setSelfieId:] */

void FUN_10b6415b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}


