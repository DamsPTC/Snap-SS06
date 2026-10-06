/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b63c6cc; end: 10b63c6eb; -[SCNMessagingMessageWindowUpdate setConversation:] */

void FUN_10b63c6cc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63c788();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63c6ec; end: 10b63c6f3; -[SCNMessagingMessageWindowUpdate windowInitType] */

undefined8 FUN_10b63c6ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b63c6f4; end: 10b63c713; -[SCNMessagingMessageWindowUpdate setWindowInitType:] */

void FUN_10b63c6f4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63c788();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63c714; end: 10b63c71b; -[SCNMessagingMessageWindowUpdate windowInitStartingOrderKey] */

undefined8 FUN_10b63c714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b63c71c; end: 10b63c73b; -[SCNMessagingMessageWindowUpdate setWindowInitStartingOrderKey:] */

void FUN_10b63c71c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63c788();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63c73c; end: 10b63c787; -[SCNMessagingMessageWindowUpdate .cxx_destruct] */

void FUN_10b63c73c(long param_1)

{
  func_0x00010b63c798(param_1 + 0x30);
  func_0x00010b63c798(param_1 + 0x28);
  func_0x00010b63c798(param_1 + 0x20);
  func_0x00010b63c798(param_1 + 0x18);
  func_0x00010b63c798(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63c788; end: 10b63c7a7;  */

void FUN_10b63c788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b63c7a8; end: 10b63c867; -[SCNMessagingMessageWithServerId initWithMessage:serverId:] */

undefined1 *
FUN_10b63c7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127070a8;
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



/* Entry: 10b63c868; end: 10b63c86f; -[SCNMessagingMessageWithServerId message] */

undefined8 FUN_10b63c868(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63c870; end: 10b63c893; -[SCNMessagingMessageWithServerId setMessage:] */

void FUN_10b63c870(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63c8f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63c894; end: 10b63c89b; -[SCNMessagingMessageWithServerId serverId] */

undefined8 FUN_10b63c894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63c89c; end: 10b63c8bf; -[SCNMessagingMessageWithServerId setServerId:] */

void FUN_10b63c89c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63c8f0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63c8c0; end: 10b63c8ef; -[SCNMessagingMessageWithServerId .cxx_destruct] */

void FUN_10b63c8c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63c8f0; end: 10b63c8ff;  */

void FUN_10b63c8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b63c900; end: 10b63c99b; -[SCNMessagingMultiRecipientFeedEntry initWithIdentifier:sendingState:lastUpdateTimestamp:] */

undefined1 *
FUN_10b63c900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127070b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63c99c; end: 10b63c9a3; -[SCNMessagingMultiRecipientFeedEntry identifier] */

undefined8 FUN_10b63c99c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63c9a4; end: 10b63c9d3; -[SCNMessagingMultiRecipientFeedEntry setIdentifier:] */

void FUN_10b63c9a4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b63c9d4; end: 10b63c9db; -[SCNMessagingMultiRecipientFeedEntry sendingState] */

undefined8 FUN_10b63c9d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63c9dc; end: 10b63c9e3; -[SCNMessagingMultiRecipientFeedEntry setSendingState:] */

void FUN_10b63c9dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b63c9e4; end: 10b63c9eb; -[SCNMessagingMultiRecipientFeedEntry lastUpdateTimestamp] */

undefined8 FUN_10b63c9e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63c9ec; end: 10b63c9f3; -[SCNMessagingMultiRecipientFeedEntry setLastUpdateTimestamp:] */

void FUN_10b63c9ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b63c9f4; end: 10b63c9ff; -[SCNMessagingMultiRecipientFeedEntry .cxx_destruct] */

void FUN_10b63c9f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63ca00; end: 10b63caa3; -[SCNMessagingMultiRecipientFeedEntryIdentifier initWithDestinations:] */

undefined1 * FUN_10b63ca00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127070b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63caa4; end: 10b63caab; -[SCNMessagingMultiRecipientFeedEntryIdentifier destinations] */

undefined8 FUN_10b63caa4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63caac; end: 10b63cab3; -[SCNMessagingMultiRecipientFeedEntryIdentifier setDestinations:] */

void FUN_10b63caac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63cab4; end: 10b63cabf; -[SCNMessagingMultiRecipientFeedEntryIdentifier .cxx_destruct] */

void FUN_10b63cab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63cac0; end: 10b63cae3; -[SCNMessagingNotificationSettings setChatNotificationPreference:] */

void FUN_10b63cac0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63cb48();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63cae4; end: 10b63caeb; -[SCNMessagingNotificationSettings gameNotificationPreference] */

undefined8 FUN_10b63cae4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63caec; end: 10b63caf3; -[SCNMessagingNotificationSettings setGameNotificationPreference:] */

void FUN_10b63caec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b63caf4; end: 10b63cb17; -[SCNMessagingNotificationSettings setCallingNotificationPreference:] */

void FUN_10b63caf4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63cb48();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63cb18; end: 10b63cb47; -[SCNMessagingNotificationSettings .cxx_destruct] */

void FUN_10b63cb18(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63cb48; end: 10b63cb57;  */

void FUN_10b63cb48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b63cb58; end: 10b63cbfb; -[SCNMessagingOpenPollVoteMetadata initWithVoteIndexVotes:] */

undefined1 * FUN_10b63cb58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127070c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63cbfc; end: 10b63cc03; -[SCNMessagingOpenPollVoteMetadata voteIndexVotes] */

undefined8 FUN_10b63cbfc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63cc04; end: 10b63cc0b; -[SCNMessagingOpenPollVoteMetadata setVoteIndexVotes:] */

void FUN_10b63cc04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63cc0c; end: 10b63cc17; -[SCNMessagingOpenPollVoteMetadata .cxx_destruct] */

void FUN_10b63cc0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63cc18; end: 10b63cd53; -[SCNMessagingPartialFailureDestination initWithDestinationId:destinationType:storyType:isPriority:wasDropped:detectedAtStep:failedMedia:] */

undefined1 *
FUN_10b63cc18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1127070d0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63cd54; end: 10b63cd87; -[SCNMessagingPartialFailureDestination initWithDestinationId:destinationType:isPriority:wasDropped:detectedAtStep:failedMedia:] */

void FUN_10b63cd54(void)

{
  func_0x00010c00bb60();
  return;
}



/* Entry: 10b63cd88; end: 10b63cd8f; -[SCNMessagingPartialFailureDestination destinationId] */

undefined8 FUN_10b63cd88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63cd90; end: 10b63cdb3; -[SCNMessagingPartialFailureDestination setDestinationId:] */

void FUN_10b63cd90(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63ce6c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63cdb4; end: 10b63cdbb; -[SCNMessagingPartialFailureDestination destinationType] */

undefined8 FUN_10b63cdb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63cdbc; end: 10b63cdc3; -[SCNMessagingPartialFailureDestination setDestinationType:] */

void FUN_10b63cdbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b63cdc4; end: 10b63cdcb; -[SCNMessagingPartialFailureDestination storyType] */

undefined8 FUN_10b63cdc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b63cdcc; end: 10b63cdef; -[SCNMessagingPartialFailureDestination setStoryType:] */

void FUN_10b63cdcc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63ce6c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63cdf0; end: 10b63cdf7; -[SCNMessagingPartialFailureDestination isPriority] */

undefined1 FUN_10b63cdf0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b63cdf8; end: 10b63cdff; -[SCNMessagingPartialFailureDestination setIsPriority:] */

void FUN_10b63cdf8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63ce00; end: 10b63ce07; -[SCNMessagingPartialFailureDestination wasDropped] */

undefined1 FUN_10b63ce00(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b63ce08; end: 10b63ce0f; -[SCNMessagingPartialFailureDestination setWasDropped:] */

void FUN_10b63ce08(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b63ce10; end: 10b63ce17; -[SCNMessagingPartialFailureDestination detectedAtStep] */

undefined8 FUN_10b63ce10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b63ce18; end: 10b63ce1f; -[SCNMessagingPartialFailureDestination setDetectedAtStep:] */

void FUN_10b63ce18(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b63ce20; end: 10b63ce27; -[SCNMessagingPartialFailureDestination failedMedia] */

undefined8 FUN_10b63ce20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b63ce28; end: 10b63ce2f; -[SCNMessagingPartialFailureDestination setFailedMedia:] */

void FUN_10b63ce28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63ce30; end: 10b63ce6b; -[SCNMessagingPartialFailureDestination .cxx_destruct] */

void FUN_10b63ce30(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b63ce6c; end: 10b63ce7b;  */

void FUN_10b63ce6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b63ce7c; end: 10b63ce83; -[SCNMessagingParticipant participantId] */

undefined8 FUN_10b63ce7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63ce84; end: 10b63ceb3; -[SCNMessagingParticipant setParticipantId:] */

void FUN_10b63ce84(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b63ceb4; end: 10b63cebb; -[SCNMessagingParticipant color] */

undefined4 FUN_10b63ceb4(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b63cebc; end: 10b63cec3; -[SCNMessagingParticipant setColor:] */

void FUN_10b63cebc(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63cec4; end: 10b63cecb; -[SCNMessagingParticipant colorOption] */

undefined4 FUN_10b63cec4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b63cecc; end: 10b63ced3; -[SCNMessagingParticipant setColorOption:] */

void FUN_10b63cecc(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10b63ced4; end: 10b63cf6b; -[SCNMessagingPendingDecryptionCountResult initWithConversationId:pendingDecryptionCount:] */

undefined1 *
FUN_10b63ced4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127070e0;
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



/* Entry: 10b63cf6c; end: 10b63cf73; -[SCNMessagingPendingDecryptionCountResult conversationId] */

undefined8 FUN_10b63cf6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63cf74; end: 10b63cfa3; -[SCNMessagingPendingDecryptionCountResult setConversationId:] */

void FUN_10b63cf74(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b63cfa4; end: 10b63cfab; -[SCNMessagingPendingDecryptionCountResult pendingDecryptionCount] */

undefined8 FUN_10b63cfa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63cfac; end: 10b63cfb3; -[SCNMessagingPendingDecryptionCountResult setPendingDecryptionCount:] */

void FUN_10b63cfac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b63cfb4; end: 10b63cfbf; -[SCNMessagingPendingDecryptionCountResult .cxx_destruct] */

void FUN_10b63cfb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63cfc0; end: 10b63d00b; -[SCNMessagingPerMessageMediaDisplayed initWithMessageId:displayState:] */

void FUN_10b63cfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127070e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10b63d00c; end: 10b63d013; -[SCNMessagingPerMessageMediaDisplayed messageId] */

undefined8 FUN_10b63d00c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63d014; end: 10b63d01b; -[SCNMessagingPerMessageMediaDisplayed setMessageId:] */

void FUN_10b63d014(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63d01c; end: 10b63d023; -[SCNMessagingPerMessageMediaDisplayed displayState] */

undefined8 FUN_10b63d01c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63d024; end: 10b63d02b; -[SCNMessagingPerMessageMediaDisplayed setDisplayState:] */

void FUN_10b63d024(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b63d02c; end: 10b63d0cf; -[SCNMessagingPhoneNumber initWithNumber:] */

undefined1 * FUN_10b63d02c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127070f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63d0d0; end: 10b63d0d7; -[SCNMessagingPhoneNumber number] */

undefined8 FUN_10b63d0d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63d0d8; end: 10b63d0df; -[SCNMessagingPhoneNumber setNumber:] */

void FUN_10b63d0d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63d0e0; end: 10b63d0eb; -[SCNMessagingPhoneNumber .cxx_destruct] */

void FUN_10b63d0e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63d0ec; end: 10b63d29f; -[SCNMessagingPlatformAnalytics initWithContent:metricsMessageType:metricsMessageMediaType:reactionSource:reactionSendSource:attemptId:userActionTimestamp:sendMessageAnalytics:] */

undefined1 *
FUN_10b63d0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1127070f8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63d2a0; end: 10b63d2d7; -[SCNMessagingPlatformAnalytics initWithMetricsMessageType:metricsMessageMediaType:] */

void FUN_10b63d2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c002ca0(param_1,param_2,0,param_3,param_4,0,0,0,0,0);
  return;
}



/* Entry: 10b63d2d8; end: 10b63d2df; -[SCNMessagingPlatformAnalytics content] */

undefined8 FUN_10b63d2d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63d2e0; end: 10b63d2e7; -[SCNMessagingPlatformAnalytics setContent:] */

void FUN_10b63d2e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63d2e8; end: 10b63d2ef; -[SCNMessagingPlatformAnalytics metricsMessageType] */

undefined8 FUN_10b63d2e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63d2f0; end: 10b63d2f7; -[SCNMessagingPlatformAnalytics setMetricsMessageType:] */

void FUN_10b63d2f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b63d2f8; end: 10b63d2ff; -[SCNMessagingPlatformAnalytics metricsMessageMediaType] */

undefined8 FUN_10b63d2f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63d300; end: 10b63d307; -[SCNMessagingPlatformAnalytics setMetricsMessageMediaType:] */

void FUN_10b63d300(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b63d308; end: 10b63d30f; -[SCNMessagingPlatformAnalytics reactionSource] */

undefined8 FUN_10b63d308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b63d310; end: 10b63d32f; -[SCNMessagingPlatformAnalytics setReactionSource:] */

void FUN_10b63d310(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63d41c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63d330; end: 10b63d337; -[SCNMessagingPlatformAnalytics reactionSendSource] */

undefined8 FUN_10b63d330(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b63d338; end: 10b63d357; -[SCNMessagingPlatformAnalytics setReactionSendSource:] */

void FUN_10b63d338(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63d41c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63d358; end: 10b63d35f; -[SCNMessagingPlatformAnalytics attemptId] */

undefined8 FUN_10b63d358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b63d360; end: 10b63d37f; -[SCNMessagingPlatformAnalytics setAttemptId:] */

void FUN_10b63d360(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63d41c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63d380; end: 10b63d387; -[SCNMessagingPlatformAnalytics userActionTimestamp] */

undefined8 FUN_10b63d380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b63d388; end: 10b63d3a7; -[SCNMessagingPlatformAnalytics setUserActionTimestamp:] */

void FUN_10b63d388(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63d41c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63d3a8; end: 10b63d3af; -[SCNMessagingPlatformAnalytics sendMessageAnalytics] */

undefined8 FUN_10b63d3a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b63d3b0; end: 10b63d3cf; -[SCNMessagingPlatformAnalytics setSendMessageAnalytics:] */

void FUN_10b63d3b0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63d41c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63d3d0; end: 10b63d41b; -[SCNMessagingPlatformAnalytics .cxx_destruct] */

void FUN_10b63d3d0(long param_1)

{
  func_0x00010b63d434(param_1 + 0x40);
  func_0x00010b63d434(param_1 + 0x38);
  func_0x00010b63d434(param_1 + 0x30);
  func_0x00010b63d434(param_1 + 0x28);
  func_0x00010b63d434(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63d41c; end: 10b63d43b;  */

void FUN_10b63d41c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b63d43c; end: 10b63d513; -[SCNMessagingPollMetadata initWithPollType:numOptions:timeRemainingMs:typeMetadata:] */

undefined1 *
FUN_10b63d43c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112707100;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63d514; end: 10b63d51f; -[SCNMessagingPollMetadata initWithPollType:numOptions:typeMetadata:] */

void FUN_10b63d514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c037b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithPollType_numOptions_time_1125eb8c8,param_3,param_4,0,param_5);
  return;
}



/* Entry: 10b63d520; end: 10b63d527; -[SCNMessagingPollMetadata pollType] */

undefined8 FUN_10b63d520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63d528; end: 10b63d52f; -[SCNMessagingPollMetadata setPollType:] */

void FUN_10b63d528(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b63d530; end: 10b63d537; -[SCNMessagingPollMetadata numOptions] */

undefined4 FUN_10b63d530(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


