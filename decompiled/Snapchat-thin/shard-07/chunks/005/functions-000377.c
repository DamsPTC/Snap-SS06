/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056da7c0; end: 1056da9e3; -[SCGrapheneRegistry smsServiceGraphene] */

void FUN_1056da7c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1056da848;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bf898 != -1) {
    func_0x00010002a2fc(0x1136bf898,&puStack_48);
  }
  uVar1 = uRam00000001136bf890;
  _objc_retain(uRam00000001136bf890);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056da9e4; end: 1056da9ef;  */

bool FUN_1056da9e4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1056da9f0; end: 1056daa6b;  */

undefined * FUN_1056da9f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bf8a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df72f8,
                        &UNK_10ddbb6d8,&UNK_10ddbb938,0x1b,FUN_1056daa6c,0);
    do {
      if (puRam00000001136bf8a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bf8a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bf8a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bf8a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bf8a8;
}



/* Entry: 1056daa6c; end: 1056daa77;  */

bool FUN_1056daa6c(uint param_1)

{
  return param_1 < 0x1b;
}



/* Entry: 1056daa78; end: 1056dab07;  */

undefined * FUN_1056daa78(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bf8b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df7318,
                        &UNK_10ddbb9a4,&UNK_10ddbba5c,8,FUN_1056dab08,0,&UNK_10ddbba7c);
    do {
      if (puRam00000001136bf8b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bf8b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bf8b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bf8b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bf8b0;
}



/* Entry: 1056dab08; end: 1056dab13;  */

bool FUN_1056dab08(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 1056dab14; end: 1056dab8f;  */

undefined * FUN_1056dab14(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bf8b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df7338,
                        &UNK_10ddbba86,&UNK_10ddbbb38,0xb,FUN_1056dab90,0);
    do {
      if (puRam00000001136bf8b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bf8b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bf8b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bf8b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bf8b8;
}



/* Entry: 1056dab90; end: 1056dab9b;  */

bool FUN_1056dab90(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 1056dab9c; end: 1056dac17;  */

undefined * FUN_1056dab9c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bf8c0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df7358,
                        &UNK_10ddbbb64,&UNK_10ddbbb84,3,FUN_1056dac18,0);
    do {
      if (puRam00000001136bf8c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bf8c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bf8c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bf8c0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bf8c0;
}



/* Entry: 1056dac18; end: 1056dac23;  */

bool FUN_1056dac18(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1056dac24; end: 1056dac9f;  */

undefined * FUN_1056dac24(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bf8c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df7378,
                        &UNK_10ddbbb90,&UNK_10ddbbbc4,5,FUN_1056daca0,0);
    do {
      if (puRam00000001136bf8c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bf8c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bf8c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bf8c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bf8c8;
}



/* Entry: 1056daca0; end: 1056dacab;  */

bool FUN_1056daca0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1056dacac; end: 1056dad27; +[SendSocialSmsRequest descriptor] */

undefined * FUN_1056dacac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf8d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59b90,
                        &PTR____CFConstantStringClassReference_110df7398,&PTR_DAT_1130f4a48,
                        &PTR_s_userid_1130f4fc0,9,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bf8d0 = puVar1;
  }
  return puRam00000001136bf8d0;
}



/* Entry: 1056dad28; end: 1056dad8f; +[RecipientTemplateValues descriptor] */

void FUN_1056dad28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf8d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59be0,
                        &PTR____CFConstantStringClassReference_110df73b8,&PTR_DAT_1130f4a48,
                        &PTR_DAT_1130f4a60,1,0x10,0x1c);
    puRam00000001136bf8d8 = puVar1;
  }
  return;
}



/* Entry: 1056dad90; end: 1056dadf7; +[SendSocialSmsResponse descriptor] */

void FUN_1056dad90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf8e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59c30,
                        &PTR____CFConstantStringClassReference_110df73d8,&PTR_DAT_1130f4a48,
                        &PTR_DAT_1130f4b60,2,0x18,0x1c);
    puRam00000001136bf8e0 = puVar1;
  }
  return;
}



/* Entry: 1056dadf8; end: 1056dae5f; +[GetLinkDataRequest descriptor] */

void FUN_1056dadf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf8e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59c80,
                        &PTR____CFConstantStringClassReference_110df73f8,&PTR_DAT_1130f4a48,
                        &PTR_s_linkId_1130f4a80,1,0x10,0x1c);
    puRam00000001136bf8e8 = puVar1;
  }
  return;
}



/* Entry: 1056dae60; end: 1056daec7; +[GetLinkDataResponse descriptor] */

void FUN_1056dae60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf8f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59cd0,
                        &PTR____CFConstantStringClassReference_110df7418,&PTR_DAT_1130f4a48,
                        &PTR_DAT_1130f4e00,7,0x38,0x1c);
    puRam00000001136bf8f0 = puVar1;
  }
  return;
}



/* Entry: 1056daec8; end: 1056daf43; +[CreateSocialLinkRequest descriptor] */

undefined * FUN_1056daec8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf8f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59d20,
                        &PTR____CFConstantStringClassReference_110df7438,&PTR_DAT_1130f4a48,
                        &PTR_s_userid_1130f50e0,9,0x40,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bf8f8 = puVar1;
  }
  return puRam00000001136bf8f8;
}



/* Entry: 1056daf44; end: 1056dafbf; +[CreateSocialLinkResponse descriptor] */

undefined * FUN_1056daf44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf900 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59d70,
                        &PTR____CFConstantStringClassReference_110df7458,&PTR_DAT_1130f4a48,
                        &PTR_DAT_1130f4d40,6,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bf900 = puVar1;
  }
  return puRam00000001136bf900;
}



/* Entry: 1056dafc0; end: 1056db027; +[ActivateLinkRequest descriptor] */

void FUN_1056dafc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf908 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59dc0,
                        &PTR____CFConstantStringClassReference_110df7478,&PTR_DAT_1130f4a48,
                        &PTR_s_linkId_1130f4ce0,3,0x20,0x1c);
    puRam00000001136bf908 = puVar1;
  }
  return;
}



/* Entry: 1056db028; end: 1056db08f; +[MainMediaEncryptionKey descriptor] */

void FUN_1056db028(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf910 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59e10,
                        &PTR____CFConstantStringClassReference_110df7498,&PTR_DAT_1130f4a48,
                        &PTR_s_key_1130f4ba0,2,0x18,0x1c);
    puRam00000001136bf910 = puVar1;
  }
  return;
}



/* Entry: 1056db090; end: 1056db0f7; +[ActivateLinkResponse descriptor] */

void FUN_1056db090(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf918 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59e60,
                        &PTR____CFConstantStringClassReference_110df74b8,&PTR_DAT_1130f4a48,
                        &PTR_DAT_1130f4aa0,1,0x10,0x1c);
    puRam00000001136bf918 = puVar1;
  }
  return;
}



/* Entry: 1056db0f8; end: 1056db15f; +[UpdateLinkRequest descriptor] */

void FUN_1056db0f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf920 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59eb0,
                        &PTR____CFConstantStringClassReference_110df74d8,&PTR_DAT_1130f4a48,
                        &PTR_s_linkId_1130f4be0,2,0x18,0x1c);
    puRam00000001136bf920 = puVar1;
  }
  return;
}



/* Entry: 1056db160; end: 1056db1c7; +[MediaUpdate descriptor] */

void FUN_1056db160(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf928 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59f00,
                        &PTR____CFConstantStringClassReference_110df74f8,&PTR_DAT_1130f4a48,
                        &PTR_DAT_1130f4c20,2,0x10,0x1c);
    puRam00000001136bf928 = puVar1;
  }
  return;
}



/* Entry: 1056db1c8; end: 1056db22f; +[UpdateLinkResponse descriptor] */

void FUN_1056db1c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf930 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59f50,
                        &PTR____CFConstantStringClassReference_110df7518,&PTR_DAT_1130f4a48,
                        &PTR_DAT_1130f4ac0,1,0x10,0x1c);
    puRam00000001136bf930 = puVar1;
  }
  return;
}



/* Entry: 1056db230; end: 1056db297; +[DeleteSocialLinkRequest descriptor] */

void FUN_1056db230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf938 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59fa0,
                        &PTR____CFConstantStringClassReference_110df7538,&PTR_DAT_1130f4a48,
                        &PTR_s_linkId_1130f4ae0,1,0x10,0x1c);
    puRam00000001136bf938 = puVar1;
  }
  return;
}



/* Entry: 1056db298; end: 1056db2ff; +[DeleteSocialLinkResponse descriptor] */

void FUN_1056db298(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf940 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59ff0,
                        &PTR____CFConstantStringClassReference_110df7558,&PTR_DAT_1130f4a48,
                        &PTR_DAT_1130f4b00,1,0x10,0x1c);
    puRam00000001136bf940 = puVar1;
  }
  return;
}



/* Entry: 1056db300; end: 1056db367; +[TakedownMediaRequest descriptor] */

void FUN_1056db300(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf948 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5a040,
                        &PTR____CFConstantStringClassReference_110df7578,&PTR_DAT_1130f4a48,
                        &PTR_s_linkId_1130f4b20,1,0x10,0x1c);
    puRam00000001136bf948 = puVar1;
  }
  return;
}



/* Entry: 1056db368; end: 1056db3cf; +[TakedownMediaResponse descriptor] */

void FUN_1056db368(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf950 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5a090,
                        &PTR____CFConstantStringClassReference_110df7598,&PTR_DAT_1130f4a48,
                        &PTR_DAT_1130f4b40,1,0x10,0x1c);
    puRam00000001136bf950 = puVar1;
  }
  return;
}



/* Entry: 1056db3d0; end: 1056db437; +[ErrorResponse descriptor] */

void FUN_1056db3d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf958 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5a0e0,
                        &PTR____CFConstantStringClassReference_110df75b8,&PTR_DAT_1130f4a48,
                        &PTR_DAT_1130f4c60,2,0x10,0x1c);
    puRam00000001136bf958 = puVar1;
  }
  return;
}



/* Entry: 1056db438; end: 1056db4b3; +[MediaLinkPayload descriptor] */

undefined * FUN_1056db438(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf960 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5a130,
                        &PTR____CFConstantStringClassReference_110df75d8,&PTR_DAT_1130f4a48,
                        &PTR_s_format_1130f5200,10,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bf960 = puVar1;
  }
  return puRam00000001136bf960;
}



/* Entry: 1056db4b4; end: 1056db52f; +[MediaLinkMedia descriptor] */

undefined * FUN_1056db4b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf968 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5a180,
                        &PTR____CFConstantStringClassReference_110df75f8,&PTR_DAT_1130f4a48,
                        &PTR_s_format_1130f4ee0,7,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bf968 = puVar1;
  }
  return puRam00000001136bf968;
}



/* Entry: 1056db530; end: 1056db5bb; +[Expiration descriptor] */

undefined * FUN_1056db530(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf970 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5a1d0,
                        &PTR____CFConstantStringClassReference_110df7618,&PTR_DAT_1130f4a48,
                        &PTR_DAT_1130f4ca0,2,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001136bf970 = puVar1;
  }
  return puRam00000001136bf970;
}



/* Entry: 1056db5bc; end: 1056db637;  */

undefined * FUN_1056db5bc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bf978 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df7638,
                        &UNK_10ddbbc18,&UNK_10ddbbcb8,7,FUN_1056db638,0);
    do {
      if (puRam00000001136bf978 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bf978;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bf978,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bf978 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bf978;
}



/* Entry: 1056db638; end: 1056db643;  */

bool FUN_1056db638(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 1056db644; end: 1056db6bf;  */

undefined * FUN_1056db644(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bf980 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df7658,
                        &UNK_10ddbbcd4,&UNK_10ddbbcf8,2,FUN_1056db6c0,0);
    do {
      if (puRam00000001136bf980 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bf980;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bf980,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bf980 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bf980;
}



/* Entry: 1056db6c0; end: 1056db6cb;  */

bool FUN_1056db6c0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1056db6cc; end: 1056db747;  */

undefined * FUN_1056db6cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bf988 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df7678,
                        &UNK_10ddbbd00,&UNK_10ddbbd24,3,FUN_1056db748,0);
    do {
      if (puRam00000001136bf988 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bf988;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bf988,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bf988 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bf988;
}



/* Entry: 1056db748; end: 1056db753;  */

bool FUN_1056db748(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1056db754; end: 1056db7bb; +[SCSharingBitmoji descriptor] */

void FUN_1056db754(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf990 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5a270,
                        &PTR____CFConstantStringClassReference_110dec718,&PTR_DAT_1130f5340,
                        &PTR_s_avatarId_1130f5358,4,0x28,0x1c);
    puRam00000001136bf990 = puVar1;
  }
  return;
}



/* Entry: 1056db7bc; end: 1056db823; +[SCSharingUser descriptor] */

void FUN_1056db7bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf998 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5a2c0,
                        &PTR____CFConstantStringClassReference_110df7698,&PTR_DAT_1130f5340,
                        &PTR_s_userId_1130f53d8,4,0x28,0x1c);
    puRam00000001136bf998 = puVar1;
  }
  return;
}



/* Entry: 1056db824; end: 1056db88b; +[SCSharingInvite descriptor] */

void FUN_1056db824(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf9a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5a310,
                        &PTR____CFConstantStringClassReference_110df6ab8,&PTR_DAT_1130f5340,
                        &PTR_DAT_1130f5458,0xf,0x70,0x1c);
    puRam00000001136bf9a0 = puVar1;
  }
  return;
}



/* Entry: 1056db88c; end: 1056db8ff; -[SCGrapheneWatermarkingMetric2 init] */

undefined1 * FUN_1056db88c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9b58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1056db900; end: 1056dbaeb;  */

/* WARNING: Removing unreachable block (ram,0x0001056dbf20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056db900(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  undefined8 param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  char *unaff_x23;
  double dVar13;
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [8];
  undefined8 *puStack_370;
  char *pcStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_298 [24];
  char *pcStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_200 [24];
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [3];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar4 = param_4;
  pcVar7 = param_5;
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    unaff_x23 = (char *)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
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
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    pcVar4 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    pcVar7 = param_5;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  __Unwind_Resume();
  pcStack_a8 = FUN_1056dbaec;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar3 = pcVar4;
  pcVar9 = pcVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    pcVar2 = "true";
    if ((int)pcVar1 == 0) {
      pcVar2 = "false";
    }
    unaff_x23 = (char *)auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_100,pcVar1);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar8 = "";
    pcVar3 = acStack_138;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar10 = 0;
    pcVar9 = pcVar7;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar4);
  __Unwind_Resume();
  pcVar2 = acStack_200;
  pcStack_148 = FUN_1056dbcd8;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar8;
  pcVar7 = pcVar3;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar9);
  if (pcVar1 != (char *)0x0) {
    plVar11 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_1e0,pcVar1);
    pcVar1 = "true";
    if ((int)pcVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1c8,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_1b0,pcVar1);
    acStack_200[0] = '\0';
    acStack_200[1] = '\0';
    acStack_200[2] = '\0';
    acStack_200[3] = '\0';
    acStack_200[4] = '\0';
    acStack_200[5] = '\0';
    acStack_200[6] = '\0';
    acStack_200[7] = '\0';
    acStack_200[8] = '\0';
    acStack_200[9] = '\0';
    acStack_200[10] = '\0';
    acStack_200[0xb] = '\0';
    acStack_200[0xc] = '\0';
    acStack_200[0xd] = '\0';
    acStack_200[0xe] = '\0';
    acStack_200[0xf] = '\0';
    acStack_200[0x10] = '\0';
    acStack_200[0x11] = '\0';
    acStack_200[0x12] = '\0';
    acStack_200[0x13] = '\0';
    acStack_200[0x14] = '\0';
    acStack_200[0x15] = '\0';
    acStack_200[0x16] = '\0';
    acStack_200[0x17] = '\0';
    func_0x00010007e1e8(acStack_200,auStack_1e0,&lStack_198,3);
    pcVar4 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108a9a40,acStack_200,param_6);
    puStack_1e8 = acStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    lVar10 = 0;
    pcVar7 = pcVar2;
    do {
      if ((&cStack_199)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x23 = acStack_200;
    } while (lVar10 != -0x48);
  }
  _objc_release(pcVar9);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  puVar12 = auStack_1e0;
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (char *)puVar12);
  _objc_release(pcVar9);
  _objc_release(pcVar8);
  __Unwind_Resume();
  pcStack_208 = FUN_1056dbf50;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar7;
  pcVar2 = pcVar4;
  pcVar8 = pcVar7;
  dVar13 = param_1;
  pppuStack_210 = &ppuStack_150;
  _objc_retain();
  if (pcVar1 != (char *)0x0) {
    _objc_retain(pcVar7);
    plVar11 = *(long **)(pcVar1 + 8);
    pcVar1 = "true";
    if ((int)pcVar4 == 0) {
      pcVar1 = "false";
    }
    puVar12 = auStack_278;
    func_0x00010002b838(auStack_278,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_260,pcVar1);
    acStack_298[0] = '\0';
    acStack_298[1] = '\0';
    acStack_298[2] = '\0';
    acStack_298[3] = '\0';
    acStack_298[4] = '\0';
    acStack_298[5] = '\0';
    acStack_298[6] = '\0';
    acStack_298[7] = '\0';
    acStack_298[8] = '\0';
    acStack_298[9] = '\0';
    acStack_298[10] = '\0';
    acStack_298[0xb] = '\0';
    acStack_298[0xc] = '\0';
    acStack_298[0xd] = '\0';
    acStack_298[0xe] = '\0';
    acStack_298[0xf] = '\0';
    acStack_298[0x10] = '\0';
    acStack_298[0x11] = '\0';
    acStack_298[0x12] = '\0';
    acStack_298[0x13] = '\0';
    acStack_298[0x14] = '\0';
    acStack_298[0x15] = '\0';
    acStack_298[0x16] = '\0';
    acStack_298[0x17] = '\0';
    func_0x00010007e1e8(acStack_298,auStack_278,&lStack_248,2);
    dVar13 = param_1 * 1000.0;
    pcVar2 = "\x01";
    pcVar8 = acStack_298;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108a9a90,pcVar8,(long)dVar13);
    pcStack_280 = acStack_298;
    func_0x00010007e5dc(&pcStack_280);
    lVar10 = 0;
    do {
      if ((&cStack_249)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
    pcVar3 = pcVar7;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_261 < '\0') {
      __ZdlPv(auStack_278[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar7);
    pcVar7 = pcVar8;
    __Unwind_Resume();
    pcStack_2a8 = FUN_1056dc15c;
    lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar7;
    pppuStack_2b0 = &pppuStack_210;
    _objc_retain();
    if (pcVar3 != (char *)0x0) {
      _objc_retain(pcVar7);
      plVar11 = *(long **)(pcVar3 + 8);
      pcVar1 = "true";
      if ((int)pcVar2 == 0) {
        pcVar1 = "false";
      }
      puVar12 = auStack_318;
      func_0x00010002b838(auStack_318,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar1 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_300,pcVar1);
      uStack_338 = 0;
      uStack_330 = 0;
      uStack_328 = 0;
      func_0x00010007e1e8(&uStack_338,auStack_318,&lStack_2e8,2);
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108a9ae0,&uStack_338,(long)(dVar13 * 1000.0));
      puStack_320 = &uStack_338;
      func_0x00010007e5dc(&puStack_320);
      lVar10 = 0;
      pcVar2 = (char *)auStack_318;
      do {
        if ((&cStack_2e9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
      pcVar1 = pcVar7;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
      ___stack_chk_fail();
      _objc_release(pcVar7);
      if (cStack_301 < '\0') {
        __ZdlPv(auStack_318[0]);
      }
      _objc_release(pcVar7);
      _objc_release(pcVar7);
      pcVar4 = pcVar1;
      __Unwind_Resume();
      pcStack_348 = FUN_1056dc368;
      puStack_370 = puVar12;
      pcStack_368 = pcVar2;
      pcStack_360 = pcVar1;
      pcStack_358 = pcVar7;
      pppuStack_350 = &pppuStack_2b0;
      _objc_initWeak(auStack_378,pcVar4);
      puVar5 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_380,auStack_378);
      func_0x00010bf11fe0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126bd300;
      _objc_alloc(PTR_PTR_1126bd300);
      func_0x00010c041220();
      func_0x00010bf9d660(*(undefined8 *)(pcVar4 + _DAT_112727d64));
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_destroyWeak(auStack_380);
      _objc_destroyWeak(auStack_378);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar7);
  return;
}



/* Entry: 1056dbaec; end: 1056dbcd7;  */

/* WARNING: Removing unreachable block (ram,0x0001056dbf20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056dbaec(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  undefined8 param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  char *unaff_x23;
  double dVar13;
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [8];
  undefined8 *puStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_1f8 [24];
  char *pcStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_160 [24];
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  pcVar4 = param_5;
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    unaff_x23 = (char *)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
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
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    pcVar3 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    pcVar4 = param_5;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  __Unwind_Resume();
  pcVar9 = acStack_160;
  pcStack_a8 = FUN_1056dbcd8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar7 = pcVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_140,pcVar2);
    pcVar2 = "true";
    if ((int)pcVar3 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_128,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar3 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_110,pcVar3);
    acStack_160[0] = '\0';
    acStack_160[1] = '\0';
    acStack_160[2] = '\0';
    acStack_160[3] = '\0';
    acStack_160[4] = '\0';
    acStack_160[5] = '\0';
    acStack_160[6] = '\0';
    acStack_160[7] = '\0';
    acStack_160[8] = '\0';
    acStack_160[9] = '\0';
    acStack_160[10] = '\0';
    acStack_160[0xb] = '\0';
    acStack_160[0xc] = '\0';
    acStack_160[0xd] = '\0';
    acStack_160[0xe] = '\0';
    acStack_160[0xf] = '\0';
    acStack_160[0x10] = '\0';
    acStack_160[0x11] = '\0';
    acStack_160[0x12] = '\0';
    acStack_160[0x13] = '\0';
    acStack_160[0x14] = '\0';
    acStack_160[0x15] = '\0';
    acStack_160[0x16] = '\0';
    acStack_160[0x17] = '\0';
    func_0x00010007e1e8(acStack_160,auStack_140,&lStack_f8,3);
    pcVar8 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108a9a40,acStack_160,param_6);
    puStack_148 = acStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar10 = 0;
    pcVar7 = pcVar9;
    do {
      if ((&cStack_f9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x23 = acStack_160;
    } while (lVar10 != -0x48);
  }
  _objc_release(pcVar4);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  puVar12 = auStack_140;
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (char *)puVar12);
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_168 = FUN_1056dbf50;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar7;
  pcVar1 = pcVar8;
  pcVar4 = pcVar7;
  dVar13 = param_1;
  ppuStack_170 = &puStack_b0;
  _objc_retain();
  if (pcVar3 != (char *)0x0) {
    _objc_retain(pcVar7);
    plVar11 = *(long **)(pcVar3 + 8);
    pcVar1 = "true";
    if ((int)pcVar8 == 0) {
      pcVar1 = "false";
    }
    puVar12 = auStack_1d8;
    func_0x00010002b838(auStack_1d8,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_1c0,pcVar1);
    acStack_1f8[0] = '\0';
    acStack_1f8[1] = '\0';
    acStack_1f8[2] = '\0';
    acStack_1f8[3] = '\0';
    acStack_1f8[4] = '\0';
    acStack_1f8[5] = '\0';
    acStack_1f8[6] = '\0';
    acStack_1f8[7] = '\0';
    acStack_1f8[8] = '\0';
    acStack_1f8[9] = '\0';
    acStack_1f8[10] = '\0';
    acStack_1f8[0xb] = '\0';
    acStack_1f8[0xc] = '\0';
    acStack_1f8[0xd] = '\0';
    acStack_1f8[0xe] = '\0';
    acStack_1f8[0xf] = '\0';
    acStack_1f8[0x10] = '\0';
    acStack_1f8[0x11] = '\0';
    acStack_1f8[0x12] = '\0';
    acStack_1f8[0x13] = '\0';
    acStack_1f8[0x14] = '\0';
    acStack_1f8[0x15] = '\0';
    acStack_1f8[0x16] = '\0';
    acStack_1f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1f8,auStack_1d8,&lStack_1a8,2);
    dVar13 = param_1 * 1000.0;
    pcVar1 = "\x01";
    pcVar4 = acStack_1f8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108a9a90,pcVar4,(long)dVar13);
    pcStack_1e0 = acStack_1f8;
    func_0x00010007e5dc(&pcStack_1e0);
    lVar10 = 0;
    do {
      if ((&cStack_1a9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
    pcVar2 = pcVar7;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_1c1 < '\0') {
      __ZdlPv(auStack_1d8[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar7);
    pcVar7 = pcVar4;
    __Unwind_Resume();
    pcStack_208 = FUN_1056dc15c;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar7;
    pppuStack_210 = &ppuStack_170;
    _objc_retain();
    if (pcVar2 != (char *)0x0) {
      _objc_retain(pcVar7);
      plVar11 = *(long **)(pcVar2 + 8);
      pcVar3 = "true";
      if ((int)pcVar1 == 0) {
        pcVar3 = "false";
      }
      puVar12 = auStack_278;
      func_0x00010002b838(auStack_278,pcVar3);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar1 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_260,pcVar1);
      uStack_298 = 0;
      uStack_290 = 0;
      uStack_288 = 0;
      func_0x00010007e1e8(&uStack_298,auStack_278,&lStack_248,2);
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108a9ae0,&uStack_298,(long)(dVar13 * 1000.0));
      puStack_280 = &uStack_298;
      func_0x00010007e5dc(&puStack_280);
      lVar10 = 0;
      pcVar1 = (char *)auStack_278;
      do {
        if ((&cStack_249)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
      pcVar3 = pcVar7;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
      ___stack_chk_fail();
      _objc_release(pcVar7);
      if (cStack_261 < '\0') {
        __ZdlPv(auStack_278[0]);
      }
      _objc_release(pcVar7);
      _objc_release(pcVar7);
      pcVar4 = pcVar3;
      __Unwind_Resume();
      pcStack_2a8 = FUN_1056dc368;
      puStack_2d0 = puVar12;
      pcStack_2c8 = pcVar1;
      pcStack_2c0 = pcVar3;
      pcStack_2b8 = pcVar7;
      pppuStack_2b0 = &pppuStack_210;
      _objc_initWeak(auStack_2d8,pcVar4);
      puVar5 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_2e0,auStack_2d8);
      func_0x00010bf11fe0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126bd300;
      _objc_alloc(PTR_PTR_1126bd300);
      func_0x00010c041220();
      func_0x00010bf9d660(*(undefined8 *)(pcVar4 + _DAT_112727d64));
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_destroyWeak(auStack_2e0);
      _objc_destroyWeak(auStack_2d8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar7);
  return;
}



/* Entry: 1056dbcd8; end: 1056dbf4f;  */

/* WARNING: Removing unreachable block (ram,0x0001056dbf20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056dbcd8(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  undefined8 param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *unaff_x23;
  double dVar12;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined8 *puStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar6 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    pcVar1 = "true";
    if ((int)param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108a9a40,acStack_c0,param_6);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar9 = 0;
    pcVar6 = pcVar2;
    do {
      if ((&cStack_59)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
      unaff_x23 = acStack_c0;
    } while (lVar9 != -0x48);
  }
  _objc_release(param_5);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar11 = auStack_a0;
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while (unaff_x23 != (char *)puVar11);
  _objc_release(param_5);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_c8 = FUN_1056dbf50;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar6;
  pcVar7 = pcVar1;
  pcVar8 = pcVar6;
  dVar12 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain();
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar6);
    plVar10 = *(long **)(pcVar2 + 8);
    pcVar2 = "true";
    if ((int)pcVar1 == 0) {
      pcVar2 = "false";
    }
    puVar11 = auStack_138;
    func_0x00010002b838(auStack_138,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_120,pcVar1);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,auStack_138,&lStack_108,2);
    dVar12 = param_1 * 1000.0;
    pcVar7 = "\x01";
    pcVar8 = acStack_158;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108a9a90,pcVar8,(long)dVar12);
    pcStack_140 = acStack_158;
    func_0x00010007e5dc(&pcStack_140);
    lVar9 = 0;
    do {
      if ((&cStack_109)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
    pcVar3 = pcVar6;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar6);
    pcVar6 = pcVar8;
    __Unwind_Resume();
    pcStack_168 = FUN_1056dc15c;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar6;
    ppuStack_170 = &puStack_d0;
    _objc_retain();
    if (pcVar3 != (char *)0x0) {
      _objc_retain(pcVar6);
      plVar10 = *(long **)(pcVar3 + 8);
      pcVar1 = "true";
      if ((int)pcVar7 == 0) {
        pcVar1 = "false";
      }
      puVar11 = auStack_1d8;
      func_0x00010002b838(auStack_1d8,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_1c0,pcVar1);
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      func_0x00010007e1e8(&uStack_1f8,auStack_1d8,&lStack_1a8,2);
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108a9ae0,&uStack_1f8,(long)(dVar12 * 1000.0));
      puStack_1e0 = &uStack_1f8;
      func_0x00010007e5dc(&puStack_1e0);
      lVar9 = 0;
      pcVar7 = (char *)auStack_1d8;
      do {
        if ((&cStack_1a9)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x30);
      pcVar1 = pcVar6;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(pcVar6);
      if (cStack_1c1 < '\0') {
        __ZdlPv(auStack_1d8[0]);
      }
      _objc_release(pcVar6);
      _objc_release(pcVar6);
      pcVar2 = pcVar1;
      __Unwind_Resume();
      pcStack_208 = FUN_1056dc368;
      puStack_230 = puVar11;
      pcStack_228 = pcVar7;
      pcStack_220 = pcVar1;
      pcStack_218 = pcVar6;
      pppuStack_210 = &ppuStack_170;
      _objc_initWeak(auStack_238,pcVar2);
      puVar4 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_240,auStack_238);
      func_0x00010bf11fe0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126bd300;
      _objc_alloc(PTR_PTR_1126bd300);
      func_0x00010c041220();
      func_0x00010bf9d660(*(undefined8 *)(pcVar2 + _DAT_112727d64));
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_destroyWeak(auStack_240);
      _objc_destroyWeak(auStack_238);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar6);
  return;
}



/* Entry: 1056dbf50; end: 1056dc15b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056dbf50(double param_1,long param_2,undefined8 *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *unaff_x22;
  double dVar8;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_4;
  puVar5 = param_3;
  pcVar2 = param_4;
  dVar8 = param_1;
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_4);
    plVar6 = *(long **)(param_2 + 8);
    pcVar2 = "true";
    if ((int)param_3 == 0) {
      pcVar2 = "false";
    }
    unaff_x22 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    dVar8 = param_1 * 1000.0;
    puVar5 = (undefined8 *)&UNK_1108a9a90;
    pcVar2 = acStack_98;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108a9a90,pcVar2,(long)dVar8);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar7 = 0;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
    pcVar1 = param_4;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_4);
    _objc_release(param_4);
    param_4 = pcVar2;
    __Unwind_Resume();
    pcStack_a8 = FUN_1056dc15c;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = param_4;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain();
    if (pcVar1 != (char *)0x0) {
      _objc_retain(param_4);
      plVar6 = *(long **)(pcVar1 + 8);
      pcVar2 = "true";
      if ((int)puVar5 == 0) {
        pcVar2 = "false";
      }
      unaff_x22 = auStack_118;
      func_0x00010002b838(auStack_118,pcVar2);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_100,pcVar2);
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
      (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108a9ae0,&uStack_138,(long)(dVar8 * 1000.0));
      puStack_120 = &uStack_138;
      func_0x00010007e5dc(&puStack_120);
      lVar7 = 0;
      puVar5 = auStack_118;
      do {
        if ((&cStack_e9)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x30);
      pcVar2 = param_4;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      _objc_release(param_4);
      if (cStack_101 < '\0') {
        __ZdlPv(auStack_118[0]);
      }
      _objc_release(param_4);
      _objc_release(param_4);
      pcVar1 = pcVar2;
      __Unwind_Resume();
      pcStack_148 = FUN_1056dc368;
      puStack_170 = unaff_x22;
      puStack_168 = puVar5;
      pcStack_160 = pcVar2;
      pcStack_158 = param_4;
      ppuStack_150 = &puStack_b0;
      _objc_initWeak(auStack_178,pcVar1);
      puVar3 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_180,auStack_178);
      func_0x00010bf11fe0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126bd300;
      _objc_alloc(PTR_PTR_1126bd300);
      func_0x00010c041220();
      func_0x00010bf9d660(*(undefined8 *)(pcVar1 + _DAT_112727d64));
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_180);
      _objc_destroyWeak(auStack_178);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056dc15c; end: 1056dc367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056dc15c(double param_1,long param_2,undefined8 *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *unaff_x22;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_4;
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_4);
    plVar5 = *(long **)(param_2 + 8);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    unaff_x22 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
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
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108a9ae0,&uStack_98,(long)(param_1 * 1000.0));
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar6 = 0;
    param_3 = auStack_78;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
    pcVar1 = param_4;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_4);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcStack_a8 = FUN_1056dc368;
  puStack_d0 = unaff_x22;
  puStack_c8 = param_3;
  pcStack_c0 = pcVar1;
  pcStack_b8 = param_4;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_d8,pcVar2);
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_e0,auStack_d8);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bd300;
  _objc_alloc(PTR_PTR_1126bd300);
  func_0x00010c041220();
  func_0x00010bf9d660(*(undefined8 *)(pcVar2 + _DAT_112727d64));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d8);
  return;
}



/* Entry: 1056dc368; end: 1056dc467; -[SCLegacySafeBrowsingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056dc368(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd300;
  _objc_alloc(PTR_PTR_1126bd300);
  func_0x00010c041220();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112727d64));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1056dc468; end: 1056dc4a7;  */

void FUN_1056dc468(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be98440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1056dc4a8; end: 1056dc67f; -[SCLegacySafeBrowsingServicesEntryPoint _safeBrowsingImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056dc4a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126bd308;
  _objc_alloc();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112727d78;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar10;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112727d7c;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar11;
  func_0x00010bf0dd00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112727d80;
    _objc_loadWeakRetained(lVar12);
  }
  lVar4 = lVar12;
  func_0x00010bfcdfa0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112727d68;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112727d6c;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112727d70;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c0d7980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048940(puVar1,param_2,lVar2,lVar3,lVar4,lVar6,lVar8,lVar9);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056dc680; end: 1056dc783; -[SCLegacySafeBrowsingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056dc680(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112727d64,0);
  _objc_destroyWeak(param_1 + _DAT_112727d70);
  _objc_destroyWeak(param_1 + _DAT_112727d6c);
  _objc_destroyWeak(param_1 + _DAT_112727d68);
  _objc_destroyWeak(param_1 + _DAT_112727d80);
  _objc_destroyWeak(param_1 + _DAT_112727d7c);
  _objc_destroyWeak(param_1 + _DAT_112727d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727d74);
  return;
}



/* Entry: 1056dc784; end: 1056dc95b; -[SCSafeBrowsingServiceProvider _safeBrowsingImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056dc784(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126bd308;
  _objc_alloc();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112727d94;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar10;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112727d98;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar11;
  func_0x00010bf0dd00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112727d9c;
    _objc_loadWeakRetained(lVar12);
  }
  lVar4 = lVar12;
  func_0x00010bfcdfa0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112727d84;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112727d88;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112727d8c;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c0d7980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048940(puVar1,param_2,lVar2,lVar3,lVar4,lVar6,lVar8,lVar9);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056dc95c; end: 1056dc9a7; -[SCSafeBrowsingServiceProvider _composerSafeBrowsingImpl] */

void FUN_1056dc95c(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010be98440();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bd318;
  _objc_alloc(PTR_PTR_1126bd318);
  func_0x00010c041200();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056dc9a8; end: 1056dca1b; -[SCSafeBrowsingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056dc9a8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727d8c);
  _objc_destroyWeak(param_1 + _DAT_112727d88);
  _objc_destroyWeak(param_1 + _DAT_112727d84);
  _objc_destroyWeak(param_1 + _DAT_112727d9c);
  _objc_destroyWeak(param_1 + _DAT_112727d98);
  _objc_destroyWeak(param_1 + _DAT_112727d94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727d90);
  return;
}



/* Entry: 1056dca1c; end: 1056dca8f; -[SCComposerSafeBrowsingImpl initWithSafeBrowsing:] */

undefined1 * FUN_1056dca1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9b60;
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



/* Entry: 1056dca90; end: 1056dcbaf; -[SCComposerSafeBrowsingImpl checkUrlWithUrl:] */

void FUN_1056dca90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar2 = PTR_PTR_1126b1588;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1056dcbb0;
  puStack_50 = &UNK_1108a9c40;
  _objc_retain(puVar2);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1056dcbf8;
  puStack_78 = &UNK_110849810;
  puStack_48 = puVar2;
  _objc_retain(puVar2);
  puStack_70 = puVar2;
  func_0x00010bf386c0(uVar4,param_2,puVar3,&puStack_68,&puStack_90);
  _objc_release(puVar3);
  puVar1 = puStack_70;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(puStack_48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056dcbb0; end: 1056dcbf7;  */

void FUN_1056dcbb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb700(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056dcbf8; end: 1056dcc03;  */

void FUN_1056dcbf8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbb6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fulfillWithError__1125cc760,param_2);
  return;
}



/* Entry: 1056dcc04; end: 1056dcc0f; -[SCComposerSafeBrowsingImpl .cxx_destruct] */

void FUN_1056dcc04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056dcc10; end: 1056dce0f; -[SCSafeBrowsingImpl initWithSnapTokenProvider:attestationProvider:grapheneRegistry:unifiedGRPCClientFactory:circumstanceEngine:networkConnectivityAnnouncer:] */

undefined1 * FUN_1056dcc10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x7;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  _objc_retain(in_x7);
  puStack_58 = PTR_PTR_1126e9b68;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar5 = in_x5;
    func_0x00010c269d40(in_x5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf56360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126bd320;
    _objc_alloc();
    func_0x00010c058f80();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar5);
    _objc_retain(in_x4);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = in_x4;
    _objc_release(uVar5);
    _objc_retain(in_x7);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = in_x7;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(in_x7);
  _objc_release(in_x5);
  _objc_release(in_x4);
  return (undefined1 *)puVar1;
}



/* Entry: 1056dce10; end: 1056dce1f; -[SCSafeBrowsingImpl checkUrl:successBlock:failureBlock:] */

void FUN_1056dce10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf386b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_checkUrl_includeConnectivityChec_1125abb50,param_3,1,param_4,param_5);
  return;
}



/* Entry: 1056dce20; end: 1056dd0eb; -[SCSafeBrowsingImpl checkUrl:includeConnectivityCheck:successBlock:failureBlock:] */

void FUN_1056dce20(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined *param_5
                  ,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126bd328;
  func_0x00010c28f8c0(PTR_PTR_1126bd328);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_retain(param_3);
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfe4420(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010c0b5ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar6 = puVar2;
  func_0x00010bf4b900();
  _objc_release(uVar4);
  _objc_release(puVar2);
  if ((param_5 == (undefined *)0x0) || ((int)puVar6 == 0)) {
    if (param_4 != 0) {
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x00010bf5f580();
      if (lVar5 == 0) {
        if (param_6 != 0) {
          puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260();
          _objc_retainAutoreleasedReturnValue();
          puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b0 = 0xc2000000;
          uStack_a8 = 0x1056dd104;
          puStack_a0 = &UNK_11084aaa8;
          _objc_retain(param_6);
          puStack_98 = puVar2;
          lStack_90 = param_6;
          _objc_retain(puVar2);
          func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_b8);
          _objc_release(puStack_98);
          _objc_release(lStack_90);
          _objc_release(puVar2);
        }
        puVar6 = *(undefined **)(param_1 + 0x18);
        func_0x00010c269d40(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar6;
        func_0x00010c149340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec320();
        _objc_release(puVar2);
        goto LAB_1056dcfcc;
      }
    }
    puVar6 = PTR_PTR_1126bd330;
    _objc_alloc_init(PTR_PTR_1126bd330);
    uVar3 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21afe0(puVar6);
    _objc_release(uVar3);
    func_0x00010be15340(param_1);
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1056dd0ec;
    puStack_70 = &UNK_110849530;
    _objc_retain(param_5);
    puStack_68 = param_5;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_88);
    puVar6 = puStack_68;
  }
LAB_1056dcfcc:
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1056dd0ec; end: 1056dd113;  */

void FUN_1056dd0ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056dd100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),0,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c14e0);
  return;
}



/* Entry: 1056dd114; end: 1056dd127; -[SCSafeBrowsingImpl learnMoreURL] */

void FUN_1056dd114(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSURL_1126ae598,PTR_s_URLWithString__11254e6b8,
             &PTR____CFConstantStringClassReference_110df76f8);
  return;
}



/* Entry: 1056dd128; end: 1056dd2bf; -[SCSafeBrowsingImpl _fetchUrlReputationV2WithRequest:successBlock:failureBlock:attemptIdx:callOptionsBuilder:urlToCheck:] */

void FUN_1056dd128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_8);
  func_0x00010bfc9960(uVar1);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056dd2c0; end: 1056dd343;  */

void FUN_1056dd2c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a4a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056dd344; end: 1056dd6ff; -[SCSafeBrowsingImpl _handleGetUrlReputationV2Response:error:attemptIdx:successBlock:failureBlock:callOptionsBuilder:request:url:] */

void FUN_1056dd344(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126bd328;
  func_0x00010c28f900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd328;
  func_0x00010c28f8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bd328;
  func_0x00010c28f8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c149340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _CACurrentMediaTime();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 == 0) {
    func_0x00010bf9c880(param_3);
    func_0x00010c0df880();
    _objc_retainAutoreleasedReturnValue();
    if (param_6 != 0) {
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_1056dd700;
      puStack_98 = &UNK_11084a9e8;
      _objc_retain(param_6);
      lStack_80 = param_6;
      _objc_retain(param_3);
      uStack_90 = param_3;
      _objc_retain(puVar6);
      puStack_88 = puVar6;
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_b0);
      _objc_release(puStack_88);
      _objc_release(uStack_90);
      _objc_release(lStack_80);
      func_0x00010bfec320(uVar5);
      _CACurrentMediaTime();
      func_0x00010befbfe0(uVar5);
    }
    _objc_release(puVar6);
  }
  else if (param_5 < 1) {
    uVar4 = 0;
    _dispatch_time(0,1000000000);
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_1056dd780;
    puStack_f0 = &UNK_1108a9ca0;
    lStack_e8 = param_1;
    _objc_retain(param_9);
    uStack_e0 = param_9;
    _objc_retain(param_6);
    lStack_c8 = param_6;
    _objc_retain(param_7);
    uStack_c0 = param_7;
    lStack_b8 = param_5;
    _objc_retain(param_8);
    uStack_d8 = param_8;
    _objc_retain(param_10);
    uStack_d0 = param_10;
    func_0x00010058c530(uVar4,uVar7,&puStack_108);
    _objc_release(uVar7);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_c0);
    _objc_release(lStack_c8);
    _objc_release(uStack_e0);
  }
  else {
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    uStack_128 = 0x1056dd79c;
    puStack_120 = &UNK_11084aaa8;
    _objc_retain(param_7);
    uStack_110 = param_7;
    _objc_retain(param_4);
    lStack_118 = param_4;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_138);
    func_0x00010bfec320(uVar5);
    _objc_release(lStack_118);
    _objc_release(uStack_110);
  }
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056dd700; end: 1056dd77f;  */

void FUN_1056dd700(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c252d60();
  if (iVar1 < 2) {
    if (iVar1 != -0x4524111) {
      uVar2 = 999;
      if (iVar1 != 0) {
        uVar2 = 0;
      }
      goto LAB_1056dd768;
    }
  }
  else if (2 < iVar1 - 2U && iVar1 != 6) {
    uVar2 = (ulong)(iVar1 == 5);
    goto LAB_1056dd768;
  }
  uVar2 = 2;
LAB_1056dd768:
                    /* WARNING: Could not recover jumptable at 0x0001056dd77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,uVar2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1056dd780; end: 1056dd7ab;  */

void FUN_1056dd780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be15350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchUrlReputationV2WithRequest_112562e70,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x48),*(long *)(param_1 + 0x50) + 1,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1056dd7ac; end: 1056dd7f3; -[SCSafeBrowsingImpl .cxx_destruct] */

void FUN_1056dd7ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056dd7f4; end: 1056dd81f; +[SCGrapheneSafebrowsingMetric urlReputationSuccess] */

void FUN_1056dd7f4(void)

{
  _objc_alloc(PTR_PTR_1126bd328);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056dd820; end: 1056dd84b; +[SCGrapheneSafebrowsingMetric urlReputationFailure] */

void FUN_1056dd820(void)

{
  _objc_alloc(PTR_PTR_1126bd328);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056dd84c; end: 1056dd877; +[SCGrapheneSafebrowsingMetric urlReputationLatency] */

void FUN_1056dd84c(void)

{
  _objc_alloc(PTR_PTR_1126bd328);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056dd878; end: 1056dd917; -[SCGrapheneSafebrowsingMetric description] */

void FUN_1056dd878(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110df7778;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110df7778,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e9b70;
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



/* Entry: 1056dd918; end: 1056dda6f; -[SCGrapheneRegistry safebrowsingGraphene] */

void FUN_1056dd918(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1056dd9a0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bf9b0 != -1) {
    func_0x00010002a2fc(0x1136bf9b0,&puStack_48);
  }
  uVar1 = uRam00000001136bf9a8;
  _objc_retain(uRam00000001136bf9a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056dda70; end: 1056ddae3; -[UNISCPBSecurityUrlReputationService initWithUnifiedGrpcService:] */

undefined1 * FUN_1056dda70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9b78;
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



/* Entry: 1056ddae4; end: 1056ddbc7; -[UNISCPBSecurityUrlReputationService getUrlReputationWithRequest:callOptionsBuilder:handler:] */

void FUN_1056ddae4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bd338;
  _objc_opt_class(PTR_PTR_1126bd338);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df77f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056ddbc8; end: 1056ddcab; -[UNISCPBSecurityUrlReputationService setUrlReputationWithRequest:callOptionsBuilder:handler:] */

void FUN_1056ddbc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b25e8;
  _objc_opt_class(PTR_PTR_1126b25e8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df7818,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056ddcac; end: 1056ddcb7; -[UNISCPBSecurityUrlReputationService .cxx_destruct] */

void FUN_1056ddcac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056ddcb8; end: 1056ddd47;  */

undefined * FUN_1056ddcb8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bf9b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df7838,
                        &UNK_10ddbbd30,&UNK_10ddbbd4c,4,FUN_1056ddd48,0,&UNK_10ddbbd5c);
    do {
      if (puRam00000001136bf9b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bf9b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bf9b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bf9b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bf9b8;
}



/* Entry: 1056ddd48; end: 1056ddd53;  */

bool FUN_1056ddd48(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1056ddd54; end: 1056dddcf; +[SCPBSecurityGetUrlReputationResponse descriptor] */

undefined * FUN_1056ddd54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf9c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5a5e0,
                        &PTR____CFConstantStringClassReference_110df7858,&PTR_DAT_1130f56f8,
                        &PTR_DAT_1130f5710,2,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bf9c0 = puVar1;
  }
  return puRam00000001136bf9c0;
}



/* Entry: 1056dddd0; end: 1056dde4b; +[SCPBSecurityGetUrlReputationRequest descriptor] */

undefined * FUN_1056dddd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf9c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5a630,
                        &PTR____CFConstantStringClassReference_110df7878,&PTR_DAT_1130f56f8,
                        &PTR_s_URL_1130f57d0,5,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bf9c8 = puVar1;
  }
  return puRam00000001136bf9c8;
}



/* Entry: 1056dde4c; end: 1056ddf57; +[SCPBSecuritySetUrlReputationRequest descriptor] */

undefined * FUN_1056dde4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf9d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5a680,
                        &PTR____CFConstantStringClassReference_110df7898,&PTR_DAT_1130f56f8,
                        &PTR_s_URL_1130f5750,4,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bf9d0 = puVar1;
  }
  return puRam00000001136bf9d0;
}



/* Entry: 1056ddf58; end: 1056ddf63;  */

bool FUN_1056ddf58(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 1056ddf64; end: 1056de007; -[SCSpotlightSnapDownloaderImpl initWithSimpleContentFetcher:temporaryFileWriter:] */

undefined1 *
FUN_1056ddf64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9b80;
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



/* Entry: 1056de008; end: 1056de1af; -[SCSpotlightSnapDownloaderImpl downloadSnapWithMediaURL:completion:] */

void FUN_1056de008(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b08b0;
  uVar3 = param_3;
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c13e600(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056de1b0; end: 1056de2d3;  */

void FUN_1056de1b0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010bfcaaa0();
  puVar3 = PTR_PTR_1126af5d0;
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  if (lVar5 == 0) {
    lVar5 = param_2;
    func_0x00010bfc5880(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64a80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    puVar2 = (undefined *)(param_1 + 0x30);
    _objc_loadWeakRetained(puVar2);
    puVar3 = puVar2;
    func_0x00010beebd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    lVar5 = *(long *)(param_1 + 0x28);
    pcVar4 = *(code **)(lVar5 + 0x10);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = *(code **)(lVar5 + 0x10);
  }
  (*pcVar4)(lVar5,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056de2d4; end: 1056de3c7; -[SCSpotlightSnapDownloaderImpl removeDownloadResultFromTemporaryDirectoryWithDownloadResult:] */

undefined8 FUN_1056de2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfacbe0(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar5);
  if ((int)puVar4 != 0) {
    uVar5 = param_3;
    func_0x00010c28f340(param_3);
    _objc_retainAutoreleasedReturnValue();
    lStack_48 = 0;
    func_0x00010c12cc60(puVar2,param_2,uVar5,&lStack_48);
    lVar1 = lStack_48;
    _objc_release(uVar5);
    if (lVar1 == 0) {
      uVar5 = 1;
      goto LAB_1056de394;
    }
  }
  uVar5 = 0;
LAB_1056de394:
  _objc_release(puVar2);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1056de3c8; end: 1056de593; -[SCSpotlightSnapDownloaderImpl _writeToTemporaryDirectoryWithData:] */

void FUN_1056de3c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  long lStack_48;
  
  lVar6 = *(long *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = lVar6;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110db77b8);
  _objc_retainAutoreleasedReturnValue();
  lStack_48 = 0;
  lVar3 = lVar6;
  func_0x00010c2bda80(lVar6,param_2,param_3,puVar2,0,&lStack_48,in_x6,in_x7,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar7 = lStack_48;
  _objc_retain(lStack_48);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
  puVar2 = PTR_PTR_1126af5d0;
  if (lVar3 == 0) {
    if (lVar7 != 0) {
      func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,lVar7);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1056de520;
    }
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110df78f8,200,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126bd340;
    _objc_alloc(PTR_PTR_1126bd340);
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
    func_0x00010bfee820();
    func_0x00010c059ea0(puVar4,param_2,puVar5);
    func_0x00010c2619e0(puVar2,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(puVar5);
LAB_1056de520:
  _objc_release(lVar3);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056de594; end: 1056de603; -[SCSpotlightSnapDownloaderImpl .cxx_destruct] */

void FUN_1056de594(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056de604; end: 1056de6bf; -[SCSpotlightSnapDownloadingServicesEntryPoint _spotlightSnapDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056de604(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126bd350;
  _objc_alloc(PTR_PTR_1126bd350);
  lVar2 = param_1 + _DAT_112727dc4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112727dc8;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0468c0(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056de6c0; end: 1056de713; -[SCSpotlightSnapDownloadingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056de6c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112727dc0,0);
  _objc_destroyWeak(param_1 + _DAT_112727dc4);
  _objc_destroyWeak(param_1 + _DAT_112727dc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727dcc);
  return;
}



/* Entry: 1056de714; end: 1056de79f; -[SCPostponedApplicationDidBecomeActiveAuthenticatedEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056de714(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112727dd0;
  func_0x00010c12d560();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  puStack_38 = PTR_PTR_1126e9b88;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056de7a0; end: 1056de7e7; -[SCPostponedApplicationDidBecomeActiveAuthenticatedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056de7a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727dd8);
  _objc_destroyWeak(param_1 + _DAT_112727dd4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112727dd0,0);
  return;
}



/* Entry: 1056de7e8; end: 1056de8e7; -[SCPostponedApplicationDidBecomeActiveHandler postponedApplicationDidBecomeActive] */

void FUN_1056de7e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  
  puVar1 = PTR_PTR_1126aec70;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf777e0();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 8);
  }
  else {
    bVar3 = 0;
  }
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aec70;
  func_0x00010c22ba80(PTR_PTR_1126aec70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18d520();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aec70;
  func_0x00010c22ba80(PTR_PTR_1126aec70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18d820();
  _objc_release(puVar1);
  if ((bVar3 & 1) != 0) {
    puVar1 = PTR_PTR_1126aec70;
    func_0x00010c22ba80(PTR_PTR_1126aec70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd02c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1056de8e8; end: 1056de933; -[SCPostponedApplicationDidBecomeActiveUnauthenticatedEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056de8e8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bd358;
  _objc_alloc();
  func_0x00010c01f220();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112727de0);
  *(undefined **)(param_1 + _DAT_112727de0) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be66710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeNotification_112577360);
  return;
}



/* Entry: 1056de934; end: 1056de993; -[SCPostponedApplicationDidBecomeActiveUnauthenticatedEntryPoint _observeNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056de934(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056de994; end: 1056dea1f; -[SCPostponedApplicationDidBecomeActiveUnauthenticatedEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056de994(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112727de0;
  func_0x00010c12d560();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  puStack_38 = PTR_PTR_1126e9b98;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


