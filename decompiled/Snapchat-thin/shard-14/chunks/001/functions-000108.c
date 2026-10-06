/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afe3b8c; end: 10afe3bb7;  */

undefined8 FUN_10afe3b8c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1,param_2[2],param_2[3]);
  return 0;
}



/* Entry: 10afe3bb8; end: 10afe3c37;  */

void FUN_10afe3bb8(undefined8 param_1)

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
  pcStack_38 = FUN_10afe3cdc;
  puStack_30 = &UNK_110942728;
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



/* Entry: 10afe3c38; end: 10afe3c5f; -[SCCQuotedStickerUri initWithUri:] */

void FUN_10afe3c38(void)

{
  func_0x00010afe3d74(PTR_PTR_112703eb0);
  func_0x00010afe3d40();
  return;
}



/* Entry: 10afe3c60; end: 10afe3c6f; +[SCCQuotedStickerUri valdiMarshallableObjectDescriptor] */

void FUN_10afe3c60(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_uri_110caa7e8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3c70; end: 10afe3c8f; -[SCCQuotedTextMessageContent initWithText:] */

void FUN_10afe3c70(void)

{
  func_0x00010afe3d20(PTR_PTR_112703eb8);
  return;
}



/* Entry: 10afe3c90; end: 10afe3c9f; +[SCCQuotedTextMessageContent valdiMarshallableObjectDescriptor] */

void FUN_10afe3c90(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_text_110caa818;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3ca0; end: 10afe3cc7; -[SCCQuotedUnsavedSnapContent initWithMediaType:] */

void FUN_10afe3ca0(void)

{
  func_0x00010afe3d74(PTR_PTR_112703ec0);
  func_0x00010afe3d40();
  return;
}



/* Entry: 10afe3cc8; end: 10afe3cdb; +[SCCQuotedUnsavedSnapContent valdiMarshallableObjectDescriptor] */

void FUN_10afe3cc8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caa878;
  param_1[1] = &PTR_DAT_110caa8c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3cdc; end: 10afe3d0f;  */

void FUN_10afe3cdc(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10afe3d10; end: 10afe3d93;  */

void FUN_10afe3d10(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3d94; end: 10afe3d9b; -[SCCChatSnapType__Enum init] */

void FUN_10afe3d94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10afe3d9c; end: 10afe3e23; -[SCCChatSnapContext initWithOnTap:snapPlayerViewFactory:] */

undefined8 *
FUN_10afe3d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_112703ec8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x00010afe3f98(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10afe3e24; end: 10afe3e37; +[SCCChatSnapContext valdiMarshallableObjectDescriptor] */

void FUN_10afe3e24(undefined8 *param_1)

{
  *param_1 = &PTR_s_onTap_110caa8d0;
  param_1[1] = &PTR_DAT_110caa978;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3e38; end: 10afe3e7b; -[SCCChatSnapEnvelopeViewModel initWithHasSound:isSentByCurrentUser:isOpened:isPlayable:] */

void FUN_10afe3e38(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112703ed0;
  uStack_20 = param_1;
  func_0x00010afe3f98(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10afe3e7c; end: 10afe3e8f; +[SCCChatSnapEnvelopeViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afe3e7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caa9b0;
  param_1[1] = &PTR_DAT_110caaa70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3e90; end: 10afe3eaf; -[SCCChatSnapStatusContext init] */

void FUN_10afe3e90(void)

{
  func_0x00010afe3f84(PTR_PTR_112703ed8);
  return;
}



/* Entry: 10afe3eb0; end: 10afe3ec3; +[SCCChatSnapStatusContext valdiMarshallableObjectDescriptor] */

void FUN_10afe3eb0(undefined8 *param_1)

{
  *param_1 = &PTR_s_userProvider_110caaa80;
  param_1[1] = &PTR_s_SCComposerPeopleUserProviding_110caaae0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3ec4; end: 10afe3eff; -[SCCChatSnapStatusViewModel initWithCurrentUserId:messageSenderUserId:snapType:] */

void FUN_10afe3ec4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112703ee0;
  uStack_20 = param_1;
  func_0x00010afe3f98(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10afe3f00; end: 10afe3f13; +[SCCChatSnapStatusViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afe3f00(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caab00;
  param_1[1] = &PTR_DAT_110caab60;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3f14; end: 10afe3f33; -[SCCChatSnapUserActivity init] */

void FUN_10afe3f14(void)

{
  func_0x00010afe3f84(PTR_PTR_112703ee8);
  return;
}



/* Entry: 10afe3f34; end: 10afe3f43; +[SCCChatSnapUserActivity valdiMarshallableObjectDescriptor] */

void FUN_10afe3f34(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110caab70;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3f44; end: 10afe3f63; -[SCCChatSnapViewModel init] */

void FUN_10afe3f44(void)

{
  func_0x00010afe3f84(PTR_PTR_112703ef0);
  return;
}



/* Entry: 10afe3f64; end: 10afe3fb3; +[SCCChatSnapViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afe3f64(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e54f060;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3fb4; end: 10afe3fbb; -[SCCPreviewViewPlaybackState__Enum init] */

void FUN_10afe3fb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10afe3fbc; end: 10afe3fc3; -[SCCRecordingViewTreatment__Enum init] */

void FUN_10afe3fbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10afe3fc4; end: 10afe402b; -[SCCPlaybackState__Enum init] */

void FUN_10afe3fc4(void)

{
  undefined1 in_ZR;
  
  func_0x00010afe464c();
  func_0x00010afe4634(PTR_PTR_1133566c0);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afe4614();
  func_0x00010afe4688();
  func_0x00010afe4664();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010afe464c();
    func_0x00010afe4634(&PTR____CFConstantStringClassReference_110f48738);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010afe4614();
    func_0x00010afe4688();
    func_0x00010afe4664();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010afe4564(PTR_PTR_112703ef8);
      return;
    }
  }
  return;
}



/* Entry: 10afe402c; end: 10afe4093; -[SCCTranscriptionState__Enum init] */

void FUN_10afe402c(void)

{
  undefined1 in_ZR;
  
  func_0x00010afe464c();
  func_0x00010afe4634(&PTR____CFConstantStringClassReference_110f48738);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afe4614();
  func_0x00010afe4688();
  func_0x00010afe4664();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010afe4564(PTR_PTR_112703ef8);
  return;
}



/* Entry: 10afe4094; end: 10afe40b3; -[SCCPlaybackViewContext init] */

void FUN_10afe4094(void)

{
  FUN_10afe4564(PTR_PTR_112703ef8);
  return;
}



/* Entry: 10afe40b4; end: 10afe40d3; +[SCCPlaybackViewContext valdiMarshallableObjectDescriptor] */

void FUN_10afe40b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caac60;
  param_1[1] = &PTR_DAT_110caae88;
  param_1[2] = &PTR_s_od_v_110caac00;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe40d4; end: 10afe40f3;  */

undefined8 FUN_10afe40d4(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x00010afe46ac();
  (*extraout_x8)(*(undefined8 *)(param_2 + 8));
  return 0;
}



/* Entry: 10afe40f4; end: 10afe4143;  */

void FUN_10afe40f4(void)

{
  func_0x00010afe45f4();
  func_0x00010afe45d4();
  func_0x00010afe4588(FUN_10afe44f0);
  func_0x00010afe4604();
  func_0x00010afe45b0();
  func_0x00010afe460c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe4144; end: 10afe4167;  */

undefined8 FUN_10afe4144(void)

{
  code *extraout_x8;
  
  func_0x00010afe46ac();
  (*extraout_x8)();
  return 0;
}



/* Entry: 10afe4168; end: 10afe41b7;  */

void FUN_10afe4168(void)

{
  func_0x00010afe45f4();
  func_0x00010afe45d4();
  func_0x00010afe4588(0x10afe4510);
  func_0x00010afe4604();
  func_0x00010afe45b0();
  func_0x00010afe460c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe41b8; end: 10afe41db;  */

undefined8 FUN_10afe41b8(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x00010afe46ac();
  (*extraout_x8)(*(undefined8 *)(param_2 + 8));
  return 0;
}



/* Entry: 10afe41dc; end: 10afe422b;  */

void FUN_10afe41dc(void)

{
  func_0x00010afe45f4();
  func_0x00010afe45d4();
  func_0x00010afe4588(0x10afe4528);
  func_0x00010afe4604();
  func_0x00010afe45b0();
  func_0x00010afe460c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe422c; end: 10afe4273; -[SCCPlaybackViewModel initWithSenderColor:] */

void FUN_10afe422c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010afe4624(PTR_PTR_112703f00);
  func_0x00010afe45e4(auStack_20);
  return;
}



/* Entry: 10afe4274; end: 10afe4287; +[SCCPlaybackViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afe4274(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caaed8;
  param_1[1] = &PTR_DAT_110caafe0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe4288; end: 10afe42a7; -[SCCPreviewViewContext init] */

void FUN_10afe4288(void)

{
  FUN_10afe4564(PTR_PTR_112703f08);
  return;
}



/* Entry: 10afe42a8; end: 10afe42c7; +[SCCPreviewViewContext valdiMarshallableObjectDescriptor] */

void FUN_10afe42a8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cab050;
  param_1[1] = &PTR_DAT_110cab110;
  param_1[2] = &PTR_s_oi_v_110caaff0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe42c8; end: 10afe42e7;  */

undefined8 FUN_10afe42c8(void)

{
  code *extraout_x8;
  
  func_0x00010afe46ac();
  (*extraout_x8)();
  return 0;
}



/* Entry: 10afe42e8; end: 10afe4337;  */

void FUN_10afe42e8(void)

{
  func_0x00010afe45f4();
  func_0x00010afe45d4();
  func_0x00010afe4588(0x10afe454c);
  func_0x00010afe4604();
  func_0x00010afe45b0();
  func_0x00010afe460c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe4338; end: 10afe4357; -[SCCPreviewViewViewModel init] */

void FUN_10afe4338(void)

{
  FUN_10afe4564(PTR_PTR_112703f10);
  return;
}



/* Entry: 10afe4358; end: 10afe4367; +[SCCPreviewViewViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afe4358(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cab130;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe4368; end: 10afe43a3; -[SCCQuotedPlaybackViewModel initWithSenderColor:] */

void FUN_10afe4368(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112703f18;
  uStack_20 = param_1;
  func_0x00010afe45e4(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10afe43a4; end: 10afe43b3; +[SCCQuotedPlaybackViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afe43a4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cab160;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe43b4; end: 10afe43d3; -[SCCRecordingViewContext init] */

void FUN_10afe43b4(void)

{
  FUN_10afe4564(PTR_PTR_112703f20);
  return;
}



/* Entry: 10afe43d4; end: 10afe43e7; +[SCCRecordingViewContext valdiMarshallableObjectDescriptor] */

void FUN_10afe43d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cab1a8;
  param_1[1] = &PTR_s_SCBridgeObservable_110cab220;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe43e8; end: 10afe4407; -[SCCRecordingViewModel init] */

void FUN_10afe43e8(void)

{
  FUN_10afe4564(PTR_PTR_112703f28);
  return;
}



/* Entry: 10afe4408; end: 10afe441b; +[SCCRecordingViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afe4408(undefined8 *param_1)

{
  *param_1 = &PTR_s_treatment_110cab230;
  param_1[1] = &PTR_DAT_110cab278;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe441c; end: 10afe4453; -[SCCTranscribeResult initWithTranscription:wordInfo:] */

void FUN_10afe441c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112703f30;
  uStack_20 = param_1;
  func_0x00010afe45e4(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10afe4454; end: 10afe4467; +[SCCTranscribeResult valdiMarshallableObjectDescriptor] */

void FUN_10afe4454(undefined8 *param_1)

{
  *param_1 = &PTR_s_transcription_110cab288;
  param_1[1] = &PTR_DAT_110cab2d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe4468; end: 10afe449b; -[SCCVoiceNoteMedia initWithContentObject:encryptionKey:encryptionIv:] */

void FUN_10afe4468(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010afe4624(PTR_PTR_112703f38);
  func_0x00010afe45e4(auStack_20);
  return;
}



/* Entry: 10afe449c; end: 10afe44ab; +[SCCVoiceNoteMedia valdiMarshallableObjectDescriptor] */

void FUN_10afe449c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_contentObject_110cab2e0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe44ac; end: 10afe44df; -[SCCWordInfo initWithWord:startTime:endTime:] */

void FUN_10afe44ac(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010afe4624(PTR_PTR_112703f40);
  func_0x00010afe45e4(auStack_20);
  return;
}



/* Entry: 10afe44e0; end: 10afe44ef; +[SCCWordInfo valdiMarshallableObjectDescriptor] */

void FUN_10afe44e0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cab340;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe44f0; end: 10afe4563;  */

void FUN_10afe44f0(long param_1)

{
  func_0x00010afe4694(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  return;
}



/* Entry: 10afe4564; end: 10afe46b7;  */

void FUN_10afe4564(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 10afe46b8; end: 10afe481f; -[SCCreateChatSelectionScope initWithUIContainer:initialState:preselectedUserIds:delegate:source:createButtonExtensionType:longPressDelegate:] */

undefined1 *
FUN_10afe46b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112703f48;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x48),param_9);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + 0x38));
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe4820; end: 10afe4827; -[SCCreateChatSelectionScope uiContainer] */

undefined8 FUN_10afe4820(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afe4828; end: 10afe4857; -[SCCreateChatSelectionScope setUiContainer:] */

void FUN_10afe4828(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10afe4858; end: 10afe485f; -[SCCreateChatSelectionScope preselectedUserIds] */

undefined8 FUN_10afe4858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe4860; end: 10afe488f; -[SCCreateChatSelectionScope setPreselectedUserIds:] */

void FUN_10afe4860(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10afe4890; end: 10afe4897; -[SCCreateChatSelectionScope initialState] */

undefined8 FUN_10afe4890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe4898; end: 10afe48c7; -[SCCreateChatSelectionScope setInitialState:] */

void FUN_10afe4898(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10afe48c8; end: 10afe48df; -[SCCreateChatSelectionScope delegate] */

void FUN_10afe48c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe48e0; end: 10afe48eb; -[SCCreateChatSelectionScope setDelegate:] */

void FUN_10afe48e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10afe48ec; end: 10afe48f3; -[SCCreateChatSelectionScope source] */

undefined8 FUN_10afe48ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afe48f4; end: 10afe48fb; -[SCCreateChatSelectionScope setSource:] */

void FUN_10afe48f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10afe48fc; end: 10afe4903; -[SCCreateChatSelectionScope createButtonExtensionType] */

undefined8 FUN_10afe48fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afe4904; end: 10afe490b; -[SCCreateChatSelectionScope setCreateButtonExtensionType:] */

void FUN_10afe4904(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10afe490c; end: 10afe4913; -[SCCreateChatSelectionScope statePublisher] */

undefined8 FUN_10afe490c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afe4914; end: 10afe4943; -[SCCreateChatSelectionScope setStatePublisher:] */

void FUN_10afe4914(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10afe4944; end: 10afe494b; -[SCCreateChatSelectionScope groupButtonSelectedPublisher] */

undefined8 FUN_10afe4944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afe494c; end: 10afe497b; -[SCCreateChatSelectionScope setGroupButtonSelectedPublisher:] */

void FUN_10afe494c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10afe497c; end: 10afe4993; -[SCCreateChatSelectionScope longPressDelegate] */

void FUN_10afe497c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe4994; end: 10afe49f7; -[SCCreateChatSelectionScope .cxx_destruct] */

void FUN_10afe4994(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe49f8; end: 10afe4aff; -[SCCreateChatScope initWithUIContainer:initialState:preselectedUserIds:delegate:source:createButtonExtensionType:] */

undefined1 *
FUN_10afe49f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_112703f50;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe4b00; end: 10afe4b07; -[SCCreateChatScope uiContainer] */

undefined8 FUN_10afe4b00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afe4b08; end: 10afe4b37; -[SCCreateChatScope setUiContainer:] */

void FUN_10afe4b08(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10afe4b38; end: 10afe4b3f; -[SCCreateChatScope preselectedUserIds] */

undefined8 FUN_10afe4b38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe4b40; end: 10afe4b6f; -[SCCreateChatScope setPreselectedUserIds:] */

void FUN_10afe4b40(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10afe4b70; end: 10afe4b77; -[SCCreateChatScope initialState] */

undefined8 FUN_10afe4b70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe4b78; end: 10afe4ba7; -[SCCreateChatScope setInitialState:] */

void FUN_10afe4b78(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10afe4ba8; end: 10afe4bbf; -[SCCreateChatScope delegate] */

void FUN_10afe4ba8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe4bc0; end: 10afe4bcb; -[SCCreateChatScope setDelegate:] */

void FUN_10afe4bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10afe4bcc; end: 10afe4bd3; -[SCCreateChatScope source] */

undefined8 FUN_10afe4bcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afe4bd4; end: 10afe4bdb; -[SCCreateChatScope setSource:] */

void FUN_10afe4bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10afe4bdc; end: 10afe4be3; -[SCCreateChatScope createButtonExtensionType] */

undefined8 FUN_10afe4bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afe4be4; end: 10afe4beb; -[SCCreateChatScope setCreateButtonExtensionType:] */

void FUN_10afe4be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10afe4bec; end: 10afe4c2f; -[SCCreateChatScope .cxx_destruct] */

void FUN_10afe4bec(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe4c30; end: 10afe4c97; +[SCCreateChatScopeState addToGroupWithGroupId:] */

void FUN_10afe4c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b27d8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe4c98; end: 10afe4cdf; +[SCCreateChatScopeState newChat] */

undefined * FUN_10afe4c98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b27d8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  return puVar2;
}



/* Entry: 10afe4ce0; end: 10afe4d2b; +[SCCreateChatScopeState newGroup] */

undefined * FUN_10afe4ce0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b27d8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  return puVar2;
}



/* Entry: 10afe4d2c; end: 10afe4d4f; -[SCCreateChatScopeState copyWithZone:] */

undefined8 FUN_10afe4d2c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe4d50; end: 10afe4daf; -[SCCreateChatScopeState hash] */

void FUN_10afe4d50(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_112703f58;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe4db0; end: 10afe4df3; -[SCCreateChatScopeState internalInit] */

void FUN_10afe4db0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703f58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe4df4; end: 10afe4e93; -[SCCreateChatScopeState isEqual:] */

long FUN_10afe4df4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe4e78;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10afe4e78;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afe4e78;
    }
  }
  lVar3 = 1;
LAB_10afe4e78:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe4e94; end: 10afe4f3f; -[SCCreateChatScopeState matchNewChat:newGroup:addToGroup:] */

void FUN_10afe4e94(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else {
    if (lVar1 == 1) {
      if (param_4 == 0) goto LAB_10afe4f1c;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
    else {
      if ((lVar1 != 0) || (param_3 == 0)) goto LAB_10afe4f1c;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    (*pcVar2)(lVar1);
  }
LAB_10afe4f1c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afe4f40; end: 10afe4f4b; -[SCCreateChatScopeState .cxx_destruct] */

void FUN_10afe4f40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afe4f4c; end: 10afe4ff7; -[SCRecipientPickerUpdateGeneratorEvent initWithConfirmationModelGenerator:headerModelGenerator:] */

undefined1 *
FUN_10afe4f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112703f60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


