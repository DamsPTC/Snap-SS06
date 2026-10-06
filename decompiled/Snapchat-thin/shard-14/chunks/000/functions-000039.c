/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af47908; end: 10af47913;  */

bool FUN_10af47908(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af47914; end: 10af4798f;  */

undefined * FUN_10af47914(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eff10 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f39b18,
                        &UNK_10e53a408,&UNK_10e53a428,3,FUN_10af47990,0);
    do {
      if (puRam00000001137eff10 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eff10;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eff10,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eff10 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eff10;
}



/* Entry: 10af47990; end: 10af4799b;  */

bool FUN_10af47990(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af4799c; end: 10af47a03; +[SCJanusAppLoginContext descriptor] */

void FUN_10af4799c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eff18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1f6a0,
                        &PTR____CFConstantStringClassReference_110f39b38,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_s_blizzardClientId_113332950,8,0x48
                        ,0x1c);
    puRam00000001137eff18 = puVar1;
  }
  return;
}



/* Entry: 10af47a04; end: 10af47a6b; +[SCJanusAppLoginBootstrapParams descriptor] */

void FUN_10af47a04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eff20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1f6f0,
                        &PTR____CFConstantStringClassReference_110f39b58,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_s_cofTags_1133323b0,2,0x18,0x1c);
    puRam00000001137eff20 = puVar1;
  }
  return;
}



/* Entry: 10af47a6c; end: 10af47ad3; +[SCJanusLoginHeader descriptor] */

void FUN_10af47a6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eff28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1f740,
                        &PTR____CFConstantStringClassReference_110f39b78,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_s_blizzardClientId_113332b90,0xd,
                        0x70,0x1c);
    puRam00000001137eff28 = puVar1;
  }
  return;
}



/* Entry: 10af47ad4; end: 10af47b3b; +[SCJanusDeviceToken descriptor] */

void FUN_10af47ad4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eff30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1f790,
                        &PTR____CFConstantStringClassReference_110e7a4b8,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_s_id_p_1133322d0,1,0x10,0x1c);
    puRam00000001137eff30 = puVar1;
  }
  return;
}



/* Entry: 10af47b3c; end: 10af47ba3; +[SCJanusODLVData descriptor] */

void FUN_10af47b3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eff38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1f7e0,
                        &PTR____CFConstantStringClassReference_110f39b98,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_s_odlvToken_113332810,5,0x20,0x1c);
    puRam00000001137eff38 = puVar1;
  }
  return;
}



/* Entry: 10af47ba4; end: 10af47c0b; +[SCJanusTwoFAData descriptor] */

void FUN_10af47ba4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eff40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1f830,
                        &PTR____CFConstantStringClassReference_110f39bb8,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_s_twoFaToken_1133328b0,5,0x20,0x1c)
    ;
    puRam00000001137eff40 = puVar1;
  }
  return;
}



/* Entry: 10af47c0c; end: 10af47c97; +[SCJanusChannelVerificationData descriptor] */

undefined * FUN_10af47c0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eff48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1f880,
                        &PTR____CFConstantStringClassReference_110f39bd8,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_DAT_113332430,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137eff48 = puVar1;
  }
  return puRam00000001137eff48;
}



/* Entry: 10af47c98; end: 10af47cff; +[SCJanusAccountDeactivationData descriptor] */

void FUN_10af47c98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eff50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1f8d0,
                        &PTR____CFConstantStringClassReference_110f39bf8,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_DAT_113332490,3,0x18,0x1c);
    puRam00000001137eff50 = puVar1;
  }
  return;
}



/* Entry: 10af47d00; end: 10af47d67; +[SCJanusReactivateAccountData descriptor] */

void FUN_10af47d00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eff58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1f920,
                        &PTR____CFConstantStringClassReference_110f39c18,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_s_humanReadableMessage_1133322f0,1,
                        0x10,0x1c);
    puRam00000001137eff58 = puVar1;
  }
  return;
}



/* Entry: 10af47d68; end: 10af47dcf; +[SCJanusAccountLockedData descriptor] */

void FUN_10af47d68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eff60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1f970,
                        &PTR____CFConstantStringClassReference_110f39c38,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_s_humanReadableMessage_1133324f0,3,
                        0x18,0x1c);
    puRam00000001137eff60 = puVar1;
  }
  return;
}



/* Entry: 10af47dd0; end: 10af47e6b; +[SCJanusAccountLockedData_AppealableLockData descriptor] */

undefined * FUN_10af47dd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eff68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1f9c0,
                        &PTR____CFConstantStringClassReference_110f39c58,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_DAT_113332d30,0xf,0x78,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c1f970);
    puRam00000001137eff68 = puVar1;
  }
  return puRam00000001137eff68;
}



/* Entry: 10af47e6c; end: 10af47ef7; +[SCJanusAccountLockedData_AppealableLockData_LearnMore descriptor] */

undefined * FUN_10af47e6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eff70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1fa10,
                        &PTR____CFConstantStringClassReference_110f39c78,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_s_supportURL_113332310,1,0x10,0x1c)
    ;
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c1f9c0);
    puRam00000001137eff70 = puVar1;
  }
  return puRam00000001137eff70;
}



/* Entry: 10af47ef8; end: 10af47f73; +[SCJanusAccountLockedData_AppealableLockData_AppealForm descriptor] */

undefined * FUN_10af47ef8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eff78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1fa60,
                        &PTR____CFConstantStringClassReference_110f39c98,
                        &PTR_s_snapchat_janus_api_1133322b8,0,0,4,0x1c);
    func_0x00010c228780();
    puRam00000001137eff78 = puVar1;
  }
  return puRam00000001137eff78;
}



/* Entry: 10af47f74; end: 10af47fff; +[SCJanusAccountLockedData_AppealableLockData_AgeVerification descriptor] */

undefined * FUN_10af47f74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eff80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1fab0,
                        &PTR____CFConstantStringClassReference_110f39cb8,
                        &PTR_s_snapchat_janus_api_1133322b8,
                        &PTR_s_authenticationSessionPayload_113332610,4,0x28,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c1f9c0);
    puRam00000001137eff80 = puVar1;
  }
  return puRam00000001137eff80;
}



/* Entry: 10af48000; end: 10af4808b; +[SCJanusAccountLockedData_AppealableLockData_DownloadMyData descriptor] */

undefined * FUN_10af48000(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eff88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1fb00,
                        &PTR____CFConstantStringClassReference_110f39cd8,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_s_title_1133323f0,2,0x18,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c1f9c0);
    puRam00000001137eff88 = puVar1;
  }
  return puRam00000001137eff88;
}



/* Entry: 10af4808c; end: 10af48107; +[SCJanusAccountLockedData_AppealableLockData_EducationalLesson descriptor] */

undefined * FUN_10af4808c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eff90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1fb50,
                        &PTR____CFConstantStringClassReference_110f39cf8,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_s_title_113332330,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137eff90 = puVar1;
  }
  return puRam00000001137eff90;
}



/* Entry: 10af48108; end: 10af4816f; +[SCJanusAndroidSafetynetData descriptor] */

void FUN_10af48108(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eff98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1fba0,
                        &PTR____CFConstantStringClassReference_110f39d18,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_s_nonce_113332350,1,0x10,0x1c);
    puRam00000001137eff98 = puVar1;
  }
  return;
}



/* Entry: 10af48170; end: 10af481d7; +[SCJanusLoginCodeData descriptor] */

void FUN_10af48170(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137effa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1fbf0,
                        &PTR____CFConstantStringClassReference_110f39d38,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_DAT_113332a50,10,0x40,0x1c);
    puRam00000001137effa0 = puVar1;
  }
  return;
}



/* Entry: 10af481d8; end: 10af4823f; +[SCJanusErrorData descriptor] */

void FUN_10af481d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137effa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1fc40,
                        &PTR____CFConstantStringClassReference_110ddab78,
                        &PTR_s_snapchat_janus_api_1133322b8,
                        &PTR_s_humanReadableErrorMessage_113332370,1,0x10,0x1c);
    puRam00000001137effa8 = puVar1;
  }
  return;
}



/* Entry: 10af48240; end: 10af482a7; +[SCJanusFideliusClientInit descriptor] */

void FUN_10af48240(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137effb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1fc90,
                        &PTR____CFConstantStringClassReference_110f39d58,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_DAT_113332550,3,0x20,0x1c);
    puRam00000001137effb0 = puVar1;
  }
  return;
}



/* Entry: 10af482a8; end: 10af4830f; +[SCJanusFideliusTentativeDeviceKey descriptor] */

void FUN_10af482a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137effb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1fce0,
                        &PTR____CFConstantStringClassReference_110f39d78,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_DAT_113332690,4,0x28,0x1c);
    puRam00000001137effb8 = puVar1;
  }
  return;
}



/* Entry: 10af48310; end: 10af48377; +[SCJanusCofTags descriptor] */

void FUN_10af48310(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137effc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1fd30,
                        &PTR____CFConstantStringClassReference_110f39d98,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_DAT_113332710,4,0x20,0x1c);
    puRam00000001137effc0 = puVar1;
  }
  return;
}



/* Entry: 10af48378; end: 10af483df; +[SCJanusPhoneNumberWithContext descriptor] */

void FUN_10af48378(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137effc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1fd80,
                        &PTR____CFConstantStringClassReference_110f39db8,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_s_countryCode_113332790,4,0x20,0x1c
                       );
    puRam00000001137effc8 = puVar1;
  }
  return;
}



/* Entry: 10af483e0; end: 10af48447; +[SCJanusFormattedPhoneNumberData descriptor] */

void FUN_10af483e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137effd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1fdd0,
                        &PTR____CFConstantStringClassReference_110f39dd8,
                        &PTR_s_snapchat_janus_api_1133322b8,&PTR_DAT_1133325b0,3,0x18,0x1c);
    puRam00000001137effd0 = puVar1;
  }
  return;
}



/* Entry: 10af48448; end: 10af4852b; +[SCJanusResumeRegistrationData descriptor] */

void FUN_10af48448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137effd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1fe20,
                        &PTR____CFConstantStringClassReference_110f39df8,
                        &PTR_s_snapchat_janus_api_1133322b8,
                        &PTR_s_authenticationSessionPayload_113332390,1,0x10,0x1c);
    puRam00000001137effd8 = puVar1;
  }
  return;
}



/* Entry: 10af4852c; end: 10af48537;  */

bool FUN_10af4852c(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10af48538; end: 10af485b3;  */

undefined * FUN_10af48538(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137efff0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f39e58,
                        &UNK_10e53a4a0,&UNK_10e53a500,8,FUN_10af485b4,0);
    do {
      if (puRam00000001137efff0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137efff0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137efff0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137efff0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137efff0;
}



/* Entry: 10af485b4; end: 10af485bf;  */

bool FUN_10af485b4(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10af485c0; end: 10af4863b;  */

undefined * FUN_10af485c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137efff8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f39e78,
                        &UNK_10e53a520,&UNK_10e53a5bc,8,FUN_10af4863c,0);
    do {
      if (puRam00000001137efff8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137efff8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137efff8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137efff8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137efff8;
}



/* Entry: 10af4863c; end: 10af48647;  */

bool FUN_10af4863c(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10af48648; end: 10af486af; +[CompleteContext descriptor] */

void FUN_10af48648(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0000 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c20168,
                        &PTR____CFConstantStringClassReference_110f39e98,&PTR_DAT_113332f48,
                        &PTR_DAT_113333020,3,0x18,0x1c);
    puRam00000001137f0000 = puVar1;
  }
  return;
}



/* Entry: 10af486b0; end: 10af48733; +[CompleteContext_ClientContext descriptor] */

undefined * FUN_10af486b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0008 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c20190,
                        &PTR____CFConstantStringClassReference_110f39eb8,&PTR_DAT_113332f48,
                        &PTR_DAT_1133331c0,0xc,0x68,0x1c);
    func_0x00010c228780();
    puRam00000001137f0008 = puVar1;
  }
  return puRam00000001137f0008;
}



/* Entry: 10af48734; end: 10af4879b; +[Result descriptor] */

void FUN_10af48734(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0010 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1ffb0,
                        &PTR____CFConstantStringClassReference_110debb78,&PTR_DAT_113332f48,
                        &PTR_DAT_113333080,3,0x18,0x1c);
    puRam00000001137f0010 = puVar1;
  }
  return;
}



/* Entry: 10af4879c; end: 10af48803; +[PhoneNumberGuess descriptor] */

void FUN_10af4879c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0018 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c20000,
                        &PTR____CFConstantStringClassReference_110f39ed8,&PTR_DAT_113332f48,
                        &PTR_DAT_1133330e0,7,0x38,0x1c);
    puRam00000001137f0018 = puVar1;
  }
  return;
}



/* Entry: 10af48804; end: 10af4886b; +[EvaluatePhoneNumberRequest descriptor] */

void FUN_10af48804(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0020 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c20050,
                        &PTR____CFConstantStringClassReference_110f39ef8,&PTR_DAT_113332f48,
                        &PTR_s_phoneNumber_113332fa0,2,0x18,0x1c);
    puRam00000001137f0020 = puVar1;
  }
  return;
}



/* Entry: 10af4886c; end: 10af488d3; +[EvaluatePhoneNumberResponse descriptor] */

void FUN_10af4886c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0028 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c200a0,
                        &PTR____CFConstantStringClassReference_110f39f18,&PTR_DAT_113332f48,
                        &PTR_DAT_113332f60,1,0x10,0x1c);
    puRam00000001137f0028 = puVar1;
  }
  return;
}



/* Entry: 10af488d4; end: 10af4893b; +[BatchEvaluatePhoneNumberRequest descriptor] */

void FUN_10af488d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0030 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c200f0,
                        &PTR____CFConstantStringClassReference_110f39f38,&PTR_DAT_113332f48,
                        &PTR_DAT_113332fe0,2,0x18,0x1c);
    puRam00000001137f0030 = puVar1;
  }
  return;
}



/* Entry: 10af4893c; end: 10af48a1f; +[BatchEvaluatePhoneNumberResponse descriptor] */

void FUN_10af4893c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0038 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c20140,
                        &PTR____CFConstantStringClassReference_110f39f58,&PTR_DAT_113332f48,
                        &PTR_DAT_113332f80,1,0x10,0x1c);
    puRam00000001137f0038 = puVar1;
  }
  return;
}



/* Entry: 10af48a20; end: 10af48a2b;  */

bool FUN_10af48a20(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10af48a2c; end: 10af48a93; +[SCActivationPbInputValidationRulesConfig descriptor] */

void FUN_10af48a2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0048 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c20230,
                        &PTR____CFConstantStringClassReference_110f39f98,
                        &PTR_s_snapchat_activation_cof_113333348,&PTR_DAT_113333360,1,0x10,0x1c);
    puRam00000001137f0048 = puVar1;
  }
  return;
}



/* Entry: 10af48a94; end: 10af48afb; +[SCActivationPbInputValidationRule descriptor] */

void FUN_10af48a94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0050 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c20280,
                        &PTR____CFConstantStringClassReference_110f39fb8,
                        &PTR_s_snapchat_activation_cof_113333348,&PTR_DAT_113333380,2,0x10,0x1c);
    puRam00000001137f0050 = puVar1;
  }
  return;
}



/* Entry: 10af48afc; end: 10af48b87; +[SCActivationPbInputValidationStrategy descriptor] */

undefined * FUN_10af48afc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0058 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c202d0,
                        &PTR____CFConstantStringClassReference_110f39fd8,
                        &PTR_s_snapchat_activation_cof_113333348,&PTR_DAT_1133333c0,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137f0058 = puVar1;
  }
  return puRam00000001137f0058;
}



/* Entry: 10af48b88; end: 10af48b8f; -[SCLogInSessionServices loginSessionService] */

undefined8 FUN_10af48b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af48b90; end: 10af48bbf; -[SCLogInSessionServices .cxx_destruct] */

void FUN_10af48b90(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af48bc0; end: 10af48c6f; -[SCLogInCredentialsPhoneNumber initWithCoder:] */

undefined1 * FUN_10af48bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702af8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af48c70; end: 10af48d1b; -[SCLogInCredentialsPhoneNumber initWithCountryCode:mobileNumber:] */

undefined1 *
FUN_10af48c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702af8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af48d1c; end: 10af48d3f; -[SCLogInCredentialsPhoneNumber copyWithZone:] */

undefined8 FUN_10af48d1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af48d40; end: 10af48d9f; -[SCLogInCredentialsPhoneNumber encodeWithCoder:] */

void FUN_10af48d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f3a018);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f3a038);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af48da0; end: 10af48e13; -[SCLogInCredentialsPhoneNumber hash] */

undefined8 * FUN_10af48da0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af48e94:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af48ea0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10af48ea0;
        }
        goto LAB_10af48e94;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af48ea0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af48e14; end: 10af48ebb; -[SCLogInCredentialsPhoneNumber isEqual:] */

long FUN_10af48e14(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af48e94:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af48ea0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af48ea0;
        }
        goto LAB_10af48e94;
      }
    }
    lVar3 = 0;
  }
LAB_10af48ea0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af48ebc; end: 10af48ec3; -[SCLogInCredentialsPhoneNumber countryCode] */

undefined8 FUN_10af48ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af48ec4; end: 10af48ecb; -[SCLogInCredentialsPhoneNumber mobileNumber] */

undefined8 FUN_10af48ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af48ecc; end: 10af48efb; -[SCLogInCredentialsPhoneNumber .cxx_destruct] */

void FUN_10af48ecc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af48efc; end: 10af48f67; +[SCLogInIdentifier emailWithEmail:] */

void FUN_10af48efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af238;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af48f68; end: 10af48fd3; +[SCLogInIdentifier phoneNumberWithPhoneNumber:] */

void FUN_10af48f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af238;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af48fd4; end: 10af49037; +[SCLogInIdentifier usernameWithUsername:] */

void FUN_10af48fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af238;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af49038; end: 10af4905b; -[SCLogInIdentifier copyWithZone:] */

undefined8 FUN_10af49038(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af4905c; end: 10af490df; -[SCLogInIdentifier hash] */

void FUN_10af4905c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_112702b00;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af490e0; end: 10af49123; -[SCLogInIdentifier internalInit] */

void FUN_10af490e0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112702b00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af49124; end: 10af491f3; -[SCLogInIdentifier isEqual:] */

long FUN_10af49124(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af491cc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af491d8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10af491d8;
          }
          goto LAB_10af491cc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af491d8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af491f4; end: 10af4929f; -[SCLogInIdentifier matchUsername:email:phoneNumber:] */

void FUN_10af491f4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10af4927c;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 1) {
    if (param_4 == 0) goto LAB_10af4927c;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_10af4927c;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10af4927c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af492a0; end: 10af492db; -[SCLogInIdentifier .cxx_destruct] */

void FUN_10af492a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af492dc; end: 10af493a7; -[SCIdentityLoggerServices initWithSignupTransitionLogger:loginStateTransitionLogger:identityRequestLogger:] */

undefined1 *
FUN_10af492dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112702b08;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af493a8; end: 10af493b3; -[SCIdentityLoggerServices signupStateTransitionLogger] */

void FUN_10af493a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 10af493b4; end: 10af493bf; -[SCIdentityLoggerServices loginStateTransitionLogger] */

void FUN_10af493b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 10af493c0; end: 10af493cb; -[SCIdentityLoggerServices identityRequestLogger] */

void FUN_10af493c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 10af493cc; end: 10af49407; -[SCIdentityLoggerServices .cxx_destruct] */

void FUN_10af493cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af49408; end: 10af4947b; -[SCMultiSourceCountryProviderServices initWithMultiSourceCountryProvider:] */

undefined1 * FUN_10af49408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702b10;
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



/* Entry: 10af4947c; end: 10af49483; -[SCMultiSourceCountryProviderServices multiSourceCountryProvider] */

undefined8 FUN_10af4947c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af49484; end: 10af4948f; -[SCMultiSourceCountryProviderServices .cxx_destruct] */

void FUN_10af49484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af49490; end: 10af494d7; +[SCMultiSourceCountrySource carrier] */

void FUN_10af49490(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7310;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af494d8; end: 10af49523; +[SCMultiSourceCountrySource defaultUS] */

void FUN_10af494d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7310;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af49524; end: 10af4956f; +[SCMultiSourceCountrySource iPAddress] */

void FUN_10af49524(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7310;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af49570; end: 10af495bb; +[SCMultiSourceCountrySource locale] */

void FUN_10af49570(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7310;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af495bc; end: 10af495df; -[SCMultiSourceCountrySource copyWithZone:] */

undefined8 FUN_10af495bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af495e0; end: 10af495e7; -[SCMultiSourceCountrySource hash] */

undefined8 FUN_10af495e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af495e8; end: 10af4962b; -[SCMultiSourceCountrySource internalInit] */

void FUN_10af495e8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112702b18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af4962c; end: 10af496b3; -[SCMultiSourceCountrySource isEqual:] */

bool FUN_10af4962c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10af496b4; end: 10af49787; -[SCMultiSourceCountrySource matchCarrier:locale:iPAddress:defaultUS:] */

void FUN_10af496b4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    lVar1 = param_3;
    if ((lVar2 != 0) && (lVar1 = param_4, lVar2 != 1)) goto LAB_10af49740;
  }
  else {
    lVar1 = param_5;
    if ((lVar2 != 2) && (lVar1 = param_6, lVar2 != 3)) goto LAB_10af49740;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
LAB_10af49740:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af49788; end: 10af499eb;  */

void FUN_10af49788(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4a80(param_1);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4800(param_1);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4840(param_1);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1d4ae0(param_1);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4960(param_1);
  _objc_release(uVar1);
  uVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c067ec0(uVar1);
  _objc_release(uVar1);
  func_0x00010c1d49a0(param_1);
  uVar1 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4ac0(param_1);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4900(param_1);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d48c0(param_1);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d4880(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af499ec; end: 10af49c3f;  */

undefined1 * FUN_10af499ec(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined ***pppuVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined8 uVar14;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110db11d8;
  ppuVar1 = param_1;
  func_0x00010c0e8460();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar1 != (undefined **)0x0) {
    ppuStack_a0 = ppuVar1;
  }
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110df8098;
  ppuVar2 = param_1;
  func_0x00010c0e84a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuStack_98 = ppuVar2;
  }
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f3a058;
  func_0x00010c0e88e0(param_1);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110f3a098;
  ppuVar4 = param_1;
  puStack_90 = puVar3;
  func_0x00010c0e86a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f3a0b8;
  ppuStack_88 = ppuVar5;
  func_0x00010c0e8720(param_1);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f3a118;
  ppuVar7 = param_1;
  puStack_80 = puVar6;
  func_0x00010c0e8520();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuStack_78 = ppuVar7;
  }
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f3a138;
  ppuVar8 = param_1;
  func_0x00010c0e84e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar8 != (undefined **)0x0) {
    ppuStack_70 = ppuVar8;
  }
  pppuVar12 = &ppuStack_a0;
  pppuVar13 = &ppuStack_d8;
  uVar14 = 7;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(puVar6);
  if (ppuVar4 == (undefined **)0x0) {
    _objc_release(ppuVar5);
  }
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  ppuVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  pppuVar10 = &ppuStack_120;
  pcStack_e8 = FUN_10af49c40;
  puStack_110 = puVar3;
  ppuStack_108 = ppuVar2;
  ppuStack_100 = ppuVar1;
  ppuStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pppuVar12);
  _objc_retain(pppuVar13);
  _objc_retain(uVar14);
  puStack_118 = PTR_PTR_112702b20;
  ppuStack_120 = ppuVar4;
  _objc_msgSendSuper2(&ppuStack_120,PTR_s_init_1125d9248);
  if (pppuVar10 != (undefined ***)0x0) {
    _objc_retain(pppuVar12);
    uVar11 = *(undefined8 *)((long)pppuVar10 + 8);
    *(undefined ****)((long)pppuVar10 + 8) = pppuVar12;
    _objc_release(uVar11);
    _objc_retain(pppuVar13);
    uVar11 = *(undefined8 *)((long)pppuVar10 + 0x10);
    *(undefined ****)((long)pppuVar10 + 0x10) = pppuVar13;
    _objc_release(uVar11);
    _objc_retain(uVar14);
    uVar11 = *(undefined8 *)((long)pppuVar10 + 0x18);
    *(undefined8 *)((long)pppuVar10 + 0x18) = uVar14;
    _objc_release(uVar11);
  }
  _objc_release(uVar14);
  _objc_release(pppuVar13);
  _objc_release(pppuVar12);
  return (undefined1 *)pppuVar10;
}



/* Entry: 10af49c40; end: 10af49d0b; -[SCOneTapLoginRepositoryLogger initWithUserNotTrackedLogger:grapheneRegistry:installServices:] */

undefined1 *
FUN_10af49c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112702b20;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af49d0c; end: 10af49d73; -[SCOneTapLoginRepositoryLogger logRecordLoadAttempt] */

void FUN_10af49d0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126deaf0;
  _objc_opt_new(PTR_PTR_1126deaf0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c072f80(uVar2);
  func_0x00010c1b10c0(puVar1,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af49d74; end: 10af49def; -[SCOneTapLoginRepositoryLogger logRecordLoadErrorWithStatus:] */

void FUN_10af49d74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126deaf8;
  _objc_opt_new(PTR_PTR_1126deaf8);
  func_0x00010c20a3c0();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c072f80(uVar2);
  func_0x00010c1b10c0(puVar1,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af49df0; end: 10af49e6b; -[SCOneTapLoginRepositoryLogger logRecordLoadSuccessWithNumberOfAccounts:] */

void FUN_10af49df0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126deb00;
  _objc_opt_new(PTR_PTR_1126deb00);
  func_0x00010c1cf880();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c072f80(uVar2);
  func_0x00010c1b10c0(puVar1,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af49e6c; end: 10af4a017; -[SCOneTapLoginRepositoryLogger logRecordReadSuccess:experimentId:userId:hasToken:] */

void FUN_10af49e6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126deb08;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c20ea40();
  _objc_release(param_3);
  func_0x00010c198a80(puVar1,param_2,param_4);
  func_0x00010c1a7120(puVar1,param_2,param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c072f80(uVar2);
  func_0x00010c1b10c0(puVar1,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2a00();
  _objc_release(param_5);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126deb10;
  func_0x00010c0ee060(PTR_PTR_1126deb10);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110f3a158,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c0e87e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4a018; end: 10af4a1c3; -[SCOneTapLoginRepositoryLogger logRecordCopiedSuccess:experimentId:userId:hasToken:] */

void FUN_10af4a018(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126deb18;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c20ea40();
  _objc_release(param_3);
  func_0x00010c198a80(puVar1,param_2,param_4);
  func_0x00010c1a7120(puVar1,param_2,param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c072f80(uVar2);
  func_0x00010c1b10c0(puVar1,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2a00();
  _objc_release(param_5);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126deb10;
  func_0x00010c0ee040(PTR_PTR_1126deb10);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110f3a158,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c0e87e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4a1c4; end: 10af4a28b; -[SCOneTapLoginRepositoryLogger logRecordStoreAttempt:experimentId:userId:] */

void FUN_10af4a1c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126deb20;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c20ea40();
  _objc_release(param_3);
  func_0x00010c198a80(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c21e4c0(puVar1,param_2,param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2a00();
  _objc_release(param_5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4a28c; end: 10af4a357; -[SCOneTapLoginRepositoryLogger logRecordStoreErrorWithStatus:userId:experimentId:hasToken:] */

void FUN_10af4a28c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126deb28;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c21e4c0();
  func_0x00010c20a3c0(puVar1,param_2,(long)(int)param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2a00();
  _objc_release(param_4);
  _objc_release(uVar2);
  func_0x00010be56ac0(param_1,param_2,param_5,param_6,param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4a358; end: 10af4a45b; -[SCOneTapLoginRepositoryLogger logRecordStoreSuccessWithNumberOfAccounts:userId:studyName:experimentId:hasToken:] */

void FUN_10af4a358(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126deb30;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c21e4c0();
  func_0x00010c1cf880(puVar1,param_2,param_3);
  func_0x00010c20ea40(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c198a80(puVar1,param_2,param_6);
  func_0x00010c1a7120(puVar1,param_2,param_7);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2a00();
  _objc_release(param_4);
  _objc_release(uVar2);
  func_0x00010be56ac0(param_1,param_2,param_6,param_7,0);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af4a45c; end: 10af4a5d3; -[SCOneTapLoginRepositoryLogger _logOtlKeychainWrittenWithExperimentId:hasToken:status:] */

void FUN_10af4a45c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126deb10;
  _objc_retain(param_3);
  func_0x00010c0ee080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110f3a158,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daf4d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e87e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10af4a5d4; end: 10af4a60f; -[SCOneTapLoginRepositoryLogger .cxx_destruct] */

void FUN_10af4a5d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af4a610; end: 10af4a943; -[SCOneTapLoginMultiAccountRepositoriesImpl initWithPreferences:passwordHashRepository:userNotTrackedLogger:oneTapLoginRepositoryLogger:configMetric:deviceIdentifierProvider:applicationLifecycleEvents:authNotificationExtensionUserDefaults:] */

undefined8 *
FUN_10af4a610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112702b28;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    lVar4 = puVar1[1];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e8840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar5 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
      uVar2 = puVar1[1];
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d4a60();
      _objc_release(uVar2);
      _objc_release(puVar3);
    }
    func_0x00010be8c5a0(puVar1);
    func_0x00010bde9c60(puVar1);
    func_0x00010bde9a40(puVar1);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_9;
    func_0x00010bf75dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar6 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[10];
    puVar1[10] = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10af4a944; end: 10af4aa37;  */

void FUN_10af4a944(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126deb38;
  _objc_alloc(PTR_PTR_1126deb38);
  puVar2 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fa0(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f3a198);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af4aa38; end: 10af4aa77; -[SCOneTapLoginMultiAccountRepositoriesImpl hasUnexpiredOneTapLogin] */

bool FUN_10af4aa38(long param_1)

{
  long lVar1;
  
  func_0x00010c27fa60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 10af4aa78; end: 10af4aabf; -[SCOneTapLoginMultiAccountRepositoriesImpl oneTapLoginUserIds] */

void FUN_10af4aa78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e8840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af4aac0; end: 10af4ab3b; -[SCOneTapLoginMultiAccountRepositoriesImpl unexpiredOneTapLoginUserIds] */

void FUN_10af4aac0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0e8840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000107c31910();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


