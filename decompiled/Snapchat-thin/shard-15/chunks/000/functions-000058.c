/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7dc568; end: 10b7dc573;  */

bool FUN_10b7dc568(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7dc574; end: 10b7dc5ef;  */

undefined * FUN_10b7dc574(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa128 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84b78,
                        &UNK_10e5dce20,&UNK_10e5dce40,3,FUN_10b7dc5f0,0);
    do {
      if (puRam00000001137fa128 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa128;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa128,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa128 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa128;
}



/* Entry: 10b7dc5f0; end: 10b7dc5fb;  */

bool FUN_10b7dc5f0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7dc5fc; end: 10b7dc667; +[SCAdsAdRequest descriptor] */

void FUN_10b7dc5fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa130 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd54a0,
                        &PTR____CFConstantStringClassReference_110f84b98,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_s_user_1133e4a58,0x13,0x98
                        ,0x1c);
    puRam00000001137fa130 = puVar1;
  }
  return;
}



/* Entry: 10b7dc668; end: 10b7dc6cf; +[SCAdsViewReceiptsV2 descriptor] */

void FUN_10b7dc668(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa138 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd54f0,
                        &PTR____CFConstantStringClassReference_110f84bb8,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e3c78,1,0x10,0x1c)
    ;
    puRam00000001137fa138 = puVar1;
  }
  return;
}



/* Entry: 10b7dc6d0; end: 10b7dc737; +[SCAdsViewReceiptV2 descriptor] */

void FUN_10b7dc6d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa140 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5540,
                        &PTR____CFConstantStringClassReference_110f84bd8,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e3c98,2,0x18,0x1c)
    ;
    puRam00000001137fa140 = puVar1;
  }
  return;
}



/* Entry: 10b7dc738; end: 10b7dc79f; +[SCAdsThirdPartyAdNetworkInfo descriptor] */

void FUN_10b7dc738(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa148 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5590,
                        &PTR____CFConstantStringClassReference_110f84bf8,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e3d98,3,0x18,0x1c)
    ;
    puRam00000001137fa148 = puVar1;
  }
  return;
}



/* Entry: 10b7dc7a0; end: 10b7dc807; +[SCAdsLocation descriptor] */

void FUN_10b7dc7a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa150 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd55e0,
                        &PTR____CFConstantStringClassReference_110df2f78,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_s_latitude_1133e3eb8,4,
                        0x28,0x1c);
    puRam00000001137fa150 = puVar1;
  }
  return;
}



/* Entry: 10b7dc808; end: 10b7dc86f; +[SCAdsUserData descriptor] */

void FUN_10b7dc808(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa158 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5630,
                        &PTR____CFConstantStringClassReference_110e332f8,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e4858,0x10,0x58,
                        0x1c);
    puRam00000001137fa158 = puVar1;
  }
  return;
}



/* Entry: 10b7dc870; end: 10b7dc8d7; +[SCAdsDspInfo descriptor] */

void FUN_10b7dc870(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa160 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5680,
                        &PTR____CFConstantStringClassReference_110f84c18,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e3f38,4,0x18,0x1c)
    ;
    puRam00000001137fa160 = puVar1;
  }
  return;
}



/* Entry: 10b7dc8d8; end: 10b7dc963; +[SCAdsUser descriptor] */

undefined * FUN_10b7dc8d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa168 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd56d0,
                        &PTR____CFConstantStringClassReference_110df7698,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e43f8,7,0x38,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001137fa168 = puVar1;
  }
  return puRam00000001137fa168;
}



/* Entry: 10b7dc964; end: 10b7dc9cb; +[SCAdsApplication descriptor] */

void FUN_10b7dc964(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa170 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5720,
                        &PTR____CFConstantStringClassReference_110f84c38,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_s_appName_1133e46f8,0xb,
                        0x48,0x1c);
    puRam00000001137fa170 = puVar1;
  }
  return;
}



/* Entry: 10b7dc9cc; end: 10b7dca33; +[SCAdsAdKitApplication descriptor] */

void FUN_10b7dc9cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa178 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5770,
                        &PTR____CFConstantStringClassReference_110f84c58,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e3df8,3,0x20,0x1c)
    ;
    puRam00000001137fa178 = puVar1;
  }
  return;
}



/* Entry: 10b7dca34; end: 10b7dca9b; +[SCAdsPreferences descriptor] */

void FUN_10b7dca34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa180 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd57c0,
                        &PTR____CFConstantStringClassReference_110e7a598,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e40b8,5,4,0x1c);
    puRam00000001137fa180 = puVar1;
  }
  return;
}



/* Entry: 10b7dca9c; end: 10b7dcb07; +[SCAdsDevice descriptor] */

void FUN_10b7dca9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa188 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5810,
                        &PTR____CFConstantStringClassReference_110e00438,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e4cb8,0x18,0xb0,
                        0x1c);
    puRam00000001137fa188 = puVar1;
  }
  return;
}



/* Entry: 10b7dcb08; end: 10b7dcb83; +[SCAdsNetwork descriptor] */

undefined * FUN_10b7dcb08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa190 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5860,
                        &PTR____CFConstantStringClassReference_110f84c78,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e4338,6,0x30,0x1c)
    ;
    func_0x00010c2289e0();
    puRam00000001137fa190 = puVar1;
  }
  return puRam00000001137fa190;
}



/* Entry: 10b7dcb84; end: 10b7dcbeb; +[SCAdsDebugConfig descriptor] */

void FUN_10b7dcb84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa198 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd58b0,
                        &PTR____CFConstantStringClassReference_110f3d418,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e3fb8,4,0x10,0x1c)
    ;
    puRam00000001137fa198 = puVar1;
  }
  return;
}



/* Entry: 10b7dcbec; end: 10b7dcc53; +[SCAdsClientRankingAb descriptor] */

void FUN_10b7dcbec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa1a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5900,
                        &PTR____CFConstantStringClassReference_110f84c98,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e4158,5,0x28,0x1c)
    ;
    puRam00000001137fa1a0 = puVar1;
  }
  return;
}



/* Entry: 10b7dcc54; end: 10b7dccd3; +[SCAdsABTest descriptor] */

undefined * FUN_10b7dcc54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa1a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5950,
                        &PTR____CFConstantStringClassReference_110f84cb8,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e4fb8,0x32,0xc0,
                        0x1c);
    func_0x00010c2289e0();
    puRam00000001137fa1a8 = puVar1;
  }
  return puRam00000001137fa1a8;
}



/* Entry: 10b7dccd4; end: 10b7dcd3b; +[SCAdsFeatureEngineConfig descriptor] */

void FUN_10b7dccd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa1b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd59a0,
                        &PTR____CFConstantStringClassReference_110f84cd8,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e3cd8,2,0x18,0x1c)
    ;
    puRam00000001137fa1b0 = puVar1;
  }
  return;
}



/* Entry: 10b7dcd3c; end: 10b7dcda3; +[SCAdsAbConsoleStudyTreatmentData descriptor] */

void FUN_10b7dcd3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa1b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd59f0,
                        &PTR____CFConstantStringClassReference_110f84cf8,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e41f8,5,0x20,0x1c)
    ;
    puRam00000001137fa1b8 = puVar1;
  }
  return;
}



/* Entry: 10b7dcda4; end: 10b7dce0b; +[SCAdsSubsBrandSafety descriptor] */

void FUN_10b7dcda4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa1c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5a40,
                        &PTR____CFConstantStringClassReference_110f84d18,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_s_mode_1133e3d18,2,8,0x1c)
    ;
    puRam00000001137fa1c0 = puVar1;
  }
  return;
}



/* Entry: 10b7dce0c; end: 10b7dce73; +[SCAdsMixerInfo descriptor] */

void FUN_10b7dce0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa1c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5a90,
                        &PTR____CFConstantStringClassReference_110f84d38,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e4298,5,0x20,0x1c)
    ;
    puRam00000001137fa1c8 = puVar1;
  }
  return;
}



/* Entry: 10b7dce74; end: 10b7dcedb; +[SCAdsStoryItem descriptor] */

void FUN_10b7dce74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa1d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5ae0,
                        &PTR____CFConstantStringClassReference_110ec8bf8,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e45b8,10,0x30,0x1c
                       );
    puRam00000001137fa1d0 = puVar1;
  }
  return;
}



/* Entry: 10b7dcedc; end: 10b7dcfcf; +[SCAdsStoryItem_SccTagWeightPair descriptor] */

undefined * FUN_10b7dcedc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa1d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5b30,
                        &PTR____CFConstantStringClassReference_110f84d58,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e3d58,2,0xc,0x1c);
    func_0x00010c228780();
    puRam00000001137fa1d8 = puVar1;
  }
  return puRam00000001137fa1d8;
}



/* Entry: 10b7dcfd0; end: 10b7dd037; +[SCAdsDiscoverPage descriptor] */

void FUN_10b7dcfd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa1e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5c20,
                        &PTR____CFConstantStringClassReference_110f84d78,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e3e58,3,0x20,0x1c)
    ;
    puRam00000001137fa1e0 = puVar1;
  }
  return;
}



/* Entry: 10b7dd038; end: 10b7dd0bb; +[SCAdsDiscoverPage_FeedStyle descriptor] */

undefined * FUN_10b7dd038(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa1e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5c48,
                        &PTR____CFConstantStringClassReference_110f84d98,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,0,0,4,0x1c);
    func_0x00010c228780();
    puRam00000001137fa1e8 = puVar1;
  }
  return puRam00000001137fa1e8;
}



/* Entry: 10b7dd0bc; end: 10b7dd13f; +[SCAdsDiscoverPage_Feed descriptor] */

undefined * FUN_10b7dd0bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa1f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5c70,
                        &PTR____CFConstantStringClassReference_110dab1b8,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e44d8,7,0x28,0x1c)
    ;
    func_0x00010c228780();
    puRam00000001137fa1f0 = puVar1;
  }
  return puRam00000001137fa1f0;
}



/* Entry: 10b7dd140; end: 10b7dd237; +[SCAdsAdRenderDataProperty descriptor] */

void FUN_10b7dd140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa1f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5bf8,
                        &PTR____CFConstantStringClassReference_110f84db8,
                        &PTR_s_snapchat_ads_request_schema_1133e3c60,&PTR_DAT_1133e4038,4,0x10,0x1c)
    ;
    puRam00000001137fa1f8 = puVar1;
  }
  return;
}



/* Entry: 10b7dd238; end: 10b7dd243;  */

bool FUN_10b7dd238(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b7dd244; end: 10b7dd2bf;  */

undefined * FUN_10b7dd244(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa208 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84df8,
                        &UNK_10e5dcf10,&UNK_10e5dcf3c,4,FUN_10b7dd2c0,0);
    do {
      if (puRam00000001137fa208 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa208;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa208,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa208 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa208;
}



/* Entry: 10b7dd2c0; end: 10b7dd2cb;  */

bool FUN_10b7dd2c0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7dd2cc; end: 10b7dd347;  */

undefined * FUN_10b7dd2cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa210 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84e18,
                        &UNK_10e5dcf4c,&UNK_10e5dcf74,4,FUN_10b7dd348,0);
    do {
      if (puRam00000001137fa210 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa210;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa210,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa210 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa210;
}



/* Entry: 10b7dd348; end: 10b7dd353;  */

bool FUN_10b7dd348(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7dd354; end: 10b7dd3cf;  */

undefined * FUN_10b7dd354(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa218 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84e38,
                        &UNK_10e5dcf84,&UNK_10e5dcfa4,3,FUN_10b7dd3d0,0);
    do {
      if (puRam00000001137fa218 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa218;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa218,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa218 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa218;
}



/* Entry: 10b7dd3d0; end: 10b7dd3db;  */

bool FUN_10b7dd3d0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7dd3dc; end: 10b7dd457;  */

undefined * FUN_10b7dd3dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa220 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84e58,
                        &UNK_10e5dcfb0,&UNK_10e5dd000,6,FUN_10b7dd458,0);
    do {
      if (puRam00000001137fa220 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa220;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa220,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa220 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa220;
}



/* Entry: 10b7dd458; end: 10b7dd463;  */

bool FUN_10b7dd458(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b7dd464; end: 10b7dd4df;  */

undefined * FUN_10b7dd464(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa228 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f84e78,
                        &UNK_10e5dd018,&UNK_10e5dd03c,4,FUN_10b7dd4e0,0);
    do {
      if (puRam00000001137fa228 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa228;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa228,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa228 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa228;
}



/* Entry: 10b7dd4e0; end: 10b7dd4eb;  */

bool FUN_10b7dd4e0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7dd4ec; end: 10b7dd5cf; +[SCAdsGender descriptor] */

void FUN_10b7dd4ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa230 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5ea0,
                        &PTR____CFConstantStringClassReference_110f36df8,
                        &PTR_s_snapchat_ads_request_schema_1133e55f8,0,0,4,0x1c);
    puRam00000001137fa230 = puVar1;
  }
  return;
}



/* Entry: 10b7dd5d0; end: 10b7dd5db;  */

bool FUN_10b7dd5d0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7dd5dc; end: 10b7dd643; +[SCAdsAdRankingContext descriptor] */

void FUN_10b7dd5dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa240 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5f90,
                        &PTR____CFConstantStringClassReference_110f84eb8,
                        &PTR_s_snapchat_ads_request_schema_1133e5610,&PTR_DAT_1133e5948,0xc,0x60,
                        0x1c);
    puRam00000001137fa240 = puVar1;
  }
  return;
}



/* Entry: 10b7dd644; end: 10b7dd6ab; +[SCAdsViewSessionContext descriptor] */

void FUN_10b7dd644(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa248 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd5fe0,
                        &PTR____CFConstantStringClassReference_110f84ed8,
                        &PTR_s_snapchat_ads_request_schema_1133e5610,&PTR_DAT_1133e5f48,0x22,0x110,
                        0x1c);
    puRam00000001137fa248 = puVar1;
  }
  return;
}



/* Entry: 10b7dd6ac; end: 10b7dd713; +[SCAdsSessionDepth descriptor] */

void FUN_10b7dd6ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa250 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6030,
                        &PTR____CFConstantStringClassReference_110f84ef8,
                        &PTR_s_snapchat_ads_request_schema_1133e5610,&PTR_DAT_1133e56a8,4,0x28,0x1c)
    ;
    puRam00000001137fa250 = puVar1;
  }
  return;
}



/* Entry: 10b7dd714; end: 10b7dd77b; +[SCAdsSnapLevelInfo descriptor] */

void FUN_10b7dd714(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa258 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6080,
                        &PTR____CFConstantStringClassReference_110f84f18,
                        &PTR_s_snapchat_ads_request_schema_1133e5610,&PTR_s_snapId_1133e5ca8,0x15,
                        0x88,0x1c);
    puRam00000001137fa258 = puVar1;
  }
  return;
}



/* Entry: 10b7dd77c; end: 10b7dd7e3; +[SCAdsConsumptionSpeed descriptor] */

void FUN_10b7dd77c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa260 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd60d0,
                        &PTR____CFConstantStringClassReference_110f84f38,
                        &PTR_s_snapchat_ads_request_schema_1133e5610,&PTR_DAT_1133e5ac8,0xf,0x78,
                        0x1c);
    puRam00000001137fa260 = puVar1;
  }
  return;
}



/* Entry: 10b7dd7e4; end: 10b7dd84b; +[SCAdsViewedAdContext descriptor] */

void FUN_10b7dd7e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa268 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6120,
                        &PTR____CFConstantStringClassReference_110f84f58,
                        &PTR_s_snapchat_ads_request_schema_1133e5610,&PTR_DAT_1133e5728,4,0x20,0x1c)
    ;
    puRam00000001137fa268 = puVar1;
  }
  return;
}



/* Entry: 10b7dd84c; end: 10b7dd8b3; +[SCAdsStoryLevelInfo descriptor] */

void FUN_10b7dd84c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa270 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6170,
                        &PTR____CFConstantStringClassReference_110f84f78,
                        &PTR_s_snapchat_ads_request_schema_1133e5610,&PTR_s_storyId_1133e5828,9,0x48
                        ,0x1c);
    puRam00000001137fa270 = puVar1;
  }
  return;
}



/* Entry: 10b7dd8b4; end: 10b7dd91b; +[SCAdsNotFullyViewedStoryContext descriptor] */

void FUN_10b7dd8b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa278 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd61c0,
                        &PTR____CFConstantStringClassReference_110f84f98,
                        &PTR_s_snapchat_ads_request_schema_1133e5610,&PTR_DAT_1133e57a8,4,0x20,0x1c)
    ;
    puRam00000001137fa278 = puVar1;
  }
  return;
}



/* Entry: 10b7dd91c; end: 10b7dd983; +[SCAdsNotFullyViewedSnapContext descriptor] */

void FUN_10b7dd91c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa280 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6210,
                        &PTR____CFConstantStringClassReference_110f84fb8,
                        &PTR_s_snapchat_ads_request_schema_1133e5610,&PTR_s_snapId_1133e5628,2,0x18,
                        0x1c);
    puRam00000001137fa280 = puVar1;
  }
  return;
}



/* Entry: 10b7dd984; end: 10b7dd9eb; +[SCAdsStoryTypeInfo descriptor] */

void FUN_10b7dd984(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa288 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6260,
                        &PTR____CFConstantStringClassReference_110f84fd8,
                        &PTR_s_snapchat_ads_request_schema_1133e5610,&PTR_DAT_1133e5668,2,0x10,0x1c)
    ;
    puRam00000001137fa288 = puVar1;
  }
  return;
}



/* Entry: 10b7dd9ec; end: 10b7dda53; +[SCAdsFeatureContext descriptor] */

void FUN_10b7dd9ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa290 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6300,
                        &PTR____CFConstantStringClassReference_110f84ff8,
                        &PTR_s_snapchat_ads_request_schema_1133e6388,&PTR_DAT_1133e63a0,2,0x18,0x1c)
    ;
    puRam00000001137fa290 = puVar1;
  }
  return;
}



/* Entry: 10b7dda54; end: 10b7ddabb; +[SCAdsClientMajorAbTest descriptor] */

void FUN_10b7dda54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa298 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6350,
                        &PTR____CFConstantStringClassReference_110f85018,
                        &PTR_s_snapchat_ads_request_schema_1133e6388,&PTR_DAT_1133e63e0,2,0x18,0x1c)
    ;
    puRam00000001137fa298 = puVar1;
  }
  return;
}



/* Entry: 10b7ddabc; end: 10b7ddb37; +[SCAdsInitResponse descriptor] */

undefined * FUN_10b7ddabc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa2a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd63f0,
                        &PTR____CFConstantStringClassReference_110f85038,
                        &PTR_s_snapchat_ads_request_schema_1133e6420,&PTR_s_sessionId_1133e6658,0x18
                        ,0xb0,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fa2a0 = puVar1;
  }
  return puRam00000001137fa2a0;
}



/* Entry: 10b7ddb38; end: 10b7ddbb3; +[SCAdsOnDeviceResponse descriptor] */

undefined * FUN_10b7ddb38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa2a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6440,
                        &PTR____CFConstantStringClassReference_110f85058,
                        &PTR_s_snapchat_ads_request_schema_1133e6420,&PTR_DAT_1133e6538,9,0x38,0x1c)
    ;
    func_0x00010c2289e0();
    puRam00000001137fa2a8 = puVar1;
  }
  return puRam00000001137fa2a8;
}



/* Entry: 10b7ddbb4; end: 10b7ddc1b; +[SCAdsOnDeviceAnonymizedId descriptor] */

void FUN_10b7ddbb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa2b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6490,
                        &PTR____CFConstantStringClassReference_110f85078,
                        &PTR_s_snapchat_ads_request_schema_1133e6420,&PTR_DAT_1133e6458,3,0x20,0x1c)
    ;
    puRam00000001137fa2b0 = puVar1;
  }
  return;
}



/* Entry: 10b7ddc1c; end: 10b7ddc83; +[SCAdsOnDeviceInventoryConfigs descriptor] */

void FUN_10b7ddc1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa2b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd64e0,
                        &PTR____CFConstantStringClassReference_110f85098,
                        &PTR_s_snapchat_ads_request_schema_1133e6420,&PTR_DAT_1133e6438,1,0x10,0x1c)
    ;
    puRam00000001137fa2b8 = puVar1;
  }
  return;
}



/* Entry: 10b7ddc84; end: 10b7ddd7b; +[SCAdsOnDeviceInventoryConfig descriptor] */

undefined * FUN_10b7ddc84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa2c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6530,
                        &PTR____CFConstantStringClassReference_110f850b8,
                        &PTR_s_snapchat_ads_request_schema_1133e6420,&PTR_DAT_1133e64b8,4,0xc,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fa2c0 = puVar1;
  }
  return puRam00000001137fa2c0;
}



/* Entry: 10b7ddd7c; end: 10b7ddd87;  */

bool FUN_10b7ddd7c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7ddd88; end: 10b7dddef; +[SCAdsLensRankingContext descriptor] */

void FUN_10b7ddd88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa2d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd65d0,
                        &PTR____CFConstantStringClassReference_110f850f8,
                        &PTR_s_snapchat_ads_request_schema_1133e6958,&PTR_DAT_1133e6970,3,0x18,0x1c)
    ;
    puRam00000001137fa2d0 = puVar1;
  }
  return;
}



/* Entry: 10b7dddf0; end: 10b7dded3; +[SCAdsLensViewSessionContext descriptor] */

void FUN_10b7dddf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa2d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6620,
                        &PTR____CFConstantStringClassReference_110f85118,
                        &PTR_s_snapchat_ads_request_schema_1133e6958,&PTR_DAT_1133e69d0,0xe,0x78,
                        0x1c);
    puRam00000001137fa2d8 = puVar1;
  }
  return;
}



/* Entry: 10b7dded4; end: 10b7ddedf;  */

bool FUN_10b7dded4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7ddee0; end: 10b7ddfc3; +[SCLensRankingContextualInfo descriptor] */

void FUN_10b7ddee0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa2e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd66c0,
                        &PTR____CFConstantStringClassReference_110f85158,&PTR_DAT_1133e6b90,
                        &PTR_DAT_1133e6ba8,9,0x40,0x1c);
    puRam00000001137fa2e8 = puVar1;
  }
  return;
}



/* Entry: 10b7ddfc4; end: 10b7ddfcf;  */

bool FUN_10b7ddfc4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7ddfd0; end: 10b7de04b;  */

undefined * FUN_10b7ddfd0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa2f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85198,
                        &UNK_10e5dd154,&UNK_10e5dd18c,7,FUN_10b7de04c,0);
    do {
      if (puRam00000001137fa2f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa2f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa2f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa2f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa2f8;
}



/* Entry: 10b7de04c; end: 10b7de057;  */

bool FUN_10b7de04c(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b7de058; end: 10b7de0bf; +[SCLensRankingPredictedContext descriptor] */

void FUN_10b7de058(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa300 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd67b0,
                        &PTR____CFConstantStringClassReference_110f851b8,&PTR_DAT_1133e6cc8,
                        &PTR_DAT_1133e6ce0,1,0x10,0x1c);
    puRam00000001137fa300 = puVar1;
  }
  return;
}



/* Entry: 10b7de0c0; end: 10b7de1b7; +[SCLensRankingPredictedContext_VisualObjectTag descriptor] */

undefined * FUN_10b7de0c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa308 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6800,
                        &PTR____CFConstantStringClassReference_110f851d8,&PTR_DAT_1133e6cc8,
                        &PTR_s_label_1133e6d00,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137fa308 = puVar1;
  }
  return puRam00000001137fa308;
}



/* Entry: 10b7de1b8; end: 10b7de1c3;  */

bool FUN_10b7de1b8(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b7de1c4; end: 10b7de2bb; +[SCAdsPredictionStudy descriptor] */

void FUN_10b7de1c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa318 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd68f0,
                        &PTR____CFConstantStringClassReference_110f85218,
                        &PTR_s_snapchat_ads_request_schema_1133e6d60,&PTR_DAT_1133e6d78,3,0x20,0x1c)
    ;
    puRam00000001137fa318 = puVar1;
  }
  return;
}



/* Entry: 10b7de2bc; end: 10b7de2c7;  */

bool FUN_10b7de2bc(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 10b7de2c8; end: 10b7de32f; +[SCAdsBudgetAbStudy descriptor] */

void FUN_10b7de2c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa328 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6990,
                        &PTR____CFConstantStringClassReference_110f85258,
                        &PTR_s_snapchat_ads_request_schema_1133e6dd8,&PTR_DAT_1133e6df0,3,0x18,0x1c)
    ;
    puRam00000001137fa328 = puVar1;
  }
  return;
}



/* Entry: 10b7de330; end: 10b7de397; +[SCAdsClientRankingStudy descriptor] */

void FUN_10b7de330(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa330 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6a30,
                        &PTR____CFConstantStringClassReference_110f85278,
                        &PTR_s_snapchat_ads_request_schema_1133e6e50,&PTR_s_modelId_1133e6e68,6,0x20
                        ,0x1c);
    puRam00000001137fa330 = puVar1;
  }
  return;
}



/* Entry: 10b7de398; end: 10b7de48f; +[SCAdsWebviewPrefetchStudy descriptor] */

void FUN_10b7de398(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa338 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6ad0,
                        &PTR____CFConstantStringClassReference_110f85298,
                        &PTR_s_snapchat_ads_request_schema_1133e6f28,&PTR_DAT_1133e6f40,5,0x20,0x1c)
    ;
    puRam00000001137fa338 = puVar1;
  }
  return;
}



/* Entry: 10b7de490; end: 10b7de837;  */

undefined8 FUN_10b7de490(uint param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = 1;
  if ((int)param_1 < 2000) {
    if ((int)param_1 < 900) {
      if (699 < (int)param_1) {
        if (param_1 - 700 < 0x1b) {
          return uVar1;
        }
        if (param_1 - 800 < 7) {
          return uVar1;
        }
        return 0;
      }
      if ((int)param_1 < 400) {
        if ((int)param_1 < 200) {
          if (param_1 - 100 < 6) {
            return uVar1;
          }
          if (param_1 < 4) {
            return uVar1;
          }
          return 0;
        }
        if (param_1 - 200 < 9) {
          return uVar1;
        }
        param_1 = param_1 - 300;
        goto LAB_10b7de718;
      }
      if (param_1 - 600 < 0x11) {
        return uVar1;
      }
      if (param_1 - 400 < 6) {
        return uVar1;
      }
      param_1 = param_1 - 500;
    }
    else {
      if (0x577 < (int)param_1) {
        if (0x6a3 < (int)param_1) {
          if (param_1 - 0x708 < 0x11) {
            return uVar1;
          }
          if (param_1 - 0x76c < 9) {
            return uVar1;
          }
          if (param_1 == 0x6a4) {
            return uVar1;
          }
          return 0;
        }
        if (param_1 - 0x578 < 8) {
          return uVar1;
        }
        if (param_1 - 0x5dc < 7) {
          return uVar1;
        }
        param_1 = param_1 - 0x640;
LAB_10b7de718:
        if (param_1 < 3) {
          return uVar1;
        }
        return 0;
      }
      if ((int)param_1 < 0x44c) {
        if (param_1 - 1000 < 0xd) {
          return uVar1;
        }
        if (param_1 - 900 < 0xc) {
          return uVar1;
        }
        return 0;
      }
      if (param_1 - 0x514 < 9) {
        return uVar1;
      }
      if (param_1 - 0x4b0 < 6) {
        return uVar1;
      }
      param_1 = param_1 - 0x44c;
    }
  }
  else {
    if (0xa8b < (int)param_1) {
      if ((int)param_1 < 21000) {
        if ((int)param_1 < 0xce4) {
          if ((int)param_1 < 3000) {
            if (param_1 - 0xb54 < 7) {
              return uVar1;
            }
            if (param_1 - 0xa8c < 6) {
              return uVar1;
            }
            if (param_1 == 0xaf0) {
              return uVar1;
            }
            return 0;
          }
          if (param_1 == 3000) {
            return uVar1;
          }
          if (param_1 != 0xc1c) {
            if (param_1 != 0xc80) {
              return 0;
            }
            return uVar1;
          }
          return uVar1;
        }
        if ((int)param_1 < 0x4f4d) {
          if (param_1 - 4000 < 7) {
            return uVar1;
          }
          if ((param_1 - 0xce4 < 7) && (param_1 - 0xce4 != 5)) {
            return uVar1;
          }
          uVar2 = 5000;
        }
        else if ((int)param_1 < 0x50de) {
          if ((param_1 - 0x4f4d < 4) && (param_1 - 0x4f4d != 1)) {
            return uVar1;
          }
          uVar2 = 0x4fb1;
        }
        else {
          if (param_1 - 0x51a5 < 2) {
            return uVar1;
          }
          uVar2 = 0x50de;
        }
      }
      else {
        if (0x5b07 < (int)param_1) {
          if ((param_1 - 0x5b08 < 0xb) && ((1 << (ulong)(param_1 - 0x5b08 & 0x1f) & 0x7e3U) != 0)) {
            return uVar1;
          }
          if ((param_1 - 0x620c < 10) && ((1 << (ulong)(param_1 - 0x620c & 0x1f) & 0x387U) != 0)) {
            return uVar1;
          }
          param_1 = param_1 - 0x6270;
          goto LAB_10b7de718;
        }
        if ((int)param_1 < 0x55f1) {
          if (0x5397 < (int)param_1) {
            if (param_1 - 0x5529 < 3) {
              return uVar1;
            }
            if (param_1 - 0x5398 < 2) {
              return uVar1;
            }
            return 0;
          }
          if ((param_1 - 21000 < 9) && ((1 << (ulong)(param_1 - 21000 & 0x1f) & 0x1e1U) != 0)) {
            return uVar1;
          }
          uVar2 = 0x5337;
        }
        else {
          if (0x59d9 < (int)param_1) {
            if (3 < param_1 - 0x59da) {
              return 0;
            }
            if (param_1 - 0x59da != 1) {
              return uVar1;
            }
            return 0;
          }
          if (param_1 - 0x584b < 3) {
            return uVar1;
          }
          if (param_1 == 0x55f1) {
            return uVar1;
          }
          uVar2 = 0x57e5;
        }
      }
      if (param_1 == uVar2) {
        return uVar1;
      }
      return 0;
    }
    if (0x95f < (int)param_1) {
      if (param_1 - 0xa28 < 0x20) {
        return uVar1;
      }
      if (param_1 - 0x9c4 < 9) {
        return uVar1;
      }
      if (param_1 - 0x960 < 8) {
        return uVar1;
      }
      return 0;
    }
    if (0x8fb < (int)param_1) {
      if (param_1 - 0x8fc < 0x18) {
        return uVar1;
      }
      return 0;
    }
    if (param_1 - 2000 < 7) {
      return uVar1;
    }
    if (param_1 - 0x898 < 7) {
      return uVar1;
    }
    param_1 = param_1 - 0x834;
  }
  if (param_1 < 5) {
    return uVar1;
  }
  return 0;
}



/* Entry: 10b7de838; end: 10b7de8b3;  */

undefined * FUN_10b7de838(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa348 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f852d8,
                        &UNK_10e5de898,&UNK_10e5de8a4,3,FUN_10b7de8b4,0);
    do {
      if (puRam00000001137fa348 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa348;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa348,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa348 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa348;
}



/* Entry: 10b7de8b4; end: 10b7de8bf;  */

bool FUN_10b7de8b4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7de8c0; end: 10b7de94f;  */

undefined * FUN_10b7de8c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa350 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f852f8,
                        &UNK_10e5de8b0,&UNK_10e5dea64,0x20,FUN_10b7de950,0,&UNK_10e5deae4);
    do {
      if (puRam00000001137fa350 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa350;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa350,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa350 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa350;
}



/* Entry: 10b7de950; end: 10b7de95b;  */

bool FUN_10b7de950(uint param_1)

{
  return param_1 < 0x20;
}



/* Entry: 10b7de95c; end: 10b7de9eb;  */

undefined * FUN_10b7de95c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa358 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85318,
                        &UNK_10e5deaf8,&UNK_10e5deb28,5,FUN_10b7de9ec,0,&UNK_10e5deb3c);
    do {
      if (puRam00000001137fa358 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa358;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa358,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa358 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa358;
}



/* Entry: 10b7de9ec; end: 10b7de9f7;  */

bool FUN_10b7de9ec(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7de9f8; end: 10b7dea5f; +[PremiumContent descriptor] */

void FUN_10b7de9f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa360 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6c10,
                        &PTR____CFConstantStringClassReference_110f85338,&PTR_DAT_1133e6fe0,
                        &PTR_DAT_1133e7018,2,0x18,0x1c);
    puRam00000001137fa360 = puVar1;
  }
  return;
}



/* Entry: 10b7dea60; end: 10b7deac7; +[Regulations descriptor] */

void FUN_10b7dea60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa368 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6c60,
                        &PTR____CFConstantStringClassReference_110f85358,&PTR_DAT_1133e6fe0,
                        &PTR_DAT_1133e6ff8,1,4,0x1c);
    puRam00000001137fa368 = puVar1;
  }
  return;
}



/* Entry: 10b7deac8; end: 10b7debbf; +[SCAdsClientCrawlAttempt descriptor] */

undefined * FUN_10b7deac8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa370 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6d00,
                        &PTR____CFConstantStringClassReference_110f85378,
                        &PTR_s_snapchat_ads_request_schema_1133e7058,&PTR_DAT_1133e7070,2,0x18,0x1c)
    ;
    func_0x00010c2289e0();
    puRam00000001137fa370 = puVar1;
  }
  return puRam00000001137fa370;
}



/* Entry: 10b7debc0; end: 10b7debcb;  */

bool FUN_10b7debc0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7debcc; end: 10b7dec47;  */

undefined * FUN_10b7debcc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa380 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f853b8,
                        &UNK_10e5debec,&UNK_10e5debf8,2,FUN_10b7dec48,0);
    do {
      if (puRam00000001137fa380 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa380;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa380,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa380 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa380;
}



/* Entry: 10b7dec48; end: 10b7dec53;  */

bool FUN_10b7dec48(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7dec54; end: 10b7decbb; +[SCAdsResponseDataType descriptor] */

void FUN_10b7dec54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa388 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6da0,
                        &PTR____CFConstantStringClassReference_110f853d8,
                        &PTR_s_snapchat_ads_request_schema_1133e70b8,0,0,4,0x1c);
    puRam00000001137fa388 = puVar1;
  }
  return;
}



/* Entry: 10b7decbc; end: 10b7ded23; +[SCAdsDiscoverChannelMetadata descriptor] */

void FUN_10b7decbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa390 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6df0,
                        &PTR____CFConstantStringClassReference_110f4fff8,
                        &PTR_s_snapchat_ads_request_schema_1133e70b8,&PTR_DAT_1133e7570,8,0x48,0x1c)
    ;
    puRam00000001137fa390 = puVar1;
  }
  return;
}



/* Entry: 10b7ded24; end: 10b7ded8b; +[SCAdsBrandSafetyInventoryMetadataV2 descriptor] */

void FUN_10b7ded24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa398 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6e40,
                        &PTR____CFConstantStringClassReference_110f853f8,
                        &PTR_s_snapchat_ads_request_schema_1133e70b8,&PTR_DAT_1133e7370,5,0x18,0x1c)
    ;
    puRam00000001137fa398 = puVar1;
  }
  return;
}



/* Entry: 10b7ded8c; end: 10b7dedf3; +[SCAdsBrandSafetyInventoryMetadata descriptor] */

void FUN_10b7ded8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa3a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6e90,
                        &PTR____CFConstantStringClassReference_110f85418,
                        &PTR_s_snapchat_ads_request_schema_1133e70b8,&PTR_DAT_1133e7230,3,0x10,0x1c)
    ;
    puRam00000001137fa3a0 = puVar1;
  }
  return;
}



/* Entry: 10b7dedf4; end: 10b7dee6f; +[SCAdsFeatureFlags descriptor] */

undefined * FUN_10b7dedf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa3a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6ee0,
                        &PTR____CFConstantStringClassReference_110f85438,
                        &PTR_s_snapchat_ads_request_schema_1133e70b8,&PTR_DAT_1133e7a70,0x29,0x88,
                        0x1c);
    func_0x00010c2289e0();
    puRam00000001137fa3a8 = puVar1;
  }
  return puRam00000001137fa3a8;
}



/* Entry: 10b7dee70; end: 10b7deed7; +[SCAdsRafFeatureOverride descriptor] */

void FUN_10b7dee70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa3b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6f30,
                        &PTR____CFConstantStringClassReference_110f85458,
                        &PTR_s_snapchat_ads_request_schema_1133e70b8,&PTR_DAT_1133e70f0,2,0x18,0x1c)
    ;
    puRam00000001137fa3b0 = puVar1;
  }
  return;
}



/* Entry: 10b7deed8; end: 10b7def3f; +[SCAdsAfeTreatmentOverride descriptor] */

void FUN_10b7deed8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa3b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6f80,
                        &PTR____CFConstantStringClassReference_110f85478,
                        &PTR_s_snapchat_ads_request_schema_1133e70b8,&PTR_DAT_1133e7130,2,0x18,0x1c)
    ;
    puRam00000001137fa3b8 = puVar1;
  }
  return;
}



/* Entry: 10b7def40; end: 10b7defa7; +[SCAdsF16nModuleLegSelectionOverride descriptor] */

void FUN_10b7def40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa3c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd6fd0,
                        &PTR____CFConstantStringClassReference_110f85498,
                        &PTR_s_snapchat_ads_request_schema_1133e70b8,&PTR_DAT_1133e7170,2,0x18,0x1c)
    ;
    puRam00000001137fa3c0 = puVar1;
  }
  return;
}



/* Entry: 10b7defa8; end: 10b7df00f; +[SCAdsPetraFeatureFlags descriptor] */

void FUN_10b7defa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa3c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7020,
                        &PTR____CFConstantStringClassReference_110f854b8,
                        &PTR_s_snapchat_ads_request_schema_1133e70b8,&PTR_DAT_1133e7290,3,0x20,0x1c)
    ;
    puRam00000001137fa3c8 = puVar1;
  }
  return;
}



/* Entry: 10b7df010; end: 10b7df09b; +[SCAdsInventoryRequest descriptor] */

undefined * FUN_10b7df010(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa3d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7070,
                        &PTR____CFConstantStringClassReference_110f854d8,
                        &PTR_s_snapchat_ads_request_schema_1133e70b8,&PTR_DAT_1133e7670,0x20,200,
                        0x1c);
    func_0x00010c229040();
    puRam00000001137fa3d0 = puVar1;
  }
  return puRam00000001137fa3d0;
}



/* Entry: 10b7df09c; end: 10b7df103; +[SCAdsInventoryRequestDebugFlags descriptor] */

void FUN_10b7df09c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa3d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd70c0,
                        &PTR____CFConstantStringClassReference_110f854f8,
                        &PTR_s_snapchat_ads_request_schema_1133e70b8,&PTR_DAT_1133e7410,5,0x20,0x1c)
    ;
    puRam00000001137fa3d8 = puVar1;
  }
  return;
}



/* Entry: 10b7df104; end: 10b7df16b; +[SCAdsDisplayedPreRollAdInfo descriptor] */

void FUN_10b7df104(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa3e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7110,
                        &PTR____CFConstantStringClassReference_110f85518,
                        &PTR_s_snapchat_ads_request_schema_1133e70b8,&PTR_DAT_1133e71b0,2,0x18,0x1c)
    ;
    puRam00000001137fa3e0 = puVar1;
  }
  return;
}


