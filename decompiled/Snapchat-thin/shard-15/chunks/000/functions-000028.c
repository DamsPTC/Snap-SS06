/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b787c44; end: 10b787c7b; -[SOJUIdentitySuggestedFriendDeprecated initWithIdValue:name:suggestReason:score:suggestReasonDisplay:display:isHidden:storyPrivacy:isNewSnapchatter:] */

void FUN_10b787c44(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b787c7c; end: 10b787d8b; +[SOJUIdentitySuggestedFriendDeprecated registerMessageFields:] */

void FUN_10b787c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  FUN_10b787d8c(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2);
  func_0x00010b787dbc();
  FUN_10b787d8c();
  func_0x00010b787da8();
  FUN_10b787d8c();
  func_0x00010b787dbc();
  func_0x00010b787d9c();
  func_0x00010c19a460(param_3,param_2,0x5d440277080772);
  func_0x00010b787da8();
  FUN_10b787d8c();
  func_0x00010b787dbc();
  FUN_10b787d8c();
  func_0x00010b787da8();
  func_0x00010b787d9c();
  func_0x00010b787da8();
  FUN_10b787d8c();
  func_0x00010b787da8();
  func_0x00010b787d9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b787d8c; end: 10b787dcb;  */

void FUN_10b787d8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b787dcc; end: 10b787def; -[SOJUIdentitySuggestedFriendDisplayInformation initWithUserId:suggestionSubtext:suggestionToken:suggestionSubtextLowercase:] */

void FUN_10b787dcc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b787df0; end: 10b787e6f; +[SOJUIdentitySuggestedFriendDisplayInformation registerMessageFields:] */

void FUN_10b787df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_userId_112682320;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,6,0,0,0,0);
  FUN_10b787e70();
  FUN_10b787e70();
  FUN_10b787e70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b787e70; end: 10b787e8f;  */

void FUN_10b787e70(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b787e90; end: 10b787ef7; -[SOJUIdentitySuggestedFriendV2 initWithUserId:username:displayName:storyPrivacy:bitmojiAvatarId:metadata:bitmojiSelfieId:bitmojiSnapcodeSelfieId:emojiSymbol:isPopularAccout:displayUsernameDeprecated:mutableUsername:snapshotMetadata:bitmojiSceneId:bitmojiBackgroundId:snapshotMetadataString:isRecentlyActive:bitmojiBackgroundUrl:snapProId:encodedAvatarMetadata:snapProInfo:isHighQuality:impressionCount:] */

void FUN_10b787e90(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b787ef8; end: 10b78810f; +[SOJUIdentitySuggestedFriendV2 registerMessageFields:] */

void FUN_10b787ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b788160();
  func_0x00010b788130();
  func_0x00010b788160();
  func_0x00010b788130();
  func_0x00010b788110();
  func_0x00010bf06b60(param_3,param_2,PTR_s_storyPrivacy_1126744c8,0,1,6,0,FUN_10b798094,
                      FUN_10b798114,0);
  func_0x00010b788110();
  func_0x00010b788160();
  func_0x00010b788130();
  func_0x00010b788110();
  func_0x00010b788110();
  func_0x00010b788110();
  func_0x00010b788140();
  func_0x00010b788154();
  func_0x00010b788130(param_3,param_2,PTR_s_displayUsernameDeprecated_112546b00,
                      &PTR____CFConstantStringClassReference_110f7f5d8,2);
  func_0x00010b788110();
  func_0x00010b788140();
  func_0x00010b788154();
  func_0x00010c18ec00(param_3);
  func_0x00010c19a460(param_3,param_2,0xcd6eb2105843c7);
  func_0x00010b788110();
  func_0x00010b788110();
  func_0x00010b788110();
  func_0x00010b788140();
  func_0x00010b788154();
  _objc_opt_class(PTR_PTR_1126e0908);
  func_0x00010b788160();
  func_0x00010b78816c();
  func_0x00010b788110();
  func_0x00010b788110();
  _objc_opt_class(PTR_PTR_1126e0b40);
  func_0x00010b788160();
  func_0x00010b78816c();
  func_0x00010b788140();
  func_0x00010b788154();
  func_0x00010b788140();
  func_0x00010b788154();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b788110; end: 10b788183;  */

void FUN_10b788110(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b788184; end: 10b7881ab; -[SOJUIdentitySuggestedPublisher initWithUserId:displayText:thumbnailUrl:iconUrl:suggestionToken:descriptionValue:] */

void FUN_10b788184(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7881ac; end: 10b78824b; +[SOJUIdentitySuggestedPublisher registerMessageFields:] */

void FUN_10b7881ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_userId_112682320;
  _objc_retain(param_3);
  func_0x00010b78826c(param_3,param_2,puVar1,0,0);
  func_0x00010b78824c();
  func_0x00010b78824c();
  func_0x00010b78824c();
  func_0x00010b78824c();
  func_0x00010b78826c(param_3,param_2,PTR_s_descriptionValue_112544bb0,
                      &PTR____CFConstantStringClassReference_110dd3178,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78824c; end: 10b78827b;  */

void FUN_10b78824c(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b78827c; end: 10b78829b; -[SOJUIdentitySuggestionPlacementReasonPairDeprecated initWithPlacement:reason:] */

void FUN_10b78827c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78829c; end: 10b7882f7; +[SOJUIdentitySuggestionPlacementReasonPairDeprecated registerMessageFields:] */

void FUN_10b78829c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_placement_11261d108;
  _objc_retain(param_3);
  FUN_10b7882f8(param_3,param_2,puVar1);
  FUN_10b7882f8(param_3,param_2,PTR_s_reason_1126261c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7882f8; end: 10b78830f;  */

void FUN_10b7882f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,6,0,0);
  return;
}



/* Entry: 10b788310; end: 10b78832f; -[SOJUIdentityTwoFaVerifiedDevice initWithIdValue:name:lastLogin:] */

void FUN_10b788310(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b788330; end: 10b7883c7; +[SOJUIdentityTwoFaVerifiedDevice registerMessageFields:] */

void FUN_10b788330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  FUN_10b7883c8(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2,6,in_x6,
                in_x7,0,0);
  FUN_10b7883c8(param_3,param_2,PTR_s_name_112612df0,0,0,6,in_x6,in_x7,0,0);
  FUN_10b7883c8(param_3,param_2,PTR_s_lastLogin_112546b20,0,1,2,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7883c8; end: 10b7883d3;  */

void FUN_10b7883c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7883d4; end: 10b7883fb; -[SOJUIdentityUserExistsRequest initWithTimestamp:reqToken:username:snapchatUserId:requestUsername:includePublicStory:] */

void FUN_10b7883d4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7883fc; end: 10b7884b3; +[SOJUIdentityUserExistsRequest registerMessageFields:] */

void FUN_10b7883fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_timestamp_112679c98;
  _objc_retain(param_3);
  FUN_10b7884b4(param_3,param_2,puVar1,0,0);
  func_0x00010b7884c4();
  FUN_10b7884b4();
  FUN_10b7884b4(param_3,param_2,PTR_s_username_112682b30,0,0);
  func_0x00010b7884c4();
  FUN_10b7884b4();
  func_0x00010b7884c4();
  FUN_10b7884b4();
  func_0x00010b7884c4();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7884b4; end: 10b7884d7;  */

void FUN_10b7884b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7884d8; end: 10b7884e3; +[SOJUIdentityUserExistsRequestBuilder messageClass] */

void FUN_10b7884d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e1050);
  return;
}



/* Entry: 10b7884e4; end: 10b7884e7; +[SOJUIdentityUserExistsRequestBuilder withJUIdentityUserExistsRequest:] */

void FUN_10b7884e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7884e8; end: 10b78850b; -[SOJUIdentityUserExistsResponse initWithExists:throttled:logged:friendValue:friendStories:] */

void FUN_10b7884e8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78850c; end: 10b7885cf; +[SOJUIdentityUserExistsResponse registerMessageFields:] */

void FUN_10b78850c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010b7885f4();
  func_0x00010b7885d0();
  func_0x00010b7885f4();
  func_0x00010b7885d0();
  func_0x00010b7885f4();
  func_0x00010b7885d0();
  puVar1 = PTR_s_friendValue_1125cbe18;
  puVar2 = PTR_PTR_1126e0b48;
  _objc_opt_class(PTR_PTR_1126e0b48);
  func_0x00010b7885e8(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110e10178,2,
                      param_6,puVar2,param_8,0,0);
  _objc_opt_class(PTR_PTR_1126e0fa8);
  func_0x00010b7885f4();
  func_0x00010b7885e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7885d0; end: 10b7885ff;  */

void FUN_10b7885d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,0,0,0);
  return;
}



/* Entry: 10b788600; end: 10b78861f; -[SOJUIdentityVerificationNeeded initWithType:prompt:] */

void FUN_10b788600(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b788620; end: 10b788697; +[SOJUIdentityVerificationNeeded registerMessageFields:] */

void FUN_10b788620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_type_11267d188;
  _objc_retain(param_3);
  FUN_10b788698(param_3,param_2,puVar1);
  func_0x00010bf06b60();
  FUN_10b788698(param_3,param_2,PTR_s_prompt_112623b38);
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b788698; end: 10b7886ab;  */

void FUN_10b788698(void)

{
  return;
}



/* Entry: 10b7886ac; end: 10b788717;  */

undefined8 FUN_10b7886ac(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7f5f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7f5f8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x5eac045b;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7f618;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7f618,param_2,param_1);
    uVar2 = 0xfffffffff88ac6d8;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b788718; end: 10b788753;  */

undefined ** FUN_10b788718(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7f618;
  if (param_1 != -0x7753928) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7f5f8;
  if (param_1 != 0x5eac045b) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b788754; end: 10b78878b; -[SOJUIdentityVerifyPhoneNumberResponse initWithLogged:message:isTwoFaEnabled:allowedToUseCash:verificationNeeded:twoFaVerifiedDevices:deepLinkResponse:reauthRequired:noTentativePhoneNumber:twoFaRecoveryCode:] */

void FUN_10b788754(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78878c; end: 10b7888db; +[SOJUIdentityVerifyPhoneNumberResponse registerMessageFields:] */

void FUN_10b78878c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_logged_1125467e0;
  _objc_retain(param_3);
  FUN_10b7888dc(param_3,param_2,puVar1,0,0,0);
  FUN_10b7888dc(param_3,param_2,PTR_s_message_112610668,0,0,6);
  FUN_10b7888dc(param_3,param_2,PTR_s_isTwoFaEnabled_1125fe0e8,0,1,0);
  func_0x00010b788904();
  FUN_10b7888dc();
  _objc_opt_class(PTR_PTR_1126e1058);
  func_0x00010b7888e8();
  _objc_opt_class(PTR_PTR_1126e1060);
  func_0x00010b7888e8();
  _objc_opt_class(PTR_PTR_1126d50f0);
  func_0x00010b7888e8();
  func_0x00010b788904();
  FUN_10b7888dc();
  func_0x00010b788904();
  FUN_10b7888dc();
  func_0x00010b788904();
  FUN_10b7888dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7888dc; end: 10b788917;  */

void FUN_10b7888dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b788918; end: 10b788937; -[SOJUIntegerPoint initWithX:y:] */

void FUN_10b788918(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b788938; end: 10b788993; +[SOJUIntegerPoint registerMessageFields:] */

void FUN_10b788938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_x_11268d448;
  _objc_retain(param_3);
  FUN_10b788994(param_3,param_2,puVar1);
  FUN_10b788994(param_3,param_2,PTR_s_y_11268d510);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b788994; end: 10b7889ab;  */

void FUN_10b788994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,1,0,0);
  return;
}



/* Entry: 10b7889ac; end: 10b7889cb; -[SOJUInvitedUser initWithUserId:phoneNumber:displayName:] */

void FUN_10b7889ac(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7889cc; end: 10b788a3b; +[SOJUInvitedUser registerMessageFields:] */

void FUN_10b7889cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_userId_112682320;
  _objc_retain(param_3);
  FUN_10b788a3c(param_3,param_2,puVar1);
  FUN_10b788a3c(param_3,param_2,PTR_s_phoneNumber_11261c5f8);
  FUN_10b788a3c(param_3,param_2,PTR_s_displayName_1125bf108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b788a3c; end: 10b788a53;  */

void FUN_10b788a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b788a54; end: 10b788a5f; +[SOJUInvitedUserBuilder messageClass] */

void FUN_10b788a54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0be8);
  return;
}



/* Entry: 10b788a60; end: 10b788a63; +[SOJUInvitedUserBuilder withJUInvitedUser:] */

void FUN_10b788a60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b788a64; end: 10b788a67; -[SOJUKhaleesiShare initWithAttachedUrl:] */

void FUN_10b788a64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b788a68; end: 10b788aa7; +[SOJUKhaleesiShare registerMessageFields:] */

void FUN_10b788a68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_attachedUrl_112546b98,0,1,6,0,0,0,0);
  return;
}



/* Entry: 10b788aa8; end: 10b788acb; -[SOJULastChatActions initWithLastReader:lastReadTimestamp:lastWriter:lastWriteTimestamp:lastWriteType:] */

void FUN_10b788aa8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b788acc; end: 10b788b63; +[SOJULastChatActions registerMessageFields:] */

void FUN_10b788acc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_lastReader_112546ba8;
  _objc_retain(param_3);
  FUN_10b788b64(param_3,param_2,puVar1);
  func_0x00010b788b88();
  func_0x00010b788b7c();
  FUN_10b788b64(param_3,param_2,PTR_s_lastWriter_112546bb8);
  func_0x00010b788b88();
  func_0x00010b788b7c();
  FUN_10b788b64(param_3,param_2,PTR_s_lastWriteType_112546bc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b788b64; end: 10b788b9b;  */

void FUN_10b788b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b788b9c; end: 10b788bbb; -[SOJULastMischiefChatAction initWithIsReadAction:lastActionTimestamp:] */

void FUN_10b788b9c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b788bbc; end: 10b788c2f; +[SOJULastMischiefChatAction registerMessageFields:] */

void FUN_10b788bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_isReadAction_112546bd8;
  _objc_retain(param_3);
  FUN_10b788c30(param_3,param_2,puVar1,0,1,0,in_x6,in_x7,0,0);
  FUN_10b788c30(param_3,param_2,PTR_s_lastActionTimestamp_112546be0,0,1,2,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b788c30; end: 10b788c3b;  */

void FUN_10b788c30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b788c3c; end: 10b788c63; -[SOJULastMischiefContent initWithSenderUsername:sentTimestamp:senderMessageSeqNum:messageBodyType:viewedTimestamp:firstMediaType:] */

void FUN_10b788c3c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b788c64; end: 10b788cf7; +[SOJULastMischiefContent registerMessageFields:] */

void FUN_10b788c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_senderUsername_1126351f8;
  _objc_retain(param_3);
  func_0x00010b788d18(param_3,param_2,puVar1);
  func_0x00010b788cf8();
  func_0x00010b788cf8();
  func_0x00010b788d18(param_3,param_2,PTR_s_messageBodyType_1126106c0);
  func_0x00010b788cf8();
  func_0x00010b788d18(param_3,param_2,PTR_s_firstMediaType_112546bf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b788cf8; end: 10b788d2f;  */

void FUN_10b788cf8(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b788d30; end: 10b788d6b; -[SOJULensAssetManifestItem initWithType:idValue:requestTiming:scale:assetUrl:assetSignature:preloadLimit:animationGroup:originalFilename:contentSignature:storageOptions:] */

void FUN_10b788d30(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b788d6c; end: 10b788edb; +[SOJULensAssetManifestItem registerMessageFields:] */

void FUN_10b788d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_type_11267d188;
  _objc_retain(param_3);
  func_0x00010b788f08(param_3,param_2,puVar1,0,0);
  func_0x00010b788efc(param_3,param_2,PTR_s_idValue_1125d7158,
                      &PTR____CFConstantStringClassReference_110dbf6f8,2,6);
  func_0x00010b788f08(param_3,param_2,PTR_s_requestTiming_11262b500,0,1);
  func_0x00010b788efc(param_3,param_2,PTR_s_scale_112631268,0,0,1);
  func_0x00010b788edc();
  func_0x00010b788edc();
  func_0x00010b788efc(param_3,param_2,PTR_s_preloadLimit_11261fc18,0,1,1);
  func_0x00010b788edc();
  func_0x00010b788edc();
  func_0x00010b788edc();
  puVar1 = PTR_s_storageOptions_1126736a8;
  puVar2 = PTR_PTR_1126e1068;
  _objc_opt_class(PTR_PTR_1126e1068);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b788edc; end: 10b788f13;  */

void FUN_10b788edc(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b788f14; end: 10b788f93;  */

undefined8 FUN_10b788f14(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7f638;
  func_0x00010b788fe8();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffed046e09;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eeca18;
    func_0x00010b788fe8();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x3e4450ab;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7f658;
      func_0x00010b788fe8();
      uVar2 = 0xffffffffe8912b9f;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b788f94; end: 10b788fef;  */

undefined ** FUN_10b788f94(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x3e4450ab) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110eeca18;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7f638;
  if (param_1 != -0x12fb91f7) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7f658;
  if (param_1 != -0x176ed461) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b788ff0; end: 10b7890fb;  */

undefined8 FUN_10b788ff0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7978;
  func_0x00010b7891e4();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xfffffffff9e568ee;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7f678;
    func_0x00010b7891e4();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffff80ca654f;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f21f58;
      func_0x00010b7891e4();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x58ceaf0;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7f698;
        func_0x00010b7891e4();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x46373c87;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7f6b8;
          func_0x00010b7891e4();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0xffffffffdd11e88a;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f7f6d8;
            func_0x00010b7891e4();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0xffffffffe2a1a918;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f7f6f8;
              func_0x00010b7891e4();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0xffffffff8c2e82ca;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f7f718;
                func_0x00010b7891e4();
                uVar2 = 0xfffffffff1f265c7;
                if (ppuVar1 != (undefined **)0x0) {
                  uVar2 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7890fc; end: 10b7891eb;  */

undefined ** FUN_10b7890fc(long param_1)

{
  undefined **ppuVar1;
  
  if (param_1 == 0x46373c87) {
    return &PTR____CFConstantStringClassReference_110f7f698;
  }
  if (param_1 == -0x73d17d36) {
    return &PTR____CFConstantStringClassReference_110f7f6f8;
  }
  if (param_1 == -0x22ee1776) {
    return &PTR____CFConstantStringClassReference_110f7f6b8;
  }
  if (param_1 != -0x1d5e56e8) {
    if (param_1 == -0xe0d9a39) {
      return &PTR____CFConstantStringClassReference_110f7f718;
    }
    if (param_1 != -0x61a9712) {
      if (param_1 != 0x58ceaf0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
        if (param_1 == -0x7f359ab1) {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7f678;
        }
        return ppuVar1;
      }
      return &PTR____CFConstantStringClassReference_110f21f58;
    }
    return &PTR____CFConstantStringClassReference_110dc7978;
  }
  return &PTR____CFConstantStringClassReference_110f7f6d8;
}



/* Entry: 10b7891ec; end: 10b78920b; -[SOJULensAssetStorageOption initWithOptionType:fileUrl:checksum:] */

void FUN_10b7891ec(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78920c; end: 10b7892ab; +[SOJULensAssetStorageOption registerMessageFields:] */

void FUN_10b78920c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_optionType_112618b70;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,6,0,FUN_10b7892bc,FUN_10b789328,0);
  FUN_10b7892ac(param_3,param_2,PTR_s_fileUrl_1125c8e98,0,1);
  FUN_10b7892ac(param_3,param_2,PTR_s_checksum_1125abc48,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7892ac; end: 10b7892bb;  */

void FUN_10b7892ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7892bc; end: 10b789327;  */

undefined8 FUN_10b7892bc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7f738;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7f738,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x15b01;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7f758;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7f758,param_2,param_1);
    uVar2 = 0x12711;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b789328; end: 10b78935b;  */

undefined ** FUN_10b789328(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7f758;
  if (param_1 != 0x12711) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7f738;
  if (param_1 != 0x15b01) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b78935c; end: 10b789387; -[SOJULensCategoryDatum initWithIdValue:name:activator:config:configChecksum:additionalCarouselCategories:additionalCarouselLensesLimitDeprecated:] */

void FUN_10b78935c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b789388; end: 10b789497; +[SOJULensCategoryDatum registerMessageFields:] */

void FUN_10b789388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  FUN_10b789498(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2);
  func_0x00010b7894b4();
  FUN_10b789498();
  func_0x00010b7894b4();
  FUN_10b789498();
  func_0x00010b7894b4();
  FUN_10b789498();
  func_0x00010b7894b4();
  FUN_10b789498();
  func_0x00010b7894b4();
  func_0x00010b7894a8();
  func_0x00010c19a460(param_3,param_2,0x942cf5813a97fb);
  func_0x00010b7894a8(param_3,param_2,PTR_s_additionalCarouselLensesLimitDep_112546c38,
                      &PTR____CFConstantStringClassReference_110f7f778,2,1,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b789498; end: 10b7894bf;  */

void FUN_10b789498(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7894c0; end: 10b78955f; -[SOJULensData initWithCode:configPath:iconLink:lensLink:hintId:hintTranslations:signature:demoStartDate:bitmojiComicId:assetManifest:hideUntilAssetsDownloaded:isThirdParty:isStudioPreview:lensCreatorUsername:lensAttributionName:activationCamera:isDisabledForVideoChat:unlockCompanionBackReferenceId:name:filterImageLink:lensDescriptors:snappableReplyType:lensCreatorUserId:lensCreatorAvatarId:snappableTaglineKey:snappablePlayButtonGradient:isLeftCarousel:clientCacheTtl:lensCreatorSelfieId:lensResources:snapProProfileId:isCreatorDeactivated:isOfficialLensCreator:isCommunity:lensThumbnailPreviewImageUrl:apiLevel:lensCollectionId:connectedLensInfo:shoppingLensMetadata:remoteApiInfo:] */

void FUN_10b7894c0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b789560; end: 10b7898ef; +[SOJULensData registerMessageFields:] */

void FUN_10b789560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_code_1125ad4b8;
  _objc_retain(param_3);
  func_0x00010b78995c(param_3,param_2,puVar1,0,0);
  func_0x00010b789930();
  func_0x00010bf06b60();
  func_0x00010b7898f0();
  func_0x00010b7898f0();
  func_0x00010b7898f0();
  func_0x00010b789994();
  func_0x00010b789988();
  func_0x00010b7899a0();
  func_0x00010b789994();
  func_0x00010b78995c();
  func_0x00010b789948();
  func_0x00010b789988();
  func_0x00010c18ec00(param_3);
  func_0x00010b7898f0();
  _objc_opt_class(PTR_PTR_1126e1070);
  func_0x00010b78996c();
  func_0x00010b789910();
  func_0x00010b789910();
  func_0x00010b789910();
  func_0x00010b7898f0();
  func_0x00010b7898f0();
  func_0x00010b789930();
  func_0x00010bf06b60();
  func_0x00010b789910();
  func_0x00010b7898f0();
  func_0x00010b789994();
  func_0x00010b78995c();
  func_0x00010b7898f0();
  func_0x00010b789994();
  func_0x00010b789988();
  func_0x00010b7899a0();
  func_0x00010b789930();
  func_0x00010bf06b60();
  func_0x00010b7898f0();
  func_0x00010b7898f0();
  func_0x00010b7898f0();
  _objc_opt_class(PTR_PTR_1126e1078);
  func_0x00010b78996c();
  func_0x00010b789910();
  func_0x00010b789948();
  func_0x00010b789988();
  func_0x00010b7898f0();
  _objc_opt_class(PTR_PTR_1126e1080);
  func_0x00010b78996c();
  func_0x00010b7898f0();
  func_0x00010b789910();
  func_0x00010b789910();
  func_0x00010b789910();
  func_0x00010b7898f0();
  func_0x00010b789930();
  func_0x00010bf06b60();
  func_0x00010b789948();
  func_0x00010b789988();
  _objc_opt_class(PTR_PTR_1126e0ab0);
  func_0x00010b78996c();
  func_0x00010b789948();
  func_0x00010b789988();
  func_0x00010c18ec00(param_3);
  func_0x00010b7899a0();
  _objc_opt_class(PTR_PTR_1126e1088);
  func_0x00010b78996c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7898f0; end: 10b7899a7;  */

void FUN_10b7898f0(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b7899a8; end: 10b789a13;  */

undefined8 FUN_10b7899a8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110de54d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110de54d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x400e609;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7f798;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7f798,param_2,param_1);
    uVar2 = 0x2651a4;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b789a14; end: 10b789a4b;  */

undefined ** FUN_10b789a14(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7f798;
  if (param_1 != 0x2651a4) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110de54d8;
  if (param_1 != 0x400e609) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b789a4c; end: 10b789acb;  */

undefined8 FUN_10b789a4c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb3818;
  func_0x00010b789b1c();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffff8d50a669;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb37b8;
    func_0x00010b789b1c();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x180cb163;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7f7b8;
      func_0x00010b789b1c();
      uVar2 = 0x107f5;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b789acc; end: 10b789b23;  */

undefined ** FUN_10b789acc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x180cb163) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110eb37b8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7f7b8;
  if (param_1 != 0x107f5) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110eb3818;
  if (param_1 != -0x72af5997) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b789b24; end: 10b789b2f; +[SOJULensDataBuilder messageClass] */

void FUN_10b789b24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0ee8);
  return;
}



/* Entry: 10b789b30; end: 10b789b33; +[SOJULensDataBuilder withJULensData:] */

void FUN_10b789b30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b789b34; end: 10b789b9f;  */

undefined8 FUN_10b789b34(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7f7d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7f7d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x3822d956;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7f7f8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7f7f8,param_2,param_1);
    uVar2 = 0x1c330525;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b789ba0; end: 10b789bdb;  */

undefined ** FUN_10b789ba0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7f7f8;
  if (param_1 != 0x1c330525) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7f7d8;
  if (param_1 != 0x3822d956) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b789bdc; end: 10b789bfb; -[SOJULensPlacementInfo initWithAdServeRequestId:rawAdData:] */

void FUN_10b789bdc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b789bfc; end: 10b789c57; +[SOJULensPlacementInfo registerMessageFields:] */

void FUN_10b789bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_adServeRequestId_11259ad08;
  _objc_retain(param_3);
  FUN_10b789c58(param_3,param_2,puVar1);
  FUN_10b789c58(param_3,param_2,PTR_s_rawAdData_112625a00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b789c58; end: 10b789c6f;  */

void FUN_10b789c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b789c70; end: 10b789c9b; -[SOJULensResource initWithResourceType:quality:archiveLink:checksum:signature:lastUpdated:algorithmVersion:] */

void FUN_10b789c70(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b789c9c; end: 10b789d9f; +[SOJULensResource registerMessageFields:] */

void FUN_10b789c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_resourceType_11262c738;
  _objc_retain(param_3);
  func_0x00010b789dbc(param_3,param_2,puVar1,0,1);
  func_0x00010b789dbc(param_3,param_2,PTR_s_quality_112624dc8,0,0);
  func_0x00010b789dac();
  func_0x00010b789da0();
  func_0x00010b789dac();
  func_0x00010b789da0();
  func_0x00010b789dac();
  func_0x00010b789da0();
  func_0x00010b789dac();
  func_0x00010b789da0();
  func_0x00010b789dac();
  func_0x00010b789da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b789da0; end: 10b789dc7;  */

void FUN_10b789da0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b789dc8; end: 10b789e47;  */

undefined8 FUN_10b789dc8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7ef18;
  func_0x00010b789e94();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x12734;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7eef8;
    func_0x00010b789e94();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x21d5a2;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dce178;
      func_0x00010b789e94();
      uVar2 = 0xffffffff8999b0e7;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b789e48; end: 10b789e9b;  */

undefined ** FUN_10b789e48(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x21d5a2) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7eef8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7ef18;
  if (param_1 != 0x12734) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dce178;
  if (param_1 != -0x76664f19) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b789e9c; end: 10b789f1b;  */

undefined8 FUN_10b789e9c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7f818;
  func_0x00010b789f68();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x48ae1aa;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7f738;
    func_0x00010b789f68();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x15b01;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7f758;
      func_0x00010b789f68();
      uVar2 = 0x12711;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b789f1c; end: 10b789f6f;  */

undefined ** FUN_10b789f1c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x15b01) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7f738;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7f818;
  if (param_1 != 0x48ae1aa) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7f758;
  if (param_1 != 0x12711) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b789f70; end: 10b789f8f; -[SOJULensSnappablePlayButtonGradientColor initWithStartColor:endColor:] */

void FUN_10b789f70(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b789f90; end: 10b789feb; +[SOJULensSnappablePlayButtonGradientColor registerMessageFields:] */

void FUN_10b789f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_startColor_112671370;
  _objc_retain(param_3);
  FUN_10b789fec(param_3,param_2,puVar1);
  FUN_10b789fec(param_3,param_2,PTR_s_endColor_1125c2ad0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b789fec; end: 10b78a003;  */

void FUN_10b789fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,1,0,0);
  return;
}



/* Entry: 10b78a004; end: 10b78a03b; -[SOJULoadScheduledLensesResponseV2 initWithActiveLenses:precachedLenses:cacheTtlMillis:lensListSignature:preselectedLensId:activeRearLenses:medianIndexDepth:activeLensesChecksums:precachedLensesChecksums:activeRearLensesChecksums:] */

void FUN_10b78a004(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78a03c; end: 10b78a157; +[SOJULoadScheduledLensesResponseV2 registerMessageFields:] */

void FUN_10b78a03c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc140;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b78a158();
  _objc_opt_class(PTR_PTR_1126bc140);
  FUN_10b78a158();
  func_0x00010b78a178();
  func_0x00010b78a18c();
  func_0x00010b78a178();
  func_0x00010b78a18c();
  func_0x00010b78a178();
  func_0x00010b78a18c();
  _objc_opt_class(PTR_PTR_1126bc140);
  FUN_10b78a158();
  func_0x00010b78a178();
  func_0x00010b78a18c();
  func_0x00010b78a198();
  FUN_10b78a158();
  func_0x00010b78a198();
  FUN_10b78a158();
  func_0x00010b78a198();
  FUN_10b78a158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78a158; end: 10b78a19f;  */

void FUN_10b78a158(void)

{
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b78a1a0; end: 10b78a1bf; -[SOJULocalDateTimeInterval initWithStart:end:] */

void FUN_10b78a1a0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78a1c0; end: 10b78a22b; +[SOJULocalDateTimeInterval registerMessageFields:] */

void FUN_10b78a1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_start_112671080;
  _objc_retain(param_3);
  FUN_10b78a22c(param_3,param_2,puVar1);
  func_0x00010c18ec00(param_3);
  FUN_10b78a22c(param_3,param_2,PTR_s_end_1125c29d0);
  func_0x00010c18ec00(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b78a22c; end: 10b78a243;  */

void FUN_10b78a22c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,2,0,0);
  return;
}



/* Entry: 10b78a244; end: 10b78a263; -[SOJULocationDeliveryPurpose initWithPurposeType:responseTimestamp:] */

void FUN_10b78a244(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b78a264; end: 10b78a35f; +[SOJULocationDeliveryPurpose registerMessageFields:] */

void FUN_10b78a264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_purposeType_112546cf8;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,6,0,0x10b78a2f4,FUN_10b78a360,0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_responseTimestamp_11262c960,0,1,2,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


