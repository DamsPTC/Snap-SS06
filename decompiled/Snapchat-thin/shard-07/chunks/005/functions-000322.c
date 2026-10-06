/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055dc964; end: 1055dc96f;  */

bool FUN_1055dc964(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 1055dc970; end: 1055dc9ff;  */

undefined * FUN_1055dc970(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bceb0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110deedd8,
                        &UNK_10ddb3e28,&UNK_10ddb3e44,3,FUN_1055dca00,0,&UNK_10ddb3e50);
    do {
      if (puRam00000001136bceb0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bceb0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bceb0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bceb0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bceb0;
}



/* Entry: 1055dca00; end: 1055dca0b;  */

bool FUN_1055dca00(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1055dca0c; end: 1055dca87;  */

undefined * FUN_1055dca0c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bceb8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110deedf8,
                        &UNK_10ddb3e5c,&UNK_10ddb3eb4,5,FUN_1055dca88,0);
    do {
      if (puRam00000001136bceb8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bceb8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bceb8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bceb8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bceb8;
}



/* Entry: 1055dca88; end: 1055dca93;  */

bool FUN_1055dca88(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1055dca94; end: 1055dcb0f;  */

undefined * FUN_1055dca94(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcec0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110deee18,
                        &UNK_10ddb3ec8,&UNK_10ddb3f38,7,FUN_1055dcb10,0);
    do {
      if (puRam00000001136bcec0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcec0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcec0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcec0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcec0;
}



/* Entry: 1055dcb10; end: 1055dcb1b;  */

bool FUN_1055dcb10(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 1055dcb1c; end: 1055dcb97; +[SCLensPerformHttpCallRequest descriptor] */

undefined * FUN_1055dcb1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcec8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d930,
                        &PTR____CFConstantStringClassReference_110deee38,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_s_URL_1130e9428,6,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bcec8 = puVar1;
  }
  return puRam00000001136bcec8;
}



/* Entry: 1055dcb98; end: 1055dcbff; +[SCLensPerformHttpCallResponse descriptor] */

void FUN_1055dcb98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bced0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d980,
                        &PTR____CFConstantStringClassReference_110deee58,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_s_code_1130e8f68,3,0x18,0x1c);
    puRam00000001136bced0 = puVar1;
  }
  return;
}



/* Entry: 1055dcc00; end: 1055dcc67; +[SCLensGetOAuth2InfoRequest descriptor] */

void FUN_1055dcc00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bced8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4d9d0,
                        &PTR____CFConstantStringClassReference_110deee78,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_s_apiSpecId_1130e8dc8,1,0x10,0x1c);
    puRam00000001136bced8 = puVar1;
  }
  return;
}



/* Entry: 1055dcc68; end: 1055dcce3; +[SCLensGetOAuth2InfoResponse descriptor] */

undefined * FUN_1055dcc68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcee0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4da20,
                        &PTR____CFConstantStringClassReference_110deee98,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_DAT_1130e90e8,4,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bcee0 = puVar1;
  }
  return puRam00000001136bcee0;
}



/* Entry: 1055dcce4; end: 1055dcd4b; +[SCLensTokenExchangeError descriptor] */

void FUN_1055dcce4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcee8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4da70,
                        &PTR____CFConstantStringClassReference_110deeeb8,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_s_error_1130e8e28,2,0x10,0x1c);
    puRam00000001136bcee8 = puVar1;
  }
  return;
}



/* Entry: 1055dcd4c; end: 1055dcdb3; +[SCLensTokenDetails descriptor] */

void FUN_1055dcd4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcef0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4dac0,
                        &PTR____CFConstantStringClassReference_110deeed8,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_s_accessToken_1130e92e8,5,0x30,0x1c);
    puRam00000001136bcef0 = puVar1;
  }
  return;
}



/* Entry: 1055dcdb4; end: 1055dce1b; +[SCLensPerformTokenExchangeRequest descriptor] */

void FUN_1055dcdb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcef8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4db10,
                        &PTR____CFConstantStringClassReference_110deeef8,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_s_apiSpecId_1130e8fc8,3,0x20,0x1c);
    puRam00000001136bcef8 = puVar1;
  }
  return;
}



/* Entry: 1055dce1c; end: 1055dcea7; +[SCLensPerformTokenExchangeResponse descriptor] */

undefined * FUN_1055dce1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4db60,
                        &PTR____CFConstantStringClassReference_110deef18,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_DAT_1130e8e68,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136bcf00 = puVar1;
  }
  return puRam00000001136bcf00;
}



/* Entry: 1055dcea8; end: 1055dcf0f; +[SCLensRefreshTokenRequest descriptor] */

void FUN_1055dcea8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4dbb0,
                        &PTR____CFConstantStringClassReference_110deef38,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_s_apiSpecId_1130e8ea8,2,0x18,0x1c);
    puRam00000001136bcf08 = puVar1;
  }
  return;
}



/* Entry: 1055dcf10; end: 1055dcf9b; +[SCLensRefreshTokenResponse descriptor] */

undefined * FUN_1055dcf10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4dc00,
                        &PTR____CFConstantStringClassReference_110deef58,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_DAT_1130e8ee8,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136bcf10 = puVar1;
  }
  return puRam00000001136bcf10;
}



/* Entry: 1055dcf9c; end: 1055dd003; +[SCLensPerformApiCallRequest descriptor] */

void FUN_1055dcf9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4dc50,
                        &PTR____CFConstantStringClassReference_110deef78,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_DAT_1130e94e8,8,0x38,0x1c);
    puRam00000001136bcf18 = puVar1;
  }
  return;
}



/* Entry: 1055dd004; end: 1055dd08f; +[SCLensPerformApiStreamRequest descriptor] */

undefined * FUN_1055dd004(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4dca0,
                        &PTR____CFConstantStringClassReference_110deef98,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_DAT_1130e9028,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136bcf20 = puVar1;
  }
  return puRam00000001136bcf20;
}



/* Entry: 1055dd090; end: 1055dd0f7; +[SCLensStreamingConnectionRequest descriptor] */

void FUN_1055dd090(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4dcf0,
                        &PTR____CFConstantStringClassReference_110deefb8,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_DAT_1130e9168,4,0x28,0x1c);
    puRam00000001136bcf28 = puVar1;
  }
  return;
}



/* Entry: 1055dd0f8; end: 1055dd15f; +[SCLensStreamingPayloadRequest descriptor] */

void FUN_1055dd0f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4dd40,
                        &PTR____CFConstantStringClassReference_110deefd8,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_DAT_1130e8de8,1,0x10,0x1c);
    puRam00000001136bcf30 = puVar1;
  }
  return;
}



/* Entry: 1055dd160; end: 1055dd1c7; +[SCLensStreamingCloseConnectionRequest descriptor] */

void FUN_1055dd160(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4dd90,
                        &PTR____CFConstantStringClassReference_110deeff8,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_s_code_1130e8f28,2,0x10,0x1c);
    puRam00000001136bcf38 = puVar1;
  }
  return;
}



/* Entry: 1055dd1c8; end: 1055dd253; +[SCLensPerformApiStreamResponse descriptor] */

undefined * FUN_1055dd1c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4dde0,
                        &PTR____CFConstantStringClassReference_110def018,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_DAT_1130e91e8,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136bcf40 = puVar1;
  }
  return puRam00000001136bcf40;
}



/* Entry: 1055dd254; end: 1055dd2bb; +[SCLensStreamingClosureResponse descriptor] */

void FUN_1055dd254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4de30,
                        &PTR____CFConstantStringClassReference_110def038,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_s_code_1130e9088,3,0x10,0x1c);
    puRam00000001136bcf48 = puVar1;
  }
  return;
}



/* Entry: 1055dd2bc; end: 1055dd323; +[SCLensStreamingErrorResponse descriptor] */

void FUN_1055dd2bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4de80,
                        &PTR____CFConstantStringClassReference_110def058,
                        &PTR_s_snapchat_lenses_1130e8db0,0,0,4,0x1c);
    puRam00000001136bcf50 = puVar1;
  }
  return;
}



/* Entry: 1055dd324; end: 1055dd38b; +[SCLensStreamingMessageResponse descriptor] */

void FUN_1055dd324(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4ded0,
                        &PTR____CFConstantStringClassReference_110def078,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_s_data_p_1130e8e08,1,0x10,0x1c);
    puRam00000001136bcf58 = puVar1;
  }
  return;
}



/* Entry: 1055dd38c; end: 1055dd3f3; +[SCLensStreamingOpenResponse descriptor] */

void FUN_1055dd38c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4df20,
                        &PTR____CFConstantStringClassReference_110def098,
                        &PTR_s_snapchat_lenses_1130e8db0,0,0,4,0x1c);
    puRam00000001136bcf60 = puVar1;
  }
  return;
}



/* Entry: 1055dd3f4; end: 1055dd45b; +[SCLensPerformApiCallResponse descriptor] */

void FUN_1055dd3f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4df70,
                        &PTR____CFConstantStringClassReference_110def0b8,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_DAT_1130e9388,5,0x20,0x1c);
    puRam00000001136bcf68 = puVar1;
  }
  return;
}



/* Entry: 1055dd45c; end: 1055dd4d7; +[SCLensLinkedResource descriptor] */

undefined * FUN_1055dd45c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4dfc0,
                        &PTR____CFConstantStringClassReference_110dee918,
                        &PTR_s_snapchat_lenses_1130e8db0,&PTR_s_URL_1130e9268,4,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bcf70 = puVar1;
  }
  return puRam00000001136bcf70;
}



/* Entry: 1055dd4d8; end: 1055dd667; -[SCLensRemoteApiLoggingServiceProvider provide] */

void FUN_1055dd4d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1055dd668;
  puStack_68 = &UNK_11089d628;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_88,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(puVar1);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bbe38;
  _objc_alloc(PTR_PTR_1126bbe38);
  func_0x00010c025660();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055dd668; end: 1055dd6a7;  */

void FUN_1055dd668(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be8b080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055dd6a8; end: 1055dd7e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055dd6a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126bbe30;
    _objc_alloc(PTR_PTR_1126bbe30);
    lVar2 = lVar1 + _DAT_112726728;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_11272672c;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1 + _DAT_112726730;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c091140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff8be0(puVar9,param_2,lVar3,lVar6,lVar8,*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1055dd7e4; end: 1055dd82f; -[SCLensRemoteApiLoggingServiceProvider _remoteApiGrapheneReporter] */

void FUN_1055dd7e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bbe40;
  _objc_alloc_init(PTR_PTR_1126bbe40);
  puVar2 = PTR_PTR_1126bbe48;
  _objc_alloc(PTR_PTR_1126bbe48);
  func_0x00010c03dee0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055dd830; end: 1055dd873; -[SCLensRemoteApiLoggingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055dd830(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726730);
  _objc_destroyWeak(param_1 + _DAT_11272672c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726728);
  return;
}



/* Entry: 1055dd874; end: 1055dd8e7; -[SCLensRemoteApiGrapheneMetricReporter initWithRemoteApiGraphene:] */

undefined1 * FUN_1055dd874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e93f8;
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



/* Entry: 1055dd8e8; end: 1055dd983; -[SCLensRemoteApiGrapheneMetricReporter reportResponseSucceededWithEndpointId:lensId:specId:latencyInMs:] */

void FUN_1055dd8e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_1055de6a0(uVar1,param_3,param_4,param_5,1);
  FUN_1055de960(*(undefined8 *)(param_1 + 8),param_3,param_4,param_5,param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055dd984; end: 1055dda1f; -[SCLensRemoteApiGrapheneMetricReporter reportResponseFailedWithEndpointId:lensId:specId:latencyInMs:] */

void FUN_1055dd984(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_1055dec20(uVar1,param_3,param_4,param_5,1);
  FUN_1055deee0(*(undefined8 *)(param_1 + 8),param_3,param_4,param_5,param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055dda20; end: 1055dda37; -[SCLensRemoteApiGrapheneMetricReporter reportRequestSentWithEndpointId:lensId:specId:] */

/* WARNING: Removing unreachable block (ram,0x0001055df428) */
/* WARNING: Removing unreachable block (ram,0x0001055df6e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055dda20(long param_1,undefined8 param_2,char *param_3,char *param_4,char *param_5)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 *puVar14;
  long *plVar15;
  char *unaff_x24;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 *puStack_520;
  undefined8 auStack_518 [2];
  char cStack_501;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  char *pcStack_4e0;
  char *pcStack_4d8;
  undefined8 *puStack_4d0;
  char *pcStack_4c8;
  char *pcStack_4c0;
  char *pcStack_4b8;
  undefined8 ****ppppuStack_4b0;
  code *pcStack_4a8;
  char acStack_498 [24];
  char *pcStack_480;
  undefined8 auStack_478 [2];
  char cStack_461;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  char *pcStack_440;
  char *pcStack_438;
  undefined8 *puStack_430;
  char *pcStack_428;
  char *pcStack_420;
  char *pcStack_418;
  undefined8 ****ppppuStack_410;
  code *pcStack_408;
  char acStack_3f8 [24];
  char *pcStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined8 *puStack_390;
  char *pcStack_388;
  char *pcStack_380;
  char *pcStack_378;
  undefined8 ****ppppuStack_370;
  code *pcStack_368;
  char acStack_358 [24];
  char *pcStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  undefined8 *puStack_2f0;
  char *pcStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined1 ****ppppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2b8 [24];
  char *pcStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  char *pcStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  char acStack_218 [24];
  char *pcStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  char acStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lVar1 = *(long *)(param_1 + 8);
  pcVar12 = (char *)0x1;
  pcVar3 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar13 = param_4;
  pcVar10 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (lVar1 != 0) {
    plVar15 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(acStack_a0,pcVar2);
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
    func_0x00010002b838(auStack_88,pcVar2);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar2 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,pcVar2);
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
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar2 = "";
    pcVar10 = (char *)0x1;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar1 = 0;
    pcVar13 = pcVar3;
    do {
      if ((&cStack_59)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar1 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_a0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  pcVar6 = acStack_180;
  pcStack_c8 = FUN_1055df460;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar2;
  pcVar5 = pcVar13;
  pcVar9 = pcVar10;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar13);
  _objc_retain(pcVar10);
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(acStack_160,pcVar3);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar3 = pcVar13;
      func_0x00010bdc3520(pcVar13);
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_148,pcVar3);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar3 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_130,pcVar3);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,acStack_160,&lStack_118,3);
    pcVar7 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d818,acStack_180,pcVar12);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar1 = 0;
    pcVar5 = pcVar6;
    pcVar9 = pcVar12;
    do {
      if ((&cStack_119)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar1 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar13);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  pcVar12 = acStack_160;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar12);
  _objc_release(pcVar10);
  _objc_release(pcVar13);
  _objc_release(pcVar2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_188 = FUN_1055df720;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar7;
  pcVar8 = pcVar5;
  pcVar11 = pcVar9;
  pcStack_1c0 = unaff_x24;
  pcStack_1b8 = pcVar12;
  pcStack_1b0 = pcVar3;
  pcStack_1a8 = pcVar10;
  pcStack_1a0 = pcVar13;
  pcStack_198 = pcVar2;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar5);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar15 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x24 = (char *)auStack_1f8;
    func_0x00010002b838(auStack_1f8,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_1e0,pcVar2);
    acStack_218[0] = '\0';
    acStack_218[1] = '\0';
    acStack_218[2] = '\0';
    acStack_218[3] = '\0';
    acStack_218[4] = '\0';
    acStack_218[5] = '\0';
    acStack_218[6] = '\0';
    acStack_218[7] = '\0';
    acStack_218[8] = '\0';
    acStack_218[9] = '\0';
    acStack_218[10] = '\0';
    acStack_218[0xb] = '\0';
    acStack_218[0xc] = '\0';
    acStack_218[0xd] = '\0';
    acStack_218[0xe] = '\0';
    acStack_218[0xf] = '\0';
    acStack_218[0x10] = '\0';
    acStack_218[0x11] = '\0';
    acStack_218[0x12] = '\0';
    acStack_218[0x13] = '\0';
    acStack_218[0x14] = '\0';
    acStack_218[0x15] = '\0';
    acStack_218[0x16] = '\0';
    acStack_218[0x17] = '\0';
    func_0x00010007e1e8(acStack_218,auStack_1f8,&lStack_1c8,2);
    pcVar6 = "";
    pcVar12 = acStack_218;
    pcVar8 = acStack_218;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d868,pcVar8,pcVar9);
    pcStack_200 = pcVar12;
    func_0x00010007e5dc(&pcStack_200);
    lVar1 = 0;
    puVar14 = auStack_1f8;
    pcVar11 = pcVar9;
    do {
      if ((&cStack_1c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar7);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_228 = FUN_1055df950;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar13 = pcVar6;
  pcVar10 = pcVar8;
  pcVar9 = pcVar11;
  pcStack_260 = unaff_x24;
  pcStack_258 = pcVar12;
  puStack_250 = puVar14;
  pcStack_248 = pcVar2;
  pcStack_240 = pcVar5;
  pcStack_238 = pcVar7;
  pppuStack_230 = &ppuStack_190;
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  puVar14 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x24 = (char *)auStack_298;
    func_0x00010002b838(auStack_298,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_280,pcVar2);
    acStack_2b8[0] = '\0';
    acStack_2b8[1] = '\0';
    acStack_2b8[2] = '\0';
    acStack_2b8[3] = '\0';
    acStack_2b8[4] = '\0';
    acStack_2b8[5] = '\0';
    acStack_2b8[6] = '\0';
    acStack_2b8[7] = '\0';
    acStack_2b8[8] = '\0';
    acStack_2b8[9] = '\0';
    acStack_2b8[10] = '\0';
    acStack_2b8[0xb] = '\0';
    acStack_2b8[0xc] = '\0';
    acStack_2b8[0xd] = '\0';
    acStack_2b8[0xe] = '\0';
    acStack_2b8[0xf] = '\0';
    acStack_2b8[0x10] = '\0';
    acStack_2b8[0x11] = '\0';
    acStack_2b8[0x12] = '\0';
    acStack_2b8[0x13] = '\0';
    acStack_2b8[0x14] = '\0';
    acStack_2b8[0x15] = '\0';
    acStack_2b8[0x16] = '\0';
    acStack_2b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2b8,auStack_298,&lStack_268,2);
    pcVar13 = "";
    pcVar12 = acStack_2b8;
    pcVar10 = acStack_2b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d8b8,pcVar10,pcVar11);
    pcStack_2a0 = pcVar12;
    func_0x00010007e5dc(&pcStack_2a0);
    lVar1 = 0;
    puVar14 = auStack_298;
    pcVar9 = pcVar11;
    do {
      if ((&cStack_269)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
    ___stack_chk_fail();
    _objc_release(pcVar8);
    if (cStack_281 < '\0') {
      __ZdlPv(auStack_298[0]);
    }
    _objc_release(pcVar8);
    _objc_release(pcVar6);
    pcVar5 = pcVar2;
    __Unwind_Resume();
    pcStack_2c8 = FUN_1055dfb80;
    lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar13;
    pcVar7 = pcVar10;
    pcVar4 = pcVar9;
    pcStack_300 = unaff_x24;
    pcStack_2f8 = pcVar12;
    puStack_2f0 = puVar14;
    pcStack_2e8 = pcVar2;
    pcStack_2e0 = pcVar8;
    pcStack_2d8 = pcVar6;
    ppppuStack_2d0 = &pppuStack_230;
    _objc_retain(pcVar13);
    _objc_retain(pcVar10);
    puVar14 = (undefined8 *)0x0;
    if (pcVar5 != (char *)0x0) {
      plVar15 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar13);
      if (pcVar13 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar13;
        _objc_retainAutorelease(pcVar13);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar13);
      unaff_x24 = (char *)auStack_338;
      func_0x00010002b838(auStack_338,pcVar2);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar2 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_320,pcVar2);
      acStack_358[0] = '\0';
      acStack_358[1] = '\0';
      acStack_358[2] = '\0';
      acStack_358[3] = '\0';
      acStack_358[4] = '\0';
      acStack_358[5] = '\0';
      acStack_358[6] = '\0';
      acStack_358[7] = '\0';
      acStack_358[8] = '\0';
      acStack_358[9] = '\0';
      acStack_358[10] = '\0';
      acStack_358[0xb] = '\0';
      acStack_358[0xc] = '\0';
      acStack_358[0xd] = '\0';
      acStack_358[0xe] = '\0';
      acStack_358[0xf] = '\0';
      acStack_358[0x10] = '\0';
      acStack_358[0x11] = '\0';
      acStack_358[0x12] = '\0';
      acStack_358[0x13] = '\0';
      acStack_358[0x14] = '\0';
      acStack_358[0x15] = '\0';
      acStack_358[0x16] = '\0';
      acStack_358[0x17] = '\0';
      func_0x00010007e1e8(acStack_358,auStack_338,&lStack_308,2);
      pcVar3 = "";
      pcVar12 = acStack_358;
      pcVar7 = acStack_358;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d908,pcVar7,pcVar9);
      pcStack_340 = pcVar12;
      func_0x00010007e5dc(&pcStack_340);
      lVar1 = 0;
      puVar14 = auStack_338;
      pcVar4 = pcVar9;
      do {
        if ((&cStack_309)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    _objc_release(pcVar10);
    pcVar2 = pcVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar10);
    if (cStack_321 < '\0') {
      __ZdlPv(auStack_338[0]);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar13);
    pcVar6 = pcVar2;
    __Unwind_Resume();
    pcStack_368 = FUN_1055dfdb0;
    lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = pcVar3;
    pcVar9 = pcVar7;
    pcVar8 = pcVar4;
    pcStack_3a0 = unaff_x24;
    pcStack_398 = pcVar12;
    puStack_390 = puVar14;
    pcStack_388 = pcVar2;
    pcStack_380 = pcVar10;
    pcStack_378 = pcVar13;
    ppppuStack_370 = &ppppuStack_2d0;
    _objc_retain(pcVar3);
    _objc_retain(pcVar7);
    puVar14 = (undefined8 *)0x0;
    if (pcVar6 != (char *)0x0) {
      plVar15 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      unaff_x24 = (char *)auStack_3d8;
      func_0x00010002b838(auStack_3d8,pcVar2);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar2 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_3c0,pcVar2);
      acStack_3f8[0] = '\0';
      acStack_3f8[1] = '\0';
      acStack_3f8[2] = '\0';
      acStack_3f8[3] = '\0';
      acStack_3f8[4] = '\0';
      acStack_3f8[5] = '\0';
      acStack_3f8[6] = '\0';
      acStack_3f8[7] = '\0';
      acStack_3f8[8] = '\0';
      acStack_3f8[9] = '\0';
      acStack_3f8[10] = '\0';
      acStack_3f8[0xb] = '\0';
      acStack_3f8[0xc] = '\0';
      acStack_3f8[0xd] = '\0';
      acStack_3f8[0xe] = '\0';
      acStack_3f8[0xf] = '\0';
      acStack_3f8[0x10] = '\0';
      acStack_3f8[0x11] = '\0';
      acStack_3f8[0x12] = '\0';
      acStack_3f8[0x13] = '\0';
      acStack_3f8[0x14] = '\0';
      acStack_3f8[0x15] = '\0';
      acStack_3f8[0x16] = '\0';
      acStack_3f8[0x17] = '\0';
      func_0x00010007e1e8(acStack_3f8,auStack_3d8,&lStack_3a8,2);
      pcVar5 = "";
      pcVar12 = acStack_3f8;
      pcVar9 = acStack_3f8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d958,pcVar9,pcVar4);
      pcStack_3e0 = pcVar12;
      func_0x00010007e5dc(&pcStack_3e0);
      lVar1 = 0;
      puVar14 = auStack_3d8;
      pcVar8 = pcVar4;
      do {
        if ((&cStack_3a9)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    _objc_release(pcVar7);
    pcVar2 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
      ___stack_chk_fail();
      _objc_release(pcVar7);
      if (cStack_3c1 < '\0') {
        __ZdlPv(auStack_3d8[0]);
      }
      _objc_release(pcVar7);
      _objc_release(pcVar3);
      pcVar6 = pcVar2;
      __Unwind_Resume();
      pcStack_408 = FUN_1055dffe0;
      lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar13 = pcVar5;
      pcVar10 = pcVar9;
      pcVar4 = pcVar8;
      pcStack_440 = unaff_x24;
      pcStack_438 = pcVar12;
      puStack_430 = puVar14;
      pcStack_428 = pcVar2;
      pcStack_420 = pcVar7;
      pcStack_418 = pcVar3;
      ppppuStack_410 = &ppppuStack_370;
      _objc_retain(pcVar5);
      _objc_retain(pcVar9);
      puVar14 = (undefined8 *)0x0;
      if (pcVar6 != (char *)0x0) {
        plVar15 = *(long **)(pcVar6 + 8);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = pcVar5;
          _objc_retainAutorelease(pcVar5);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar5);
        unaff_x24 = (char *)auStack_478;
        func_0x00010002b838(auStack_478,pcVar2);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(pcVar9);
          pcVar2 = pcVar9;
          func_0x00010bdc3520(pcVar9);
        }
        _objc_release(pcVar9);
        func_0x00010002b838(auStack_460,pcVar2);
        acStack_498[0] = '\0';
        acStack_498[1] = '\0';
        acStack_498[2] = '\0';
        acStack_498[3] = '\0';
        acStack_498[4] = '\0';
        acStack_498[5] = '\0';
        acStack_498[6] = '\0';
        acStack_498[7] = '\0';
        acStack_498[8] = '\0';
        acStack_498[9] = '\0';
        acStack_498[10] = '\0';
        acStack_498[0xb] = '\0';
        acStack_498[0xc] = '\0';
        acStack_498[0xd] = '\0';
        acStack_498[0xe] = '\0';
        acStack_498[0xf] = '\0';
        acStack_498[0x10] = '\0';
        acStack_498[0x11] = '\0';
        acStack_498[0x12] = '\0';
        acStack_498[0x13] = '\0';
        acStack_498[0x14] = '\0';
        acStack_498[0x15] = '\0';
        acStack_498[0x16] = '\0';
        acStack_498[0x17] = '\0';
        func_0x00010007e1e8(acStack_498,auStack_478,&lStack_448,2);
        pcVar13 = "";
        pcVar12 = acStack_498;
        pcVar10 = acStack_498;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d9a8,pcVar10,pcVar8);
        pcStack_480 = pcVar12;
        func_0x00010007e5dc(&pcStack_480);
        lVar1 = 0;
        puVar14 = auStack_478;
        pcVar4 = pcVar8;
        do {
          if ((&cStack_449)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_460 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != -0x30);
      }
      _objc_release(pcVar9);
      pcVar2 = pcVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar9);
      if (cStack_461 < '\0') {
        __ZdlPv(auStack_478[0]);
      }
      _objc_release(pcVar9);
      _objc_release(pcVar5);
      pcVar3 = pcVar2;
      __Unwind_Resume();
      pcStack_4a8 = FUN_1055e0210;
      lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcStack_4e0 = unaff_x24;
      pcStack_4d8 = pcVar12;
      puStack_4d0 = puVar14;
      pcStack_4c8 = pcVar2;
      pcStack_4c0 = pcVar9;
      pcStack_4b8 = pcVar5;
      ppppuStack_4b0 = &ppppuStack_410;
      _objc_retain(pcVar13);
      _objc_retain(pcVar10);
      if (pcVar3 != (char *)0x0) {
        plVar15 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar13);
        if (pcVar13 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = pcVar13;
          _objc_retainAutorelease(pcVar13);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar13);
        func_0x00010002b838(auStack_518,pcVar2);
        _objc_retain(pcVar10);
        if (pcVar10 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(pcVar10);
          pcVar2 = pcVar10;
          func_0x00010bdc3520(pcVar10);
        }
        _objc_release(pcVar10);
        func_0x00010002b838(auStack_500,pcVar2);
        uStack_538 = 0;
        uStack_530 = 0;
        uStack_528 = 0;
        func_0x00010007e1e8(&uStack_538,auStack_518,&lStack_4e8,2);
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d9f8,&uStack_538,pcVar4);
        puStack_520 = &uStack_538;
        func_0x00010007e5dc(&puStack_520);
        lVar1 = 0;
        do {
          if ((&cStack_4e9)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_500 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != -0x30);
      }
      _objc_release(pcVar10);
      pcVar2 = pcVar13;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4e8) {
        ___stack_chk_fail();
        _objc_release(pcVar10);
        if (cStack_501 < '\0') {
          __ZdlPv(auStack_518[0]);
        }
        _objc_release(pcVar10);
        _objc_release(pcVar13);
        __Unwind_Resume();
        pcVar2 = pcVar2 + 0x20;
        _objc_loadWeakRetained();
        if (pcVar2 == (char *)0x0) {
          pcVar13 = (char *)0x0;
        }
        else {
          pcVar10 = pcVar2 + _DAT_112726750;
          _objc_loadWeakRetained(pcVar10);
          pcVar3 = pcVar10;
          func_0x00010c27e640();
          _objc_retainAutoreleasedReturnValue();
          pcVar12 = pcVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          pcVar13 = pcVar12;
          func_0x00010bf59bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(pcVar12);
          _objc_release(pcVar3);
          _objc_release(pcVar10);
        }
        _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar13);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1055dda38; end: 1055dda4f; -[SCLensRemoteApiGrapheneMetricReporter reportLocalOnlySpecDroppedWithEndpointId:lensId:specId:] */

/* WARNING: Removing unreachable block (ram,0x0001055df6e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055dda38(long param_1,undefined8 param_2,char *param_3,char *param_4,char *param_5)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long *plVar14;
  char *unaff_x24;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  char *pcStack_420;
  char *pcStack_418;
  undefined8 *puStack_410;
  char *pcStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  undefined8 ****ppppuStack_3f0;
  code *pcStack_3e8;
  char acStack_3d8 [24];
  char *pcStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  char *pcStack_380;
  char *pcStack_378;
  undefined8 *puStack_370;
  char *pcStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ****ppppuStack_350;
  code *pcStack_348;
  char acStack_338 [24];
  char *pcStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  char acStack_298 [24];
  char *pcStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 *puStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_1f8 [24];
  char *pcStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined8 *puStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lVar1 = *(long *)(param_1 + 8);
  pcVar3 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar12 = param_4;
  pcVar10 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (lVar1 != 0) {
    plVar14 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(acStack_a0,pcVar2);
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
    func_0x00010002b838(auStack_88,pcVar2);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,pcVar2);
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
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar2 = "";
    pcVar10 = (char *)0x1;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11089d818,acStack_c0,1);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar1 = 0;
    pcVar12 = pcVar3;
    do {
      if ((&cStack_59)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar1 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  pcVar7 = acStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_c8 = FUN_1055df720;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar2;
  pcVar9 = pcVar12;
  pcVar6 = pcVar10;
  pcStack_100 = unaff_x24;
  pcStack_f8 = pcVar7;
  pcStack_f0 = pcVar3;
  pcStack_e8 = param_5;
  pcStack_e0 = param_4;
  pcStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar12);
  puVar13 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar14 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = (char *)auStack_138;
    func_0x00010002b838(auStack_138,pcVar3);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar3 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_120,pcVar3);
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
    pcVar8 = "";
    pcVar7 = acStack_158;
    pcVar9 = acStack_158;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11089d868,pcVar9,pcVar10);
    pcStack_140 = pcVar7;
    func_0x00010007e5dc(&pcStack_140);
    lVar1 = 0;
    puVar13 = auStack_138;
    pcVar6 = pcVar10;
    do {
      if ((&cStack_109)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar12);
  pcVar10 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar2);
  pcVar5 = pcVar10;
  __Unwind_Resume();
  pcStack_168 = FUN_1055df950;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar8;
  pcVar4 = pcVar9;
  pcVar11 = pcVar6;
  pcStack_1a0 = unaff_x24;
  pcStack_198 = pcVar7;
  puStack_190 = puVar13;
  pcStack_188 = pcVar10;
  pcStack_180 = pcVar12;
  pcStack_178 = pcVar2;
  ppuStack_170 = &puStack_d0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar9);
  puVar13 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar14 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    unaff_x24 = (char *)auStack_1d8;
    func_0x00010002b838(auStack_1d8,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_1c0,pcVar2);
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
    pcVar3 = "";
    pcVar7 = acStack_1f8;
    pcVar4 = acStack_1f8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11089d8b8,pcVar4,pcVar6);
    pcStack_1e0 = pcVar7;
    func_0x00010007e5dc(&pcStack_1e0);
    lVar1 = 0;
    puVar13 = auStack_1d8;
    pcVar11 = pcVar6;
    do {
      if ((&cStack_1a9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar2 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar8);
  pcVar6 = pcVar2;
  __Unwind_Resume();
  pcStack_208 = FUN_1055dfb80;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar12 = pcVar3;
  pcVar10 = pcVar4;
  pcVar5 = pcVar11;
  pcStack_240 = unaff_x24;
  pcStack_238 = pcVar7;
  puStack_230 = puVar13;
  pcStack_228 = pcVar2;
  pcStack_220 = pcVar9;
  pcStack_218 = pcVar8;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(pcVar3);
  _objc_retain(pcVar4);
  puVar13 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar14 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    unaff_x24 = (char *)auStack_278;
    func_0x00010002b838(auStack_278,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_260,pcVar2);
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
    pcVar12 = "";
    pcVar7 = acStack_298;
    pcVar10 = acStack_298;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11089d908,pcVar10,pcVar11);
    pcStack_280 = pcVar7;
    func_0x00010007e5dc(&pcStack_280);
    lVar1 = 0;
    puVar13 = auStack_278;
    pcVar5 = pcVar11;
    do {
      if ((&cStack_249)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar2 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar3);
  pcVar6 = pcVar2;
  __Unwind_Resume();
  pcStack_2a8 = FUN_1055dfdb0;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar12;
  pcVar9 = pcVar10;
  pcVar11 = pcVar5;
  pcStack_2e0 = unaff_x24;
  pcStack_2d8 = pcVar7;
  puStack_2d0 = puVar13;
  pcStack_2c8 = pcVar2;
  pcStack_2c0 = pcVar4;
  pcStack_2b8 = pcVar3;
  ppppuStack_2b0 = &pppuStack_210;
  _objc_retain(pcVar12);
  _objc_retain(pcVar10);
  puVar13 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar14 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar12;
      _objc_retainAutorelease(pcVar12);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    unaff_x24 = (char *)auStack_318;
    func_0x00010002b838(auStack_318,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_300,pcVar2);
    acStack_338[0] = '\0';
    acStack_338[1] = '\0';
    acStack_338[2] = '\0';
    acStack_338[3] = '\0';
    acStack_338[4] = '\0';
    acStack_338[5] = '\0';
    acStack_338[6] = '\0';
    acStack_338[7] = '\0';
    acStack_338[8] = '\0';
    acStack_338[9] = '\0';
    acStack_338[10] = '\0';
    acStack_338[0xb] = '\0';
    acStack_338[0xc] = '\0';
    acStack_338[0xd] = '\0';
    acStack_338[0xe] = '\0';
    acStack_338[0xf] = '\0';
    acStack_338[0x10] = '\0';
    acStack_338[0x11] = '\0';
    acStack_338[0x12] = '\0';
    acStack_338[0x13] = '\0';
    acStack_338[0x14] = '\0';
    acStack_338[0x15] = '\0';
    acStack_338[0x16] = '\0';
    acStack_338[0x17] = '\0';
    func_0x00010007e1e8(acStack_338,auStack_318,&lStack_2e8,2);
    pcVar8 = "";
    pcVar7 = acStack_338;
    pcVar9 = acStack_338;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11089d958,pcVar9,pcVar5);
    pcStack_320 = pcVar7;
    func_0x00010007e5dc(&pcStack_320);
    lVar1 = 0;
    puVar13 = auStack_318;
    pcVar11 = pcVar5;
    do {
      if ((&cStack_2e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar2 = pcVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_301 < '\0') {
    __ZdlPv(auStack_318[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar12);
  pcVar6 = pcVar2;
  __Unwind_Resume();
  pcStack_348 = FUN_1055dffe0;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar8;
  pcVar4 = pcVar9;
  pcVar5 = pcVar11;
  pcStack_380 = unaff_x24;
  pcStack_378 = pcVar7;
  puStack_370 = puVar13;
  pcStack_368 = pcVar2;
  pcStack_360 = pcVar10;
  pcStack_358 = pcVar12;
  ppppuStack_350 = &ppppuStack_2b0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar9);
  puVar13 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar14 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    unaff_x24 = (char *)auStack_3b8;
    func_0x00010002b838(auStack_3b8,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_3a0,pcVar2);
    acStack_3d8[0] = '\0';
    acStack_3d8[1] = '\0';
    acStack_3d8[2] = '\0';
    acStack_3d8[3] = '\0';
    acStack_3d8[4] = '\0';
    acStack_3d8[5] = '\0';
    acStack_3d8[6] = '\0';
    acStack_3d8[7] = '\0';
    acStack_3d8[8] = '\0';
    acStack_3d8[9] = '\0';
    acStack_3d8[10] = '\0';
    acStack_3d8[0xb] = '\0';
    acStack_3d8[0xc] = '\0';
    acStack_3d8[0xd] = '\0';
    acStack_3d8[0xe] = '\0';
    acStack_3d8[0xf] = '\0';
    acStack_3d8[0x10] = '\0';
    acStack_3d8[0x11] = '\0';
    acStack_3d8[0x12] = '\0';
    acStack_3d8[0x13] = '\0';
    acStack_3d8[0x14] = '\0';
    acStack_3d8[0x15] = '\0';
    acStack_3d8[0x16] = '\0';
    acStack_3d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_3d8,auStack_3b8,&lStack_388,2);
    pcVar3 = "";
    pcVar7 = acStack_3d8;
    pcVar4 = acStack_3d8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11089d9a8,pcVar4,pcVar11);
    pcStack_3c0 = pcVar7;
    func_0x00010007e5dc(&pcStack_3c0);
    lVar1 = 0;
    puVar13 = auStack_3b8;
    pcVar5 = pcVar11;
    do {
      if ((&cStack_389)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar2 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_3a1 < '\0') {
    __ZdlPv(auStack_3b8[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar8);
  pcVar12 = pcVar2;
  __Unwind_Resume();
  pcStack_3e8 = FUN_1055e0210;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_420 = unaff_x24;
  pcStack_418 = pcVar7;
  puStack_410 = puVar13;
  pcStack_408 = pcVar2;
  pcStack_400 = pcVar9;
  pcStack_3f8 = pcVar8;
  ppppuStack_3f0 = &ppppuStack_350;
  _objc_retain(pcVar3);
  _objc_retain(pcVar4);
  if (pcVar12 != (char *)0x0) {
    plVar14 = *(long **)(pcVar12 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_458,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_440,pcVar2);
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 0;
    func_0x00010007e1e8(&uStack_478,auStack_458,&lStack_428,2);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11089d9f8,&uStack_478,pcVar5);
    puStack_460 = &uStack_478;
    func_0x00010007e5dc(&puStack_460);
    lVar1 = 0;
    do {
      if ((&cStack_429)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar2 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_428) {
    ___stack_chk_fail();
    _objc_release(pcVar4);
    if (cStack_441 < '\0') {
      __ZdlPv(auStack_458[0]);
    }
    _objc_release(pcVar4);
    _objc_release(pcVar3);
    __Unwind_Resume();
    pcVar2 = pcVar2 + 0x20;
    _objc_loadWeakRetained();
    if (pcVar2 == (char *)0x0) {
      pcVar12 = (char *)0x0;
    }
    else {
      pcVar10 = pcVar2 + _DAT_112726750;
      _objc_loadWeakRetained(pcVar10);
      pcVar3 = pcVar10;
      func_0x00010c27e640();
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      pcVar12 = pcVar7;
      func_0x00010bf59bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pcVar7);
      _objc_release(pcVar3);
      _objc_release(pcVar10);
    }
    _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar12);
    return;
  }
  return;
}



/* Entry: 1055dda50; end: 1055dda63; -[SCLensRemoteApiGrapheneMetricReporter reportAuthFailedWithLensId:specId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055dda50(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  long *plVar12;
  undefined8 *puVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  char *pcStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_318 [24];
  char *pcStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  char *pcStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar9 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar11 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar13 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar12 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
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
    pcVar2 = "";
    unaff_x23 = acStack_98;
    pcVar11 = acStack_98;
    uVar9 = 1;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d868,pcVar11,1);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar1 = 0;
    puVar13 = auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_4);
  pcVar3 = param_3;
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
  _objc_release(param_3);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1055df950;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar2;
  pcVar7 = pcVar11;
  uVar10 = uVar9;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar13;
  pcStack_c8 = pcVar3;
  pcStack_c0 = param_4;
  pcStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar11);
  puVar13 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar12 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar3);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar3 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_100,pcVar3);
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
    pcVar6 = "";
    unaff_x23 = acStack_138;
    pcVar7 = acStack_138;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d8b8,pcVar7,uVar9);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar1 = 0;
    puVar13 = auStack_118;
    uVar10 = uVar9;
    do {
      if ((&cStack_e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar11);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar2);
  pcVar5 = pcVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_1055dfb80;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar6;
  pcVar8 = pcVar7;
  uVar9 = uVar10;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar13;
  pcStack_168 = pcVar3;
  pcStack_160 = pcVar11;
  pcStack_158 = pcVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar7);
  puVar13 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar12 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_1a0,pcVar2);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar4 = "";
    unaff_x23 = acStack_1d8;
    pcVar8 = acStack_1d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d908,pcVar8,uVar10);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar1 = 0;
    puVar13 = auStack_1b8;
    uVar9 = uVar10;
    do {
      if ((&cStack_189)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar2 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  pcVar5 = pcVar2;
  __Unwind_Resume();
  pcStack_1e8 = FUN_1055dfdb0;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar4;
  pcVar3 = pcVar8;
  uVar10 = uVar9;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar13;
  pcStack_208 = pcVar2;
  pcStack_200 = pcVar7;
  pcStack_1f8 = pcVar6;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar4);
  _objc_retain(pcVar8);
  puVar13 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar12 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_240,pcVar2);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
    pcVar11 = "";
    unaff_x23 = acStack_278;
    pcVar3 = acStack_278;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d958,pcVar3,uVar9);
    pcStack_260 = unaff_x23;
    func_0x00010007e5dc(&pcStack_260);
    lVar1 = 0;
    puVar13 = auStack_258;
    uVar10 = uVar9;
    do {
      if ((&cStack_229)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  pcVar5 = pcVar2;
  __Unwind_Resume();
  pcStack_288 = FUN_1055dffe0;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar11;
  pcVar7 = pcVar3;
  uVar9 = uVar10;
  puStack_2c0 = unaff_x24;
  pcStack_2b8 = unaff_x23;
  puStack_2b0 = puVar13;
  pcStack_2a8 = pcVar2;
  pcStack_2a0 = pcVar8;
  pcStack_298 = pcVar4;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(pcVar11);
  _objc_retain(pcVar3);
  puVar13 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar12 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar11;
      _objc_retainAutorelease(pcVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    unaff_x24 = auStack_2f8;
    func_0x00010002b838(auStack_2f8,pcVar2);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar2 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_2e0,pcVar2);
    acStack_318[0] = '\0';
    acStack_318[1] = '\0';
    acStack_318[2] = '\0';
    acStack_318[3] = '\0';
    acStack_318[4] = '\0';
    acStack_318[5] = '\0';
    acStack_318[6] = '\0';
    acStack_318[7] = '\0';
    acStack_318[8] = '\0';
    acStack_318[9] = '\0';
    acStack_318[10] = '\0';
    acStack_318[0xb] = '\0';
    acStack_318[0xc] = '\0';
    acStack_318[0xd] = '\0';
    acStack_318[0xe] = '\0';
    acStack_318[0xf] = '\0';
    acStack_318[0x10] = '\0';
    acStack_318[0x11] = '\0';
    acStack_318[0x12] = '\0';
    acStack_318[0x13] = '\0';
    acStack_318[0x14] = '\0';
    acStack_318[0x15] = '\0';
    acStack_318[0x16] = '\0';
    acStack_318[0x17] = '\0';
    func_0x00010007e1e8(acStack_318,auStack_2f8,&lStack_2c8,2);
    pcVar6 = "";
    unaff_x23 = acStack_318;
    pcVar7 = acStack_318;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d9a8,pcVar7,uVar10);
    pcStack_300 = unaff_x23;
    func_0x00010007e5dc(&pcStack_300);
    lVar1 = 0;
    puVar13 = auStack_2f8;
    uVar9 = uVar10;
    do {
      if ((&cStack_2c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar2 = pcVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar11);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcStack_328 = FUN_1055e0210;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = puVar13;
  pcStack_348 = pcVar2;
  pcStack_340 = pcVar3;
  pcStack_338 = pcVar11;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(pcVar6);
  _objc_retain(pcVar7);
  if (pcVar4 != (char *)0x0) {
    plVar12 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_398,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_380,pcVar2);
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    func_0x00010007e1e8(&uStack_3b8,auStack_398,&lStack_368,2);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d9f8,&uStack_3b8,uVar9);
    puStack_3a0 = &uStack_3b8;
    func_0x00010007e5dc(&puStack_3a0);
    lVar1 = 0;
    do {
      if ((&cStack_369)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar2 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  __Unwind_Resume();
  pcVar2 = pcVar2 + 0x20;
  _objc_loadWeakRetained();
  if (pcVar2 == (char *)0x0) {
    pcVar11 = (char *)0x0;
  }
  else {
    pcVar3 = pcVar2 + _DAT_112726750;
    _objc_loadWeakRetained(pcVar3);
    pcVar6 = pcVar3;
    func_0x00010c27e640();
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar11 = pcVar7;
    func_0x00010bf59bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar7);
    _objc_release(pcVar6);
    _objc_release(pcVar3);
  }
  _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar11);
  return;
}



/* Entry: 1055dda64; end: 1055dda77; -[SCLensRemoteApiGrapheneMetricReporter reportAuthSucceededWithLensId:specId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055dda64(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  long *plVar12;
  undefined8 *puVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  char *pcStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar9 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar11 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar13 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar12 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
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
    pcVar2 = "";
    unaff_x23 = acStack_98;
    pcVar11 = acStack_98;
    uVar9 = 1;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d8b8,pcVar11,1);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar1 = 0;
    puVar13 = auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_4);
  pcVar3 = param_3;
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
  _objc_release(param_3);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1055dfb80;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar2;
  pcVar7 = pcVar11;
  uVar10 = uVar9;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar13;
  pcStack_c8 = pcVar3;
  pcStack_c0 = param_4;
  pcStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar11);
  puVar13 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar12 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar3);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar3 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_100,pcVar3);
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
    pcVar6 = "";
    unaff_x23 = acStack_138;
    pcVar7 = acStack_138;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d908,pcVar7,uVar9);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar1 = 0;
    puVar13 = auStack_118;
    uVar10 = uVar9;
    do {
      if ((&cStack_e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar11);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar2);
  pcVar5 = pcVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_1055dfdb0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar6;
  pcVar8 = pcVar7;
  uVar9 = uVar10;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar13;
  pcStack_168 = pcVar3;
  pcStack_160 = pcVar11;
  pcStack_158 = pcVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar7);
  puVar13 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar12 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_1a0,pcVar2);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar4 = "";
    unaff_x23 = acStack_1d8;
    pcVar8 = acStack_1d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d958,pcVar8,uVar10);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar1 = 0;
    puVar13 = auStack_1b8;
    uVar9 = uVar10;
    do {
      if ((&cStack_189)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar2 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  pcVar5 = pcVar2;
  __Unwind_Resume();
  pcStack_1e8 = FUN_1055dffe0;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar4;
  pcVar3 = pcVar8;
  uVar10 = uVar9;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar13;
  pcStack_208 = pcVar2;
  pcStack_200 = pcVar7;
  pcStack_1f8 = pcVar6;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar4);
  _objc_retain(pcVar8);
  puVar13 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar12 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_240,pcVar2);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
    pcVar11 = "";
    unaff_x23 = acStack_278;
    pcVar3 = acStack_278;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d9a8,pcVar3,uVar9);
    pcStack_260 = unaff_x23;
    func_0x00010007e5dc(&pcStack_260);
    lVar1 = 0;
    puVar13 = auStack_258;
    uVar10 = uVar9;
    do {
      if ((&cStack_229)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  pcVar6 = pcVar2;
  __Unwind_Resume();
  pcStack_288 = FUN_1055e0210;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2c0 = unaff_x24;
  pcStack_2b8 = unaff_x23;
  puStack_2b0 = puVar13;
  pcStack_2a8 = pcVar2;
  pcStack_2a0 = pcVar8;
  pcStack_298 = pcVar4;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(pcVar11);
  _objc_retain(pcVar3);
  if (pcVar6 != (char *)0x0) {
    plVar12 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar11;
      _objc_retainAutorelease(pcVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_2f8,pcVar2);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar2 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_2e0,pcVar2);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d9f8,&uStack_318,uVar10);
    puStack_300 = &uStack_318;
    func_0x00010007e5dc(&puStack_300);
    lVar1 = 0;
    do {
      if ((&cStack_2c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar2 = pcVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar11);
  __Unwind_Resume();
  pcVar2 = pcVar2 + 0x20;
  _objc_loadWeakRetained();
  if (pcVar2 == (char *)0x0) {
    pcVar11 = (char *)0x0;
  }
  else {
    pcVar3 = pcVar2 + _DAT_112726750;
    _objc_loadWeakRetained(pcVar3);
    pcVar6 = pcVar3;
    func_0x00010c27e640();
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar11 = pcVar7;
    func_0x00010bf59bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar7);
    _objc_release(pcVar6);
    _objc_release(pcVar3);
  }
  _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar11);
  return;
}



/* Entry: 1055dda78; end: 1055dda8b; -[SCLensRemoteApiGrapheneMetricReporter reportAuthStartedWithLensId:specId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055dda78(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  long *plVar12;
  undefined8 *puVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar9 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar11 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar13 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar12 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
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
    pcVar2 = "";
    unaff_x23 = acStack_98;
    pcVar11 = acStack_98;
    uVar9 = 1;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d908,pcVar11,1);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar1 = 0;
    puVar13 = auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_4);
  pcVar3 = param_3;
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
  _objc_release(param_3);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1055dfdb0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar2;
  pcVar7 = pcVar11;
  uVar10 = uVar9;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar13;
  pcStack_c8 = pcVar3;
  pcStack_c0 = param_4;
  pcStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar11);
  puVar13 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar12 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar3);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar3 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_100,pcVar3);
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
    pcVar6 = "";
    unaff_x23 = acStack_138;
    pcVar7 = acStack_138;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d958,pcVar7,uVar9);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar1 = 0;
    puVar13 = auStack_118;
    uVar10 = uVar9;
    do {
      if ((&cStack_e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar11);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar2);
  pcVar5 = pcVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_1055dffe0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar6;
  pcVar8 = pcVar7;
  uVar9 = uVar10;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar13;
  pcStack_168 = pcVar3;
  pcStack_160 = pcVar11;
  pcStack_158 = pcVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar7);
  puVar13 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar12 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_1a0,pcVar2);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar4 = "";
    unaff_x23 = acStack_1d8;
    pcVar8 = acStack_1d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d9a8,pcVar8,uVar10);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar1 = 0;
    puVar13 = auStack_1b8;
    uVar9 = uVar10;
    do {
      if ((&cStack_189)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar2 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  pcVar11 = pcVar2;
  __Unwind_Resume();
  pcStack_1e8 = FUN_1055e0210;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar13;
  pcStack_208 = pcVar2;
  pcStack_200 = pcVar7;
  pcStack_1f8 = pcVar6;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar4);
  _objc_retain(pcVar8);
  if (pcVar11 != (char *)0x0) {
    plVar12 = *(long **)(pcVar11 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_258,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_240,pcVar2);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d9f8,&uStack_278,uVar9);
    puStack_260 = &uStack_278;
    func_0x00010007e5dc(&puStack_260);
    lVar1 = 0;
    do {
      if ((&cStack_229)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  __Unwind_Resume();
  pcVar2 = pcVar2 + 0x20;
  _objc_loadWeakRetained();
  if (pcVar2 == (char *)0x0) {
    pcVar11 = (char *)0x0;
  }
  else {
    pcVar3 = pcVar2 + _DAT_112726750;
    _objc_loadWeakRetained(pcVar3);
    pcVar6 = pcVar3;
    func_0x00010c27e640();
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar11 = pcVar7;
    func_0x00010bf59bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar7);
    _objc_release(pcVar6);
    _objc_release(pcVar3);
  }
  _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar11);
  return;
}



/* Entry: 1055dda8c; end: 1055dda9f; -[SCLensRemoteApiGrapheneMetricReporter reportAuthTokenErrorWithLensId:specId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055dda8c(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar7 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar9 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar11 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar10 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
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
    pcVar2 = "";
    unaff_x23 = acStack_98;
    pcVar9 = acStack_98;
    uVar7 = 1;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11089d958,pcVar9,1);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar1 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_4);
  pcVar3 = param_3;
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
  _objc_release(param_3);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1055dffe0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  pcVar6 = pcVar9;
  uVar8 = uVar7;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  pcStack_c8 = pcVar3;
  pcStack_c0 = param_4;
  pcStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar9);
  puVar11 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar10 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar3);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar3 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_100,pcVar3);
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
    pcVar5 = "";
    unaff_x23 = acStack_138;
    pcVar6 = acStack_138;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11089d9a8,pcVar6,uVar7);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar1 = 0;
    puVar11 = auStack_118;
    uVar8 = uVar7;
    do {
      if ((&cStack_e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_1055e0210;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar11;
  pcStack_168 = pcVar3;
  pcStack_160 = pcVar9;
  pcStack_158 = pcVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar5);
  _objc_retain(pcVar6);
  if (pcVar4 != (char *)0x0) {
    plVar10 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_1b8,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_1a0,pcVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11089d9f8,&uStack_1d8,uVar8);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar1 = 0;
    do {
      if ((&cStack_189)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar2 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  __Unwind_Resume();
  pcVar2 = pcVar2 + 0x20;
  _objc_loadWeakRetained();
  if (pcVar2 == (char *)0x0) {
    pcVar9 = (char *)0x0;
  }
  else {
    pcVar3 = pcVar2 + _DAT_112726750;
    _objc_loadWeakRetained(pcVar3);
    pcVar5 = pcVar3;
    func_0x00010c27e640();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar9 = pcVar6;
    func_0x00010bf59bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar6);
    _objc_release(pcVar5);
    _objc_release(pcVar3);
  }
  _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar9);
  return;
}



/* Entry: 1055ddaa0; end: 1055ddab3; -[SCLensRemoteApiGrapheneMetricReporter reportAuthTokenFoundWithLensId:specId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ddaa0(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar6 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar9 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar8 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar7);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar7 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar7 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar7);
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
    pcVar7 = "";
    unaff_x23 = acStack_98;
    pcVar4 = acStack_98;
    uVar6 = 1;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11089d9a8,pcVar4,1);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar1 = 0;
    puVar9 = auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
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
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1055e0210;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar9;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_4;
  pcStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar4);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_100,pcVar2);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11089d9f8,&uStack_138,uVar6);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar1 = 0;
    do {
      if ((&cStack_e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar2 = pcVar7;
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
  _objc_release(pcVar7);
  __Unwind_Resume();
  pcVar2 = pcVar2 + 0x20;
  _objc_loadWeakRetained();
  if (pcVar2 == (char *)0x0) {
    pcVar7 = (char *)0x0;
  }
  else {
    pcVar4 = pcVar2 + _DAT_112726750;
    _objc_loadWeakRetained(pcVar4);
    pcVar3 = pcVar4;
    func_0x00010c27e640();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar5;
    func_0x00010bf59bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar5);
    _objc_release(pcVar3);
    _objc_release(pcVar4);
  }
  _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar7);
  return;
}



/* Entry: 1055ddab4; end: 1055ddac7; -[SCLensRemoteApiGrapheneMetricReporter reportAuthTokenNotAvailableWithLensId:specId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055ddab4(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long *plVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (lVar1 != 0) {
    plVar7 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
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
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11089d9f8,&uStack_98,1);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar1 = 0;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
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
  _objc_release(param_3);
  __Unwind_Resume();
  pcVar2 = pcVar2 + 0x20;
  _objc_loadWeakRetained();
  if (pcVar2 == (char *)0x0) {
    pcVar6 = (char *)0x0;
  }
  else {
    pcVar3 = pcVar2 + _DAT_112726750;
    _objc_loadWeakRetained(pcVar3);
    pcVar4 = pcVar3;
    func_0x00010c27e640();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar5;
    func_0x00010bf59bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar5);
    _objc_release(pcVar4);
    _objc_release(pcVar3);
  }
  _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar6);
  return;
}



/* Entry: 1055ddac8; end: 1055ddad3; -[SCLensRemoteApiGrapheneMetricReporter .cxx_destruct] */

void FUN_1055ddac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055ddad4; end: 1055ddbd3; -[SCLensRemoteApiLoggerImpl initWithBlizzardLogger:userId:lensCarouselLogger:remoteApiGrapheneReporter:] */

undefined1 *
FUN_1055ddad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e9400;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055ddbd4; end: 1055ddbdb; -[SCLensRemoteApiLoggerImpl blizzardLogger] */

void FUN_1055ddbd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1055ddbdc; end: 1055ddbe3; -[SCLensRemoteApiLoggerImpl lensCarouselLogger] */

void FUN_1055ddbdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 1055ddbe4; end: 1055ddbeb; -[SCLensRemoteApiLoggerImpl remoteApiGrapheneReporter] */

void FUN_1055ddbe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 1055ddbec; end: 1055ddcd3; -[SCLensRemoteApiLoggerImpl remoteApiAuthFlowFailedWithSpecId:lensId:authFlowFailureReason:] */

void FUN_1055ddbec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  puVar1 = PTR_PTR_1126bbe50;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be15d00(param_1,param_2,puVar1);
  func_0x00010c1686a0(puVar1,param_2,param_3);
  uVar3 = param_5 - 1;
  if (2 < uVar3) {
    uVar3 = 0xffffffffffffffff;
  }
  func_0x00010c19a060(puVar1,param_2,uVar3);
  uVar2 = param_1;
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  func_0x00010c129cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1325e0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055ddcd4; end: 1055ddda3; -[SCLensRemoteApiLoggerImpl remoteApiAuthFlowStartedWithSpecId:lensId:] */

void FUN_1055ddcd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bbe58;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be15d00(param_1,param_2,puVar1);
  func_0x00010c1686a0(puVar1,param_2,param_3);
  uVar2 = param_1;
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  func_0x00010c129cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132620();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055ddda4; end: 1055dde73; -[SCLensRemoteApiLoggerImpl remoteApiAuthFlowSucceededWithSpecId:lensId:] */

void FUN_1055ddda4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bbe60;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be15d00(param_1,param_2,puVar1);
  func_0x00010c1686a0(puVar1,param_2,param_3);
  uVar2 = param_1;
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  func_0x00010c129cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132640();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055dde74; end: 1055ddf77; -[SCLensRemoteApiLoggerImpl remoteApiAuthTokenErrorWithSpecId:lensId:tokenErrorSource:tokenExchangeError:] */

void FUN_1055dde74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bbe68;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be15d00(param_1,param_2,puVar1);
  func_0x00010c1686a0(puVar1,param_2,param_3);
  lVar3 = -(ulong)(param_5 != 1);
  if (param_5 == 2) {
    lVar3 = 1;
  }
  func_0x00010c197280(puVar1,param_2,lVar3);
  FUN_1055de608(param_6);
  func_0x00010c19a060(puVar1,param_2,param_6);
  uVar2 = param_1;
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  func_0x00010c129cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132660();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055ddf78; end: 1055de057; -[SCLensRemoteApiLoggerImpl remoteApiAuthTokenFoundWithSpecId:lensId:refreshed:] */

void FUN_1055ddf78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bbe70;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be15d00(param_1,param_2,puVar1);
  func_0x00010c1686a0(puVar1,param_2,param_3);
  func_0x00010c1e9640(puVar1,param_2,param_5);
  uVar2 = param_1;
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  func_0x00010c129cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132680();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055de058; end: 1055de127; -[SCLensRemoteApiLoggerImpl remoteApiAuthTokenNotAvailableWithSpecId:lensId:] */

void FUN_1055de058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bbe78;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be15d00(param_1,param_2,puVar1);
  func_0x00010c1686a0(puVar1,param_2,param_3);
  uVar2 = param_1;
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  func_0x00010c129cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1326a0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055de128; end: 1055de21b; -[SCLensRemoteApiLoggerImpl remoteApiRequestSentWithEndpointId:apiSpecSetId:lensId:] */

void FUN_1055de128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bbe80;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be15d00(param_1,param_2,puVar1);
  func_0x00010c1686c0(puVar1,param_2,param_4);
  func_0x00010c196340(puVar1,param_2,param_3);
  uVar2 = param_1;
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  func_0x00010c129cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133a60();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055de21c; end: 1055de2a3; -[SCLensRemoteApiLoggerImpl remoteApiLocalOnlySpecDroppedWithEndpointId:apiSpecSetId:lensId:] */

void FUN_1055de21c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c129cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133220();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055de2a4; end: 1055de3c3; -[SCLensRemoteApiLoggerImpl remoteApiResponseSuccessWithEndpointId:apiSpecSetId:lensId:responseCode:latencyInMs:] */

void FUN_1055de2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bbe88;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be15d00(param_1,param_2,puVar1);
  func_0x00010c1686c0(puVar1,param_2,param_4);
  func_0x00010c196340(puVar1,param_2,param_3);
  func_0x00010c1ecf60(puVar1,param_2,param_6);
  func_0x00010c1b92e0(puVar1,param_2,param_7);
  uVar2 = param_1;
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  func_0x00010c129cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133aa0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055de3c4; end: 1055de4e3; -[SCLensRemoteApiLoggerImpl remoteApiResponseFailedWithEndpointId:apiSpecSetId:lensId:responseCode:latencyInMs:] */

void FUN_1055de3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bbe90;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be15d00(param_1,param_2,puVar1);
  func_0x00010c1686c0(puVar1,param_2,param_4);
  func_0x00010c196340(puVar1,param_2,param_3);
  func_0x00010c1fd760(puVar1,param_2,param_6);
  func_0x00010c1b92e0(puVar1,param_2,param_7);
  uVar2 = param_1;
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  func_0x00010c129cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133a80();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055de4e4; end: 1055de5bf; -[SCLensRemoteApiLoggerImpl _fillLensBaseEvent:] */

void FUN_1055de4e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c21e620(param_3,param_2,uVar3);
  lVar1 = param_1;
  func_0x00010c090bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c096b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(param_3,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c090bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf5f140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(param_3,param_2,lVar2);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055de5c0; end: 1055de607; -[SCLensRemoteApiLoggerImpl .cxx_destruct] */

void FUN_1055de5c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055de608; end: 1055de62b;  */

undefined8 FUN_1055de608(long param_1)

{
  if (param_1 - 1U < 7) {
    return *(undefined8 *)(&UNK_10ddb3f68 + (param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 1055de62c; end: 1055de69f; -[SCGrapheneLensRemoteApiMetric2 init] */

undefined1 * FUN_1055de62c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9408;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1055de6a0; end: 1055de95f;  */

/* WARNING: Removing unreachable block (ram,0x0001055df428) */
/* WARNING: Removing unreachable block (ram,0x0001055deea8) */
/* WARNING: Removing unreachable block (ram,0x0001055de928) */
/* WARNING: Removing unreachable block (ram,0x0001055debe8) */
/* WARNING: Removing unreachable block (ram,0x0001055df168) */
/* WARNING: Removing unreachable block (ram,0x0001055df6e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055de6a0(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  char *unaff_x24;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 *puStack_820;
  undefined8 auStack_818 [2];
  char cStack_801;
  undefined8 auStack_800 [2];
  char cStack_7e9;
  long lStack_7e8;
  char *pcStack_7e0;
  char *pcStack_7d8;
  undefined8 *puStack_7d0;
  char *pcStack_7c8;
  char *pcStack_7c0;
  char *pcStack_7b8;
  undefined8 ****ppppuStack_7b0;
  code *pcStack_7a8;
  char acStack_798 [24];
  char *pcStack_780;
  undefined8 auStack_778 [2];
  char cStack_761;
  undefined8 auStack_760 [2];
  char cStack_749;
  long lStack_748;
  char *pcStack_740;
  char *pcStack_738;
  undefined8 *puStack_730;
  char *pcStack_728;
  char *pcStack_720;
  char *pcStack_718;
  undefined8 ****ppppuStack_710;
  code *pcStack_708;
  char acStack_6f8 [24];
  char *pcStack_6e0;
  undefined8 auStack_6d8 [2];
  char cStack_6c1;
  undefined8 auStack_6c0 [2];
  char cStack_6a9;
  long lStack_6a8;
  char *pcStack_6a0;
  char *pcStack_698;
  undefined8 *puStack_690;
  char *pcStack_688;
  char *pcStack_680;
  char *pcStack_678;
  undefined8 ****ppppuStack_670;
  code *pcStack_668;
  char acStack_658 [24];
  char *pcStack_640;
  undefined8 auStack_638 [2];
  char cStack_621;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  char *pcStack_600;
  char *pcStack_5f8;
  undefined8 *puStack_5f0;
  char *pcStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  undefined8 ****ppppuStack_5d0;
  code *pcStack_5c8;
  char acStack_5b8 [24];
  char *pcStack_5a0;
  undefined8 auStack_598 [2];
  char cStack_581;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  char *pcStack_560;
  char *pcStack_558;
  undefined8 *puStack_550;
  char *pcStack_548;
  char *pcStack_540;
  char *pcStack_538;
  undefined8 ****ppppuStack_530;
  code *pcStack_528;
  char acStack_518 [24];
  char *pcStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  char *pcStack_4c0;
  char *pcStack_4b8;
  char *pcStack_4b0;
  char *pcStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  undefined8 ****ppppuStack_490;
  code *pcStack_488;
  char acStack_480 [24];
  undefined1 *puStack_468;
  char acStack_460 [24];
  undefined1 auStack_448 [24];
  undefined8 auStack_430 [2];
  char cStack_419;
  long lStack_418;
  undefined8 ****ppppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3c0 [24];
  undefined1 *puStack_3a8;
  char acStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  undefined1 ****ppppuStack_310;
  code *pcStack_308;
  char acStack_300 [24];
  undefined1 *puStack_2e8;
  char acStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  char acStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  char acStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar12 = param_3;
  pcVar7 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
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
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
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
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar13 = 0;
    pcVar12 = pcVar2;
    pcVar7 = param_5;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_180;
  pcStack_c8 = FUN_1055de960;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar5 = pcVar12;
  pcVar10 = pcVar7;
  pcVar6 = pcVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar12);
  _objc_retain(pcVar7);
  if (pcVar2 != (char *)0x0) {
    plVar15 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(acStack_160,pcVar2);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar2 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,acStack_160,&lStack_118,3);
    pcVar8 = "\x01";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar13 = 0;
    pcVar5 = pcVar9;
    pcVar10 = pcVar3;
    do {
      if ((&cStack_119)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar12);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_160);
  _objc_release(pcVar7);
  _objc_release(pcVar12);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar9 = acStack_240;
  pcStack_188 = FUN_1055dec20;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar8;
  pcVar12 = pcVar5;
  pcVar7 = pcVar10;
  pcVar2 = pcVar6;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar5);
  _objc_retain(pcVar10);
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(acStack_220,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_208,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1f0,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,acStack_220,&lStack_1d8,3);
    pcVar1 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar13 = 0;
    pcVar12 = pcVar9;
    pcVar7 = pcVar6;
    do {
      if ((&cStack_1d9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_240;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar5);
  pcVar3 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_220);
  _objc_release(pcVar10);
  _objc_release(pcVar5);
  _objc_release(pcVar8);
  __Unwind_Resume();
  pcVar9 = acStack_300;
  pcStack_248 = FUN_1055deee0;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar5 = pcVar12;
  pcVar10 = pcVar7;
  pcVar6 = pcVar2;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(pcVar1);
  _objc_retain(pcVar12);
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_2e0,pcVar3);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar3 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_2c8,pcVar3);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar3 = pcVar7;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_2b0,pcVar3);
    acStack_300[0] = '\0';
    acStack_300[1] = '\0';
    acStack_300[2] = '\0';
    acStack_300[3] = '\0';
    acStack_300[4] = '\0';
    acStack_300[5] = '\0';
    acStack_300[6] = '\0';
    acStack_300[7] = '\0';
    acStack_300[8] = '\0';
    acStack_300[9] = '\0';
    acStack_300[10] = '\0';
    acStack_300[0xb] = '\0';
    acStack_300[0xc] = '\0';
    acStack_300[0xd] = '\0';
    acStack_300[0xe] = '\0';
    acStack_300[0xf] = '\0';
    acStack_300[0x10] = '\0';
    acStack_300[0x11] = '\0';
    acStack_300[0x12] = '\0';
    acStack_300[0x13] = '\0';
    acStack_300[0x14] = '\0';
    acStack_300[0x15] = '\0';
    acStack_300[0x16] = '\0';
    acStack_300[0x17] = '\0';
    func_0x00010007e1e8(acStack_300,acStack_2e0,&lStack_298,3);
    pcVar8 = "\x01";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_2e8 = acStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    lVar13 = 0;
    pcVar5 = pcVar9;
    pcVar10 = pcVar2;
    do {
      if ((&cStack_299)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_300;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar12);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_2e0);
  _objc_release(pcVar7);
  _objc_release(pcVar12);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar9 = acStack_3c0;
  pcStack_308 = FUN_1055df1a0;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar8;
  pcVar12 = pcVar5;
  pcVar7 = pcVar10;
  pcVar2 = pcVar6;
  ppppuStack_310 = &pppuStack_250;
  _objc_retain(pcVar8);
  _objc_retain(pcVar5);
  _objc_retain(pcVar10);
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(acStack_3a0,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_388,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_370,pcVar1);
    acStack_3c0[0] = '\0';
    acStack_3c0[1] = '\0';
    acStack_3c0[2] = '\0';
    acStack_3c0[3] = '\0';
    acStack_3c0[4] = '\0';
    acStack_3c0[5] = '\0';
    acStack_3c0[6] = '\0';
    acStack_3c0[7] = '\0';
    acStack_3c0[8] = '\0';
    acStack_3c0[9] = '\0';
    acStack_3c0[10] = '\0';
    acStack_3c0[0xb] = '\0';
    acStack_3c0[0xc] = '\0';
    acStack_3c0[0xd] = '\0';
    acStack_3c0[0xe] = '\0';
    acStack_3c0[0xf] = '\0';
    acStack_3c0[0x10] = '\0';
    acStack_3c0[0x11] = '\0';
    acStack_3c0[0x12] = '\0';
    acStack_3c0[0x13] = '\0';
    acStack_3c0[0x14] = '\0';
    acStack_3c0[0x15] = '\0';
    acStack_3c0[0x16] = '\0';
    acStack_3c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_3c0,acStack_3a0,&lStack_358,3);
    pcVar1 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_3a8 = acStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    lVar13 = 0;
    pcVar12 = pcVar9;
    pcVar7 = pcVar6;
    do {
      if ((&cStack_359)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_370 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_3c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar5);
  pcVar3 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_3a0);
  _objc_release(pcVar10);
  _objc_release(pcVar5);
  _objc_release(pcVar8);
  __Unwind_Resume();
  pcVar6 = acStack_480;
  pcStack_3c8 = FUN_1055df460;
  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar5 = pcVar12;
  pcVar10 = pcVar7;
  ppppuStack_3d0 = &ppppuStack_310;
  _objc_retain(pcVar1);
  _objc_retain(pcVar12);
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_460,pcVar3);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar3 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_448,pcVar3);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar3 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_430,pcVar3);
    acStack_480[0] = '\0';
    acStack_480[1] = '\0';
    acStack_480[2] = '\0';
    acStack_480[3] = '\0';
    acStack_480[4] = '\0';
    acStack_480[5] = '\0';
    acStack_480[6] = '\0';
    acStack_480[7] = '\0';
    acStack_480[8] = '\0';
    acStack_480[9] = '\0';
    acStack_480[10] = '\0';
    acStack_480[0xb] = '\0';
    acStack_480[0xc] = '\0';
    acStack_480[0xd] = '\0';
    acStack_480[0xe] = '\0';
    acStack_480[0xf] = '\0';
    acStack_480[0x10] = '\0';
    acStack_480[0x11] = '\0';
    acStack_480[0x12] = '\0';
    acStack_480[0x13] = '\0';
    acStack_480[0x14] = '\0';
    acStack_480[0x15] = '\0';
    acStack_480[0x16] = '\0';
    acStack_480[0x17] = '\0';
    func_0x00010007e1e8(acStack_480,acStack_460,&lStack_418,3);
    pcVar8 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d818,acStack_480,pcVar2);
    puStack_468 = acStack_480;
    func_0x00010007e5dc(&puStack_468);
    lVar13 = 0;
    pcVar5 = pcVar6;
    pcVar10 = pcVar2;
    do {
      if ((&cStack_419)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_430 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_480;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar12);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  pcVar2 = acStack_460;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar2);
  _objc_release(pcVar7);
  _objc_release(pcVar12);
  _objc_release(pcVar1);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_488 = FUN_1055df720;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar8;
  pcVar9 = pcVar5;
  pcVar11 = pcVar10;
  pcStack_4c0 = unaff_x24;
  pcStack_4b8 = pcVar2;
  pcStack_4b0 = pcVar3;
  pcStack_4a8 = pcVar7;
  pcStack_4a0 = pcVar12;
  pcStack_498 = pcVar1;
  ppppuStack_490 = &ppppuStack_3d0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar5);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar15 = *(long **)(pcVar4 + 8);
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
    unaff_x24 = (char *)auStack_4f8;
    func_0x00010002b838(auStack_4f8,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_4e0,pcVar1);
    acStack_518[0] = '\0';
    acStack_518[1] = '\0';
    acStack_518[2] = '\0';
    acStack_518[3] = '\0';
    acStack_518[4] = '\0';
    acStack_518[5] = '\0';
    acStack_518[6] = '\0';
    acStack_518[7] = '\0';
    acStack_518[8] = '\0';
    acStack_518[9] = '\0';
    acStack_518[10] = '\0';
    acStack_518[0xb] = '\0';
    acStack_518[0xc] = '\0';
    acStack_518[0xd] = '\0';
    acStack_518[0xe] = '\0';
    acStack_518[0xf] = '\0';
    acStack_518[0x10] = '\0';
    acStack_518[0x11] = '\0';
    acStack_518[0x12] = '\0';
    acStack_518[0x13] = '\0';
    acStack_518[0x14] = '\0';
    acStack_518[0x15] = '\0';
    acStack_518[0x16] = '\0';
    acStack_518[0x17] = '\0';
    func_0x00010007e1e8(acStack_518,auStack_4f8,&lStack_4c8,2);
    pcVar6 = "";
    pcVar2 = acStack_518;
    pcVar9 = acStack_518;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d868,pcVar9,pcVar10);
    pcStack_500 = pcVar2;
    func_0x00010007e5dc(&pcStack_500);
    lVar13 = 0;
    puVar14 = auStack_4f8;
    pcVar11 = pcVar10;
    do {
      if ((&cStack_4c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_4e1 < '\0') {
    __ZdlPv(auStack_4f8[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar8);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  pcStack_528 = FUN_1055df950;
  lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar12 = pcVar6;
  pcVar7 = pcVar9;
  pcVar10 = pcVar11;
  pcStack_560 = unaff_x24;
  pcStack_558 = pcVar2;
  puStack_550 = puVar14;
  pcStack_548 = pcVar1;
  pcStack_540 = pcVar5;
  pcStack_538 = pcVar8;
  ppppuStack_530 = &ppppuStack_490;
  _objc_retain(pcVar6);
  _objc_retain(pcVar9);
  puVar14 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x24 = (char *)auStack_598;
    func_0x00010002b838(auStack_598,pcVar1);
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
    func_0x00010002b838(auStack_580,pcVar1);
    acStack_5b8[0] = '\0';
    acStack_5b8[1] = '\0';
    acStack_5b8[2] = '\0';
    acStack_5b8[3] = '\0';
    acStack_5b8[4] = '\0';
    acStack_5b8[5] = '\0';
    acStack_5b8[6] = '\0';
    acStack_5b8[7] = '\0';
    acStack_5b8[8] = '\0';
    acStack_5b8[9] = '\0';
    acStack_5b8[10] = '\0';
    acStack_5b8[0xb] = '\0';
    acStack_5b8[0xc] = '\0';
    acStack_5b8[0xd] = '\0';
    acStack_5b8[0xe] = '\0';
    acStack_5b8[0xf] = '\0';
    acStack_5b8[0x10] = '\0';
    acStack_5b8[0x11] = '\0';
    acStack_5b8[0x12] = '\0';
    acStack_5b8[0x13] = '\0';
    acStack_5b8[0x14] = '\0';
    acStack_5b8[0x15] = '\0';
    acStack_5b8[0x16] = '\0';
    acStack_5b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_5b8,auStack_598,&lStack_568,2);
    pcVar12 = "";
    pcVar2 = acStack_5b8;
    pcVar7 = acStack_5b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d8b8,pcVar7,pcVar11);
    pcStack_5a0 = pcVar2;
    func_0x00010007e5dc(&pcStack_5a0);
    lVar13 = 0;
    puVar14 = auStack_598;
    pcVar10 = pcVar11;
    do {
      if ((&cStack_569)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_580 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_581 < '\0') {
    __ZdlPv(auStack_598[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcStack_5c8 = FUN_1055dfb80;
  lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar12;
  pcVar8 = pcVar7;
  pcVar4 = pcVar10;
  pcStack_600 = unaff_x24;
  pcStack_5f8 = pcVar2;
  puStack_5f0 = puVar14;
  pcStack_5e8 = pcVar1;
  pcStack_5e0 = pcVar9;
  pcStack_5d8 = pcVar6;
  ppppuStack_5d0 = &ppppuStack_530;
  _objc_retain(pcVar12);
  _objc_retain(pcVar7);
  puVar14 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar15 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar12;
      _objc_retainAutorelease(pcVar12);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    unaff_x24 = (char *)auStack_638;
    func_0x00010002b838(auStack_638,pcVar1);
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
    func_0x00010002b838(auStack_620,pcVar1);
    acStack_658[0] = '\0';
    acStack_658[1] = '\0';
    acStack_658[2] = '\0';
    acStack_658[3] = '\0';
    acStack_658[4] = '\0';
    acStack_658[5] = '\0';
    acStack_658[6] = '\0';
    acStack_658[7] = '\0';
    acStack_658[8] = '\0';
    acStack_658[9] = '\0';
    acStack_658[10] = '\0';
    acStack_658[0xb] = '\0';
    acStack_658[0xc] = '\0';
    acStack_658[0xd] = '\0';
    acStack_658[0xe] = '\0';
    acStack_658[0xf] = '\0';
    acStack_658[0x10] = '\0';
    acStack_658[0x11] = '\0';
    acStack_658[0x12] = '\0';
    acStack_658[0x13] = '\0';
    acStack_658[0x14] = '\0';
    acStack_658[0x15] = '\0';
    acStack_658[0x16] = '\0';
    acStack_658[0x17] = '\0';
    func_0x00010007e1e8(acStack_658,auStack_638,&lStack_608,2);
    pcVar3 = "";
    pcVar2 = acStack_658;
    pcVar8 = acStack_658;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d908,pcVar8,pcVar10);
    pcStack_640 = pcVar2;
    func_0x00010007e5dc(&pcStack_640);
    lVar13 = 0;
    puVar14 = auStack_638;
    pcVar4 = pcVar10;
    do {
      if ((&cStack_609)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_620 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar1 = pcVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_608) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_621 < '\0') {
    __ZdlPv(auStack_638[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar12);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_668 = FUN_1055dfdb0;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar3;
  pcVar10 = pcVar8;
  pcVar9 = pcVar4;
  pcStack_6a0 = unaff_x24;
  pcStack_698 = pcVar2;
  puStack_690 = puVar14;
  pcStack_688 = pcVar1;
  pcStack_680 = pcVar7;
  pcStack_678 = pcVar12;
  ppppuStack_670 = &ppppuStack_5d0;
  _objc_retain(pcVar3);
  _objc_retain(pcVar8);
  puVar14 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar15 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    unaff_x24 = (char *)auStack_6d8;
    func_0x00010002b838(auStack_6d8,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_6c0,pcVar1);
    acStack_6f8[0] = '\0';
    acStack_6f8[1] = '\0';
    acStack_6f8[2] = '\0';
    acStack_6f8[3] = '\0';
    acStack_6f8[4] = '\0';
    acStack_6f8[5] = '\0';
    acStack_6f8[6] = '\0';
    acStack_6f8[7] = '\0';
    acStack_6f8[8] = '\0';
    acStack_6f8[9] = '\0';
    acStack_6f8[10] = '\0';
    acStack_6f8[0xb] = '\0';
    acStack_6f8[0xc] = '\0';
    acStack_6f8[0xd] = '\0';
    acStack_6f8[0xe] = '\0';
    acStack_6f8[0xf] = '\0';
    acStack_6f8[0x10] = '\0';
    acStack_6f8[0x11] = '\0';
    acStack_6f8[0x12] = '\0';
    acStack_6f8[0x13] = '\0';
    acStack_6f8[0x14] = '\0';
    acStack_6f8[0x15] = '\0';
    acStack_6f8[0x16] = '\0';
    acStack_6f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_6f8,auStack_6d8,&lStack_6a8,2);
    pcVar5 = "";
    pcVar2 = acStack_6f8;
    pcVar10 = acStack_6f8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d958,pcVar10,pcVar4);
    pcStack_6e0 = pcVar2;
    func_0x00010007e5dc(&pcStack_6e0);
    lVar13 = 0;
    puVar14 = auStack_6d8;
    pcVar9 = pcVar4;
    do {
      if ((&cStack_6a9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_6c0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6a8) {
    ___stack_chk_fail();
    _objc_release(pcVar8);
    if (cStack_6c1 < '\0') {
      __ZdlPv(auStack_6d8[0]);
    }
    _objc_release(pcVar8);
    _objc_release(pcVar3);
    pcVar6 = pcVar1;
    __Unwind_Resume();
    pcStack_708 = FUN_1055dffe0;
    lStack_748 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar12 = pcVar5;
    pcVar7 = pcVar10;
    pcVar4 = pcVar9;
    pcStack_740 = unaff_x24;
    pcStack_738 = pcVar2;
    puStack_730 = puVar14;
    pcStack_728 = pcVar1;
    pcStack_720 = pcVar8;
    pcStack_718 = pcVar3;
    ppppuStack_710 = &ppppuStack_670;
    _objc_retain(pcVar5);
    _objc_retain(pcVar10);
    puVar14 = (undefined8 *)0x0;
    if (pcVar6 != (char *)0x0) {
      plVar15 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      unaff_x24 = (char *)auStack_778;
      func_0x00010002b838(auStack_778,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_760,pcVar1);
      acStack_798[0] = '\0';
      acStack_798[1] = '\0';
      acStack_798[2] = '\0';
      acStack_798[3] = '\0';
      acStack_798[4] = '\0';
      acStack_798[5] = '\0';
      acStack_798[6] = '\0';
      acStack_798[7] = '\0';
      acStack_798[8] = '\0';
      acStack_798[9] = '\0';
      acStack_798[10] = '\0';
      acStack_798[0xb] = '\0';
      acStack_798[0xc] = '\0';
      acStack_798[0xd] = '\0';
      acStack_798[0xe] = '\0';
      acStack_798[0xf] = '\0';
      acStack_798[0x10] = '\0';
      acStack_798[0x11] = '\0';
      acStack_798[0x12] = '\0';
      acStack_798[0x13] = '\0';
      acStack_798[0x14] = '\0';
      acStack_798[0x15] = '\0';
      acStack_798[0x16] = '\0';
      acStack_798[0x17] = '\0';
      func_0x00010007e1e8(acStack_798,auStack_778,&lStack_748,2);
      pcVar12 = "";
      pcVar2 = acStack_798;
      pcVar7 = acStack_798;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d9a8,pcVar7,pcVar9);
      pcStack_780 = pcVar2;
      func_0x00010007e5dc(&pcStack_780);
      lVar13 = 0;
      puVar14 = auStack_778;
      pcVar4 = pcVar9;
      do {
        if ((&cStack_749)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_760 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(pcVar10);
    pcVar1 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_748) {
      ___stack_chk_fail();
      _objc_release(pcVar10);
      if (cStack_761 < '\0') {
        __ZdlPv(auStack_778[0]);
      }
      _objc_release(pcVar10);
      _objc_release(pcVar5);
      pcVar3 = pcVar1;
      __Unwind_Resume();
      pcStack_7a8 = FUN_1055e0210;
      lStack_7e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcStack_7e0 = unaff_x24;
      pcStack_7d8 = pcVar2;
      puStack_7d0 = puVar14;
      pcStack_7c8 = pcVar1;
      pcStack_7c0 = pcVar10;
      pcStack_7b8 = pcVar5;
      ppppuStack_7b0 = &ppppuStack_710;
      _objc_retain(pcVar12);
      _objc_retain(pcVar7);
      if (pcVar3 != (char *)0x0) {
        plVar15 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar12);
        if (pcVar12 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar12;
          _objc_retainAutorelease(pcVar12);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar12);
        func_0x00010002b838(auStack_818,pcVar1);
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
        func_0x00010002b838(auStack_800,pcVar1);
        uStack_838 = 0;
        uStack_830 = 0;
        uStack_828 = 0;
        func_0x00010007e1e8(&uStack_838,auStack_818,&lStack_7e8,2);
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d9f8,&uStack_838,pcVar4);
        puStack_820 = &uStack_838;
        func_0x00010007e5dc(&puStack_820);
        lVar13 = 0;
        do {
          if ((&cStack_7e9)[lVar13] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_800 + lVar13));
          }
          lVar13 = lVar13 + -0x18;
        } while (lVar13 != -0x30);
      }
      _objc_release(pcVar7);
      pcVar1 = pcVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7e8) {
        ___stack_chk_fail();
        _objc_release(pcVar7);
        if (cStack_801 < '\0') {
          __ZdlPv(auStack_818[0]);
        }
        _objc_release(pcVar7);
        _objc_release(pcVar12);
        __Unwind_Resume();
        pcVar1 = pcVar1 + 0x20;
        _objc_loadWeakRetained();
        if (pcVar1 == (char *)0x0) {
          pcVar12 = (char *)0x0;
        }
        else {
          pcVar7 = pcVar1 + _DAT_112726750;
          _objc_loadWeakRetained(pcVar7);
          pcVar3 = pcVar7;
          func_0x00010c27e640();
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          pcVar12 = pcVar2;
          func_0x00010bf59bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(pcVar2);
          _objc_release(pcVar3);
          _objc_release(pcVar7);
        }
        _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar12);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1055de960; end: 1055dec1f;  */

/* WARNING: Removing unreachable block (ram,0x0001055df428) */
/* WARNING: Removing unreachable block (ram,0x0001055deea8) */
/* WARNING: Removing unreachable block (ram,0x0001055debe8) */
/* WARNING: Removing unreachable block (ram,0x0001055df168) */
/* WARNING: Removing unreachable block (ram,0x0001055df6e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055de960(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  char *unaff_x24;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 *puStack_760;
  undefined8 auStack_758 [2];
  char cStack_741;
  undefined8 auStack_740 [2];
  char cStack_729;
  long lStack_728;
  char *pcStack_720;
  char *pcStack_718;
  undefined8 *puStack_710;
  char *pcStack_708;
  char *pcStack_700;
  char *pcStack_6f8;
  undefined8 ****ppppuStack_6f0;
  code *pcStack_6e8;
  char acStack_6d8 [24];
  char *pcStack_6c0;
  undefined8 auStack_6b8 [2];
  char cStack_6a1;
  undefined8 auStack_6a0 [2];
  char cStack_689;
  long lStack_688;
  char *pcStack_680;
  char *pcStack_678;
  undefined8 *puStack_670;
  char *pcStack_668;
  char *pcStack_660;
  char *pcStack_658;
  undefined8 ****ppppuStack_650;
  code *pcStack_648;
  char acStack_638 [24];
  char *pcStack_620;
  undefined8 auStack_618 [2];
  char cStack_601;
  undefined8 auStack_600 [2];
  char cStack_5e9;
  long lStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  undefined8 *puStack_5d0;
  char *pcStack_5c8;
  char *pcStack_5c0;
  char *pcStack_5b8;
  undefined8 ****ppppuStack_5b0;
  code *pcStack_5a8;
  char acStack_598 [24];
  char *pcStack_580;
  undefined8 auStack_578 [2];
  char cStack_561;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  char *pcStack_540;
  char *pcStack_538;
  undefined8 *puStack_530;
  char *pcStack_528;
  char *pcStack_520;
  char *pcStack_518;
  undefined8 ****ppppuStack_510;
  code *pcStack_508;
  char acStack_4f8 [24];
  char *pcStack_4e0;
  undefined8 auStack_4d8 [2];
  char cStack_4c1;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  undefined8 *puStack_490;
  char *pcStack_488;
  char *pcStack_480;
  char *pcStack_478;
  undefined8 ****ppppuStack_470;
  code *pcStack_468;
  char acStack_458 [24];
  char *pcStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  char *pcStack_3f0;
  char *pcStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 ****ppppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3c0 [24];
  undefined1 *puStack_3a8;
  char acStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  undefined1 ****ppppuStack_310;
  code *pcStack_308;
  char acStack_300 [24];
  undefined1 *puStack_2e8;
  char acStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  char acStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  char acStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar12 = param_3;
  pcVar5 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
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
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
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
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar13 = 0;
    pcVar12 = pcVar2;
    pcVar5 = param_5;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_180;
  pcStack_c8 = FUN_1055dec20;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar6 = pcVar12;
  pcVar10 = pcVar5;
  pcVar7 = pcVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar12);
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar15 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(acStack_160,pcVar2);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar2 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,acStack_160,&lStack_118,3);
    pcVar8 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar13 = 0;
    pcVar6 = pcVar9;
    pcVar10 = pcVar3;
    do {
      if ((&cStack_119)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar12);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_160);
  _objc_release(pcVar5);
  _objc_release(pcVar12);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar9 = acStack_240;
  pcStack_188 = FUN_1055deee0;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar8;
  pcVar12 = pcVar6;
  pcVar5 = pcVar10;
  pcVar2 = pcVar7;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar6);
  _objc_retain(pcVar10);
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(acStack_220,pcVar1);
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
    func_0x00010002b838(auStack_208,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1f0,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,acStack_220,&lStack_1d8,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar13 = 0;
    pcVar12 = pcVar9;
    pcVar5 = pcVar7;
    do {
      if ((&cStack_1d9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_240;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar6);
  pcVar3 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_220);
  _objc_release(pcVar10);
  _objc_release(pcVar6);
  _objc_release(pcVar8);
  __Unwind_Resume();
  pcVar9 = acStack_300;
  pcStack_248 = FUN_1055df1a0;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar6 = pcVar12;
  pcVar10 = pcVar5;
  pcVar7 = pcVar2;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(pcVar1);
  _objc_retain(pcVar12);
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_2e0,pcVar3);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar3 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_2c8,pcVar3);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar3 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_2b0,pcVar3);
    acStack_300[0] = '\0';
    acStack_300[1] = '\0';
    acStack_300[2] = '\0';
    acStack_300[3] = '\0';
    acStack_300[4] = '\0';
    acStack_300[5] = '\0';
    acStack_300[6] = '\0';
    acStack_300[7] = '\0';
    acStack_300[8] = '\0';
    acStack_300[9] = '\0';
    acStack_300[10] = '\0';
    acStack_300[0xb] = '\0';
    acStack_300[0xc] = '\0';
    acStack_300[0xd] = '\0';
    acStack_300[0xe] = '\0';
    acStack_300[0xf] = '\0';
    acStack_300[0x10] = '\0';
    acStack_300[0x11] = '\0';
    acStack_300[0x12] = '\0';
    acStack_300[0x13] = '\0';
    acStack_300[0x14] = '\0';
    acStack_300[0x15] = '\0';
    acStack_300[0x16] = '\0';
    acStack_300[0x17] = '\0';
    func_0x00010007e1e8(acStack_300,acStack_2e0,&lStack_298,3);
    pcVar8 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_2e8 = acStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    lVar13 = 0;
    pcVar6 = pcVar9;
    pcVar10 = pcVar2;
    do {
      if ((&cStack_299)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_300;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar12);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_2e0);
  _objc_release(pcVar5);
  _objc_release(pcVar12);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar2 = acStack_3c0;
  pcStack_308 = FUN_1055df460;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar8;
  pcVar12 = pcVar6;
  pcVar5 = pcVar10;
  ppppuStack_310 = &pppuStack_250;
  _objc_retain(pcVar8);
  _objc_retain(pcVar6);
  _objc_retain(pcVar10);
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(acStack_3a0,pcVar1);
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
    func_0x00010002b838(auStack_388,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_370,pcVar1);
    acStack_3c0[0] = '\0';
    acStack_3c0[1] = '\0';
    acStack_3c0[2] = '\0';
    acStack_3c0[3] = '\0';
    acStack_3c0[4] = '\0';
    acStack_3c0[5] = '\0';
    acStack_3c0[6] = '\0';
    acStack_3c0[7] = '\0';
    acStack_3c0[8] = '\0';
    acStack_3c0[9] = '\0';
    acStack_3c0[10] = '\0';
    acStack_3c0[0xb] = '\0';
    acStack_3c0[0xc] = '\0';
    acStack_3c0[0xd] = '\0';
    acStack_3c0[0xe] = '\0';
    acStack_3c0[0xf] = '\0';
    acStack_3c0[0x10] = '\0';
    acStack_3c0[0x11] = '\0';
    acStack_3c0[0x12] = '\0';
    acStack_3c0[0x13] = '\0';
    acStack_3c0[0x14] = '\0';
    acStack_3c0[0x15] = '\0';
    acStack_3c0[0x16] = '\0';
    acStack_3c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_3c0,acStack_3a0,&lStack_358,3);
    pcVar1 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d818,acStack_3c0,pcVar7);
    puStack_3a8 = acStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    lVar13 = 0;
    pcVar12 = pcVar2;
    pcVar5 = pcVar7;
    do {
      if ((&cStack_359)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_370 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_3c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar6);
  pcVar3 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  pcVar2 = acStack_3a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar2);
  _objc_release(pcVar10);
  _objc_release(pcVar6);
  _objc_release(pcVar8);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_3c8 = FUN_1055df720;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar9 = pcVar12;
  pcVar11 = pcVar5;
  pcStack_400 = unaff_x24;
  pcStack_3f8 = pcVar2;
  pcStack_3f0 = pcVar3;
  pcStack_3e8 = pcVar10;
  pcStack_3e0 = pcVar6;
  pcStack_3d8 = pcVar8;
  ppppuStack_3d0 = &ppppuStack_310;
  _objc_retain(pcVar1);
  _objc_retain(pcVar12);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar15 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_438;
    func_0x00010002b838(auStack_438,pcVar3);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar3 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_420,pcVar3);
    acStack_458[0] = '\0';
    acStack_458[1] = '\0';
    acStack_458[2] = '\0';
    acStack_458[3] = '\0';
    acStack_458[4] = '\0';
    acStack_458[5] = '\0';
    acStack_458[6] = '\0';
    acStack_458[7] = '\0';
    acStack_458[8] = '\0';
    acStack_458[9] = '\0';
    acStack_458[10] = '\0';
    acStack_458[0xb] = '\0';
    acStack_458[0xc] = '\0';
    acStack_458[0xd] = '\0';
    acStack_458[0xe] = '\0';
    acStack_458[0xf] = '\0';
    acStack_458[0x10] = '\0';
    acStack_458[0x11] = '\0';
    acStack_458[0x12] = '\0';
    acStack_458[0x13] = '\0';
    acStack_458[0x14] = '\0';
    acStack_458[0x15] = '\0';
    acStack_458[0x16] = '\0';
    acStack_458[0x17] = '\0';
    func_0x00010007e1e8(acStack_458,auStack_438,&lStack_408,2);
    pcVar7 = "";
    pcVar2 = acStack_458;
    pcVar9 = acStack_458;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d868,pcVar9,pcVar5);
    pcStack_440 = pcVar2;
    func_0x00010007e5dc(&pcStack_440);
    lVar13 = 0;
    puVar14 = auStack_438;
    pcVar11 = pcVar5;
    do {
      if ((&cStack_409)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar12);
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  if (cStack_421 < '\0') {
    __ZdlPv(auStack_438[0]);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar1);
  pcVar6 = pcVar5;
  __Unwind_Resume();
  pcStack_468 = FUN_1055df950;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar7;
  pcVar8 = pcVar9;
  pcVar10 = pcVar11;
  pcStack_4a0 = unaff_x24;
  pcStack_498 = pcVar2;
  puStack_490 = puVar14;
  pcStack_488 = pcVar5;
  pcStack_480 = pcVar12;
  pcStack_478 = pcVar1;
  ppppuStack_470 = &ppppuStack_3d0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar9);
  puVar14 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar15 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x24 = (char *)auStack_4d8;
    func_0x00010002b838(auStack_4d8,pcVar1);
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
    func_0x00010002b838(auStack_4c0,pcVar1);
    acStack_4f8[0] = '\0';
    acStack_4f8[1] = '\0';
    acStack_4f8[2] = '\0';
    acStack_4f8[3] = '\0';
    acStack_4f8[4] = '\0';
    acStack_4f8[5] = '\0';
    acStack_4f8[6] = '\0';
    acStack_4f8[7] = '\0';
    acStack_4f8[8] = '\0';
    acStack_4f8[9] = '\0';
    acStack_4f8[10] = '\0';
    acStack_4f8[0xb] = '\0';
    acStack_4f8[0xc] = '\0';
    acStack_4f8[0xd] = '\0';
    acStack_4f8[0xe] = '\0';
    acStack_4f8[0xf] = '\0';
    acStack_4f8[0x10] = '\0';
    acStack_4f8[0x11] = '\0';
    acStack_4f8[0x12] = '\0';
    acStack_4f8[0x13] = '\0';
    acStack_4f8[0x14] = '\0';
    acStack_4f8[0x15] = '\0';
    acStack_4f8[0x16] = '\0';
    acStack_4f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_4f8,auStack_4d8,&lStack_4a8,2);
    pcVar3 = "";
    pcVar2 = acStack_4f8;
    pcVar8 = acStack_4f8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d8b8,pcVar8,pcVar11);
    pcStack_4e0 = pcVar2;
    func_0x00010007e5dc(&pcStack_4e0);
    lVar13 = 0;
    puVar14 = auStack_4d8;
    pcVar10 = pcVar11;
    do {
      if ((&cStack_4a9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4c0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_4c1 < '\0') {
    __ZdlPv(auStack_4d8[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar7);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_508 = FUN_1055dfb80;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar12 = pcVar3;
  pcVar5 = pcVar8;
  pcVar4 = pcVar10;
  pcStack_540 = unaff_x24;
  pcStack_538 = pcVar2;
  puStack_530 = puVar14;
  pcStack_528 = pcVar1;
  pcStack_520 = pcVar9;
  pcStack_518 = pcVar7;
  ppppuStack_510 = &ppppuStack_470;
  _objc_retain(pcVar3);
  _objc_retain(pcVar8);
  puVar14 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar15 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    unaff_x24 = (char *)auStack_578;
    func_0x00010002b838(auStack_578,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_560,pcVar1);
    acStack_598[0] = '\0';
    acStack_598[1] = '\0';
    acStack_598[2] = '\0';
    acStack_598[3] = '\0';
    acStack_598[4] = '\0';
    acStack_598[5] = '\0';
    acStack_598[6] = '\0';
    acStack_598[7] = '\0';
    acStack_598[8] = '\0';
    acStack_598[9] = '\0';
    acStack_598[10] = '\0';
    acStack_598[0xb] = '\0';
    acStack_598[0xc] = '\0';
    acStack_598[0xd] = '\0';
    acStack_598[0xe] = '\0';
    acStack_598[0xf] = '\0';
    acStack_598[0x10] = '\0';
    acStack_598[0x11] = '\0';
    acStack_598[0x12] = '\0';
    acStack_598[0x13] = '\0';
    acStack_598[0x14] = '\0';
    acStack_598[0x15] = '\0';
    acStack_598[0x16] = '\0';
    acStack_598[0x17] = '\0';
    func_0x00010007e1e8(acStack_598,auStack_578,&lStack_548,2);
    pcVar12 = "";
    pcVar2 = acStack_598;
    pcVar5 = acStack_598;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d908,pcVar5,pcVar10);
    pcStack_580 = pcVar2;
    func_0x00010007e5dc(&pcStack_580);
    lVar13 = 0;
    puVar14 = auStack_578;
    pcVar4 = pcVar10;
    do {
      if ((&cStack_549)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_560 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_561 < '\0') {
    __ZdlPv(auStack_578[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar3);
  pcVar7 = pcVar1;
  __Unwind_Resume();
  pcStack_5a8 = FUN_1055dfdb0;
  lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar12;
  pcVar10 = pcVar5;
  pcVar9 = pcVar4;
  pcStack_5e0 = unaff_x24;
  pcStack_5d8 = pcVar2;
  puStack_5d0 = puVar14;
  pcStack_5c8 = pcVar1;
  pcStack_5c0 = pcVar8;
  pcStack_5b8 = pcVar3;
  ppppuStack_5b0 = &ppppuStack_510;
  _objc_retain(pcVar12);
  _objc_retain(pcVar5);
  puVar14 = (undefined8 *)0x0;
  if (pcVar7 != (char *)0x0) {
    plVar15 = *(long **)(pcVar7 + 8);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar12;
      _objc_retainAutorelease(pcVar12);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    unaff_x24 = (char *)auStack_618;
    func_0x00010002b838(auStack_618,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_600,pcVar1);
    acStack_638[0] = '\0';
    acStack_638[1] = '\0';
    acStack_638[2] = '\0';
    acStack_638[3] = '\0';
    acStack_638[4] = '\0';
    acStack_638[5] = '\0';
    acStack_638[6] = '\0';
    acStack_638[7] = '\0';
    acStack_638[8] = '\0';
    acStack_638[9] = '\0';
    acStack_638[10] = '\0';
    acStack_638[0xb] = '\0';
    acStack_638[0xc] = '\0';
    acStack_638[0xd] = '\0';
    acStack_638[0xe] = '\0';
    acStack_638[0xf] = '\0';
    acStack_638[0x10] = '\0';
    acStack_638[0x11] = '\0';
    acStack_638[0x12] = '\0';
    acStack_638[0x13] = '\0';
    acStack_638[0x14] = '\0';
    acStack_638[0x15] = '\0';
    acStack_638[0x16] = '\0';
    acStack_638[0x17] = '\0';
    func_0x00010007e1e8(acStack_638,auStack_618,&lStack_5e8,2);
    pcVar6 = "";
    pcVar2 = acStack_638;
    pcVar10 = acStack_638;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d958,pcVar10,pcVar4);
    pcStack_620 = pcVar2;
    func_0x00010007e5dc(&pcStack_620);
    lVar13 = 0;
    puVar14 = auStack_618;
    pcVar9 = pcVar4;
    do {
      if ((&cStack_5e9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_600 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar1 = pcVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5e8) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_601 < '\0') {
      __ZdlPv(auStack_618[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar12);
    pcVar7 = pcVar1;
    __Unwind_Resume();
    pcStack_648 = FUN_1055dffe0;
    lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar6;
    pcVar8 = pcVar10;
    pcVar4 = pcVar9;
    pcStack_680 = unaff_x24;
    pcStack_678 = pcVar2;
    puStack_670 = puVar14;
    pcStack_668 = pcVar1;
    pcStack_660 = pcVar5;
    pcStack_658 = pcVar12;
    ppppuStack_650 = &ppppuStack_5b0;
    _objc_retain(pcVar6);
    _objc_retain(pcVar10);
    puVar14 = (undefined8 *)0x0;
    if (pcVar7 != (char *)0x0) {
      plVar15 = *(long **)(pcVar7 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      unaff_x24 = (char *)auStack_6b8;
      func_0x00010002b838(auStack_6b8,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_6a0,pcVar1);
      acStack_6d8[0] = '\0';
      acStack_6d8[1] = '\0';
      acStack_6d8[2] = '\0';
      acStack_6d8[3] = '\0';
      acStack_6d8[4] = '\0';
      acStack_6d8[5] = '\0';
      acStack_6d8[6] = '\0';
      acStack_6d8[7] = '\0';
      acStack_6d8[8] = '\0';
      acStack_6d8[9] = '\0';
      acStack_6d8[10] = '\0';
      acStack_6d8[0xb] = '\0';
      acStack_6d8[0xc] = '\0';
      acStack_6d8[0xd] = '\0';
      acStack_6d8[0xe] = '\0';
      acStack_6d8[0xf] = '\0';
      acStack_6d8[0x10] = '\0';
      acStack_6d8[0x11] = '\0';
      acStack_6d8[0x12] = '\0';
      acStack_6d8[0x13] = '\0';
      acStack_6d8[0x14] = '\0';
      acStack_6d8[0x15] = '\0';
      acStack_6d8[0x16] = '\0';
      acStack_6d8[0x17] = '\0';
      func_0x00010007e1e8(acStack_6d8,auStack_6b8,&lStack_688,2);
      pcVar3 = "";
      pcVar2 = acStack_6d8;
      pcVar8 = acStack_6d8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d9a8,pcVar8,pcVar9);
      pcStack_6c0 = pcVar2;
      func_0x00010007e5dc(&pcStack_6c0);
      lVar13 = 0;
      puVar14 = auStack_6b8;
      pcVar4 = pcVar9;
      do {
        if ((&cStack_689)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_6a0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(pcVar10);
    pcVar1 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_688) {
      ___stack_chk_fail();
      _objc_release(pcVar10);
      if (cStack_6a1 < '\0') {
        __ZdlPv(auStack_6b8[0]);
      }
      _objc_release(pcVar10);
      _objc_release(pcVar6);
      pcVar12 = pcVar1;
      __Unwind_Resume();
      pcStack_6e8 = FUN_1055e0210;
      lStack_728 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcStack_720 = unaff_x24;
      pcStack_718 = pcVar2;
      puStack_710 = puVar14;
      pcStack_708 = pcVar1;
      pcStack_700 = pcVar10;
      pcStack_6f8 = pcVar6;
      ppppuStack_6f0 = &ppppuStack_650;
      _objc_retain(pcVar3);
      _objc_retain(pcVar8);
      if (pcVar12 != (char *)0x0) {
        plVar15 = *(long **)(pcVar12 + 8);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar3;
          _objc_retainAutorelease(pcVar3);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar3);
        func_0x00010002b838(auStack_758,pcVar1);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar8);
          pcVar1 = pcVar8;
          func_0x00010bdc3520(pcVar8);
        }
        _objc_release(pcVar8);
        func_0x00010002b838(auStack_740,pcVar1);
        uStack_778 = 0;
        uStack_770 = 0;
        uStack_768 = 0;
        func_0x00010007e1e8(&uStack_778,auStack_758,&lStack_728,2);
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d9f8,&uStack_778,pcVar4);
        puStack_760 = &uStack_778;
        func_0x00010007e5dc(&puStack_760);
        lVar13 = 0;
        do {
          if ((&cStack_729)[lVar13] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_740 + lVar13));
          }
          lVar13 = lVar13 + -0x18;
        } while (lVar13 != -0x30);
      }
      _objc_release(pcVar8);
      pcVar1 = pcVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_728) {
        ___stack_chk_fail();
        _objc_release(pcVar8);
        if (cStack_741 < '\0') {
          __ZdlPv(auStack_758[0]);
        }
        _objc_release(pcVar8);
        _objc_release(pcVar3);
        __Unwind_Resume();
        pcVar1 = pcVar1 + 0x20;
        _objc_loadWeakRetained();
        if (pcVar1 == (char *)0x0) {
          pcVar12 = (char *)0x0;
        }
        else {
          pcVar5 = pcVar1 + _DAT_112726750;
          _objc_loadWeakRetained(pcVar5);
          pcVar3 = pcVar5;
          func_0x00010c27e640();
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          pcVar12 = pcVar2;
          func_0x00010bf59bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(pcVar2);
          _objc_release(pcVar3);
          _objc_release(pcVar5);
        }
        _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar12);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1055dec20; end: 1055deedf;  */

/* WARNING: Removing unreachable block (ram,0x0001055df428) */
/* WARNING: Removing unreachable block (ram,0x0001055deea8) */
/* WARNING: Removing unreachable block (ram,0x0001055df168) */
/* WARNING: Removing unreachable block (ram,0x0001055df6e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055dec20(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  char *unaff_x24;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 auStack_698 [2];
  char cStack_681;
  undefined8 auStack_680 [2];
  char cStack_669;
  long lStack_668;
  char *pcStack_660;
  char *pcStack_658;
  undefined8 *puStack_650;
  char *pcStack_648;
  char *pcStack_640;
  char *pcStack_638;
  undefined8 ****ppppuStack_630;
  code *pcStack_628;
  char acStack_618 [24];
  char *pcStack_600;
  undefined8 auStack_5f8 [2];
  char cStack_5e1;
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  char *pcStack_5c0;
  char *pcStack_5b8;
  undefined8 *puStack_5b0;
  char *pcStack_5a8;
  char *pcStack_5a0;
  char *pcStack_598;
  undefined8 ****ppppuStack_590;
  code *pcStack_588;
  char acStack_578 [24];
  char *pcStack_560;
  undefined8 auStack_558 [2];
  char cStack_541;
  undefined8 auStack_540 [2];
  char cStack_529;
  long lStack_528;
  char *pcStack_520;
  char *pcStack_518;
  undefined8 *puStack_510;
  char *pcStack_508;
  char *pcStack_500;
  char *pcStack_4f8;
  undefined8 ****ppppuStack_4f0;
  code *pcStack_4e8;
  char acStack_4d8 [24];
  char *pcStack_4c0;
  undefined8 auStack_4b8 [2];
  char cStack_4a1;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  char *pcStack_480;
  char *pcStack_478;
  undefined8 *puStack_470;
  char *pcStack_468;
  char *pcStack_460;
  char *pcStack_458;
  undefined8 ****ppppuStack_450;
  code *pcStack_448;
  char acStack_438 [24];
  char *pcStack_420;
  undefined8 auStack_418 [2];
  char cStack_401;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 *puStack_3d0;
  char *pcStack_3c8;
  char *pcStack_3c0;
  char *pcStack_3b8;
  undefined8 ****ppppuStack_3b0;
  code *pcStack_3a8;
  char acStack_398 [24];
  char *pcStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  char *pcStack_340;
  char *pcStack_338;
  char *pcStack_330;
  char *pcStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined1 ****ppppuStack_310;
  code *pcStack_308;
  char acStack_300 [24];
  undefined1 *puStack_2e8;
  char acStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  char acStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  char acStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar12 = param_3;
  pcVar7 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
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
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
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
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar13 = 0;
    pcVar12 = pcVar2;
    pcVar7 = param_5;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_180;
  pcStack_c8 = FUN_1055deee0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar5 = pcVar12;
  pcVar10 = pcVar7;
  pcVar6 = pcVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar12);
  _objc_retain(pcVar7);
  if (pcVar2 != (char *)0x0) {
    plVar15 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(acStack_160,pcVar2);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar2 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,acStack_160,&lStack_118,3);
    pcVar8 = "\x01";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar13 = 0;
    pcVar5 = pcVar9;
    pcVar10 = pcVar3;
    do {
      if ((&cStack_119)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar12);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_160);
  _objc_release(pcVar7);
  _objc_release(pcVar12);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar9 = acStack_240;
  pcStack_188 = FUN_1055df1a0;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar8;
  pcVar12 = pcVar5;
  pcVar7 = pcVar10;
  pcVar2 = pcVar6;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar5);
  _objc_retain(pcVar10);
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(acStack_220,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_208,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1f0,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,acStack_220,&lStack_1d8,3);
    pcVar1 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar13 = 0;
    pcVar12 = pcVar9;
    pcVar7 = pcVar6;
    do {
      if ((&cStack_1d9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_240;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar5);
  pcVar3 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_220);
  _objc_release(pcVar10);
  _objc_release(pcVar5);
  _objc_release(pcVar8);
  __Unwind_Resume();
  pcVar6 = acStack_300;
  pcStack_248 = FUN_1055df460;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar5 = pcVar12;
  pcVar10 = pcVar7;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(pcVar1);
  _objc_retain(pcVar12);
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_2e0,pcVar3);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar3 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_2c8,pcVar3);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar3 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_2b0,pcVar3);
    acStack_300[0] = '\0';
    acStack_300[1] = '\0';
    acStack_300[2] = '\0';
    acStack_300[3] = '\0';
    acStack_300[4] = '\0';
    acStack_300[5] = '\0';
    acStack_300[6] = '\0';
    acStack_300[7] = '\0';
    acStack_300[8] = '\0';
    acStack_300[9] = '\0';
    acStack_300[10] = '\0';
    acStack_300[0xb] = '\0';
    acStack_300[0xc] = '\0';
    acStack_300[0xd] = '\0';
    acStack_300[0xe] = '\0';
    acStack_300[0xf] = '\0';
    acStack_300[0x10] = '\0';
    acStack_300[0x11] = '\0';
    acStack_300[0x12] = '\0';
    acStack_300[0x13] = '\0';
    acStack_300[0x14] = '\0';
    acStack_300[0x15] = '\0';
    acStack_300[0x16] = '\0';
    acStack_300[0x17] = '\0';
    func_0x00010007e1e8(acStack_300,acStack_2e0,&lStack_298,3);
    pcVar8 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d818,acStack_300,pcVar2);
    puStack_2e8 = acStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    lVar13 = 0;
    pcVar5 = pcVar6;
    pcVar10 = pcVar2;
    do {
      if ((&cStack_299)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_300;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar12);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  pcVar2 = acStack_2e0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar2);
  _objc_release(pcVar7);
  _objc_release(pcVar12);
  _objc_release(pcVar1);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_308 = FUN_1055df720;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar8;
  pcVar9 = pcVar5;
  pcVar11 = pcVar10;
  pcStack_340 = unaff_x24;
  pcStack_338 = pcVar2;
  pcStack_330 = pcVar3;
  pcStack_328 = pcVar7;
  pcStack_320 = pcVar12;
  pcStack_318 = pcVar1;
  ppppuStack_310 = &pppuStack_250;
  _objc_retain(pcVar8);
  _objc_retain(pcVar5);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar15 = *(long **)(pcVar4 + 8);
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
    unaff_x24 = (char *)auStack_378;
    func_0x00010002b838(auStack_378,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_360,pcVar1);
    acStack_398[0] = '\0';
    acStack_398[1] = '\0';
    acStack_398[2] = '\0';
    acStack_398[3] = '\0';
    acStack_398[4] = '\0';
    acStack_398[5] = '\0';
    acStack_398[6] = '\0';
    acStack_398[7] = '\0';
    acStack_398[8] = '\0';
    acStack_398[9] = '\0';
    acStack_398[10] = '\0';
    acStack_398[0xb] = '\0';
    acStack_398[0xc] = '\0';
    acStack_398[0xd] = '\0';
    acStack_398[0xe] = '\0';
    acStack_398[0xf] = '\0';
    acStack_398[0x10] = '\0';
    acStack_398[0x11] = '\0';
    acStack_398[0x12] = '\0';
    acStack_398[0x13] = '\0';
    acStack_398[0x14] = '\0';
    acStack_398[0x15] = '\0';
    acStack_398[0x16] = '\0';
    acStack_398[0x17] = '\0';
    func_0x00010007e1e8(acStack_398,auStack_378,&lStack_348,2);
    pcVar6 = "";
    pcVar2 = acStack_398;
    pcVar9 = acStack_398;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d868,pcVar9,pcVar10);
    pcStack_380 = pcVar2;
    func_0x00010007e5dc(&pcStack_380);
    lVar13 = 0;
    puVar14 = auStack_378;
    pcVar11 = pcVar10;
    do {
      if ((&cStack_349)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_361 < '\0') {
      __ZdlPv(auStack_378[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar8);
    pcVar3 = pcVar1;
    __Unwind_Resume();
    pcStack_3a8 = FUN_1055df950;
    lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar12 = pcVar6;
    pcVar7 = pcVar9;
    pcVar10 = pcVar11;
    pcStack_3e0 = unaff_x24;
    pcStack_3d8 = pcVar2;
    puStack_3d0 = puVar14;
    pcStack_3c8 = pcVar1;
    pcStack_3c0 = pcVar5;
    pcStack_3b8 = pcVar8;
    ppppuStack_3b0 = &ppppuStack_310;
    _objc_retain(pcVar6);
    _objc_retain(pcVar9);
    puVar14 = (undefined8 *)0x0;
    if (pcVar3 != (char *)0x0) {
      plVar15 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      unaff_x24 = (char *)auStack_418;
      func_0x00010002b838(auStack_418,pcVar1);
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
      func_0x00010002b838(auStack_400,pcVar1);
      acStack_438[0] = '\0';
      acStack_438[1] = '\0';
      acStack_438[2] = '\0';
      acStack_438[3] = '\0';
      acStack_438[4] = '\0';
      acStack_438[5] = '\0';
      acStack_438[6] = '\0';
      acStack_438[7] = '\0';
      acStack_438[8] = '\0';
      acStack_438[9] = '\0';
      acStack_438[10] = '\0';
      acStack_438[0xb] = '\0';
      acStack_438[0xc] = '\0';
      acStack_438[0xd] = '\0';
      acStack_438[0xe] = '\0';
      acStack_438[0xf] = '\0';
      acStack_438[0x10] = '\0';
      acStack_438[0x11] = '\0';
      acStack_438[0x12] = '\0';
      acStack_438[0x13] = '\0';
      acStack_438[0x14] = '\0';
      acStack_438[0x15] = '\0';
      acStack_438[0x16] = '\0';
      acStack_438[0x17] = '\0';
      func_0x00010007e1e8(acStack_438,auStack_418,&lStack_3e8,2);
      pcVar12 = "";
      pcVar2 = acStack_438;
      pcVar7 = acStack_438;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d8b8,pcVar7,pcVar11);
      pcStack_420 = pcVar2;
      func_0x00010007e5dc(&pcStack_420);
      lVar13 = 0;
      puVar14 = auStack_418;
      pcVar10 = pcVar11;
      do {
        if ((&cStack_3e9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_400 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(pcVar9);
    pcVar1 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar9);
    if (cStack_401 < '\0') {
      __ZdlPv(auStack_418[0]);
    }
    _objc_release(pcVar9);
    _objc_release(pcVar6);
    pcVar5 = pcVar1;
    __Unwind_Resume();
    pcStack_448 = FUN_1055dfb80;
    lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar12;
    pcVar8 = pcVar7;
    pcVar4 = pcVar10;
    pcStack_480 = unaff_x24;
    pcStack_478 = pcVar2;
    puStack_470 = puVar14;
    pcStack_468 = pcVar1;
    pcStack_460 = pcVar9;
    pcStack_458 = pcVar6;
    ppppuStack_450 = &ppppuStack_3b0;
    _objc_retain(pcVar12);
    _objc_retain(pcVar7);
    puVar14 = (undefined8 *)0x0;
    if (pcVar5 != (char *)0x0) {
      plVar15 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar12;
        _objc_retainAutorelease(pcVar12);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar12);
      unaff_x24 = (char *)auStack_4b8;
      func_0x00010002b838(auStack_4b8,pcVar1);
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
      func_0x00010002b838(auStack_4a0,pcVar1);
      acStack_4d8[0] = '\0';
      acStack_4d8[1] = '\0';
      acStack_4d8[2] = '\0';
      acStack_4d8[3] = '\0';
      acStack_4d8[4] = '\0';
      acStack_4d8[5] = '\0';
      acStack_4d8[6] = '\0';
      acStack_4d8[7] = '\0';
      acStack_4d8[8] = '\0';
      acStack_4d8[9] = '\0';
      acStack_4d8[10] = '\0';
      acStack_4d8[0xb] = '\0';
      acStack_4d8[0xc] = '\0';
      acStack_4d8[0xd] = '\0';
      acStack_4d8[0xe] = '\0';
      acStack_4d8[0xf] = '\0';
      acStack_4d8[0x10] = '\0';
      acStack_4d8[0x11] = '\0';
      acStack_4d8[0x12] = '\0';
      acStack_4d8[0x13] = '\0';
      acStack_4d8[0x14] = '\0';
      acStack_4d8[0x15] = '\0';
      acStack_4d8[0x16] = '\0';
      acStack_4d8[0x17] = '\0';
      func_0x00010007e1e8(acStack_4d8,auStack_4b8,&lStack_488,2);
      pcVar3 = "";
      pcVar2 = acStack_4d8;
      pcVar8 = acStack_4d8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d908,pcVar8,pcVar10);
      pcStack_4c0 = pcVar2;
      func_0x00010007e5dc(&pcStack_4c0);
      lVar13 = 0;
      puVar14 = auStack_4b8;
      pcVar4 = pcVar10;
      do {
        if ((&cStack_489)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4a0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(pcVar7);
    pcVar1 = pcVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_4a1 < '\0') {
      __ZdlPv(auStack_4b8[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar12);
    pcVar6 = pcVar1;
    __Unwind_Resume();
    pcStack_4e8 = FUN_1055dfdb0;
    lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = pcVar3;
    pcVar10 = pcVar8;
    pcVar9 = pcVar4;
    pcStack_520 = unaff_x24;
    pcStack_518 = pcVar2;
    puStack_510 = puVar14;
    pcStack_508 = pcVar1;
    pcStack_500 = pcVar7;
    pcStack_4f8 = pcVar12;
    ppppuStack_4f0 = &ppppuStack_450;
    _objc_retain(pcVar3);
    _objc_retain(pcVar8);
    puVar14 = (undefined8 *)0x0;
    if (pcVar6 != (char *)0x0) {
      plVar15 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      unaff_x24 = (char *)auStack_558;
      func_0x00010002b838(auStack_558,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar1 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_540,pcVar1);
      acStack_578[0] = '\0';
      acStack_578[1] = '\0';
      acStack_578[2] = '\0';
      acStack_578[3] = '\0';
      acStack_578[4] = '\0';
      acStack_578[5] = '\0';
      acStack_578[6] = '\0';
      acStack_578[7] = '\0';
      acStack_578[8] = '\0';
      acStack_578[9] = '\0';
      acStack_578[10] = '\0';
      acStack_578[0xb] = '\0';
      acStack_578[0xc] = '\0';
      acStack_578[0xd] = '\0';
      acStack_578[0xe] = '\0';
      acStack_578[0xf] = '\0';
      acStack_578[0x10] = '\0';
      acStack_578[0x11] = '\0';
      acStack_578[0x12] = '\0';
      acStack_578[0x13] = '\0';
      acStack_578[0x14] = '\0';
      acStack_578[0x15] = '\0';
      acStack_578[0x16] = '\0';
      acStack_578[0x17] = '\0';
      func_0x00010007e1e8(acStack_578,auStack_558,&lStack_528,2);
      pcVar5 = "";
      pcVar2 = acStack_578;
      pcVar10 = acStack_578;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d958,pcVar10,pcVar4);
      pcStack_560 = pcVar2;
      func_0x00010007e5dc(&pcStack_560);
      lVar13 = 0;
      puVar14 = auStack_558;
      pcVar9 = pcVar4;
      do {
        if ((&cStack_529)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_540 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(pcVar8);
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_528) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      if (cStack_541 < '\0') {
        __ZdlPv(auStack_558[0]);
      }
      _objc_release(pcVar8);
      _objc_release(pcVar3);
      pcVar6 = pcVar1;
      __Unwind_Resume();
      pcStack_588 = FUN_1055dffe0;
      lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar12 = pcVar5;
      pcVar7 = pcVar10;
      pcVar4 = pcVar9;
      pcStack_5c0 = unaff_x24;
      pcStack_5b8 = pcVar2;
      puStack_5b0 = puVar14;
      pcStack_5a8 = pcVar1;
      pcStack_5a0 = pcVar8;
      pcStack_598 = pcVar3;
      ppppuStack_590 = &ppppuStack_4f0;
      _objc_retain(pcVar5);
      _objc_retain(pcVar10);
      puVar14 = (undefined8 *)0x0;
      if (pcVar6 != (char *)0x0) {
        plVar15 = *(long **)(pcVar6 + 8);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar5;
          _objc_retainAutorelease(pcVar5);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar5);
        unaff_x24 = (char *)auStack_5f8;
        func_0x00010002b838(auStack_5f8,pcVar1);
        _objc_retain(pcVar10);
        if (pcVar10 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar10);
          pcVar1 = pcVar10;
          func_0x00010bdc3520(pcVar10);
        }
        _objc_release(pcVar10);
        func_0x00010002b838(auStack_5e0,pcVar1);
        acStack_618[0] = '\0';
        acStack_618[1] = '\0';
        acStack_618[2] = '\0';
        acStack_618[3] = '\0';
        acStack_618[4] = '\0';
        acStack_618[5] = '\0';
        acStack_618[6] = '\0';
        acStack_618[7] = '\0';
        acStack_618[8] = '\0';
        acStack_618[9] = '\0';
        acStack_618[10] = '\0';
        acStack_618[0xb] = '\0';
        acStack_618[0xc] = '\0';
        acStack_618[0xd] = '\0';
        acStack_618[0xe] = '\0';
        acStack_618[0xf] = '\0';
        acStack_618[0x10] = '\0';
        acStack_618[0x11] = '\0';
        acStack_618[0x12] = '\0';
        acStack_618[0x13] = '\0';
        acStack_618[0x14] = '\0';
        acStack_618[0x15] = '\0';
        acStack_618[0x16] = '\0';
        acStack_618[0x17] = '\0';
        func_0x00010007e1e8(acStack_618,auStack_5f8,&lStack_5c8,2);
        pcVar12 = "";
        pcVar2 = acStack_618;
        pcVar7 = acStack_618;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d9a8,pcVar7,pcVar9);
        pcStack_600 = pcVar2;
        func_0x00010007e5dc(&pcStack_600);
        lVar13 = 0;
        puVar14 = auStack_5f8;
        pcVar4 = pcVar9;
        do {
          if ((&cStack_5c9)[lVar13] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_5e0 + lVar13));
          }
          lVar13 = lVar13 + -0x18;
        } while (lVar13 != -0x30);
      }
      _objc_release(pcVar10);
      pcVar1 = pcVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5c8) {
        ___stack_chk_fail();
        _objc_release(pcVar10);
        if (cStack_5e1 < '\0') {
          __ZdlPv(auStack_5f8[0]);
        }
        _objc_release(pcVar10);
        _objc_release(pcVar5);
        pcVar3 = pcVar1;
        __Unwind_Resume();
        pcStack_628 = FUN_1055e0210;
        lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcStack_660 = unaff_x24;
        pcStack_658 = pcVar2;
        puStack_650 = puVar14;
        pcStack_648 = pcVar1;
        pcStack_640 = pcVar10;
        pcStack_638 = pcVar5;
        ppppuStack_630 = &ppppuStack_590;
        _objc_retain(pcVar12);
        _objc_retain(pcVar7);
        if (pcVar3 != (char *)0x0) {
          plVar15 = *(long **)(pcVar3 + 8);
          _objc_retain(pcVar12);
          if (pcVar12 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar12;
            _objc_retainAutorelease(pcVar12);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar12);
          func_0x00010002b838(auStack_698,pcVar1);
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
          func_0x00010002b838(auStack_680,pcVar1);
          uStack_6b8 = 0;
          uStack_6b0 = 0;
          uStack_6a8 = 0;
          func_0x00010007e1e8(&uStack_6b8,auStack_698,&lStack_668,2);
          (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d9f8,&uStack_6b8,pcVar4);
          puStack_6a0 = &uStack_6b8;
          func_0x00010007e5dc(&puStack_6a0);
          lVar13 = 0;
          do {
            if ((&cStack_669)[lVar13] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_680 + lVar13));
            }
            lVar13 = lVar13 + -0x18;
          } while (lVar13 != -0x30);
        }
        _objc_release(pcVar7);
        pcVar1 = pcVar12;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_668) {
          ___stack_chk_fail();
          _objc_release(pcVar7);
          if (cStack_681 < '\0') {
            __ZdlPv(auStack_698[0]);
          }
          _objc_release(pcVar7);
          _objc_release(pcVar12);
          __Unwind_Resume();
          pcVar1 = pcVar1 + 0x20;
          _objc_loadWeakRetained();
          if (pcVar1 == (char *)0x0) {
            pcVar12 = (char *)0x0;
          }
          else {
            pcVar7 = pcVar1 + _DAT_112726750;
            _objc_loadWeakRetained(pcVar7);
            pcVar3 = pcVar7;
            func_0x00010c27e640();
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = pcVar3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            pcVar12 = pcVar2;
            func_0x00010bf59bc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(pcVar2);
            _objc_release(pcVar3);
            _objc_release(pcVar7);
          }
          _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar12);
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1055deee0; end: 1055df19f;  */

/* WARNING: Removing unreachable block (ram,0x0001055df428) */
/* WARNING: Removing unreachable block (ram,0x0001055df168) */
/* WARNING: Removing unreachable block (ram,0x0001055df6e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055deee0(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  char *unaff_x24;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 auStack_5d8 [2];
  char cStack_5c1;
  undefined8 auStack_5c0 [2];
  char cStack_5a9;
  long lStack_5a8;
  char *pcStack_5a0;
  char *pcStack_598;
  undefined8 *puStack_590;
  char *pcStack_588;
  char *pcStack_580;
  char *pcStack_578;
  undefined8 ****ppppuStack_570;
  code *pcStack_568;
  char acStack_558 [24];
  char *pcStack_540;
  undefined8 auStack_538 [2];
  char cStack_521;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  char *pcStack_500;
  char *pcStack_4f8;
  undefined8 *puStack_4f0;
  char *pcStack_4e8;
  char *pcStack_4e0;
  char *pcStack_4d8;
  undefined8 ****ppppuStack_4d0;
  code *pcStack_4c8;
  char acStack_4b8 [24];
  char *pcStack_4a0;
  undefined8 auStack_498 [2];
  char cStack_481;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  char *pcStack_460;
  char *pcStack_458;
  undefined8 *puStack_450;
  char *pcStack_448;
  char *pcStack_440;
  char *pcStack_438;
  undefined8 ****ppppuStack_430;
  code *pcStack_428;
  char acStack_418 [24];
  char *pcStack_400;
  undefined8 auStack_3f8 [2];
  char cStack_3e1;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  char *pcStack_3c0;
  char *pcStack_3b8;
  undefined8 *puStack_3b0;
  char *pcStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined8 ****ppppuStack_390;
  code *pcStack_388;
  char acStack_378 [24];
  char *pcStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined8 *puStack_310;
  char *pcStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  undefined1 ****ppppuStack_2f0;
  code *pcStack_2e8;
  char acStack_2d8 [24];
  char *pcStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  char *pcStack_280;
  char *pcStack_278;
  char *pcStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  char acStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  char acStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar12 = param_3;
  pcVar5 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
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
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
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
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar13 = 0;
    pcVar12 = pcVar2;
    pcVar5 = param_5;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_180;
  pcStack_c8 = FUN_1055df1a0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar6 = pcVar12;
  pcVar10 = pcVar5;
  pcVar7 = pcVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar12);
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar15 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(acStack_160,pcVar2);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar2 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,acStack_160,&lStack_118,3);
    pcVar8 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar13 = 0;
    pcVar6 = pcVar9;
    pcVar10 = pcVar3;
    do {
      if ((&cStack_119)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar12);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_160);
  _objc_release(pcVar5);
  _objc_release(pcVar12);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar2 = acStack_240;
  pcStack_188 = FUN_1055df460;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar8;
  pcVar12 = pcVar6;
  pcVar5 = pcVar10;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar6);
  _objc_retain(pcVar10);
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(acStack_220,pcVar1);
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
    func_0x00010002b838(auStack_208,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1f0,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,acStack_220,&lStack_1d8,3);
    pcVar1 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d818,acStack_240,pcVar7);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar13 = 0;
    pcVar12 = pcVar2;
    pcVar5 = pcVar7;
    do {
      if ((&cStack_1d9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_240;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar6);
  pcVar3 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  pcVar2 = acStack_220;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar2);
  _objc_release(pcVar10);
  _objc_release(pcVar6);
  _objc_release(pcVar8);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_248 = FUN_1055df720;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar9 = pcVar12;
  pcVar11 = pcVar5;
  pcStack_280 = unaff_x24;
  pcStack_278 = pcVar2;
  pcStack_270 = pcVar3;
  pcStack_268 = pcVar10;
  pcStack_260 = pcVar6;
  pcStack_258 = pcVar8;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(pcVar1);
  _objc_retain(pcVar12);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar15 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_2b8;
    func_0x00010002b838(auStack_2b8,pcVar3);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar3 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_2a0,pcVar3);
    acStack_2d8[0] = '\0';
    acStack_2d8[1] = '\0';
    acStack_2d8[2] = '\0';
    acStack_2d8[3] = '\0';
    acStack_2d8[4] = '\0';
    acStack_2d8[5] = '\0';
    acStack_2d8[6] = '\0';
    acStack_2d8[7] = '\0';
    acStack_2d8[8] = '\0';
    acStack_2d8[9] = '\0';
    acStack_2d8[10] = '\0';
    acStack_2d8[0xb] = '\0';
    acStack_2d8[0xc] = '\0';
    acStack_2d8[0xd] = '\0';
    acStack_2d8[0xe] = '\0';
    acStack_2d8[0xf] = '\0';
    acStack_2d8[0x10] = '\0';
    acStack_2d8[0x11] = '\0';
    acStack_2d8[0x12] = '\0';
    acStack_2d8[0x13] = '\0';
    acStack_2d8[0x14] = '\0';
    acStack_2d8[0x15] = '\0';
    acStack_2d8[0x16] = '\0';
    acStack_2d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2d8,auStack_2b8,&lStack_288,2);
    pcVar7 = "";
    pcVar2 = acStack_2d8;
    pcVar9 = acStack_2d8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d868,pcVar9,pcVar5);
    pcStack_2c0 = pcVar2;
    func_0x00010007e5dc(&pcStack_2c0);
    lVar13 = 0;
    puVar14 = auStack_2b8;
    pcVar11 = pcVar5;
    do {
      if ((&cStack_289)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar12);
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar1);
  pcVar6 = pcVar5;
  __Unwind_Resume();
  pcStack_2e8 = FUN_1055df950;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar7;
  pcVar8 = pcVar9;
  pcVar10 = pcVar11;
  pcStack_320 = unaff_x24;
  pcStack_318 = pcVar2;
  puStack_310 = puVar14;
  pcStack_308 = pcVar5;
  pcStack_300 = pcVar12;
  pcStack_2f8 = pcVar1;
  ppppuStack_2f0 = &pppuStack_250;
  _objc_retain(pcVar7);
  _objc_retain(pcVar9);
  puVar14 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar15 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x24 = (char *)auStack_358;
    func_0x00010002b838(auStack_358,pcVar1);
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
    func_0x00010002b838(auStack_340,pcVar1);
    acStack_378[0] = '\0';
    acStack_378[1] = '\0';
    acStack_378[2] = '\0';
    acStack_378[3] = '\0';
    acStack_378[4] = '\0';
    acStack_378[5] = '\0';
    acStack_378[6] = '\0';
    acStack_378[7] = '\0';
    acStack_378[8] = '\0';
    acStack_378[9] = '\0';
    acStack_378[10] = '\0';
    acStack_378[0xb] = '\0';
    acStack_378[0xc] = '\0';
    acStack_378[0xd] = '\0';
    acStack_378[0xe] = '\0';
    acStack_378[0xf] = '\0';
    acStack_378[0x10] = '\0';
    acStack_378[0x11] = '\0';
    acStack_378[0x12] = '\0';
    acStack_378[0x13] = '\0';
    acStack_378[0x14] = '\0';
    acStack_378[0x15] = '\0';
    acStack_378[0x16] = '\0';
    acStack_378[0x17] = '\0';
    func_0x00010007e1e8(acStack_378,auStack_358,&lStack_328,2);
    pcVar3 = "";
    pcVar2 = acStack_378;
    pcVar8 = acStack_378;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d8b8,pcVar8,pcVar11);
    pcStack_360 = pcVar2;
    func_0x00010007e5dc(&pcStack_360);
    lVar13 = 0;
    puVar14 = auStack_358;
    pcVar10 = pcVar11;
    do {
      if ((&cStack_329)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
    ___stack_chk_fail();
    _objc_release(pcVar9);
    if (cStack_341 < '\0') {
      __ZdlPv(auStack_358[0]);
    }
    _objc_release(pcVar9);
    _objc_release(pcVar7);
    pcVar6 = pcVar1;
    __Unwind_Resume();
    pcStack_388 = FUN_1055dfb80;
    lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar12 = pcVar3;
    pcVar5 = pcVar8;
    pcVar4 = pcVar10;
    pcStack_3c0 = unaff_x24;
    pcStack_3b8 = pcVar2;
    puStack_3b0 = puVar14;
    pcStack_3a8 = pcVar1;
    pcStack_3a0 = pcVar9;
    pcStack_398 = pcVar7;
    ppppuStack_390 = &ppppuStack_2f0;
    _objc_retain(pcVar3);
    _objc_retain(pcVar8);
    puVar14 = (undefined8 *)0x0;
    if (pcVar6 != (char *)0x0) {
      plVar15 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      unaff_x24 = (char *)auStack_3f8;
      func_0x00010002b838(auStack_3f8,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar1 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_3e0,pcVar1);
      acStack_418[0] = '\0';
      acStack_418[1] = '\0';
      acStack_418[2] = '\0';
      acStack_418[3] = '\0';
      acStack_418[4] = '\0';
      acStack_418[5] = '\0';
      acStack_418[6] = '\0';
      acStack_418[7] = '\0';
      acStack_418[8] = '\0';
      acStack_418[9] = '\0';
      acStack_418[10] = '\0';
      acStack_418[0xb] = '\0';
      acStack_418[0xc] = '\0';
      acStack_418[0xd] = '\0';
      acStack_418[0xe] = '\0';
      acStack_418[0xf] = '\0';
      acStack_418[0x10] = '\0';
      acStack_418[0x11] = '\0';
      acStack_418[0x12] = '\0';
      acStack_418[0x13] = '\0';
      acStack_418[0x14] = '\0';
      acStack_418[0x15] = '\0';
      acStack_418[0x16] = '\0';
      acStack_418[0x17] = '\0';
      func_0x00010007e1e8(acStack_418,auStack_3f8,&lStack_3c8,2);
      pcVar12 = "";
      pcVar2 = acStack_418;
      pcVar5 = acStack_418;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d908,pcVar5,pcVar10);
      pcStack_400 = pcVar2;
      func_0x00010007e5dc(&pcStack_400);
      lVar13 = 0;
      puVar14 = auStack_3f8;
      pcVar4 = pcVar10;
      do {
        if ((&cStack_3c9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3e0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(pcVar8);
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar8);
    if (cStack_3e1 < '\0') {
      __ZdlPv(auStack_3f8[0]);
    }
    _objc_release(pcVar8);
    _objc_release(pcVar3);
    pcVar7 = pcVar1;
    __Unwind_Resume();
    pcStack_428 = FUN_1055dfdb0;
    lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar12;
    pcVar10 = pcVar5;
    pcVar9 = pcVar4;
    pcStack_460 = unaff_x24;
    pcStack_458 = pcVar2;
    puStack_450 = puVar14;
    pcStack_448 = pcVar1;
    pcStack_440 = pcVar8;
    pcStack_438 = pcVar3;
    ppppuStack_430 = &ppppuStack_390;
    _objc_retain(pcVar12);
    _objc_retain(pcVar5);
    puVar14 = (undefined8 *)0x0;
    if (pcVar7 != (char *)0x0) {
      plVar15 = *(long **)(pcVar7 + 8);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar12;
        _objc_retainAutorelease(pcVar12);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar12);
      unaff_x24 = (char *)auStack_498;
      func_0x00010002b838(auStack_498,pcVar1);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar1 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_480,pcVar1);
      acStack_4b8[0] = '\0';
      acStack_4b8[1] = '\0';
      acStack_4b8[2] = '\0';
      acStack_4b8[3] = '\0';
      acStack_4b8[4] = '\0';
      acStack_4b8[5] = '\0';
      acStack_4b8[6] = '\0';
      acStack_4b8[7] = '\0';
      acStack_4b8[8] = '\0';
      acStack_4b8[9] = '\0';
      acStack_4b8[10] = '\0';
      acStack_4b8[0xb] = '\0';
      acStack_4b8[0xc] = '\0';
      acStack_4b8[0xd] = '\0';
      acStack_4b8[0xe] = '\0';
      acStack_4b8[0xf] = '\0';
      acStack_4b8[0x10] = '\0';
      acStack_4b8[0x11] = '\0';
      acStack_4b8[0x12] = '\0';
      acStack_4b8[0x13] = '\0';
      acStack_4b8[0x14] = '\0';
      acStack_4b8[0x15] = '\0';
      acStack_4b8[0x16] = '\0';
      acStack_4b8[0x17] = '\0';
      func_0x00010007e1e8(acStack_4b8,auStack_498,&lStack_468,2);
      pcVar6 = "";
      pcVar2 = acStack_4b8;
      pcVar10 = acStack_4b8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d958,pcVar10,pcVar4);
      pcStack_4a0 = pcVar2;
      func_0x00010007e5dc(&pcStack_4a0);
      lVar13 = 0;
      puVar14 = auStack_498;
      pcVar9 = pcVar4;
      do {
        if ((&cStack_469)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_480 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(pcVar5);
    pcVar1 = pcVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_481 < '\0') {
      __ZdlPv(auStack_498[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar12);
    pcVar7 = pcVar1;
    __Unwind_Resume();
    pcStack_4c8 = FUN_1055dffe0;
    lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar6;
    pcVar8 = pcVar10;
    pcVar4 = pcVar9;
    pcStack_500 = unaff_x24;
    pcStack_4f8 = pcVar2;
    puStack_4f0 = puVar14;
    pcStack_4e8 = pcVar1;
    pcStack_4e0 = pcVar5;
    pcStack_4d8 = pcVar12;
    ppppuStack_4d0 = &ppppuStack_430;
    _objc_retain(pcVar6);
    _objc_retain(pcVar10);
    puVar14 = (undefined8 *)0x0;
    if (pcVar7 != (char *)0x0) {
      plVar15 = *(long **)(pcVar7 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      unaff_x24 = (char *)auStack_538;
      func_0x00010002b838(auStack_538,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_520,pcVar1);
      acStack_558[0] = '\0';
      acStack_558[1] = '\0';
      acStack_558[2] = '\0';
      acStack_558[3] = '\0';
      acStack_558[4] = '\0';
      acStack_558[5] = '\0';
      acStack_558[6] = '\0';
      acStack_558[7] = '\0';
      acStack_558[8] = '\0';
      acStack_558[9] = '\0';
      acStack_558[10] = '\0';
      acStack_558[0xb] = '\0';
      acStack_558[0xc] = '\0';
      acStack_558[0xd] = '\0';
      acStack_558[0xe] = '\0';
      acStack_558[0xf] = '\0';
      acStack_558[0x10] = '\0';
      acStack_558[0x11] = '\0';
      acStack_558[0x12] = '\0';
      acStack_558[0x13] = '\0';
      acStack_558[0x14] = '\0';
      acStack_558[0x15] = '\0';
      acStack_558[0x16] = '\0';
      acStack_558[0x17] = '\0';
      func_0x00010007e1e8(acStack_558,auStack_538,&lStack_508,2);
      pcVar3 = "";
      pcVar2 = acStack_558;
      pcVar8 = acStack_558;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d9a8,pcVar8,pcVar9);
      pcStack_540 = pcVar2;
      func_0x00010007e5dc(&pcStack_540);
      lVar13 = 0;
      puVar14 = auStack_538;
      pcVar4 = pcVar9;
      do {
        if ((&cStack_509)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_520 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(pcVar10);
    pcVar1 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar10);
    if (cStack_521 < '\0') {
      __ZdlPv(auStack_538[0]);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar6);
    pcVar12 = pcVar1;
    __Unwind_Resume();
    pcStack_568 = FUN_1055e0210;
    lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcStack_5a0 = unaff_x24;
    pcStack_598 = pcVar2;
    puStack_590 = puVar14;
    pcStack_588 = pcVar1;
    pcStack_580 = pcVar10;
    pcStack_578 = pcVar6;
    ppppuStack_570 = &ppppuStack_4d0;
    _objc_retain(pcVar3);
    _objc_retain(pcVar8);
    if (pcVar12 != (char *)0x0) {
      plVar15 = *(long **)(pcVar12 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_5d8,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar1 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_5c0,pcVar1);
      uStack_5f8 = 0;
      uStack_5f0 = 0;
      uStack_5e8 = 0;
      func_0x00010007e1e8(&uStack_5f8,auStack_5d8,&lStack_5a8,2);
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d9f8,&uStack_5f8,pcVar4);
      puStack_5e0 = &uStack_5f8;
      func_0x00010007e5dc(&puStack_5e0);
      lVar13 = 0;
      do {
        if ((&cStack_5a9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_5c0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(pcVar8);
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5a8) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      if (cStack_5c1 < '\0') {
        __ZdlPv(auStack_5d8[0]);
      }
      _objc_release(pcVar8);
      _objc_release(pcVar3);
      __Unwind_Resume();
      pcVar1 = pcVar1 + 0x20;
      _objc_loadWeakRetained();
      if (pcVar1 == (char *)0x0) {
        pcVar12 = (char *)0x0;
      }
      else {
        pcVar5 = pcVar1 + _DAT_112726750;
        _objc_loadWeakRetained(pcVar5);
        pcVar3 = pcVar5;
        func_0x00010c27e640();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        pcVar12 = pcVar2;
        func_0x00010bf59bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pcVar2);
        _objc_release(pcVar3);
        _objc_release(pcVar5);
      }
      _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar12);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1055df1a0; end: 1055df45f;  */

/* WARNING: Removing unreachable block (ram,0x0001055df428) */
/* WARNING: Removing unreachable block (ram,0x0001055df6e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055df1a0(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  char *unaff_x24;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 *puStack_520;
  undefined8 auStack_518 [2];
  char cStack_501;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  char *pcStack_4e0;
  char *pcStack_4d8;
  undefined8 *puStack_4d0;
  char *pcStack_4c8;
  char *pcStack_4c0;
  char *pcStack_4b8;
  undefined8 ****ppppuStack_4b0;
  code *pcStack_4a8;
  char acStack_498 [24];
  char *pcStack_480;
  undefined8 auStack_478 [2];
  char cStack_461;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  char *pcStack_440;
  char *pcStack_438;
  undefined8 *puStack_430;
  char *pcStack_428;
  char *pcStack_420;
  char *pcStack_418;
  undefined8 ****ppppuStack_410;
  code *pcStack_408;
  char acStack_3f8 [24];
  char *pcStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined8 *puStack_390;
  char *pcStack_388;
  char *pcStack_380;
  char *pcStack_378;
  undefined8 ****ppppuStack_370;
  code *pcStack_368;
  char acStack_358 [24];
  char *pcStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  undefined8 *puStack_2f0;
  char *pcStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined1 ****ppppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2b8 [24];
  char *pcStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  char *pcStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  char acStack_218 [24];
  char *pcStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  char acStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar12 = param_3;
  pcVar7 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
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
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
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
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar13 = 0;
    pcVar12 = pcVar2;
    pcVar7 = param_5;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar6 = acStack_180;
  pcStack_c8 = FUN_1055df460;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar5 = pcVar12;
  pcVar10 = pcVar7;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar12);
  _objc_retain(pcVar7);
  if (pcVar2 != (char *)0x0) {
    plVar15 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(acStack_160,pcVar2);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar2 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,acStack_160,&lStack_118,3);
    pcVar8 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d818,acStack_180,pcVar3);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar13 = 0;
    pcVar5 = pcVar6;
    pcVar10 = pcVar3;
    do {
      if ((&cStack_119)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar12);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  pcVar2 = acStack_160;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar2);
  _objc_release(pcVar7);
  _objc_release(pcVar12);
  _objc_release(pcVar1);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_188 = FUN_1055df720;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar8;
  pcVar9 = pcVar5;
  pcVar11 = pcVar10;
  pcStack_1c0 = unaff_x24;
  pcStack_1b8 = pcVar2;
  pcStack_1b0 = pcVar3;
  pcStack_1a8 = pcVar7;
  pcStack_1a0 = pcVar12;
  pcStack_198 = pcVar1;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar5);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar15 = *(long **)(pcVar4 + 8);
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
    unaff_x24 = (char *)auStack_1f8;
    func_0x00010002b838(auStack_1f8,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_1e0,pcVar1);
    acStack_218[0] = '\0';
    acStack_218[1] = '\0';
    acStack_218[2] = '\0';
    acStack_218[3] = '\0';
    acStack_218[4] = '\0';
    acStack_218[5] = '\0';
    acStack_218[6] = '\0';
    acStack_218[7] = '\0';
    acStack_218[8] = '\0';
    acStack_218[9] = '\0';
    acStack_218[10] = '\0';
    acStack_218[0xb] = '\0';
    acStack_218[0xc] = '\0';
    acStack_218[0xd] = '\0';
    acStack_218[0xe] = '\0';
    acStack_218[0xf] = '\0';
    acStack_218[0x10] = '\0';
    acStack_218[0x11] = '\0';
    acStack_218[0x12] = '\0';
    acStack_218[0x13] = '\0';
    acStack_218[0x14] = '\0';
    acStack_218[0x15] = '\0';
    acStack_218[0x16] = '\0';
    acStack_218[0x17] = '\0';
    func_0x00010007e1e8(acStack_218,auStack_1f8,&lStack_1c8,2);
    pcVar6 = "";
    pcVar2 = acStack_218;
    pcVar9 = acStack_218;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d868,pcVar9,pcVar10);
    pcStack_200 = pcVar2;
    func_0x00010007e5dc(&pcStack_200);
    lVar13 = 0;
    puVar14 = auStack_1f8;
    pcVar11 = pcVar10;
    do {
      if ((&cStack_1c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar8);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  pcStack_228 = FUN_1055df950;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar12 = pcVar6;
  pcVar7 = pcVar9;
  pcVar10 = pcVar11;
  pcStack_260 = unaff_x24;
  pcStack_258 = pcVar2;
  puStack_250 = puVar14;
  pcStack_248 = pcVar1;
  pcStack_240 = pcVar5;
  pcStack_238 = pcVar8;
  pppuStack_230 = &ppuStack_190;
  _objc_retain(pcVar6);
  _objc_retain(pcVar9);
  puVar14 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x24 = (char *)auStack_298;
    func_0x00010002b838(auStack_298,pcVar1);
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
    func_0x00010002b838(auStack_280,pcVar1);
    acStack_2b8[0] = '\0';
    acStack_2b8[1] = '\0';
    acStack_2b8[2] = '\0';
    acStack_2b8[3] = '\0';
    acStack_2b8[4] = '\0';
    acStack_2b8[5] = '\0';
    acStack_2b8[6] = '\0';
    acStack_2b8[7] = '\0';
    acStack_2b8[8] = '\0';
    acStack_2b8[9] = '\0';
    acStack_2b8[10] = '\0';
    acStack_2b8[0xb] = '\0';
    acStack_2b8[0xc] = '\0';
    acStack_2b8[0xd] = '\0';
    acStack_2b8[0xe] = '\0';
    acStack_2b8[0xf] = '\0';
    acStack_2b8[0x10] = '\0';
    acStack_2b8[0x11] = '\0';
    acStack_2b8[0x12] = '\0';
    acStack_2b8[0x13] = '\0';
    acStack_2b8[0x14] = '\0';
    acStack_2b8[0x15] = '\0';
    acStack_2b8[0x16] = '\0';
    acStack_2b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2b8,auStack_298,&lStack_268,2);
    pcVar12 = "";
    pcVar2 = acStack_2b8;
    pcVar7 = acStack_2b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d8b8,pcVar7,pcVar11);
    pcStack_2a0 = pcVar2;
    func_0x00010007e5dc(&pcStack_2a0);
    lVar13 = 0;
    puVar14 = auStack_298;
    pcVar10 = pcVar11;
    do {
      if ((&cStack_269)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
    ___stack_chk_fail();
    _objc_release(pcVar9);
    if (cStack_281 < '\0') {
      __ZdlPv(auStack_298[0]);
    }
    _objc_release(pcVar9);
    _objc_release(pcVar6);
    pcVar5 = pcVar1;
    __Unwind_Resume();
    pcStack_2c8 = FUN_1055dfb80;
    lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar12;
    pcVar8 = pcVar7;
    pcVar4 = pcVar10;
    pcStack_300 = unaff_x24;
    pcStack_2f8 = pcVar2;
    puStack_2f0 = puVar14;
    pcStack_2e8 = pcVar1;
    pcStack_2e0 = pcVar9;
    pcStack_2d8 = pcVar6;
    ppppuStack_2d0 = &pppuStack_230;
    _objc_retain(pcVar12);
    _objc_retain(pcVar7);
    puVar14 = (undefined8 *)0x0;
    if (pcVar5 != (char *)0x0) {
      plVar15 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar12;
        _objc_retainAutorelease(pcVar12);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar12);
      unaff_x24 = (char *)auStack_338;
      func_0x00010002b838(auStack_338,pcVar1);
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
      func_0x00010002b838(auStack_320,pcVar1);
      acStack_358[0] = '\0';
      acStack_358[1] = '\0';
      acStack_358[2] = '\0';
      acStack_358[3] = '\0';
      acStack_358[4] = '\0';
      acStack_358[5] = '\0';
      acStack_358[6] = '\0';
      acStack_358[7] = '\0';
      acStack_358[8] = '\0';
      acStack_358[9] = '\0';
      acStack_358[10] = '\0';
      acStack_358[0xb] = '\0';
      acStack_358[0xc] = '\0';
      acStack_358[0xd] = '\0';
      acStack_358[0xe] = '\0';
      acStack_358[0xf] = '\0';
      acStack_358[0x10] = '\0';
      acStack_358[0x11] = '\0';
      acStack_358[0x12] = '\0';
      acStack_358[0x13] = '\0';
      acStack_358[0x14] = '\0';
      acStack_358[0x15] = '\0';
      acStack_358[0x16] = '\0';
      acStack_358[0x17] = '\0';
      func_0x00010007e1e8(acStack_358,auStack_338,&lStack_308,2);
      pcVar3 = "";
      pcVar2 = acStack_358;
      pcVar8 = acStack_358;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d908,pcVar8,pcVar10);
      pcStack_340 = pcVar2;
      func_0x00010007e5dc(&pcStack_340);
      lVar13 = 0;
      puVar14 = auStack_338;
      pcVar4 = pcVar10;
      do {
        if ((&cStack_309)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(pcVar7);
    pcVar1 = pcVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_321 < '\0') {
      __ZdlPv(auStack_338[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar12);
    pcVar6 = pcVar1;
    __Unwind_Resume();
    pcStack_368 = FUN_1055dfdb0;
    lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = pcVar3;
    pcVar10 = pcVar8;
    pcVar9 = pcVar4;
    pcStack_3a0 = unaff_x24;
    pcStack_398 = pcVar2;
    puStack_390 = puVar14;
    pcStack_388 = pcVar1;
    pcStack_380 = pcVar7;
    pcStack_378 = pcVar12;
    ppppuStack_370 = &ppppuStack_2d0;
    _objc_retain(pcVar3);
    _objc_retain(pcVar8);
    puVar14 = (undefined8 *)0x0;
    if (pcVar6 != (char *)0x0) {
      plVar15 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      unaff_x24 = (char *)auStack_3d8;
      func_0x00010002b838(auStack_3d8,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar1 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_3c0,pcVar1);
      acStack_3f8[0] = '\0';
      acStack_3f8[1] = '\0';
      acStack_3f8[2] = '\0';
      acStack_3f8[3] = '\0';
      acStack_3f8[4] = '\0';
      acStack_3f8[5] = '\0';
      acStack_3f8[6] = '\0';
      acStack_3f8[7] = '\0';
      acStack_3f8[8] = '\0';
      acStack_3f8[9] = '\0';
      acStack_3f8[10] = '\0';
      acStack_3f8[0xb] = '\0';
      acStack_3f8[0xc] = '\0';
      acStack_3f8[0xd] = '\0';
      acStack_3f8[0xe] = '\0';
      acStack_3f8[0xf] = '\0';
      acStack_3f8[0x10] = '\0';
      acStack_3f8[0x11] = '\0';
      acStack_3f8[0x12] = '\0';
      acStack_3f8[0x13] = '\0';
      acStack_3f8[0x14] = '\0';
      acStack_3f8[0x15] = '\0';
      acStack_3f8[0x16] = '\0';
      acStack_3f8[0x17] = '\0';
      func_0x00010007e1e8(acStack_3f8,auStack_3d8,&lStack_3a8,2);
      pcVar5 = "";
      pcVar2 = acStack_3f8;
      pcVar10 = acStack_3f8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d958,pcVar10,pcVar4);
      pcStack_3e0 = pcVar2;
      func_0x00010007e5dc(&pcStack_3e0);
      lVar13 = 0;
      puVar14 = auStack_3d8;
      pcVar9 = pcVar4;
      do {
        if ((&cStack_3a9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(pcVar8);
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      if (cStack_3c1 < '\0') {
        __ZdlPv(auStack_3d8[0]);
      }
      _objc_release(pcVar8);
      _objc_release(pcVar3);
      pcVar6 = pcVar1;
      __Unwind_Resume();
      pcStack_408 = FUN_1055dffe0;
      lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar12 = pcVar5;
      pcVar7 = pcVar10;
      pcVar4 = pcVar9;
      pcStack_440 = unaff_x24;
      pcStack_438 = pcVar2;
      puStack_430 = puVar14;
      pcStack_428 = pcVar1;
      pcStack_420 = pcVar8;
      pcStack_418 = pcVar3;
      ppppuStack_410 = &ppppuStack_370;
      _objc_retain(pcVar5);
      _objc_retain(pcVar10);
      puVar14 = (undefined8 *)0x0;
      if (pcVar6 != (char *)0x0) {
        plVar15 = *(long **)(pcVar6 + 8);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar5;
          _objc_retainAutorelease(pcVar5);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar5);
        unaff_x24 = (char *)auStack_478;
        func_0x00010002b838(auStack_478,pcVar1);
        _objc_retain(pcVar10);
        if (pcVar10 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar10);
          pcVar1 = pcVar10;
          func_0x00010bdc3520(pcVar10);
        }
        _objc_release(pcVar10);
        func_0x00010002b838(auStack_460,pcVar1);
        acStack_498[0] = '\0';
        acStack_498[1] = '\0';
        acStack_498[2] = '\0';
        acStack_498[3] = '\0';
        acStack_498[4] = '\0';
        acStack_498[5] = '\0';
        acStack_498[6] = '\0';
        acStack_498[7] = '\0';
        acStack_498[8] = '\0';
        acStack_498[9] = '\0';
        acStack_498[10] = '\0';
        acStack_498[0xb] = '\0';
        acStack_498[0xc] = '\0';
        acStack_498[0xd] = '\0';
        acStack_498[0xe] = '\0';
        acStack_498[0xf] = '\0';
        acStack_498[0x10] = '\0';
        acStack_498[0x11] = '\0';
        acStack_498[0x12] = '\0';
        acStack_498[0x13] = '\0';
        acStack_498[0x14] = '\0';
        acStack_498[0x15] = '\0';
        acStack_498[0x16] = '\0';
        acStack_498[0x17] = '\0';
        func_0x00010007e1e8(acStack_498,auStack_478,&lStack_448,2);
        pcVar12 = "";
        pcVar2 = acStack_498;
        pcVar7 = acStack_498;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d9a8,pcVar7,pcVar9);
        pcStack_480 = pcVar2;
        func_0x00010007e5dc(&pcStack_480);
        lVar13 = 0;
        puVar14 = auStack_478;
        pcVar4 = pcVar9;
        do {
          if ((&cStack_449)[lVar13] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_460 + lVar13));
          }
          lVar13 = lVar13 + -0x18;
        } while (lVar13 != -0x30);
      }
      _objc_release(pcVar10);
      pcVar1 = pcVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar10);
      if (cStack_461 < '\0') {
        __ZdlPv(auStack_478[0]);
      }
      _objc_release(pcVar10);
      _objc_release(pcVar5);
      pcVar3 = pcVar1;
      __Unwind_Resume();
      pcStack_4a8 = FUN_1055e0210;
      lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcStack_4e0 = unaff_x24;
      pcStack_4d8 = pcVar2;
      puStack_4d0 = puVar14;
      pcStack_4c8 = pcVar1;
      pcStack_4c0 = pcVar10;
      pcStack_4b8 = pcVar5;
      ppppuStack_4b0 = &ppppuStack_410;
      _objc_retain(pcVar12);
      _objc_retain(pcVar7);
      if (pcVar3 != (char *)0x0) {
        plVar15 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar12);
        if (pcVar12 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar12;
          _objc_retainAutorelease(pcVar12);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar12);
        func_0x00010002b838(auStack_518,pcVar1);
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
        func_0x00010002b838(auStack_500,pcVar1);
        uStack_538 = 0;
        uStack_530 = 0;
        uStack_528 = 0;
        func_0x00010007e1e8(&uStack_538,auStack_518,&lStack_4e8,2);
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089d9f8,&uStack_538,pcVar4);
        puStack_520 = &uStack_538;
        func_0x00010007e5dc(&puStack_520);
        lVar13 = 0;
        do {
          if ((&cStack_4e9)[lVar13] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_500 + lVar13));
          }
          lVar13 = lVar13 + -0x18;
        } while (lVar13 != -0x30);
      }
      _objc_release(pcVar7);
      pcVar1 = pcVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4e8) {
        ___stack_chk_fail();
        _objc_release(pcVar7);
        if (cStack_501 < '\0') {
          __ZdlPv(auStack_518[0]);
        }
        _objc_release(pcVar7);
        _objc_release(pcVar12);
        __Unwind_Resume();
        pcVar1 = pcVar1 + 0x20;
        _objc_loadWeakRetained();
        if (pcVar1 == (char *)0x0) {
          pcVar12 = (char *)0x0;
        }
        else {
          pcVar7 = pcVar1 + _DAT_112726750;
          _objc_loadWeakRetained(pcVar7);
          pcVar3 = pcVar7;
          func_0x00010c27e640();
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          pcVar12 = pcVar2;
          func_0x00010bf59bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(pcVar2);
          _objc_release(pcVar3);
          _objc_release(pcVar7);
        }
        _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar12);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1055df460; end: 1055df71f;  */

/* WARNING: Removing unreachable block (ram,0x0001055df6e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055df460(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  char *unaff_x24;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  char *pcStack_420;
  char *pcStack_418;
  undefined8 *puStack_410;
  char *pcStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  undefined8 ****ppppuStack_3f0;
  code *pcStack_3e8;
  char acStack_3d8 [24];
  char *pcStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  char *pcStack_380;
  char *pcStack_378;
  undefined8 *puStack_370;
  char *pcStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ****ppppuStack_350;
  code *pcStack_348;
  char acStack_338 [24];
  char *pcStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  char acStack_298 [24];
  char *pcStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 *puStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_1f8 [24];
  char *pcStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined8 *puStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar11 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
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
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11089d818,acStack_c0,param_5);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar12 = 0;
    pcVar11 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  pcVar7 = acStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_1055df720;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar9 = pcVar11;
  pcVar6 = pcVar4;
  pcStack_100 = unaff_x24;
  pcStack_f8 = pcVar7;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar11);
  puVar13 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = (char *)auStack_138;
    func_0x00010002b838(auStack_138,pcVar2);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar2 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_120,pcVar2);
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
    pcVar8 = "";
    pcVar7 = acStack_158;
    pcVar9 = acStack_158;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11089d868,pcVar9,pcVar4);
    pcStack_140 = pcVar7;
    func_0x00010007e5dc(&pcStack_140);
    lVar12 = 0;
    puVar13 = auStack_138;
    pcVar6 = pcVar4;
    do {
      if ((&cStack_109)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar11);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar1);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcStack_168 = FUN_1055df950;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar8;
  pcVar3 = pcVar9;
  pcVar10 = pcVar6;
  pcStack_1a0 = unaff_x24;
  pcStack_198 = pcVar7;
  puStack_190 = puVar13;
  pcStack_188 = pcVar4;
  pcStack_180 = pcVar11;
  pcStack_178 = pcVar1;
  ppuStack_170 = &puStack_d0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar9);
  puVar13 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar14 = *(long **)(pcVar5 + 8);
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
    unaff_x24 = (char *)auStack_1d8;
    func_0x00010002b838(auStack_1d8,pcVar1);
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
    pcVar2 = "";
    pcVar7 = acStack_1f8;
    pcVar3 = acStack_1f8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11089d8b8,pcVar3,pcVar6);
    pcStack_1e0 = pcVar7;
    func_0x00010007e5dc(&pcStack_1e0);
    lVar12 = 0;
    puVar13 = auStack_1d8;
    pcVar10 = pcVar6;
    do {
      if ((&cStack_1a9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar8);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_208 = FUN_1055dfb80;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar2;
  pcVar4 = pcVar3;
  pcVar5 = pcVar10;
  pcStack_240 = unaff_x24;
  pcStack_238 = pcVar7;
  puStack_230 = puVar13;
  pcStack_228 = pcVar1;
  pcStack_220 = pcVar9;
  pcStack_218 = pcVar8;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  puVar13 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar14 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = (char *)auStack_278;
    func_0x00010002b838(auStack_278,pcVar1);
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
    pcVar11 = "";
    pcVar7 = acStack_298;
    pcVar4 = acStack_298;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11089d908,pcVar4,pcVar10);
    pcStack_280 = pcVar7;
    func_0x00010007e5dc(&pcStack_280);
    lVar12 = 0;
    puVar13 = auStack_278;
    pcVar5 = pcVar10;
    do {
      if ((&cStack_249)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_2a8 = FUN_1055dfdb0;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar11;
  pcVar9 = pcVar4;
  pcVar10 = pcVar5;
  pcStack_2e0 = unaff_x24;
  pcStack_2d8 = pcVar7;
  puStack_2d0 = puVar13;
  pcStack_2c8 = pcVar1;
  pcStack_2c0 = pcVar3;
  pcStack_2b8 = pcVar2;
  ppppuStack_2b0 = &pppuStack_210;
  _objc_retain(pcVar11);
  _objc_retain(pcVar4);
  puVar13 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar14 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar11;
      _objc_retainAutorelease(pcVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    unaff_x24 = (char *)auStack_318;
    func_0x00010002b838(auStack_318,pcVar1);
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
    func_0x00010002b838(auStack_300,pcVar1);
    acStack_338[0] = '\0';
    acStack_338[1] = '\0';
    acStack_338[2] = '\0';
    acStack_338[3] = '\0';
    acStack_338[4] = '\0';
    acStack_338[5] = '\0';
    acStack_338[6] = '\0';
    acStack_338[7] = '\0';
    acStack_338[8] = '\0';
    acStack_338[9] = '\0';
    acStack_338[10] = '\0';
    acStack_338[0xb] = '\0';
    acStack_338[0xc] = '\0';
    acStack_338[0xd] = '\0';
    acStack_338[0xe] = '\0';
    acStack_338[0xf] = '\0';
    acStack_338[0x10] = '\0';
    acStack_338[0x11] = '\0';
    acStack_338[0x12] = '\0';
    acStack_338[0x13] = '\0';
    acStack_338[0x14] = '\0';
    acStack_338[0x15] = '\0';
    acStack_338[0x16] = '\0';
    acStack_338[0x17] = '\0';
    func_0x00010007e1e8(acStack_338,auStack_318,&lStack_2e8,2);
    pcVar8 = "";
    pcVar7 = acStack_338;
    pcVar9 = acStack_338;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11089d958,pcVar9,pcVar5);
    pcStack_320 = pcVar7;
    func_0x00010007e5dc(&pcStack_320);
    lVar12 = 0;
    puVar13 = auStack_318;
    pcVar10 = pcVar5;
    do {
      if ((&cStack_2e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar1 = pcVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_301 < '\0') {
    __ZdlPv(auStack_318[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar11);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_348 = FUN_1055dffe0;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar8;
  pcVar3 = pcVar9;
  pcVar5 = pcVar10;
  pcStack_380 = unaff_x24;
  pcStack_378 = pcVar7;
  puStack_370 = puVar13;
  pcStack_368 = pcVar1;
  pcStack_360 = pcVar4;
  pcStack_358 = pcVar11;
  ppppuStack_350 = &ppppuStack_2b0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar9);
  puVar13 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar14 = *(long **)(pcVar6 + 8);
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
    unaff_x24 = (char *)auStack_3b8;
    func_0x00010002b838(auStack_3b8,pcVar1);
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
    func_0x00010002b838(auStack_3a0,pcVar1);
    acStack_3d8[0] = '\0';
    acStack_3d8[1] = '\0';
    acStack_3d8[2] = '\0';
    acStack_3d8[3] = '\0';
    acStack_3d8[4] = '\0';
    acStack_3d8[5] = '\0';
    acStack_3d8[6] = '\0';
    acStack_3d8[7] = '\0';
    acStack_3d8[8] = '\0';
    acStack_3d8[9] = '\0';
    acStack_3d8[10] = '\0';
    acStack_3d8[0xb] = '\0';
    acStack_3d8[0xc] = '\0';
    acStack_3d8[0xd] = '\0';
    acStack_3d8[0xe] = '\0';
    acStack_3d8[0xf] = '\0';
    acStack_3d8[0x10] = '\0';
    acStack_3d8[0x11] = '\0';
    acStack_3d8[0x12] = '\0';
    acStack_3d8[0x13] = '\0';
    acStack_3d8[0x14] = '\0';
    acStack_3d8[0x15] = '\0';
    acStack_3d8[0x16] = '\0';
    acStack_3d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_3d8,auStack_3b8,&lStack_388,2);
    pcVar2 = "";
    pcVar7 = acStack_3d8;
    pcVar3 = acStack_3d8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11089d9a8,pcVar3,pcVar10);
    pcStack_3c0 = pcVar7;
    func_0x00010007e5dc(&pcStack_3c0);
    lVar12 = 0;
    puVar13 = auStack_3b8;
    pcVar5 = pcVar10;
    do {
      if ((&cStack_389)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_3a1 < '\0') {
    __ZdlPv(auStack_3b8[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar8);
  pcVar11 = pcVar1;
  __Unwind_Resume();
  pcStack_3e8 = FUN_1055e0210;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_420 = unaff_x24;
  pcStack_418 = pcVar7;
  puStack_410 = puVar13;
  pcStack_408 = pcVar1;
  pcStack_400 = pcVar9;
  pcStack_3f8 = pcVar8;
  ppppuStack_3f0 = &ppppuStack_350;
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  if (pcVar11 != (char *)0x0) {
    plVar14 = *(long **)(pcVar11 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_458,pcVar1);
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
    func_0x00010002b838(auStack_440,pcVar1);
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 0;
    func_0x00010007e1e8(&uStack_478,auStack_458,&lStack_428,2);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11089d9f8,&uStack_478,pcVar5);
    puStack_460 = &uStack_478;
    func_0x00010007e5dc(&puStack_460);
    lVar12 = 0;
    do {
      if ((&cStack_429)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_428) {
    ___stack_chk_fail();
    _objc_release(pcVar3);
    if (cStack_441 < '\0') {
      __ZdlPv(auStack_458[0]);
    }
    _objc_release(pcVar3);
    _objc_release(pcVar2);
    __Unwind_Resume();
    pcVar1 = pcVar1 + 0x20;
    _objc_loadWeakRetained();
    if (pcVar1 == (char *)0x0) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar4 = pcVar1 + _DAT_112726750;
      _objc_loadWeakRetained(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010c27e640();
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      pcVar11 = pcVar7;
      func_0x00010bf59bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pcVar7);
      _objc_release(pcVar2);
      _objc_release(pcVar4);
    }
    _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar11);
    return;
  }
  return;
}



/* Entry: 1055df720; end: 1055df94f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055df720(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  char *pcStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_318 [24];
  char *pcStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  char *pcStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
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
  pcVar1 = param_2;
  pcVar10 = param_3;
  uVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar13 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
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
    unaff_x23 = acStack_98;
    pcVar10 = acStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d868,pcVar10,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar11 = 0;
    puVar13 = auStack_78;
    uVar8 = param_4;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1055df950;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar10;
  uVar9 = uVar8;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar13;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar10);
  puVar13 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_100,pcVar2);
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
    pcVar5 = "";
    unaff_x23 = acStack_138;
    pcVar6 = acStack_138;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d8b8,pcVar6,uVar8);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar11 = 0;
    puVar13 = auStack_118;
    uVar9 = uVar8;
    do {
      if ((&cStack_e9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_1055dfb80;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar5;
  pcVar7 = pcVar6;
  uVar8 = uVar9;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar13;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar10;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar5);
  _objc_retain(pcVar6);
  puVar13 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar12 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar1);
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
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar3 = "";
    unaff_x23 = acStack_1d8;
    pcVar7 = acStack_1d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d908,pcVar7,uVar9);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar11 = 0;
    puVar13 = auStack_1b8;
    uVar8 = uVar9;
    do {
      if ((&cStack_189)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_1055dfdb0;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar3;
  pcVar2 = pcVar7;
  uVar9 = uVar8;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar13;
  pcStack_208 = pcVar1;
  pcStack_200 = pcVar6;
  pcStack_1f8 = pcVar5;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar3);
  _objc_retain(pcVar7);
  puVar13 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar12 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,pcVar1);
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
    func_0x00010002b838(auStack_240,pcVar1);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
    pcVar10 = "";
    unaff_x23 = acStack_278;
    pcVar2 = acStack_278;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d958,pcVar2,uVar8);
    pcStack_260 = unaff_x23;
    func_0x00010007e5dc(&pcStack_260);
    lVar11 = 0;
    puVar13 = auStack_258;
    uVar9 = uVar8;
    do {
      if ((&cStack_229)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar3);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcStack_288 = FUN_1055dffe0;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar10;
  pcVar6 = pcVar2;
  uVar8 = uVar9;
  puStack_2c0 = unaff_x24;
  pcStack_2b8 = unaff_x23;
  puStack_2b0 = puVar13;
  pcStack_2a8 = pcVar1;
  pcStack_2a0 = pcVar7;
  pcStack_298 = pcVar3;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(pcVar10);
  _objc_retain(pcVar2);
  puVar13 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar12 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar10;
      _objc_retainAutorelease(pcVar10);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    unaff_x24 = auStack_2f8;
    func_0x00010002b838(auStack_2f8,pcVar1);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar1 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_2e0,pcVar1);
    acStack_318[0] = '\0';
    acStack_318[1] = '\0';
    acStack_318[2] = '\0';
    acStack_318[3] = '\0';
    acStack_318[4] = '\0';
    acStack_318[5] = '\0';
    acStack_318[6] = '\0';
    acStack_318[7] = '\0';
    acStack_318[8] = '\0';
    acStack_318[9] = '\0';
    acStack_318[10] = '\0';
    acStack_318[0xb] = '\0';
    acStack_318[0xc] = '\0';
    acStack_318[0xd] = '\0';
    acStack_318[0xe] = '\0';
    acStack_318[0xf] = '\0';
    acStack_318[0x10] = '\0';
    acStack_318[0x11] = '\0';
    acStack_318[0x12] = '\0';
    acStack_318[0x13] = '\0';
    acStack_318[0x14] = '\0';
    acStack_318[0x15] = '\0';
    acStack_318[0x16] = '\0';
    acStack_318[0x17] = '\0';
    func_0x00010007e1e8(acStack_318,auStack_2f8,&lStack_2c8,2);
    pcVar5 = "";
    unaff_x23 = acStack_318;
    pcVar6 = acStack_318;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d9a8,pcVar6,uVar9);
    pcStack_300 = unaff_x23;
    func_0x00010007e5dc(&pcStack_300);
    lVar11 = 0;
    puVar13 = auStack_2f8;
    uVar8 = uVar9;
    do {
      if ((&cStack_2c9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar2);
  pcVar1 = pcVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar10);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  pcStack_328 = FUN_1055e0210;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = puVar13;
  pcStack_348 = pcVar1;
  pcStack_340 = pcVar2;
  pcStack_338 = pcVar10;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(pcVar5);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_398,pcVar1);
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
    func_0x00010002b838(auStack_380,pcVar1);
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    func_0x00010007e1e8(&uStack_3b8,auStack_398,&lStack_368,2);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d9f8,&uStack_3b8,uVar8);
    puStack_3a0 = &uStack_3b8;
    func_0x00010007e5dc(&puStack_3a0);
    lVar11 = 0;
    do {
      if ((&cStack_369)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  __Unwind_Resume();
  pcVar1 = pcVar1 + 0x20;
  _objc_loadWeakRetained();
  if (pcVar1 == (char *)0x0) {
    pcVar10 = (char *)0x0;
  }
  else {
    pcVar2 = pcVar1 + _DAT_112726750;
    _objc_loadWeakRetained(pcVar2);
    pcVar5 = pcVar2;
    func_0x00010c27e640();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = pcVar6;
    func_0x00010bf59bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar6);
    _objc_release(pcVar5);
    _objc_release(pcVar2);
  }
  _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar10);
  return;
}



/* Entry: 1055df950; end: 1055dfb7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055df950(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  char *pcStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
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
  pcVar1 = param_2;
  pcVar10 = param_3;
  uVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar13 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
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
    unaff_x23 = acStack_98;
    pcVar10 = acStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d8b8,pcVar10,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar11 = 0;
    puVar13 = auStack_78;
    uVar8 = param_4;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1055dfb80;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar10;
  uVar9 = uVar8;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar13;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar10);
  puVar13 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_100,pcVar2);
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
    pcVar5 = "";
    unaff_x23 = acStack_138;
    pcVar6 = acStack_138;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d908,pcVar6,uVar8);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar11 = 0;
    puVar13 = auStack_118;
    uVar9 = uVar8;
    do {
      if ((&cStack_e9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_1055dfdb0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar5;
  pcVar7 = pcVar6;
  uVar8 = uVar9;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar13;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar10;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar5);
  _objc_retain(pcVar6);
  puVar13 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar12 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar1);
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
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar3 = "";
    unaff_x23 = acStack_1d8;
    pcVar7 = acStack_1d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d958,pcVar7,uVar9);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar11 = 0;
    puVar13 = auStack_1b8;
    uVar8 = uVar9;
    do {
      if ((&cStack_189)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_1055dffe0;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar3;
  pcVar2 = pcVar7;
  uVar9 = uVar8;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar13;
  pcStack_208 = pcVar1;
  pcStack_200 = pcVar6;
  pcStack_1f8 = pcVar5;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar3);
  _objc_retain(pcVar7);
  puVar13 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar12 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,pcVar1);
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
    func_0x00010002b838(auStack_240,pcVar1);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
    pcVar10 = "";
    unaff_x23 = acStack_278;
    pcVar2 = acStack_278;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d9a8,pcVar2,uVar8);
    pcStack_260 = unaff_x23;
    func_0x00010007e5dc(&pcStack_260);
    lVar11 = 0;
    puVar13 = auStack_258;
    uVar9 = uVar8;
    do {
      if ((&cStack_229)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar3);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcStack_288 = FUN_1055e0210;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2c0 = unaff_x24;
  pcStack_2b8 = unaff_x23;
  puStack_2b0 = puVar13;
  pcStack_2a8 = pcVar1;
  pcStack_2a0 = pcVar7;
  pcStack_298 = pcVar3;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(pcVar10);
  _objc_retain(pcVar2);
  if (pcVar5 != (char *)0x0) {
    plVar12 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar10;
      _objc_retainAutorelease(pcVar10);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_2f8,pcVar1);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar1 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_2e0,pcVar1);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d9f8,&uStack_318,uVar9);
    puStack_300 = &uStack_318;
    func_0x00010007e5dc(&puStack_300);
    lVar11 = 0;
    do {
      if ((&cStack_2c9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar2);
  pcVar1 = pcVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar10);
  __Unwind_Resume();
  pcVar1 = pcVar1 + 0x20;
  _objc_loadWeakRetained();
  if (pcVar1 == (char *)0x0) {
    pcVar10 = (char *)0x0;
  }
  else {
    pcVar2 = pcVar1 + _DAT_112726750;
    _objc_loadWeakRetained(pcVar2);
    pcVar5 = pcVar2;
    func_0x00010c27e640();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = pcVar6;
    func_0x00010bf59bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar6);
    _objc_release(pcVar5);
    _objc_release(pcVar2);
  }
  _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar10);
  return;
}



/* Entry: 1055dfb80; end: 1055dfdaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055dfb80(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
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
  pcVar1 = param_2;
  pcVar10 = param_3;
  uVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar13 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
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
    unaff_x23 = acStack_98;
    pcVar10 = acStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d908,pcVar10,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar11 = 0;
    puVar13 = auStack_78;
    uVar8 = param_4;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1055dfdb0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar10;
  uVar9 = uVar8;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar13;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar10);
  puVar13 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_100,pcVar2);
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
    pcVar5 = "";
    unaff_x23 = acStack_138;
    pcVar6 = acStack_138;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d958,pcVar6,uVar8);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar11 = 0;
    puVar13 = auStack_118;
    uVar9 = uVar8;
    do {
      if ((&cStack_e9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_1055dffe0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar5;
  pcVar7 = pcVar6;
  uVar8 = uVar9;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar13;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar10;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar5);
  _objc_retain(pcVar6);
  puVar13 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar12 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar1);
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
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar3 = "";
    unaff_x23 = acStack_1d8;
    pcVar7 = acStack_1d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d9a8,pcVar7,uVar9);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar11 = 0;
    puVar13 = auStack_1b8;
    uVar8 = uVar9;
    do {
      if ((&cStack_189)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  pcVar10 = pcVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_1055e0210;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar13;
  pcStack_208 = pcVar1;
  pcStack_200 = pcVar6;
  pcStack_1f8 = pcVar5;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar3);
  _objc_retain(pcVar7);
  if (pcVar10 != (char *)0x0) {
    plVar12 = *(long **)(pcVar10 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_258,pcVar1);
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
    func_0x00010002b838(auStack_240,pcVar1);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089d9f8,&uStack_278,uVar8);
    puStack_260 = &uStack_278;
    func_0x00010007e5dc(&puStack_260);
    lVar11 = 0;
    do {
      if ((&cStack_229)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar3);
  __Unwind_Resume();
  pcVar1 = pcVar1 + 0x20;
  _objc_loadWeakRetained();
  if (pcVar1 == (char *)0x0) {
    pcVar10 = (char *)0x0;
  }
  else {
    pcVar2 = pcVar1 + _DAT_112726750;
    _objc_loadWeakRetained(pcVar2);
    pcVar5 = pcVar2;
    func_0x00010c27e640();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = pcVar6;
    func_0x00010bf59bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar6);
    _objc_release(pcVar5);
    _objc_release(pcVar2);
  }
  _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar10);
  return;
}



/* Entry: 1055dfdb0; end: 1055dffdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055dfdb0(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
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
  pcVar1 = param_2;
  pcVar8 = param_3;
  uVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
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
    unaff_x23 = acStack_98;
    pcVar8 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11089d958,pcVar8,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    uVar6 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1055dffe0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar5 = pcVar8;
  uVar7 = uVar6;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  puVar11 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_100,pcVar2);
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
    pcVar4 = "";
    unaff_x23 = acStack_138;
    pcVar5 = acStack_138;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11089d9a8,pcVar5,uVar6);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar9 = 0;
    puVar11 = auStack_118;
    uVar7 = uVar6;
    do {
      if ((&cStack_e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_1055e0210;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar11;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar8;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar4);
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_1b8,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_1a0,pcVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11089d9f8,&uStack_1d8,uVar7);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar9 = 0;
    do {
      if ((&cStack_189)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar4);
  __Unwind_Resume();
  pcVar1 = pcVar1 + 0x20;
  _objc_loadWeakRetained();
  if (pcVar1 == (char *)0x0) {
    pcVar8 = (char *)0x0;
  }
  else {
    pcVar2 = pcVar1 + _DAT_112726750;
    _objc_loadWeakRetained(pcVar2);
    pcVar4 = pcVar2;
    func_0x00010c27e640();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = pcVar5;
    func_0x00010bf59bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar5);
    _objc_release(pcVar4);
    _objc_release(pcVar2);
  }
  _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar8);
  return;
}



/* Entry: 1055dffe0; end: 1055e020f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055dffe0(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
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
  pcVar6 = param_2;
  pcVar3 = param_3;
  uVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar9 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar6);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar6 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar6);
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
    pcVar6 = "";
    unaff_x23 = acStack_98;
    pcVar3 = acStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11089d9a8,pcVar3,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar7 = 0;
    puVar9 = auStack_78;
    uVar5 = param_4;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcStack_a8 = FUN_1055e0210;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar9;
  pcStack_c8 = pcVar1;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_118,pcVar1);
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
    func_0x00010002b838(auStack_100,pcVar1);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11089d9f8,&uStack_138,uVar5);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar7 = 0;
    do {
      if ((&cStack_e9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar6);
  __Unwind_Resume();
  pcVar1 = pcVar1 + 0x20;
  _objc_loadWeakRetained();
  if (pcVar1 == (char *)0x0) {
    pcVar6 = (char *)0x0;
  }
  else {
    pcVar3 = pcVar1 + _DAT_112726750;
    _objc_loadWeakRetained(pcVar3);
    pcVar2 = pcVar3;
    func_0x00010c27e640();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar4;
    func_0x00010bf59bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar4);
    _objc_release(pcVar2);
    _objc_release(pcVar3);
  }
  _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar6);
  return;
}



/* Entry: 1055e0210; end: 1055e043f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e0210(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
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
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11089d9f8,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar6 = 0;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar1 = pcVar1 + 0x20;
  _objc_loadWeakRetained();
  if (pcVar1 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar2 = pcVar1 + _DAT_112726750;
    _objc_loadWeakRetained(pcVar2);
    pcVar3 = pcVar2;
    func_0x00010c27e640();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    func_0x00010bf59bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar4);
    _objc_release(pcVar3);
    _objc_release(pcVar2);
  }
  _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar5);
  return;
}



/* Entry: 1055e0440; end: 1055e04e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e0440(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_112726750;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c27e640();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf59bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1055e04e8; end: 1055e055f; -[SCUcoDataStoreServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e04e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726750);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272674c);
  return;
}



/* Entry: 1055e0560; end: 1055e07d7; -[SCLensMetadataFetchingServiceProvider _lensMetadataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e0560(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112726758;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112726764;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar14;
  func_0x00010c095140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  puVar3 = PTR_PTR_1126bbea8;
  _objc_alloc();
  func_0x00010c025840();
  puVar4 = PTR_PTR_1126bbeb0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112726768;
    _objc_loadWeakRetained(lVar14);
  }
  func_0x00010bffe920(puVar4,param_2,lVar1,lVar14);
  _objc_release(lVar14);
  puVar5 = PTR_PTR_1126bbeb8;
  _objc_alloc();
  lVar6 = param_1;
  FUN_1055e07d8();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  FUN_1055e07d8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c135900();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = 0;
  if (param_1 != 0) {
    lVar14 = param_1 + _DAT_112726760;
    _objc_loadWeakRetained(lVar14);
  }
  lVar10 = lVar14;
  func_0x00010c095b60(lVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c15e720();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126bbad8;
  _objc_opt_new(PTR_PTR_1126bbad8);
  func_0x00010c03f2c0(puVar5,param_2,lVar7,puVar4,lVar9,puVar3,lVar12,puVar13);
  _objc_release(puVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar14);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1055e07d8; end: 1055e07fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e07d8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272675c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055e07fc; end: 1055e0983; -[SCLensMetadataFetchingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e07fc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726768);
  _objc_destroyWeak(param_1 + _DAT_112726764);
  _objc_destroyWeak(param_1 + _DAT_112726760);
  _objc_destroyWeak(param_1 + _DAT_11272675c);
  _objc_destroyWeak(param_1 + _DAT_112726758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726754);
  return;
}



/* Entry: 1055e0984; end: 1055e09eb; -[SCUnlockablesNetworkServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e0984(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726780);
  _objc_destroyWeak(param_1 + _DAT_11272677c);
  _objc_destroyWeak(param_1 + _DAT_112726778);
  _objc_destroyWeak(param_1 + _DAT_112726774);
  _objc_destroyWeak(param_1 + _DAT_112726770);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272676c);
  return;
}



/* Entry: 1055e09ec; end: 1055e0bbf; -[SCUnlockableFetchingResponseMapper networkLensResponseFromGetUnlocksResponse:] */

void FUN_1055e09ec(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfcf760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f5d958;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f5d998;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010be16620(param_1,param_2,uVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = param_1;
  func_0x00010be16540(param_1,param_2,uVar1,puVar4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f5d978;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x00010be16620(param_1,param_2,uVar2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010be16540(param_1,param_2,uVar1,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bbed0;
  _objc_alloc(PTR_PTR_1126bbed0);
  puVar7 = puVar3;
  puVar8 = param_1;
  func_0x00010c0593e0();
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    puVar5 = puVar8;
    ___stack_chk_fail();
    pcStack_78 = FUN_1055e0bc0;
    uStack_90 = uVar2;
    uStack_88 = uVar1;
    puStack_80 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x1055e0c54;
    puStack_a0 = &UNK_11089dda8;
    puStack_98 = puVar7;
    _objc_retain(puVar7);
    func_0x00010bfb2660(puVar5,param_2,&puStack_b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_98);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1055e0bc0; end: 1055e0c9f; -[SCUnlockableFetchingResponseMapper _filteredUnlockChecksumsFromGroupedUnlocks:usingKeys:] */

void FUN_1055e0bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1055e0c54;
  puStack_30 = &UNK_11089dda8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb2660(param_4,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 1055e0ca0; end: 1055e0dcb; -[SCUnlockableFetchingResponseMapper _filteredGeofilters:usingChecksums:] */

void FUN_1055e0ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1055e0d4c;
  puStack_40 = &UNK_11089ddd8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb2660(param_4,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf51e00();
  _objc_release(param_4);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055e0dcc; end: 1055e0e97; -[SCUnlockableRemoteFetchingAdapter initWithUnlockableNetworkAPI:networkLogging:timeProvider:] */

undefined1 *
FUN_1055e0dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e9410;
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



/* Entry: 1055e0e98; end: 1055e1063; -[SCUnlockableRemoteFetchingAdapter fetchUnlockLensesWhichChecksumsAbsentInMap:callbackPerformer:successBlock:failureBlock:] */

void FUN_1055e0e98(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(uVar2);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf5fd80(uVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010be4c100(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1055e1064;
  puStack_98 = &UNK_11089de08;
  _objc_retain(uVar2);
  uStack_90 = uVar2;
  uStack_78 = param_1;
  _objc_retain(uVar3);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1055e1110;
  puStack_d8 = &UNK_11089de38;
  uStack_d0 = uVar2;
  uStack_c8 = uVar3;
  uStack_c0 = param_7;
  uStack_b8 = param_1;
  uStack_88 = uVar3;
  uStack_80 = param_6;
  _objc_retain(param_7);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(param_6);
  func_0x00010bfab160(uVar4,param_3,param_4,param_2,param_5,&puStack_b0,&puStack_f0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 1055e1064; end: 1055e110f;  */

void FUN_1055e1064(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bbed8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = puVar1;
  func_0x00010c0d7c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x20));
  func_0x00010c132f40(param_1 - *(double *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x28));
  (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),puVar2,param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055e1110; end: 1055e1183;  */

void FUN_1055e1110(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf5fd80(uVar1);
  func_0x00010c132f20(param_1 - *(double *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x28));
  (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055e1184; end: 1055e1213; -[SCUnlockableRemoteFetchingAdapter _lensUnlockGroups] */

void FUN_1055e1184(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = PTR_PTR_1126b6790;
  _objc_alloc(PTR_PTR_1126b6790);
  func_0x00010c0590e0();
  func_0x00010befa120(puVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126b6790;
  _objc_alloc(PTR_PTR_1126b6790);
  func_0x00010c0590e0();
  func_0x00010befa120(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e1214; end: 1055e124f; -[SCUnlockableRemoteFetchingAdapter .cxx_destruct] */

void FUN_1055e1214(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055e1250; end: 1055e131b; -[SCUnlockableRemoteRemovalAdapter initWithUnlockableNetworkAPI:networkLogging:timeProvider:] */

undefined1 *
FUN_1055e1250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e9418;
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



/* Entry: 1055e131c; end: 1055e14d3; -[SCUnlockableRemoteRemovalAdapter removeUnlockableLensWithId:callbackPerformer:successBlock:failureBlock:] */

void FUN_1055e131c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(uVar3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf5fd80(uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar2 = param_4;
  func_0x00010c0b4ca0(param_4);
  _objc_release(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1055e14d4;
  puStack_88 = &UNK_11089de68;
  _objc_retain(uVar4);
  uStack_80 = uVar4;
  _objc_retain(uVar3);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x1055e1540;
  puStack_c8 = &UNK_11089de38;
  uStack_c0 = uVar4;
  uStack_b8 = uVar3;
  uStack_b0 = param_7;
  uStack_a8 = param_1;
  uStack_78 = uVar3;
  uStack_70 = param_6;
  uStack_68 = param_1;
  _objc_retain(param_7);
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  _objc_retain(param_6);
  func_0x00010c12ee40(uVar5,param_3,uVar2,&PTR__OBJC_CLASS___NSConstantArray_11117ee50,param_5,
                      &puStack_a0,&puStack_e0);
  _objc_release(param_5);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 1055e14d4; end: 1055e15bb;  */

void FUN_1055e14d4(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x28));
  func_0x00010c133a40(param_1 - *(double *)(param_2 + 0x38),uVar1);
  lVar2 = *(long *)(param_2 + 0x30);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055e152c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,param_3);
    return;
  }
  return;
}



/* Entry: 1055e15bc; end: 1055e15f7; -[SCUnlockableRemoteRemovalAdapter .cxx_destruct] */

void FUN_1055e15bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055e15f8; end: 1055e166b; -[SCUnlockableUnlockAdapter initWithUnlockableNetworkAPI:] */

undefined1 * FUN_1055e15f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9420;
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



/* Entry: 1055e166c; end: 1055e182b; -[SCUnlockableUnlockAdapter unlockUnlockableWithId:unlockProperties:callbackPerformer:successBlock:failureBlock:] */

void FUN_1055e166c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110def0d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110def0f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126bbee0;
  _objc_alloc(PTR_PTR_1126bbee0);
  func_0x00010c024fa0();
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = param_3;
  func_0x00010c0b4ca0(param_3);
  _objc_release(param_3);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1055e182c;
  puStack_70 = &UNK_11089de98;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1055e1840;
  puStack_98 = &UNK_11089dec8;
  uStack_90 = param_7;
  uStack_68 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010befc720(uVar5,param_2,uVar4,0,puVar3,uVar1,uVar2,0,param_5,&puStack_88,&puStack_b0);
  _objc_release(param_5);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1055e182c; end: 1055e1857;  */

void FUN_1055e182c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055e1838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1055e1858; end: 1055e185f; -[SCUnlockableUnlockAdapter unlockableNetworkAPI] */

undefined8 FUN_1055e1858(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1055e1860; end: 1055e188f; -[SCUnlockableUnlockAdapter setUnlockableNetworkAPI:] */

void FUN_1055e1860(long param_1,undefined8 param_2,undefined8 param_3)

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


