/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bcaf344; end: 10bcaf34f; -[SCASnapAccessTokenFetch getPerUserSamplingRate] */

undefined8 FUN_10bcaf344(void)

{
  return 0x3f1a36e2eb1c432d;
}



/* Entry: 10bcaf350; end: 10bcaf35b; -[SCASnapAccessTokenFetch getPerUserSamplingRateV2] */

undefined8 FUN_10bcaf350(void)

{
  return 0x3f1a36e2eb1c432d;
}



/* Entry: 10bcaf35c; end: 10bcaf367; -[SCASnapAccessTokenFetch getPerEventSamplingRate] */

undefined8 FUN_10bcaf35c(void)

{
  return 0x3f1a36e2eb1c432d;
}



/* Entry: 10bcaf368; end: 10bcaf3bb; -[SCASnapAccessTokenFetch setScopeSplitMethod:] */

void FUN_10bcaf368(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111022998,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bcaf3bc; end: 10bcaf40f; -[SCASnapAccessTokenFetch setSlowFetch:] */

void FUN_10bcaf3bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_1110229b8,8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bcaf410; end: 10bcaf463; -[SCASnapAccessTokenFetch setUserBlocking:] */

void FUN_10bcaf410(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_1110229f8,10,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bcaf464; end: 10bcaf467; -[SCASnapAccessTokenFetch getFieldNumberToFieldDict] */

void FUN_10bcaf464(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bcaf468; end: 10bcaf473; -[SCASnapAccessTokenFetch toProtoWithAllowedFields:] */

void FUN_10bcaf468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10bcaf474; end: 10bcaf47b; -[SCASnapAccessTokenFetch getPayloadIdentifier] */

undefined8 FUN_10bcaf474(void)

{
  return 0x7e3;
}



/* Entry: 10bcaf47c; end: 10bcaf86b; -[SCASnapAccessTokenNetworkFetch fromDictionary:] */

void FUN_10bcaf47c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270e3a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c196ee0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1f69c0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1ebf60(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1f6be0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c203360(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c21a820(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c21dfe0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1ebd20(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bcaf86c; end: 10bcaf877; -[SCASnapAccessTokenNetworkFetch getEventName] */

undefined ** FUN_10bcaf86c(void)

{
  return &PTR____CFConstantStringClassReference_110fc89f8;
}



/* Entry: 10bcaf878; end: 10bcaf87f; -[SCASnapAccessTokenNetworkFetch getEventQoS] */

undefined8 FUN_10bcaf878(void)

{
  return 2;
}



/* Entry: 10bcaf880; end: 10bcaf88b; -[SCASnapAccessTokenNetworkFetch getPerUserSamplingRate] */

undefined8 FUN_10bcaf880(void)

{
  return 0x3f847ae147ae147b;
}



/* Entry: 10bcaf88c; end: 10bcaf897; -[SCASnapAccessTokenNetworkFetch getPerUserSamplingRateV2] */

undefined8 FUN_10bcaf88c(void)

{
  return 0x3f847ae147ae147b;
}



/* Entry: 10bcaf898; end: 10bcaf8a3; -[SCASnapAccessTokenNetworkFetch getPerEventSamplingRate] */

undefined8 FUN_10bcaf898(void)

{
  return 0x3f847ae147ae147b;
}



/* Entry: 10bcaf8a4; end: 10bcaf8bb; -[SCASnapAccessTokenNetworkFetch setError:] */

void FUN_10bcaf8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daeeb8,2,param_3,0);
  return;
}



/* Entry: 10bcaf8bc; end: 10bcaf8d3; -[SCASnapAccessTokenNetworkFetch setScope:] */

void FUN_10bcaf8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db95d8,3,param_3,0);
  return;
}



/* Entry: 10bcaf8d4; end: 10bcaf8eb; -[SCASnapAccessTokenNetworkFetch setRequestPath:] */

void FUN_10bcaf8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_111022958,4,param_3,0);
  return;
}



/* Entry: 10bcaf8ec; end: 10bcaf93f; -[SCASnapAccessTokenNetworkFetch setScopeSplitMethod:] */

void FUN_10bcaf8ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111022998,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bcaf940; end: 10bcaf993; -[SCASnapAccessTokenNetworkFetch setSlowFetch:] */

void FUN_10bcaf940(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_1110229b8,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bcaf994; end: 10bcaf9e7; -[SCASnapAccessTokenNetworkFetch setTrySyncFirst:] */

void FUN_10bcaf994(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_1110229d8,7,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bcaf9e8; end: 10bcafa3b; -[SCASnapAccessTokenNetworkFetch setUserBlocking:] */

void FUN_10bcaf9e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_1110229f8,8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bcafa3c; end: 10bcafa53; -[SCASnapAccessTokenNetworkFetch setRequestId:] */

void FUN_10bcafa3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ec2278,9,param_3,0);
  return;
}



/* Entry: 10bcafa54; end: 10bcafa57; -[SCASnapAccessTokenNetworkFetch getFieldNumberToFieldDict] */

void FUN_10bcafa54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bcafa58; end: 10bcafa63; -[SCASnapAccessTokenNetworkFetch toProtoWithAllowedFields:] */

void FUN_10bcafa58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bcafa64; end: 10bcafa6b; -[SCASnapAccessTokenNetworkFetch getPayloadIdentifier] */

undefined8 FUN_10bcafa64(void)

{
  return 0x7e4;
}



/* Entry: 10bcafa6c; end: 10bcafbbb; -[SCASnapSessionNetworkFetch fromDictionary:] */

void FUN_10bcafa6c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270e3a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c196ee0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1ebf60(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bcafbbc; end: 10bcafbc7; -[SCASnapSessionNetworkFetch getEventName] */

undefined ** FUN_10bcafbbc(void)

{
  return &PTR____CFConstantStringClassReference_110fc8ab8;
}



/* Entry: 10bcafbc8; end: 10bcafbcf; -[SCASnapSessionNetworkFetch getEventQoS] */

undefined8 FUN_10bcafbc8(void)

{
  return 2;
}



/* Entry: 10bcafbd0; end: 10bcafbdb; -[SCASnapSessionNetworkFetch getPerUserSamplingRate] */

undefined8 FUN_10bcafbd0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bcafbdc; end: 10bcafbe7; -[SCASnapSessionNetworkFetch getPerUserSamplingRateV2] */

undefined8 FUN_10bcafbdc(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bcafbe8; end: 10bcafbff; -[SCASnapSessionNetworkFetch setError:] */

void FUN_10bcafbe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daeeb8,2,param_3,0);
  return;
}



/* Entry: 10bcafc00; end: 10bcafc17; -[SCASnapSessionNetworkFetch setRequestPath:] */

void FUN_10bcafc00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_111022958,3,param_3,0);
  return;
}



/* Entry: 10bcafc18; end: 10bcafc1b; -[SCASnapSessionNetworkFetch getFieldNumberToFieldDict] */

void FUN_10bcafc18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bcafc1c; end: 10bcafc27; -[SCASnapSessionNetworkFetch toProtoWithAllowedFields:] */

void FUN_10bcafc1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bcafc28; end: 10bcafc2f; -[SCASnapSessionNetworkFetch getPayloadIdentifier] */

undefined8 FUN_10bcafc28(void)

{
  return 0x7fd;
}



/* Entry: 10bcafc30; end: 10bcafc3b; -[SCASnapTokenAppSessionPeriod getEventName] */

undefined ** FUN_10bcafc30(void)

{
  return &PTR____CFConstantStringClassReference_11102dc18;
}



/* Entry: 10bcafc3c; end: 10bcafc43; -[SCASnapTokenAppSessionPeriod getEventQoS] */

undefined8 FUN_10bcafc3c(void)

{
  return 2;
}



/* Entry: 10bcafc44; end: 10bcafc4f; -[SCASnapTokenAppSessionPeriod getPerUserSamplingRate] */

undefined8 FUN_10bcafc44(void)

{
  return 0x3f1a36e2eb1c432d;
}



/* Entry: 10bcafc50; end: 10bcafc5b; -[SCASnapTokenAppSessionPeriod getPerUserSamplingRateV2] */

undefined8 FUN_10bcafc50(void)

{
  return 0x3f1a36e2eb1c432d;
}



/* Entry: 10bcafc5c; end: 10bcafc67; -[SCASnapTokenAppSessionPeriod getPerEventSamplingRate] */

undefined8 FUN_10bcafc5c(void)

{
  return 0x3f1a36e2eb1c432d;
}



/* Entry: 10bcafc68; end: 10bcafcbb; -[SCASnapTokenAppSessionPeriod setMisses:] */

void FUN_10bcafc68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11102dbb8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bcafcbc; end: 10bcafcd3; -[SCASnapTokenAppSessionPeriod setScope:] */

void FUN_10bcafcbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db95d8,3,param_3,0);
  return;
}



/* Entry: 10bcafcd4; end: 10bcafd27; -[SCASnapTokenAppSessionPeriod setSlowFetches:] */

void FUN_10bcafcd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11102dbd8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bcafd28; end: 10bcafd7b; -[SCASnapTokenAppSessionPeriod setStartTimestamp:] */

void FUN_10bcafd28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe6558,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bcafd7c; end: 10bcafd7f; -[SCASnapTokenAppSessionPeriod getFieldNumberToFieldDict] */

void FUN_10bcafd7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bcafd80; end: 10bcafd8b; -[SCASnapTokenAppSessionPeriod toProtoWithAllowedFields:] */

void FUN_10bcafd80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bcafd8c; end: 10bcafd93; -[SCASnapTokenAppSessionPeriod getPayloadIdentifier] */

undefined8 FUN_10bcafd8c(void)

{
  return 0xb88;
}



/* Entry: 10bcafd94; end: 10bcafe0f;  */

undefined * FUN_10bcafd94(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fddb8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_11102dc38,
                        &UNK_10e603f08,&UNK_10e603f34,2,FUN_10bcafe10,0);
    do {
      if (puRam00000001137fddb8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fddb8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fddb8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fddb8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fddb8;
}



/* Entry: 10bcafe10; end: 10bcafe1b;  */

bool FUN_10bcafe10(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10bcafe1c; end: 10bcafe97;  */

undefined * FUN_10bcafe1c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fddc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_11102dc58,
                        &UNK_10e603f3c,&UNK_10e603f80,2,FUN_10bcafe98,0);
    do {
      if (puRam00000001137fddc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fddc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fddc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fddc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fddc0;
}



/* Entry: 10bcafe98; end: 10bcafea3;  */

bool FUN_10bcafe98(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10bcafea4; end: 10bcaff1f;  */

undefined * FUN_10bcafea4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fddc8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_11102dc78,
                        &UNK_10e603f88,&UNK_10e603fc0,6,FUN_10bcaff20,0);
    do {
      if (puRam00000001137fddc8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fddc8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fddc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fddc8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fddc8;
}



/* Entry: 10bcaff20; end: 10bcaff2b;  */

bool FUN_10bcaff20(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10bcaff2c; end: 10bcaffa7;  */

undefined * FUN_10bcaff2c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fddd0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_11102dc98,
                        &UNK_10e603fd8,&UNK_10e604094,10,FUN_10bcaffa8,0);
    do {
      if (puRam00000001137fddd0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fddd0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fddd0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fddd0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fddd0;
}



/* Entry: 10bcaffa8; end: 10bcaffb3;  */

bool FUN_10bcaffa8(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10bcaffb4; end: 10bcb002f;  */

undefined * FUN_10bcaffb4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fddd8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_11102dcb8,
                        &UNK_10e6040bc,&UNK_10e6040f4,6,FUN_10bcb0030,0);
    do {
      if (puRam00000001137fddd8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fddd8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fddd8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fddd8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fddd8;
}



/* Entry: 10bcb0030; end: 10bcb003b;  */

bool FUN_10bcb0030(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10bcb003c; end: 10bcb00b7;  */

undefined * FUN_10bcb003c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fdde0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_11102dcd8,
                        &UNK_10e60410c,&UNK_10e604130,2,FUN_10bcb00b8,0);
    do {
      if (puRam00000001137fdde0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fdde0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fdde0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fdde0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fdde0;
}



/* Entry: 10bcb00b8; end: 10bcb00c3;  */

bool FUN_10bcb00b8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10bcb00c4; end: 10bcb012b; +[SCJanusBootstrapData descriptor] */

void FUN_10bcb00c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdde8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2fef0,
                        &PTR____CFConstantStringClassReference_11102dcf8,
                        &PTR_s_snapchat_janus_api_113403338,&PTR_DAT_1134038f0,0xb,0x60,0x1c);
    puRam00000001137fdde8 = puVar1;
  }
  return;
}



/* Entry: 10bcb012c; end: 10bcb0193; +[SCJanusUserSession descriptor] */

void FUN_10bcb012c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fddf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2ff40,
                        &PTR____CFConstantStringClassReference_11102dd18,
                        &PTR_s_snapchat_janus_api_113403338,&PTR_s_userId_113403630,6,0x38,0x1c);
    puRam00000001137fddf0 = puVar1;
  }
  return;
}



/* Entry: 10bcb0194; end: 10bcb01fb; +[SCJanusUserState descriptor] */

void FUN_10bcb0194(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fddf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2ff90,
                        &PTR____CFConstantStringClassReference_11102dd38,
                        &PTR_s_snapchat_janus_api_113403338,&PTR_s_verificationStatus_113403470,3,
                        0x20,0x1c);
    puRam00000001137fddf8 = puVar1;
  }
  return;
}



/* Entry: 10bcb01fc; end: 10bcb0277; +[SCJanusTOSAcceptance descriptor] */

undefined * FUN_10bcb01fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fde00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2ffe0,
                        &PTR____CFConstantStringClassReference_11102dd58,
                        &PTR_s_snapchat_janus_api_113403338,&PTR_DAT_1134036f0,8,4,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fde00 = puVar1;
  }
  return puRam00000001137fde00;
}



/* Entry: 10bcb0278; end: 10bcb02df; +[SCJanusSecurityData descriptor] */

void FUN_10bcb0278(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fde08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d30030,
                        &PTR____CFConstantStringClassReference_11102dd78,
                        &PTR_s_snapchat_janus_api_113403338,&PTR_s_deviceToken_113403530,4,0x10,0x1c
                       );
    puRam00000001137fde08 = puVar1;
  }
  return;
}



/* Entry: 10bcb02e0; end: 10bcb0347; +[SCJanusDeviceTokenResponse descriptor] */

void FUN_10bcb02e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fde10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d30080,
                        &PTR____CFConstantStringClassReference_11102dd98,
                        &PTR_s_snapchat_janus_api_113403338,&PTR_s_id_p_1134033b0,2,0x18,0x1c);
    puRam00000001137fde10 = puVar1;
  }
  return;
}



/* Entry: 10bcb0348; end: 10bcb03af; +[SCJanusVerificationStatus descriptor] */

void FUN_10bcb0348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fde18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d300d0,
                        &PTR____CFConstantStringClassReference_11102ddb8,
                        &PTR_s_snapchat_janus_api_113403338,&PTR_DAT_1134035b0,4,0x18,0x1c);
    puRam00000001137fde18 = puVar1;
  }
  return;
}



/* Entry: 10bcb03b0; end: 10bcb042b; +[SCJanusVerificationStatus_PhoneVerifyOptions descriptor] */

undefined * FUN_10bcb03b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fde20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d30120,
                        &PTR____CFConstantStringClassReference_11102ddd8,
                        &PTR_s_snapchat_janus_api_113403338,&PTR_s_optionsArray_113403350,1,0x10,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137fde20 = puVar1;
  }
  return puRam00000001137fde20;
}



/* Entry: 10bcb042c; end: 10bcb0493; +[SCJanusSilentVerificationConfiguration descriptor] */

void FUN_10bcb042c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fde28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d30170,
                        &PTR____CFConstantStringClassReference_11102ddf8,
                        &PTR_s_snapchat_janus_api_113403338,&PTR_DAT_113403370,1,0x10,0x1c);
    puRam00000001137fde28 = puVar1;
  }
  return;
}



/* Entry: 10bcb0494; end: 10bcb04fb; +[SCJanusFideliusIdentity descriptor] */

void FUN_10bcb0494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fde30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d301c0,
                        &PTR____CFConstantStringClassReference_11102de18,
                        &PTR_s_snapchat_janus_api_113403338,&PTR_DAT_1134033f0,2,0x18,0x1c);
    puRam00000001137fde30 = puVar1;
  }
  return;
}



/* Entry: 10bcb04fc; end: 10bcb0563; +[SCJanusFriendData descriptor] */

void FUN_10bcb04fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fde38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d30210,
                        &PTR____CFConstantStringClassReference_11102de38,
                        &PTR_s_snapchat_janus_api_113403338,&PTR_DAT_113403430,2,0x18,0x1c);
    puRam00000001137fde38 = puVar1;
  }
  return;
}



/* Entry: 10bcb0564; end: 10bcb05cb; +[SCJanusFriendLink descriptor] */

void FUN_10bcb0564(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fde40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d30260,
                        &PTR____CFConstantStringClassReference_11102de58,
                        &PTR_s_snapchat_janus_api_113403338,&PTR_DAT_1134037f0,8,0x38,0x1c);
    puRam00000001137fde40 = puVar1;
  }
  return;
}



/* Entry: 10bcb05cc; end: 10bcb0633; +[SCJanusCofSyncMechanism descriptor] */

void FUN_10bcb05cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fde48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d302b0,
                        &PTR____CFConstantStringClassReference_11102de78,
                        &PTR_s_snapchat_janus_api_113403338,&PTR_DAT_113403390,1,8,0x1c);
    puRam00000001137fde48 = puVar1;
  }
  return;
}



/* Entry: 10bcb0634; end: 10bcb0717; +[SCJanusTosContent descriptor] */

void FUN_10bcb0634(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fde50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d30300,
                        &PTR____CFConstantStringClassReference_11102de98,
                        &PTR_s_snapchat_janus_api_113403338,&PTR_DAT_1134034d0,3,0x20,0x1c);
    puRam00000001137fde50 = puVar1;
  }
  return;
}



/* Entry: 10bcb0718; end: 10bcb0723;  */

bool FUN_10bcb0718(uint param_1)

{
  return param_1 < 0x11;
}



/* Entry: 10bcb0724; end: 10bcb079f;  */

undefined * FUN_10bcb0724(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fde60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_11102ded8,
                        &UNK_10e60425c,&UNK_10e6042f8,8,FUN_10bcb07a0,0);
    do {
      if (puRam00000001137fde60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fde60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fde60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fde60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fde60;
}



/* Entry: 10bcb07a0; end: 10bcb07ab;  */

bool FUN_10bcb07a0(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10bcb07ac; end: 10bcb0827;  */

undefined * FUN_10bcb07ac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fde68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_11102def8,
                        &UNK_10e604318,&UNK_10e60435c,4,FUN_10bcb0828,0);
    do {
      if (puRam00000001137fde68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fde68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fde68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fde68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fde68;
}



/* Entry: 10bcb0828; end: 10bcb0833;  */

bool FUN_10bcb0828(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10bcb0834; end: 10bcb08af; +[SCPBSnaptokenSnapAccessToken descriptor] */

undefined * FUN_10bcb0834(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fde70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d303a0,
                        &PTR____CFConstantStringClassReference_11102df18,&PTR_DAT_113403a50,
                        &PTR_s_accessToken_113403ae8,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fde70 = puVar1;
  }
  return puRam00000001137fde70;
}



/* Entry: 10bcb08b0; end: 10bcb0917; +[SCPBSnaptokenSnapAccessTokenPrefetchHint descriptor] */

void FUN_10bcb08b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fde78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d303f0,
                        &PTR____CFConstantStringClassReference_11102df38,&PTR_DAT_113403a50,
                        &PTR_DAT_113403a68,2,0x18,0x1c);
    puRam00000001137fde78 = puVar1;
  }
  return;
}



/* Entry: 10bcb0918; end: 10bcb097f; +[SCPBSnaptokenSnapAccessTokenRequest descriptor] */

void FUN_10bcb0918(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fde80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d30440,
                        &PTR____CFConstantStringClassReference_11102df58,&PTR_DAT_113403a50,
                        &PTR_s_refreshToken_113403aa8,2,0x18,0x1c);
    puRam00000001137fde80 = puVar1;
  }
  return;
}



/* Entry: 10bcb0980; end: 10bcb09fb; +[SCPBSnaptokenSnapAccessTokensRequest descriptor] */

undefined * FUN_10bcb0980(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fde88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d30490,
                        &PTR____CFConstantStringClassReference_11102df78,&PTR_DAT_113403a50,
                        &PTR_s_refreshToken_113403cc8,10,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fde88 = puVar1;
  }
  return puRam00000001137fde88;
}



/* Entry: 10bcb09fc; end: 10bcb0a77; +[SCPBSnaptokenSnapAccessTokensResponse descriptor] */

undefined * FUN_10bcb09fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fde90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d304e0,
                        &PTR____CFConstantStringClassReference_11102df98,&PTR_DAT_113403a50,
                        &PTR_DAT_113403ba8,4,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fde90 = puVar1;
  }
  return puRam00000001137fde90;
}



/* Entry: 10bcb0a78; end: 10bcb0adf; +[SCPBSnaptokenSnapSessionRequest descriptor] */

void FUN_10bcb0a78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fde98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d30530,
                        &PTR____CFConstantStringClassReference_11102dfb8,&PTR_DAT_113403a50,
                        &PTR_DAT_113403b48,3,0x20,0x1c);
    puRam00000001137fde98 = puVar1;
  }
  return;
}



/* Entry: 10bcb0ae0; end: 10bcb0b5b; +[SCPBSnaptokenSnapSessionResponse descriptor] */

undefined * FUN_10bcb0ae0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdea0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d30580,
                        &PTR____CFConstantStringClassReference_11102dfd8,&PTR_DAT_113403a50,
                        &PTR_s_refreshToken_113403c28,5,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fdea0 = puVar1;
  }
  return puRam00000001137fdea0;
}



/* Entry: 10bcb0b5c; end: 10bcb0bc3; +[SCCOREUUID descriptor] */

void FUN_10bcb0b5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fdea8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d30620,
                        &PTR____CFConstantStringClassReference_110e7e6d8,&PTR_DAT_113403e08,
                        &PTR_DAT_113403e20,2,0x18,0x1c);
    puRam00000001137fdea8 = puVar1;
  }
  return;
}



/* Entry: 10bcb0bc4; end: 10bcb0c13; +[SCServiceCompoundNotifier andNotifierWithSubnotifiers:] */

void FUN_10bcb0bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3c38;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04ef00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcb0c14; end: 10bcb0c63; +[SCServiceCompoundNotifier orNotifierWithSubnotifiers:] */

void FUN_10bcb0c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3c38;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04ef00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcb0c64; end: 10bcb0ceb; -[SCServiceCompoundNotifier initWithSubnotifiers:compoundType:] */

undefined1 *
FUN_10bcb0c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270e3b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0d3c80();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcb0cec; end: 10bcb0f0f; -[SCServiceCompoundNotifier waitUntil:] */

double FUN_10bcb0cec(double param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  double dVar8;
  double unaff_d9;
  double dVar9;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 8) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    dVar8 = 0.0;
    lVar5 = *(long *)(param_2 + 0x10);
    _objc_retain(lVar5);
    lVar3 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (lVar3 == 0) {
      unaff_d9 = 0.0;
    }
    else {
      unaff_d9 = 0.0;
      do {
        lVar7 = 0;
        dVar9 = unaff_d9;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar5);
          }
          dVar8 = param_1;
          func_0x00010c2a1480(*(undefined8 *)(lVar7 * 8));
          unaff_d9 = dVar8;
          if (dVar8 <= dVar9) {
            unaff_d9 = dVar9;
          }
          if (dVar8 <= 0.0) {
            func_0x00010befa120(puVar2);
          }
          lVar7 = lVar7 + 1;
          dVar9 = unaff_d9;
        } while (lVar3 != lVar7);
        lVar3 = lVar5;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar5);
    func_0x00010c12d500(*(undefined8 *)(param_2 + 0x10));
    param_2 = puVar2;
  }
  else {
    dVar8 = param_1;
    if (*(long *)(param_2 + 8) != 1) goto LAB_10bcb0ed0;
    dVar8 = 0.0;
    param_2 = *(undefined **)(param_2 + 0x10);
    _objc_retain(param_2);
    puVar2 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (puVar2 == (undefined *)0x0) {
      unaff_d9 = 315360000.0;
    }
    else {
      unaff_d9 = 315360000.0;
      do {
        puVar6 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_2);
          }
          dVar8 = param_1;
          func_0x00010c2a1480(*(undefined8 *)((long)puVar6 * 8));
          if (dVar8 <= unaff_d9) {
            unaff_d9 = dVar8;
          }
          puVar6 = puVar6 + 1;
        } while (puVar2 != puVar6);
        puVar2 = param_2;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
  }
  _objc_release(param_2);
LAB_10bcb0ed0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return unaff_d9;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 0x10,0);
  return dVar8;
}



/* Entry: 10bcb0f10; end: 10bcb0f1b; -[SCServiceCompoundNotifier .cxx_destruct] */

void FUN_10bcb0f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10bcb0f1c; end: 10bcb0f6f; +[SCServiceImmediateNotifier defaultNotifier] */

void FUN_10bcb0f1c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fdeb8 != -1) {
    func_0x000107c27d9c(0x1137fdeb8,&PTR___NSConcreteGlobalBlock_110d98730);
  }
  uVar1 = uRam00000001137fdeb0;
  _objc_retain(uRam00000001137fdeb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bcb0f70; end: 10bcb0fa3;  */

void FUN_10bcb0f70(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c3c50;
  _objc_alloc();
  func_0x00010c0627e0(0);
  uVar1 = puRam00000001137fdeb0;
  puRam00000001137fdeb0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb0fa4; end: 10bcb0ff7; +[SCServiceImmediateNotifier neverNotifier] */

void FUN_10bcb0fa4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fdec8 != -1) {
    func_0x000107c27d9c(0x1137fdec8,&PTR___NSConcreteGlobalBlock_110d98750);
  }
  uVar1 = uRam00000001137fdec0;
  _objc_retain(uRam00000001137fdec0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bcb0ff8; end: 10bcb102f;  */

void FUN_10bcb0ff8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c3c50;
  _objc_alloc();
  func_0x00010c0627e0(0x41b2cc0300000000);
  uVar1 = puRam00000001137fdec0;
  puRam00000001137fdec0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb1030; end: 10bcb1077; -[SCServiceImmediateNotifier initWithWaitTime:] */

void FUN_10bcb1030(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e3b8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 10bcb1078; end: 10bcb107f; -[SCServiceImmediateNotifier waitUntil:] */

undefined8 FUN_10bcb1078(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bcb1080; end: 10bcb1123; -[SCServiceTerm initWithService:serviceLoop:] */

undefined1 *
FUN_10bcb1080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270e3c0;
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



/* Entry: 10bcb1124; end: 10bcb1133; -[SCServiceTerm endThisTermAndContinueServiceWhenNotified:] */

void FUN_10bcb1124(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf945f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_endCurrentTermAndContinueService_1125c2b20,
             *(undefined8 *)(param_1 + 8),param_3);
  return;
}


