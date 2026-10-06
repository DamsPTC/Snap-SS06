/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b67489c; end: 10b6748e3; -[SCAuraCompatibilityIntroCardViewContext initWithIntroCardDidContinue:] */

undefined8 FUN_10b67489c(undefined8 param_1)

{
  func_0x00010b675074();
  func_0x00010b675038();
  func_0x00010b674fe8();
  func_0x00010b675044();
  return param_1;
}



/* Entry: 10b6748e4; end: 10b6748f3; +[SCAuraCompatibilityIntroCardViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b6748e4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4de08;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6748f4; end: 10b67491f; -[SCAuraCompatibilityIntroCardViewModel initWithFriendFirstName:myZodiac:friendZodiac:] */

void FUN_10b6748f4(void)

{
  func_0x00010b674ff4(PTR_PTR_112709380);
  func_0x00010b674fcc();
  return;
}



/* Entry: 10b674920; end: 10b674933; +[SCAuraCompatibilityIntroCardViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b674920(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4de38;
  param_1[1] = &PTR_DAT_110d4dec8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674934; end: 10b674993; -[SCAuraCompatibilitySnapViewContext initWithRegisterDisplayBottomSnapObserver:displayingBottomSnap:] */

void FUN_10b674934(void)

{
  func_0x00010b674fb8();
  func_0x00010b675054();
  func_0x00010b675010();
  func_0x00010b675004();
  func_0x00010b675038();
  func_0x00010b675030(&stack0xffffffffffffffc0);
  func_0x00010b67501c();
  func_0x00010b675044();
  return;
}



/* Entry: 10b674994; end: 10b6749af; +[SCAuraCompatibilitySnapViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b674994(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4df08;
  param_1[1] = 0;
  param_1[2] = &PTR_s_ob_v_110d4ded8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6749b0; end: 10b6749d7;  */

undefined8 FUN_10b6749b0(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10b6749d8; end: 10b674a57;  */

void FUN_10b6749d8(undefined8 param_1)

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
  pcStack_38 = FUN_10b674f78;
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



/* Entry: 10b674a58; end: 10b674a7f; -[SCAuraCompatibilitySnapViewModel initWithSerializedAstrologySnap:] */

void FUN_10b674a58(void)

{
  func_0x00010b674ff4(PTR_PTR_112709390);
  func_0x00010b674fcc();
  return;
}



/* Entry: 10b674a80; end: 10b674a93; +[SCAuraCompatibilitySnapViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b674a80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4dfc8;
  param_1[1] = &PTR_DAT_110d4e028;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674a94; end: 10b674b73; -[SCAuraMyBirthInfoPageContext initWithNavigator:networkingClient:alertPresenter:onClickHeaderDismiss:onClickComplete:] */

undefined8 *
FUN_10b674a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_7;
  _objc_retainBlock();
  _objc_release(param_7);
  puStack_58 = PTR_PTR_112709398;
  uStack_60 = param_1;
  func_0x00010b675038();
  puVar2 = &uStack_60;
  func_0x00010b675030(puVar2);
  _objc_release(param_5);
  func_0x00010b675044();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_6);
  return puVar2;
}



/* Entry: 10b674b74; end: 10b674b87; +[SCAuraMyBirthInfoPageContext valdiMarshallableObjectDescriptor] */

void FUN_10b674b74(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110d4e038;
  param_1[1] = &PTR_s_SCValdiINavigator_110d4e0e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674b88; end: 10b674bb3; -[SCAuraMyBirthInfoPageViewModel initWithMyBirthday:] */

void FUN_10b674b88(void)

{
  func_0x00010b675038();
  func_0x00010b674fe8();
  return;
}



/* Entry: 10b674bb4; end: 10b674bc7; +[SCAuraMyBirthInfoPageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b674bb4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4e108;
  param_1[1] = &PTR_DAT_110d4e150;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674bc8; end: 10b674bf7; -[SCAuraMyBirthday initWithYear:monthOfYear:dayOfMonth:] */

void FUN_10b674bc8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b674ff4(PTR_PTR_1127093a8);
  func_0x00010b675030(auStack_20);
  return;
}



/* Entry: 10b674bf8; end: 10b674c07; +[SCAuraMyBirthday valdiMarshallableObjectDescriptor] */

void FUN_10b674bf8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_year_110d4e160;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674c08; end: 10b674c6b; -[SCAuraOperaActionBarViewContext initWithOnLeadingCtaClicked:onTrailingCtaClicked:] */

void FUN_10b674c08(void)

{
  func_0x00010b674fb8();
  func_0x00010b675054();
  func_0x00010b675010();
  func_0x00010b675004();
  func_0x00010b675038();
  func_0x00010b675030(&stack0xffffffffffffffc0);
  func_0x00010b67501c();
  func_0x00010b675044();
  return;
}



/* Entry: 10b674c6c; end: 10b674c87; +[SCAuraOperaActionBarViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b674c6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4e1f0;
  param_1[1] = 0;
  param_1[2] = &PTR_s_ob_v_110d4e1c0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674c88; end: 10b674caf; -[SCAuraOperaActionBarViewModel initWithStyle:leadingCtaIcon:trailingCtaIcon:] */

void FUN_10b674c88(void)

{
  func_0x00010b674ff4(PTR_PTR_1127093b8);
  func_0x00010b674fcc();
  return;
}



/* Entry: 10b674cb0; end: 10b674cc3; +[SCAuraOperaActionBarViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b674cb0(undefined8 *param_1)

{
  *param_1 = &PTR_s_style_110d4e268;
  param_1[1] = &PTR_DAT_110d4e2c8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674cc4; end: 10b674d1b; -[SCAuraPersonalityDiviningPageViewContext initWithUpdateAuraData:diviningPageDidComplete:] */

void FUN_10b674cc4(void)

{
  func_0x00010b674fb8();
  func_0x00010b675054();
  func_0x00010b675010();
  func_0x00010b675004();
  func_0x00010b675038();
  func_0x00010b674fe8();
  func_0x00010b67501c();
  func_0x00010b675044();
  return;
}



/* Entry: 10b674d1c; end: 10b674d2b; +[SCAuraPersonalityDiviningPageViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b674d1c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4e2e0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674d2c; end: 10b674d5b; -[SCAuraPersonalityDiviningPageViewModel initWithZodiac:] */

void FUN_10b674d2c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b674ff4(PTR_PTR_1127093c8);
  func_0x00010b675030(auStack_20);
  return;
}



/* Entry: 10b674d5c; end: 10b674d6f; +[SCAuraPersonalityDiviningPageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b674d5c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4e328;
  param_1[1] = &PTR_DAT_110d4e3a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674d70; end: 10b674db7; -[SCAuraPersonalityIntroCardViewContext initWithIntroCardDidContinue:] */

undefined8 FUN_10b674d70(undefined8 param_1)

{
  func_0x00010b675074();
  func_0x00010b675038();
  func_0x00010b674fe8();
  func_0x00010b675044();
  return param_1;
}



/* Entry: 10b674db8; end: 10b674dc7; +[SCAuraPersonalityIntroCardViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b674db8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4e3b0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674dc8; end: 10b674df3; -[SCAuraPersonalityIntroCardViewModel initWithZodiac:] */

void FUN_10b674dc8(void)

{
  func_0x00010b675038();
  func_0x00010b674fe8();
  return;
}



/* Entry: 10b674df4; end: 10b674e07; +[SCAuraPersonalityIntroCardViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b674df4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4e3e0;
  param_1[1] = &PTR_DAT_110d4e428;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674e08; end: 10b674e67; -[SCAuraPersonalitySnapViewContext initWithRegisterDisplayBottomSnapObserver:displayingBottomSnap:] */

void FUN_10b674e08(void)

{
  func_0x00010b674fb8();
  func_0x00010b675054();
  func_0x00010b675010();
  func_0x00010b675004();
  func_0x00010b675038();
  func_0x00010b675030(&stack0xffffffffffffffc0);
  func_0x00010b67501c();
  func_0x00010b675044();
  return;
}



/* Entry: 10b674e68; end: 10b674e83; +[SCAuraPersonalitySnapViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b674e68(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4e468;
  param_1[1] = 0;
  param_1[2] = &PTR_s_ob_v_110d4e438;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674e84; end: 10b674eaf; -[SCAuraPersonalitySnapViewModel initWithSerializedAstrologySnap:] */

void FUN_10b674e84(void)

{
  func_0x00010b675038();
  func_0x00010b674fe8();
  return;
}



/* Entry: 10b674eb0; end: 10b674ec3; +[SCAuraPersonalitySnapViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b674eb0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4e528;
  param_1[1] = &PTR_DAT_110d4e570;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674ec4; end: 10b674eeb; -[SCAuraSnapchatterBitmojiInfo initWithAvatarId:userId:] */

void FUN_10b674ec4(void)

{
  func_0x00010b674ff4(PTR_PTR_1127093f0);
  func_0x00010b674fcc();
  return;
}



/* Entry: 10b674eec; end: 10b674efb; +[SCAuraSnapchatterBitmojiInfo valdiMarshallableObjectDescriptor] */

void FUN_10b674eec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_avatarId_110d4e580;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674efc; end: 10b674f2f; -[SCAuraSummarySnapViewContext init] */

void FUN_10b674efc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127093f8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b674f30; end: 10b674f3f; +[SCAuraSummarySnapViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b674f30(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4e5e0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674f40; end: 10b674f67; -[SCAuraSummarySnapViewModel initWithSerializedSummarySnap:] */

void FUN_10b674f40(void)

{
  func_0x00010b674ff4(PTR_PTR_112709400);
  func_0x00010b674fcc();
  return;
}



/* Entry: 10b674f68; end: 10b674f77; +[SCAuraSummarySnapViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b674f68(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4e610;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674f78; end: 10b674fa7;  */

void FUN_10b674f78(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b674fa8; end: 10b675087;  */

void FUN_10b674fa8(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b675088; end: 10b675133; -[SCCCommunitiesAPIOrganizationType__Enum init] */

undefined ** FUN_10b675088(undefined **param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110db9f18;
  puStack_38 = PTR_PTR_1133bb440;
  puStack_30 = PTR_PTR_1133bb448;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_10b675134;
  puStack_58 = PTR_PTR_112709408;
  ppuVar2 = &puStack_60;
  puStack_60 = puVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  return ppuVar2;
}



/* Entry: 10b675134; end: 10b675177; -[SCCCommunitiesAPICommunityPill initWithId2:name:emailVerified:type:] */

void FUN_10b675134(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709408;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b675178; end: 10b675197; +[SCCCommunitiesAPICommunityPill valdiMarshallableObjectDescriptor] */

void FUN_10b675178(undefined8 *param_1)

{
  *param_1 = &PTR_s_id_110d4e670;
  param_1[1] = &PTR_DAT_110d4e700;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b675198; end: 10b6751d7; -[SCContentFeedCardConverterPayload initWithFeedCardEnvelopeBytes:feedType:] */

void FUN_10b675198(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709410;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b6751d8; end: 10b6751ef; +[SCContentFeedCardConverterPayload valdiMarshallableObjectDescriptor] */

void FUN_10b6751d8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4e718;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6751f0; end: 10b675287; -[SCCFriendingClientINativeCompatRecentlyActiveClient initWithGetRecentlyActive:destroy:] */

undefined8 *
FUN_10b6751f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puStack_38 = PTR_PTR_112709418;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10b675288; end: 10b67529b; +[SCCFriendingClientINativeCompatRecentlyActiveClient valdiMarshallableObjectDescriptor] */

void FUN_10b675288(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4e760;
  param_1[1] = &PTR_DAT_110d4e7a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b67529c; end: 10b6752bf; -[SCCFriendingClientRecentlyActiveItem initWithId2:isRecentlyActive:] */

void FUN_10b67529c(void)

{
  func_0x00010b67534c(PTR_PTR_112709420);
  return;
}



/* Entry: 10b6752c0; end: 10b6752cf; +[SCCFriendingClientRecentlyActiveItem valdiMarshallableObjectDescriptor] */

void FUN_10b6752c0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_id_110d4e7c8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6752d0; end: 10b6752f3; -[SCCFriendingClientRecentlyActiveRequest initWithUserIds:groupIds:] */

void FUN_10b6752d0(void)

{
  func_0x00010b67534c(PTR_PTR_112709428);
  return;
}



/* Entry: 10b6752f4; end: 10b675303; +[SCCFriendingClientRecentlyActiveRequest valdiMarshallableObjectDescriptor] */

void FUN_10b6752f4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4e810;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b675304; end: 10b675337; -[SCCFriendingClientRecentlyActiveResponse init] */

void FUN_10b675304(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709430;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b675338; end: 10b675383; +[SCCFriendingClientRecentlyActiveResponse valdiMarshallableObjectDescriptor] */

void FUN_10b675338(undefined8 *param_1)

{
  *param_1 = &PTR_s_error_110d4e858;
  param_1[1] = &PTR_DAT_110d4e8b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b675384; end: 10b67538b; -[SCCConnectedLensSessionType__Enum init] */

void FUN_10b675384(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b67538c; end: 10b675393; -[SCCPageType__Enum init] */

void FUN_10b67538c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 10b675394; end: 10b6753c3; -[SCCAnalyticsContext initWithSourcePageType:] */

void FUN_10b675394(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b675558(PTR_PTR_112709438);
  func_0x00010b67557c(auStack_20);
  return;
}



/* Entry: 10b6753c4; end: 10b6753d7; +[SCCAnalyticsContext valdiMarshallableObjectDescriptor] */

void FUN_10b6753c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4e8d0;
  param_1[1] = &PTR_DAT_110d4e930;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6753d8; end: 10b6753fb; -[SCCConnectedLensLaunchData initWithAppId:appInstanceId:sessionId:sessionType:] */

void FUN_10b6753d8(void)

{
  func_0x00010b675558(PTR_PTR_112709440);
  func_0x00010b675568();
  return;
}



/* Entry: 10b6753fc; end: 10b67540f; +[SCCConnectedLensLaunchData valdiMarshallableObjectDescriptor] */

void FUN_10b6753fc(undefined8 *param_1)

{
  *param_1 = &PTR_s_appId_110d4e940;
  param_1[1] = &PTR_DAT_110d4e9b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b675410; end: 10b67543b; -[SCCLensItem initWithLensId:name:deeplinkUrl:iconUrl:thumbnailUrl:launchData:] */

void FUN_10b675410(void)

{
  func_0x00010b675558(PTR_PTR_112709448);
  func_0x00010b675568();
  return;
}



/* Entry: 10b67543c; end: 10b67544f; +[SCCLensItem valdiMarshallableObjectDescriptor] */

void FUN_10b67543c(undefined8 *param_1)

{
  *param_1 = &PTR_s_lensId_110d4e9c8;
  param_1[1] = &PTR_DAT_110d4ea70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b675450; end: 10b675473; -[SCCLensLaunchData init] */

void FUN_10b675450(void)

{
  func_0x00010b675584(PTR_PTR_112709450);
  return;
}



/* Entry: 10b675474; end: 10b675487; +[SCCLensLaunchData valdiMarshallableObjectDescriptor] */

void FUN_10b675474(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4ea80;
  param_1[1] = &PTR_DAT_110d4eab0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b675488; end: 10b6754ab; -[SCCLensSelectionConfig init] */

void FUN_10b675488(void)

{
  func_0x00010b675584(PTR_PTR_112709458);
  return;
}



/* Entry: 10b6754ac; end: 10b6754bb; +[SCCLensSelectionConfig valdiMarshallableObjectDescriptor] */

void FUN_10b6754ac(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4eac0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6754bc; end: 10b6754f3; -[SCCLensesILensActivationSourceContext initWithPageType:pageId:] */

void FUN_10b6754bc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709460;
  uStack_20 = param_1;
  func_0x00010b67557c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b6754f4; end: 10b675507; +[SCCLensesILensActivationSourceContext valdiMarshallableObjectDescriptor] */

void FUN_10b6754f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4eaf0;
  param_1[1] = &PTR_DAT_110d4eb38;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b675508; end: 10b675537; -[SCCReplyCameraUser initWithUserId:username:displayName:] */

void FUN_10b675508(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b675558(PTR_PTR_112709468);
  func_0x00010b67557c(auStack_20);
  return;
}



/* Entry: 10b675538; end: 10b6755ab; +[SCCReplyCameraUser valdiMarshallableObjectDescriptor] */

void FUN_10b675538(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110d4eb48;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6755ac; end: 10b6755b3; -[SCCMusicProviderType__Enum init] */

void FUN_10b6755ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b6755b4; end: 10b6755bb; -[SCCUserPermissionMode__Enum init] */

void FUN_10b6755b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b6755bc; end: 10b6755f7; -[SCCMusicProvider initWithType:isConnected:] */

void FUN_10b6755bc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709470;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b6755f8; end: 10b67560b; +[SCCMusicProvider valdiMarshallableObjectDescriptor] */

void FUN_10b6755f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4eba8;
  param_1[1] = &PTR_DAT_110d4ebf0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b67560c; end: 10b67562b; -[SCCMusicTrackData init] */

void FUN_10b67560c(void)

{
  func_0x00010b6756b8(PTR_PTR_112709478);
  return;
}



/* Entry: 10b67562c; end: 10b67563f; +[SCCMusicTrackData valdiMarshallableObjectDescriptor] */

void FUN_10b67562c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4ec00;
  param_1[1] = &PTR_DAT_110d4ec48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b675640; end: 10b67565f; -[SCCNowPlayingData init] */

void FUN_10b675640(void)

{
  func_0x00010b6756b8(PTR_PTR_112709480);
  return;
}



/* Entry: 10b675660; end: 10b675673; +[SCCNowPlayingData valdiMarshallableObjectDescriptor] */

void FUN_10b675660(undefined8 *param_1)

{
  *param_1 = &PTR_s_isrc_110d4ec60;
  param_1[1] = &PTR_DAT_110d4ed20;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b675674; end: 10b675693; -[SCCUserMusicData init] */

void FUN_10b675674(void)

{
  func_0x00010b6756b8(PTR_PTR_112709488);
  return;
}



/* Entry: 10b675694; end: 10b6756d3; +[SCCUserMusicData valdiMarshallableObjectDescriptor] */

void FUN_10b675694(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4ed30;
  param_1[1] = &PTR_DAT_110d4ed78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6756d4; end: 10b6756db; -[SCCChatReactionEmojiSkinTone__Enum init] */

void FUN_10b6756d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 10b6756dc; end: 10b6756e3; -[SCCReactionListStyle__Enum init] */

void FUN_10b6756dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b6756e4; end: 10b6756eb; -[SCCReactionMenuStyle__Enum init] */

void FUN_10b6756e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b6756ec; end: 10b67572b; -[SCCBitmojiChatReactionMetadata initWithIntentId:] */

void FUN_10b6756ec(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b675b54(PTR_PTR_112709490);
  func_0x00010b675b6c(auStack_20);
  return;
}



/* Entry: 10b67572c; end: 10b67573f; +[SCCBitmojiChatReactionMetadata valdiMarshallableObjectDescriptor] */

void FUN_10b67572c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4ed88;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b675740; end: 10b675777; -[SCCChatReactionDetailCellViewModel initWithMetadata:userDisplayName:] */

void FUN_10b675740(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b675b54(PTR_PTR_112709498);
  func_0x00010b675b6c(auStack_20);
  return;
}



/* Entry: 10b675778; end: 10b67578b; +[SCCChatReactionDetailCellViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b675778(undefined8 *param_1)

{
  *param_1 = &PTR_s_metadata_110d4ee30;
  param_1[1] = &PTR_DAT_110d4eed8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b67578c; end: 10b6757ab; -[SCCChatReactionMetadata init] */

void FUN_10b67578c(void)

{
  func_0x00010b675b30(PTR_PTR_1127094a0);
  return;
}



/* Entry: 10b6757ac; end: 10b6757bf; +[SCCChatReactionMetadata valdiMarshallableObjectDescriptor] */

void FUN_10b6757ac(undefined8 *param_1)

{
  *param_1 = &PTR_s_bitmoji_110d4eef0;
  param_1[1] = &PTR_DAT_110d4ef38;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6757c0; end: 10b6757df; -[SCCChatReactionType init] */

void FUN_10b6757c0(void)

{
  func_0x00010b675b30(PTR_PTR_1127094a8);
  return;
}



/* Entry: 10b6757e0; end: 10b6757f3; +[SCCChatReactionType valdiMarshallableObjectDescriptor] */

void FUN_10b6757e0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4ef50;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6757f4; end: 10b675813; -[SCCChatReactionsBelowMessageContext init] */

void FUN_10b6757f4(void)

{
  func_0x00010b675b30(PTR_PTR_1127094b0);
  return;
}



/* Entry: 10b675814; end: 10b675827; +[SCCChatReactionsBelowMessageContext valdiMarshallableObjectDescriptor] */

void FUN_10b675814(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4ef98;
  param_1[1] = &PTR_s_SCValdiViewFactory_110d4f028;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b675828; end: 10b67586f; -[SCCChatReactionsBelowMessageViewModel initWithReactions:] */

void FUN_10b675828(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b675b54(PTR_PTR_1127094b8);
  func_0x00010b675b6c(auStack_20);
  return;
}



/* Entry: 10b675870; end: 10b675883; +[SCCChatReactionsBelowMessageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b675870(undefined8 *param_1)

{
  *param_1 = &PTR_s_reactions_110d4f048;
  param_1[1] = &PTR_DAT_110d4f168;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b675884; end: 10b6758bb; -[SCCChatReactionsDetailListContext initWithAnimatedImageViewFactory:] */

void FUN_10b675884(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127094c0;
  uStack_20 = param_1;
  func_0x00010b675b6c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b6758bc; end: 10b6758cf; +[SCCChatReactionsDetailListContext valdiMarshallableObjectDescriptor] */

void FUN_10b6758bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4f180;
  param_1[1] = &PTR_s_SCValdiViewFactory_110d4f1b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6758d0; end: 10b675907; -[SCCChatReactionsDetailListViewModel initWithReactions:] */

void FUN_10b6758d0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127094c8;
  uStack_20 = param_1;
  func_0x00010b675b6c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b675908; end: 10b67591b; +[SCCChatReactionsDetailListViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b675908(undefined8 *param_1)

{
  *param_1 = &PTR_s_reactions_110d4f1c0;
  param_1[1] = &PTR_DAT_110d4f1f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b67591c; end: 10b67594b; -[SCCEmojiChatReactionMetadata initWithEmoji:] */

void FUN_10b67591c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b675b54(PTR_PTR_1127094d0);
  func_0x00010b675b6c(auStack_20);
  return;
}



/* Entry: 10b67594c; end: 10b67595f; +[SCCEmojiChatReactionMetadata valdiMarshallableObjectDescriptor] */

void FUN_10b67594c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_emoji_110d4f200;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


