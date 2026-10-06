/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bc873c4; end: 10bc873cb; -[SCRegistrationInfo verificationResult] */

undefined8 FUN_10bc873c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bc873cc; end: 10bc873d7; -[SCRegistrationInfo .cxx_destruct] */

void FUN_10bc873cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc873d8; end: 10bc87453;  */

undefined * FUN_10bc873d8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fda30 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_111026c78,
                        &UNK_10e6036a8,&UNK_10e6036f0,5,FUN_10bc87454,0);
    do {
      if (puRam00000001137fda30 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fda30;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fda30,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fda30 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fda30;
}



/* Entry: 10bc87454; end: 10bc8745f;  */

bool FUN_10bc87454(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10bc87460; end: 10bc874db;  */

undefined * FUN_10bc87460(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fda38 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_111026c98,
                        &UNK_10e603704,&UNK_10e603774,7,FUN_10bc874dc,0);
    do {
      if (puRam00000001137fda38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fda38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fda38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fda38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fda38;
}



/* Entry: 10bc874dc; end: 10bc874e7;  */

bool FUN_10bc874dc(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10bc874e8; end: 10bc87563;  */

undefined * FUN_10bc874e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fda40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_111026cb8,
                        &UNK_10e603790,&UNK_10e6037b8,4,FUN_10bc87564,0);
    do {
      if (puRam00000001137fda40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fda40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fda40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fda40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fda40;
}



/* Entry: 10bc87564; end: 10bc8756f;  */

bool FUN_10bc87564(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10bc87570; end: 10bc875eb;  */

undefined * FUN_10bc87570(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fda48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_111026cd8,
                        &UNK_10e6037c8,&UNK_10e6037e4,3,FUN_10bc875ec,0);
    do {
      if (puRam00000001137fda48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fda48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fda48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fda48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fda48;
}



/* Entry: 10bc875ec; end: 10bc875f7;  */

bool FUN_10bc875ec(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10bc875f8; end: 10bc87673;  */

undefined * FUN_10bc875f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fda50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_111026cf8,
                        &UNK_10e6037f0,&UNK_10e603858,3,FUN_10bc87674,0);
    do {
      if (puRam00000001137fda50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fda50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fda50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fda50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fda50;
}



/* Entry: 10bc87674; end: 10bc8767f;  */

bool FUN_10bc87674(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10bc87680; end: 10bc876fb;  */

undefined * FUN_10bc87680(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fda58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_111026d18,
                        &UNK_10e603864,&UNK_10e603880,2,FUN_10bc876fc,0);
    do {
      if (puRam00000001137fda58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fda58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fda58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fda58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fda58;
}



/* Entry: 10bc876fc; end: 10bc87707;  */

bool FUN_10bc876fc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10bc87708; end: 10bc87797; +[SCJanusAppChallengeData descriptor] */

undefined * FUN_10bc87708(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fda60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2ca20,
                        &PTR____CFConstantStringClassReference_111026d38,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113401f30,0x11,0x80,0x1c);
    func_0x00010c229040();
    puRam00000001137fda60 = puVar1;
  }
  return puRam00000001137fda60;
}



/* Entry: 10bc87798; end: 10bc87823; +[SCJanusTransparentChallenge descriptor] */

undefined * FUN_10bc87798(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fda68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2ca70,
                        &PTR____CFConstantStringClassReference_111026d58,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113400e90,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137fda68 = puVar1;
  }
  return puRam00000001137fda68;
}



/* Entry: 10bc87824; end: 10bc878b3; +[SCJanusChallengeData descriptor] */

undefined * FUN_10bc87824(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fda70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2cac0,
                        &PTR____CFConstantStringClassReference_111026d78,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113401d30,0x10,0x88,0x1c);
    func_0x00010c229040();
    puRam00000001137fda70 = puVar1;
  }
  return puRam00000001137fda70;
}



/* Entry: 10bc878b4; end: 10bc8793f; +[SCJanusCommunicationChannelChallenge descriptor] */

undefined * FUN_10bc878b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fda78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2cb10,
                        &PTR____CFConstantStringClassReference_111026d98,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113401550,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001137fda78 = puVar1;
  }
  return puRam00000001137fda78;
}



/* Entry: 10bc87940; end: 10bc879cb; +[SCJanusCommunicationChannelInputChallenge descriptor] */

undefined * FUN_10bc87940(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fda80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2cb60,
                        &PTR____CFConstantStringClassReference_111026db8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_s_email_113401ad0,8,0x48,0x1c);
    func_0x00010c229040();
    puRam00000001137fda80 = puVar1;
  }
  return puRam00000001137fda80;
}



/* Entry: 10bc879cc; end: 10bc87a57; +[SCJanusCommunicationChannelVerificationChallenge descriptor] */

undefined * FUN_10bc879cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fda88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2cbb0,
                        &PTR____CFConstantStringClassReference_111026dd8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113401870,6,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001137fda88 = puVar1;
  }
  return puRam00000001137fda88;
}



/* Entry: 10bc87a58; end: 10bc87ae3; +[SCJanusCaptchaChallenge descriptor] */

undefined * FUN_10bc87a58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fda90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d9c0,
                        &PTR____CFConstantStringClassReference_111026df8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113400d30,1,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001137fda90 = puVar1;
  }
  return puRam00000001137fda90;
}



/* Entry: 10bc87ae4; end: 10bc87b67; +[SCJanusCaptchaChallenge_Recaptcha descriptor] */

undefined * FUN_10bc87ae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fda98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d9e8,
                        &PTR____CFConstantStringClassReference_111026e18,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113400d50,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137fda98 = puVar1;
  }
  return puRam00000001137fda98;
}



/* Entry: 10bc87b68; end: 10bc87bcf; +[SCJanusCaptchaChallengeAnswer descriptor] */

void FUN_10bc87b68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdaa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2cc50,
                        &PTR____CFConstantStringClassReference_111026e38,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_s_payload_113400ed0,2,0x18,0x1c);
    puRam00000001137fdaa0 = puVar1;
  }
  return;
}



/* Entry: 10bc87bd0; end: 10bc87c6b; +[SCJanusWebViewChallenge descriptor] */

undefined * FUN_10bc87bd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdaa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2cca0,
                        &PTR____CFConstantStringClassReference_111026e58,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_s_URL_113401930,6,0x30,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10e603888);
    puRam00000001137fdaa8 = puVar1;
  }
  return puRam00000001137fdaa8;
}



/* Entry: 10bc87c6c; end: 10bc87cd3; +[SCJanusPasskeyAuthenticationChallenge descriptor] */

void FUN_10bc87c6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdab0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2ccf0,
                        &PTR____CFConstantStringClassReference_111026e78,
                        &PTR_s_snapchat_janus_api_113400d18,
                        &PTR_s_passkeyAuthenticationOptions_113400d70,1,0x10,0x1c);
    puRam00000001137fdab0 = puVar1;
  }
  return;
}



/* Entry: 10bc87cd4; end: 10bc87d3b; +[SCJanusPasskeyEnrollmentChallenge descriptor] */

void FUN_10bc87cd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdab8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2cd40,
                        &PTR____CFConstantStringClassReference_111026e98,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_1134015d0,4,0x20,0x1c);
    puRam00000001137fdab8 = puVar1;
  }
  return;
}



/* Entry: 10bc87d3c; end: 10bc87da3; +[SCJanusOTPChallenge descriptor] */

void FUN_10bc87d3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdac0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2cd90,
                        &PTR____CFConstantStringClassReference_111026eb8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_1134019f0,7,0x38,0x1c);
    puRam00000001137fdac0 = puVar1;
  }
  return;
}



/* Entry: 10bc87da4; end: 10bc87e0b; +[SCJanusVendorIntegrityChallenge descriptor] */

void FUN_10bc87da4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdac8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2cde0,
                        &PTR____CFConstantStringClassReference_111026ed8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113400f10,2,0x10,0x1c);
    puRam00000001137fdac8 = puVar1;
  }
  return;
}



/* Entry: 10bc87e0c; end: 10bc87e73; +[SCJanusPasswordChallenge descriptor] */

void FUN_10bc87e0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdad0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2ce30,
                        &PTR____CFConstantStringClassReference_111026ef8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113400f50,2,0x18,0x1c);
    puRam00000001137fdad0 = puVar1;
  }
  return;
}



/* Entry: 10bc87e74; end: 10bc87edb; +[SCJanusSecurityQuestionChallenge descriptor] */

void FUN_10bc87e74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdad8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2ce80,
                        &PTR____CFConstantStringClassReference_111026f18,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113400f90,2,0x10,0x1c);
    puRam00000001137fdad8 = puVar1;
  }
  return;
}



/* Entry: 10bc87edc; end: 10bc87f47; +[SCJanusTIVChallenge descriptor] */

void FUN_10bc87edc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdae0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2ced0,
                        &PTR____CFConstantStringClassReference_111026f38,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113401bd0,0xb,0x58,0x1c);
    puRam00000001137fdae0 = puVar1;
  }
  return;
}



/* Entry: 10bc87f48; end: 10bc87faf; +[SCJanusTwoFAChallenge descriptor] */

void FUN_10bc87f48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdae8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2cf20,
                        &PTR____CFConstantStringClassReference_111026f58,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113401650,4,0x28,0x1c);
    puRam00000001137fdae8 = puVar1;
  }
  return;
}



/* Entry: 10bc87fb0; end: 10bc88017; +[SCJanusTOTPChallenge descriptor] */

void FUN_10bc87fb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdaf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2cf70,
                        &PTR____CFConstantStringClassReference_111026f78,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_s_reason_1134016d0,4,0x18,0x1c);
    puRam00000001137fdaf0 = puVar1;
  }
  return;
}



/* Entry: 10bc88018; end: 10bc8807f; +[SCJanusInternalIdentityVerificationChallenge descriptor] */

void FUN_10bc88018(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdaf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2cfc0,
                        &PTR____CFConstantStringClassReference_111026f98,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_s_authenticationSessionId_113400d90
                        ,1,0x10,0x1c);
    puRam00000001137fdaf8 = puVar1;
  }
  return;
}



/* Entry: 10bc88080; end: 10bc880e7; +[SCJanusSelectCommunicationChannel descriptor] */

void FUN_10bc88080(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d010,
                        &PTR____CFConstantStringClassReference_111026fb8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_s_phone_113400fd0,2,0x18,0x1c);
    puRam00000001137fdb00 = puVar1;
  }
  return;
}



/* Entry: 10bc880e8; end: 10bc88177; +[SCJanusAppChallengeAnswer descriptor] */

undefined * FUN_10bc880e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d060,
                        &PTR____CFConstantStringClassReference_111026fd8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113402150,0x11,0x90,0x1c);
    func_0x00010c229040();
    puRam00000001137fdb08 = puVar1;
  }
  return puRam00000001137fdb08;
}



/* Entry: 10bc88178; end: 10bc88203; +[SCJanusTransparentChallengeAnswer descriptor] */

undefined * FUN_10bc88178(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d0b0,
                        &PTR____CFConstantStringClassReference_111026ff8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113401010,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137fdb10 = puVar1;
  }
  return puRam00000001137fdb10;
}



/* Entry: 10bc88204; end: 10bc88293; +[SCJanusChallengeAnswer descriptor] */

undefined * FUN_10bc88204(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d100,
                        &PTR____CFConstantStringClassReference_111027018,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113402370,0x11,0x90,0x1c);
    func_0x00010c229040();
    puRam00000001137fdb18 = puVar1;
  }
  return puRam00000001137fdb18;
}



/* Entry: 10bc88294; end: 10bc8831f; +[SCJanusCommunicationChannelChallengeAnswer descriptor] */

undefined * FUN_10bc88294(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d150,
                        &PTR____CFConstantStringClassReference_111027038,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_s_email_113401050,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137fdb20 = puVar1;
  }
  return puRam00000001137fdb20;
}



/* Entry: 10bc88320; end: 10bc883ab; +[SCJanusCommunicationChannelInputAnswer descriptor] */

undefined * FUN_10bc88320(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2da10,
                        &PTR____CFConstantStringClassReference_111027058,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_s_email_1134017d0,5,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001137fdb28 = puVar1;
  }
  return puRam00000001137fdb28;
}



/* Entry: 10bc883ac; end: 10bc8842f; +[SCJanusCommunicationChannelInputAnswer_PhoneInput descriptor] */

undefined * FUN_10bc883ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2da38,
                        &PTR____CFConstantStringClassReference_111027078,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_s_phoneNumber_113401310,3,0x18,0x1c
                       );
    func_0x00010c228780();
    puRam00000001137fdb30 = puVar1;
  }
  return puRam00000001137fdb30;
}



/* Entry: 10bc88430; end: 10bc884b3; +[SCJanusCommunicationChannelInputAnswer_SkipRequest descriptor] */

undefined * FUN_10bc88430(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2da60,
                        &PTR____CFConstantStringClassReference_111027098,
                        &PTR_s_snapchat_janus_api_113400d18,0,0,4,0x1c);
    func_0x00010c228780();
    puRam00000001137fdb38 = puVar1;
  }
  return puRam00000001137fdb38;
}



/* Entry: 10bc884b4; end: 10bc8853f; +[SCJanusCommunicationChannelVerificationAnswer descriptor] */

undefined * FUN_10bc884b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2da88,
                        &PTR____CFConstantStringClassReference_1110270b8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113401370,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137fdb40 = puVar1;
  }
  return puRam00000001137fdb40;
}



/* Entry: 10bc88540; end: 10bc885c3; +[SCJanusCommunicationChannelVerificationAnswer_ResendRequest descriptor] */

undefined * FUN_10bc88540(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2dab0,
                        &PTR____CFConstantStringClassReference_1110270d8,
                        &PTR_s_snapchat_janus_api_113400d18,0,0,4,0x1c);
    func_0x00010c228780();
    puRam00000001137fdb48 = puVar1;
  }
  return puRam00000001137fdb48;
}



/* Entry: 10bc885c4; end: 10bc88647; +[SCJanusCommunicationChannelVerificationAnswer_SkipRequest descriptor] */

undefined * FUN_10bc885c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2dad8,
                        &PTR____CFConstantStringClassReference_111027098,
                        &PTR_s_snapchat_janus_api_113400d18,0,0,4,0x1c);
    func_0x00010c228780();
    puRam00000001137fdb50 = puVar1;
  }
  return puRam00000001137fdb50;
}



/* Entry: 10bc88648; end: 10bc886af; +[SCJanusWebViewChallengeAnswer descriptor] */

void FUN_10bc88648(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d290,
                        &PTR____CFConstantStringClassReference_1110270f8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113401090,2,0x10,0x1c);
    puRam00000001137fdb58 = puVar1;
  }
  return;
}



/* Entry: 10bc886b0; end: 10bc88717; +[SCJanusRequestResumeChallengeLoopAnswer descriptor] */

void FUN_10bc886b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d2e0,
                        &PTR____CFConstantStringClassReference_111027118,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_s_reason_113400db0,1,8,0x1c);
    puRam00000001137fdb60 = puVar1;
  }
  return;
}



/* Entry: 10bc88718; end: 10bc8877f; +[SCJanusOTPChallengeAnswer descriptor] */

void FUN_10bc88718(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d330,
                        &PTR____CFConstantStringClassReference_111027138,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_1134013d0,3,0x18,0x1c);
    puRam00000001137fdb68 = puVar1;
  }
  return;
}



/* Entry: 10bc88780; end: 10bc887fb; +[SCJanusOTPChallengeAnswer_ResendRequest descriptor] */

undefined * FUN_10bc88780(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d380,
                        &PTR____CFConstantStringClassReference_1110270d8,
                        &PTR_s_snapchat_janus_api_113400d18,0,0,4,0x1c);
    func_0x00010c228780();
    puRam00000001137fdb70 = puVar1;
  }
  return puRam00000001137fdb70;
}



/* Entry: 10bc887fc; end: 10bc88887; +[SCJanusOTPChallengeAnswerV2 descriptor] */

undefined * FUN_10bc887fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2db00,
                        &PTR____CFConstantStringClassReference_111027158,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_1134010d0,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137fdb78 = puVar1;
  }
  return puRam00000001137fdb78;
}



/* Entry: 10bc88888; end: 10bc8890b; +[SCJanusOTPChallengeAnswerV2_Payload descriptor] */

undefined * FUN_10bc88888(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2db28,
                        &PTR____CFConstantStringClassReference_110dae2f8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113401110,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137fdb80 = puVar1;
  }
  return puRam00000001137fdb80;
}



/* Entry: 10bc8890c; end: 10bc8898f; +[SCJanusOTPChallengeAnswerV2_ResendRequest descriptor] */

undefined * FUN_10bc8890c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2db50,
                        &PTR____CFConstantStringClassReference_1110270d8,
                        &PTR_s_snapchat_janus_api_113400d18,0,0,4,0x1c);
    func_0x00010c228780();
    puRam00000001137fdb88 = puVar1;
  }
  return puRam00000001137fdb88;
}



/* Entry: 10bc88990; end: 10bc889f7; +[SCJanusPasswordChallengeAnswer descriptor] */

void FUN_10bc88990(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d448,
                        &PTR____CFConstantStringClassReference_111027178,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_s_password_113400dd0,1,0x10,0x1c);
    puRam00000001137fdb90 = puVar1;
  }
  return;
}



/* Entry: 10bc889f8; end: 10bc88a83; +[SCJanusSecurityQuestionChallengeAnswer descriptor] */

undefined * FUN_10bc889f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdb98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d498,
                        &PTR____CFConstantStringClassReference_111027198,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113401430,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137fdb98 = puVar1;
  }
  return puRam00000001137fdb98;
}



/* Entry: 10bc88a84; end: 10bc88aeb; +[SCJanusTIVChallengeAnswer descriptor] */

void FUN_10bc88a84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdba0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d4e8,
                        &PTR____CFConstantStringClassReference_1110271b8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_s_transactionId_113401750,4,0x28,
                        0x1c);
    puRam00000001137fdba0 = puVar1;
  }
  return;
}



/* Entry: 10bc88aec; end: 10bc88b67; +[SCJanusTIVChallengeAnswer_ResendRequest descriptor] */

undefined * FUN_10bc88aec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdba8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d538,
                        &PTR____CFConstantStringClassReference_1110270d8,
                        &PTR_s_snapchat_janus_api_113400d18,0,0,4,0x1c);
    func_0x00010c228780();
    puRam00000001137fdba8 = puVar1;
  }
  return puRam00000001137fdba8;
}



/* Entry: 10bc88b68; end: 10bc88bcf; +[SCJanusTwoFAChallengeAnswer descriptor] */

void FUN_10bc88b68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdbb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d588,
                        &PTR____CFConstantStringClassReference_1110271d8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_s_twoFaCode_113401490,3,0x10,0x1c);
    puRam00000001137fdbb0 = puVar1;
  }
  return;
}



/* Entry: 10bc88bd0; end: 10bc88c5b; +[SCJanusTOTPChallengeAnswer descriptor] */

undefined * FUN_10bc88bd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdbb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2db78,
                        &PTR____CFConstantStringClassReference_1110271f8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113401150,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137fdbb8 = puVar1;
  }
  return puRam00000001137fdbb8;
}



/* Entry: 10bc88c5c; end: 10bc88cdf; +[SCJanusTOTPChallengeAnswer_Payload descriptor] */

undefined * FUN_10bc88c5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdbc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2dba0,
                        &PTR____CFConstantStringClassReference_110dae2f8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113401190,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137fdbc0 = puVar1;
  }
  return puRam00000001137fdbc0;
}



/* Entry: 10bc88ce0; end: 10bc88d63; +[SCJanusTOTPChallengeAnswer_ChangeChallengeRequest descriptor] */

undefined * FUN_10bc88ce0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdbc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2dbc8,
                        &PTR____CFConstantStringClassReference_111027218,
                        &PTR_s_snapchat_janus_api_113400d18,0,0,4,0x1c);
    func_0x00010c228780();
    puRam00000001137fdbc8 = puVar1;
  }
  return puRam00000001137fdbc8;
}



/* Entry: 10bc88d64; end: 10bc88dcb; +[SCJanusSelectCommunicationChannelAnswer descriptor] */

void FUN_10bc88d64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdbd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d650,
                        &PTR____CFConstantStringClassReference_111027238,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113400df0,1,8,0x1c);
    puRam00000001137fdbd0 = puVar1;
  }
  return;
}



/* Entry: 10bc88dcc; end: 10bc88e33; +[SCJanusInternalIdentityVerificationChallengeAnswer descriptor] */

void FUN_10bc88dcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdbd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d6a0,
                        &PTR____CFConstantStringClassReference_111027258,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_1134011d0,2,0x18,0x1c);
    puRam00000001137fdbd8 = puVar1;
  }
  return;
}



/* Entry: 10bc88e34; end: 10bc88e9b; +[SCJanusVendorIntegrityChallengeAnswer descriptor] */

void FUN_10bc88e34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdbe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d6f0,
                        &PTR____CFConstantStringClassReference_111027278,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113401210,2,0x10,0x1c);
    puRam00000001137fdbe0 = puVar1;
  }
  return;
}



/* Entry: 10bc88e9c; end: 10bc88f03; +[SCJanusPasskeyAuthenticationChallengeAnswer descriptor] */

void FUN_10bc88e9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdbe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d740,
                        &PTR____CFConstantStringClassReference_111027298,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113400e10,1,0x10,0x1c);
    puRam00000001137fdbe8 = puVar1;
  }
  return;
}



/* Entry: 10bc88f04; end: 10bc88f8f; +[SCJanusPasskeyEnrollmentChallengeAnswer descriptor] */

undefined * FUN_10bc88f04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdbf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d790,
                        &PTR____CFConstantStringClassReference_1110272b8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_1134014f0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137fdbf0 = puVar1;
  }
  return puRam00000001137fdbf0;
}



/* Entry: 10bc88f90; end: 10bc8900b; +[SCJanusEnterpriseSSOChallenge descriptor] */

undefined * FUN_10bc88f90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdbf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d7e0,
                        &PTR____CFConstantStringClassReference_1110272d8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113401250,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fdbf8 = puVar1;
  }
  return puRam00000001137fdbf8;
}



/* Entry: 10bc8900c; end: 10bc89073; +[SCJanusEnterpriseSSOChallengeAnswer descriptor] */

void FUN_10bc8900c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdc00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d830,
                        &PTR____CFConstantStringClassReference_1110272f8,
                        &PTR_s_snapchat_janus_api_113400d18,0,0,4,0x1c);
    puRam00000001137fdc00 = puVar1;
  }
  return;
}



/* Entry: 10bc89074; end: 10bc890db; +[SCJanusChangeUsernameChallenge descriptor] */

void FUN_10bc89074(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdc08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d880,
                        &PTR____CFConstantStringClassReference_111027318,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_s_suggestionsArray_113400e30,1,0x10
                        ,0x1c);
    puRam00000001137fdc08 = puVar1;
  }
  return;
}



/* Entry: 10bc890dc; end: 10bc89143; +[SCJanusChangeUsernameChallengeAnswer descriptor] */

void FUN_10bc890dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdc10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d8d0,
                        &PTR____CFConstantStringClassReference_111027338,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_DAT_113400e50,1,0x10,0x1c);
    puRam00000001137fdc10 = puVar1;
  }
  return;
}



/* Entry: 10bc89144; end: 10bc891ab; +[SCJanusSilentPhoneVerificationChallenge descriptor] */

void FUN_10bc89144(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdc18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2d920,
                        &PTR____CFConstantStringClassReference_111027358,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_s_provider_113400e70,1,8,0x1c);
    puRam00000001137fdc18 = puVar1;
  }
  return;
}



/* Entry: 10bc891ac; end: 10bc89237; +[SCJanusSilentPhoneVerificationChallengeAnswer descriptor] */

undefined * FUN_10bc891ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdc20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2dbf0,
                        &PTR____CFConstantStringClassReference_111027378,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_s_payload_113401290,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137fdc20 = puVar1;
  }
  return puRam00000001137fdc20;
}



/* Entry: 10bc89238; end: 10bc892bb; +[SCJanusSilentPhoneVerificationChallengeAnswer_Payload descriptor] */

undefined * FUN_10bc89238(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdc28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2dc18,
                        &PTR____CFConstantStringClassReference_110dae2f8,
                        &PTR_s_snapchat_janus_api_113400d18,&PTR_s_token_1134012d0,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137fdc28 = puVar1;
  }
  return puRam00000001137fdc28;
}



/* Entry: 10bc892bc; end: 10bc8933f; +[SCJanusSilentPhoneVerificationChallengeAnswer_TokenUnavailable descriptor] */

undefined * FUN_10bc892bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdc30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2dc40,
                        &PTR____CFConstantStringClassReference_111027398,
                        &PTR_s_snapchat_janus_api_113400d18,0,0,4,0x1c);
    func_0x00010c228780();
    puRam00000001137fdc30 = puVar1;
  }
  return puRam00000001137fdc30;
}



/* Entry: 10bc89340; end: 10bc893bb;  */

undefined * FUN_10bc89340(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fdc38 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_1110273b8,
                        &UNK_10e603898,&UNK_10e603a08,0x17,FUN_10bc893bc,0);
    do {
      if (puRam00000001137fdc38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fdc38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fdc38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fdc38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fdc38;
}



/* Entry: 10bc893bc; end: 10bc893c7;  */

bool FUN_10bc893bc(uint param_1)

{
  return param_1 < 0x17;
}



/* Entry: 10bc893c8; end: 10bc89443;  */

undefined * FUN_10bc893c8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fdc40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_1110273d8,
                        &UNK_10e603a64,&UNK_10e603aa4,7,FUN_10bc89444,0);
    do {
      if (puRam00000001137fdc40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fdc40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fdc40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fdc40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fdc40;
}



/* Entry: 10bc89444; end: 10bc8944f;  */

bool FUN_10bc89444(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10bc89450; end: 10bc894cb;  */

undefined * FUN_10bc89450(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fdc48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_1110273f8,
                        &UNK_10e603ac0,&UNK_10e603ba8,8,FUN_10bc894cc,0);
    do {
      if (puRam00000001137fdc48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fdc48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fdc48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fdc48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fdc48;
}



/* Entry: 10bc894cc; end: 10bc894d7;  */

bool FUN_10bc894cc(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10bc894d8; end: 10bc89553;  */

undefined * FUN_10bc894d8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fdc50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_111027418,
                        &UNK_10e603bc8,&UNK_10e603bdc,2,FUN_10bc89554,0);
    do {
      if (puRam00000001137fdc50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fdc50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fdc50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fdc50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fdc50;
}



/* Entry: 10bc89554; end: 10bc8955f;  */

bool FUN_10bc89554(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10bc89560; end: 10bc895db;  */

undefined * FUN_10bc89560(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fdc58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_111027438,
                        &UNK_10e603be4,&UNK_10e603c80,6,FUN_10bc895dc,0);
    do {
      if (puRam00000001137fdc58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fdc58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fdc58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fdc58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fdc58;
}



/* Entry: 10bc895dc; end: 10bc895e7;  */

bool FUN_10bc895dc(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10bc895e8; end: 10bc8964f; +[SCJanusChallengeOrchestrationRequestHeader descriptor] */

void FUN_10bc895e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdc60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2dce0,
                        &PTR____CFConstantStringClassReference_111027458,
                        &PTR_s_snapchat_janus_api_1134025a0,&PTR_s_blizzardClientId_113402738,3,0x20
                        ,0x1c);
    puRam00000001137fdc60 = puVar1;
  }
  return;
}



/* Entry: 10bc89650; end: 10bc896b7; +[SCJanusDeniedData descriptor] */

void FUN_10bc89650(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdc68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2dd30,
                        &PTR____CFConstantStringClassReference_111027478,
                        &PTR_s_snapchat_janus_api_1134025a0,&PTR_s_humanReadableMessage_1134025f8,2,
                        0x10,0x1c);
    puRam00000001137fdc68 = puVar1;
  }
  return;
}



/* Entry: 10bc896b8; end: 10bc8971f; +[SCJanusChallengeOrchestrationErrorData descriptor] */

void FUN_10bc896b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdc70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2dd80,
                        &PTR____CFConstantStringClassReference_111027498,
                        &PTR_s_snapchat_janus_api_1134025a0,
                        &PTR_s_humanReadableErrorMessage_113402638,2,0x10,0x1c);
    puRam00000001137fdc70 = puVar1;
  }
  return;
}



/* Entry: 10bc89720; end: 10bc89787; +[SCJanusUnavailableChallenge descriptor] */

void FUN_10bc89720(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdc78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2ddd0,
                        &PTR____CFConstantStringClassReference_1110274b8,
                        &PTR_s_snapchat_janus_api_1134025a0,&PTR_DAT_113402678,2,0xc,0x1c);
    puRam00000001137fdc78 = puVar1;
  }
  return;
}



/* Entry: 10bc89788; end: 10bc897ef; +[SCJanusUnavailableChallenges descriptor] */

void FUN_10bc89788(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdc80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2de20,
                        &PTR____CFConstantStringClassReference_1110274d8,
                        &PTR_s_snapchat_janus_api_1134025a0,&PTR_DAT_1134026b8,2,0x18,0x1c);
    puRam00000001137fdc80 = puVar1;
  }
  return;
}



/* Entry: 10bc897f0; end: 10bc89857; +[SCJanusEmailDomainAllowlist descriptor] */

void FUN_10bc897f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdc88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2de70,
                        &PTR____CFConstantStringClassReference_1110274f8,
                        &PTR_s_snapchat_janus_api_1134025a0,&PTR_DAT_1134026f8,2,0x18,0x1c);
    puRam00000001137fdc88 = puVar1;
  }
  return;
}



/* Entry: 10bc89858; end: 10bc898e3; +[SCJanusAlternativeChallengeOption descriptor] */

undefined * FUN_10bc89858(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdc90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2dec0,
                        &PTR____CFConstantStringClassReference_111027518,
                        &PTR_s_snapchat_janus_api_1134025a0,&PTR_DAT_1134025b8,1,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001137fdc90 = puVar1;
  }
  return puRam00000001137fdc90;
}



/* Entry: 10bc898e4; end: 10bc8995f; +[SCJanusAlternativeChallengeOption_SingleButtonCycling descriptor] */

undefined * FUN_10bc898e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdc98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2df10,
                        &PTR____CFConstantStringClassReference_111027538,
                        &PTR_s_snapchat_janus_api_1134025a0,0,0,4,0x1c);
    func_0x00010c228780();
    puRam00000001137fdc98 = puVar1;
  }
  return puRam00000001137fdc98;
}



/* Entry: 10bc89960; end: 10bc899eb; +[SCJanusAlternativeChallengeRequest descriptor] */

undefined * FUN_10bc89960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdca0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2df60,
                        &PTR____CFConstantStringClassReference_111027558,
                        &PTR_s_snapchat_janus_api_1134025a0,&PTR_DAT_1134025d8,1,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001137fdca0 = puVar1;
  }
  return puRam00000001137fdca0;
}



/* Entry: 10bc899ec; end: 10bc89a67; +[SCJanusAlternativeChallengeRequest_GetAlternativeChallenge descriptor] */

undefined * FUN_10bc899ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdca8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2dfb0,
                        &PTR____CFConstantStringClassReference_111027578,
                        &PTR_s_snapchat_janus_api_1134025a0,0,0,4,0x1c);
    func_0x00010c228780();
    puRam00000001137fdca8 = puVar1;
  }
  return puRam00000001137fdca8;
}



/* Entry: 10bc89a68; end: 10bc89acf; +[SCJanusPasskeyAuthenticationPayload descriptor] */

void FUN_10bc89a68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdcb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e050,
                        &PTR____CFConstantStringClassReference_111027598,
                        &PTR_s_snapchat_janus_api_113402798,&PTR_DAT_1134027b0,4,0x28,0x1c);
    puRam00000001137fdcb0 = puVar1;
  }
  return;
}



/* Entry: 10bc89ad0; end: 10bc89b37; +[SCJanusPasskeyAuthenticationOptions descriptor] */

void FUN_10bc89ad0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdcb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e0f0,
                        &PTR____CFConstantStringClassReference_1110275b8,
                        &PTR_s_snapchat_janus_api_113402830,&PTR_DAT_113402848,5,0x30,0x1c);
    puRam00000001137fdcb8 = puVar1;
  }
  return;
}



/* Entry: 10bc89b38; end: 10bc89b9f; +[SCJanusPasskeyCredentialDescriptor descriptor] */

void FUN_10bc89b38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdcc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e190,
                        &PTR____CFConstantStringClassReference_1110275d8,
                        &PTR_s_snapchat_janus_api_1134028e8,&PTR_DAT_113402900,1,0x10,0x1c);
    puRam00000001137fdcc0 = puVar1;
  }
  return;
}



/* Entry: 10bc89ba0; end: 10bc89c07; +[SCJanusPasskeyEnrollmentOptions descriptor] */

void FUN_10bc89ba0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdcc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e230,
                        &PTR____CFConstantStringClassReference_1110275f8,
                        &PTR_s_snapchat_janus_api_113402920,&PTR_s_nonce_113402938,4,0x28,0x1c);
    puRam00000001137fdcc8 = puVar1;
  }
  return;
}



/* Entry: 10bc89c08; end: 10bc89c6f; +[RelyingParty descriptor] */

void FUN_10bc89c08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdcd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e2d0,
                        &PTR____CFConstantStringClassReference_111027618,&PTR_DAT_1134029b8,
                        &PTR_s_id_p_1134029d0,1,0x10,0x1c);
    puRam00000001137fdcd0 = puVar1;
  }
  return;
}



/* Entry: 10bc89c70; end: 10bc89d53; +[SCJanusPasskeyEnrollmentPayload descriptor] */

void FUN_10bc89c70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdcd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e370,
                        &PTR____CFConstantStringClassReference_111027638,
                        &PTR_s_snapchat_janus_api_1134029f0,&PTR_DAT_113402a08,2,0x18,0x1c);
    puRam00000001137fdcd8 = puVar1;
  }
  return;
}



/* Entry: 10bc89d54; end: 10bc89d5f;  */

bool FUN_10bc89d54(uint param_1)

{
  return param_1 < 5;
}


