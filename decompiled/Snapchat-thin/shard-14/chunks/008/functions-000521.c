/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b63f8ac; end: 10b63f8b3; -[SCNMessagingReceiveMessageMetricsResult setEelInitEnabled:] */

void FUN_10b63f8ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10b63f8b4; end: 10b63f8bb; -[SCNMessagingReceiveMessageMetricsResult eelAckEnabled] */

undefined1 FUN_10b63f8b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b63f8bc; end: 10b63f8c3; -[SCNMessagingReceiveMessageMetricsResult setEelAckEnabled:] */

void FUN_10b63f8bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 10b63f8c4; end: 10b63f8cb; -[SCNMessagingReceiveMessageMetricsResult messageVersion] */

undefined8 FUN_10b63f8c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b63f8cc; end: 10b63f8d3; -[SCNMessagingReceiveMessageMetricsResult setMessageVersion:] */

void FUN_10b63f8cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 10b63f8d4; end: 10b63f8db; -[SCNMessagingReceiveMessageMetricsResult watermarkDiff] */

undefined8 FUN_10b63f8d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b63f8dc; end: 10b63f8e3; -[SCNMessagingReceiveMessageMetricsResult setWatermarkDiff:] */

void FUN_10b63f8dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 10b63f8e4; end: 10b63f8eb; -[SCNMessagingReceiveMessageMetricsResult inActiveConversation] */

undefined1 FUN_10b63f8e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b63f8ec; end: 10b63f8f3; -[SCNMessagingReceiveMessageMetricsResult setInActiveConversation:] */

void FUN_10b63f8ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10b63f8f4; end: 10b63f8fb; -[SCNMessagingReceiveMessageMetricsResult messageCreationTimestamp] */

undefined8 FUN_10b63f8f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10b63f8fc; end: 10b63f903; -[SCNMessagingReceiveMessageMetricsResult setMessageCreationTimestamp:] */

void FUN_10b63f8fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 10b63f904; end: 10b63f90b; -[SCNMessagingReceiveMessageMetricsResult deviceTimeOffsetMs] */

undefined8 FUN_10b63f904(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b63f90c; end: 10b63f92b; -[SCNMessagingReceiveMessageMetricsResult setDeviceTimeOffsetMs:] */

void FUN_10b63f90c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63f990();
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0xa8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63f92c; end: 10b63f98f; -[SCNMessagingReceiveMessageMetricsResult .cxx_destruct] */

void FUN_10b63f92c(long param_1)

{
  func_0x00010b63f9a0(param_1 + 0xa8);
  func_0x00010b63f9a0(param_1 + 0x80);
  func_0x00010b63f9a0(param_1 + 0x68);
  func_0x00010b63f9a0(param_1 + 0x60);
  func_0x00010b63f9a0(param_1 + 0x50);
  func_0x00010b63f9a0(param_1 + 0x30);
  func_0x00010b63f9a0(param_1 + 0x28);
  func_0x00010b63f9a0(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b63f990; end: 10b63f9b7;  */

void FUN_10b63f990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b63f9b8; end: 10b63fa77; -[SCNMessagingRecipientInfo initWithSnapchatterInfo:groupInfo:] */

undefined1 *
FUN_10b63f9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707170;
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



/* Entry: 10b63fa78; end: 10b63fa83; -[SCNMessagingRecipientInfo init] */

void FUN_10b63fa78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c049410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithSnapchatterInfo_groupInf_1125eff00,0,0);
  return;
}



/* Entry: 10b63fa84; end: 10b63fa8b; -[SCNMessagingRecipientInfo snapchatterInfo] */

undefined8 FUN_10b63fa84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63fa8c; end: 10b63faaf; -[SCNMessagingRecipientInfo setSnapchatterInfo:] */

void FUN_10b63fa8c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63fb0c();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63fab0; end: 10b63fab7; -[SCNMessagingRecipientInfo groupInfo] */

undefined8 FUN_10b63fab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63fab8; end: 10b63fadb; -[SCNMessagingRecipientInfo setGroupInfo:] */

void FUN_10b63fab8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63fb0c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63fadc; end: 10b63fb0b; -[SCNMessagingRecipientInfo .cxx_destruct] */

void FUN_10b63fadc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63fb0c; end: 10b63fb1b;  */

void FUN_10b63fb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b63fb1c; end: 10b63fc83; -[SCNMessagingRecipientItem initWithConversationId:lastEventUpdateTimestamp:maybeRepliableSnapHasAudio:recipientInfo:pinnedTimestampMs:conversationSubType:] */

undefined1 *
FUN_10b63fb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112707178;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63fc84; end: 10b63fc97; -[SCNMessagingRecipientItem initWithConversationId:lastEventUpdateTimestamp:recipientInfo:] */

void FUN_10b63fc84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c005070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithConversationId_lastEvent_1125dede8,param_3,param_4,0,param_5,0,0)
  ;
  return;
}



/* Entry: 10b63fc98; end: 10b63fc9f; -[SCNMessagingRecipientItem conversationId] */

undefined8 FUN_10b63fc98(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63fca0; end: 10b63fcbf; -[SCNMessagingRecipientItem setConversationId:] */

void FUN_10b63fca0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63fdb4();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63fcc0; end: 10b63fcc7; -[SCNMessagingRecipientItem lastEventUpdateTimestamp] */

undefined8 FUN_10b63fcc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63fcc8; end: 10b63fccf; -[SCNMessagingRecipientItem setLastEventUpdateTimestamp:] */

void FUN_10b63fcc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b63fcd0; end: 10b63fcd7; -[SCNMessagingRecipientItem maybeRepliableSnapHasAudio] */

undefined8 FUN_10b63fcd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63fcd8; end: 10b63fcf7; -[SCNMessagingRecipientItem setMaybeRepliableSnapHasAudio:] */

void FUN_10b63fcd8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63fdb4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63fcf8; end: 10b63fcff; -[SCNMessagingRecipientItem recipientInfo] */

undefined8 FUN_10b63fcf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b63fd00; end: 10b63fd1f; -[SCNMessagingRecipientItem setRecipientInfo:] */

void FUN_10b63fd00(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63fdb4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63fd20; end: 10b63fd27; -[SCNMessagingRecipientItem pinnedTimestampMs] */

undefined8 FUN_10b63fd20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b63fd28; end: 10b63fd47; -[SCNMessagingRecipientItem setPinnedTimestampMs:] */

void FUN_10b63fd28(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63fdb4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63fd48; end: 10b63fd4f; -[SCNMessagingRecipientItem conversationSubType] */

undefined8 FUN_10b63fd48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b63fd50; end: 10b63fd6f; -[SCNMessagingRecipientItem setConversationSubType:] */

void FUN_10b63fd50(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63fdb4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63fd70; end: 10b63fdb3; -[SCNMessagingRecipientItem .cxx_destruct] */

void FUN_10b63fd70(long param_1)

{
  func_0x00010b63fdcc(param_1 + 0x30);
  func_0x00010b63fdcc(param_1 + 0x28);
  func_0x00010b63fdcc(param_1 + 0x20);
  func_0x00010b63fdcc(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63fdb4; end: 10b63fdd3;  */

void FUN_10b63fdb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b63fdd4; end: 10b63fec7; -[SCNMessagingRemoteMediaInfo initWithContentObject:legacyMediaId:mediaType:hasAudio:] */

undefined1 *
FUN_10b63fdd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112707180;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63fec8; end: 10b63fedb; -[SCNMessagingRemoteMediaInfo initWithMediaType:hasAudio:] */

void FUN_10b63fec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c003950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithContentObject_legacyMedi_1125de818,0,0,param_3,param_4);
  return;
}



/* Entry: 10b63fedc; end: 10b63fee3; -[SCNMessagingRemoteMediaInfo contentObject] */

undefined8 FUN_10b63fedc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63fee4; end: 10b63feeb; -[SCNMessagingRemoteMediaInfo setContentObject:] */

void FUN_10b63fee4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63feec; end: 10b63fef3; -[SCNMessagingRemoteMediaInfo legacyMediaId] */

undefined8 FUN_10b63feec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63fef4; end: 10b63fefb; -[SCNMessagingRemoteMediaInfo setLegacyMediaId:] */

void FUN_10b63fef4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63fefc; end: 10b63ff03; -[SCNMessagingRemoteMediaInfo mediaType] */

undefined8 FUN_10b63fefc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b63ff04; end: 10b63ff0b; -[SCNMessagingRemoteMediaInfo setMediaType:] */

void FUN_10b63ff04(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b63ff0c; end: 10b63ff13; -[SCNMessagingRemoteMediaInfo hasAudio] */

undefined1 FUN_10b63ff0c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b63ff14; end: 10b63ff1b; -[SCNMessagingRemoteMediaInfo setHasAudio:] */

void FUN_10b63ff14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63ff1c; end: 10b63ff4b; -[SCNMessagingRemoteMediaInfo .cxx_destruct] */

void FUN_10b63ff1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b63ff4c; end: 10b63ffe3; -[SCNMessagingReplayMetadata initWithUserId:count:] */

undefined1 *
FUN_10b63ff4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112707188;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63ffe4; end: 10b63ffeb; -[SCNMessagingReplayMetadata userId] */

undefined8 FUN_10b63ffe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63ffec; end: 10b64001b; -[SCNMessagingReplayMetadata setUserId:] */

void FUN_10b63ffec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b64001c; end: 10b640023; -[SCNMessagingReplayMetadata count] */

undefined4 FUN_10b64001c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b640024; end: 10b64002b; -[SCNMessagingReplayMetadata setCount:] */

void FUN_10b640024(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b64002c; end: 10b640037; -[SCNMessagingReplayMetadata .cxx_destruct] */

void FUN_10b64002c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b640038; end: 10b6401bb; -[SCNMessagingSendMessageAnalytics initWithSource:recipientCount:conversationSubTypeMetadata:conversationTitle:oneOnOneConversationIds:groupConversationIds:] */

undefined1 *
FUN_10b640038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112707190;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_10b64029c(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_10b64029c(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    FUN_10b64029c(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    FUN_10b64029c(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6401bc; end: 10b6401cf; -[SCNMessagingSendMessageAnalytics initWithSource:recipientCount:] */

void FUN_10b6401bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04a8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithSource_recipientCount_co_1125f0430,param_3,param_4,0,0,0,0);
  return;
}



/* Entry: 10b6401d0; end: 10b6401d7; -[SCNMessagingSendMessageAnalytics source] */

undefined8 FUN_10b6401d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6401d8; end: 10b6401df; -[SCNMessagingSendMessageAnalytics setSource:] */

void FUN_10b6401d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b6401e0; end: 10b6401e7; -[SCNMessagingSendMessageAnalytics recipientCount] */

undefined4 FUN_10b6401e0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b6401e8; end: 10b6401ef; -[SCNMessagingSendMessageAnalytics setRecipientCount:] */

void FUN_10b6401e8(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b6401f0; end: 10b6401f7; -[SCNMessagingSendMessageAnalytics conversationSubTypeMetadata] */

undefined8 FUN_10b6401f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6401f8; end: 10b640227; -[SCNMessagingSendMessageAnalytics setConversationSubTypeMetadata:] */

void FUN_10b6401f8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b640228; end: 10b64022f; -[SCNMessagingSendMessageAnalytics conversationTitle] */

undefined8 FUN_10b640228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b640230; end: 10b640237; -[SCNMessagingSendMessageAnalytics setConversationTitle:] */

void FUN_10b640230(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b640238; end: 10b64023f; -[SCNMessagingSendMessageAnalytics oneOnOneConversationIds] */

undefined8 FUN_10b640238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b640240; end: 10b640247; -[SCNMessagingSendMessageAnalytics setOneOnOneConversationIds:] */

void FUN_10b640240(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b640248; end: 10b64024f; -[SCNMessagingSendMessageAnalytics groupConversationIds] */

undefined8 FUN_10b640248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b640250; end: 10b640257; -[SCNMessagingSendMessageAnalytics setGroupConversationIds:] */

void FUN_10b640250(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b640258; end: 10b64029b; -[SCNMessagingSendMessageAnalytics .cxx_destruct] */

void FUN_10b640258(long param_1)

{
  func_0x00010b6402a4(param_1 + 0x30);
  func_0x00010b6402a4(param_1 + 0x28);
  func_0x00010b6402a4(param_1 + 0x20);
  func_0x00010b6402a4(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b64029c; end: 10b6402ab;  */

void FUN_10b64029c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b6402ac; end: 10b640883; -[SCNMessagingSendMessageResult initWithStatus:failureReason:failureDescription:extendedFailureInfo:content:failedStep:resumeTrigger:userActionTimestamp:startTimestamp:endTimestamp:completedDestinations:failedDestinations:timers:conversationMessagesMetricsData:failedConversationsMetricsData:sendMessageAttemptType:sendMessageAttemptId:completedConversationDestinations:completedStoryDestinations:completedPhoneNumberDestinations:completedMassSnapDestinations:messageEncryption:encryptFailure:encryptSkipReason:eelCapableDryRunMode:recipientPkIds:mediaOrchestrationAttemptIds:deviceTimeOffsetMs:partialFailures:inBackground:] */

undefined8 *
FUN_10b6402ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined1 param_27,undefined4 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010b640cf8();
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  func_0x00010b640cf8();
  _objc_retain(param_17);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  puStack_70 = PTR_PTR_112707198;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_3;
    func_0x00010b640cf8();
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x00010b640ce8(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x00010b640ce8(uVar3);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    puVar1[9] = param_10;
    puVar1[10] = param_11;
    puVar1[0xb] = param_12;
    func_0x00010b640cf8();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    func_0x00010b640ce8(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    func_0x00010b640ce8(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    func_0x00010b640ce8(uVar3);
    puVar1[0x11] = param_18;
    func_0x00010b640cf8();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    func_0x00010b640ce8(uVar3);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    func_0x00010b640ce8(uVar3);
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    func_0x00010b640ce8(uVar3);
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    func_0x00010b640ce8(uVar3);
    puVar1[0x17] = param_24;
    func_0x00010b640cf8();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_25;
    _objc_release(uVar2);
    func_0x00010b640cf8();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_26;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_27;
    uVar2 = param_29;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    func_0x00010b640ce8(uVar3);
    uVar2 = param_30;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = uVar2;
    func_0x00010b640ce8(uVar3);
    func_0x00010b640cf8();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_31;
    _objc_release(uVar2);
    uVar2 = param_32;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1d];
    puVar1[0x1d] = uVar2;
    func_0x00010b640ce8(uVar3);
    func_0x00010b640cf8();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_33;
    _objc_release(uVar2);
  }
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b640884; end: 10b640913; -[SCNMessagingSendMessageResult initWithStatus:content:userActionTimestamp:startTimestamp:endTimestamp:completedDestinations:failedDestinations:timers:conversationMessagesMetricsData:failedConversationsMetricsData:sendMessageAttemptType:sendMessageAttemptId:completedConversationDestinations:completedStoryDestinations:completedPhoneNumberDestinations:completedMassSnapDestinations:messageEncryption:eelCapableDryRunMode:recipientPkIds:mediaOrchestrationAttemptIds:partialFailures:] */

void FUN_10b640884(void)

{
  func_0x00010c04c2a0();
  return;
}



/* Entry: 10b640914; end: 10b64091b; -[SCNMessagingSendMessageResult status] */

undefined8 FUN_10b640914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64091c; end: 10b640923; -[SCNMessagingSendMessageResult setStatus:] */

void FUN_10b64091c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b640924; end: 10b64092b; -[SCNMessagingSendMessageResult failureReason] */

undefined8 FUN_10b640924(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b64092c; end: 10b64094b; -[SCNMessagingSendMessageResult setFailureReason:] */

void FUN_10b64092c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b640cd0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b64094c; end: 10b640953; -[SCNMessagingSendMessageResult failureDescription] */

undefined8 FUN_10b64094c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b640954; end: 10b64095b; -[SCNMessagingSendMessageResult setFailureDescription:] */

void FUN_10b640954(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b64095c; end: 10b640963; -[SCNMessagingSendMessageResult extendedFailureInfo] */

undefined8 FUN_10b64095c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b640964; end: 10b64096b; -[SCNMessagingSendMessageResult setExtendedFailureInfo:] */

void FUN_10b640964(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b64096c; end: 10b640973; -[SCNMessagingSendMessageResult content] */

undefined8 FUN_10b64096c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b640974; end: 10b640993; -[SCNMessagingSendMessageResult setContent:] */

void FUN_10b640974(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b640cd0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b640994; end: 10b64099b; -[SCNMessagingSendMessageResult failedStep] */

undefined8 FUN_10b640994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b64099c; end: 10b6409bb; -[SCNMessagingSendMessageResult setFailedStep:] */

void FUN_10b64099c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b640cd0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6409bc; end: 10b6409c3; -[SCNMessagingSendMessageResult resumeTrigger] */

undefined8 FUN_10b6409bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b6409c4; end: 10b6409e3; -[SCNMessagingSendMessageResult setResumeTrigger:] */

void FUN_10b6409c4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b640cd0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6409e4; end: 10b6409eb; -[SCNMessagingSendMessageResult userActionTimestamp] */

undefined8 FUN_10b6409e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b6409ec; end: 10b6409f3; -[SCNMessagingSendMessageResult setUserActionTimestamp:] */

void FUN_10b6409ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 10b6409f4; end: 10b6409fb; -[SCNMessagingSendMessageResult startTimestamp] */

undefined8 FUN_10b6409f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b6409fc; end: 10b640a03; -[SCNMessagingSendMessageResult setStartTimestamp:] */

void FUN_10b6409fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10b640a04; end: 10b640a0b; -[SCNMessagingSendMessageResult endTimestamp] */

undefined8 FUN_10b640a04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b640a0c; end: 10b640a13; -[SCNMessagingSendMessageResult setEndTimestamp:] */

void FUN_10b640a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10b640a14; end: 10b640a1b; -[SCNMessagingSendMessageResult completedDestinations] */

undefined8 FUN_10b640a14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b640a1c; end: 10b640a3b; -[SCNMessagingSendMessageResult setCompletedDestinations:] */

void FUN_10b640a1c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b640cd0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b640a3c; end: 10b640a43; -[SCNMessagingSendMessageResult failedDestinations] */

undefined8 FUN_10b640a3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b640a44; end: 10b640a63; -[SCNMessagingSendMessageResult setFailedDestinations:] */

void FUN_10b640a44(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b640cd0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x68) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b640a64; end: 10b640a6b; -[SCNMessagingSendMessageResult timers] */

undefined8 FUN_10b640a64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b640a6c; end: 10b640a73; -[SCNMessagingSendMessageResult setTimers:] */

void FUN_10b640a6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}


