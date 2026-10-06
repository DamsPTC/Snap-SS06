/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10540df64; end: 10540df6f;  */

bool FUN_10540df64(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10540df70; end: 10540dfeb;  */

undefined * FUN_10540df70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbc78 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddaaf8,
                        &UNK_10dda9c48,&UNK_10dda9cf4,0xb,FUN_10540dfec,0);
    do {
      if (puRam00000001136bbc78 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbc78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbc78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbc78 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbc78;
}



/* Entry: 10540dfec; end: 10540e007;  */

uint FUN_10540dfec(uint param_1)

{
  return (uint)(param_1 < 0x11) & 0x1fc0fU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10540e008; end: 10540e06f; +[SCAccountEmailServicePbUpdateEmailRequest descriptor] */

void FUN_10540e008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbc80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36870,
                        &PTR____CFConstantStringClassReference_110ddab18,
                        &PTR_s_snapchat_activation_api_1130d7170,&PTR_s_requestedEmail_1130d7208,5,
                        0x28,0x1c);
    puRam00000001136bbc80 = puVar1;
  }
  return;
}



/* Entry: 10540e070; end: 10540e0fb; +[SCAccountEmailServicePbUpdateEmailResponse descriptor] */

undefined * FUN_10540e070(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbc88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a368c0,
                        &PTR____CFConstantStringClassReference_110ddab38,
                        &PTR_s_snapchat_activation_api_1130d7170,&PTR_s_statusCode_1130d7188,4,0x28,
                        0x1c);
    func_0x00010c229040();
    puRam00000001136bbc88 = puVar1;
  }
  return puRam00000001136bbc88;
}



/* Entry: 10540e0fc; end: 10540e163; +[SCAccountEmailServicePbSuccessData descriptor] */

void FUN_10540e0fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbc90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36960,
                        &PTR____CFConstantStringClassReference_110ddab58,
                        &PTR_s_snapchat_activation_api_1130d72a8,
                        &PTR_s_humanReadableMessage_1130d72c0,1,0x10,0x1c);
    puRam00000001136bbc90 = puVar1;
  }
  return;
}



/* Entry: 10540e164; end: 10540e247; +[SCAccountEmailServicePbErrorData descriptor] */

void FUN_10540e164(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbc98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a369b0,
                        &PTR____CFConstantStringClassReference_110ddab78,
                        &PTR_s_snapchat_activation_api_1130d72a8,
                        &PTR_s_humanReadableErrorMessage_1130d72e0,1,0x10,0x1c);
    puRam00000001136bbc98 = puVar1;
  }
  return;
}



/* Entry: 10540e248; end: 10540e25f;  */

uint FUN_10540e248(uint param_1)

{
  return (uint)(param_1 < 0xc) & 0xfc7U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10540e260; end: 10540e2db;  */

undefined * FUN_10540e260(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbca8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddabb8,
                        &UNK_10dda9dc8,&UNK_10dda9e7c,10,FUN_10540e2dc,0);
    do {
      if (puRam00000001136bbca8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbca8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbca8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbca8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbca8;
}



/* Entry: 10540e2dc; end: 10540e2f3;  */

uint FUN_10540e2dc(uint param_1)

{
  return (uint)(param_1 < 0xd) & 0x1fc7U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10540e2f4; end: 10540e36f;  */

undefined * FUN_10540e2f4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbcb0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddabd8,
                        &UNK_10dda9ea4,&UNK_10dda9f14,7,FUN_10540e370,0);
    do {
      if (puRam00000001136bbcb0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbcb0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbcb0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbcb0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbcb0;
}



/* Entry: 10540e370; end: 10540e387;  */

uint FUN_10540e370(uint param_1)

{
  return (uint)(param_1 < 0xb) & 0x7c3U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10540e388; end: 10540e3ef; +[SCJanusCheckEmailRequest descriptor] */

void FUN_10540e388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbcb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36a50,
                        &PTR____CFConstantStringClassReference_110ddabf8,
                        &PTR_s_snapchat_janus_api_1130d7328,&PTR_s_registrationContext_1130d73c0,2,
                        0x18,0x1c);
    puRam00000001136bbcb8 = puVar1;
  }
  return;
}



/* Entry: 10540e3f0; end: 10540e47b; +[SCJanusCheckEmailResponse descriptor] */

undefined * FUN_10540e3f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbcc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36aa0,
                        &PTR____CFConstantStringClassReference_110ddac18,
                        &PTR_s_snapchat_janus_api_1130d7328,&PTR_s_statusCode_1130d75a0,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bbcc0 = puVar1;
  }
  return puRam00000001136bbcc0;
}



/* Entry: 10540e47c; end: 10540e4f7; +[SCJanusCheckEmailResponse_SuccessData descriptor] */

undefined * FUN_10540e47c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbcc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36af0,
                        &PTR____CFConstantStringClassReference_110ddab58,
                        &PTR_s_snapchat_janus_api_1130d7328,0,0,4,0x1c);
    func_0x00010c228780();
    puRam00000001136bbcc8 = puVar1;
  }
  return puRam00000001136bbcc8;
}



/* Entry: 10540e4f8; end: 10540e573; +[SCJanusCheckEmailResponse_ErrorData descriptor] */

undefined * FUN_10540e4f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbcd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36b40,
                        &PTR____CFConstantStringClassReference_110ddab78,
                        &PTR_s_snapchat_janus_api_1130d7328,&PTR_s_humanReadableMessage_1130d7340,1,
                        0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bbcd0 = puVar1;
  }
  return puRam00000001136bbcd0;
}



/* Entry: 10540e574; end: 10540e5db; +[SCJanusRequestPhoneVerificationCodeRequest descriptor] */

void FUN_10540e574(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbcd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36b90,
                        &PTR____CFConstantStringClassReference_110ddac38,
                        &PTR_s_snapchat_janus_api_1130d7328,&PTR_s_registrationContext_1130d76a0,6,
                        0x38,0x1c);
    puRam00000001136bbcd8 = puVar1;
  }
  return;
}



/* Entry: 10540e5dc; end: 10540e667; +[SCJanusRequestPhoneVerificationCodeResponse descriptor] */

undefined * FUN_10540e5dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36be0,
                        &PTR____CFConstantStringClassReference_110ddac58,
                        &PTR_s_snapchat_janus_api_1130d7328,&PTR_s_statusCode_1130d7620,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bbce0 = puVar1;
  }
  return puRam00000001136bbce0;
}



/* Entry: 10540e668; end: 10540e6e3; +[SCJanusRequestPhoneVerificationCodeResponse_SuccessData descriptor] */

undefined * FUN_10540e668(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbce8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36c30,
                        &PTR____CFConstantStringClassReference_110ddab58,
                        &PTR_s_snapchat_janus_api_1130d7328,&PTR_s_phoneVerifyToken_1130d7400,2,0x18
                        ,0x1c);
    func_0x00010c228780();
    puRam00000001136bbce8 = puVar1;
  }
  return puRam00000001136bbce8;
}



/* Entry: 10540e6e4; end: 10540e75f; +[SCJanusRequestPhoneVerificationCodeResponse_ErrorData descriptor] */

undefined * FUN_10540e6e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbcf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36c80,
                        &PTR____CFConstantStringClassReference_110ddab78,
                        &PTR_s_snapchat_janus_api_1130d7328,&PTR_s_humanReadableMessage_1130d7360,1,
                        0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bbcf0 = puVar1;
  }
  return puRam00000001136bbcf0;
}



/* Entry: 10540e760; end: 10540e7c7; +[SCJanusVerifyPhoneWithCodeRequest descriptor] */

void FUN_10540e760(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbcf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36cd0,
                        &PTR____CFConstantStringClassReference_110ddac78,
                        &PTR_s_snapchat_janus_api_1130d7328,&PTR_s_registrationContext_1130d7480,3,
                        0x20,0x1c);
    puRam00000001136bbcf8 = puVar1;
  }
  return;
}



/* Entry: 10540e7c8; end: 10540e853; +[SCJanusVerifyPhoneWithCodeResponse descriptor] */

undefined * FUN_10540e7c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbd00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36d20,
                        &PTR____CFConstantStringClassReference_110ddac98,
                        &PTR_s_snapchat_janus_api_1130d7328,&PTR_s_statusCode_1130d74e0,3,0x20,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bbd00 = puVar1;
  }
  return puRam00000001136bbd00;
}



/* Entry: 10540e854; end: 10540e8cf; +[SCJanusVerifyPhoneWithCodeResponse_SuccessData descriptor] */

undefined * FUN_10540e854(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbd08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36d70,
                        &PTR____CFConstantStringClassReference_110ddab58,
                        &PTR_s_snapchat_janus_api_1130d7328,&PTR_s_phoneVerifyToken_1130d7440,2,0x18
                        ,0x1c);
    func_0x00010c228780();
    puRam00000001136bbd08 = puVar1;
  }
  return puRam00000001136bbd08;
}



/* Entry: 10540e8d0; end: 10540e94b; +[SCJanusVerifyPhoneWithCodeResponse_ErrorData descriptor] */

undefined * FUN_10540e8d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbd10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36dc0,
                        &PTR____CFConstantStringClassReference_110ddab78,
                        &PTR_s_snapchat_janus_api_1130d7328,&PTR_s_humanReadableMessage_1130d7380,1,
                        0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bbd10 = puVar1;
  }
  return puRam00000001136bbd10;
}



/* Entry: 10540e94c; end: 10540e9d7; +[SCJanusRegisterWithPhoneEmailRequest descriptor] */

undefined * FUN_10540e94c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbd18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36e10,
                        &PTR____CFConstantStringClassReference_110ddacb8,
                        &PTR_s_snapchat_janus_api_1130d7328,&PTR_s_usernamePasswordRequest_1130d7540
                        ,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136bbd18 = puVar1;
  }
  return puRam00000001136bbd18;
}



/* Entry: 10540e9d8; end: 10540ea63; +[SCJanusRegisterWithPhoneEmailResponse descriptor] */

undefined * FUN_10540e9d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbd20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36e60,
                        &PTR____CFConstantStringClassReference_110ddacd8,
                        &PTR_s_snapchat_janus_api_1130d7328,
                        &PTR_s_usernamePasswordResponse_1130d73a0,1,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001136bbd20 = puVar1;
  }
  return puRam00000001136bbd20;
}



/* Entry: 10540ea64; end: 10540eadf;  */

undefined * FUN_10540ea64(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbd28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddacf8,
                        &UNK_10dda9f30,&UNK_10dda9f54,5,FUN_10540eae0,0);
    do {
      if (puRam00000001136bbd28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbd28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbd28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbd28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbd28;
}



/* Entry: 10540eae0; end: 10540eaeb;  */

bool FUN_10540eae0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10540eaec; end: 10540eb67;  */

undefined * FUN_10540eaec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbd30 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddad18,
                        &UNK_10dda9f68,&UNK_10ddaa034,0xb,FUN_10540eb68,0);
    do {
      if (puRam00000001136bbd30 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbd30;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbd30,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbd30 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbd30;
}



/* Entry: 10540eb68; end: 10540eb73;  */

bool FUN_10540eb68(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 10540eb74; end: 10540ebef;  */

undefined * FUN_10540eb74(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbd38 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddad38,
                        &UNK_10ddaa060,&UNK_10ddaa1e4,0x13,FUN_10540ebf0,0);
    do {
      if (puRam00000001136bbd38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbd38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbd38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbd38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbd38;
}



/* Entry: 10540ebf0; end: 10540ec0b;  */

uint FUN_10540ebf0(uint param_1)

{
  return (uint)(param_1 < 0x16) & 0x3ffaf7U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10540ec0c; end: 10540ec87;  */

undefined * FUN_10540ec0c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbd40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddad58,
                        &UNK_10ddaa230,&UNK_10ddaa278,6,FUN_10540ec88,0);
    do {
      if (puRam00000001136bbd40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbd40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbd40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbd40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbd40;
}



/* Entry: 10540ec88; end: 10540ec9f;  */

uint FUN_10540ec88(uint param_1)

{
  return (uint)(param_1 < 0xc) & 0xe07U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10540eca0; end: 10540ed07; +[SCJanusRegisterWithUsernamePasswordRequest descriptor] */

void FUN_10540eca0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbd48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36f00,
                        &PTR____CFConstantStringClassReference_110ddad78,
                        &PTR_s_snapchat_janus_api_1130d7770,&PTR_s_firstName_1130d79c8,0xc,0x58,0x1c
                       );
    puRam00000001136bbd48 = puVar1;
  }
  return;
}



/* Entry: 10540ed08; end: 10540ed6f; +[SCJanusCommunicationChannelConfiguration descriptor] */

void FUN_10540ed08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbd50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36f50,
                        &PTR____CFConstantStringClassReference_110ddad98,
                        &PTR_s_snapchat_janus_api_1130d7770,&PTR_s_isEligibleForFirebase_1130d7788,1
                        ,4,0x1c);
    puRam00000001136bbd50 = puVar1;
  }
  return;
}



/* Entry: 10540ed70; end: 10540edfb; +[SCJanusRegisterWithUsernamePasswordResponse descriptor] */

undefined * FUN_10540ed70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbd58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36fa0,
                        &PTR____CFConstantStringClassReference_110ddadb8,
                        &PTR_s_snapchat_janus_api_1130d7770,&PTR_s_statusCode_1130d78c8,8,0x48,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bbd58 = puVar1;
  }
  return puRam00000001136bbd58;
}



/* Entry: 10540edfc; end: 10540ee33;  */

undefined * FUN_10540edfc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b8b28;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 10540ee34; end: 10540ee9b; +[SCJanusAppRegisterAnswerChallengeRequest descriptor] */

void FUN_10540ee34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbd60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a36ff0,
                        &PTR____CFConstantStringClassReference_110ddadd8,
                        &PTR_s_snapchat_janus_api_1130d7770,&PTR_s_registrationContext_1130d7828,5,
                        0x30,0x1c);
    puRam00000001136bbd60 = puVar1;
  }
  return;
}



/* Entry: 10540ee9c; end: 10540efc3; +[SCJanusAppRegisterAnswerChallengeResponse descriptor] */

undefined * FUN_10540ee9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbd68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37040,
                        &PTR____CFConstantStringClassReference_110ddadf8,
                        &PTR_s_snapchat_janus_api_1130d7770,&PTR_s_statusCode_1130d77a8,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bbd68 = puVar1;
  }
  return puRam00000001136bbd68;
}



/* Entry: 10540efc4; end: 10540efef; +[SCGrapheneUserScoreMetric userInfoProcess] */

void FUN_10540efc4(void)

{
  _objc_alloc(PTR_PTR_1126b8c60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10540eff0; end: 10540f01b; +[SCGrapheneUserScoreMetric profileScoreDisplay] */

void FUN_10540eff0(void)

{
  _objc_alloc(PTR_PTR_1126b8c60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10540f01c; end: 10540f0bb; -[SCGrapheneUserScoreMetric description] */

void FUN_10540f01c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ddae38;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ddae38,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e83c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10540f0bc; end: 10540f137;  */

undefined * FUN_10540f0bc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbd80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddaeb8,
                        &UNK_10ddaa290,&UNK_10ddaa31c,8,FUN_10540f138,0);
    do {
      if (puRam00000001136bbd80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbd80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbd80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbd80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbd80;
}



/* Entry: 10540f138; end: 10540f143;  */

bool FUN_10540f138(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10540f144; end: 10540f1ab; +[SCChangeUsernamePbGetLatestUsernameChangeDateRequest descriptor] */

void FUN_10540f144(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbd88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37130,
                        &PTR____CFConstantStringClassReference_110ddaed8,
                        &PTR_s_snapchat_activation_api_1130d7b48,0,0,4,0x1c);
    puRam00000001136bbd88 = puVar1;
  }
  return;
}



/* Entry: 10540f1ac; end: 10540f213; +[SCChangeUsernamePbGetLatestUsernameChangeDateResponse descriptor] */

void FUN_10540f1ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbd90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37180,
                        &PTR____CFConstantStringClassReference_110ddaef8,
                        &PTR_s_snapchat_activation_api_1130d7b48,&PTR_s_latestChangeDate_1130d7b60,2
                        ,0x18,0x1c);
    puRam00000001136bbd90 = puVar1;
  }
  return;
}



/* Entry: 10540f214; end: 10540f27b; +[SCChangeUsernamePbChangeUsernameRequest descriptor] */

void FUN_10540f214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbd98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a371d0,
                        &PTR____CFConstantStringClassReference_110ddaf18,
                        &PTR_s_snapchat_activation_api_1130d7b48,&PTR_s_newUsername_1130d7ba0,2,0x18
                        ,0x1c);
    puRam00000001136bbd98 = puVar1;
  }
  return;
}



/* Entry: 10540f27c; end: 10540f2e3; +[SCChangeUsernamePbChangeUsernameResponse descriptor] */

void FUN_10540f27c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbda0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37220,
                        &PTR____CFConstantStringClassReference_110ddaf38,
                        &PTR_s_snapchat_activation_api_1130d7b48,&PTR_s_statusCode_1130d7be0,2,0x10,
                        0x1c);
    puRam00000001136bbda0 = puVar1;
  }
  return;
}



/* Entry: 10540f2e4; end: 10540f357; -[UNISCUpdateBirthdatePbUpdateBirthdateService initWithUnifiedGrpcService:] */

undefined1 * FUN_10540f2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e83d0;
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



/* Entry: 10540f358; end: 10540f43b; -[UNISCUpdateBirthdatePbUpdateBirthdateService updateBirthdateWithRequest:callOptionsBuilder:handler:] */

void FUN_10540f358(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8c68;
  _objc_opt_class(PTR_PTR_1126b8c68);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ddaf58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540f43c; end: 10540f51f; -[UNISCUpdateBirthdatePbUpdateBirthdateService getAgeVerificationOptionsWithRequest:callOptionsBuilder:handler:] */

void FUN_10540f43c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8c70;
  _objc_opt_class(PTR_PTR_1126b8c70);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ddaf78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540f520; end: 10540f603; -[UNISCUpdateBirthdatePbUpdateBirthdateService getAgeVerificationOptionsInternalWithRequest:callOptionsBuilder:handler:] */

void FUN_10540f520(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8c78;
  _objc_opt_class(PTR_PTR_1126b8c78);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ddaf98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540f604; end: 10540f6e7; -[UNISCUpdateBirthdatePbUpdateBirthdateService verifyAgeAnswerChallengeWithRequest:callOptionsBuilder:handler:] */

void FUN_10540f604(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8c80;
  _objc_opt_class(PTR_PTR_1126b8c80);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ddafb8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10540f6e8; end: 10540f6f3; -[UNISCUpdateBirthdatePbUpdateBirthdateService .cxx_destruct] */

void FUN_10540f6e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10540f6f4; end: 10540f76f;  */

undefined * FUN_10540f6f4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbda8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddafd8,
                        &UNK_10ddaa33c,&UNK_10ddaa3f4,9,FUN_10540f770,0);
    do {
      if (puRam00000001136bbda8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbda8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbda8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbda8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbda8;
}



/* Entry: 10540f770; end: 10540f787;  */

uint FUN_10540f770(uint param_1)

{
  return (uint)(param_1 < 0xb) & 0x4ffU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10540f788; end: 10540f803;  */

undefined * FUN_10540f788(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbdb0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddaff8,
                        &UNK_10ddaa418,&UNK_10ddaa474,5,FUN_10540f804,0);
    do {
      if (puRam00000001136bbdb0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbdb0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbdb0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbdb0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbdb0;
}



/* Entry: 10540f804; end: 10540f80f;  */

bool FUN_10540f804(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10540f810; end: 10540f88b;  */

undefined * FUN_10540f810(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbdb8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddb018,
                        &UNK_10ddaa418,&UNK_10ddaa488,5,FUN_10540f88c,0);
    do {
      if (puRam00000001136bbdb8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbdb8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbdb8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbdb8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbdb8;
}



/* Entry: 10540f88c; end: 10540f897;  */

bool FUN_10540f88c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10540f898; end: 10540f913;  */

undefined * FUN_10540f898(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbdc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddb038,
                        &UNK_10ddaa49c,&UNK_10ddaa524,8,FUN_10540f914,0);
    do {
      if (puRam00000001136bbdc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbdc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbdc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbdc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbdc0;
}



/* Entry: 10540f914; end: 10540f91f;  */

bool FUN_10540f914(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10540f920; end: 10540f987; +[SCUpdateBirthdatePbUpdateBirthdateRequest descriptor] */

void FUN_10540f920(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbdc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37310,
                        &PTR____CFConstantStringClassReference_110ddb058,
                        &PTR_s_snapchat_activation_api_1130d7c38,&PTR_s_birthdate_1130d7cd0,3,0x10,
                        0x1c);
    puRam00000001136bbdc8 = puVar1;
  }
  return;
}



/* Entry: 10540f988; end: 10540f9ef; +[SCUpdateBirthdatePbUpdateBirthdateResponse descriptor] */

void FUN_10540f988(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbdd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37360,
                        &PTR____CFConstantStringClassReference_110ddb078,
                        &PTR_s_snapchat_activation_api_1130d7c38,&PTR_s_status_1130d7d30,3,0x18,0x1c
                       );
    puRam00000001136bbdd0 = puVar1;
  }
  return;
}



/* Entry: 10540f9f0; end: 10540fa57; +[SCUpdateBirthdatePbGetAgeVerificationOptionsRequest descriptor] */

void FUN_10540f9f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbdd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a373b0,
                        &PTR____CFConstantStringClassReference_110ddb098,
                        &PTR_s_snapchat_activation_api_1130d7c38,0,0,4,0x1c);
    puRam00000001136bbdd8 = puVar1;
  }
  return;
}



/* Entry: 10540fa58; end: 10540fae3; +[SCUpdateBirthdatePbGetAgeVerificationOptionsResponse descriptor] */

undefined * FUN_10540fa58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbde0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37400,
                        &PTR____CFConstantStringClassReference_110ddb0b8,
                        &PTR_s_snapchat_activation_api_1130d7c38,&PTR_s_status_1130d7d90,3,0x20,0x1c
                       );
    func_0x00010c229040();
    puRam00000001136bbde0 = puVar1;
  }
  return puRam00000001136bbde0;
}



/* Entry: 10540fae4; end: 10540fb5f; +[SCUpdateBirthdatePbGetAgeVerificationOptionsResponse_ErrorData descriptor] */

undefined * FUN_10540fae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbde8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37450,
                        &PTR____CFConstantStringClassReference_110ddab78,
                        &PTR_s_snapchat_activation_api_1130d7c38,
                        &PTR_s_humanReadableErrorMessage_1130d7c50,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bbde8 = puVar1;
  }
  return puRam00000001136bbde8;
}



/* Entry: 10540fb60; end: 10540fbc7; +[SCUpdateBirthdatePbGetAgeVerificationOptionsInternalRequest descriptor] */

void FUN_10540fb60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbdf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a374a0,
                        &PTR____CFConstantStringClassReference_110ddb0d8,
                        &PTR_s_snapchat_activation_api_1130d7c38,&PTR_s_userId_1130d7e50,4,0x28,0x1c
                       );
    puRam00000001136bbdf0 = puVar1;
  }
  return;
}



/* Entry: 10540fbc8; end: 10540fc53; +[SCUpdateBirthdatePbGetAgeVerificationOptionsInternalResponse descriptor] */

undefined * FUN_10540fbc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbdf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a374f0,
                        &PTR____CFConstantStringClassReference_110ddb0f8,
                        &PTR_s_snapchat_activation_api_1130d7c38,&PTR_s_status_1130d7df0,3,0x20,0x1c
                       );
    func_0x00010c229040();
    puRam00000001136bbdf8 = puVar1;
  }
  return puRam00000001136bbdf8;
}



/* Entry: 10540fc54; end: 10540fccf; +[SCUpdateBirthdatePbGetAgeVerificationOptionsInternalResponse_ErrorData descriptor] */

undefined * FUN_10540fc54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbe00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37540,
                        &PTR____CFConstantStringClassReference_110ddab78,
                        &PTR_s_snapchat_activation_api_1130d7c38,
                        &PTR_s_humanReadableErrorMessage_1130d7c70,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bbe00 = puVar1;
  }
  return puRam00000001136bbe00;
}



/* Entry: 10540fcd0; end: 10540fd37; +[SCUpdateBirthdatePbVerifyAgeAnswerChallengeRequest descriptor] */

void FUN_10540fcd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbe08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37590,
                        &PTR____CFConstantStringClassReference_110ddb118,
                        &PTR_s_snapchat_activation_api_1130d7c38,&PTR_s_challengeAnswer_1130d7c90,1,
                        0x10,0x1c);
    puRam00000001136bbe08 = puVar1;
  }
  return;
}



/* Entry: 10540fd38; end: 10540fdc3; +[SCUpdateBirthdatePbVerifyAgeAnswerChallengeResponse descriptor] */

undefined * FUN_10540fd38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbe10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a375e0,
                        &PTR____CFConstantStringClassReference_110ddb138,
                        &PTR_s_snapchat_activation_api_1130d7c38,&PTR_s_status_1130d7ed0,4,0x28,0x1c
                       );
    func_0x00010c229040();
    puRam00000001136bbe10 = puVar1;
  }
  return puRam00000001136bbe10;
}



/* Entry: 10540fdc4; end: 10540fe3f; +[SCUpdateBirthdatePbVerifyAgeAnswerChallengeResponse_ErrorData descriptor] */

undefined * FUN_10540fdc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbe18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37630,
                        &PTR____CFConstantStringClassReference_110ddab78,
                        &PTR_s_snapchat_activation_api_1130d7c38,
                        &PTR_s_humanReadableErrorMessage_1130d7cb0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bbe18 = puVar1;
  }
  return puRam00000001136bbe18;
}



/* Entry: 10540fe40; end: 10540febb; +[SCUpdateBirthdatePbVerifyAgeAnswerChallengeResponse_SuccessData descriptor] */

undefined * FUN_10540fe40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbe20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37680,
                        &PTR____CFConstantStringClassReference_110ddab58,
                        &PTR_s_snapchat_activation_api_1130d7c38,0,0,4,0x1c);
    func_0x00010c228780();
    puRam00000001136bbe20 = puVar1;
  }
  return puRam00000001136bbe20;
}



/* Entry: 10540febc; end: 10540ff2f; -[SCGrapheneAdTrackBindingParityMetric2 init] */

undefined1 * FUN_10540febc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e83d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10540ff30; end: 10541015f;  */

/* WARNING: Removing unreachable block (ram,0x000105411038) */
/* WARNING: Removing unreachable block (ram,0x0001054106a8) */
/* WARNING: Removing unreachable block (ram,0x0001054103e8) */
/* WARNING: Removing unreachable block (ram,0x000105410adc) */
/* WARNING: Removing unreachable block (ram,0x000105411300) */

undefined8 *****
FUN_10540ff30(long param_1,undefined8 *****param_2,undefined8 ****param_3,undefined8 ****param_4,
             undefined8 ****param_5,undefined8 ****param_6)

{
  char *pcVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  long *plVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ***unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined1 auStack_5f0 [8];
  undefined1 auStack_5e8 [8];
  undefined8 ****ppppuStack_5e0;
  undefined *puStack_5d8;
  undefined8 ****ppppuStack_5d0;
  undefined8 ***pppuStack_5c8;
  undefined8 ***pppuStack_5c0;
  undefined8 ****ppppuStack_5b8;
  undefined8 ****ppppuStack_5b0;
  code *pcStack_5a8;
  undefined8 **ppuStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 *puStack_588;
  undefined8 **appuStack_580 [3];
  undefined1 auStack_568 [24];
  undefined8 auStack_550 [2];
  char cStack_539;
  long lStack_538;
  undefined8 ***pppuStack_530;
  undefined8 ***pppuStack_528;
  undefined8 ***pppuStack_520;
  undefined8 ****ppppuStack_518;
  undefined8 ***pppuStack_510;
  undefined8 ***pppuStack_508;
  undefined8 ***pppuStack_500;
  undefined8 ****ppppuStack_4f8;
  undefined8 ****ppppuStack_4f0;
  code *pcStack_4e8;
  undefined8 **ppuStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 ***pppuStack_4c0;
  undefined8 **appuStack_4b8 [3];
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined8 auStack_470 [2];
  char cStack_459;
  long lStack_458;
  undefined8 ****ppppuStack_410;
  code *pcStack_408;
  undefined8 **ppuStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 **ppuStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 ****ppppuStack_390;
  undefined8 ***pppuStack_388;
  undefined8 ***pppuStack_380;
  undefined8 ****ppppuStack_378;
  undefined8 ****ppppuStack_370;
  code *pcStack_368;
  undefined8 **ppuStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined8 auStack_340 [3];
  undefined1 auStack_328 [24];
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  undefined8 **ppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 ****ppppuStack_250;
  undefined8 ***pppuStack_248;
  undefined8 ***pppuStack_240;
  undefined8 ****ppppuStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 **ppuStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = param_2;
  ppppuVar15 = param_3;
  ppppuVar12 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = (undefined8 ***)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    ppuStack_98 = (undefined8 ***)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&ppuStack_98,auStack_78,&lStack_48,2);
    pppppuVar6 = (undefined8 *****)&UNK_110886928;
    ppppuVar15 = (undefined8 ****)&ppuStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    ppuStack_80 = &ppuStack_98;
    func_0x00010007e5dc(&ppuStack_80);
    lVar11 = 0;
    ppppuVar12 = param_4;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  pppppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppppuVar7 = (undefined8 ****)&ppuStack_160;
  pcStack_a8 = FUN_105410160;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar5 = pppppuVar6;
  ppppuVar14 = ppppuVar15;
  ppppuVar16 = ppppuVar12;
  ppppuVar9 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pppppuVar6);
  _objc_retain(ppppuVar15);
  _objc_retain(ppppuVar12);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar14 = pppppuVar2[1];
    _objc_retain(pppppuVar6);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar6;
      _objc_retainAutorelease(pppppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar6);
    func_0x00010002b838(auStack_140,pcVar1);
    _objc_retain(ppppuVar15);
    if (ppppuVar15 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar15);
      pcVar1 = (char *)ppppuVar15;
      func_0x00010bdc3520(ppppuVar15);
    }
    _objc_release(ppppuVar15);
    func_0x00010002b838(auStack_128,pcVar1);
    _objc_retain(ppppuVar12);
    if (ppppuVar12 == (undefined8 ****)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar12);
      unaff_x25 = (char *)ppppuVar12;
      func_0x00010bdc3520();
    }
    _objc_release(ppppuVar12);
    func_0x00010002b838(auStack_110,unaff_x25);
    ppuStack_160 = (undefined8 ***)0x0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x00010007e1e8(&ppuStack_160,auStack_140,&lStack_f8,3);
    pppppuVar5 = (undefined8 *****)&UNK_110886978;
    (*(code *)(*ppppuVar14)[3])(ppppuVar14);
    puStack_148 = (undefined1 *)&ppuStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar11 = 0;
    ppppuVar14 = ppppuVar7;
    ppppuVar16 = param_5;
    do {
      if ((&cStack_f9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = &ppuStack_160;
    } while (lVar11 != -0x48);
  }
  _objc_release(ppppuVar12);
  _objc_release(ppppuVar15);
  pppppuVar2 = pppppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(ppppuVar12);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != (undefined8 ***)auStack_140);
  _objc_release(ppppuVar12);
  _objc_release(ppppuVar15);
  _objc_release(pppppuVar6);
  __Unwind_Resume();
  ppppuVar8 = (undefined8 ****)&ppuStack_220;
  pcStack_168 = FUN_105410420;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = pppppuVar5;
  ppppuVar15 = ppppuVar14;
  ppppuVar12 = ppppuVar16;
  ppppuVar7 = ppppuVar9;
  ppuStack_170 = &puStack_b0;
  _objc_retain(pppppuVar5);
  _objc_retain(ppppuVar14);
  _objc_retain(ppppuVar16);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar15 = pppppuVar2[1];
    _objc_retain(pppppuVar5);
    if (pppppuVar5 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar5;
      _objc_retainAutorelease(pppppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar5);
    func_0x00010002b838(auStack_200,pcVar1);
    _objc_retain(ppppuVar14);
    if (ppppuVar14 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar14);
      pcVar1 = (char *)ppppuVar14;
      func_0x00010bdc3520(ppppuVar14);
    }
    _objc_release(ppppuVar14);
    func_0x00010002b838(auStack_1e8,pcVar1);
    _objc_retain(ppppuVar16);
    if (ppppuVar16 == (undefined8 ****)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar16);
      unaff_x25 = (char *)ppppuVar16;
      func_0x00010bdc3520();
    }
    _objc_release(ppppuVar16);
    func_0x00010002b838(auStack_1d0,unaff_x25);
    ppuStack_220 = (undefined8 ***)0x0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&ppuStack_220,auStack_200,&lStack_1b8,3);
    pppppuVar6 = (undefined8 *****)&UNK_1108869c8;
    (*(code *)(*ppppuVar15)[3])(ppppuVar15);
    puStack_208 = (undefined1 *)&ppuStack_220;
    func_0x00010007e5dc(&puStack_208);
    lVar11 = 0;
    ppppuVar15 = ppppuVar8;
    ppppuVar12 = ppppuVar9;
    do {
      if ((&cStack_1b9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = &ppuStack_220;
    } while (lVar11 != -0x48);
  }
  _objc_release(ppppuVar16);
  _objc_release(ppppuVar14);
  pppppuVar2 = pppppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(ppppuVar16);
  puStack_258 = auStack_200;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != (undefined8 ***)puStack_258);
  _objc_release(ppppuVar16);
  _objc_release(ppppuVar14);
  _objc_release(pppppuVar5);
  pppppuVar3 = pppppuVar2;
  __Unwind_Resume();
  ppppuVar8 = (undefined8 ****)&ppuStack_2a0;
  pcStack_228 = FUN_1054106e0;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar4 = pppppuVar6;
  ppppuVar9 = ppppuVar15;
  puStack_260 = unaff_x24;
  ppppuStack_250 = pppppuVar2;
  pppuStack_248 = ppppuVar16;
  pppuStack_240 = ppppuVar14;
  ppppuStack_238 = pppppuVar5;
  pppuStack_230 = &ppuStack_170;
  _objc_retain(pppppuVar6);
  if (pppppuVar3 != (undefined8 *****)0x0) {
    ppppuVar12 = pppppuVar3[1];
    _objc_retain(pppppuVar6);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar6;
      _objc_retainAutorelease(pppppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar6);
    func_0x00010002b838(auStack_280,pcVar1);
    ppuStack_2a0 = (undefined8 ***)0x0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x00010007e1e8(&ppuStack_2a0,auStack_280,&lStack_268,1);
    pppppuVar4 = (undefined8 *****)&UNK_110886a18;
    (*(code *)(*ppppuVar12)[3])(ppppuVar12);
    puStack_288 = (undefined1 *)&ppuStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    ppppuVar9 = ppppuVar8;
    ppppuVar12 = ppppuVar15;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      ppppuVar9 = ppppuVar8;
      ppppuVar12 = ppppuVar15;
    }
  }
  pppppuVar2 = pppppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar6);
  _objc_release(pppppuVar6);
  __Unwind_Resume();
  ppppuVar8 = (undefined8 ****)&ppuStack_360;
  pcStack_2a8 = FUN_105410854;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = pppppuVar4;
  ppppuVar15 = ppppuVar9;
  ppppuVar14 = ppppuVar12;
  ppppuVar16 = ppppuVar7;
  ppppuStack_2b0 = &pppuStack_230;
  _objc_retain(pppppuVar4);
  _objc_retain(ppppuVar9);
  _objc_retain(ppppuVar12);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar15 = pppppuVar2[1];
    _objc_retain(pppppuVar4);
    if (pppppuVar4 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar4;
      _objc_retainAutorelease(pppppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar4);
    func_0x00010002b838(auStack_340,pcVar1);
    _objc_retain(ppppuVar9);
    if (ppppuVar9 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar9);
      pcVar1 = (char *)ppppuVar9;
      func_0x00010bdc3520(ppppuVar9);
    }
    _objc_release(ppppuVar9);
    func_0x00010002b838(auStack_328,pcVar1);
    _objc_retain(ppppuVar12);
    if (ppppuVar12 == (undefined8 ****)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar12);
      unaff_x25 = (char *)ppppuVar12;
      func_0x00010bdc3520();
    }
    _objc_release(ppppuVar12);
    func_0x00010002b838(auStack_310,unaff_x25);
    ppuStack_360 = (undefined8 ***)0x0;
    uStack_358 = 0;
    uStack_350 = 0;
    func_0x00010007e1e8(&ppuStack_360,auStack_340,&lStack_2f8,3);
    pppppuVar6 = (undefined8 *****)&UNK_110886a68;
    (*(code *)(*ppppuVar15)[3])(ppppuVar15);
    puStack_348 = (undefined1 *)&ppuStack_360;
    func_0x00010007e5dc(&puStack_348);
    lVar11 = 0;
    ppppuVar15 = ppppuVar8;
    ppppuVar14 = ppppuVar7;
    do {
      if ((&cStack_2f9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = &ppuStack_360;
    } while (lVar11 != -0x48);
  }
  _objc_release(ppppuVar12);
  _objc_release(ppppuVar9);
  pppppuVar2 = pppppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(ppppuVar12);
  puStack_398 = auStack_340;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != (undefined8 ***)puStack_398);
  _objc_release(ppppuVar12);
  _objc_release(ppppuVar9);
  _objc_release(pppppuVar4);
  pppppuVar3 = pppppuVar2;
  __Unwind_Resume();
  pcStack_368 = FUN_105410b14;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar5 = pppppuVar6;
  ppppuVar7 = ppppuVar15;
  ppppuVar8 = ppppuVar14;
  puStack_3a0 = unaff_x24;
  ppppuStack_390 = pppppuVar2;
  pppuStack_388 = ppppuVar12;
  pppuStack_380 = ppppuVar9;
  ppppuStack_378 = pppppuVar4;
  ppppuStack_370 = &ppppuStack_2b0;
  _objc_retain(pppppuVar6);
  _objc_retain(ppppuVar15);
  if (pppppuVar3 != (undefined8 *****)0x0) {
    ppppuVar12 = pppppuVar3[1];
    _objc_retain(pppppuVar6);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar6;
      _objc_retainAutorelease(pppppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar6);
    func_0x00010002b838(auStack_3d8,pcVar1);
    _objc_retain(ppppuVar15);
    if (ppppuVar15 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar15);
      pcVar1 = (char *)ppppuVar15;
      func_0x00010bdc3520(ppppuVar15);
    }
    _objc_release(ppppuVar15);
    func_0x00010002b838(auStack_3c0,pcVar1);
    ppuStack_3f8 = (undefined8 ***)0x0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    func_0x00010007e1e8(&ppuStack_3f8,auStack_3d8,&lStack_3a8,2);
    pppppuVar5 = (undefined8 *****)&UNK_110886ab8;
    ppppuVar7 = (undefined8 ****)&ppuStack_3f8;
    (*(code *)(*ppppuVar12)[3])(ppppuVar12);
    ppuStack_3e0 = &ppuStack_3f8;
    func_0x00010007e5dc(&ppuStack_3e0);
    lVar11 = 0;
    ppppuVar8 = ppppuVar14;
    do {
      if ((&cStack_3a9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(ppppuVar15);
  pppppuVar2 = pppppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
    ___stack_chk_fail();
    _objc_release(ppppuVar15);
    if (cStack_3c1 < '\0') {
      __ZdlPv(auStack_3d8[0]);
    }
    _objc_release(ppppuVar15);
    _objc_release(pppppuVar6);
    __Unwind_Resume();
    pcStack_408 = FUN_105410d44;
    lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppppuVar6 = pppppuVar5;
    ppppuVar15 = ppppuVar7;
    ppppuVar12 = ppppuVar8;
    ppppuVar14 = ppppuVar16;
    ppppuStack_410 = &ppppuStack_370;
    _objc_retain(pppppuVar5);
    _objc_retain(ppppuVar7);
    _objc_retain(ppppuVar8);
    _objc_retain(ppppuVar16);
    if (pppppuVar2 != (undefined8 *****)0x0) {
      ppppuVar12 = pppppuVar2[1];
      _objc_retain(pppppuVar5);
      if (pppppuVar5 == (undefined8 *****)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)pppppuVar5;
        _objc_retainAutorelease(pppppuVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pppppuVar5);
      func_0x00010002b838(appuStack_4b8,pcVar1);
      _objc_retain(ppppuVar7);
      if (ppppuVar7 == (undefined8 ****)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppppuVar7);
        pcVar1 = (char *)ppppuVar7;
        func_0x00010bdc3520(ppppuVar7);
      }
      _objc_release(ppppuVar7);
      func_0x00010002b838(auStack_4a0,pcVar1);
      _objc_retain(ppppuVar8);
      if (ppppuVar8 == (undefined8 ****)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppppuVar8);
        pcVar1 = (char *)ppppuVar8;
        func_0x00010bdc3520(ppppuVar8);
      }
      _objc_release(ppppuVar8);
      func_0x00010002b838(auStack_488,pcVar1);
      _objc_retain(ppppuVar16);
      if (ppppuVar16 == (undefined8 ****)0x0) {
        unaff_x26 = "";
      }
      else {
        _objc_retainAutorelease(ppppuVar16);
        unaff_x26 = (char *)ppppuVar16;
        func_0x00010bdc3520();
      }
      _objc_release(ppppuVar16);
      func_0x00010002b838(auStack_470,unaff_x26);
      ppuStack_4d8 = (undefined8 ***)0x0;
      uStack_4d0 = 0;
      uStack_4c8 = 0;
      func_0x00010007e1e8(&ppuStack_4d8,appuStack_4b8,&lStack_458,4);
      pppppuVar6 = (undefined8 *****)&UNK_110886b08;
      unaff_x25 = (char *)&ppuStack_4d8;
      ppppuVar15 = (undefined8 ****)&ppuStack_4d8;
      (*(code *)(*ppppuVar12)[3])(ppppuVar12);
      pppuStack_4c0 = (undefined8 ***)unaff_x25;
      func_0x00010007e5dc(&pppuStack_4c0);
      lVar11 = 0;
      ppppuVar12 = param_6;
      do {
        if ((&cStack_459)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_470 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x60);
    }
    _objc_release(ppppuVar16);
    _objc_release(ppppuVar8);
    _objc_release(ppppuVar7);
    pppppuVar2 = pppppuVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
      return pppppuVar2;
    }
    ___stack_chk_fail();
    _objc_release(ppppuVar16);
    do {
      unaff_x25 = (char *)((long)unaff_x25 + -0x18);
    } while ((undefined8 ***)unaff_x25 != appuStack_4b8);
    _objc_release(ppppuVar16);
    _objc_release(ppppuVar8);
    _objc_release(ppppuVar7);
    _objc_release(pppppuVar5);
    pppppuVar4 = pppppuVar2;
    __Unwind_Resume();
    ppppuVar10 = (undefined8 ****)&ppuStack_5a0;
    pcStack_4e8 = FUN_105411078;
    lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppuVar9 = ppppuVar15;
    pppuStack_530 = (undefined8 ***)unaff_x26;
    pppuStack_528 = (undefined8 ***)unaff_x25;
    pppuStack_520 = appuStack_4b8;
    ppppuStack_518 = pppppuVar2;
    pppuStack_510 = ppppuVar16;
    pppuStack_508 = ppppuVar8;
    pppuStack_500 = ppppuVar7;
    ppppuStack_4f8 = pppppuVar5;
    ppppuStack_4f0 = &ppppuStack_410;
    _objc_retain(pppppuVar6);
    _objc_retain(ppppuVar15);
    _objc_retain(ppppuVar12);
    ppppuVar16 = (undefined8 ****)appuStack_4b8;
    if (pppppuVar4 != (undefined8 *****)0x0) {
      ppppuVar16 = pppppuVar4[1];
      _objc_retain(pppppuVar6);
      if (pppppuVar6 == (undefined8 *****)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)pppppuVar6;
        _objc_retainAutorelease(pppppuVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pppppuVar6);
      func_0x00010002b838(appuStack_580,pcVar1);
      _objc_retain(ppppuVar15);
      if (ppppuVar15 == (undefined8 ****)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppppuVar15);
        pcVar1 = (char *)ppppuVar15;
        func_0x00010bdc3520(ppppuVar15);
      }
      _objc_release(ppppuVar15);
      func_0x00010002b838(auStack_568,pcVar1);
      _objc_retain(ppppuVar12);
      if (ppppuVar12 == (undefined8 ****)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppppuVar12);
        pcVar1 = (char *)ppppuVar12;
        func_0x00010bdc3520(ppppuVar12);
      }
      _objc_release(ppppuVar12);
      func_0x00010002b838(auStack_550,pcVar1);
      ppuStack_5a0 = (undefined8 ***)0x0;
      uStack_598 = 0;
      uStack_590 = 0;
      func_0x00010007e1e8(&ppuStack_5a0,appuStack_580,&lStack_538,3);
      (*(code *)(*ppppuVar16)[3])(ppppuVar16,&UNK_110886c78,&ppuStack_5a0,ppppuVar14);
      puStack_588 = (undefined1 *)&ppuStack_5a0;
      func_0x00010007e5dc(&puStack_588);
      lVar11 = 0;
      ppppuVar9 = ppppuVar10;
      do {
        if ((&cStack_539)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_550 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
        ppppuVar16 = (undefined8 ****)&ppuStack_5a0;
      } while (lVar11 != -0x48);
    }
    _objc_release(ppppuVar12);
    _objc_release(ppppuVar15);
    pppppuVar2 = pppppuVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_538) {
      ___stack_chk_fail();
      _objc_release(ppppuVar12);
      do {
        ppppuVar16 = ppppuVar16 + -3;
      } while (ppppuVar16 != (undefined8 ****)appuStack_580);
      _objc_release(ppppuVar12);
      _objc_release(ppppuVar15);
      _objc_release(pppppuVar6);
      pppppuVar5 = pppppuVar2;
      __Unwind_Resume();
      pcStack_5a8 = FUN_105411338;
      ppppuStack_5d0 = pppppuVar2;
      pppuStack_5c8 = ppppuVar12;
      pppuStack_5c0 = ppppuVar15;
      ppppuStack_5b8 = pppppuVar6;
      ppppuStack_5b0 = &ppppuStack_4f0;
      _objc_retain(ppppuVar9);
      puStack_5d8 = PTR_PTR_1126e83e8;
      pppppuVar6 = &ppppuStack_5e0;
      ppppuStack_5e0 = pppppuVar5;
      _objc_msgSendSuper2(pppppuVar6,PTR_s_init_1125d9248);
      if (pppppuVar6 != (undefined8 *****)0x0) {
        _objc_retain(ppppuVar9);
        ppppuVar15 = pppppuVar6[1];
        pppppuVar6[1] = ppppuVar9;
        _objc_release(ppppuVar15);
        _objc_initWeak(auStack_5e8,pppppuVar6);
        ppppuVar15 = (undefined8 ****)PTR_PTR_1126ae720;
        _objc_copyWeak(auStack_5f0,auStack_5e8);
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar12 = pppppuVar6[2];
        pppppuVar6[2] = ppppuVar15;
        _objc_release(ppppuVar12);
        _objc_destroyWeak(auStack_5f0);
        _objc_destroyWeak(auStack_5e8);
      }
      _objc_release(ppppuVar9);
      return pppppuVar6;
    }
    return pppppuVar2;
  }
  return pppppuVar2;
}



/* Entry: 105410160; end: 10541041f;  */

/* WARNING: Removing unreachable block (ram,0x000105411038) */
/* WARNING: Removing unreachable block (ram,0x0001054106a8) */
/* WARNING: Removing unreachable block (ram,0x0001054103e8) */
/* WARNING: Removing unreachable block (ram,0x000105410adc) */
/* WARNING: Removing unreachable block (ram,0x000105411300) */

undefined8 *****
FUN_105410160(long param_1,undefined8 *****param_2,undefined8 ****param_3,undefined8 ****param_4,
             undefined8 ****param_5,undefined8 ****param_6)

{
  char *pcVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  long lVar12;
  undefined8 ****ppppuVar13;
  long *plVar14;
  undefined8 ****ppppuVar15;
  undefined8 ***unaff_x24;
  undefined8 ****ppppuVar16;
  char *unaff_x25;
  char *unaff_x26;
  undefined1 auStack_550 [8];
  undefined1 auStack_548 [8];
  undefined8 ****ppppuStack_540;
  undefined *puStack_538;
  undefined8 ****ppppuStack_530;
  undefined8 ***pppuStack_528;
  undefined8 ***pppuStack_520;
  undefined8 ****ppppuStack_518;
  undefined8 ****ppppuStack_510;
  code *pcStack_508;
  undefined8 **ppuStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 **appuStack_4e0 [3];
  undefined1 auStack_4c8 [24];
  undefined8 auStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  undefined8 ***pppuStack_490;
  undefined8 ***pppuStack_488;
  undefined8 ***pppuStack_480;
  undefined8 ****ppppuStack_478;
  undefined8 ***pppuStack_470;
  undefined8 ***pppuStack_468;
  undefined8 ***pppuStack_460;
  undefined8 ****ppppuStack_458;
  undefined8 ****ppppuStack_450;
  code *pcStack_448;
  undefined8 **ppuStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 ***pppuStack_420;
  undefined8 **appuStack_418 [3];
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined8 auStack_3d0 [2];
  char cStack_3b9;
  long lStack_3b8;
  undefined8 ****ppppuStack_370;
  code *pcStack_368;
  undefined8 **ppuStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 **ppuStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined1 *puStack_300;
  undefined1 *puStack_2f8;
  undefined8 ****ppppuStack_2f0;
  undefined8 ***pppuStack_2e8;
  undefined8 ***pppuStack_2e0;
  undefined8 ****ppppuStack_2d8;
  undefined1 ****ppppuStack_2d0;
  code *pcStack_2c8;
  undefined8 **ppuStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 **ppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined8 ****ppppuStack_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 ****ppppuStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  ppppuVar15 = (undefined8 ****)&ppuStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar4 = param_2;
  ppppuVar11 = param_3;
  ppppuVar16 = param_4;
  ppppuVar13 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 ****)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x25 = (char *)param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,unaff_x25);
    ppuStack_c0 = (undefined8 ***)0x0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&ppuStack_c0,auStack_a0,&lStack_58,3);
    pppppuVar4 = (undefined8 *****)&UNK_110886978;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = (undefined1 *)&ppuStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar12 = 0;
    ppppuVar11 = ppppuVar15;
    ppppuVar16 = param_5;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &ppuStack_c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pppppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = (undefined8 ***)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 ***)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppppuVar7 = (undefined8 ****)&ppuStack_180;
  pcStack_c8 = FUN_105410420;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = pppppuVar4;
  ppppuVar15 = ppppuVar11;
  ppppuVar9 = ppppuVar16;
  ppppuVar8 = ppppuVar13;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pppppuVar4);
  _objc_retain(ppppuVar11);
  _objc_retain(ppppuVar16);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar15 = pppppuVar2[1];
    _objc_retain(pppppuVar4);
    if (pppppuVar4 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar4;
      _objc_retainAutorelease(pppppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar4);
    func_0x00010002b838(auStack_160,pcVar1);
    _objc_retain(ppppuVar11);
    if (ppppuVar11 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar11);
      pcVar1 = (char *)ppppuVar11;
      func_0x00010bdc3520(ppppuVar11);
    }
    _objc_release(ppppuVar11);
    func_0x00010002b838(auStack_148,pcVar1);
    _objc_retain(ppppuVar16);
    if (ppppuVar16 == (undefined8 ****)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar16);
      unaff_x25 = (char *)ppppuVar16;
      func_0x00010bdc3520();
    }
    _objc_release(ppppuVar16);
    func_0x00010002b838(auStack_130,unaff_x25);
    ppuStack_180 = (undefined8 ***)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&ppuStack_180,auStack_160,&lStack_118,3);
    pppppuVar6 = (undefined8 *****)&UNK_1108869c8;
    (*(code *)(*ppppuVar15)[3])(ppppuVar15);
    puStack_168 = (undefined1 *)&ppuStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar12 = 0;
    ppppuVar15 = ppppuVar7;
    ppppuVar9 = ppppuVar13;
    do {
      if ((&cStack_119)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &ppuStack_180;
    } while (lVar12 != -0x48);
  }
  _objc_release(ppppuVar16);
  _objc_release(ppppuVar11);
  pppppuVar2 = pppppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(ppppuVar16);
  puStack_1b8 = auStack_160;
  do {
    unaff_x24 = (undefined8 ***)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 ***)puStack_1b8);
  _objc_release(ppppuVar16);
  _objc_release(ppppuVar11);
  _objc_release(pppppuVar4);
  pppppuVar3 = pppppuVar2;
  __Unwind_Resume();
  ppppuVar7 = (undefined8 ****)&ppuStack_200;
  pcStack_188 = FUN_1054106e0;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar5 = pppppuVar6;
  ppppuVar13 = ppppuVar15;
  puStack_1c0 = (undefined1 *)unaff_x24;
  ppppuStack_1b0 = pppppuVar2;
  pppuStack_1a8 = ppppuVar16;
  pppuStack_1a0 = ppppuVar11;
  ppppuStack_198 = pppppuVar4;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pppppuVar6);
  if (pppppuVar3 != (undefined8 *****)0x0) {
    ppppuVar11 = pppppuVar3[1];
    _objc_retain(pppppuVar6);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar6;
      _objc_retainAutorelease(pppppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar6);
    func_0x00010002b838(auStack_1e0,pcVar1);
    ppuStack_200 = (undefined8 ***)0x0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&ppuStack_200,auStack_1e0,&lStack_1c8,1);
    pppppuVar5 = (undefined8 *****)&UNK_110886a18;
    (*(code *)(*ppppuVar11)[3])(ppppuVar11);
    puStack_1e8 = (undefined1 *)&ppuStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    ppppuVar13 = ppppuVar7;
    ppppuVar9 = ppppuVar15;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      ppppuVar13 = ppppuVar7;
      ppppuVar9 = ppppuVar15;
    }
  }
  pppppuVar4 = pppppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return pppppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar6);
  _objc_release(pppppuVar6);
  __Unwind_Resume();
  ppppuVar7 = (undefined8 ****)&ppuStack_2c0;
  pcStack_208 = FUN_105410854;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar2 = pppppuVar5;
  ppppuVar11 = ppppuVar13;
  ppppuVar16 = ppppuVar9;
  ppppuVar15 = ppppuVar8;
  pppuStack_210 = &ppuStack_190;
  _objc_retain(pppppuVar5);
  _objc_retain(ppppuVar13);
  _objc_retain(ppppuVar9);
  if (pppppuVar4 != (undefined8 *****)0x0) {
    ppppuVar11 = pppppuVar4[1];
    _objc_retain(pppppuVar5);
    if (pppppuVar5 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar5;
      _objc_retainAutorelease(pppppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar5);
    func_0x00010002b838(auStack_2a0,pcVar1);
    _objc_retain(ppppuVar13);
    if (ppppuVar13 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar13);
      pcVar1 = (char *)ppppuVar13;
      func_0x00010bdc3520(ppppuVar13);
    }
    _objc_release(ppppuVar13);
    func_0x00010002b838(auStack_288,pcVar1);
    _objc_retain(ppppuVar9);
    if (ppppuVar9 == (undefined8 ****)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar9);
      unaff_x25 = (char *)ppppuVar9;
      func_0x00010bdc3520();
    }
    _objc_release(ppppuVar9);
    func_0x00010002b838(auStack_270,unaff_x25);
    ppuStack_2c0 = (undefined8 ***)0x0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&ppuStack_2c0,auStack_2a0,&lStack_258,3);
    pppppuVar2 = (undefined8 *****)&UNK_110886a68;
    (*(code *)(*ppppuVar11)[3])(ppppuVar11);
    puStack_2a8 = (undefined1 *)&ppuStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    lVar12 = 0;
    ppppuVar11 = ppppuVar7;
    ppppuVar16 = ppppuVar8;
    do {
      if ((&cStack_259)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &ppuStack_2c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(ppppuVar9);
  _objc_release(ppppuVar13);
  pppppuVar4 = pppppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return pppppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(ppppuVar9);
  puStack_2f8 = auStack_2a0;
  do {
    unaff_x24 = (undefined8 ***)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 ***)puStack_2f8);
  _objc_release(ppppuVar9);
  _objc_release(ppppuVar13);
  _objc_release(pppppuVar5);
  pppppuVar3 = pppppuVar4;
  __Unwind_Resume();
  pcStack_2c8 = FUN_105410b14;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = pppppuVar2;
  ppppuVar8 = ppppuVar11;
  ppppuVar7 = ppppuVar16;
  puStack_300 = (undefined1 *)unaff_x24;
  ppppuStack_2f0 = pppppuVar4;
  pppuStack_2e8 = ppppuVar9;
  pppuStack_2e0 = ppppuVar13;
  ppppuStack_2d8 = pppppuVar5;
  ppppuStack_2d0 = &pppuStack_210;
  _objc_retain(pppppuVar2);
  _objc_retain(ppppuVar11);
  if (pppppuVar3 != (undefined8 *****)0x0) {
    ppppuVar13 = pppppuVar3[1];
    _objc_retain(pppppuVar2);
    if (pppppuVar2 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar2;
      _objc_retainAutorelease(pppppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar2);
    func_0x00010002b838(auStack_338,pcVar1);
    _objc_retain(ppppuVar11);
    if (ppppuVar11 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar11);
      pcVar1 = (char *)ppppuVar11;
      func_0x00010bdc3520(ppppuVar11);
    }
    _objc_release(ppppuVar11);
    func_0x00010002b838(auStack_320,pcVar1);
    ppuStack_358 = (undefined8 ***)0x0;
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x00010007e1e8(&ppuStack_358,auStack_338,&lStack_308,2);
    pppppuVar6 = (undefined8 *****)&UNK_110886ab8;
    ppppuVar8 = (undefined8 ****)&ppuStack_358;
    (*(code *)(*ppppuVar13)[3])(ppppuVar13);
    ppuStack_340 = &ppuStack_358;
    func_0x00010007e5dc(&ppuStack_340);
    lVar12 = 0;
    ppppuVar7 = ppppuVar16;
    do {
      if ((&cStack_309)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(ppppuVar11);
  pppppuVar4 = pppppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return pppppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(ppppuVar11);
  if (cStack_321 < '\0') {
    __ZdlPv(auStack_338[0]);
  }
  _objc_release(ppppuVar11);
  _objc_release(pppppuVar2);
  __Unwind_Resume();
  pcStack_368 = FUN_105410d44;
  lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar2 = pppppuVar6;
  ppppuVar11 = ppppuVar8;
  ppppuVar16 = ppppuVar7;
  ppppuVar13 = ppppuVar15;
  ppppuStack_370 = &ppppuStack_2d0;
  _objc_retain(pppppuVar6);
  _objc_retain(ppppuVar8);
  _objc_retain(ppppuVar7);
  _objc_retain(ppppuVar15);
  if (pppppuVar4 != (undefined8 *****)0x0) {
    ppppuVar16 = pppppuVar4[1];
    _objc_retain(pppppuVar6);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar6;
      _objc_retainAutorelease(pppppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar6);
    func_0x00010002b838(appuStack_418,pcVar1);
    _objc_retain(ppppuVar8);
    if (ppppuVar8 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar8);
      pcVar1 = (char *)ppppuVar8;
      func_0x00010bdc3520(ppppuVar8);
    }
    _objc_release(ppppuVar8);
    func_0x00010002b838(auStack_400,pcVar1);
    _objc_retain(ppppuVar7);
    if (ppppuVar7 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar7);
      pcVar1 = (char *)ppppuVar7;
      func_0x00010bdc3520(ppppuVar7);
    }
    _objc_release(ppppuVar7);
    func_0x00010002b838(auStack_3e8,pcVar1);
    _objc_retain(ppppuVar15);
    if (ppppuVar15 == (undefined8 ****)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar15);
      unaff_x26 = (char *)ppppuVar15;
      func_0x00010bdc3520();
    }
    _objc_release(ppppuVar15);
    func_0x00010002b838(auStack_3d0,unaff_x26);
    ppuStack_438 = (undefined8 ***)0x0;
    uStack_430 = 0;
    uStack_428 = 0;
    func_0x00010007e1e8(&ppuStack_438,appuStack_418,&lStack_3b8,4);
    pppppuVar2 = (undefined8 *****)&UNK_110886b08;
    unaff_x25 = (char *)&ppuStack_438;
    ppppuVar11 = (undefined8 ****)&ppuStack_438;
    (*(code *)(*ppppuVar16)[3])(ppppuVar16);
    pppuStack_420 = (undefined8 ***)unaff_x25;
    func_0x00010007e5dc(&pppuStack_420);
    lVar12 = 0;
    ppppuVar16 = param_6;
    do {
      if ((&cStack_3b9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3d0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x60);
  }
  _objc_release(ppppuVar15);
  _objc_release(ppppuVar7);
  _objc_release(ppppuVar8);
  pppppuVar4 = pppppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3b8) {
    ___stack_chk_fail();
    _objc_release(ppppuVar15);
    do {
      unaff_x25 = (char *)((long)unaff_x25 + -0x18);
    } while ((undefined8 ***)unaff_x25 != appuStack_418);
    _objc_release(ppppuVar15);
    _objc_release(ppppuVar7);
    _objc_release(ppppuVar8);
    _objc_release(pppppuVar6);
    pppppuVar5 = pppppuVar4;
    __Unwind_Resume();
    ppppuVar10 = (undefined8 ****)&ppuStack_500;
    pcStack_448 = FUN_105411078;
    lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppuVar9 = ppppuVar11;
    pppuStack_490 = (undefined8 ***)unaff_x26;
    pppuStack_488 = (undefined8 ***)unaff_x25;
    pppuStack_480 = appuStack_418;
    ppppuStack_478 = pppppuVar4;
    pppuStack_470 = ppppuVar15;
    pppuStack_468 = ppppuVar7;
    pppuStack_460 = ppppuVar8;
    ppppuStack_458 = pppppuVar6;
    ppppuStack_450 = &ppppuStack_370;
    _objc_retain(pppppuVar2);
    _objc_retain(ppppuVar11);
    _objc_retain(ppppuVar16);
    ppppuVar15 = (undefined8 ****)appuStack_418;
    if (pppppuVar5 != (undefined8 *****)0x0) {
      ppppuVar15 = pppppuVar5[1];
      _objc_retain(pppppuVar2);
      if (pppppuVar2 == (undefined8 *****)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)pppppuVar2;
        _objc_retainAutorelease(pppppuVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pppppuVar2);
      func_0x00010002b838(appuStack_4e0,pcVar1);
      _objc_retain(ppppuVar11);
      if (ppppuVar11 == (undefined8 ****)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppppuVar11);
        pcVar1 = (char *)ppppuVar11;
        func_0x00010bdc3520(ppppuVar11);
      }
      _objc_release(ppppuVar11);
      func_0x00010002b838(auStack_4c8,pcVar1);
      _objc_retain(ppppuVar16);
      if (ppppuVar16 == (undefined8 ****)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppppuVar16);
        pcVar1 = (char *)ppppuVar16;
        func_0x00010bdc3520(ppppuVar16);
      }
      _objc_release(ppppuVar16);
      func_0x00010002b838(auStack_4b0,pcVar1);
      ppuStack_500 = (undefined8 ***)0x0;
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      func_0x00010007e1e8(&ppuStack_500,appuStack_4e0,&lStack_498,3);
      (*(code *)(*ppppuVar15)[3])(ppppuVar15,&UNK_110886c78,&ppuStack_500,ppppuVar13);
      puStack_4e8 = (undefined1 *)&ppuStack_500;
      func_0x00010007e5dc(&puStack_4e8);
      lVar12 = 0;
      ppppuVar9 = ppppuVar10;
      do {
        if ((&cStack_499)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4b0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
        ppppuVar15 = (undefined8 ****)&ppuStack_500;
      } while (lVar12 != -0x48);
    }
    _objc_release(ppppuVar16);
    _objc_release(ppppuVar11);
    pppppuVar4 = pppppuVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_498) {
      ___stack_chk_fail();
      _objc_release(ppppuVar16);
      do {
        ppppuVar15 = ppppuVar15 + -3;
      } while (ppppuVar15 != (undefined8 ****)appuStack_4e0);
      _objc_release(ppppuVar16);
      _objc_release(ppppuVar11);
      _objc_release(pppppuVar2);
      pppppuVar6 = pppppuVar4;
      __Unwind_Resume();
      pcStack_508 = FUN_105411338;
      ppppuStack_530 = pppppuVar4;
      pppuStack_528 = ppppuVar16;
      pppuStack_520 = ppppuVar11;
      ppppuStack_518 = pppppuVar2;
      ppppuStack_510 = &ppppuStack_450;
      _objc_retain(ppppuVar9);
      puStack_538 = PTR_PTR_1126e83e8;
      pppppuVar4 = &ppppuStack_540;
      ppppuStack_540 = pppppuVar6;
      _objc_msgSendSuper2(pppppuVar4,PTR_s_init_1125d9248);
      if (pppppuVar4 != (undefined8 *****)0x0) {
        _objc_retain(ppppuVar9);
        ppppuVar11 = pppppuVar4[1];
        pppppuVar4[1] = ppppuVar9;
        _objc_release(ppppuVar11);
        _objc_initWeak(auStack_548,pppppuVar4);
        ppppuVar11 = (undefined8 ****)PTR_PTR_1126ae720;
        _objc_copyWeak(auStack_550,auStack_548);
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar16 = pppppuVar4[2];
        pppppuVar4[2] = ppppuVar11;
        _objc_release(ppppuVar16);
        _objc_destroyWeak(auStack_550);
        _objc_destroyWeak(auStack_548);
      }
      _objc_release(ppppuVar9);
      return pppppuVar4;
    }
    return pppppuVar4;
  }
  return pppppuVar4;
}



/* Entry: 105410420; end: 1054106df;  */

/* WARNING: Removing unreachable block (ram,0x000105411038) */
/* WARNING: Removing unreachable block (ram,0x0001054106a8) */
/* WARNING: Removing unreachable block (ram,0x000105410adc) */
/* WARNING: Removing unreachable block (ram,0x000105411300) */

undefined8 *****
FUN_105410420(long param_1,undefined8 *****param_2,undefined8 ****param_3,undefined8 ****param_4,
             undefined8 ****param_5,undefined8 ****param_6)

{
  char *pcVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  long lVar13;
  long *plVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ***unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined1 auStack_490 [8];
  undefined1 auStack_488 [8];
  undefined8 ****ppppuStack_480;
  undefined *puStack_478;
  undefined8 ****ppppuStack_470;
  undefined8 ***pppuStack_468;
  undefined8 ***pppuStack_460;
  undefined8 ****ppppuStack_458;
  undefined8 ****ppppuStack_450;
  code *pcStack_448;
  undefined8 **ppuStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 **appuStack_420 [3];
  undefined1 auStack_408 [24];
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  undefined8 ***pppuStack_3d0;
  undefined8 ***pppuStack_3c8;
  undefined8 ***pppuStack_3c0;
  undefined8 ****ppppuStack_3b8;
  undefined8 ***pppuStack_3b0;
  undefined8 ***pppuStack_3a8;
  undefined8 ***pppuStack_3a0;
  undefined8 ****ppppuStack_398;
  undefined8 ****ppppuStack_390;
  code *pcStack_388;
  undefined8 **ppuStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 ***pppuStack_360;
  undefined8 **appuStack_358 [3];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  undefined8 **ppuStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 **ppuStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined1 *puStack_240;
  undefined1 *puStack_238;
  undefined8 ****ppppuStack_230;
  undefined8 ***pppuStack_228;
  undefined8 ***pppuStack_220;
  undefined8 ****ppppuStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 **ppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 **ppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  ppppuVar7 = (undefined8 ****)&ppuStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = param_2;
  ppppuVar15 = param_3;
  ppppuVar12 = param_4;
  ppppuVar16 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 ****)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x25 = (char *)param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,unaff_x25);
    ppuStack_c0 = (undefined8 ***)0x0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&ppuStack_c0,auStack_a0,&lStack_58,3);
    pppppuVar6 = (undefined8 *****)&UNK_1108869c8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = (undefined1 *)&ppuStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar13 = 0;
    ppppuVar15 = ppppuVar7;
    ppppuVar12 = param_5;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &ppuStack_c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pppppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = (undefined8 ***)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 ***)puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pppppuVar3 = pppppuVar2;
  __Unwind_Resume();
  ppppuVar8 = (undefined8 ****)&ppuStack_140;
  pcStack_c8 = FUN_1054106e0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar5 = pppppuVar6;
  ppppuVar7 = ppppuVar15;
  puStack_100 = (undefined1 *)unaff_x24;
  ppppuStack_f0 = pppppuVar2;
  pppuStack_e8 = param_4;
  pppuStack_e0 = param_3;
  ppppuStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pppppuVar6);
  if (pppppuVar3 != (undefined8 *****)0x0) {
    ppppuVar12 = pppppuVar3[1];
    _objc_retain(pppppuVar6);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar6;
      _objc_retainAutorelease(pppppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar6);
    func_0x00010002b838(auStack_120,pcVar1);
    ppuStack_140 = (undefined8 ***)0x0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&ppuStack_140,auStack_120,&lStack_108,1);
    pppppuVar5 = (undefined8 *****)&UNK_110886a18;
    (*(code *)(*ppppuVar12)[3])(ppppuVar12);
    puStack_128 = (undefined1 *)&ppuStack_140;
    func_0x00010007e5dc(&puStack_128);
    ppppuVar7 = ppppuVar8;
    ppppuVar12 = ppppuVar15;
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
      ppppuVar7 = ppppuVar8;
      ppppuVar12 = ppppuVar15;
    }
  }
  pppppuVar2 = pppppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar6);
  _objc_release(pppppuVar6);
  __Unwind_Resume();
  ppppuVar9 = (undefined8 ****)&ppuStack_200;
  pcStack_148 = FUN_105410854;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = pppppuVar5;
  ppppuVar15 = ppppuVar7;
  ppppuVar8 = ppppuVar12;
  ppppuVar11 = ppppuVar16;
  ppuStack_150 = &puStack_d0;
  _objc_retain(pppppuVar5);
  _objc_retain(ppppuVar7);
  _objc_retain(ppppuVar12);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar15 = pppppuVar2[1];
    _objc_retain(pppppuVar5);
    if (pppppuVar5 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar5;
      _objc_retainAutorelease(pppppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar5);
    func_0x00010002b838(auStack_1e0,pcVar1);
    _objc_retain(ppppuVar7);
    if (ppppuVar7 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar7);
      pcVar1 = (char *)ppppuVar7;
      func_0x00010bdc3520(ppppuVar7);
    }
    _objc_release(ppppuVar7);
    func_0x00010002b838(auStack_1c8,pcVar1);
    _objc_retain(ppppuVar12);
    if (ppppuVar12 == (undefined8 ****)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar12);
      unaff_x25 = (char *)ppppuVar12;
      func_0x00010bdc3520();
    }
    _objc_release(ppppuVar12);
    func_0x00010002b838(auStack_1b0,unaff_x25);
    ppuStack_200 = (undefined8 ***)0x0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&ppuStack_200,auStack_1e0,&lStack_198,3);
    pppppuVar6 = (undefined8 *****)&UNK_110886a68;
    (*(code *)(*ppppuVar15)[3])(ppppuVar15);
    puStack_1e8 = (undefined1 *)&ppuStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    lVar13 = 0;
    ppppuVar15 = ppppuVar9;
    ppppuVar8 = ppppuVar16;
    do {
      if ((&cStack_199)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &ppuStack_200;
    } while (lVar13 != -0x48);
  }
  _objc_release(ppppuVar12);
  _objc_release(ppppuVar7);
  pppppuVar2 = pppppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(ppppuVar12);
  puStack_238 = auStack_1e0;
  do {
    unaff_x24 = (undefined8 ***)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 ***)puStack_238);
  _objc_release(ppppuVar12);
  _objc_release(ppppuVar7);
  _objc_release(pppppuVar5);
  pppppuVar4 = pppppuVar2;
  __Unwind_Resume();
  pcStack_208 = FUN_105410b14;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar3 = pppppuVar6;
  ppppuVar16 = ppppuVar15;
  ppppuVar9 = ppppuVar8;
  puStack_240 = (undefined1 *)unaff_x24;
  ppppuStack_230 = pppppuVar2;
  pppuStack_228 = ppppuVar12;
  pppuStack_220 = ppppuVar7;
  ppppuStack_218 = pppppuVar5;
  pppuStack_210 = &ppuStack_150;
  _objc_retain(pppppuVar6);
  _objc_retain(ppppuVar15);
  if (pppppuVar4 != (undefined8 *****)0x0) {
    ppppuVar12 = pppppuVar4[1];
    _objc_retain(pppppuVar6);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar6;
      _objc_retainAutorelease(pppppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar6);
    func_0x00010002b838(auStack_278,pcVar1);
    _objc_retain(ppppuVar15);
    if (ppppuVar15 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar15);
      pcVar1 = (char *)ppppuVar15;
      func_0x00010bdc3520(ppppuVar15);
    }
    _objc_release(ppppuVar15);
    func_0x00010002b838(auStack_260,pcVar1);
    ppuStack_298 = (undefined8 ***)0x0;
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x00010007e1e8(&ppuStack_298,auStack_278,&lStack_248,2);
    pppppuVar3 = (undefined8 *****)&UNK_110886ab8;
    ppppuVar16 = (undefined8 ****)&ppuStack_298;
    (*(code *)(*ppppuVar12)[3])(ppppuVar12);
    ppuStack_280 = &ppuStack_298;
    func_0x00010007e5dc(&ppuStack_280);
    lVar13 = 0;
    ppppuVar9 = ppppuVar8;
    do {
      if ((&cStack_249)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(ppppuVar15);
  pppppuVar2 = pppppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(ppppuVar15);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(ppppuVar15);
  _objc_release(pppppuVar6);
  __Unwind_Resume();
  pcStack_2a8 = FUN_105410d44;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = pppppuVar3;
  ppppuVar15 = ppppuVar16;
  ppppuVar12 = ppppuVar9;
  ppppuVar7 = ppppuVar11;
  ppppuStack_2b0 = &pppuStack_210;
  _objc_retain(pppppuVar3);
  _objc_retain(ppppuVar16);
  _objc_retain(ppppuVar9);
  _objc_retain(ppppuVar11);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar12 = pppppuVar2[1];
    _objc_retain(pppppuVar3);
    if (pppppuVar3 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar3;
      _objc_retainAutorelease(pppppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar3);
    func_0x00010002b838(appuStack_358,pcVar1);
    _objc_retain(ppppuVar16);
    if (ppppuVar16 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar16);
      pcVar1 = (char *)ppppuVar16;
      func_0x00010bdc3520(ppppuVar16);
    }
    _objc_release(ppppuVar16);
    func_0x00010002b838(auStack_340,pcVar1);
    _objc_retain(ppppuVar9);
    if (ppppuVar9 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar9);
      pcVar1 = (char *)ppppuVar9;
      func_0x00010bdc3520(ppppuVar9);
    }
    _objc_release(ppppuVar9);
    func_0x00010002b838(auStack_328,pcVar1);
    _objc_retain(ppppuVar11);
    if (ppppuVar11 == (undefined8 ****)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar11);
      unaff_x26 = (char *)ppppuVar11;
      func_0x00010bdc3520();
    }
    _objc_release(ppppuVar11);
    func_0x00010002b838(auStack_310,unaff_x26);
    ppuStack_378 = (undefined8 ***)0x0;
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x00010007e1e8(&ppuStack_378,appuStack_358,&lStack_2f8,4);
    pppppuVar6 = (undefined8 *****)&UNK_110886b08;
    unaff_x25 = (char *)&ppuStack_378;
    ppppuVar15 = (undefined8 ****)&ppuStack_378;
    (*(code *)(*ppppuVar12)[3])(ppppuVar12);
    pppuStack_360 = (undefined8 ***)unaff_x25;
    func_0x00010007e5dc(&pppuStack_360);
    lVar13 = 0;
    ppppuVar12 = param_6;
    do {
      if ((&cStack_2f9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x60);
  }
  _objc_release(ppppuVar11);
  _objc_release(ppppuVar9);
  _objc_release(ppppuVar16);
  pppppuVar2 = pppppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(ppppuVar11);
  do {
    unaff_x25 = (char *)((long)unaff_x25 + -0x18);
  } while ((undefined8 ***)unaff_x25 != appuStack_358);
  _objc_release(ppppuVar11);
  _objc_release(ppppuVar9);
  _objc_release(ppppuVar16);
  _objc_release(pppppuVar3);
  pppppuVar5 = pppppuVar2;
  __Unwind_Resume();
  ppppuVar10 = (undefined8 ****)&ppuStack_440;
  pcStack_388 = FUN_105411078;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar8 = ppppuVar15;
  pppuStack_3d0 = (undefined8 ***)unaff_x26;
  pppuStack_3c8 = (undefined8 ***)unaff_x25;
  pppuStack_3c0 = appuStack_358;
  ppppuStack_3b8 = pppppuVar2;
  pppuStack_3b0 = ppppuVar11;
  pppuStack_3a8 = ppppuVar9;
  pppuStack_3a0 = ppppuVar16;
  ppppuStack_398 = pppppuVar3;
  ppppuStack_390 = &ppppuStack_2b0;
  _objc_retain(pppppuVar6);
  _objc_retain(ppppuVar15);
  _objc_retain(ppppuVar12);
  ppppuVar16 = (undefined8 ****)appuStack_358;
  if (pppppuVar5 != (undefined8 *****)0x0) {
    ppppuVar16 = pppppuVar5[1];
    _objc_retain(pppppuVar6);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar6;
      _objc_retainAutorelease(pppppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar6);
    func_0x00010002b838(appuStack_420,pcVar1);
    _objc_retain(ppppuVar15);
    if (ppppuVar15 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar15);
      pcVar1 = (char *)ppppuVar15;
      func_0x00010bdc3520(ppppuVar15);
    }
    _objc_release(ppppuVar15);
    func_0x00010002b838(auStack_408,pcVar1);
    _objc_retain(ppppuVar12);
    if (ppppuVar12 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar12);
      pcVar1 = (char *)ppppuVar12;
      func_0x00010bdc3520(ppppuVar12);
    }
    _objc_release(ppppuVar12);
    func_0x00010002b838(auStack_3f0,pcVar1);
    ppuStack_440 = (undefined8 ***)0x0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x00010007e1e8(&ppuStack_440,appuStack_420,&lStack_3d8,3);
    (*(code *)(*ppppuVar16)[3])(ppppuVar16,&UNK_110886c78,&ppuStack_440,ppppuVar7);
    puStack_428 = (undefined1 *)&ppuStack_440;
    func_0x00010007e5dc(&puStack_428);
    lVar13 = 0;
    ppppuVar8 = ppppuVar10;
    do {
      if ((&cStack_3d9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3f0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      ppppuVar16 = (undefined8 ****)&ppuStack_440;
    } while (lVar13 != -0x48);
  }
  _objc_release(ppppuVar12);
  _objc_release(ppppuVar15);
  pppppuVar2 = pppppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d8) {
    ___stack_chk_fail();
    _objc_release(ppppuVar12);
    do {
      ppppuVar16 = ppppuVar16 + -3;
    } while (ppppuVar16 != (undefined8 ****)appuStack_420);
    _objc_release(ppppuVar12);
    _objc_release(ppppuVar15);
    _objc_release(pppppuVar6);
    pppppuVar5 = pppppuVar2;
    __Unwind_Resume();
    pcStack_448 = FUN_105411338;
    ppppuStack_470 = pppppuVar2;
    pppuStack_468 = ppppuVar12;
    pppuStack_460 = ppppuVar15;
    ppppuStack_458 = pppppuVar6;
    ppppuStack_450 = &ppppuStack_390;
    _objc_retain(ppppuVar8);
    puStack_478 = PTR_PTR_1126e83e8;
    pppppuVar6 = &ppppuStack_480;
    ppppuStack_480 = pppppuVar5;
    _objc_msgSendSuper2(pppppuVar6,PTR_s_init_1125d9248);
    if (pppppuVar6 != (undefined8 *****)0x0) {
      _objc_retain(ppppuVar8);
      ppppuVar15 = pppppuVar6[1];
      pppppuVar6[1] = ppppuVar8;
      _objc_release(ppppuVar15);
      _objc_initWeak(auStack_488,pppppuVar6);
      ppppuVar15 = (undefined8 ****)PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_490,auStack_488);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar12 = pppppuVar6[2];
      pppppuVar6[2] = ppppuVar15;
      _objc_release(ppppuVar12);
      _objc_destroyWeak(auStack_490);
      _objc_destroyWeak(auStack_488);
    }
    _objc_release(ppppuVar8);
    return pppppuVar6;
  }
  return pppppuVar2;
}



/* Entry: 1054106e0; end: 105410853;  */

/* WARNING: Removing unreachable block (ram,0x000105411038) */
/* WARNING: Removing unreachable block (ram,0x000105410adc) */
/* WARNING: Removing unreachable block (ram,0x000105411300) */

undefined8 *****
FUN_1054106e0(long param_1,undefined8 *****param_2,undefined8 ****param_3,undefined8 ****param_4,
             undefined8 ****param_5,undefined8 ****param_6)

{
  char *pcVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  long *plVar12;
  long lVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ***unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined1 auStack_3d0 [8];
  undefined1 auStack_3c8 [8];
  undefined8 ****ppppuStack_3c0;
  undefined *puStack_3b8;
  undefined8 ****ppppuStack_3b0;
  undefined8 ***pppuStack_3a8;
  undefined8 ***pppuStack_3a0;
  undefined8 ****ppppuStack_398;
  undefined8 ****ppppuStack_390;
  code *pcStack_388;
  undefined8 **ppuStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 **appuStack_360 [3];
  undefined1 auStack_348 [24];
  undefined8 auStack_330 [2];
  char cStack_319;
  long lStack_318;
  undefined8 ***pppuStack_310;
  undefined8 ***pppuStack_308;
  undefined8 ***pppuStack_300;
  undefined8 ****ppppuStack_2f8;
  undefined8 ***pppuStack_2f0;
  undefined8 ***pppuStack_2e8;
  undefined8 ***pppuStack_2e0;
  undefined8 ****ppppuStack_2d8;
  undefined1 ****ppppuStack_2d0;
  code *pcStack_2c8;
  undefined8 **ppuStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 ***pppuStack_2a0;
  undefined8 **appuStack_298 [3];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 **ppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined8 ****ppppuStack_170;
  undefined8 ***pppuStack_168;
  undefined8 ***pppuStack_160;
  undefined8 ****ppppuStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 **ppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppppuVar15 = (undefined8 ****)&ppuStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar4 = param_2;
  ppppuVar14 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    ppuStack_80 = (undefined8 ***)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&ppuStack_80,auStack_60,&lStack_48,1);
    pppppuVar4 = (undefined8 *****)&UNK_110886a18;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_68 = (undefined1 *)&ppuStack_80;
    func_0x00010007e5dc(&puStack_68);
    ppppuVar14 = ppppuVar15;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      ppppuVar14 = ppppuVar15;
      param_4 = param_3;
    }
  }
  pppppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  ppppuVar7 = (undefined8 ****)&ppuStack_140;
  pcStack_88 = FUN_105410854;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar5 = pppppuVar4;
  ppppuVar15 = ppppuVar14;
  ppppuVar10 = param_4;
  ppppuVar16 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pppppuVar4);
  _objc_retain(ppppuVar14);
  _objc_retain(param_4);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar15 = pppppuVar2[1];
    _objc_retain(pppppuVar4);
    if (pppppuVar4 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar4;
      _objc_retainAutorelease(pppppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar4);
    func_0x00010002b838(auStack_120,pcVar1);
    _objc_retain(ppppuVar14);
    if (ppppuVar14 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar14);
      pcVar1 = (char *)ppppuVar14;
      func_0x00010bdc3520(ppppuVar14);
    }
    _objc_release(ppppuVar14);
    func_0x00010002b838(auStack_108,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 ****)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x25 = (char *)param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_f0,unaff_x25);
    ppuStack_140 = (undefined8 ***)0x0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&ppuStack_140,auStack_120,&lStack_d8,3);
    pppppuVar5 = (undefined8 *****)&UNK_110886a68;
    (*(code *)(*ppppuVar15)[3])(ppppuVar15);
    puStack_128 = (undefined1 *)&ppuStack_140;
    func_0x00010007e5dc(&puStack_128);
    lVar13 = 0;
    ppppuVar15 = ppppuVar7;
    ppppuVar10 = param_5;
    do {
      if ((&cStack_d9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &ppuStack_140;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(ppppuVar14);
  pppppuVar2 = pppppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_178 = auStack_120;
  do {
    unaff_x24 = (undefined8 ***)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 ***)puStack_178);
  _objc_release(param_4);
  _objc_release(ppppuVar14);
  _objc_release(pppppuVar4);
  pppppuVar3 = pppppuVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_105410b14;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = pppppuVar5;
  ppppuVar7 = ppppuVar15;
  ppppuVar11 = ppppuVar10;
  puStack_180 = (undefined1 *)unaff_x24;
  ppppuStack_170 = pppppuVar2;
  pppuStack_168 = param_4;
  pppuStack_160 = ppppuVar14;
  ppppuStack_158 = pppppuVar4;
  ppuStack_150 = &puStack_90;
  _objc_retain(pppppuVar5);
  _objc_retain(ppppuVar15);
  if (pppppuVar3 != (undefined8 *****)0x0) {
    ppppuVar14 = pppppuVar3[1];
    _objc_retain(pppppuVar5);
    if (pppppuVar5 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar5;
      _objc_retainAutorelease(pppppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar5);
    func_0x00010002b838(auStack_1b8,pcVar1);
    _objc_retain(ppppuVar15);
    if (ppppuVar15 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar15);
      pcVar1 = (char *)ppppuVar15;
      func_0x00010bdc3520(ppppuVar15);
    }
    _objc_release(ppppuVar15);
    func_0x00010002b838(auStack_1a0,pcVar1);
    ppuStack_1d8 = (undefined8 ***)0x0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&ppuStack_1d8,auStack_1b8,&lStack_188,2);
    pppppuVar6 = (undefined8 *****)&UNK_110886ab8;
    ppppuVar7 = (undefined8 ****)&ppuStack_1d8;
    (*(code *)(*ppppuVar14)[3])(ppppuVar14);
    ppuStack_1c0 = &ppuStack_1d8;
    func_0x00010007e5dc(&ppuStack_1c0);
    lVar13 = 0;
    ppppuVar11 = ppppuVar10;
    do {
      if ((&cStack_189)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(ppppuVar15);
  pppppuVar4 = pppppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pppppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(ppppuVar15);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(ppppuVar15);
  _objc_release(pppppuVar5);
  __Unwind_Resume();
  pcStack_1e8 = FUN_105410d44;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar2 = pppppuVar6;
  ppppuVar14 = ppppuVar7;
  ppppuVar15 = ppppuVar11;
  ppppuVar10 = ppppuVar16;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pppppuVar6);
  _objc_retain(ppppuVar7);
  _objc_retain(ppppuVar11);
  _objc_retain(ppppuVar16);
  if (pppppuVar4 != (undefined8 *****)0x0) {
    ppppuVar15 = pppppuVar4[1];
    _objc_retain(pppppuVar6);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar6;
      _objc_retainAutorelease(pppppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar6);
    func_0x00010002b838(appuStack_298,pcVar1);
    _objc_retain(ppppuVar7);
    if (ppppuVar7 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar7);
      pcVar1 = (char *)ppppuVar7;
      func_0x00010bdc3520(ppppuVar7);
    }
    _objc_release(ppppuVar7);
    func_0x00010002b838(auStack_280,pcVar1);
    _objc_retain(ppppuVar11);
    if (ppppuVar11 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar11);
      pcVar1 = (char *)ppppuVar11;
      func_0x00010bdc3520(ppppuVar11);
    }
    _objc_release(ppppuVar11);
    func_0x00010002b838(auStack_268,pcVar1);
    _objc_retain(ppppuVar16);
    if (ppppuVar16 == (undefined8 ****)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar16);
      unaff_x26 = (char *)ppppuVar16;
      func_0x00010bdc3520();
    }
    _objc_release(ppppuVar16);
    func_0x00010002b838(auStack_250,unaff_x26);
    ppuStack_2b8 = (undefined8 ***)0x0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x00010007e1e8(&ppuStack_2b8,appuStack_298,&lStack_238,4);
    pppppuVar2 = (undefined8 *****)&UNK_110886b08;
    unaff_x25 = (char *)&ppuStack_2b8;
    ppppuVar14 = (undefined8 ****)&ppuStack_2b8;
    (*(code *)(*ppppuVar15)[3])(ppppuVar15);
    pppuStack_2a0 = (undefined8 ***)unaff_x25;
    func_0x00010007e5dc(&pppuStack_2a0);
    lVar13 = 0;
    ppppuVar15 = param_6;
    do {
      if ((&cStack_239)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x60);
  }
  _objc_release(ppppuVar16);
  _objc_release(ppppuVar11);
  _objc_release(ppppuVar7);
  pppppuVar4 = pppppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
    ___stack_chk_fail();
    _objc_release(ppppuVar16);
    do {
      unaff_x25 = (char *)((long)unaff_x25 + -0x18);
    } while ((undefined8 ***)unaff_x25 != appuStack_298);
    _objc_release(ppppuVar16);
    _objc_release(ppppuVar11);
    _objc_release(ppppuVar7);
    _objc_release(pppppuVar6);
    pppppuVar5 = pppppuVar4;
    __Unwind_Resume();
    ppppuVar9 = (undefined8 ****)&ppuStack_380;
    pcStack_2c8 = FUN_105411078;
    lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppuVar8 = ppppuVar14;
    pppuStack_310 = (undefined8 ***)unaff_x26;
    pppuStack_308 = (undefined8 ***)unaff_x25;
    pppuStack_300 = appuStack_298;
    ppppuStack_2f8 = pppppuVar4;
    pppuStack_2f0 = ppppuVar16;
    pppuStack_2e8 = ppppuVar11;
    pppuStack_2e0 = ppppuVar7;
    ppppuStack_2d8 = pppppuVar6;
    ppppuStack_2d0 = &pppuStack_1f0;
    _objc_retain(pppppuVar2);
    _objc_retain(ppppuVar14);
    _objc_retain(ppppuVar15);
    ppppuVar16 = (undefined8 ****)appuStack_298;
    if (pppppuVar5 != (undefined8 *****)0x0) {
      ppppuVar16 = pppppuVar5[1];
      _objc_retain(pppppuVar2);
      if (pppppuVar2 == (undefined8 *****)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)pppppuVar2;
        _objc_retainAutorelease(pppppuVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pppppuVar2);
      func_0x00010002b838(appuStack_360,pcVar1);
      _objc_retain(ppppuVar14);
      if (ppppuVar14 == (undefined8 ****)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppppuVar14);
        pcVar1 = (char *)ppppuVar14;
        func_0x00010bdc3520(ppppuVar14);
      }
      _objc_release(ppppuVar14);
      func_0x00010002b838(auStack_348,pcVar1);
      _objc_retain(ppppuVar15);
      if (ppppuVar15 == (undefined8 ****)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppppuVar15);
        pcVar1 = (char *)ppppuVar15;
        func_0x00010bdc3520(ppppuVar15);
      }
      _objc_release(ppppuVar15);
      func_0x00010002b838(auStack_330,pcVar1);
      ppuStack_380 = (undefined8 ***)0x0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x00010007e1e8(&ppuStack_380,appuStack_360,&lStack_318,3);
      (*(code *)(*ppppuVar16)[3])(ppppuVar16,&UNK_110886c78,&ppuStack_380,ppppuVar10);
      puStack_368 = (undefined1 *)&ppuStack_380;
      func_0x00010007e5dc(&puStack_368);
      lVar13 = 0;
      ppppuVar8 = ppppuVar9;
      do {
        if ((&cStack_319)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_330 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
        ppppuVar16 = (undefined8 ****)&ppuStack_380;
      } while (lVar13 != -0x48);
    }
    _objc_release(ppppuVar15);
    _objc_release(ppppuVar14);
    pppppuVar4 = pppppuVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_318) {
      ___stack_chk_fail();
      _objc_release(ppppuVar15);
      do {
        ppppuVar16 = ppppuVar16 + -3;
      } while (ppppuVar16 != (undefined8 ****)appuStack_360);
      _objc_release(ppppuVar15);
      _objc_release(ppppuVar14);
      _objc_release(pppppuVar2);
      pppppuVar5 = pppppuVar4;
      __Unwind_Resume();
      pcStack_388 = FUN_105411338;
      ppppuStack_3b0 = pppppuVar4;
      pppuStack_3a8 = ppppuVar15;
      pppuStack_3a0 = ppppuVar14;
      ppppuStack_398 = pppppuVar2;
      ppppuStack_390 = &ppppuStack_2d0;
      _objc_retain(ppppuVar8);
      puStack_3b8 = PTR_PTR_1126e83e8;
      pppppuVar4 = &ppppuStack_3c0;
      ppppuStack_3c0 = pppppuVar5;
      _objc_msgSendSuper2(pppppuVar4,PTR_s_init_1125d9248);
      if (pppppuVar4 != (undefined8 *****)0x0) {
        _objc_retain(ppppuVar8);
        ppppuVar14 = pppppuVar4[1];
        pppppuVar4[1] = ppppuVar8;
        _objc_release(ppppuVar14);
        _objc_initWeak(auStack_3c8,pppppuVar4);
        ppppuVar14 = (undefined8 ****)PTR_PTR_1126ae720;
        _objc_copyWeak(auStack_3d0,auStack_3c8);
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar15 = pppppuVar4[2];
        pppppuVar4[2] = ppppuVar14;
        _objc_release(ppppuVar15);
        _objc_destroyWeak(auStack_3d0);
        _objc_destroyWeak(auStack_3c8);
      }
      _objc_release(ppppuVar8);
      return pppppuVar4;
    }
    return pppppuVar4;
  }
  return pppppuVar4;
}



/* Entry: 105410854; end: 105410b13;  */

/* WARNING: Removing unreachable block (ram,0x000105411038) */
/* WARNING: Removing unreachable block (ram,0x000105410adc) */
/* WARNING: Removing unreachable block (ram,0x000105411300) */

undefined8 ******
FUN_105410854(long param_1,undefined8 ******param_2,undefined8 *****param_3,undefined8 ****param_4,
             undefined8 ****param_5,undefined8 ****param_6)

{
  char *pcVar1;
  undefined8 ******ppppppuVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  undefined8 ******ppppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  long lVar12;
  undefined8 *****pppppuVar13;
  long *plVar14;
  undefined8 *****pppppuVar15;
  undefined8 ****unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined1 auStack_350 [8];
  undefined1 auStack_348 [8];
  undefined8 *****pppppuStack_340;
  undefined *puStack_338;
  undefined8 *****pppppuStack_330;
  undefined8 ***pppuStack_328;
  undefined8 ****ppppuStack_320;
  undefined8 *****pppppuStack_318;
  undefined1 ****ppppuStack_310;
  code *pcStack_308;
  undefined8 ***pppuStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 **appuStack_2e0 [3];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined8 ***pppuStack_290;
  undefined8 ***pppuStack_288;
  undefined8 ***pppuStack_280;
  undefined8 *****pppppuStack_278;
  undefined8 ***pppuStack_270;
  undefined8 ***pppuStack_268;
  undefined8 ****ppppuStack_260;
  undefined8 *****pppppuStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 ***pppuStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 ***pppuStack_220;
  undefined8 **appuStack_218 [3];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 ***pppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined8 *****pppppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 *****pppppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pppppuVar15 = (undefined8 *****)&pppuStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar5 = param_2;
  pppppuVar6 = param_3;
  ppppuVar8 = param_4;
  ppppuVar10 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 ******)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 ****)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x25 = (char *)param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,unaff_x25);
    pppuStack_c0 = (undefined8 ****)0x0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&pppuStack_c0,auStack_a0,&lStack_58,3);
    ppppppuVar5 = (undefined8 ******)&UNK_110886a68;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = (undefined1 *)&pppuStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar12 = 0;
    pppppuVar6 = pppppuVar15;
    ppppuVar8 = param_5;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &pppuStack_c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  ppppppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = (undefined8 ****)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 ****)puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  ppppppuVar3 = ppppppuVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_105410b14;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar4 = ppppppuVar5;
  pppppuVar15 = pppppuVar6;
  ppppuVar9 = ppppuVar8;
  puStack_100 = (undefined1 *)unaff_x24;
  pppppuStack_f0 = ppppppuVar2;
  pppuStack_e8 = param_4;
  ppppuStack_e0 = param_3;
  pppppuStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppppppuVar5);
  _objc_retain(pppppuVar6);
  if (ppppppuVar3 != (undefined8 ******)0x0) {
    pppppuVar13 = ppppppuVar3[1];
    _objc_retain(ppppppuVar5);
    if (ppppppuVar5 == (undefined8 ******)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)ppppppuVar5;
      _objc_retainAutorelease(ppppppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(ppppppuVar5);
    func_0x00010002b838(auStack_138,pcVar1);
    _objc_retain(pppppuVar6);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pppppuVar6);
      pcVar1 = (char *)pppppuVar6;
      func_0x00010bdc3520(pppppuVar6);
    }
    _objc_release(pppppuVar6);
    func_0x00010002b838(auStack_120,pcVar1);
    pppuStack_158 = (undefined8 ****)0x0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&pppuStack_158,auStack_138,&lStack_108,2);
    ppppppuVar4 = (undefined8 ******)&UNK_110886ab8;
    pppppuVar15 = (undefined8 *****)&pppuStack_158;
    (*(code *)(*pppppuVar13)[3])(pppppuVar13);
    pppuStack_140 = &pppuStack_158;
    func_0x00010007e5dc(&pppuStack_140);
    lVar12 = 0;
    ppppuVar9 = ppppuVar8;
    do {
      if ((&cStack_109)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pppppuVar6);
  ppppppuVar2 = ppppppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pppppuVar6);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pppppuVar6);
    _objc_release(ppppppuVar5);
    __Unwind_Resume();
    pcStack_168 = FUN_105410d44;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppppuVar5 = ppppppuVar4;
    pppppuVar6 = pppppuVar15;
    ppppuVar8 = ppppuVar9;
    ppppuVar11 = ppppuVar10;
    ppuStack_170 = &puStack_d0;
    _objc_retain(ppppppuVar4);
    _objc_retain(pppppuVar15);
    _objc_retain(ppppuVar9);
    _objc_retain(ppppuVar10);
    if (ppppppuVar2 != (undefined8 ******)0x0) {
      pppppuVar13 = ppppppuVar2[1];
      _objc_retain(ppppppuVar4);
      if (ppppppuVar4 == (undefined8 ******)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)ppppppuVar4;
        _objc_retainAutorelease(ppppppuVar4);
        func_0x00010bdc3520();
      }
      _objc_release(ppppppuVar4);
      func_0x00010002b838(appuStack_218,pcVar1);
      _objc_retain(pppppuVar15);
      if (pppppuVar15 == (undefined8 *****)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pppppuVar15);
        pcVar1 = (char *)pppppuVar15;
        func_0x00010bdc3520(pppppuVar15);
      }
      _objc_release(pppppuVar15);
      func_0x00010002b838(auStack_200,pcVar1);
      _objc_retain(ppppuVar9);
      if (ppppuVar9 == (undefined8 ****)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppppuVar9);
        pcVar1 = (char *)ppppuVar9;
        func_0x00010bdc3520(ppppuVar9);
      }
      _objc_release(ppppuVar9);
      func_0x00010002b838(auStack_1e8,pcVar1);
      _objc_retain(ppppuVar10);
      if (ppppuVar10 == (undefined8 ****)0x0) {
        unaff_x26 = "";
      }
      else {
        _objc_retainAutorelease(ppppuVar10);
        unaff_x26 = (char *)ppppuVar10;
        func_0x00010bdc3520();
      }
      _objc_release(ppppuVar10);
      func_0x00010002b838(auStack_1d0,unaff_x26);
      pppuStack_238 = (undefined8 ****)0x0;
      uStack_230 = 0;
      uStack_228 = 0;
      func_0x00010007e1e8(&pppuStack_238,appuStack_218,&lStack_1b8,4);
      ppppppuVar5 = (undefined8 ******)&UNK_110886b08;
      unaff_x25 = (char *)&pppuStack_238;
      pppppuVar6 = (undefined8 *****)&pppuStack_238;
      (*(code *)(*pppppuVar13)[3])(pppppuVar13);
      pppuStack_220 = (undefined8 ***)unaff_x25;
      func_0x00010007e5dc(&pppuStack_220);
      lVar12 = 0;
      ppppuVar8 = param_6;
      do {
        if ((&cStack_1b9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x60);
    }
    _objc_release(ppppuVar10);
    _objc_release(ppppuVar9);
    _objc_release(pppppuVar15);
    ppppppuVar2 = ppppppuVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      _objc_release(ppppuVar10);
      do {
        unaff_x25 = (char *)((long)unaff_x25 + -0x18);
      } while ((undefined8 ***)unaff_x25 != appuStack_218);
      _objc_release(ppppuVar10);
      _objc_release(ppppuVar9);
      _objc_release(pppppuVar15);
      _objc_release(ppppppuVar4);
      ppppppuVar3 = ppppppuVar2;
      __Unwind_Resume();
      pppppuVar7 = (undefined8 *****)&pppuStack_300;
      pcStack_248 = FUN_105411078;
      lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppppuVar13 = pppppuVar6;
      pppuStack_290 = (undefined8 ***)unaff_x26;
      pppuStack_288 = (undefined8 ***)unaff_x25;
      pppuStack_280 = appuStack_218;
      pppppuStack_278 = ppppppuVar2;
      pppuStack_270 = ppppuVar10;
      pppuStack_268 = ppppuVar9;
      ppppuStack_260 = pppppuVar15;
      pppppuStack_258 = ppppppuVar4;
      pppuStack_250 = &ppuStack_170;
      _objc_retain(ppppppuVar5);
      _objc_retain(pppppuVar6);
      _objc_retain(ppppuVar8);
      ppppuVar10 = (undefined8 ****)appuStack_218;
      if (ppppppuVar3 != (undefined8 ******)0x0) {
        pppppuVar15 = ppppppuVar3[1];
        _objc_retain(ppppppuVar5);
        if (ppppppuVar5 == (undefined8 ******)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = (char *)ppppppuVar5;
          _objc_retainAutorelease(ppppppuVar5);
          func_0x00010bdc3520();
        }
        _objc_release(ppppppuVar5);
        func_0x00010002b838(appuStack_2e0,pcVar1);
        _objc_retain(pppppuVar6);
        if (pppppuVar6 == (undefined8 *****)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pppppuVar6);
          pcVar1 = (char *)pppppuVar6;
          func_0x00010bdc3520(pppppuVar6);
        }
        _objc_release(pppppuVar6);
        func_0x00010002b838(auStack_2c8,pcVar1);
        _objc_retain(ppppuVar8);
        if (ppppuVar8 == (undefined8 ****)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(ppppuVar8);
          pcVar1 = (char *)ppppuVar8;
          func_0x00010bdc3520(ppppuVar8);
        }
        _objc_release(ppppuVar8);
        func_0x00010002b838(auStack_2b0,pcVar1);
        pppuStack_300 = (undefined8 ****)0x0;
        uStack_2f8 = 0;
        uStack_2f0 = 0;
        func_0x00010007e1e8(&pppuStack_300,appuStack_2e0,&lStack_298,3);
        (*(code *)(*pppppuVar15)[3])(pppppuVar15,&UNK_110886c78,&pppuStack_300,ppppuVar11);
        puStack_2e8 = (undefined1 *)&pppuStack_300;
        func_0x00010007e5dc(&puStack_2e8);
        lVar12 = 0;
        pppppuVar13 = pppppuVar7;
        do {
          if ((&cStack_299)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
          ppppuVar10 = &pppuStack_300;
        } while (lVar12 != -0x48);
      }
      _objc_release(ppppuVar8);
      _objc_release(pppppuVar6);
      ppppppuVar2 = ppppppuVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
        ___stack_chk_fail();
        _objc_release(ppppuVar8);
        do {
          ppppuVar10 = ppppuVar10 + -3;
        } while (ppppuVar10 != (undefined8 ****)appuStack_2e0);
        _objc_release(ppppuVar8);
        _objc_release(pppppuVar6);
        _objc_release(ppppppuVar5);
        ppppppuVar4 = ppppppuVar2;
        __Unwind_Resume();
        pcStack_308 = FUN_105411338;
        pppppuStack_330 = ppppppuVar2;
        pppuStack_328 = ppppuVar8;
        ppppuStack_320 = pppppuVar6;
        pppppuStack_318 = ppppppuVar5;
        ppppuStack_310 = &pppuStack_250;
        _objc_retain(pppppuVar13);
        puStack_338 = PTR_PTR_1126e83e8;
        ppppppuVar5 = &pppppuStack_340;
        pppppuStack_340 = ppppppuVar4;
        _objc_msgSendSuper2(ppppppuVar5,PTR_s_init_1125d9248);
        if (ppppppuVar5 != (undefined8 ******)0x0) {
          _objc_retain(pppppuVar13);
          pppppuVar6 = ppppppuVar5[1];
          ppppppuVar5[1] = pppppuVar13;
          _objc_release(pppppuVar6);
          _objc_initWeak(auStack_348,ppppppuVar5);
          pppppuVar6 = (undefined8 *****)PTR_PTR_1126ae720;
          _objc_copyWeak(auStack_350,auStack_348);
          func_0x00010bf11fe0();
          _objc_retainAutoreleasedReturnValue();
          pppppuVar15 = ppppppuVar5[2];
          ppppppuVar5[2] = pppppuVar6;
          _objc_release(pppppuVar15);
          _objc_destroyWeak(auStack_350);
          _objc_destroyWeak(auStack_348);
        }
        _objc_release(pppppuVar13);
        return ppppppuVar5;
      }
      return ppppppuVar2;
    }
    return ppppppuVar2;
  }
  return ppppppuVar2;
}



/* Entry: 105410b14; end: 105410d43;  */

/* WARNING: Removing unreachable block (ram,0x000105411038) */
/* WARNING: Removing unreachable block (ram,0x000105411300) */

undefined8 ******
FUN_105410b14(long param_1,undefined8 ******param_2,undefined8 *****param_3,char *param_4,
             char *param_5,char *param_6)

{
  char *pcVar1;
  undefined8 ******ppppppuVar2;
  char *pcVar3;
  undefined8 ******ppppppuVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  undefined8 *****pppppuVar7;
  char *pcVar8;
  undefined8 *****pppppuVar9;
  long lVar10;
  long *plVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****unaff_x25;
  char *unaff_x26;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  undefined8 *****pppppuStack_280;
  undefined *puStack_278;
  undefined8 *****pppppuStack_270;
  char *pcStack_268;
  undefined8 ****ppppuStack_260;
  undefined8 *****pppppuStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 **appuStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  char *pcStack_1d0;
  undefined8 ***pppuStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 *****pppppuStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  undefined8 ****ppppuStack_1a0;
  undefined8 *****pppppuStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 ***pppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  undefined8 **appuStack_158 [3];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 ***pppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ***pppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar5 = param_2;
  pppppuVar12 = param_3;
  pcVar1 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 ******)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    pppuStack_98 = (undefined8 ****)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&pppuStack_98,auStack_78,&lStack_48,2);
    ppppppuVar5 = (undefined8 ******)&UNK_110886ab8;
    pppppuVar12 = (undefined8 *****)&pppuStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pppuStack_80 = &pppuStack_98;
    func_0x00010007e5dc(&pppuStack_80);
    lVar10 = 0;
    pcVar1 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_3);
  ppppppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_a8 = FUN_105410d44;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar6 = ppppppuVar5;
  pppppuVar9 = pppppuVar12;
  pcVar3 = pcVar1;
  pcVar8 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(ppppppuVar5);
  _objc_retain(pppppuVar12);
  _objc_retain(pcVar1);
  _objc_retain(param_5);
  if (ppppppuVar2 != (undefined8 ******)0x0) {
    pppppuVar13 = ppppppuVar2[1];
    _objc_retain(ppppppuVar5);
    if (ppppppuVar5 == (undefined8 ******)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)ppppppuVar5;
      _objc_retainAutorelease(ppppppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(ppppppuVar5);
    func_0x00010002b838(appuStack_158,pcVar3);
    _objc_retain(pppppuVar12);
    if (pppppuVar12 == (undefined8 *****)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pppppuVar12);
      pcVar3 = (char *)pppppuVar12;
      func_0x00010bdc3520(pppppuVar12);
    }
    _objc_release(pppppuVar12);
    func_0x00010002b838(auStack_140,pcVar3);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar3 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_128,pcVar3);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_110,unaff_x26);
    pppuStack_178 = (undefined8 ****)0x0;
    uStack_170 = 0;
    uStack_168 = 0;
    func_0x00010007e1e8(&pppuStack_178,appuStack_158,&lStack_f8,4);
    ppppppuVar6 = (undefined8 ******)&UNK_110886b08;
    unaff_x25 = &pppuStack_178;
    pppppuVar9 = (undefined8 *****)&pppuStack_178;
    (*(code *)(*pppppuVar13)[3])(pppppuVar13);
    pppuStack_160 = unaff_x25;
    func_0x00010007e5dc(&pppuStack_160);
    lVar10 = 0;
    pcVar3 = param_6;
    do {
      if ((&cStack_f9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(pcVar1);
  _objc_release(pppppuVar12);
  ppppppuVar2 = ppppppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return ppppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != (undefined8 ****)appuStack_158);
  _objc_release(param_5);
  _objc_release(pcVar1);
  _objc_release(pppppuVar12);
  _objc_release(ppppppuVar5);
  ppppppuVar4 = ppppppuVar2;
  __Unwind_Resume();
  pppppuVar7 = (undefined8 *****)&pppuStack_240;
  pcStack_188 = FUN_105411078;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar13 = pppppuVar9;
  pcStack_1d0 = unaff_x26;
  pppuStack_1c8 = unaff_x25;
  pppuStack_1c0 = appuStack_158;
  pppppuStack_1b8 = ppppppuVar2;
  pcStack_1b0 = param_5;
  pcStack_1a8 = pcVar1;
  ppppuStack_1a0 = pppppuVar12;
  pppppuStack_198 = ppppppuVar5;
  ppuStack_190 = &puStack_b0;
  _objc_retain(ppppppuVar6);
  _objc_retain(pppppuVar9);
  _objc_retain(pcVar3);
  ppppuVar14 = (undefined8 ****)appuStack_158;
  if (ppppppuVar4 != (undefined8 ******)0x0) {
    pppppuVar12 = ppppppuVar4[1];
    _objc_retain(ppppppuVar6);
    if (ppppppuVar6 == (undefined8 ******)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)ppppppuVar6;
      _objc_retainAutorelease(ppppppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppppppuVar6);
    func_0x00010002b838(appuStack_220,pcVar1);
    _objc_retain(pppppuVar9);
    if (pppppuVar9 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pppppuVar9);
      pcVar1 = (char *)pppppuVar9;
      func_0x00010bdc3520(pppppuVar9);
    }
    _objc_release(pppppuVar9);
    func_0x00010002b838(auStack_208,pcVar1);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar1 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_1f0,pcVar1);
    pppuStack_240 = (undefined8 ****)0x0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&pppuStack_240,appuStack_220,&lStack_1d8,3);
    (*(code *)(*pppppuVar12)[3])(pppppuVar12,&UNK_110886c78,&pppuStack_240,pcVar8);
    puStack_228 = (undefined1 *)&pppuStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar10 = 0;
    pppppuVar13 = pppppuVar7;
    do {
      if ((&cStack_1d9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      ppppuVar14 = &pppuStack_240;
    } while (lVar10 != -0x48);
  }
  _objc_release(pcVar3);
  _objc_release(pppppuVar9);
  ppppppuVar5 = ppppppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
    ___stack_chk_fail();
    _objc_release(pcVar3);
    do {
      ppppuVar14 = ppppuVar14 + -3;
    } while (ppppuVar14 != (undefined8 ****)appuStack_220);
    _objc_release(pcVar3);
    _objc_release(pppppuVar9);
    _objc_release(ppppppuVar6);
    ppppppuVar2 = ppppppuVar5;
    __Unwind_Resume();
    pcStack_248 = FUN_105411338;
    pppppuStack_270 = ppppppuVar5;
    pcStack_268 = pcVar3;
    ppppuStack_260 = pppppuVar9;
    pppppuStack_258 = ppppppuVar6;
    pppuStack_250 = &ppuStack_190;
    _objc_retain(pppppuVar13);
    puStack_278 = PTR_PTR_1126e83e8;
    ppppppuVar5 = &pppppuStack_280;
    pppppuStack_280 = ppppppuVar2;
    _objc_msgSendSuper2(ppppppuVar5,PTR_s_init_1125d9248);
    if (ppppppuVar5 != (undefined8 ******)0x0) {
      _objc_retain(pppppuVar13);
      pppppuVar12 = ppppppuVar5[1];
      ppppppuVar5[1] = pppppuVar13;
      _objc_release(pppppuVar12);
      _objc_initWeak(auStack_288,ppppppuVar5);
      pppppuVar12 = (undefined8 *****)PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_290,auStack_288);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar9 = ppppppuVar5[2];
      ppppppuVar5[2] = pppppuVar12;
      _objc_release(pppppuVar9);
      _objc_destroyWeak(auStack_290);
      _objc_destroyWeak(auStack_288);
    }
    _objc_release(pppppuVar13);
    return ppppppuVar5;
  }
  return ppppppuVar5;
}



/* Entry: 105410d44; end: 105411077;  */

/* WARNING: Removing unreachable block (ram,0x000105411038) */
/* WARNING: Removing unreachable block (ram,0x000105411300) */

undefined8 ******
FUN_105410d44(long param_1,undefined8 ******param_2,undefined8 *****param_3,char *param_4,
             char *param_5,char *param_6)

{
  char *pcVar1;
  undefined8 ******ppppppuVar2;
  undefined8 ******ppppppuVar3;
  char *pcVar4;
  undefined8 ******ppppppuVar5;
  undefined8 *****pppppuVar6;
  char *pcVar7;
  undefined8 *****pppppuVar8;
  long lVar9;
  undefined8 *****pppppuVar10;
  long *plVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****unaff_x25;
  char *unaff_x26;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined8 *****pppppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 *****pppppuStack_1d0;
  char *pcStack_1c8;
  undefined8 ****ppppuStack_1c0;
  undefined8 *****pppppuStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 **appuStack_180 [3];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  undefined8 ***pppuStack_128;
  undefined8 ***pppuStack_120;
  undefined8 *****pppppuStack_118;
  char *pcStack_110;
  char *pcStack_108;
  undefined8 ****ppppuStack_100;
  undefined8 *****pppppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 ***pppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 **appuStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar5 = param_2;
  pppppuVar6 = param_3;
  pcVar1 = param_4;
  pcVar7 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 ******)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(appuStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,unaff_x26);
    pppuStack_d8 = (undefined8 ****)0x0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x00010007e1e8(&pppuStack_d8,appuStack_b8,&lStack_58,4);
    ppppppuVar5 = (undefined8 ******)&UNK_110886b08;
    unaff_x25 = &pppuStack_d8;
    pppppuVar6 = (undefined8 *****)&pppuStack_d8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pppuStack_c0 = unaff_x25;
    func_0x00010007e5dc(&pppuStack_c0);
    lVar9 = 0;
    pcVar1 = param_6;
    do {
      if ((&cStack_59)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  ppppppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != (undefined8 ****)appuStack_b8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  ppppppuVar3 = ppppppuVar2;
  __Unwind_Resume();
  pppppuVar8 = (undefined8 *****)&pppuStack_1a0;
  pcStack_e8 = FUN_105411078;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar10 = pppppuVar6;
  pcStack_130 = unaff_x26;
  pppuStack_128 = unaff_x25;
  pppuStack_120 = appuStack_b8;
  pppppuStack_118 = ppppppuVar2;
  pcStack_110 = param_5;
  pcStack_108 = param_4;
  ppppuStack_100 = param_3;
  pppppuStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(ppppppuVar5);
  _objc_retain(pppppuVar6);
  _objc_retain(pcVar1);
  ppppuVar12 = (undefined8 ****)appuStack_b8;
  if (ppppppuVar3 != (undefined8 ******)0x0) {
    pppppuVar10 = ppppppuVar3[1];
    _objc_retain(ppppppuVar5);
    if (ppppppuVar5 == (undefined8 ******)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)ppppppuVar5;
      _objc_retainAutorelease(ppppppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(ppppppuVar5);
    func_0x00010002b838(appuStack_180,pcVar4);
    _objc_retain(pppppuVar6);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pppppuVar6);
      pcVar4 = (char *)pppppuVar6;
      func_0x00010bdc3520(pppppuVar6);
    }
    _objc_release(pppppuVar6);
    func_0x00010002b838(auStack_168,pcVar4);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar4 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_150,pcVar4);
    pppuStack_1a0 = (undefined8 ****)0x0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&pppuStack_1a0,appuStack_180,&lStack_138,3);
    (*(code *)(*pppppuVar10)[3])(pppppuVar10,&UNK_110886c78,&pppuStack_1a0,pcVar7);
    puStack_188 = (undefined1 *)&pppuStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    lVar9 = 0;
    pppppuVar10 = pppppuVar8;
    do {
      if ((&cStack_139)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
      ppppuVar12 = &pppuStack_1a0;
    } while (lVar9 != -0x48);
  }
  _objc_release(pcVar1);
  _objc_release(pppppuVar6);
  ppppppuVar2 = ppppppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    _objc_release(pcVar1);
    do {
      ppppuVar12 = ppppuVar12 + -3;
    } while (ppppuVar12 != (undefined8 ****)appuStack_180);
    _objc_release(pcVar1);
    _objc_release(pppppuVar6);
    _objc_release(ppppppuVar5);
    ppppppuVar3 = ppppppuVar2;
    __Unwind_Resume();
    pcStack_1a8 = FUN_105411338;
    pppppuStack_1d0 = ppppppuVar2;
    pcStack_1c8 = pcVar1;
    ppppuStack_1c0 = pppppuVar6;
    pppppuStack_1b8 = ppppppuVar5;
    ppuStack_1b0 = &puStack_f0;
    _objc_retain(pppppuVar10);
    puStack_1d8 = PTR_PTR_1126e83e8;
    ppppppuVar5 = &pppppuStack_1e0;
    pppppuStack_1e0 = ppppppuVar3;
    _objc_msgSendSuper2(ppppppuVar5,PTR_s_init_1125d9248);
    if (ppppppuVar5 != (undefined8 ******)0x0) {
      _objc_retain(pppppuVar10);
      pppppuVar6 = ppppppuVar5[1];
      ppppppuVar5[1] = pppppuVar10;
      _objc_release(pppppuVar6);
      _objc_initWeak(auStack_1e8,ppppppuVar5);
      pppppuVar6 = (undefined8 *****)PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_1f0,auStack_1e8);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar8 = ppppppuVar5[2];
      ppppppuVar5[2] = pppppuVar6;
      _objc_release(pppppuVar8);
      _objc_destroyWeak(auStack_1f0);
      _objc_destroyWeak(auStack_1e8);
    }
    _objc_release(pppppuVar10);
    return ppppppuVar5;
  }
  return ppppppuVar2;
}



/* Entry: 105411078; end: 105411337;  */

/* WARNING: Removing unreachable block (ram,0x000105411300) */

undefined8 ****
FUN_105411078(long param_1,undefined8 ****param_2,undefined8 ***param_3,char *param_4,
             undefined8 param_5)

{
  char *pcVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  long *plVar8;
  undefined8 **unaff_x24;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined8 ***pppuStack_100;
  undefined *puStack_f8;
  undefined8 ***pppuStack_f0;
  char *pcStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 ***pppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pppuVar4 = (undefined8 ***)&puStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 ***)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    puStack_c0 = (undefined8 **)0x0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&puStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110886c78,&puStack_c0,param_5);
    puStack_a8 = (undefined1 *)&puStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar7 = 0;
    pppuVar5 = pppuVar4;
    do {
      if ((&cStack_59)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
      unaff_x24 = &puStack_c0;
    } while (lVar7 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  ppppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 **)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 **)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    ppppuVar3 = ppppuVar2;
    __Unwind_Resume();
    pcStack_c8 = FUN_105411338;
    pppuStack_f0 = ppppuVar2;
    pcStack_e8 = param_4;
    ppuStack_e0 = param_3;
    pppuStack_d8 = param_2;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_retain(pppuVar5);
    puStack_f8 = PTR_PTR_1126e83e8;
    ppppuVar2 = &pppuStack_100;
    pppuStack_100 = ppppuVar3;
    _objc_msgSendSuper2(ppppuVar2,PTR_s_init_1125d9248);
    if (ppppuVar2 != (undefined8 ****)0x0) {
      _objc_retain(pppuVar5);
      pppuVar4 = ppppuVar2[1];
      ppppuVar2[1] = pppuVar5;
      _objc_release(pppuVar4);
      _objc_initWeak(auStack_108,ppppuVar2);
      pppuVar4 = (undefined8 ***)PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_110,auStack_108);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar6 = ppppuVar2[2];
      ppppuVar2[2] = pppuVar4;
      _objc_release(pppuVar6);
      _objc_destroyWeak(auStack_110);
      _objc_destroyWeak(auStack_108);
    }
    _objc_release(pppuVar5);
    return ppppuVar2;
  }
  return ppppuVar2;
}



/* Entry: 105411338; end: 105411453; -[SCAdConfigAdTrackV2ConfigProvider initWithCircumstanceEngine:] */

undefined8 * FUN_105411338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e83e8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105411454; end: 105411493;  */

void FUN_105411454(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be137c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105411494; end: 10541157f; -[SCAdConfigAdTrackV2ConfigProvider config] */

void FUN_105411494(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b8c88;
  _objc_alloc(PTR_PTR_1126b8c88);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf8f540();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2630a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0f4860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f760(puVar1,param_2,uVar3,uVar5,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105411580; end: 10541160f; -[SCAdConfigAdTrackV2ConfigProvider isEnabledForAdType:] */

undefined8 FUN_105411580(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2630a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf4b900(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 105411610; end: 105411877; -[SCAdConfigAdTrackV2ConfigProvider _fetchRemoteConfig] */

void FUN_105411610(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c1195e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ddb158,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8c90;
  _objc_alloc(PTR_PTR_1126b8c90);
  lVar4 = lVar2;
  func_0x00010c296d80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = 0;
  func_0x00010c008360(puVar3,param_2,lVar4,&lStack_a0);
  lVar1 = lStack_a0;
  _objc_retain(lStack_a0);
  _objc_release(lVar4);
  if (lVar1 == 0) {
    lVar4 = lVar2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      puVar5 = PTR_PTR_1126b8c88;
      _objc_alloc(PTR_PTR_1126b8c88);
      puVar6 = puVar3;
      func_0x00010c24cbe0(puVar3);
      puVar7 = puVar3;
      func_0x00010c263060(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar11 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = (code *)0x1054118a8;
      puStack_80 = &UNK_110842ff8;
      puStack_78 = puVar8;
      _objc_retain();
      func_0x00010bf980c0(puVar7,param_2,&puStack_98);
      puVar9 = puVar8;
      func_0x00010bf51e00(puVar8);
      _objc_release(puStack_78);
      _objc_release(puVar8);
      puVar8 = puVar3;
      func_0x00010c0f4860(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puStack_98 = puVar11;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_10541190c;
      puStack_80 = &UNK_110886d28;
      puStack_78 = puVar10;
      _objc_retain();
      func_0x00010bf97ce0(puVar8,param_2,&puStack_98);
      puVar11 = puVar10;
      func_0x00010bf51e00(puVar10);
      _objc_release(puStack_78);
      _objc_release(puVar10);
      func_0x00010c00f760(puVar5,param_2,puVar6,puVar9,puVar11);
      _objc_release(puVar11);
      _objc_release(puVar8);
      _objc_release(puVar9);
      _objc_release(puVar7);
      goto LAB_105411838;
    }
  }
  puVar5 = PTR_PTR_1126b8c88;
  _objc_alloc(PTR_PTR_1126b8c88);
  func_0x00010c00f760();
LAB_105411838:
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105411878; end: 10541190b; -[SCAdConfigAdTrackV2ConfigProvider .cxx_destruct] */

void FUN_105411878(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10541190c; end: 10541197b;  */

void FUN_10541190c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0df7c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10541197c; end: 10541197f; -[SCAdConfigProviderImpl featureFlags] */

void FUN_10541197c(void)

{
  return;
}



/* Entry: 105411980; end: 105411987; -[SCAdConfigProviderImpl optimisticFeatureFlagEnabled:] */

void FUN_105411980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,param_3,1);
  return;
}



/* Entry: 105411988; end: 1054119af; -[SCAdConfigProviderImpl userStoryNoFillAdResponseTTLInMs] */

double FUN_105411988(long param_1,undefined8 param_2)

{
  func_0x00010be1fbe0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddb198,180000);
  return (double)param_1;
}



/* Entry: 1054119b0; end: 1054119d7; -[SCAdConfigProviderImpl ciNoFillAdResponseTTLInMs] */

double FUN_1054119b0(long param_1,undefined8 param_2)

{
  func_0x00010be1fbe0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddb1b8,180000);
  return (double)param_1;
}



/* Entry: 1054119d8; end: 1054119ff; -[SCAdConfigProviderImpl publisherNoFillAdResponseTTLInMs] */

double FUN_1054119d8(long param_1,undefined8 param_2)

{
  func_0x00010be1fbe0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddb1d8,300000);
  return (double)param_1;
}



/* Entry: 105411a00; end: 105411a27; -[SCAdConfigProviderImpl publicNoFillAdResponseTTLInMs] */

double FUN_105411a00(long param_1,undefined8 param_2)

{
  func_0x00010be1fbe0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddb1f8,180000);
  return (double)param_1;
}



/* Entry: 105411a28; end: 105411a4b; -[SCAdConfigProviderImpl publisherLoadingSpinnerTTLInMs] */

double FUN_105411a28(long param_1,undefined8 param_2)

{
  func_0x00010be1fbe0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddb218,3000);
  return (double)param_1;
}



/* Entry: 105411a4c; end: 105411a7f; -[SCAdConfigProviderImpl initResponseTTLInSec] */

double FUN_105411a4c(long param_1,undefined8 param_2)

{
  func_0x00010be1fbe0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddb758,900000);
  return (double)param_1 / 1000.0;
}



/* Entry: 105411a80; end: 105411b93; -[SCAdConfigProviderImpl supportedAdTypesList] */

void FUN_105411a80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b8c98;
  func_0x00010c263040();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b8ca0;
    func_0x00010beffb80(PTR_PTR_1126b8ca0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x0001006372a4();
    puVar4 = puVar3;
    func_0x000100504554();
    puVar5 = puVar4;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_retain(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar1);
    puVar5 = puVar1;
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}


