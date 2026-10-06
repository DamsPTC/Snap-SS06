/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00446798; end: 004467a3;  */

bool FUN_00446798(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 004467a4; end: 0044681f;  */

undefined * FUN_004467a4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5fe28 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a25400,&UNK_00800454,&UNK_00800470,2,
                    FUN_00446820,0);
    do {
      if (puRam0000000000b5fe28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5fe28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5fe28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5fe28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5fe28;
}



/* Entry: 00446820; end: 0044682b;  */

bool FUN_00446820(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 0044682c; end: 004468bb; +[SCJanusAppChallengeData descriptor] */

undefined * FUN_0044682c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fe30 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5558,
                    &PTR____CFConstantStringClassReference_00a25420,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_transparentChallengesArray_00b02b48,
                    0x11,0x80,0x1c);
    func_0x00791460();
    puRam0000000000b5fe30 = puVar1;
  }
  return puRam0000000000b5fe30;
}



/* Entry: 004468bc; end: 00446947; +[SCJanusTransparentChallenge descriptor] */

undefined * FUN_004468bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fe38 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad55a8,
                    &PTR____CFConstantStringClassReference_00a25440,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_vendorIntegrityChallenge_00b01aa8,2,
                    0x18,0x1c);
    func_0x00791460();
    puRam0000000000b5fe38 = puVar1;
  }
  return puRam0000000000b5fe38;
}



/* Entry: 00446948; end: 004469d7; +[SCJanusChallengeData descriptor] */

undefined * FUN_00446948(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fe40 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad55f8,
                    &PTR____CFConstantStringClassReference_00a25460,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_otpChallenge_00b02948,0x10,0x88,0x1c);
    func_0x00791460();
    puRam0000000000b5fe40 = puVar1;
  }
  return puRam0000000000b5fe40;
}



/* Entry: 004469d8; end: 00446a63; +[SCJanusCommunicationChannelChallenge descriptor] */

undefined * FUN_004469d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fe48 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5648,
                    &PTR____CFConstantStringClassReference_00a25480,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_promptTitleText_00b02168,4,0x28,0x1c);
    func_0x00791460();
    puRam0000000000b5fe48 = puVar1;
  }
  return puRam0000000000b5fe48;
}



/* Entry: 00446a64; end: 00446aef; +[SCJanusCommunicationChannelInputChallenge descriptor] */

undefined * FUN_00446a64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fe50 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5698,
                    &PTR____CFConstantStringClassReference_00a254a0,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_email_00b026e8,8,0x48,0x1c);
    func_0x00791460();
    puRam0000000000b5fe50 = puVar1;
  }
  return puRam0000000000b5fe50;
}



/* Entry: 00446af0; end: 00446b7b; +[SCJanusCommunicationChannelVerificationChallenge descriptor] */

undefined * FUN_00446af0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fe58 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad56e8,
                    &PTR____CFConstantStringClassReference_00a254c0,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_numDigits_00b02488,6,0x30,0x1c);
    func_0x00791460();
    puRam0000000000b5fe58 = puVar1;
  }
  return puRam0000000000b5fe58;
}



/* Entry: 00446b7c; end: 00446c07; +[SCJanusCaptchaChallenge descriptor] */

undefined * FUN_00446b7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fe60 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6458,
                    &PTR____CFConstantStringClassReference_00a254e0,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_recaptcha_00b01948,1,0x10,0x1c);
    func_0x00791460();
    puRam0000000000b5fe60 = puVar1;
  }
  return puRam0000000000b5fe60;
}



/* Entry: 00446c08; end: 00446c8b; +[SCJanusCaptchaChallenge_Recaptcha descriptor] */

undefined * FUN_00446c08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fe68 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6480,
                    &PTR____CFConstantStringClassReference_00a25500,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_siteKey_00b01968,1,0x10,0x1c);
    func_0x00791420();
    puRam0000000000b5fe68 = puVar1;
  }
  return puRam0000000000b5fe68;
}



/* Entry: 00446c8c; end: 00446cf3; +[SCJanusCaptchaChallengeAnswer descriptor] */

void FUN_00446c8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fe70 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5788,
                    &PTR____CFConstantStringClassReference_00a25520,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_payload_00b01ae8,2,0x18,0x1c);
    puRam0000000000b5fe70 = puVar1;
  }
  return;
}



/* Entry: 00446cf4; end: 00446d8f; +[SCJanusWebViewChallenge descriptor] */

undefined * FUN_00446cf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fe78 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad57d8,
                    &PTR____CFConstantStringClassReference_00a25540,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_URL_00b02548,6,0x30,0x1c);
    func_0x00791460();
    func_0x00791440(puVar1,param_2,&UNK_00800478);
    puRam0000000000b5fe78 = puVar1;
  }
  return puRam0000000000b5fe78;
}



/* Entry: 00446d90; end: 00446df7; +[SCJanusPasskeyAuthenticationChallenge descriptor] */

void FUN_00446d90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fe80 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5828,
                    &PTR____CFConstantStringClassReference_00a25560,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_passkeyAuthenticationOptions_00b01988,
                    1,0x10,0x1c);
    puRam0000000000b5fe80 = puVar1;
  }
  return;
}



/* Entry: 00446df8; end: 00446e5f; +[SCJanusPasskeyEnrollmentChallenge descriptor] */

void FUN_00446df8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fe88 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5878,
                    &PTR____CFConstantStringClassReference_00a25580,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_isEnrollmentSkippable_00b021e8,4,0x20,
                    0x1c);
    puRam0000000000b5fe88 = puVar1;
  }
  return;
}



/* Entry: 00446e60; end: 00446ec7; +[SCJanusOTPChallenge descriptor] */

void FUN_00446e60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fe90 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad58c8,
                    &PTR____CFConstantStringClassReference_00a255a0,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_promptTitleText_00b02608,7,0x38,0x1c);
    puRam0000000000b5fe90 = puVar1;
  }
  return;
}



/* Entry: 00446ec8; end: 00446f2f; +[SCJanusVendorIntegrityChallenge descriptor] */

void FUN_00446ec8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fe98 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5918,
                    &PTR____CFConstantStringClassReference_00a255c0,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_type_00b01b28,2,0x10,0x1c);
    puRam0000000000b5fe98 = puVar1;
  }
  return;
}



/* Entry: 00446f30; end: 00446f97; +[SCJanusPasswordChallenge descriptor] */

void FUN_00446f30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fea0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5968,
                    &PTR____CFConstantStringClassReference_00a255e0,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_promptTitleText_00b01b68,2,0x18,0x1c);
    puRam0000000000b5fea0 = puVar1;
  }
  return;
}



/* Entry: 00446f98; end: 00446fff; +[SCJanusSecurityQuestionChallenge descriptor] */

void FUN_00446f98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fea8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad59b8,
                    &PTR____CFConstantStringClassReference_00a25600,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_securityQuestionType_00b01ba8,2,0x10,
                    0x1c);
    puRam0000000000b5fea8 = puVar1;
  }
  return;
}



/* Entry: 00447000; end: 0044706b; +[SCJanusTIVChallenge descriptor] */

void FUN_00447000(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5feb0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5a08,
                    &PTR____CFConstantStringClassReference_00a25620,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_promptTitleText_00b027e8,0xb,0x58,0x1c
                   );
    puRam0000000000b5feb0 = puVar1;
  }
  return;
}



/* Entry: 0044706c; end: 004470d3; +[SCJanusTwoFAChallenge descriptor] */

void FUN_0044706c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5feb8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5a58,
                    &PTR____CFConstantStringClassReference_00a25640,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_promptTitleText_00b02268,4,0x28,0x1c);
    puRam0000000000b5feb8 = puVar1;
  }
  return;
}



/* Entry: 004470d4; end: 0044713b; +[SCJanusTOTPChallenge descriptor] */

void FUN_004470d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fec0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5aa8,
                    &PTR____CFConstantStringClassReference_00a25660,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_reason_00b022e8,4,0x18,0x1c);
    puRam0000000000b5fec0 = puVar1;
  }
  return;
}



/* Entry: 0044713c; end: 004471a3; +[SCJanusInternalIdentityVerificationChallenge descriptor] */

void FUN_0044713c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fec8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5af8,
                    &PTR____CFConstantStringClassReference_00a25680,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_authenticationSessionId_00b019a8,1,
                    0x10,0x1c);
    puRam0000000000b5fec8 = puVar1;
  }
  return;
}



/* Entry: 004471a4; end: 0044720b; +[SCJanusSelectCommunicationChannel descriptor] */

void FUN_004471a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fed0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5b48,
                    &PTR____CFConstantStringClassReference_00a256a0,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_phone_00b01be8,2,0x18,0x1c);
    puRam0000000000b5fed0 = puVar1;
  }
  return;
}



/* Entry: 0044720c; end: 0044729b; +[SCJanusAppChallengeAnswer descriptor] */

undefined * FUN_0044720c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fed8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5b98,
                    &PTR____CFConstantStringClassReference_00a256c0,
                    &PTR_s_snapchat_janus_api_00b01930,
                    &PTR_s_transparentChallengeAnswersArray_00b02d68,0x11,0x90,0x1c);
    func_0x00791460();
    puRam0000000000b5fed8 = puVar1;
  }
  return puRam0000000000b5fed8;
}



/* Entry: 0044729c; end: 00447327; +[SCJanusTransparentChallengeAnswer descriptor] */

undefined * FUN_0044729c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fee0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5be8,
                    &PTR____CFConstantStringClassReference_00a256e0,
                    &PTR_s_snapchat_janus_api_00b01930,
                    &PTR_s_vendorIntegrityChallengeAnswer_00b01c28,2,0x18,0x1c);
    func_0x00791460();
    puRam0000000000b5fee0 = puVar1;
  }
  return puRam0000000000b5fee0;
}



/* Entry: 00447328; end: 004473b7; +[SCJanusChallengeAnswer descriptor] */

undefined * FUN_00447328(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fee8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5c38,
                    &PTR____CFConstantStringClassReference_00a25700,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_otpChallengeAnswer_00b02f88,0x11,0x90,
                    0x1c);
    func_0x00791460();
    puRam0000000000b5fee8 = puVar1;
  }
  return puRam0000000000b5fee8;
}



/* Entry: 004473b8; end: 00447443; +[SCJanusCommunicationChannelChallengeAnswer descriptor] */

undefined * FUN_004473b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fef0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5c88,
                    &PTR____CFConstantStringClassReference_00a25720,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_email_00b01c68,2,0x18,0x1c);
    func_0x00791460();
    puRam0000000000b5fef0 = puVar1;
  }
  return puRam0000000000b5fef0;
}



/* Entry: 00447444; end: 004474cf; +[SCJanusCommunicationChannelInputAnswer descriptor] */

undefined * FUN_00447444(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fef8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad64a8,
                    &PTR____CFConstantStringClassReference_00a25740,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_email_00b023e8,5,0x30,0x1c);
    func_0x00791460();
    puRam0000000000b5fef8 = puVar1;
  }
  return puRam0000000000b5fef8;
}



/* Entry: 004474d0; end: 00447553; +[SCJanusCommunicationChannelInputAnswer_PhoneInput descriptor] */

undefined * FUN_004474d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff00 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad64d0,
                    &PTR____CFConstantStringClassReference_00a25760,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_phoneNumber_00b01f28,3,0x18,0x1c);
    func_0x00791420();
    puRam0000000000b5ff00 = puVar1;
  }
  return puRam0000000000b5ff00;
}



/* Entry: 00447554; end: 004475d7; +[SCJanusCommunicationChannelInputAnswer_SkipRequest descriptor] */

undefined * FUN_00447554(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff08 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad64f8,
                    &PTR____CFConstantStringClassReference_00a25780,
                    &PTR_s_snapchat_janus_api_00b01930,0,0,4,0x1c);
    func_0x00791420();
    puRam0000000000b5ff08 = puVar1;
  }
  return puRam0000000000b5ff08;
}



/* Entry: 004475d8; end: 00447663; +[SCJanusCommunicationChannelVerificationAnswer descriptor] */

undefined * FUN_004475d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff10 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6520,
                    &PTR____CFConstantStringClassReference_00a257a0,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_otp_00b01f88,3,0x20,0x1c);
    func_0x00791460();
    puRam0000000000b5ff10 = puVar1;
  }
  return puRam0000000000b5ff10;
}



/* Entry: 00447664; end: 004476e7; +[SCJanusCommunicationChannelVerificationAnswer_ResendRequest descriptor] */

undefined * FUN_00447664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff18 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6548,
                    &PTR____CFConstantStringClassReference_00a257c0,
                    &PTR_s_snapchat_janus_api_00b01930,0,0,4,0x1c);
    func_0x00791420();
    puRam0000000000b5ff18 = puVar1;
  }
  return puRam0000000000b5ff18;
}



/* Entry: 004476e8; end: 0044776b; +[SCJanusCommunicationChannelVerificationAnswer_SkipRequest descriptor] */

undefined * FUN_004476e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff20 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6570,
                    &PTR____CFConstantStringClassReference_00a25780,
                    &PTR_s_snapchat_janus_api_00b01930,0,0,4,0x1c);
    func_0x00791420();
    puRam0000000000b5ff20 = puVar1;
  }
  return puRam0000000000b5ff20;
}



/* Entry: 0044776c; end: 004477d3; +[SCJanusWebViewChallengeAnswer descriptor] */

void FUN_0044776c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff28 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5dc8,
                    &PTR____CFConstantStringClassReference_00a257e0,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_answerPayload_00b01ca8,2,0x10,0x1c);
    puRam0000000000b5ff28 = puVar1;
  }
  return;
}



/* Entry: 004477d4; end: 0044783b; +[SCJanusRequestResumeChallengeLoopAnswer descriptor] */

void FUN_004477d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff30 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5e18,
                    &PTR____CFConstantStringClassReference_00a25800,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_reason_00b019c8,1,8,0x1c);
    puRam0000000000b5ff30 = puVar1;
  }
  return;
}



/* Entry: 0044783c; end: 004478a3; +[SCJanusOTPChallengeAnswer descriptor] */

void FUN_0044783c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff38 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6598,
                    &PTR____CFConstantStringClassReference_00a25820,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_otp_00b01fe8,3,0x18,0x1c);
    puRam0000000000b5ff38 = puVar1;
  }
  return;
}



/* Entry: 004478a4; end: 00447927; +[SCJanusOTPChallengeAnswer_ResendRequest descriptor] */

undefined * FUN_004478a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff40 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad65c0,
                    &PTR____CFConstantStringClassReference_00a257c0,
                    &PTR_s_snapchat_janus_api_00b01930,0,0,4,0x1c);
    func_0x00791420();
    puRam0000000000b5ff40 = puVar1;
  }
  return puRam0000000000b5ff40;
}



/* Entry: 00447928; end: 004479b3; +[SCJanusOTPChallengeAnswerV2 descriptor] */

undefined * FUN_00447928(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff48 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad65e8,
                    &PTR____CFConstantStringClassReference_00a25840,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_otp_00b01ce8,2,0x18,0x1c);
    func_0x00791460();
    puRam0000000000b5ff48 = puVar1;
  }
  return puRam0000000000b5ff48;
}



/* Entry: 004479b4; end: 00447a37; +[SCJanusOTPChallengeAnswerV2_Payload descriptor] */

undefined * FUN_004479b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff50 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6610,
                    &PTR____CFConstantStringClassReference_00a25860,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_otp_00b01d28,2,0x10,0x1c);
    func_0x00791420();
    puRam0000000000b5ff50 = puVar1;
  }
  return puRam0000000000b5ff50;
}



/* Entry: 00447a38; end: 00447abb; +[SCJanusOTPChallengeAnswerV2_ResendRequest descriptor] */

undefined * FUN_00447a38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff58 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6638,
                    &PTR____CFConstantStringClassReference_00a257c0,
                    &PTR_s_snapchat_janus_api_00b01930,0,0,4,0x1c);
    func_0x00791420();
    puRam0000000000b5ff58 = puVar1;
  }
  return puRam0000000000b5ff58;
}



/* Entry: 00447abc; end: 00447b23; +[SCJanusPasswordChallengeAnswer descriptor] */

void FUN_00447abc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff60 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5f30,
                    &PTR____CFConstantStringClassReference_00a25880,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_password_00b019e8,1,0x10,0x1c);
    puRam0000000000b5ff60 = puVar1;
  }
  return;
}



/* Entry: 00447b24; end: 00447baf; +[SCJanusSecurityQuestionChallengeAnswer descriptor] */

undefined * FUN_00447b24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff68 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad5f80,
                    &PTR____CFConstantStringClassReference_00a258a0,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_securityQuestionType_00b02048,3,0x20,
                    0x1c);
    func_0x00791460();
    puRam0000000000b5ff68 = puVar1;
  }
  return puRam0000000000b5ff68;
}



/* Entry: 00447bb0; end: 00447c17; +[SCJanusTIVChallengeAnswer descriptor] */

void FUN_00447bb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff70 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6660,
                    &PTR____CFConstantStringClassReference_00a258c0,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_transactionId_00b02368,4,0x28,0x1c);
    puRam0000000000b5ff70 = puVar1;
  }
  return;
}



/* Entry: 00447c18; end: 00447c9b; +[SCJanusTIVChallengeAnswer_ResendRequest descriptor] */

undefined * FUN_00447c18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff78 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6688,
                    &PTR____CFConstantStringClassReference_00a257c0,
                    &PTR_s_snapchat_janus_api_00b01930,0,0,4,0x1c);
    func_0x00791420();
    puRam0000000000b5ff78 = puVar1;
  }
  return puRam0000000000b5ff78;
}



/* Entry: 00447c9c; end: 00447d03; +[SCJanusTwoFAChallengeAnswer descriptor] */

void FUN_00447c9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff80 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6020,
                    &PTR____CFConstantStringClassReference_00a258e0,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_twoFaCode_00b020a8,3,0x10,0x1c);
    puRam0000000000b5ff80 = puVar1;
  }
  return;
}



/* Entry: 00447d04; end: 00447d8f; +[SCJanusTOTPChallengeAnswer descriptor] */

undefined * FUN_00447d04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff88 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad66b0,
                    &PTR____CFConstantStringClassReference_00a25900,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_otp_00b01d68,2,0x18,0x1c);
    func_0x00791460();
    puRam0000000000b5ff88 = puVar1;
  }
  return puRam0000000000b5ff88;
}



/* Entry: 00447d90; end: 00447e13; +[SCJanusTOTPChallengeAnswer_Payload descriptor] */

undefined * FUN_00447d90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff90 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad66d8,
                    &PTR____CFConstantStringClassReference_00a25860,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_totpCode_00b01da8,2,0x10,0x1c);
    func_0x00791420();
    puRam0000000000b5ff90 = puVar1;
  }
  return puRam0000000000b5ff90;
}



/* Entry: 00447e14; end: 00447e97; +[SCJanusTOTPChallengeAnswer_ChangeChallengeRequest descriptor] */

undefined * FUN_00447e14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ff98 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6700,
                    &PTR____CFConstantStringClassReference_00a25920,
                    &PTR_s_snapchat_janus_api_00b01930,0,0,4,0x1c);
    func_0x00791420();
    puRam0000000000b5ff98 = puVar1;
  }
  return puRam0000000000b5ff98;
}



/* Entry: 00447e98; end: 00447eff; +[SCJanusSelectCommunicationChannelAnswer descriptor] */

void FUN_00447e98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ffa0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad60e8,
                    &PTR____CFConstantStringClassReference_00a25940,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_selectedCommunicationChannel_00b01a08,
                    1,8,0x1c);
    puRam0000000000b5ffa0 = puVar1;
  }
  return;
}



/* Entry: 00447f00; end: 00447f67; +[SCJanusInternalIdentityVerificationChallengeAnswer descriptor] */

void FUN_00447f00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ffa8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6138,
                    &PTR____CFConstantStringClassReference_00a25960,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_identity_00b01de8,2,0x18,0x1c);
    puRam0000000000b5ffa8 = puVar1;
  }
  return;
}



/* Entry: 00447f68; end: 00447fcf; +[SCJanusVendorIntegrityChallengeAnswer descriptor] */

void FUN_00447f68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ffb0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6188,
                    &PTR____CFConstantStringClassReference_00a25980,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_type_00b01e28,2,0x10,0x1c);
    puRam0000000000b5ffb0 = puVar1;
  }
  return;
}



/* Entry: 00447fd0; end: 00448037; +[SCJanusPasskeyAuthenticationChallengeAnswer descriptor] */

void FUN_00447fd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ffb8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad61d8,
                    &PTR____CFConstantStringClassReference_00a259a0,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_passkeyAuthenticationPayload_00b01a28,
                    1,0x10,0x1c);
    puRam0000000000b5ffb8 = puVar1;
  }
  return;
}



/* Entry: 00448038; end: 004480c3; +[SCJanusPasskeyEnrollmentChallengeAnswer descriptor] */

undefined * FUN_00448038(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ffc0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6228,
                    &PTR____CFConstantStringClassReference_00a259c0,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_passkeyEnrollmentPayload_00b02108,3,
                    0x20,0x1c);
    func_0x00791460();
    puRam0000000000b5ffc0 = puVar1;
  }
  return puRam0000000000b5ffc0;
}



/* Entry: 004480c4; end: 0044813f; +[SCJanusEnterpriseSSOChallenge descriptor] */

undefined * FUN_004480c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ffc8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6278,
                    &PTR____CFConstantStringClassReference_00a259e0,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_authorizationEndpointURL_00b01e68,2,
                    0x18,0x1c);
    func_0x00791440();
    puRam0000000000b5ffc8 = puVar1;
  }
  return puRam0000000000b5ffc8;
}



/* Entry: 00448140; end: 004481a7; +[SCJanusEnterpriseSSOChallengeAnswer descriptor] */

void FUN_00448140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ffd0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad62c8,
                    &PTR____CFConstantStringClassReference_00a25a00,
                    &PTR_s_snapchat_janus_api_00b01930,0,0,4,0x1c);
    puRam0000000000b5ffd0 = puVar1;
  }
  return;
}



/* Entry: 004481a8; end: 0044820f; +[SCJanusChangeUsernameChallenge descriptor] */

void FUN_004481a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ffd8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6318,
                    &PTR____CFConstantStringClassReference_00a25a20,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_suggestionsArray_00b01a48,1,0x10,0x1c)
    ;
    puRam0000000000b5ffd8 = puVar1;
  }
  return;
}



/* Entry: 00448210; end: 00448277; +[SCJanusChangeUsernameChallengeAnswer descriptor] */

void FUN_00448210(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ffe0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6368,
                    &PTR____CFConstantStringClassReference_00a25a40,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_selectedUsername_00b01a68,1,0x10,0x1c)
    ;
    puRam0000000000b5ffe0 = puVar1;
  }
  return;
}



/* Entry: 00448278; end: 004482df; +[SCJanusSilentPhoneVerificationChallenge descriptor] */

void FUN_00448278(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5ffe8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad63b8,
                    &PTR____CFConstantStringClassReference_00a25a60,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_provider_00b01a88,1,8,0x1c);
    puRam0000000000b5ffe8 = puVar1;
  }
  return;
}



/* Entry: 004482e0; end: 0044836b; +[SCJanusSilentPhoneVerificationChallengeAnswer descriptor] */

undefined * FUN_004482e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fff0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6728,
                    &PTR____CFConstantStringClassReference_00a25a80,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_payload_00b01ea8,2,0x18,0x1c);
    func_0x00791460();
    puRam0000000000b5fff0 = puVar1;
  }
  return puRam0000000000b5fff0;
}



/* Entry: 0044836c; end: 004483ef; +[SCJanusSilentPhoneVerificationChallengeAnswer_Payload descriptor] */

undefined * FUN_0044836c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b5fff8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6750,
                    &PTR____CFConstantStringClassReference_00a25860,
                    &PTR_s_snapchat_janus_api_00b01930,&PTR_s_token_00b01ee8,2,0x18,0x1c);
    func_0x00791420();
    puRam0000000000b5fff8 = puVar1;
  }
  return puRam0000000000b5fff8;
}



/* Entry: 004483f0; end: 00448473; +[SCJanusSilentPhoneVerificationChallengeAnswer_TokenUnavailable descriptor] */

undefined * FUN_004483f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60000 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6778,
                    &PTR____CFConstantStringClassReference_00a25aa0,
                    &PTR_s_snapchat_janus_api_00b01930,0,0,4,0x1c);
    func_0x00791420();
    puRam0000000000b60000 = puVar1;
  }
  return puRam0000000000b60000;
}



/* Entry: 00448474; end: 004484ef;  */

undefined * FUN_00448474(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b60008 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a25ac0,&UNK_00800488,&UNK_008005f8,0x17
                    ,FUN_004484f0,0);
    do {
      if (puRam0000000000b60008 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b60008;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb60008,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b60008 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b60008;
}



/* Entry: 004484f0; end: 004484fb;  */

bool FUN_004484f0(uint param_1)

{
  return param_1 < 0x17;
}



/* Entry: 004484fc; end: 00448577;  */

undefined * FUN_004484fc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b60010 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a25ae0,&UNK_00800654,&UNK_00800694,7,
                    FUN_00448578,0);
    do {
      if (puRam0000000000b60010 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b60010;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb60010,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b60010 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b60010;
}



/* Entry: 00448578; end: 00448583;  */

bool FUN_00448578(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 00448584; end: 004485ff;  */

undefined * FUN_00448584(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b60018 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a25b00,&UNK_008006b0,&UNK_00800798,8,
                    FUN_00448600,0);
    do {
      if (puRam0000000000b60018 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b60018;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb60018,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b60018 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b60018;
}



/* Entry: 00448600; end: 0044860b;  */

bool FUN_00448600(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 0044860c; end: 00448687;  */

undefined * FUN_0044860c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b60020 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a25b20,&UNK_008007b8,&UNK_008007cc,2,
                    FUN_00448688,0);
    do {
      if (puRam0000000000b60020 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b60020;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb60020,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b60020 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b60020;
}



/* Entry: 00448688; end: 00448693;  */

bool FUN_00448688(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 00448694; end: 0044870f;  */

undefined * FUN_00448694(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b60028 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a25b40,&UNK_008007d4,&UNK_00800870,6,
                    FUN_00448710,0);
    do {
      if (puRam0000000000b60028 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b60028;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb60028,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b60028 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b60028;
}



/* Entry: 00448710; end: 0044871b;  */

bool FUN_00448710(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 0044871c; end: 00448783; +[SCJanusChallengeOrchestrationRequestHeader descriptor] */

void FUN_0044871c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60030 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6818,
                    &PTR____CFConstantStringClassReference_00a25b60,
                    &PTR_s_snapchat_janus_api_00b031b8,&PTR_s_blizzardClientId_00b03350,3,0x20,0x1c)
    ;
    puRam0000000000b60030 = puVar1;
  }
  return;
}



/* Entry: 00448784; end: 004487eb; +[SCJanusDeniedData descriptor] */

void FUN_00448784(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60038 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6868,
                    &PTR____CFConstantStringClassReference_00a25b80,
                    &PTR_s_snapchat_janus_api_00b031b8,&PTR_s_humanReadableMessage_00b03210,2,0x10,
                    0x1c);
    puRam0000000000b60038 = puVar1;
  }
  return;
}



/* Entry: 004487ec; end: 00448853; +[SCJanusChallengeOrchestrationErrorData descriptor] */

void FUN_004487ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60040 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad68b8,
                    &PTR____CFConstantStringClassReference_00a25ba0,
                    &PTR_s_snapchat_janus_api_00b031b8,&PTR_s_humanReadableErrorMessage_00b03250,2,
                    0x10,0x1c);
    puRam0000000000b60040 = puVar1;
  }
  return;
}



/* Entry: 00448854; end: 004488bb; +[SCJanusUnavailableChallenge descriptor] */

void FUN_00448854(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60048 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6908,
                    &PTR____CFConstantStringClassReference_00a25bc0,
                    &PTR_s_snapchat_janus_api_00b031b8,&PTR_s_challengeType_00b03290,2,0xc,0x1c);
    puRam0000000000b60048 = puVar1;
  }
  return;
}



/* Entry: 004488bc; end: 00448923; +[SCJanusUnavailableChallenges descriptor] */

void FUN_004488bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60050 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6958,
                    &PTR____CFConstantStringClassReference_00a25be0,
                    &PTR_s_snapchat_janus_api_00b031b8,&PTR_s_challengeTypesArray_00b032d0,2,0x18,
                    0x1c);
    puRam0000000000b60050 = puVar1;
  }
  return;
}



/* Entry: 00448924; end: 0044898b; +[SCJanusEmailDomainAllowlist descriptor] */

void FUN_00448924(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60058 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad69a8,
                    &PTR____CFConstantStringClassReference_00a25c00,
                    &PTR_s_snapchat_janus_api_00b031b8,&PTR_s_allowedDomainsArray_00b03310,2,0x18,
                    0x1c);
    puRam0000000000b60058 = puVar1;
  }
  return;
}



/* Entry: 0044898c; end: 00448a17; +[SCJanusAlternativeChallengeOption descriptor] */

undefined * FUN_0044898c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60060 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad69f8,
                    &PTR____CFConstantStringClassReference_00a25c20,
                    &PTR_s_snapchat_janus_api_00b031b8,&PTR_s_singleButtonCycling_00b031d0,1,0x10,
                    0x1c);
    func_0x00791460();
    puRam0000000000b60060 = puVar1;
  }
  return puRam0000000000b60060;
}



/* Entry: 00448a18; end: 00448a93; +[SCJanusAlternativeChallengeOption_SingleButtonCycling descriptor] */

undefined * FUN_00448a18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60068 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6a48,
                    &PTR____CFConstantStringClassReference_00a25c40,
                    &PTR_s_snapchat_janus_api_00b031b8,0,0,4,0x1c);
    func_0x00791420();
    puRam0000000000b60068 = puVar1;
  }
  return puRam0000000000b60068;
}



/* Entry: 00448a94; end: 00448b1f; +[SCJanusAlternativeChallengeRequest descriptor] */

undefined * FUN_00448a94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60070 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6a98,
                    &PTR____CFConstantStringClassReference_00a25c60,
                    &PTR_s_snapchat_janus_api_00b031b8,&PTR_s_getAlternativeChallenge_00b031f0,1,
                    0x10,0x1c);
    func_0x00791460();
    puRam0000000000b60070 = puVar1;
  }
  return puRam0000000000b60070;
}



/* Entry: 00448b20; end: 00448b9b; +[SCJanusAlternativeChallengeRequest_GetAlternativeChallenge descriptor] */

undefined * FUN_00448b20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60078 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6ae8,
                    &PTR____CFConstantStringClassReference_00a25c80,
                    &PTR_s_snapchat_janus_api_00b031b8,0,0,4,0x1c);
    func_0x00791420();
    puRam0000000000b60078 = puVar1;
  }
  return puRam0000000000b60078;
}



/* Entry: 00448b9c; end: 00448c03; +[SCJanusPasskeyAuthenticationPayload descriptor] */

void FUN_00448b9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60080 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6b88,
                    &PTR____CFConstantStringClassReference_00a25ca0,
                    &PTR_s_snapchat_janus_api_00b033b0,&PTR_s_clientDataJson_00b033c8,4,0x28,0x1c);
    puRam0000000000b60080 = puVar1;
  }
  return;
}



/* Entry: 00448c04; end: 00448c6b; +[SCJanusPasskeyAuthenticationOptions descriptor] */

void FUN_00448c04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60088 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6c28,
                    &PTR____CFConstantStringClassReference_00a25cc0,
                    &PTR_s_snapchat_janus_api_00b03448,&PTR_s_relyingPartyId_00b03460,5,0x30,0x1c);
    puRam0000000000b60088 = puVar1;
  }
  return;
}



/* Entry: 00448c6c; end: 00448cd3; +[SCJanusPasskeyCredentialDescriptor descriptor] */

void FUN_00448c6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60090 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6cc8,
                    &PTR____CFConstantStringClassReference_00a25ce0,
                    &PTR_s_snapchat_janus_api_00b03500,&PTR_s_credentialId_00b03518,1,0x10,0x1c);
    puRam0000000000b60090 = puVar1;
  }
  return;
}



/* Entry: 00448cd4; end: 00448d3b; +[SCJanusPasskeyEnrollmentOptions descriptor] */

void FUN_00448cd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60098 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6d68,
                    &PTR____CFConstantStringClassReference_00a25d00,
                    &PTR_s_snapchat_janus_api_00b03538,&PTR_s_nonce_00b03550,4,0x28,0x1c);
    puRam0000000000b60098 = puVar1;
  }
  return;
}



/* Entry: 00448d3c; end: 00448da3; +[RelyingParty descriptor] */

void FUN_00448d3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b600a0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6e08,
                    &PTR____CFConstantStringClassReference_00a25d20,
                    &PTR_s_snapchat_auth_passkey_models_00b035d0,&PTR_s_id_p_00b035e8,1,0x10,0x1c);
    puRam0000000000b600a0 = puVar1;
  }
  return;
}



/* Entry: 00448da4; end: 00448e87; +[SCJanusPasskeyEnrollmentPayload descriptor] */

void FUN_00448da4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b600a8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6ea8,
                    &PTR____CFConstantStringClassReference_00a25d40,
                    &PTR_s_snapchat_janus_api_00b03608,&PTR_s_clientDataJson_00b03620,2,0x18,0x1c);
    puRam0000000000b600a8 = puVar1;
  }
  return;
}



/* Entry: 00448e88; end: 00448e93;  */

bool FUN_00448e88(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 00448e94; end: 00448efb; +[SCJanusPasskeyEnrollmentSkipped descriptor] */

void FUN_00448e94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b600b8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6f48,
                    &PTR____CFConstantStringClassReference_00a25d80,
                    &PTR_s_snapchat_janus_api_00b03660,&PTR_s_lastEnrollmentError_00b03678,2,0x10,
                    0x1c);
    puRam0000000000b600b8 = puVar1;
  }
  return;
}



/* Entry: 00448efc; end: 00448fdf; +[SCJanusPasskeyEnrollmentSkipReason descriptor] */

void FUN_00448efc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b600c0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad6f98,
                    &PTR____CFConstantStringClassReference_00a25da0,
                    &PTR_s_snapchat_janus_api_00b03660,0,0,4,0x1c);
    puRam0000000000b600c0 = puVar1;
  }
  return;
}



/* Entry: 00448fe0; end: 00448feb;  */

bool FUN_00448fe0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 00448fec; end: 00449053; +[SCJanusPasskeyEnrollmentError descriptor] */

void FUN_00448fec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b600d0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad7038,
                    &PTR____CFConstantStringClassReference_00a25de0,
                    &PTR_s_snapchat_janus_api_00b036b8,&PTR_s_error_00b036d0,2,0x10,0x1c);
    puRam0000000000b600d0 = puVar1;
  }
  return;
}



/* Entry: 00449054; end: 00449137; +[SCJanusPasskeyEnrollmentErrorCode descriptor] */

void FUN_00449054(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b600d8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad7088,
                    &PTR____CFConstantStringClassReference_00a25e00,
                    &PTR_s_snapchat_janus_api_00b036b8,0,0,4,0x1c);
    puRam0000000000b600d8 = puVar1;
  }
  return;
}



/* Entry: 00449138; end: 00449143;  */

bool FUN_00449138(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 00449144; end: 004491ab; +[SimCardMetadata descriptor] */

void FUN_00449144(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b600e8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad7128,
                    &PTR____CFConstantStringClassReference_00a25e40,
                    &PTR_s_snapchat_telephony_api_00b03710,&PTR_s_hasPhoneNumber_00b037c8,7,0x28,
                    0x1c);
    puRam0000000000b600e8 = puVar1;
  }
  return;
}



/* Entry: 004491ac; end: 00449213; +[RequestHeader descriptor] */

void FUN_004491ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b600f0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad7178,
                    &PTR____CFConstantStringClassReference_00a25e60,
                    &PTR_s_snapchat_telephony_api_00b03710,&PTR_s_userAgent_00b038a8,10,0x58,0x1c);
    puRam0000000000b600f0 = puVar1;
  }
  return;
}



/* Entry: 00449214; end: 0044927b; +[ErrorData descriptor] */

void FUN_00449214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b600f8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad71c8,
                    &PTR____CFConstantStringClassReference_00a25e80,
                    &PTR_s_snapchat_telephony_api_00b03710,&PTR_s_humanReadableErrorMessage_00b03728
                    ,1,0x10,0x1c);
    puRam0000000000b600f8 = puVar1;
  }
  return;
}



/* Entry: 0044927c; end: 004492e3; +[ClientRequestHeader descriptor] */

void FUN_0044927c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60100 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad7218,
                    &PTR____CFConstantStringClassReference_00a25ea0,
                    &PTR_s_snapchat_telephony_api_00b03710,&PTR_s_clientRequestId_00b03768,3,0x20,
                    0x1c);
    puRam0000000000b60100 = puVar1;
  }
  return;
}



/* Entry: 004492e4; end: 0044934b; +[ClientConfigurationData descriptor] */

void FUN_004492e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60108 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad7268,
                    &PTR____CFConstantStringClassReference_00a25ec0,
                    &PTR_s_snapchat_telephony_api_00b03710,&PTR_s_phoneDeliveryMethod_00b03748,1,8,
                    0x1c);
    puRam0000000000b60108 = puVar1;
  }
  return;
}


