/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b66d27c; end: 10b66d2b7; -[SCCCameraUserRecipient initWithRecipientType:userId:username:displayName:] */

void FUN_10b66d27c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708ab0;
  uStack_20 = param_1;
  func_0x00010b66d2dc(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b66d2b8; end: 10b66d2e3; +[SCCCameraUserRecipient valdiMarshallableObjectDescriptor] */

void FUN_10b66d2b8(undefined8 *param_1)

{
  *param_1 = &PTR_s_recipientType_110d44d48;
  param_1[1] = &PTR_DAT_110d44dc0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66d2e4; end: 10b66d2eb; -[SCCFriendsFeedStatusEntityType__Enum init] */

void FUN_10b66d2e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b66d2ec; end: 10b66d31f; -[SCCAttributedTextBlock initWithContent:] */

void FUN_10b66d2ec(undefined8 param_1)

{
  func_0x00010b66d3d4(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b66d320; end: 10b66d337; +[SCCAttributedTextBlock valdiMarshallableObjectDescriptor] */

void FUN_10b66d320(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_content_110d44dd0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66d338; end: 10b66d36f; -[SCCFriendsFeedStatus initWithEntity:infoText:infoTextAttributed:hasConsumableContent:iconSrc:] */

void FUN_10b66d338(undefined8 param_1)

{
  func_0x00010b66d3d4(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b66d370; end: 10b66d383; +[SCCFriendsFeedStatus valdiMarshallableObjectDescriptor] */

void FUN_10b66d370(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d44e30;
  param_1[1] = &PTR_DAT_110d44ec0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66d384; end: 10b66d3bf; -[SCCFriendsFeedStatusEntity initWithType:objId:] */

void FUN_10b66d384(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708ac8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b66d3c0; end: 10b66d3f3; +[SCCFriendsFeedStatusEntity valdiMarshallableObjectDescriptor] */

void FUN_10b66d3c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d44ed8;
  param_1[1] = &PTR_DAT_110d44f20;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66d3f4; end: 10b66d433; -[SCCTopicPageAnalyticsContext initWithSourcePageType:sourcePageSessionId:sourceType:] */

void FUN_10b66d3f4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708ad0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b66d434; end: 10b66d453; +[SCCTopicPageAnalyticsContext valdiMarshallableObjectDescriptor] */

void FUN_10b66d434(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d44f30;
  param_1[1] = &PTR_DAT_110d44f90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66d454; end: 10b66d4a3; -[SCCTopicPageInfoLens initWithLensId:lensName:iconUrl:] */

void FUN_10b66d454(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708ad8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b66d4a4; end: 10b66d4bb; +[SCCTopicPageInfoLens valdiMarshallableObjectDescriptor] */

void FUN_10b66d4a4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_lensId_110d44fa0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66d4bc; end: 10b66d593; -[SCCallLogListContext initWithDeckContainerFactory:actionSheetPresenter:startOneOnOneCall:startGroupCall:simpleSnapchatEnabled:] */

undefined8 *
FUN_10b66d4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  puStack_58 = PTR_PTR_112708ae0;
  puVar2 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_4);
  func_0x00010b66d74c();
  _objc_release(uVar1);
  _objc_release(param_5);
  return puVar2;
}



/* Entry: 10b66d594; end: 10b66d5bb; +[SCCallLogListContext valdiMarshallableObjectDescriptor] */

void FUN_10b66d594(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d450c0;
  param_1[1] = &PTR_DAT_110d45150;
  param_1[2] = &PTR_s_ooob_v_110d45078;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66d5bc; end: 10b66d5eb;  */

undefined8 FUN_10b66d5bc(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],param_2[2],*(uint *)(param_2 + 3) & 1);
  return 0;
}



/* Entry: 10b66d5ec; end: 10b66d64b;  */

void FUN_10b66d5ec(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  FUN_10b66d73c(FUN_10b66d6d8);
  _objc_retainBlock(&puStack_48);
  func_0x00010b66d760();
  func_0x00010b66d74c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b66d64c; end: 10b66d677;  */

undefined8 FUN_10b66d64c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 10b66d678; end: 10b66d6d7;  */

void FUN_10b66d678(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  FUN_10b66d73c(0x10b66d70c);
  _objc_retainBlock(&puStack_48);
  func_0x00010b66d760();
  func_0x00010b66d74c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b66d6d8; end: 10b66d73b;  */

void FUN_10b66d6d8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b66d73c; end: 10b66d76b;  */

void FUN_10b66d73c(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10b66d76c; end: 10b66d773; -[SCCTCLPlatformTriggerType__Enum init] */

void FUN_10b66d76c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,1);
  return;
}



/* Entry: 10b66d774; end: 10b66d783; -[SCCTalkCommonPresenceErrorCode__Enum init] */

void FUN_10b66d774(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithEnumCases_count__1125e1b50,0x1133baa58,0x36);
  return;
}



/* Entry: 10b66d784; end: 10b66d793; -[SCTCCallingErrorCode__Enum init] */

void FUN_10b66d784(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithEnumCases_count__1125e1b50,0x1133bac08,0xa9);
  return;
}



/* Entry: 10b66d794; end: 10b66d79b; -[SCTMissedCallReason__Enum init] */

void FUN_10b66d794(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b66d79c; end: 10b66d877; -[SCStartCallTrayContext initWithDisplayName:participants:renderContentOnly:dismiss:startCall:] */

undefined8 *
FUN_10b66d79c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_7;
  _objc_retainBlock();
  _objc_release(param_7);
  puStack_58 = PTR_PTR_112708ae8;
  puVar2 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_6);
  return puVar2;
}



/* Entry: 10b66d878; end: 10b66d89f; +[SCStartCallTrayContext valdiMarshallableObjectDescriptor] */

void FUN_10b66d878(undefined8 *param_1)

{
  *param_1 = &PTR_s_displayName_110d45198;
  param_1[1] = &PTR_DAT_110d45228;
  param_1[2] = &PTR_s_ob_v_110d45168;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66d8a0; end: 10b66d8c7;  */

undefined8 FUN_10b66d8a0(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10b66d8c8; end: 10b66d947;  */

void FUN_10b66d8c8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b66d99c;
  puStack_30 = &UNK_110842508;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b66d948; end: 10b66d97b; -[SCStartCallTrayParticipant init] */

void FUN_10b66d948(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708af0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b66d97c; end: 10b66d99b; +[SCStartCallTrayParticipant valdiMarshallableObjectDescriptor] */

void FUN_10b66d97c(undefined8 *param_1)

{
  *param_1 = &PTR_s_userId_110d45238;
  param_1[1] = &PTR_s_SCCBitmojiInfo_110d45280;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66d99c; end: 10b66d9cb;  */

void FUN_10b66d99c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b66d9cc; end: 10b66d9d3; -[SCCCommentType__Enum init] */

void FUN_10b66d9cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b66d9d4; end: 10b66da43; -[SCCProfileBackgroundType__Enum init] */

void FUN_10b66d9d4(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010b66e864();
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f6bed8;
  puStack_30 = PTR_PTR_1133bb150;
  uStack_28 = extraout_x8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_38,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b66e840();
  func_0x00010b66e858();
  func_0x00010b66e878(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b66e864();
  puStack_148 = PTR_PTR_1133bb158;
  puStack_140 = PTR_PTR_1133bb160;
  puStack_138 = PTR_PTR_1133bb168;
  puStack_130 = PTR_PTR_1133bb170;
  puStack_128 = PTR_PTR_1133bb178;
  puStack_120 = PTR_PTR_1133bb180;
  puStack_118 = PTR_PTR_1133bb188;
  puStack_110 = PTR_PTR_1133bb190;
  puStack_108 = PTR_PTR_1133bb198;
  puStack_100 = PTR_PTR_1133bb1a0;
  puStack_f8 = PTR_PTR_1133bb1a8;
  puStack_f0 = PTR_PTR_1133bb1b0;
  puStack_e8 = PTR_PTR_1133bb1b8;
  puStack_e0 = PTR_PTR_1133bb1c0;
  puStack_d8 = PTR_PTR_1133bb1c8;
  puStack_d0 = PTR_PTR_1133bb1d0;
  puStack_c8 = PTR_PTR_1133bb1d8;
  puStack_c0 = PTR_PTR_1133bb1e0;
  puStack_b8 = PTR_PTR_1133bb1e8;
  puStack_b0 = PTR_PTR_1133bb1f0;
  puStack_a8 = PTR_PTR_1133bb1f8;
  puStack_a0 = PTR_PTR_1133bb200;
  puStack_98 = PTR_PTR_1133bb208;
  puStack_90 = PTR_PTR_1133bb210;
  puStack_88 = PTR_PTR_1133bb218;
  puStack_80 = PTR_PTR_1133bb220;
  uStack_78 = extraout_x8_00;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_148,0x1a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b66e840();
  func_0x00010b66e858();
  func_0x00010b66e878(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b66e784(PTR_PTR_112708af8);
  return;
}



/* Entry: 10b66da44; end: 10b66dbaf; -[SCCReportType__Enum init] */

void FUN_10b66da44(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010b66e864();
  puStack_108 = PTR_PTR_1133bb158;
  puStack_100 = PTR_PTR_1133bb160;
  puStack_f8 = PTR_PTR_1133bb168;
  puStack_f0 = PTR_PTR_1133bb170;
  puStack_e8 = PTR_PTR_1133bb178;
  puStack_e0 = PTR_PTR_1133bb180;
  puStack_d8 = PTR_PTR_1133bb188;
  puStack_d0 = PTR_PTR_1133bb190;
  puStack_c8 = PTR_PTR_1133bb198;
  puStack_c0 = PTR_PTR_1133bb1a0;
  puStack_b8 = PTR_PTR_1133bb1a8;
  puStack_b0 = PTR_PTR_1133bb1b0;
  puStack_a8 = PTR_PTR_1133bb1b8;
  puStack_a0 = PTR_PTR_1133bb1c0;
  puStack_98 = PTR_PTR_1133bb1c8;
  puStack_90 = PTR_PTR_1133bb1d0;
  puStack_88 = PTR_PTR_1133bb1d8;
  puStack_80 = PTR_PTR_1133bb1e0;
  puStack_78 = PTR_PTR_1133bb1e8;
  puStack_70 = PTR_PTR_1133bb1f0;
  puStack_68 = PTR_PTR_1133bb1f8;
  puStack_60 = PTR_PTR_1133bb200;
  puStack_58 = PTR_PTR_1133bb208;
  puStack_50 = PTR_PTR_1133bb210;
  puStack_48 = PTR_PTR_1133bb218;
  puStack_40 = PTR_PTR_1133bb220;
  uStack_38 = extraout_x8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_108,0x1a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b66e840();
  func_0x00010b66e858();
  func_0x00010b66e878(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b66e784(PTR_PTR_112708af8);
  return;
}



/* Entry: 10b66dbb0; end: 10b66dbcf; -[SCCBitmojiOutfitReportParams initWithReportedUserId:avatarMetadataBytes:] */

void FUN_10b66dbb0(void)

{
  func_0x00010b66e784(PTR_PTR_112708af8);
  return;
}



/* Entry: 10b66dbd0; end: 10b66dbdf; +[SCCBitmojiOutfitReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66dbd0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_reportedUserId_110d45290;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66dbe0; end: 10b66dc0f; -[SCCChatMediaReportParams initWithConversationId:messageId:reportedUserId:mediaSentTimestamp:] */

void FUN_10b66dbe0(void)

{
  func_0x00010b66e7e0(PTR_PTR_112708b00);
  func_0x00010b66e7fc();
  return;
}



/* Entry: 10b66dc10; end: 10b66dc23; +[SCCChatMediaReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66dc10(undefined8 *param_1)

{
  *param_1 = &PTR_s_conversationId_110d452d8;
  param_1[1] = &PTR_DAT_110d453b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66dc24; end: 10b66dc5f; -[SCCChatMessageReportParams initWithConversationId:clientMessageId:serverMessageId:reportedUserId:] */

void FUN_10b66dc24(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b66e7e0(PTR_PTR_112708b08);
  _objc_msgSendSuper2(auStack_20,param_2,0);
  return;
}



/* Entry: 10b66dc60; end: 10b66dc6f; +[SCCChatMessageReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66dc60(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_conversationId_110d453c0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66dc70; end: 10b66dc97; -[SCCChatWallpaperReportParams initWithSetterUserId:conversationId:media:createdAtMs:] */

void FUN_10b66dc70(void)

{
  func_0x00010b66e7e0(PTR_PTR_112708b10);
  func_0x00010b66e7b0();
  return;
}



/* Entry: 10b66dc98; end: 10b66dcab; +[SCCChatWallpaperReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66dc98(undefined8 *param_1)

{
  *param_1 = &PTR_s_setterUserId_110d45498;
  param_1[1] = &PTR_DAT_110d45528;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66dcac; end: 10b66dcd3; -[SCCCustomStoryReportParams initWithSnapId:reportedUserId:] */

void FUN_10b66dcac(void)

{
  func_0x00010b66e7e0(PTR_PTR_112708b18);
  func_0x00010b66e7c4();
  return;
}



/* Entry: 10b66dcd4; end: 10b66dce3; +[SCCCustomStoryReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66dcd4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_snapId_110d45538;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66dce4; end: 10b66dd07; -[SCCGamesChatMessageReportContent initWithContent:senderUserId:messageTimestampMs:] */

void FUN_10b66dce4(void)

{
  func_0x00010b66e7e0(PTR_PTR_112708b20);
  func_0x00010b66e7b0();
  return;
}



/* Entry: 10b66dd08; end: 10b66dd17; +[SCCGamesChatMessageReportContent valdiMarshallableObjectDescriptor] */

void FUN_10b66dd08(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_content_110d45598;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66dd18; end: 10b66dd4f; -[SCCGamesChatMessageReportParams initWithConversationId:reportedUserId:gameLensId:gameSessionId:activeParticipantUserIds:isGroupChat:messages:] */

void FUN_10b66dd18(undefined8 param_1)

{
  func_0x00010b66e7b0(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b66dd50; end: 10b66dd63; +[SCCGamesChatMessageReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66dd50(undefined8 *param_1)

{
  *param_1 = &PTR_s_conversationId_110d455f8;
  param_1[1] = &PTR_DAT_110d456b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66dd64; end: 10b66dd83; -[SCCISafetyReportTweaks init] */

void FUN_10b66dd64(void)

{
  func_0x00010b66e80c(PTR_PTR_112708b30);
  return;
}



/* Entry: 10b66dd84; end: 10b66dd93; +[SCCISafetyReportTweaks valdiMarshallableObjectDescriptor] */

void FUN_10b66dd84(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d456c8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66dd94; end: 10b66ddcb; -[SCCLensReportParams initWithLensId:] */

void FUN_10b66dd94(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708b38;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b66ddcc; end: 10b66dddb; +[SCCLensReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66ddcc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_lensId_110d45848;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66dddc; end: 10b66ddfb; -[SCCMapStoryReportParams initWithSnapId:storyName:] */

void FUN_10b66dddc(void)

{
  func_0x00010b66e784(PTR_PTR_112708b40);
  return;
}



/* Entry: 10b66ddfc; end: 10b66de0b; +[SCCMapStoryReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66ddfc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_snapId_110d45890;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66de0c; end: 10b66de2b; -[SCCMediaShareReportParams initWithLinkId:linkUrl:] */

void FUN_10b66de0c(void)

{
  func_0x00010b66e784(PTR_PTR_112708b48);
  return;
}



/* Entry: 10b66de2c; end: 10b66de3b; +[SCCMediaShareReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66de2c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_linkId_110d458d8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66de3c; end: 10b66de63; -[SCCMyStoryReportParams initWithSnapId:reportedUserId:] */

void FUN_10b66de3c(void)

{
  func_0x00010b66e7e0(PTR_PTR_112708b50);
  func_0x00010b66e7c4();
  return;
}



/* Entry: 10b66de64; end: 10b66de73; +[SCCMyStoryReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66de64(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_snapId_110d45920;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66de74; end: 10b66de93; -[SCCNonPartnerStoryTileReportParams initWithSnapId:] */

void FUN_10b66de74(void)

{
  func_0x00010b66e768(PTR_PTR_112708b58);
  return;
}



/* Entry: 10b66de94; end: 10b66dea3; +[SCCNonPartnerStoryTileReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66de94(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_snapId_110d45980;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66dea4; end: 10b66dec3; -[SCCOfficialUserStoryTileReportParams initWithSnapId:] */

void FUN_10b66dea4(void)

{
  func_0x00010b66e768(PTR_PTR_112708b60);
  return;
}



/* Entry: 10b66dec4; end: 10b66ded3; +[SCCOfficialUserStoryTileReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66dec4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_snapId_110d459b0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66ded4; end: 10b66def3; -[SCCPlanReportParams initWithEventId:] */

void FUN_10b66ded4(void)

{
  func_0x00010b66e768(PTR_PTR_112708b68);
  return;
}



/* Entry: 10b66def4; end: 10b66df03; +[SCCPlanReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66def4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_eventId_110d459e0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66df04; end: 10b66df3b; -[SCCPrivateSnapReportParams initWithConversationId:messageId:reportedUserId:mediaSentTimestamp:] */

void FUN_10b66df04(void)

{
  func_0x00010b66e7e0(PTR_PTR_112708b70);
  func_0x00010b66e7b0();
  return;
}



/* Entry: 10b66df3c; end: 10b66df4f; +[SCCPrivateSnapReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66df3c(undefined8 *param_1)

{
  *param_1 = &PTR_s_conversationId_110d45a10;
  param_1[1] = &PTR_DAT_110d45b00;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66df50; end: 10b66df73; -[SCCProfileBackgroundReportParams initWithReportedUserId:backgroundUrl:backgroundType:] */

void FUN_10b66df50(void)

{
  func_0x00010b66e7e0(PTR_PTR_112708b78);
  func_0x00010b66e7b0();
  return;
}



/* Entry: 10b66df74; end: 10b66df87; +[SCCProfileBackgroundReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66df74(undefined8 *param_1)

{
  *param_1 = &PTR_s_reportedUserId_110d45b10;
  param_1[1] = &PTR_DAT_110d45b70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66df88; end: 10b66dfaf; -[SCCPublicUserStoryReportParams initWithSnapId:reportedUserId:] */

void FUN_10b66df88(void)

{
  func_0x00010b66e7e0(PTR_PTR_112708b80);
  func_0x00010b66e7c4();
  return;
}



/* Entry: 10b66dfb0; end: 10b66dfbf; +[SCCPublicUserStoryReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66dfb0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_snapId_110d45b80;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66dfc0; end: 10b66dfeb; -[SCCPublisherStoryReportParams initWithSnapId:editionId:publisherId:publisherName:] */

void FUN_10b66dfc0(void)

{
  func_0x00010b66e7e0(PTR_PTR_112708b88);
  func_0x00010b66e7fc();
  return;
}



/* Entry: 10b66dfec; end: 10b66dffb; +[SCCPublisherStoryReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66dfec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_snapId_110d45be0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66dffc; end: 10b66e027; -[SCCPublisherStoryTileReportParams initWithTileId:mediaUrl:publisherId:publisherName:] */

void FUN_10b66dffc(void)

{
  func_0x00010b66e7e0(PTR_PTR_112708b90);
  func_0x00010b66e7fc();
  return;
}



/* Entry: 10b66e028; end: 10b66e037; +[SCCPublisherStoryTileReportParams valdiMarshallableObjectDescriptor] */

void FUN_10b66e028(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_tileId_110d45c88;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66e038; end: 10b66e057; -[SCCReportedChat initWithConversationId:chatMessages:] */

void FUN_10b66e038(void)

{
  func_0x00010b66e784(PTR_PTR_112708b98);
  return;
}



/* Entry: 10b66e058; end: 10b66e06b; +[SCCReportedChat valdiMarshallableObjectDescriptor] */

void FUN_10b66e058(undefined8 *param_1)

{
  *param_1 = &PTR_s_conversationId_110d45d30;
  param_1[1] = &PTR_DAT_110d45d78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66e06c; end: 10b66e09b; -[SCCReportedChatMessage initWithServerMessageId:userId:content:timestamp:] */

void FUN_10b66e06c(void)

{
  func_0x00010b66e7e0(PTR_PTR_112708ba0);
  func_0x00010b66e7c4();
  return;
}



/* Entry: 10b66e09c; end: 10b66e0af; +[SCCReportedChatMessage valdiMarshallableObjectDescriptor] */

void FUN_10b66e09c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d45d88;
  param_1[1] = &PTR_DAT_110d45e48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66e0b0; end: 10b66e0cf; -[SCCReportedMedia init] */

void FUN_10b66e0b0(void)

{
  func_0x00010b66e80c(PTR_PTR_112708ba8);
  return;
}



/* Entry: 10b66e0d0; end: 10b66e0df; +[SCCReportedMedia valdiMarshallableObjectDescriptor] */

void FUN_10b66e0d0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d45e60;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66e0e0; end: 10b66e0ff; -[SCCReportedMessageCalendarEventShare initWithEventId:] */

void FUN_10b66e0e0(void)

{
  func_0x00010b66e768(PTR_PTR_112708bb0);
  return;
}



/* Entry: 10b66e100; end: 10b66e10f; +[SCCReportedMessageCalendarEventShare valdiMarshallableObjectDescriptor] */

void FUN_10b66e100(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_eventId_110d45ed8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66e110; end: 10b66e12f; -[SCCReportedMessageChatMedia initWithContents:] */

void FUN_10b66e110(void)

{
  func_0x00010b66e768(PTR_PTR_112708bb8);
  return;
}



/* Entry: 10b66e130; end: 10b66e143; +[SCCReportedMessageChatMedia valdiMarshallableObjectDescriptor] */

void FUN_10b66e130(undefined8 *param_1)

{
  *param_1 = &PTR_s_contents_110d45f08;
  param_1[1] = &PTR_DAT_110d45f38;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66e144; end: 10b66e163; -[SCCReportedMessageContent init] */

void FUN_10b66e144(void)

{
  func_0x00010b66e80c(PTR_PTR_112708bc0);
  return;
}



/* Entry: 10b66e164; end: 10b66e177; +[SCCReportedMessageContent valdiMarshallableObjectDescriptor] */

void FUN_10b66e164(undefined8 *param_1)

{
  *param_1 = &PTR_s_unknown_110d45f48;
  param_1[1] = &PTR_DAT_110d460b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66e178; end: 10b66e197; -[SCCReportedMessageCreativeToolItem initWithId2:] */

void FUN_10b66e178(void)

{
  func_0x00010b66e768(PTR_PTR_112708bc8);
  return;
}



/* Entry: 10b66e198; end: 10b66e1a7; +[SCCReportedMessageCreativeToolItem valdiMarshallableObjectDescriptor] */

void FUN_10b66e198(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_id_110d46128;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66e1a8; end: 10b66e1db; -[SCCReportedMessageMapDropShare initWithCreatorUserId:latitude:longitude:title:emojiUnicode:id2:] */

void FUN_10b66e1a8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b66e7e0(PTR_PTR_112708bd0);
  func_0x00010b66e7f0(auStack_20);
  return;
}



/* Entry: 10b66e1dc; end: 10b66e1eb; +[SCCReportedMessageMapDropShare valdiMarshallableObjectDescriptor] */

void FUN_10b66e1dc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_creatorUserId_110d46158;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66e1ec; end: 10b66e20f; -[SCCReportedMessagePoll initWithQuestion:options:expireTimeoutMs:] */

void FUN_10b66e1ec(void)

{
  func_0x00010b66e7e0(PTR_PTR_112708bd8);
  func_0x00010b66e7b0();
  return;
}



/* Entry: 10b66e210; end: 10b66e21f; +[SCCReportedMessagePoll valdiMarshallableObjectDescriptor] */

void FUN_10b66e210(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_question_110d46200;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66e220; end: 10b66e247; -[SCCReportedMessageQnaResponse initWithPromptId:responseId:promptContent:responseContent:] */

void FUN_10b66e220(void)

{
  func_0x00010b66e7e0(PTR_PTR_112708be0);
  func_0x00010b66e7fc();
  return;
}



/* Entry: 10b66e248; end: 10b66e25b; +[SCCReportedMessageQnaResponse valdiMarshallableObjectDescriptor] */

void FUN_10b66e248(undefined8 *param_1)

{
  *param_1 = &PTR_s_promptId_110d46260;
  param_1[1] = &PTR_DAT_110d462d8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66e25c; end: 10b66e27b; -[SCCReportedMessageSnap initWithContent:] */

void FUN_10b66e25c(void)

{
  func_0x00010b66e768(PTR_PTR_112708be8);
  return;
}



/* Entry: 10b66e27c; end: 10b66e28f; +[SCCReportedMessageSnap valdiMarshallableObjectDescriptor] */

void FUN_10b66e27c(undefined8 *param_1)

{
  *param_1 = &PTR_s_content_110d462e8;
  param_1[1] = &PTR_DAT_110d46318;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66e290; end: 10b66e2af; -[SCCReportedMessageSoundShare initWithTrackId:] */

void FUN_10b66e290(void)

{
  func_0x00010b66e768(PTR_PTR_112708bf0);
  return;
}



/* Entry: 10b66e2b0; end: 10b66e2bf; +[SCCReportedMessageSoundShare valdiMarshallableObjectDescriptor] */

void FUN_10b66e2b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_trackId_110d46328;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66e2c0; end: 10b66e2df; -[SCCReportedMessageStoryShare initWithContent:] */

void FUN_10b66e2c0(void)

{
  func_0x00010b66e768(PTR_PTR_112708bf8);
  return;
}


