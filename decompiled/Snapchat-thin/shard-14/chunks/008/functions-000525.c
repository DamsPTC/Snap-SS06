/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6435a4; end: 10b6435ab; -[SCNMessagingUploadStatus setState:] */

void FUN_10b6435a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b6435ac; end: 10b6435b3; -[SCNMessagingUploadStatus lastKnownStep] */

undefined8 FUN_10b6435ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6435b4; end: 10b6435d3; -[SCNMessagingUploadStatus setLastKnownStep:] */

void FUN_10b6435b4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b643790();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6435d4; end: 10b6435db; -[SCNMessagingUploadStatus sendStatus] */

undefined8 FUN_10b6435d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6435dc; end: 10b6435fb; -[SCNMessagingUploadStatus setSendStatus:] */

void FUN_10b6435dc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b643790();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6435fc; end: 10b643603; -[SCNMessagingUploadStatus failureReason] */

undefined8 FUN_10b6435fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b643604; end: 10b643623; -[SCNMessagingUploadStatus setFailureReason:] */

void FUN_10b643604(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b643790();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b643624; end: 10b64362b; -[SCNMessagingUploadStatus failureDescription] */

undefined8 FUN_10b643624(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b64362c; end: 10b643633; -[SCNMessagingUploadStatus setFailureDescription:] */

void FUN_10b64362c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b643634; end: 10b64363b; -[SCNMessagingUploadStatus clientError] */

undefined8 FUN_10b643634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b64363c; end: 10b643643; -[SCNMessagingUploadStatus setClientError:] */

void FUN_10b64363c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b643644; end: 10b64364b; -[SCNMessagingUploadStatus uploadMode] */

undefined8 FUN_10b643644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b64364c; end: 10b643653; -[SCNMessagingUploadStatus setUploadMode:] */

void FUN_10b64364c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10b643654; end: 10b64365b; -[SCNMessagingUploadStatus bytesUploaded] */

undefined8 FUN_10b643654(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b64365c; end: 10b64367b; -[SCNMessagingUploadStatus setBytesUploaded:] */

void FUN_10b64365c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b643790();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b64367c; end: 10b643683; -[SCNMessagingUploadStatus totalBytes] */

undefined8 FUN_10b64367c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b643684; end: 10b6436a3; -[SCNMessagingUploadStatus setTotalBytes:] */

void FUN_10b643684(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b643790();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6436a4; end: 10b6436ab; -[SCNMessagingUploadStatus lastUpdateTimestampMs] */

undefined8 FUN_10b6436a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b6436ac; end: 10b6436cb; -[SCNMessagingUploadStatus setLastUpdateTimestampMs:] */

void FUN_10b6436ac(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b643790();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6436cc; end: 10b6436d3; -[SCNMessagingUploadStatus mediaOrchestrationAttemptId] */

undefined8 FUN_10b6436cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b6436d4; end: 10b6436f3; -[SCNMessagingUploadStatus setMediaOrchestrationAttemptId:] */

void FUN_10b6436d4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b643790();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6436f4; end: 10b6436fb; -[SCNMessagingUploadStatus transcodeStatus] */

undefined8 FUN_10b6436f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b6436fc; end: 10b64371b; -[SCNMessagingUploadStatus setTranscodeStatus:] */

void FUN_10b6436fc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b643790();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x68) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b64371c; end: 10b64378f; -[SCNMessagingUploadStatus .cxx_destruct] */

void FUN_10b64371c(long param_1)

{
  func_0x00010b6437a0(param_1 + 0x68);
  func_0x00010b6437a0(param_1 + 0x60);
  func_0x00010b6437a0(param_1 + 0x58);
  func_0x00010b6437a0(param_1 + 0x50);
  func_0x00010b6437a0(param_1 + 0x48);
  func_0x00010b6437a0(param_1 + 0x38);
  func_0x00010b6437a0(param_1 + 0x30);
  func_0x00010b6437a0(param_1 + 0x28);
  func_0x00010b6437a0(param_1 + 0x20);
  func_0x00010b6437a0(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b643790; end: 10b6437b7;  */

void FUN_10b643790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b6437b8; end: 10b643877; -[SCNMessagingUserIdToConversationId initWithUserId:conversationId:] */

undefined1 *
FUN_10b6437b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707298;
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



/* Entry: 10b643878; end: 10b64387f; -[SCNMessagingUserIdToConversationId userId] */

undefined8 FUN_10b643878(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b643880; end: 10b6438a3; -[SCNMessagingUserIdToConversationId setUserId:] */

void FUN_10b643880(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b643900();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6438a4; end: 10b6438ab; -[SCNMessagingUserIdToConversationId conversationId] */

undefined8 FUN_10b6438a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6438ac; end: 10b6438cf; -[SCNMessagingUserIdToConversationId setConversationId:] */

void FUN_10b6438ac(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b643900();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6438d0; end: 10b6438ff; -[SCNMessagingUserIdToConversationId .cxx_destruct] */

void FUN_10b6438d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b643900; end: 10b64390f;  */

void FUN_10b643900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b643910; end: 10b6439bf; -[SCNMessagingUserIdToReaction initWithUserId:reaction:] */

undefined1 *
FUN_10b643910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127072a0;
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
  func_0x00010b643c68();
  func_0x00010b643c60();
  return (undefined1 *)puVar1;
}



/* Entry: 10b6439c0; end: 10b643b13; -[SCNMessagingUserIdToReaction isEqual:] */

undefined8 FUN_10b6439c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126dacb8;
  _objc_opt_class(PTR_PTR_1126dacb8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar4 = param_1;
    func_0x00010c2923e0();
    iVar1 = (int)uVar4;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0();
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      func_0x00010c1209e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1209e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c071ae0(param_1);
      _objc_release(param_3);
      _objc_release(param_1);
    }
    func_0x00010b643c80();
    func_0x00010b643c68();
    func_0x00010b643c60();
  }
  func_0x00010b643c60();
  return uVar4;
}



/* Entry: 10b643b14; end: 10b643bd7; -[SCNMessagingUserIdToReaction hash] */

ulong FUN_10b643b14(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010c1209e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010b643c80();
  func_0x00010b643c68();
  func_0x00010b643c60();
  return uVar2 ^ uVar1 ^ param_1;
}



/* Entry: 10b643bd8; end: 10b643bdf; -[SCNMessagingUserIdToReaction userId] */

undefined8 FUN_10b643bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b643be0; end: 10b643c03; -[SCNMessagingUserIdToReaction setUserId:] */

void FUN_10b643be0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b643c70();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b643c04; end: 10b643c0b; -[SCNMessagingUserIdToReaction reaction] */

undefined8 FUN_10b643c04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b643c0c; end: 10b643c2f; -[SCNMessagingUserIdToReaction setReaction:] */

void FUN_10b643c0c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b643c70();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b643c30; end: 10b643c5f; -[SCNMessagingUserIdToReaction .cxx_destruct] */

void FUN_10b643c30(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b643c60; end: 10b643c87;  */

void FUN_10b643c60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b643c88; end: 10b643d47; -[SCNMessagingUserToFeedEntry initWithUserId:feedEntry:] */

undefined1 *
FUN_10b643c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127072a8;
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



/* Entry: 10b643d48; end: 10b643d4f; -[SCNMessagingUserToFeedEntry userId] */

undefined8 FUN_10b643d48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b643d50; end: 10b643d73; -[SCNMessagingUserToFeedEntry setUserId:] */

void FUN_10b643d50(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b643dd0();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b643d74; end: 10b643d7b; -[SCNMessagingUserToFeedEntry feedEntry] */

undefined8 FUN_10b643d74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b643d7c; end: 10b643d9f; -[SCNMessagingUserToFeedEntry setFeedEntry:] */

void FUN_10b643d7c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b643dd0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b643da0; end: 10b643dcf; -[SCNMessagingUserToFeedEntry .cxx_destruct] */

void FUN_10b643da0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b643dd0; end: 10b643ddf;  */

void FUN_10b643dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b643de0; end: 10b643ea7; -[SCNMessagingUserToLastEventUpdateTimestamp initWithUserAndConversation:lastEventUpdateTimestamp:pinnedTimestamp:] */

undefined1 *
FUN_10b643de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1127072b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b643ea8; end: 10b643eaf; -[SCNMessagingUserToLastEventUpdateTimestamp initWithUserAndConversation:lastEventUpdateTimestamp:] */

void FUN_10b643ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c05a890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUserAndConversation_last_1125f4430,param_3,param_4,0);
  return;
}



/* Entry: 10b643eb0; end: 10b643eb7; -[SCNMessagingUserToLastEventUpdateTimestamp userAndConversation] */

undefined8 FUN_10b643eb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b643eb8; end: 10b643edb; -[SCNMessagingUserToLastEventUpdateTimestamp setUserAndConversation:] */

void FUN_10b643eb8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b643f48();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b643edc; end: 10b643ee3; -[SCNMessagingUserToLastEventUpdateTimestamp lastEventUpdateTimestamp] */

undefined8 FUN_10b643edc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b643ee4; end: 10b643eeb; -[SCNMessagingUserToLastEventUpdateTimestamp setLastEventUpdateTimestamp:] */

void FUN_10b643ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b643eec; end: 10b643ef3; -[SCNMessagingUserToLastEventUpdateTimestamp pinnedTimestamp] */

undefined8 FUN_10b643eec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b643ef4; end: 10b643f17; -[SCNMessagingUserToLastEventUpdateTimestamp setPinnedTimestamp:] */

void FUN_10b643ef4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b643f48();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b643f18; end: 10b643f47; -[SCNMessagingUserToLastEventUpdateTimestamp .cxx_destruct] */

void FUN_10b643f18(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b643f48; end: 10b643f57;  */

void FUN_10b643f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b643f58; end: 10b643fa3; -[SCNMessagingVideoDescription initWithMediaQualityType:videoPlaybackType:] */

void FUN_10b643f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127072b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10b643fa4; end: 10b643fab; -[SCNMessagingVideoDescription mediaQualityType] */

undefined8 FUN_10b643fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b643fac; end: 10b643fb3; -[SCNMessagingVideoDescription setMediaQualityType:] */

void FUN_10b643fac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b643fb4; end: 10b643fbb; -[SCNMessagingVideoDescription videoPlaybackType] */

undefined8 FUN_10b643fb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b643fbc; end: 10b643fc3; -[SCNMessagingVideoDescription setVideoPlaybackType:] */

void FUN_10b643fbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b643fc4; end: 10b64403b; +[SCNComplianceFeature allSnapchat] */

void FUN_10b643fc4(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam00000001137f7720 & 1) == 0) {
    iVar2 = 0x137f7720;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c39efc();
      _objc_alloc();
      func_0x00010c01b1c0();
      func_0x000107c39eec(0x1137f7718);
    }
  }
  uVar1 = uRam00000001137f7718;
  func_0x000107c39ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b64403c; end: 10b6440b3; +[SCNComplianceFeature publicPosting] */

void FUN_10b64403c(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam00000001137f7740 & 1) == 0) {
    iVar2 = 0x137f7740;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c39efc();
      _objc_alloc();
      func_0x00010c01b1c0();
      func_0x000107c39eec(0x1137f7738);
    }
  }
  uVar1 = uRam00000001137f7738;
  func_0x000107c39ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6440b4; end: 10b64412b; +[SCNComplianceFeature snapscore] */

void FUN_10b6440b4(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam00000001137f7750 & 1) == 0) {
    iVar2 = 0x137f7750;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c39efc();
      _objc_alloc();
      func_0x00010c01b1c0();
      func_0x000107c39eec(0x1137f7748);
    }
  }
  uVar1 = uRam00000001137f7748;
  func_0x000107c39ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b64412c; end: 10b6441a3; +[SCNComplianceFeature spotlightComments] */

void FUN_10b64412c(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam00000001137f7760 & 1) == 0) {
    iVar2 = 0x137f7760;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c39efc();
      _objc_alloc();
      func_0x00010c01b1c0();
      func_0x000107c39eec(0x1137f7758);
    }
  }
  uVar1 = uRam00000001137f7758;
  func_0x000107c39ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6441a4; end: 10b64421b; +[SCNComplianceFeature streaks] */

void FUN_10b6441a4(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam00000001137f7770 & 1) == 0) {
    iVar2 = 0x137f7770;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c39efc();
      _objc_alloc();
      func_0x00010c01b1c0();
      func_0x000107c39eec(0x1137f7768);
    }
  }
  uVar1 = uRam00000001137f7768;
  func_0x000107c39ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b64421c; end: 10b644293; +[SCNComplianceFeature semiPublicPosting] */

void FUN_10b64421c(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam00000001137f7780 & 1) == 0) {
    iVar2 = 0x137f7780;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c39efc();
      _objc_alloc();
      func_0x00010c01b1c0();
      func_0x000107c39eec(0x1137f7778);
    }
  }
  uVar1 = uRam00000001137f7778;
  func_0x000107c39ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b644294; end: 10b64430b; +[SCNComplianceFeature inAppPurchases] */

void FUN_10b644294(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam00000001137f7790 & 1) == 0) {
    iVar2 = 0x137f7790;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c39efc();
      _objc_alloc();
      func_0x00010c01b1c0();
      func_0x000107c39eec(0x1137f7788);
    }
  }
  uVar1 = uRam00000001137f7788;
  func_0x000107c39ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b64430c; end: 10b644383; +[SCNComplianceFeature timeSpent] */

void FUN_10b64430c(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam00000001137f77a0 & 1) == 0) {
    iVar2 = 0x137f77a0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c39efc();
      _objc_alloc();
      func_0x00010c01b1c0();
      func_0x000107c39eec(0x1137f7798);
    }
  }
  uVar1 = uRam00000001137f7798;
  func_0x000107c39ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b644384; end: 10b6443fb; +[SCNComplianceFeature growthNotifications] */

void FUN_10b644384(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam00000001137f77b0 & 1) == 0) {
    iVar2 = 0x137f77b0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c39efc();
      _objc_alloc();
      func_0x00010c01b1c0();
      func_0x000107c39eec(0x1137f77a8);
    }
  }
  uVar1 = uRam00000001137f77a8;
  func_0x000107c39ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6443fc; end: 10b644473; +[SCNComplianceFeature publicProfileCreation] */

void FUN_10b6443fc(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam00000001137f77c0 & 1) == 0) {
    iVar2 = 0x137f77c0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c39efc();
      _objc_alloc();
      func_0x00010c01b1c0();
      func_0x000107c39eec(0x1137f77b8);
    }
  }
  uVar1 = uRam00000001137f77b8;
  func_0x000107c39ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b644474; end: 10b6444eb; +[SCNComplianceFeature mapLocationSharing] */

void FUN_10b644474(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam00000001137f77d0 & 1) == 0) {
    iVar2 = 0x137f77d0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c39efc();
      _objc_alloc();
      func_0x00010c01b1c0();
      func_0x000107c39eec(0x1137f77c8);
    }
  }
  uVar1 = uRam00000001137f77c8;
  func_0x000107c39ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6444ec; end: 10b644563; +[SCNComplianceFeature mapPublicContentViewing] */

void FUN_10b6444ec(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam00000001137f77e0 & 1) == 0) {
    iVar2 = 0x137f77e0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c39efc();
      _objc_alloc();
      func_0x00010c01b1c0();
      func_0x000107c39eec(0x1137f77d8);
    }
  }
  uVar1 = uRam00000001137f77d8;
  func_0x000107c39ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b644564; end: 10b6445db; -[SCNComplianceFeature isEqual:] */

bool FUN_10b644564(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong unaff_x19;
  
  func_0x00010b6446a8();
  func_0x000107c39efc();
  _objc_opt_class();
  _objc_opt_isKindOfClass();
  iVar2 = (int)unaff_x19;
  if ((unaff_x19 & 1) == 0) {
    bVar1 = false;
  }
  else {
    func_0x000107c39ef0();
    func_0x00010b6446a0();
    iVar3 = iVar2;
    func_0x00010b6446b8();
    bVar1 = iVar2 == iVar3;
    func_0x00010b644698();
  }
  func_0x00010b644698();
  return bVar1;
}



/* Entry: 10b6445dc; end: 10b64462f; -[SCNComplianceFeature hash] */

ulong FUN_10b6445dc(ulong param_1)

{
  ulong uVar1;
  
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar1 = param_1;
  func_0x00010b6446a0();
  func_0x00010b644698();
  return param_1 ^ (long)(int)uVar1;
}



/* Entry: 10b644630; end: 10b64468f; -[SCNComplianceFeature compare:] */

ulong FUN_10b644630(int param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  func_0x00010b6446a8();
  func_0x00010b6446a0();
  iVar1 = param_1;
  func_0x00010b6446b8();
  if (param_1 < iVar1) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    func_0x00010b6446a0();
    iVar2 = iVar1;
    func_0x00010b6446b8();
    uVar3 = (ulong)(iVar2 < iVar1);
  }
  func_0x00010b644698();
  return uVar3;
}



/* Entry: 10b644690; end: 10b6446d3;  */

void FUN_10b644690(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b6446d4; end: 10b64485f; -[SCNDuplexDuplexParameters initWithEndpointAddress:channelType:userAgentPrefix:keepalivePingIntervalMs:keepalivePingTimeoutMs:disconnectionDelayMs:shouldPingStreamer:keepAliveOption:reconnectOnWriteError:jitterMultiplier:tweaks:] */

undefined8 *
FUN_10b6446d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1127072c8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    puVar1[4] = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_6;
    *(undefined4 *)(puVar1 + 2) = param_7;
    *(undefined4 *)((long)puVar1 + 0x14) = param_8;
    *(undefined1 *)(puVar1 + 1) = param_9;
    puVar1[6] = param_11;
    *(undefined1 *)((long)puVar1 + 9) = param_12;
    _objc_retain(param_14);
    uVar2 = puVar1[7];
    puVar1[7] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[8];
    puVar1[8] = param_15;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b644860; end: 10b644867; -[SCNDuplexDuplexParameters endpointAddress] */

undefined8 FUN_10b644860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b644868; end: 10b64486f; -[SCNDuplexDuplexParameters channelType] */

undefined8 FUN_10b644868(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b644870; end: 10b644877; -[SCNDuplexDuplexParameters userAgentPrefix] */

undefined8 FUN_10b644870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b644878; end: 10b64487f; -[SCNDuplexDuplexParameters keepalivePingIntervalMs] */

undefined4 FUN_10b644878(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b644880; end: 10b644887; -[SCNDuplexDuplexParameters keepalivePingTimeoutMs] */

undefined4 FUN_10b644880(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10b644888; end: 10b64488f; -[SCNDuplexDuplexParameters disconnectionDelayMs] */

undefined4 FUN_10b644888(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10b644890; end: 10b644897; -[SCNDuplexDuplexParameters shouldPingStreamer] */

undefined1 FUN_10b644890(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b644898; end: 10b64489f; -[SCNDuplexDuplexParameters keepAliveOption] */

undefined8 FUN_10b644898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b6448a0; end: 10b6448a7; -[SCNDuplexDuplexParameters reconnectOnWriteError] */

undefined1 FUN_10b6448a0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b6448a8; end: 10b6448af; -[SCNDuplexDuplexParameters jitterMultiplier] */

undefined8 FUN_10b6448a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b6448b0; end: 10b6448b7; -[SCNDuplexDuplexParameters tweaks] */

undefined8 FUN_10b6448b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b6448b8; end: 10b6448f3; -[SCNDuplexDuplexParameters .cxx_destruct] */

void FUN_10b6448b8(long param_1)

{
  FUN_10b6448f4(param_1 + 0x40);
  FUN_10b6448f4(param_1 + 0x38);
  FUN_10b6448f4(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b6448f4; end: 10b6448fb;  */

void FUN_10b6448f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10b6448fc; end: 10b64499f; -[SCNDuplexTweaks initWithTweaks:] */

undefined1 * FUN_10b6448fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127072d0;
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



/* Entry: 10b6449a0; end: 10b6449a7; -[SCNDuplexTweaks tweaks] */

undefined8 FUN_10b6449a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6449a8; end: 10b6449b3; -[SCNDuplexTweaks .cxx_destruct] */

void FUN_10b6449a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6449b4; end: 10b644aa7; -[SCNE2eeCurrentUserIdentityKey initWithCleartextPrivateKey:cleartextPublicKey:identityKeyId:version:] */

undefined1 * FUN_10b6449b4(void)

{
  undefined1 *puVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined4 in_w5;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffb0;
  func_0x00010b644e04();
  _objc_retain(in_x3);
  _objc_retain(in_x4);
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = unaff_x19;
    _objc_release(uVar2);
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 0x18);
    *(undefined8 *)(puVar1 + 0x18) = in_x3;
    _objc_release(uVar2);
    _objc_retain(in_x4);
    uVar2 = *(undefined8 *)(puVar1 + 0x20);
    *(undefined8 *)(puVar1 + 0x20) = in_x4;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 8) = in_w5;
  }
  func_0x00010b644dfc();
  func_0x00010b644de4();
  func_0x00010b644ddc();
  return puVar1;
}



/* Entry: 10b644aa8; end: 10b644c73; -[SCNE2eeCurrentUserIdentityKey isEqual:] */

bool FUN_10b644aa8(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong unaff_x19;
  int unaff_w23;
  
  func_0x00010b644e04();
  _objc_opt_class(PTR_PTR_1126dacd0);
  uVar3 = unaff_x19;
  _objc_opt_isKindOfClass();
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain();
    iVar2 = unaff_w23;
    func_0x00010bf3c6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3c6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071cc0();
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      iVar2 = unaff_w23;
      func_0x00010bf3c6e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3c6e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071cc0();
      if (iVar2 == 0) {
        bVar1 = false;
      }
      else {
        iVar2 = unaff_w23;
        func_0x00010bfe60c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = unaff_x19;
        func_0x00010bfe60c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071ae0();
        if (iVar2 == 0) {
          bVar1 = false;
        }
        else {
          func_0x00010c298be0();
          func_0x00010c298be0();
          bVar1 = unaff_w23 == (int)unaff_x19;
        }
        _objc_release(uVar3);
        func_0x00010b644dec();
      }
      func_0x00010b644e14();
      func_0x00010b644df4();
    }
    func_0x00010b644dfc();
    func_0x00010b644de4();
    func_0x00010b644ddc();
  }
  func_0x00010b644ddc();
  return bVar1;
}



/* Entry: 10b644c74; end: 10b644d7f; -[SCNE2eeCurrentUserIdentityKey hash] */

ulong FUN_10b644c74(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010bf3c6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar3 = param_1;
  func_0x00010bf3c6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar4 = param_1;
  func_0x00010bfe60c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010c298be0(param_1);
  func_0x00010b644dec();
  func_0x00010b644df4();
  func_0x00010b644de4();
  func_0x00010b644ddc();
  return uVar2 ^ uVar1 ^ uVar3 ^ uVar4 ^ (long)(int)param_1;
}



/* Entry: 10b644d80; end: 10b644d87; -[SCNE2eeCurrentUserIdentityKey cleartextPrivateKey] */

undefined8 FUN_10b644d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


