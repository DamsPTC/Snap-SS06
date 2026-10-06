/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b635588; end: 10b63559f;  */

void FUN_10b635588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b6355a0; end: 10b6355a7; -[SCNMessagingChatWallpaperBlizzardMetadata wallpaperSource] */

undefined4 FUN_10b6355a0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b6355a8; end: 10b6355af; -[SCNMessagingChatWallpaperBlizzardMetadata setWallpaperSource:] */

void FUN_10b6355a8(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b6355b0; end: 10b6356ff; -[SCNMessagingChatWallpaperUpdate initWithUpdateType:subType:contentObject:localMediaReference:encryptionInfo:blizzardMetadata:] */

undefined1 *
FUN_10b6355b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112706e28;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
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
  return (undefined1 *)puVar1;
}



/* Entry: 10b635700; end: 10b635713; -[SCNMessagingChatWallpaperUpdate initWithUpdateType:subType:blizzardMetadata:] */

void FUN_10b635700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c059810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUpdateType_subType_conte_1125f4010,param_3,param_4,0,0,0,param_5)
  ;
  return;
}



/* Entry: 10b635714; end: 10b63571b; -[SCNMessagingChatWallpaperUpdate updateType] */

undefined8 FUN_10b635714(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63571c; end: 10b635723; -[SCNMessagingChatWallpaperUpdate setUpdateType:] */

void FUN_10b63571c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b635724; end: 10b63572b; -[SCNMessagingChatWallpaperUpdate subType] */

undefined8 FUN_10b635724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63572c; end: 10b635733; -[SCNMessagingChatWallpaperUpdate setSubType:] */

void FUN_10b63572c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b635734; end: 10b63573b; -[SCNMessagingChatWallpaperUpdate contentObject] */

undefined8 FUN_10b635734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63573c; end: 10b635743; -[SCNMessagingChatWallpaperUpdate setContentObject:] */

void FUN_10b63573c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b635744; end: 10b63574b; -[SCNMessagingChatWallpaperUpdate localMediaReference] */

undefined8 FUN_10b635744(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b63574c; end: 10b63576b; -[SCNMessagingChatWallpaperUpdate setLocalMediaReference:] */

void FUN_10b63574c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6357f8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63576c; end: 10b635773; -[SCNMessagingChatWallpaperUpdate encryptionInfo] */

undefined8 FUN_10b63576c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b635774; end: 10b635793; -[SCNMessagingChatWallpaperUpdate setEncryptionInfo:] */

void FUN_10b635774(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6357f8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b635794; end: 10b63579b; -[SCNMessagingChatWallpaperUpdate blizzardMetadata] */

undefined8 FUN_10b635794(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b63579c; end: 10b6357bb; -[SCNMessagingChatWallpaperUpdate setBlizzardMetadata:] */

void FUN_10b63579c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6357f8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6357bc; end: 10b6357f7; -[SCNMessagingChatWallpaperUpdate .cxx_destruct] */

void FUN_10b6357bc(long param_1)

{
  func_0x00010b635810(param_1 + 0x30);
  func_0x00010b635810(param_1 + 0x28);
  func_0x00010b635810(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b6357f8; end: 10b635817;  */

void FUN_10b6357f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b635818; end: 10b63581f; -[SCNMessagingComboSnapItem initWithHasNewChat:hasNewReaction:showSnapIconFirst:hasMultipleNewSnaps:hasMultipleNewChats:] */

void FUN_10b635818(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c019d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithHasNewChat_hasNewReactio_1125e4128);
  return;
}



/* Entry: 10b635820; end: 10b635827; -[SCNMessagingComboSnapItem hasNewChat] */

undefined1 FUN_10b635820(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b635828; end: 10b63582f; -[SCNMessagingComboSnapItem setHasNewChat:] */

void FUN_10b635828(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b635830; end: 10b635837; -[SCNMessagingComboSnapItem hasNewReaction] */

undefined1 FUN_10b635830(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b635838; end: 10b63583f; -[SCNMessagingComboSnapItem setHasNewReaction:] */

void FUN_10b635838(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b635840; end: 10b635847; -[SCNMessagingComboSnapItem showSnapIconFirst] */

undefined1 FUN_10b635840(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b635848; end: 10b63584f; -[SCNMessagingComboSnapItem setShowSnapIconFirst:] */

void FUN_10b635848(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10b635850; end: 10b635857; -[SCNMessagingComboSnapItem hasMultipleNewSnaps] */

undefined1 FUN_10b635850(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b635858; end: 10b63585f; -[SCNMessagingComboSnapItem setHasMultipleNewSnaps:] */

void FUN_10b635858(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 10b635860; end: 10b635867; -[SCNMessagingComboSnapItem hasMultipleNewChats] */

undefined1 FUN_10b635860(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b635868; end: 10b63586f; -[SCNMessagingComboSnapItem setHasMultipleNewChats:] */

void FUN_10b635868(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10b635870; end: 10b63589f; -[SCNMessagingComboSnapItem setUnreadChatCount:] */

void FUN_10b635870(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b6358a0; end: 10b6358ab; -[SCNMessagingComboSnapItem .cxx_destruct] */

void FUN_10b6358a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6358ac; end: 10b635947; -[SCNMessagingCompletedConversationDestination initWithConversationId:conversationType:messageId:] */

undefined1 *
FUN_10b6358ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706e38;
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



/* Entry: 10b635948; end: 10b63594f; -[SCNMessagingCompletedConversationDestination conversationId] */

undefined8 FUN_10b635948(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b635950; end: 10b63597f; -[SCNMessagingCompletedConversationDestination setConversationId:] */

void FUN_10b635950(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b635980; end: 10b635987; -[SCNMessagingCompletedConversationDestination conversationType] */

undefined8 FUN_10b635980(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b635988; end: 10b63598f; -[SCNMessagingCompletedConversationDestination setConversationType:] */

void FUN_10b635988(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b635990; end: 10b635997; -[SCNMessagingCompletedConversationDestination messageId] */

undefined8 FUN_10b635990(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b635998; end: 10b63599f; -[SCNMessagingCompletedConversationDestination setMessageId:] */

void FUN_10b635998(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b6359a0; end: 10b6359ab; -[SCNMessagingCompletedConversationDestination .cxx_destruct] */

void FUN_10b6359a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6359ac; end: 10b635a73; -[SCNMessagingCompletedMassSnapDestination initWithMassSnap:result:successfulDestinationData:] */

undefined1 *
FUN_10b6359ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112706e40;
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



/* Entry: 10b635a74; end: 10b635a7b; -[SCNMessagingCompletedMassSnapDestination initWithMassSnap:result:] */

void FUN_10b635a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c028ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithMassSnap_result_successf_1125e7c90,param_3,param_4,0);
  return;
}



/* Entry: 10b635a7c; end: 10b635a83; -[SCNMessagingCompletedMassSnapDestination massSnap] */

undefined8 FUN_10b635a7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b635a84; end: 10b635aa7; -[SCNMessagingCompletedMassSnapDestination setMassSnap:] */

void FUN_10b635a84(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b635b14();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b635aa8; end: 10b635aaf; -[SCNMessagingCompletedMassSnapDestination result] */

undefined8 FUN_10b635aa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b635ab0; end: 10b635ab7; -[SCNMessagingCompletedMassSnapDestination setResult:] */

void FUN_10b635ab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b635ab8; end: 10b635abf; -[SCNMessagingCompletedMassSnapDestination successfulDestinationData] */

undefined8 FUN_10b635ab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b635ac0; end: 10b635ae3; -[SCNMessagingCompletedMassSnapDestination setSuccessfulDestinationData:] */

void FUN_10b635ac0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b635b14();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b635ae4; end: 10b635b13; -[SCNMessagingCompletedMassSnapDestination .cxx_destruct] */

void FUN_10b635ae4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b635b14; end: 10b635b23;  */

void FUN_10b635b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b635b24; end: 10b635be3; -[SCNMessagingCompletedPhoneNumberDestination initWithPhoneNumber:successfulDestinationData:] */

undefined1 *
FUN_10b635b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706e48;
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



/* Entry: 10b635be4; end: 10b635beb; -[SCNMessagingCompletedPhoneNumberDestination initWithPhoneNumber:] */

void FUN_10b635be4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c035ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithPhoneNumber_successfulDe_1125eb0b0,param_3,0);
  return;
}



/* Entry: 10b635bec; end: 10b635bf3; -[SCNMessagingCompletedPhoneNumberDestination phoneNumber] */

undefined8 FUN_10b635bec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b635bf4; end: 10b635c17; -[SCNMessagingCompletedPhoneNumberDestination setPhoneNumber:] */

void FUN_10b635bf4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b635c74();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b635c18; end: 10b635c1f; -[SCNMessagingCompletedPhoneNumberDestination successfulDestinationData] */

undefined8 FUN_10b635c18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b635c20; end: 10b635c43; -[SCNMessagingCompletedPhoneNumberDestination setSuccessfulDestinationData:] */

void FUN_10b635c20(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b635c74();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b635c44; end: 10b635c73; -[SCNMessagingCompletedPhoneNumberDestination .cxx_destruct] */

void FUN_10b635c44(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b635c74; end: 10b635c83;  */

void FUN_10b635c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b635c84; end: 10b635d97; -[SCNMessagingCompletedStoryDestination initWithStoryId:result:successfulDestinationData:failedMedia:] */

undefined1 *
FUN_10b635c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112706e50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b635d98; end: 10b635da3; -[SCNMessagingCompletedStoryDestination initWithStoryId:result:failedMedia:] */

void FUN_10b635d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithStoryId_result_successfu_1125f1090,param_3,param_4,0,param_5);
  return;
}



/* Entry: 10b635da4; end: 10b635dab; -[SCNMessagingCompletedStoryDestination storyId] */

undefined8 FUN_10b635da4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b635dac; end: 10b635dcf; -[SCNMessagingCompletedStoryDestination setStoryId:] */

void FUN_10b635dac(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b635e58();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b635dd0; end: 10b635dd7; -[SCNMessagingCompletedStoryDestination result] */

undefined8 FUN_10b635dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b635dd8; end: 10b635ddf; -[SCNMessagingCompletedStoryDestination setResult:] */

void FUN_10b635dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b635de0; end: 10b635de7; -[SCNMessagingCompletedStoryDestination successfulDestinationData] */

undefined8 FUN_10b635de0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b635de8; end: 10b635e0b; -[SCNMessagingCompletedStoryDestination setSuccessfulDestinationData:] */

void FUN_10b635de8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b635e58();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b635e0c; end: 10b635e13; -[SCNMessagingCompletedStoryDestination failedMedia] */

undefined8 FUN_10b635e0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b635e14; end: 10b635e1b; -[SCNMessagingCompletedStoryDestination setFailedMedia:] */

void FUN_10b635e14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b635e1c; end: 10b635e57; -[SCNMessagingCompletedStoryDestination .cxx_destruct] */

void FUN_10b635e1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b635e58; end: 10b635e67;  */

void FUN_10b635e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b635e68; end: 10b635f4b; -[SCNMessagingConversation initWithConversationId:participants:retentionPolicy:conversationType:chatNotificationPreference:gameNotificationPreference:callingNotificationPreference:blockedParticipantExceptions:nonFriendUserParticipantExceptions:joinedTimestampMs:sourcePage:lastSenderUserIds:latestReceivedReactionSeenId:isFriendLinkPending:lockedState:kickedParticipants:snapPostOpenViewingPolicy:streakReminderEnabled:categoryType:isEligibleForInfiniteRetention:isEligibleForSevenDayRetention:metadataFormat:isPreservedForLegalHold:canCreatePoll:groupStoryConsentStatus:groupStoryMayExist:] */

void FUN_10b635e68(void)

{
  func_0x00010c005500();
  return;
}



/* Entry: 10b635f4c; end: 10b635f53; -[SCNMessagingConversation conversationId] */

undefined8 FUN_10b635f4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b635f54; end: 10b635f73; -[SCNMessagingConversation setConversationId:] */

void FUN_10b635f54(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b635f74; end: 10b635f7b; -[SCNMessagingConversation title] */

undefined8 FUN_10b635f74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b635f7c; end: 10b635f83; -[SCNMessagingConversation setTitle:] */

void FUN_10b635f7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b635f84; end: 10b635f8b; -[SCNMessagingConversation participants] */

undefined8 FUN_10b635f84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b635f8c; end: 10b635f93; -[SCNMessagingConversation setParticipants:] */

void FUN_10b635f8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b635f94; end: 10b635f9b; -[SCNMessagingConversation retentionPolicy] */

undefined8 FUN_10b635f94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b635f9c; end: 10b635fbb; -[SCNMessagingConversation setRetentionPolicy:] */

void FUN_10b635f9c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b635fbc; end: 10b635fc3; -[SCNMessagingConversation setConversationType:] */

void FUN_10b635fbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b635fc4; end: 10b635fcb; -[SCNMessagingConversation chatNotificationPreference] */

undefined8 FUN_10b635fc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b635fcc; end: 10b635feb; -[SCNMessagingConversation setChatNotificationPreference:] */

void FUN_10b635fcc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b635fec; end: 10b635ff3; -[SCNMessagingConversation gameNotificationPreference] */

undefined8 FUN_10b635fec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b635ff4; end: 10b635ffb; -[SCNMessagingConversation setGameNotificationPreference:] */

void FUN_10b635ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10b635ffc; end: 10b636003; -[SCNMessagingConversation callingNotificationPreference] */

undefined8 FUN_10b635ffc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b636004; end: 10b636023; -[SCNMessagingConversation setCallingNotificationPreference:] */

void FUN_10b636004(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b636024; end: 10b63602b; -[SCNMessagingConversation blockedParticipantExceptions] */

undefined8 FUN_10b636024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b63602c; end: 10b636033; -[SCNMessagingConversation setBlockedParticipantExceptions:] */

void FUN_10b63602c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b636034; end: 10b63603b; -[SCNMessagingConversation nonFriendUserParticipantExceptions] */

undefined8 FUN_10b636034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b63603c; end: 10b636043; -[SCNMessagingConversation setNonFriendUserParticipantExceptions:] */

void FUN_10b63603c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b636044; end: 10b63604b; -[SCNMessagingConversation joinedTimestampMs] */

undefined8 FUN_10b636044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b63604c; end: 10b636053; -[SCNMessagingConversation setJoinedTimestampMs:] */

void FUN_10b63604c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 10b636054; end: 10b63605b; -[SCNMessagingConversation sourcePage] */

undefined8 FUN_10b636054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b63605c; end: 10b636063; -[SCNMessagingConversation setSourcePage:] */

void FUN_10b63605c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10b636064; end: 10b63606b; -[SCNMessagingConversation lastSenderUserIds] */

undefined8 FUN_10b636064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b63606c; end: 10b636073; -[SCNMessagingConversation setLastSenderUserIds:] */

void FUN_10b63606c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b636074; end: 10b63607b; -[SCNMessagingConversation latestReceivedReactionSeenId] */

undefined8 FUN_10b636074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b63607c; end: 10b636083; -[SCNMessagingConversation setLatestReceivedReactionSeenId:] */

void FUN_10b63607c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 10b636084; end: 10b63608b; -[SCNMessagingConversation createdTimestampMs] */

undefined8 FUN_10b636084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b63608c; end: 10b6360ab; -[SCNMessagingConversation setCreatedTimestampMs:] */

void FUN_10b63608c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x80) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


