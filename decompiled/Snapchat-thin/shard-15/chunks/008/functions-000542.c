/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bc89d60; end: 10bc89dc7; +[SCJanusPasskeyEnrollmentSkipped descriptor] */

void FUN_10bc89d60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdce8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e410,
                        &PTR____CFConstantStringClassReference_111027678,
                        &PTR_s_snapchat_janus_api_113402a48,&PTR_DAT_113402a60,2,0x10,0x1c);
    puRam00000001137fdce8 = puVar1;
  }
  return;
}



/* Entry: 10bc89dc8; end: 10bc89eab; +[SCJanusPasskeyEnrollmentSkipReason descriptor] */

void FUN_10bc89dc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdcf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e460,
                        &PTR____CFConstantStringClassReference_111027698,
                        &PTR_s_snapchat_janus_api_113402a48,0,0,4,0x1c);
    puRam00000001137fdcf0 = puVar1;
  }
  return;
}



/* Entry: 10bc89eac; end: 10bc89eb7;  */

bool FUN_10bc89eac(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10bc89eb8; end: 10bc89f1f; +[SCJanusPasskeyEnrollmentError descriptor] */

void FUN_10bc89eb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e500,
                        &PTR____CFConstantStringClassReference_1110276d8,
                        &PTR_s_snapchat_janus_api_113402aa0,&PTR_s_error_113402ab8,2,0x10,0x1c);
    puRam00000001137fdd00 = puVar1;
  }
  return;
}



/* Entry: 10bc89f20; end: 10bc8a003; +[SCJanusPasskeyEnrollmentErrorCode descriptor] */

void FUN_10bc89f20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e550,
                        &PTR____CFConstantStringClassReference_1110276f8,
                        &PTR_s_snapchat_janus_api_113402aa0,0,0,4,0x1c);
    puRam00000001137fdd08 = puVar1;
  }
  return;
}



/* Entry: 10bc8a004; end: 10bc8a00f;  */

bool FUN_10bc8a004(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10bc8a010; end: 10bc8a08b;  */

undefined * FUN_10bc8a010(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fdd18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_111027738,
                        &UNK_10e603d7c,&UNK_10e603e3c,0xb,FUN_10bc8a08c,0);
    do {
      if (puRam00000001137fdd18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fdd18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fdd18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fdd18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fdd18;
}



/* Entry: 10bc8a08c; end: 10bc8a097;  */

bool FUN_10bc8a08c(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 10bc8a098; end: 10bc8a0ff; +[SimCardMetadata descriptor] */

void FUN_10bc8a098(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e5f0,
                        &PTR____CFConstantStringClassReference_111027758,&PTR_DAT_113402af8,
                        &PTR_DAT_113402bb0,7,0x28,0x1c);
    puRam00000001137fdd20 = puVar1;
  }
  return;
}



/* Entry: 10bc8a100; end: 10bc8a167; +[RequestHeader descriptor] */

void FUN_10bc8a100(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e640,
                        &PTR____CFConstantStringClassReference_110e764b8,&PTR_DAT_113402af8,
                        &PTR_s_userAgent_113402c90,10,0x58,0x1c);
    puRam00000001137fdd28 = puVar1;
  }
  return;
}



/* Entry: 10bc8a168; end: 10bc8a1cf; +[ErrorData descriptor] */

void FUN_10bc8a168(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e690,
                        &PTR____CFConstantStringClassReference_110ddab78,&PTR_DAT_113402af8,
                        &PTR_s_humanReadableErrorMessage_113402b10,1,0x10,0x1c);
    puRam00000001137fdd30 = puVar1;
  }
  return;
}



/* Entry: 10bc8a1d0; end: 10bc8a237; +[ClientRequestHeader descriptor] */

void FUN_10bc8a1d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e6e0,
                        &PTR____CFConstantStringClassReference_111027778,&PTR_DAT_113402af8,
                        &PTR_DAT_113402b50,3,0x20,0x1c);
    puRam00000001137fdd38 = puVar1;
  }
  return;
}



/* Entry: 10bc8a238; end: 10bc8a29f; +[ClientConfigurationData descriptor] */

void FUN_10bc8a238(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e730,
                        &PTR____CFConstantStringClassReference_111027798,&PTR_DAT_113402af8,
                        &PTR_s_phoneDeliveryMethod_113402b30,1,8,0x1c);
    puRam00000001137fdd40 = puVar1;
  }
  return;
}



/* Entry: 10bc8a2a0; end: 10bc8a32b; +[SCCOREIPAddress descriptor] */

undefined * FUN_10bc8a2a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e7d0,
                        &PTR____CFConstantStringClassReference_1110277b8,&PTR_DAT_113402dd8,
                        &PTR_DAT_113402df0,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137fdd48 = puVar1;
  }
  return puRam00000001137fdd48;
}



/* Entry: 10bc8a32c; end: 10bc8a393; +[SCCOREGeoHeader descriptor] */

void FUN_10bc8a32c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e870,
                        &PTR____CFConstantStringClassReference_1110277d8,&PTR_DAT_113402e30,
                        &PTR_s_location_113402e68,2,0x18,0x1c);
    puRam00000001137fdd50 = puVar1;
  }
  return;
}



/* Entry: 10bc8a394; end: 10bc8a3fb; +[SCCORELocation descriptor] */

void FUN_10bc8a394(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e8c0,
                        &PTR____CFConstantStringClassReference_110df2f78,&PTR_DAT_113402e30,
                        &PTR_s_country_113402ea8,6,0x30,0x1c);
    puRam00000001137fdd58 = puVar1;
  }
  return;
}



/* Entry: 10bc8a3fc; end: 10bc8a463; +[SCCOREISP descriptor] */

void FUN_10bc8a3fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e910,
                        &PTR____CFConstantStringClassReference_1110277f8,&PTR_DAT_113402e30,
                        &PTR_DAT_113402e48,1,8,0x1c);
    puRam00000001137fdd60 = puVar1;
  }
  return;
}



/* Entry: 10bc8a464; end: 10bc8a4cb; +[SCJanusAgeVerificationChallenge descriptor] */

void FUN_10bc8a464(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2e9b0,
                        &PTR____CFConstantStringClassReference_111027818,
                        &PTR_s_snapchat_janus_api_113402f78,&PTR_DAT_113402f90,1,0x10,0x1c);
    puRam00000001137fdd68 = puVar1;
  }
  return;
}



/* Entry: 10bc8a4cc; end: 10bc8a567; +[SCJanusAgeVerificationChallenge_VerificationOption descriptor] */

undefined * FUN_10bc8a4cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2ea00,
                        &PTR____CFConstantStringClassReference_111027838,
                        &PTR_s_snapchat_janus_api_113402f78,&PTR_DAT_1134030f0,5,0x28,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112d2e9b0);
    puRam00000001137fdd70 = puVar1;
  }
  return puRam00000001137fdd70;
}



/* Entry: 10bc8a568; end: 10bc8a5f3; +[SCJanusAgeVerificationChallenge_VerificationOption_KIDWebViewPayload descriptor] */

undefined * FUN_10bc8a568(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2ea50,
                        &PTR____CFConstantStringClassReference_111027858,
                        &PTR_s_snapchat_janus_api_113402f78,&PTR_s_URL_113402fd0,2,0x18,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112d2ea00);
    puRam00000001137fdd78 = puVar1;
  }
  return puRam00000001137fdd78;
}



/* Entry: 10bc8a5f4; end: 10bc8a66f; +[SCJanusAgeVerificationChallenge_VerificationOption_KIDParentalConsentPayload descriptor] */

undefined * FUN_10bc8a5f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2eaa0,
                        &PTR____CFConstantStringClassReference_111027878,
                        &PTR_s_snapchat_janus_api_113402f78,&PTR_DAT_113402fb0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137fdd80 = puVar1;
  }
  return puRam00000001137fdd80;
}



/* Entry: 10bc8a670; end: 10bc8a6fb; +[SCJanusAgeVerificationChallengeAnswer descriptor] */

undefined * FUN_10bc8a670(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2eaf0,
                        &PTR____CFConstantStringClassReference_111027898,
                        &PTR_s_snapchat_janus_api_113402f78,&PTR_s_birthdate_113403090,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137fdd88 = puVar1;
  }
  return puRam00000001137fdd88;
}



/* Entry: 10bc8a6fc; end: 10bc8a777; +[SCJanusAgeVerificationChallengeAnswer_KIDParentalConsentPayload descriptor] */

undefined * FUN_10bc8a6fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2eb40,
                        &PTR____CFConstantStringClassReference_111027878,
                        &PTR_s_snapchat_janus_api_113402f78,&PTR_DAT_113403010,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137fdd90 = puVar1;
  }
  return puRam00000001137fdd90;
}



/* Entry: 10bc8a778; end: 10bc8a7f3; +[SCJanusAgeVerificationChallengeAnswer_KIDWebVerificationPayload descriptor] */

undefined * FUN_10bc8a778(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdd98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2eb90,
                        &PTR____CFConstantStringClassReference_1110278b8,
                        &PTR_s_snapchat_janus_api_113402f78,&PTR_DAT_113403050,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137fdd98 = puVar1;
  }
  return puRam00000001137fdd98;
}



/* Entry: 10bc8a7f4; end: 10bc8a8d7; +[GTPDate descriptor] */

void FUN_10bc8a7f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdda0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2ec30,
                        &PTR____CFConstantStringClassReference_110ebf458,&PTR_DAT_113403190,
                        &PTR_s_year_1134031a8,3,0x10,0x1c);
    puRam00000001137fdda0 = puVar1;
  }
  return;
}



/* Entry: 10bc8a8d8; end: 10bc8a8e3;  */

bool FUN_10bc8a8d8(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10bc8a8e4; end: 10bc8a953;  */

void FUN_10bc8a8e4(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    _objc_retain(param_2);
    _objc_retain(param_1);
    func_0x00010bef7700(param_1);
    FUN_10bc8a954(param_2);
    func_0x00010bf77e80(param_2);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10bc8a954; end: 10bc8aa53;  */

void FUN_10bc8a954(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10bc8aa54;
    puStack_50 = &UNK_110848ba8;
    lStack_48 = lVar2;
    lStack_40 = lVar4;
    _objc_retain(param_1);
    lStack_38 = param_1;
    _objc_retain(lVar4);
    _objc_retain(lVar2);
    func_0x00010c0f9680(puVar1,param_2,&puStack_68);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
    _objc_release(lStack_48);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bc8aa54; end: 10bc8acbf;  */

void FUN_10bc8aa54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf17b00(*(undefined8 *)(param_1 + 0x30),param_2,1,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x20),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = uVar4;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1408a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1ff80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = uVar10;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c08e400(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0x28));
  lVar15 = *(long *)(param_1 + 0x30);
  func_0x00010bf941a0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  if (lVar15 != 0) {
    lVar16 = lVar15;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar16 != 0) {
      func_0x00010c2a6740(lVar15,param_2,0);
      FUN_10bc8ad20(lVar15);
      func_0x00010c12c8e0(lVar15);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar15);
  return;
}



/* Entry: 10bc8acc0; end: 10bc8ad1f;  */

void FUN_10bc8acc0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c2a6740(param_1,param_2,0);
      FUN_10bc8ad20(param_1);
      func_0x00010c12c8e0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bc8ad20; end: 10bc8adbb;  */

void FUN_10bc8ad20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c29d0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010bf17b00(param_1,param_2,0,0);
      lVar1 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(lVar1);
      func_0x00010bf941a0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bc8adbc; end: 10bc8ae0f; -[SCCustomUIContainer attachUI:completion:] */

void FUN_10bc8adbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  func_0x00010bf0c980(param_1,param_2,param_3);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10bc8ae10; end: 10bc8ae3f; -[SCCustomUIContainer .cxx_destruct] */

void FUN_10bc8ae10(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc8ae40; end: 10bc8aeeb; -[SCCustomViewContainer initWithOnAttach:onDetach:] */

undefined1 *
FUN_10bc8ae40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270e220;
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



/* Entry: 10bc8aeec; end: 10bc8af03; -[SCCustomViewContainer attachView:] */

void FUN_10bc8aeec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bc8aefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 10bc8af04; end: 10bc8af1b; -[SCCustomViewContainer detachView:] */

void FUN_10bc8af04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bc8af14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 10bc8af1c; end: 10bc8af4b; -[SCCustomViewContainer .cxx_destruct] */

void FUN_10bc8af1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc8af4c; end: 10bc8b05b; -[SCDelayedUIContainer detachUIAndRelease:] */

void FUN_10bc8af4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10bc8afdc;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf6f440(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10bc8b05c; end: 10bc8b0b3; -[SCDelayedUIContainer releaseUI] */

void FUN_10bc8b05c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10bc8b0b4; end: 10bc8b0bb; -[SCDelayedUIContainer presentImmediately] */

undefined1 FUN_10bc8b0b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 10bc8b0bc; end: 10bc8b0c3; -[SCDelayedUIContainer setPresentImmediately:] */

void FUN_10bc8b0bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10bc8b0c4; end: 10bc8b0ff; -[SCDelayedUIContainer .cxx_destruct] */

void FUN_10bc8b0c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc8b100; end: 10bc8b107; -[SCModalUIContainer updateAnimated:] */

void FUN_10bc8b100(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10bc8b108; end: 10bc8b10f; -[SCModalUIContainer attachUI:] */

void FUN_10bc8b108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attachUI_completion__1125a0c10,param_3,0);
  return;
}



/* Entry: 10bc8b110; end: 10bc8b2f3; -[SCModalUIContainer attachUI:completion:] */

void FUN_10bc8b110(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    uVar3 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c06d1a0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((uVar5 & 1) == 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      _objc_opt_class(param_3);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      lVar8 = param_1;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      FUN_10bc8f650(uVar9,lVar6,uVar7,lVar8,1);
      _objc_release(lVar8);
      _objc_release(param_1);
      _objc_release(uVar7);
      _objc_release(lVar6);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4);
      }
      goto LAB_10bc8b2cc;
    }
  }
  func_0x00010bf098c0();
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10eda0();
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + 0x18,param_3);
LAB_10bc8b2cc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc8b2f4; end: 10bc8b3ef; -[SCModalUIContainer detachUI:] */

void FUN_10bc8b2f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c06d1a0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar4 == 0) {
      func_0x00010bf098c0();
      param_1 = param_1 + 0x18;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf84b00();
      _objc_release(lVar1);
      _objc_release(param_1);
      goto LAB_10bc8b3d8;
    }
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
LAB_10bc8b3d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc8b3f0; end: 10bc8b423; -[SCModalUIContainer .cxx_destruct] */

void FUN_10bc8b3f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10bc8b424; end: 10bc8b427; -[SCInteractiveDismissalTouchShield hitTest:withEvent:] */

void FUN_10bc8b424(void)

{
  return;
}



/* Entry: 10bc8b428; end: 10bc8b433; +[SCMultiDirectionalInteractiveTransition setTouchShieldDisabled:] */

void FUN_10bc8b428(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  uRam00000001137fddb0 = param_3;
  return;
}



/* Entry: 10bc8b434; end: 10bc8b443; -[SCMultiDirectionalInteractiveTransition setGestureRecognizerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8b434(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796430),PTR_s_setDelegate__112640798);
  return;
}



/* Entry: 10bc8b444; end: 10bc8b487; -[SCMultiDirectionalInteractiveTransition dealloc] */

void FUN_10bc8b444(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be8db80();
  puStack_28 = PTR_PTR_11270e238;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bc8b488; end: 10bc8b4bf; -[SCMultiDirectionalInteractiveTransition cancelTransition] */

/* WARNING: Possible PIC construction at 0x00010bc8b4a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bc8b4ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8b488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796430),PTR_s_setEnabled__112642f38,0);
  return;
}



/* Entry: 10bc8b4c0; end: 10bc8b5d7; -[SCMultiDirectionalInteractiveTransition setPresentedViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8b4c0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc();
  func_0x00010c050900();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112796430);
  *(undefined **)(param_1 + _DAT_112796430) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar2);
  puVar1 = PTR_DAT_1126a5d08;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x000107c318f8(param_3,puVar1);
  _objc_release(param_3);
  if ((param_3 != 0) && ((int)lVar2 != 0)) {
    func_0x00010c1a2fe0(param_1);
  }
  puVar1 = PTR_DAT_1126a5d10;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x000107c318f8(param_3,puVar1);
  _objc_release(param_3);
  if ((param_3 != 0) && ((int)lVar2 != 0)) {
    func_0x00010c1ae060(param_1);
  }
  _objc_storeWeak(param_1 + _DAT_112796434,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc8b5d8; end: 10bc8b647; -[SCMultiDirectionalInteractiveTransition wantsInteractiveStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8b5d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(char *)(param_1 + _DAT_112796438) != '\x01') ||
     ((*(byte *)(param_1 + _DAT_11279643c) & 1) == 0)) {
    lVar2 = (long)_DAT_112796430;
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010c252440();
    if (lVar1 != 1) {
      func_0x00010c252440(*(undefined8 *)(param_1 + lVar2));
    }
  }
  return;
}



/* Entry: 10bc8b648; end: 10bc8b923; -[SCMultiDirectionalInteractiveTransition panGestureRecognized:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8b648(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_5);
  lVar4 = (long)_DAT_112796434;
  lVar5 = param_3 + lVar4;
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_5);
  dVar6 = param_1;
  dVar7 = param_2;
  _objc_release(lVar1);
  _objc_release(lVar5);
  lVar5 = param_5;
  func_0x00010c252440();
  if (lVar5 == 3) {
    lVar5 = param_3 + lVar4;
    _objc_loadWeakRetained(lVar5);
    lVar1 = lVar5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(param_5);
    _objc_release(lVar1);
    _objc_release(lVar5);
    param_1 = param_1 + dVar6 / 3.0;
    param_2 = param_2 + dVar7 / 3.0;
  }
  func_0x00010bdc3a40(param_1,param_2,param_3);
  lVar5 = param_3 + lVar4;
  _objc_loadWeakRetained();
  lVar1 = lVar5;
  func_0x00010c06d1a0();
  _objc_release(lVar5);
  lVar5 = param_5;
  func_0x00010c252440();
  if (lVar5 < 3) {
    if (lVar5 != 1) {
      if (lVar5 == 2) {
        func_0x00010be6fe60(param_1,param_3);
        func_0x00010c286a00(param_1,param_3);
      }
      goto LAB_10bc8b8d8;
    }
    func_0x00010be3d000(param_3);
    lVar5 = param_3 + _DAT_112796440;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c068cc0();
    _objc_release(lVar5);
    param_3 = param_3 + lVar4;
    _objc_loadWeakRetained(param_3);
    func_0x00010bf84b00();
  }
  else {
    if (lVar5 == 3) {
      func_0x00010be8db80(param_3);
      if ((int)lVar1 == 0) goto LAB_10bc8b8d8;
      lVar5 = param_3 + _DAT_112796444;
      _objc_loadWeakRetained(lVar5);
      if (0.5 < param_1) {
        func_0x00010c0f3740(0x3ff0000000000000,lVar5);
        _objc_release(lVar5);
        lVar5 = param_3 + _DAT_112796440;
        _objc_loadWeakRetained(lVar5);
        func_0x00010c068c80();
        _objc_release(lVar5);
        func_0x00010bfaf8e0(param_3);
        goto LAB_10bc8b8d8;
      }
      func_0x00010c0f3740(0,lVar5);
      _objc_release(lVar5);
      func_0x00010bf2e5a0(param_3);
    }
    else {
      if (lVar5 != 4) goto LAB_10bc8b8d8;
      func_0x00010be8db80(param_3);
      lVar5 = param_3 + _DAT_112796444;
      _objc_loadWeakRetained(lVar5);
      func_0x00010c0f3740(0);
      _objc_release(lVar5);
      func_0x00010bf2e5a0(param_3);
    }
    lVar5 = (long)_DAT_112796448;
    uVar2 = param_3 + lVar5;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) goto LAB_10bc8b8d8;
    param_3 = param_3 + lVar5;
    _objc_loadWeakRetained(param_3);
    func_0x00010c138920();
  }
  _objc_release(param_3);
LAB_10bc8b8d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10bc8b924; end: 10bc8b9f3; -[SCMultiDirectionalInteractiveTransition _SCInteractionPercentageForTranslation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10bc8b924(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  
  lVar4 = (long)_DAT_112796448;
  lVar1 = param_3 + lVar4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10f500();
  _objc_release(lVar1);
  uVar2 = param_3 + lVar4;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_3 + lVar4;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bf9b900();
    _objc_release(lVar4);
  }
  func_0x00010be03c80(param_1,param_2,param_3);
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  dVar5 = 1.0;
  if (param_1 <= 1.0) {
    dVar5 = param_1;
  }
  return dVar5;
}



/* Entry: 10bc8b9f4; end: 10bc8bb07; -[SCMultiDirectionalInteractiveTransition _dismissalPercentageForTranslation:mode:isExitMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10bc8b9f4(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                    int param_6)

{
  long lVar1;
  double dVar2;
  
  if (param_5 < 2) {
    if (param_5 != 0) {
      if (param_5 != 1) goto LAB_10bc8bae8;
      dVar2 = -param_1;
LAB_10bc8ba40:
      param_3 = param_3 + _DAT_112796434;
      _objc_loadWeakRetained(param_3);
      lVar1 = param_3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      goto LAB_10bc8bad4;
    }
    param_3 = param_3 + _DAT_112796434;
    _objc_loadWeakRetained(param_3);
    lVar1 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    param_2 = param_2 / param_1;
  }
  else {
    if (param_5 != 2) {
      dVar2 = param_1;
      if (param_5 != 3) goto LAB_10bc8bae8;
      goto LAB_10bc8ba40;
    }
    dVar2 = -param_2;
    param_3 = param_3 + _DAT_112796434;
    _objc_loadWeakRetained(param_3);
    lVar1 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
LAB_10bc8bad4:
    param_2 = dVar2 / param_1;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
LAB_10bc8bae8:
  dVar2 = -param_2;
  if (param_6 == 0) {
    dVar2 = param_2;
  }
  return dVar2;
}



/* Entry: 10bc8bb08; end: 10bc8bbd7; -[SCMultiDirectionalInteractiveTransition _installTouchShield] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8bb08(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = param_1 + _DAT_112796434;
  _objc_loadWeakRetained();
  lVar1 = lVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar5);
  if (((lVar2 != 0) && (lVar5 = (long)_DAT_11279644c, *(long *)(param_1 + lVar5) == 0)) &&
     ((bRam00000001137fddb0 & 1) == 0)) {
    puVar3 = PTR_PTR_1126e2de8;
    _objc_alloc();
    func_0x00010bf20c00(lVar2);
    func_0x00010c013de0();
    func_0x00010c16d4a0();
    func_0x00010befbb60(lVar2,param_2,puVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar3;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10bc8bbd8; end: 10bc8bc0b; -[SCMultiDirectionalInteractiveTransition _removeTouchShield] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8bbd8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11279644c;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bc8bc0c; end: 10bc8bcff; -[SCMultiDirectionalInteractiveTransition _pannableCellViewVisiblityDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8bc0c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_112796444;
  uVar1 = param_2 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
  }
  else {
    lVar5 = (long)_DAT_112796448;
    uVar2 = param_2 + lVar5;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      lVar4 = param_2 + lVar4;
      _objc_loadWeakRetained(lVar4);
      param_2 = param_2 + lVar5;
      _objc_loadWeakRetained(param_2);
      func_0x00010bf9b900();
      func_0x00010c0f3760(param_1,lVar4);
      _objc_release(param_2);
      goto LAB_10bc8bce4;
    }
  }
  lVar4 = param_2 + lVar4;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0f3740(param_1);
LAB_10bc8bce4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10bc8bd00; end: 10bc8bd0f; -[SCMultiDirectionalInteractiveTransition isPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10bc8bd00(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11279643c);
}



/* Entry: 10bc8bd10; end: 10bc8bd1f; -[SCMultiDirectionalInteractiveTransition setIsPresenting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8bd10(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11279643c) = param_3;
  return;
}



/* Entry: 10bc8bd20; end: 10bc8bd2f; -[SCMultiDirectionalInteractiveTransition wantsInteractivePresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10bc8bd20(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112796438);
}



/* Entry: 10bc8bd30; end: 10bc8bd3f; -[SCMultiDirectionalInteractiveTransition setWantsInteractivePresentation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8bd30(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112796438) = param_3;
  return;
}



/* Entry: 10bc8bd40; end: 10bc8bd5f; -[SCMultiDirectionalInteractiveTransition pannableCellController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8bd40(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112796444);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc8bd60; end: 10bc8bd73; -[SCMultiDirectionalInteractiveTransition setPannableCellController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8bd60(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112796444,param_3);
  return;
}



/* Entry: 10bc8bd74; end: 10bc8bd93; -[SCMultiDirectionalInteractiveTransition presentedViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8bd74(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112796434);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc8bd94; end: 10bc8bdb3; -[SCMultiDirectionalInteractiveTransition interactionDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8bd94(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112796440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc8bdb4; end: 10bc8bdc7; -[SCMultiDirectionalInteractiveTransition setInteractionDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8bdb4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112796440,param_3);
  return;
}



/* Entry: 10bc8bdc8; end: 10bc8bde7; -[SCMultiDirectionalInteractiveTransition multiDirectionalUIContainerPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8bdc8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112796448);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc8bde8; end: 10bc8bdfb; -[SCMultiDirectionalInteractiveTransition setMultiDirectionalUIContainerPresenting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8bde8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112796448,param_3);
  return;
}



/* Entry: 10bc8bdfc; end: 10bc8be6b; -[SCMultiDirectionalInteractiveTransition .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc8bdfc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112796448);
  _objc_destroyWeak(param_1 + _DAT_112796440);
  _objc_destroyWeak(param_1 + _DAT_112796434);
  _objc_destroyWeak(param_1 + _DAT_112796444);
  _objc_storeStrong(param_1 + _DAT_11279644c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796430,0);
  return;
}



/* Entry: 10bc8be6c; end: 10bc8c1b3; -[SCMultiDirectionalTransitionAnimator animateTransition:] */

void FUN_10bc8be6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined1 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c29c220(param_3,param_2,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c29ce60(param_3,param_2,*(undefined8 *)PTR__UITransitionContextToViewKey_110345e60);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c29ce60(param_3,param_2,*(undefined8 *)PTR__UITransitionContextFromViewKey_110345e50);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c06d1e0();
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar7;
    _objc_release(uVar9);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fd999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x10),param_2,puVar7);
    _objc_release(puVar7);
  }
  func_0x00010bf20c00(uVar5);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x10));
  if ((int)uVar6 == 0) {
    uVar9 = 0x3ff0000000000000;
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x10));
    func_0x00010c066fe0(uVar5,param_2,*(undefined8 *)(param_1 + 0x10),uVar4);
    func_0x00010c066fe0(uVar5,param_2,uVar3,*(undefined8 *)(param_1 + 0x10));
    func_0x00010bfaef80(param_3,param_2,uVar2);
    func_0x00010c19f0e0(uVar3);
  }
  else {
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x10));
    func_0x00010befbb60(uVar5,param_2,*(undefined8 *)(param_1 + 0x10));
    func_0x00010befbb60(uVar5,param_2,uVar3);
    func_0x00010bfaef80(param_3,param_2,uVar2);
    func_0x00010c19f0e0(uVar3);
    uVar9 = param_3;
    func_0x00010c075b60(param_3);
    func_0x00010be0a8e0(&uStack_b0,param_1,param_2,uVar5,uVar9);
    uStack_d8 = uStack_a8;
    uStack_e0 = uStack_b0;
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    func_0x00010c219960(uVar3,param_2,&uStack_e0);
    uVar9 = uStack_90;
  }
  uVar8 = param_3;
  func_0x00010c075b60();
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar10 = 0x30004;
  if ((int)uVar8 == 0) {
    uVar10 = 4;
  }
  func_0x00010c27a940(param_1,param_2,param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_10bc8c1b4;
  puStack_118 = &UNK_110867cb8;
  lStack_110 = param_1;
  uStack_e8 = (char)uVar6;
  _objc_retain(uVar3);
  uStack_108 = uVar3;
  _objc_retain(param_3);
  uStack_100 = param_3;
  _objc_retain(uVar4);
  puStack_178 = puVar1;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_10bc8c2cc;
  puStack_160 = &UNK_110d965a8;
  uStack_158 = param_3;
  uStack_150 = uVar3;
  uStack_148 = uVar4;
  lStack_140 = param_1;
  uStack_138 = (char)uVar6;
  uStack_f8 = uVar4;
  uStack_f0 = uVar5;
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  func_0x00010bf03440(uVar9,0,puVar7,param_2,uVar10,&puStack_130,&puStack_178);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  return;
}



/* Entry: 10bc8c1b4; end: 10bc8c2cb;  */

void FUN_10bc8c1b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x00010c1677c0(0x3ff0000000000000,uVar1);
    uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960(*(undefined8 *)(param_1 + 0x28),param_2,&uStack_70);
    uVar2 = *(ulong *)(param_1 + 0x30);
    func_0x00010c075b60();
    uVar1 = 0;
  }
  else {
    func_0x00010c1677c0(0,uVar1);
    lVar3 = *(long *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c075b60(uVar1);
    if (lVar3 == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x00010be0c240(&uStack_a0,lVar3,param_2,uVar4,uVar1);
    }
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
    func_0x00010c219960(*(undefined8 *)(param_1 + 0x38),param_2,&uStack_70);
    uVar2 = *(ulong *)(param_1 + 0x30);
    func_0x00010c075b60();
    uVar1 = 0x3ff0000000000000;
  }
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x20) + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c0f3740(uVar1);
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 10bc8c2cc; end: 10bc8c393;  */

void FUN_10bc8c2cc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c27ac00();
  if (*(char *)(param_1 + 0x40) == '\x01' && (uint)uVar1 != 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0x28));
  }
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar3 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_50 = uVar3;
  uStack_48 = uVar5;
  uStack_40 = uVar7;
  uStack_38 = uVar8;
  uStack_30 = uVar4;
  uStack_28 = uVar6;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x30),param_2,&uStack_50);
  uStack_50 = uVar3;
  uStack_48 = uVar5;
  uStack_40 = uVar7;
  uStack_38 = uVar8;
  uStack_30 = uVar4;
  uStack_28 = uVar6;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x28),param_2,&uStack_50);
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10));
  if ((((uVar1 & 1) == 0) && ((*(byte *)(param_1 + 0x40) & 1) == 0)) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x20), lVar2 != 0)) {
    (**(code **)(lVar2 + 0x10))();
  }
  func_0x00010bf43bc0(*(undefined8 *)(param_1 + 0x20),param_2,(uint)uVar1 ^ 1);
  return;
}



/* Entry: 10bc8c394; end: 10bc8c3c3; -[SCMultiDirectionalTransitionAnimator transitionDuration:] */

undefined8 FUN_10bc8c394(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010c075b60();
  uVar1 = 0x3fc999999999999a;
  if (param_3 == 0) {
    uVar1 = 0x3fb999999999999a;
  }
  return uVar1;
}



/* Entry: 10bc8c3c4; end: 10bc8c4e7; -[SCMultiDirectionalTransitionAnimator _enterTranslationForContainerView:isInteractive:] */

void FUN_10bc8c3c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  lVar1 = param_2 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c10f500();
  _objc_release(lVar1);
  if (param_5 != 0) {
    uVar3 = param_2 + 0x18;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      param_2 = param_2 + 0x18;
      _objc_loadWeakRetained();
      lVar2 = param_2;
      func_0x00010c068da0();
      _objc_release(param_2);
    }
  }
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      func_0x00010bf20c00(param_4);
      _CGRectGetHeight();
    }
    else {
      if (lVar2 != 1) goto LAB_10bc8c4d0;
      func_0x00010bf20c00(param_4);
      _CGRectGetWidth();
    }
  }
  else if (lVar2 == 2) {
    func_0x00010bf20c00(param_4);
    _CGRectGetHeight();
  }
  else {
    if (lVar2 != 3) goto LAB_10bc8c4d0;
    func_0x00010bf20c00(param_4);
    _CGRectGetWidth();
  }
  _CGAffineTransformMakeTranslation(param_1);
LAB_10bc8c4d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10bc8c4e8; end: 10bc8c603; -[SCMultiDirectionalTransitionAnimator _exitTranslationForContainerView:isInteractive:] */

void FUN_10bc8c4e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  uVar1 = param_2 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010be0a8e0(param_1,param_2);
  }
  else {
    param_2 = param_2 + 0x18;
    _objc_loadWeakRetained();
    lVar3 = param_2;
    func_0x00010bf9b900();
    _objc_release(param_2);
    if (lVar3 < 2) {
      if (lVar3 == 0) {
        func_0x00010bf20c00(param_4);
        _CGRectGetHeight();
      }
      else {
        if (lVar3 != 1) goto LAB_10bc8c5ec;
        func_0x00010bf20c00(param_4);
        _CGRectGetWidth();
      }
    }
    else if (lVar3 == 2) {
      func_0x00010bf20c00(param_4);
      _CGRectGetHeight();
    }
    else {
      if (lVar3 != 3) goto LAB_10bc8c5ec;
      func_0x00010bf20c00(param_4);
      _CGRectGetWidth();
    }
    _CGAffineTransformMakeTranslation(param_1);
  }
LAB_10bc8c5ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10bc8c604; end: 10bc8c61b; -[SCMultiDirectionalTransitionAnimator pannableCellController] */

void FUN_10bc8c604(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc8c61c; end: 10bc8c627; -[SCMultiDirectionalTransitionAnimator setPannableCellController:] */

void FUN_10bc8c61c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10bc8c628; end: 10bc8c63f; -[SCMultiDirectionalTransitionAnimator multiDirectionalUIContainerPresenting] */

void FUN_10bc8c628(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc8c640; end: 10bc8c64b; -[SCMultiDirectionalTransitionAnimator setMultiDirectionalUIContainerPresenting:] */

void FUN_10bc8c640(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10bc8c64c; end: 10bc8c653; -[SCMultiDirectionalTransitionAnimator dismissalDidCompleteHandler] */

undefined8 FUN_10bc8c64c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10bc8c654; end: 10bc8c65b; -[SCMultiDirectionalTransitionAnimator setDismissalDidCompleteHandler:] */

void FUN_10bc8c654(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10bc8c65c; end: 10bc8c69b; -[SCMultiDirectionalTransitionAnimator .cxx_destruct] */

void FUN_10bc8c65c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10bc8c69c; end: 10bc8c74f; -[SCMultiDirectionalUIContainer initWithPresentingViewController:animated:] */

undefined1 *
FUN_10bc8c69c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270e240;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
    puVar2 = PTR_PTR_1126e2df0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126e2df8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bc8c750; end: 10bc8c757; -[SCMultiDirectionalUIContainer cancelTransition] */

void FUN_10bc8c750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2f370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_cancelTransition_1125a9680);
  return;
}



/* Entry: 10bc8c758; end: 10bc8c75f; -[SCMultiDirectionalUIContainer attachUI:] */

void FUN_10bc8c758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attachUI_completion__1125a0c10,param_3,0);
  return;
}



/* Entry: 10bc8c760; end: 10bc8ca03; -[SCMultiDirectionalUIContainer attachUI:completion:] */

void FUN_10bc8c760(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != param_3) {
    func_0x00010bf098c0();
    puVar1 = PTR_DAT_1126a5d18;
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x000107c318f8(param_3,puVar1);
    lVar2 = param_3;
    if ((int)lVar4 == 0) {
      lVar2 = 0;
    }
    _objc_retain(lVar2);
    _objc_release(param_3);
    _objc_storeWeak(param_1 + 0x10,param_3);
    func_0x00010c1e13e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1c9540(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1c9540(*(undefined8 *)(param_1 + 0x28));
    _objc_initWeak(auStack_68,param_1);
    _objc_initWeak(auStack_70,param_3);
    _objc_copyWeak(auStack_78,param_1 + 8);
    _objc_copyWeak(auStack_90,auStack_70);
    _objc_copyWeak(auStack_88,auStack_68);
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c18f860(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c219b20(param_3);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c10eda0(param_1);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10bc8ca04; end: 10bc8cabf;  */

void FUN_10bc8ca04(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c06d1a0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar2 = param_1 + 0x30;
    if (lVar1 != 0) {
      lVar2 = lVar1 + 8;
    }
    _objc_loadWeakRetained(lVar2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    FUN_10bc8cac0();
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10bc8cac0; end: 10bc8cb9f;  */

void FUN_10bc8cac0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR_DAT_1126a5d20;
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x000107c318f8(param_1,puVar2);
  lVar1 = param_1;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  puVar2 = PTR_DAT_1126a5d20;
  if (lVar1 == 0) {
    _objc_retain(param_2);
    lVar4 = param_2;
    func_0x000107c318f8(param_2,puVar2);
    lVar3 = param_2;
    if ((int)lVar4 == 0) {
      lVar3 = 0;
    }
    _objc_retain(lVar3);
    _objc_release(param_2);
  }
  else {
    _objc_retain(param_1);
    lVar3 = param_1;
  }
  _objc_release(lVar1);
  func_0x00010c0d1d80(lVar3);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bc8cba0; end: 10bc8cbb3;  */

void FUN_10bc8cba0(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bc8cbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10bc8cbb4; end: 10bc8cd9b; -[SCMultiDirectionalUIContainer detachUI:] */

void FUN_10bc8cbb4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010c06d1a0();
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      func_0x00010bf2f360(*(undefined8 *)(param_1 + 0x20));
      puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x00010bf098c0();
      if (((int)puVar4 == 0) || ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
        lVar1 = param_1 + 0x38;
        _objc_loadWeakRetained(lVar1);
        func_0x00010c0f3740(0x3ff0000000000000);
        _objc_release(lVar1);
        uStack_58 = 0;
      }
      else {
        uStack_58 = 1;
      }
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_50,param_1 + 8);
      _objc_copyWeak(auStack_68,auStack_48);
      _objc_copyWeak(auStack_60,auStack_50);
      _objc_retain(lVar2);
      _objc_retain(param_3);
      func_0x00010bf84b00(lVar2);
      _objc_release(param_3);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      goto LAB_10bc8cd48;
    }
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
LAB_10bc8cd48:
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10bc8cd9c; end: 10bc8ce27;  */

void FUN_10bc8cd9c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    lVar2 = param_1 + 0x38;
    if (lVar1 != 0) {
      lVar2 = lVar1 + 8;
    }
    _objc_loadWeakRetained(lVar2);
    FUN_10bc8cac0(*(undefined8 *)(param_1 + 0x20),lVar2,lVar1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bc8ce14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10bc8ce28; end: 10bc8ce4f; -[SCMultiDirectionalUIContainer animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_10bc8ce28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc8ce50; end: 10bc8ce77; -[SCMultiDirectionalUIContainer animationControllerForDismissedController:] */

void FUN_10bc8ce50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc8ce78; end: 10bc8cec3; -[SCMultiDirectionalUIContainer interactionControllerForPresentation:] */

void FUN_10bc8ce78(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x00010c1b3820(*(undefined8 *)(param_1 + 0x20),param_2,1);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c2a1a60();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10bc8cec4; end: 10bc8cf0f; -[SCMultiDirectionalUIContainer interactionControllerForDismissal:] */

void FUN_10bc8cec4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x00010c1b3820(*(undefined8 *)(param_1 + 0x20),param_2,0);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c2a1a60();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10bc8cf10; end: 10bc8cf1b; -[SCMultiDirectionalUIContainer setWantsInteractivePresentation:] */

void FUN_10bc8cf10(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c224710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setWantsInteractivePresentation__112666be8);
  return;
}



/* Entry: 10bc8cf1c; end: 10bc8d05f; -[SCMultiDirectionalUIContainer setPresentingViewController:] */

void FUN_10bc8cf1c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0834c0();
  if ((int)lVar4 == 0) {
    bVar1 = true;
  }
  else {
    lVar4 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar5 == 0;
    _objc_release();
    _objc_release(lVar4);
  }
  lVar4 = param_3;
  func_0x00010c0834c0();
  if ((int)lVar4 == 0) {
    bVar2 = false;
  }
  else {
    lVar4 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar5 != 0;
    _objc_release();
    _objc_release(lVar4);
  }
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    lVar6 = lVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x10;
    _objc_loadWeakRetained();
    _objc_release();
    _objc_release(lVar6);
    _objc_release(lVar4);
    if ((lVar6 == lVar5) && (!(bool)(bVar1 & bVar2))) goto LAB_10bc8d03c;
  }
  _objc_storeWeak(param_1 + 8,param_3);
LAB_10bc8d03c:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


