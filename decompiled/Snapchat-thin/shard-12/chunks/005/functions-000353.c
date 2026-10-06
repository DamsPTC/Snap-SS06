/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091f2b0c; end: 1091f2b13; -[SCReplyParameters isFanPassMassSnap] */

undefined1 FUN_1091f2b0c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



/* Entry: 1091f2b14; end: 1091f2b1b; -[SCReplyParameters setIsFanPassMassSnap:] */

void FUN_1091f2b14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x16) = param_3;
  return;
}



/* Entry: 1091f2b1c; end: 1091f2b23; -[SCReplyParameters fanPassRecipientId] */

undefined8 FUN_1091f2b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1091f2b24; end: 1091f2b2b; -[SCReplyParameters setFanPassRecipientId:] */

void FUN_1091f2b24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2b2c; end: 1091f2b33; -[SCReplyParameters topicToAdd] */

undefined8 FUN_1091f2b2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1091f2b34; end: 1091f2b3b; -[SCReplyParameters setTopicToAdd:] */

void FUN_1091f2b34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2b3c; end: 1091f2b43; -[SCReplyParameters gamesReplyParameters] */

undefined8 FUN_1091f2b3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1091f2b44; end: 1091f2b73; -[SCReplyParameters setGamesReplyParameters:] */

void FUN_1091f2b44(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1091f2b74; end: 1091f2b7b; -[SCReplyParameters lensConfigReplyParameters] */

undefined8 FUN_1091f2b74(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 1091f2b7c; end: 1091f2bab; -[SCReplyParameters setLensConfigReplyParameters:] */

void FUN_1091f2b7c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1091f2bac; end: 1091f2bb3; -[SCReplyParameters remixSourceSnapId] */

undefined8 FUN_1091f2bac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 1091f2bb4; end: 1091f2bbb; -[SCReplyParameters setRemixSourceSnapId:] */

void FUN_1091f2bb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2bbc; end: 1091f2bc3; -[SCReplyParameters remixSourceUserId] */

undefined8 FUN_1091f2bbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 1091f2bc4; end: 1091f2bcb; -[SCReplyParameters setRemixSourceUserId:] */

void FUN_1091f2bc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2bcc; end: 1091f2bd3; -[SCReplyParameters remixLaunchSource] */

undefined8 FUN_1091f2bcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 1091f2bd4; end: 1091f2bdb; -[SCReplyParameters setRemixLaunchSource:] */

void FUN_1091f2bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  return;
}



/* Entry: 1091f2bdc; end: 1091f2be3; -[SCReplyParameters remixCaptureType] */

undefined8 FUN_1091f2bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 1091f2be4; end: 1091f2beb; -[SCReplyParameters setRemixCaptureType:] */

void FUN_1091f2be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  return;
}



/* Entry: 1091f2bec; end: 1091f2bf3; -[SCReplyParameters remixPermission] */

undefined8 FUN_1091f2bec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 1091f2bf4; end: 1091f2bfb; -[SCReplyParameters setRemixPermission:] */

void FUN_1091f2bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf0) = param_3;
  return;
}



/* Entry: 1091f2bfc; end: 1091f2c03; -[SCReplyParameters remixNotifiedUsernames] */

undefined8 FUN_1091f2bfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 1091f2c04; end: 1091f2c0b; -[SCReplyParameters setRemixNotifiedUsernames:] */

void FUN_1091f2c04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2c0c; end: 1091f2c13; -[SCReplyParameters remixExportItem] */

undefined8 FUN_1091f2c0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 1091f2c14; end: 1091f2c43; -[SCReplyParameters setRemixExportItem:] */

void FUN_1091f2c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091f2c44; end: 1091f2c4b; -[SCReplyParameters quotedMessageId] */

undefined8 FUN_1091f2c44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 1091f2c4c; end: 1091f2c53; -[SCReplyParameters setQuotedMessageId:] */

void FUN_1091f2c4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2c54; end: 1091f2c5b; -[SCReplyParameters isLaunchedBySnapBackAction] */

undefined1 FUN_1091f2c54(long param_1)

{
  return *(undefined1 *)(param_1 + 0x17);
}



/* Entry: 1091f2c5c; end: 1091f2c63; -[SCReplyParameters setIsLaunchedBySnapBackAction:] */

void FUN_1091f2c5c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x17) = param_3;
  return;
}



/* Entry: 1091f2c64; end: 1091f2c6b; -[SCReplyParameters storyReplyOriginMetadata] */

undefined8 FUN_1091f2c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 1091f2c6c; end: 1091f2c9b; -[SCReplyParameters setStoryReplyOriginMetadata:] */

void FUN_1091f2c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091f2c9c; end: 1091f2ca3; -[SCReplyParameters isMultiRecipient] */

undefined1 FUN_1091f2c9c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 1091f2ca4; end: 1091f2cab; -[SCReplyParameters setIsMultiRecipient:] */

void FUN_1091f2ca4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1091f2cac; end: 1091f2cb3; -[SCReplyParameters userIds] */

undefined8 FUN_1091f2cac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 1091f2cb4; end: 1091f2cbb; -[SCReplyParameters setUserIds:] */

void FUN_1091f2cb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2cbc; end: 1091f2cc3; -[SCReplyParameters groupIds] */

undefined8 FUN_1091f2cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 1091f2cc4; end: 1091f2ccb; -[SCReplyParameters setGroupIds:] */

void FUN_1091f2cc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2ccc; end: 1091f2cd3; -[SCReplyParameters friendsFeedShortcutType] */

undefined8 FUN_1091f2ccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 1091f2cd4; end: 1091f2cdb; -[SCReplyParameters setFriendsFeedShortcutType:] */

void FUN_1091f2cd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2cdc; end: 1091f2ce3; -[SCReplyParameters contextSessionId] */

undefined8 FUN_1091f2cdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 1091f2ce4; end: 1091f2ceb; -[SCReplyParameters setContextSessionId:] */

void FUN_1091f2ce4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2cec; end: 1091f2cf3; -[SCReplyParameters cameraModeParameters] */

undefined8 FUN_1091f2cec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 1091f2cf4; end: 1091f2cfb; -[SCReplyParameters setCameraModeParameters:] */

void FUN_1091f2cf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2cfc; end: 1091f2d03; -[SCReplyParameters navigationType] */

undefined8 FUN_1091f2cfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 1091f2d04; end: 1091f2d0b; -[SCReplyParameters setNavigationType:] */

void FUN_1091f2d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x140) = param_3;
  return;
}



/* Entry: 1091f2d0c; end: 1091f2d13; -[SCReplyParameters originalCompositeStoryId] */

undefined8 FUN_1091f2d0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 1091f2d14; end: 1091f2d1b; -[SCReplyParameters setOriginalCompositeStoryId:] */

void FUN_1091f2d14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2d1c; end: 1091f2d23; -[SCReplyParameters creatorSenderId] */

undefined8 FUN_1091f2d1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 1091f2d24; end: 1091f2d2b; -[SCReplyParameters setCreatorSenderId:] */

void FUN_1091f2d24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f2d2c; end: 1091f2eb7; -[SCReplyParameters .cxx_destruct] */

void FUN_1091f2d2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xd8,0);
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
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1091f2eb8; end: 1091f2f47; +[SCCognacAppScope conversationWithConversationId:appInstanceId:] */

void FUN_1091f2eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126dde20;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091f2f48; end: 1091f2fef; +[SCCognacAppScope shareWithSharedId:pairWithStudio:appInstanceId:] */

void FUN_1091f2f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126dde20;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar2[0x28] = param_4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091f2ff0; end: 1091f3013; -[SCCognacAppScope copyWithZone:] */

undefined8 FUN_1091f2ff0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091f3014; end: 1091f30a7; -[SCCognacAppScope hash] */

void FUN_1091f3014(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_112700f30;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091f30a8; end: 1091f30eb; -[SCCognacAppScope internalInit] */

void FUN_1091f30a8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112700f30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091f30ec; end: 1091f31e3; -[SCCognacAppScope isEqual:] */

long FUN_1091f30ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1091f31bc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091f31c8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_1091f31c8;
            }
            goto LAB_1091f31bc;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1091f31c8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1091f31e4; end: 1091f3273; -[SCCognacAppScope matchConversation:share:] */

void FUN_1091f31e4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28),
                 *(undefined8 *)(param_1 + 0x30));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091f3274; end: 1091f32bb; -[SCCognacAppScope .cxx_destruct] */

void FUN_1091f3274(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091f32bc; end: 1091f332f; -[SCCameraFeatureCollectionImpl initWithCategories:] */

undefined1 * FUN_1091f32bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700f38;
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



/* Entry: 1091f3330; end: 1091f3457; -[SCCameraFeatureCollectionImpl containsFeatureCategory:] */

long FUN_1091f3330(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 8);
    _objc_retain(lVar5);
    lVar2 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    lVar6 = 0;
    if (lVar2 != 0) {
      do {
        lVar6 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar5);
          }
          uVar3 = *(ulong *)(lVar6 * 8);
          func_0x00010c071c20();
          if ((uVar3 & 1) != 0) {
            lVar6 = 1;
            goto LAB_1091f3408;
          }
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
      lVar6 = 0;
    }
LAB_1091f3408:
    _objc_release(lVar5);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    param_3 = param_3 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_3,0);
    return param_3;
  }
  return lVar6;
}



/* Entry: 1091f3458; end: 1091f3463; -[SCCameraFeatureCollectionImpl .cxx_destruct] */

void FUN_1091f3458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091f3464; end: 1091f34e7; -[SCWrapperCameraFeatureCategoryImpl initWithUnderlyingCategory:shouldExlcudeFromLegacyCameras:] */

undefined1 *
FUN_1091f3464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112700f40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091f34e8; end: 1091f34ef; -[SCWrapperCameraFeatureCategoryImpl isEqual:] */

void FUN_1091f34e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_isEqual__1125fa0c8);
  return;
}



/* Entry: 1091f34f0; end: 1091f34f7; -[SCWrapperCameraFeatureCategoryImpl hash] */

void FUN_1091f34f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1091f34f8; end: 1091f34ff; -[SCWrapperCameraFeatureCategoryImpl isEqualToCategory:] */

void FUN_1091f34f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_isEqualToCategory__1125fa118);
  return;
}



/* Entry: 1091f3500; end: 1091f3507; -[SCWrapperCameraFeatureCategoryImpl shouldExcludeFromLegacyCameras] */

undefined1 FUN_1091f3500(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1091f3508; end: 1091f3513; -[SCWrapperCameraFeatureCategoryImpl .cxx_destruct] */

void FUN_1091f3508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091f3514; end: 1091f3657; -[SCCameraFeatureCategoryImpl isEqualToCategory:] */

long FUN_1091f3514(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = param_1;
  func_0x00010c071ae0();
  if (((uVar3 & 1) == 0) && (uVar3 = param_3, func_0x00010c071ae0(), (uVar3 & 1) == 0)) {
    lVar5 = *(long *)(param_1 + 8);
    _objc_retain(lVar5);
    lVar2 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    lVar6 = 0;
    if (lVar2 != 0) {
      do {
        lVar6 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar5);
          }
          uVar3 = *(ulong *)(lVar6 * 8);
          func_0x00010c071c20();
          if ((uVar3 & 1) != 0) {
            lVar6 = 1;
            goto LAB_1091f3610;
          }
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
      lVar6 = 0;
    }
LAB_1091f3610:
    _objc_release(lVar5);
  }
  else {
    lVar6 = 1;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    _objc_storeStrong(param_3 + 0x10,0);
    lVar4 = param_3 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar4,0);
    return lVar4;
  }
  return lVar6;
}



/* Entry: 1091f3658; end: 1091f37df; -[SCCameraFeatureCategoryImpl .cxx_destruct] */

void FUN_1091f3658(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091f37e0; end: 1091f3897;  */

void FUN_1091f37e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c2ab4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a120();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x000107c2ab48(puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137329a0;
  puRam00000001137329a0 = puVar4;
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091f3898; end: 1091f399b;  */

void FUN_1091f3898(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137329a8 != -1) {
    func_0x000107c27d9c(0x1137329a8,&PTR___NSConcreteGlobalBlock_110ae1028);
  }
  uVar1 = uRam00000001137329b0;
  _objc_retain(uRam00000001137329b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091f399c; end: 1091f3a87;  */

void FUN_1091f399c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c2ab44();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x000107c2ab4c();
  _objc_retainAutoreleasedReturnValue();
  if (lRam0000000113732948 != -1) {
    func_0x000107c27d9c(0x113732948,&PTR___NSConcreteGlobalBlock_110ae0f68);
  }
  uVar1 = uRam0000000113732950;
  _objc_retain(uRam0000000113732950);
  func_0x00010bf0a120();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_1091f3a88();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puRam00000001137329c0;
  puRam00000001137329c0 = puVar5;
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091f3a88; end: 1091f3b23;  */

void FUN_1091f3a88(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dde38;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010bffcea0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091f3b24; end: 1091f3bc3;  */

void FUN_1091f3b24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c2ab44();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000107c2ab4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a120(puVar3,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_1091f3a88();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137329d0;
  puRam00000001137329d0 = puVar4;
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091f3bc4; end: 1091f3c17;  */

void FUN_1091f3bc4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137329d8 != -1) {
    func_0x000107c27d9c(0x1137329d8,&PTR___NSConcreteGlobalBlock_110ae1088);
  }
  uVar1 = uRam00000001137329e0;
  _objc_retain(uRam00000001137329e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091f3c18; end: 1091f3d03;  */

void FUN_1091f3c18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c2ab44();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x000107c2ab4c();
  _objc_retainAutoreleasedReturnValue();
  if (lRam0000000113732988 != -1) {
    func_0x000107c27d9c(0x113732988,&PTR___NSConcreteGlobalBlock_110ae0fe8);
  }
  uVar1 = uRam0000000113732990;
  _objc_retain(uRam0000000113732990);
  func_0x00010bf0a120();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_1091f3a88();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puRam00000001137329e0;
  puRam00000001137329e0 = puVar5;
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091f3d04; end: 1091f3d57;  */

void FUN_1091f3d04(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137329e8 != -1) {
    func_0x000107c27d9c(0x1137329e8,&PTR___NSConcreteGlobalBlock_110ae10a8);
  }
  uVar1 = uRam00000001137329f0;
  _objc_retain(uRam00000001137329f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091f3d58; end: 1091f3e33;  */

void FUN_1091f3d58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c2ab44();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000107c2ab4c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001091f378c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_1091f3898();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a120(puVar5,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  FUN_1091f3a88();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137329f0;
  puRam00000001137329f0 = puVar6;
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091f3e34; end: 1091f3eaf;  */

undefined * FUN_1091f3e34(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137329f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f2c138,
                        &UNK_10dfbae28,&UNK_10dfbae34,2,FUN_1091f3eb0,0);
    do {
      if (puRam00000001137329f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137329f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137329f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137329f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137329f8;
}



/* Entry: 1091f3eb0; end: 1091f3ebb;  */

bool FUN_1091f3eb0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1091f3ebc; end: 1091f3f23; +[SCCameraControlsConfig descriptor] */

void FUN_1091f3ebc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113732a00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bf5800,
                        &PTR____CFConstantStringClassReference_110f2c158,
                        &PTR_s_snapchat_camera_1132cdc88,&PTR_s_enabled_1132cdca0,4,0x10,0x1c);
    puRam0000000113732a00 = puVar1;
  }
  return;
}



/* Entry: 1091f3f24; end: 1091f3fc7; -[SCCameraModeOnboardingDialogPresenter initWithOnboardingDialogTitle:onboardingDialogDescription:] */

undefined1 *
FUN_1091f3f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700f50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091f3fc8; end: 1091f40bf; -[SCCameraModeOnboardingDialogPresenter initWithOnboardingDialogTitle:onboardingDialogDescription:gifDownloadableUrl:imageDownloadableUrl:contentDelivery:dowloadableContentType:] */

long FUN_1091f3fc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c031a20(param_1,param_2,param_3,param_4);
  if (param_1 != 0) {
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_5;
    _objc_release(uVar1);
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_6;
    _objc_release(uVar1);
    _objc_retain(param_7);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_7;
    _objc_release(uVar1);
    _objc_retain(param_8);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_8;
    _objc_release(uVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return param_1;
}



/* Entry: 1091f40c0; end: 1091f4113; -[SCCameraModeOnboardingDialogPresenter attachToUIContainer:] */

void FUN_1091f40c0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (*(long *)(param_1 + 8) != 0)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_3;
    _objc_release(uVar1);
    func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091f4114; end: 1091f41a7; -[SCCameraModeOnboardingDialogPresenter present] */

void FUN_1091f4114(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bfcc900();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bfe7560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      func_0x00010bebb640(param_1);
    }
    else {
      func_0x00010beba200(param_1,param_2,lVar2,0);
    }
    _objc_release(lVar2);
  }
  else {
    func_0x00010beba200(param_1,param_2,lVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091f41a8; end: 1091f41eb; -[SCCameraModeOnboardingDialogPresenter dismiss] */

void FUN_1091f41a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bf84b00(*(long *)(param_1 + 8),param_2,1,0);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1091f41ec; end: 1091f4417; -[SCCameraModeOnboardingDialogPresenter _showTextOnlyOnboardingDialog] */

void FUN_1091f41ec(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_68;
  _objc_copyWeak(auStack_70,puVar8);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc();
  lVar4 = param_1;
  func_0x00010c0e7ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c0e7e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefe80();
  puVar10 = (undefined8 *)(param_1 + 8);
  uVar9 = *puVar10;
  *puVar10 = puVar3;
  _objc_release(uVar9);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c211b40(*puVar10);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf29f20();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  puVar7 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  func_0x00010bf84b00(puVar8);
  puVar7 = puVar7 + 0x20;
  _objc_loadWeakRetained();
  if (puVar7 != (undefined1 *)0x0) {
    uVar9 = *(undefined8 *)(puVar7 + 8);
    *(undefined8 *)(puVar7 + 8) = 0;
    _objc_release(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1091f4418; end: 1091f4463;  */

void FUN_1091f4418(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091f4464; end: 1091f4683; -[SCCameraModeOnboardingDialogPresenter _showOnboardingDialogWithDownloadableURL:isAnimated:] */

void FUN_1091f4464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  puVar2 = PTR_PTR_1126b1058;
  _objc_alloc();
  uVar3 = param_1;
  func_0x00010bf88620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b360();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puVar5 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  func_0x00010c05a200();
  _objc_initWeak(auStack_68,param_1);
  func_0x00010bf4c240(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_4;
  func_0x00010c1267e0(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1091f4684; end: 1091f46ef;  */

void FUN_1091f4684(long param_1,long param_2,int param_3)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_3 != 0) && (param_2 != 0)) && (param_1 != 0)) {
    func_0x00010beba1e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091f46f0; end: 1091f4827; -[SCCameraModeOnboardingDialogPresenter _showOnboardingDialogWithData:isAnimated:okayCompletion:] */

void FUN_1091f46f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((param_4 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d080(0x4008000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126b2720;
    func_0x00010bfe9400(0x4008000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar1 != (undefined *)0x0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1091f4828;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(puVar1);
    puStack_50 = puVar1;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x000107c312d0("APPSTORE",&puStack_70);
    _objc_release(uStack_48);
    _objc_release(puStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1091f4828; end: 1091f485b;  */

void FUN_1091f4828(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010beba220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091f485c; end: 1091f4aeb; -[SCCameraModeOnboardingDialogPresenter _showOnboardingDialogWithImage:okayCompletion:] */

void FUN_1091f485c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bb2a0;
  _objc_alloc();
  func_0x00010c01bf60();
  _objc_initWeak(auStack_78,param_1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_78;
  _objc_copyWeak(auStack_80,puVar8);
  _objc_retain(param_4);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc();
  lVar5 = param_1;
  func_0x00010c0e7ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c0e7e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefe80();
  puVar10 = (undefined8 *)(param_1 + 8);
  uVar9 = *puVar10;
  *puVar10 = puVar4;
  _objc_release(uVar9);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  func_0x00010c211b40(*puVar10);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf29f20();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(puVar8);
  lVar5 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar5 != 0) {
    func_0x00010be024a0(lVar5);
    uVar9 = *(undefined8 *)(lVar5 + 8);
    *(undefined8 *)(lVar5 + 8) = 0;
    _objc_release(uVar9);
    if (*(long *)(param_3 + 0x20) != 0) {
      (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
    }
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 1091f4aec; end: 1091f4b5f;  */

void FUN_1091f4aec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be024a0(lVar1);
    uVar2 = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = 0;
    _objc_release(uVar2);
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091f4b60; end: 1091f4bab; -[SCCameraModeOnboardingDialogPresenter _dismissAlertDialog:] */

void FUN_1091f4b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010bf6f440(*(long *)(param_1 + 0x10),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1091f4bac; end: 1091f4bc3; -[SCCameraModeOnboardingDialogPresenter delegate] */

void FUN_1091f4bac(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091f4bc4; end: 1091f4bcf; -[SCCameraModeOnboardingDialogPresenter setDelegate:] */

void FUN_1091f4bc4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1091f4bd0; end: 1091f4bd7; -[SCCameraModeOnboardingDialogPresenter onboardingDialogTitle] */

undefined8 FUN_1091f4bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1091f4bd8; end: 1091f4bdf; -[SCCameraModeOnboardingDialogPresenter setOnboardingDialogTitle:] */

void FUN_1091f4bd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f4be0; end: 1091f4be7; -[SCCameraModeOnboardingDialogPresenter onboardingDialogDescription] */

undefined8 FUN_1091f4be0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1091f4be8; end: 1091f4bef; -[SCCameraModeOnboardingDialogPresenter setOnboardingDialogDescription:] */

void FUN_1091f4be8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}


