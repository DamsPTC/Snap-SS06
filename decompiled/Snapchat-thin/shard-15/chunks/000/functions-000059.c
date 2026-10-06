/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7df16c; end: 10b7df1d3; +[SCAdsMapPromotedPlacesRequest descriptor] */

void FUN_10b7df16c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa3e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7200,
                        &PTR____CFConstantStringClassReference_110f85538,
                        &PTR_s_snapchat_ads_request_schema_1133e70b8,&PTR_s_mapSessionId_1133e74b0,6
                        ,0x28,0x1c);
    puRam00000001137fa3e8 = puVar1;
  }
  return;
}



/* Entry: 10b7df1d4; end: 10b7df257; +[SCAdsMapPromotedPlacesRequest_ViewportCenter descriptor] */

undefined * FUN_10b7df1d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa3f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7228,
                        &PTR____CFConstantStringClassReference_110f85558,
                        &PTR_s_snapchat_ads_request_schema_1133e70b8,&PTR_s_lat_1133e71f0,2,0x18,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137fa3f0 = puVar1;
  }
  return puRam00000001137fa3f0;
}



/* Entry: 10b7df258; end: 10b7df2db; +[SCAdsMapPromotedPlacesRequest_ExperimentSetup descriptor] */

undefined * FUN_10b7df258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa3f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7250,
                        &PTR____CFConstantStringClassReference_110f85578,
                        &PTR_s_snapchat_ads_request_schema_1133e70b8,&PTR_DAT_1133e70d0,1,4,0x1c);
    func_0x00010c228780();
    puRam00000001137fa3f8 = puVar1;
  }
  return puRam00000001137fa3f8;
}



/* Entry: 10b7df2dc; end: 10b7df343; +[SCAdsChatFeedRequest descriptor] */

void FUN_10b7df2dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa400 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd71d8,
                        &PTR____CFConstantStringClassReference_110f85598,
                        &PTR_s_snapchat_ads_request_schema_1133e70b8,&PTR_DAT_1133e72f0,4,0x14,0x1c)
    ;
    puRam00000001137fa400 = puVar1;
  }
  return;
}



/* Entry: 10b7df344; end: 10b7df427; +[DpaStoryAdMetadata descriptor] */

void FUN_10b7df344(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa408 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd72f0,
                        &PTR____CFConstantStringClassReference_110f855b8,&PTR_DAT_1133e7f90,
                        &PTR_DAT_1133e7fa8,3,0x10,0x1c);
    puRam00000001137fa408 = puVar1;
  }
  return;
}



/* Entry: 10b7df428; end: 10b7df433;  */

bool FUN_10b7df428(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7df434; end: 10b7df4af;  */

undefined * FUN_10b7df434(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa418 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f855f8,
                        &UNK_10e5dec54,&UNK_10e5dece0,0xc,FUN_10b7df4b0,0);
    do {
      if (puRam00000001137fa418 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa418;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa418,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa418 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa418;
}



/* Entry: 10b7df4b0; end: 10b7df4bb;  */

bool FUN_10b7df4b0(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 10b7df4bc; end: 10b7df54b;  */

undefined * FUN_10b7df4bc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa420 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85618,
                        &UNK_10e5ded10,&UNK_10e5deef4,0x1e,FUN_10b7df54c,0,&UNK_10e5def6c);
    do {
      if (puRam00000001137fa420 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa420;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa420,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa420 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa420;
}



/* Entry: 10b7df54c; end: 10b7df557;  */

bool FUN_10b7df54c(uint param_1)

{
  return param_1 < 0x1e;
}



/* Entry: 10b7df558; end: 10b7df5d3;  */

undefined * FUN_10b7df558(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa428 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85638,
                        &UNK_10e5def74,&UNK_10e5df058,0x10,FUN_10b7df5d4,0);
    do {
      if (puRam00000001137fa428 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa428;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa428,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa428 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa428;
}



/* Entry: 10b7df5d4; end: 10b7df5df;  */

bool FUN_10b7df5d4(uint param_1)

{
  return param_1 < 0x10;
}



/* Entry: 10b7df5e0; end: 10b7df65b;  */

undefined * FUN_10b7df5e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa430 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85658,
                        &UNK_10e5df098,&UNK_10e5df0d0,5,FUN_10b7df65c,0);
    do {
      if (puRam00000001137fa430 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa430;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa430,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa430 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa430;
}



/* Entry: 10b7df65c; end: 10b7df667;  */

bool FUN_10b7df65c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7df668; end: 10b7df6cf; +[SCAdsRequestEngagementSignals descriptor] */

void FUN_10b7df668(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa438 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7520,
                        &PTR____CFConstantStringClassReference_110f85678,&PTR_DAT_1133e8008,
                        &PTR_DAT_1133e8020,1,0x10,0x1c);
    puRam00000001137fa438 = puVar1;
  }
  return;
}



/* Entry: 10b7df6d0; end: 10b7df7b3; +[SCAdsRequestEngagementFriendUserStories descriptor] */

void FUN_10b7df6d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa440 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7570,
                        &PTR____CFConstantStringClassReference_110f85698,&PTR_DAT_1133e8008,
                        &PTR_DAT_1133e8040,1,0x10,0x1c);
    puRam00000001137fa440 = puVar1;
  }
  return;
}



/* Entry: 10b7df7b4; end: 10b7df7bf;  */

bool FUN_10b7df7b4(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7df7c0; end: 10b7df83b;  */

undefined * FUN_10b7df7c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa450 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f856d8,
                        &UNK_10e5df144,&UNK_10e5df170,5,FUN_10b7df83c,0);
    do {
      if (puRam00000001137fa450 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa450;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa450,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa450 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa450;
}



/* Entry: 10b7df83c; end: 10b7df847;  */

bool FUN_10b7df83c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7df848; end: 10b7df8c3;  */

undefined * FUN_10b7df848(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa458 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f856f8,
                        &UNK_10e5df184,&UNK_10e5df1bc,2,FUN_10b7df8c4,0);
    do {
      if (puRam00000001137fa458 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa458;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa458,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa458 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa458;
}



/* Entry: 10b7df8c4; end: 10b7df8cf;  */

bool FUN_10b7df8c4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7df8d0; end: 10b7df94b;  */

undefined * FUN_10b7df8d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa460 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85718,
                        &UNK_10e5df1c4,&UNK_10e5df1f4,2,FUN_10b7df94c,0);
    do {
      if (puRam00000001137fa460 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa460;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa460,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa460 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa460;
}



/* Entry: 10b7df94c; end: 10b7df957;  */

bool FUN_10b7df94c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7df958; end: 10b7df9d3;  */

undefined * FUN_10b7df958(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa468 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85738,
                        &UNK_10e5df1fc,&UNK_10e5df228,4,FUN_10b7df9d4,0);
    do {
      if (puRam00000001137fa468 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa468;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa468,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa468 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa468;
}



/* Entry: 10b7df9d4; end: 10b7df9df;  */

bool FUN_10b7df9d4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7df9e0; end: 10b7dfa5b;  */

undefined * FUN_10b7df9e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa470 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85758,
                        &UNK_10e5df238,&UNK_10e5df260,5,FUN_10b7dfa5c,0);
    do {
      if (puRam00000001137fa470 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa470;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa470,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa470 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa470;
}



/* Entry: 10b7dfa5c; end: 10b7dfa67;  */

bool FUN_10b7dfa5c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7dfa68; end: 10b7dfae3;  */

undefined * FUN_10b7dfa68(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa478 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85778,
                        &UNK_10e5df274,&UNK_10e5df288,2,FUN_10b7dfae4,0);
    do {
      if (puRam00000001137fa478 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa478;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa478,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa478 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa478;
}



/* Entry: 10b7dfae4; end: 10b7dfaef;  */

bool FUN_10b7dfae4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7dfaf0; end: 10b7dfb6b;  */

undefined * FUN_10b7dfaf0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa480 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85798,
                        &UNK_10e5df290,&UNK_10e5df2d4,3,FUN_10b7dfb6c,0);
    do {
      if (puRam00000001137fa480 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa480;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa480,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa480 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa480;
}



/* Entry: 10b7dfb6c; end: 10b7dfb77;  */

bool FUN_10b7dfb6c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7dfb78; end: 10b7dfbf3;  */

undefined * FUN_10b7dfb78(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa488 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f857b8,
                        &UNK_10e5df2e0,&UNK_10e5df320,2,FUN_10b7dfbf4,0);
    do {
      if (puRam00000001137fa488 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa488;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa488,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa488 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa488;
}



/* Entry: 10b7dfbf4; end: 10b7dfbff;  */

bool FUN_10b7dfbf4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7dfc00; end: 10b7dfc7b;  */

undefined * FUN_10b7dfc00(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa490 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f857d8,
                        &UNK_10e5df328,&UNK_10e5df368,5,FUN_10b7dfc7c,0);
    do {
      if (puRam00000001137fa490 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa490;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa490,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa490 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa490;
}



/* Entry: 10b7dfc7c; end: 10b7dfc87;  */

bool FUN_10b7dfc7c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7dfc88; end: 10b7dfd13; +[SCAdsImpressionData descriptor] */

undefined * FUN_10b7dfc88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa498 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7750,
                        &PTR____CFConstantStringClassReference_110f857f8,
                        &PTR_s_snapchat_ads_request_schema_1133e8068,&PTR_s_adType_1133e8680,0x34,
                        0x1a0,0x1c);
    func_0x00010c229040();
    puRam00000001137fa498 = puVar1;
  }
  return puRam00000001137fa498;
}



/* Entry: 10b7dfd14; end: 10b7dfdf7; +[SCAdsViewContext descriptor] */

void FUN_10b7dfd14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa4a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd77a0,
                        &PTR____CFConstantStringClassReference_110f85818,
                        &PTR_s_snapchat_ads_request_schema_1133e8068,&PTR_DAT_1133e8080,0x30,0x158,
                        0x1c);
    puRam00000001137fa4a0 = puVar1;
  }
  return;
}



/* Entry: 10b7dfdf8; end: 10b7dfe03;  */

bool FUN_10b7dfdf8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7dfe04; end: 10b7dfe7f;  */

undefined * FUN_10b7dfe04(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa4b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85858,
                        &UNK_10e5df3b8,&UNK_10e5df434,8,FUN_10b7dfe80,0);
    do {
      if (puRam00000001137fa4b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa4b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa4b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa4b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa4b0;
}



/* Entry: 10b7dfe80; end: 10b7dfe8b;  */

bool FUN_10b7dfe80(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10b7dfe8c; end: 10b7dff07;  */

undefined * FUN_10b7dfe8c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa4b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85878,
                        &UNK_10e5df454,&UNK_10e5df6bc,0x2a,FUN_10b7dff08,0);
    do {
      if (puRam00000001137fa4b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa4b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa4b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa4b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa4b8;
}



/* Entry: 10b7dff08; end: 10b7dff13;  */

bool FUN_10b7dff08(uint param_1)

{
  return param_1 < 0x2a;
}



/* Entry: 10b7dff14; end: 10b7dff8f;  */

undefined * FUN_10b7dff14(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa4c0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85898,
                        &UNK_10e5df764,&UNK_10e5df794,3,FUN_10b7dff90,0);
    do {
      if (puRam00000001137fa4c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa4c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa4c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa4c0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa4c0;
}



/* Entry: 10b7dff90; end: 10b7dff9b;  */

bool FUN_10b7dff90(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7dff9c; end: 10b7e0017;  */

undefined * FUN_10b7dff9c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa4c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f858b8,
                        &UNK_10e5df7a0,&UNK_10e5df8a8,0x10,FUN_10b7e0018,0);
    do {
      if (puRam00000001137fa4c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa4c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa4c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa4c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa4c8;
}



/* Entry: 10b7e0018; end: 10b7e0023;  */

bool FUN_10b7e0018(uint param_1)

{
  return param_1 < 0x10;
}



/* Entry: 10b7e0024; end: 10b7e008b; +[SCAdsSwipeSensitivityConfig descriptor] */

void FUN_10b7e0024(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa4d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd79d0,
                        &PTR____CFConstantStringClassReference_110f858d8,&PTR_DAT_1133e8d00,
                        &PTR_DAT_1133e8dd8,5,0x30,0x1c);
    puRam00000001137fa4d0 = puVar1;
  }
  return;
}



/* Entry: 10b7e008c; end: 10b7e0107; +[SCAdsSwipeSensitivityConfig_Insets descriptor] */

undefined * FUN_10b7e008c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa4d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7a20,
                        &PTR____CFConstantStringClassReference_110f858f8,&PTR_DAT_1133e8d00,
                        &PTR_DAT_1133e8d58,4,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001137fa4d8 = puVar1;
  }
  return puRam00000001137fa4d8;
}



/* Entry: 10b7e0108; end: 10b7e01ff; +[SCAdsSwipeSensitivityConfig_SwipeAngle descriptor] */

undefined * FUN_10b7e0108(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa4e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7a70,
                        &PTR____CFConstantStringClassReference_110f85918,&PTR_DAT_1133e8d00,
                        &PTR_DAT_1133e8d18,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137fa4e0 = puVar1;
  }
  return puRam00000001137fa4e0;
}



/* Entry: 10b7e0200; end: 10b7e020b;  */

bool FUN_10b7e0200(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7e020c; end: 10b7e02ef; +[SCAdsChatFeedBannerImpression descriptor] */

void FUN_10b7e020c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa4f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7b10,
                        &PTR____CFConstantStringClassReference_110f85958,
                        &PTR_s_snapchat_ads_request_schema_1133e8e78,&PTR_DAT_1133e8e90,3,0x18,0x1c)
    ;
    puRam00000001137fa4f0 = puVar1;
  }
  return;
}



/* Entry: 10b7e02f0; end: 10b7e02fb;  */

bool FUN_10b7e02f0(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10b7e02fc; end: 10b7e0377;  */

undefined * FUN_10b7e02fc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa500 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85998,
                        &UNK_10e5df99c,&UNK_10e5df9c4,3,FUN_10b7e0378,0);
    do {
      if (puRam00000001137fa500 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa500;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa500,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa500 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa500;
}



/* Entry: 10b7e0378; end: 10b7e0383;  */

bool FUN_10b7e0378(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e0384; end: 10b7e03eb; +[SCAdsChatFeedCellImpression descriptor] */

void FUN_10b7e0384(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa508 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7bb0,
                        &PTR____CFConstantStringClassReference_110f859b8,
                        &PTR_s_snapchat_ads_request_schema_1133e8ef0,&PTR_DAT_1133e8f08,10,0x50,0x1c
                       );
    puRam00000001137fa508 = puVar1;
  }
  return;
}



/* Entry: 10b7e03ec; end: 10b7e0453; +[SCAdsChatConversationImpression descriptor] */

void FUN_10b7e03ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa510 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7c50,
                        &PTR____CFConstantStringClassReference_110f859d8,
                        &PTR_s_snapchat_ads_request_schema_1133e9048,&PTR_DAT_1133e9060,2,0x18,0x1c)
    ;
    puRam00000001137fa510 = puVar1;
  }
  return;
}



/* Entry: 10b7e0454; end: 10b7e0537; +[SCAdsCognacMetadata descriptor] */

void FUN_10b7e0454(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa518 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7cf0,
                        &PTR____CFConstantStringClassReference_110f859f8,
                        &PTR_s_snapchat_ads_request_schema_1133e90a0,&PTR_DAT_1133e90b8,5,0x30,0x1c)
    ;
    puRam00000001137fa518 = puVar1;
  }
  return;
}



/* Entry: 10b7e0538; end: 10b7e0543;  */

bool FUN_10b7e0538(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7e0544; end: 10b7e05ab; +[SCAdsFilterCarouselImpressionTrack descriptor] */

void FUN_10b7e0544(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa528 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7d90,
                        &PTR____CFConstantStringClassReference_110f85a38,
                        &PTR_s_snapchat_ads_request_schema_1133e9158,&PTR_DAT_1133e9170,6,0x38,0x1c)
    ;
    puRam00000001137fa528 = puVar1;
  }
  return;
}



/* Entry: 10b7e05ac; end: 10b7e0613; +[SCAdsFilterImpressionTrack descriptor] */

void FUN_10b7e05ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa530 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7de0,
                        &PTR____CFConstantStringClassReference_110f85a58,
                        &PTR_s_snapchat_ads_request_schema_1133e9158,&PTR_DAT_1133e9230,0x21,0x108,
                        0x1c);
    puRam00000001137fa530 = puVar1;
  }
  return;
}



/* Entry: 10b7e0614; end: 10b7e067b; +[SCAdsIndexedStoryImpressionTrack descriptor] */

void FUN_10b7e0614(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa538 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7e80,
                        &PTR____CFConstantStringClassReference_110f85a78,
                        &PTR_s_snapchat_ads_request_schema_1133e9658,&PTR_DAT_1133e97b0,9,0x48,0x1c)
    ;
    puRam00000001137fa538 = puVar1;
  }
  return;
}



/* Entry: 10b7e067c; end: 10b7e06e3; +[SCAdsIndexedStorySnapImpressionTrack descriptor] */

void FUN_10b7e067c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa540 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7ed0,
                        &PTR____CFConstantStringClassReference_110f85a98,
                        &PTR_s_snapchat_ads_request_schema_1133e9658,&PTR_DAT_1133e96f0,6,0x30,0x1c)
    ;
    puRam00000001137fa540 = puVar1;
  }
  return;
}



/* Entry: 10b7e06e4; end: 10b7e077f; +[SCAdsIndexedStorySnapImpressionTrack_AdTypedTrackData descriptor] */

undefined * FUN_10b7e06e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa548 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7f20,
                        &PTR____CFConstantStringClassReference_110f85ab8,
                        &PTR_s_snapchat_ads_request_schema_1133e9658,&PTR_DAT_1133e9670,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cd7ed0);
    puRam00000001137fa548 = puVar1;
  }
  return puRam00000001137fa548;
}



/* Entry: 10b7e0780; end: 10b7e07fb;  */

undefined * FUN_10b7e0780(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa550 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85ad8,
                        &UNK_10e5dfa18,&UNK_10e5dfa44,4,FUN_10b7e07fc,0);
    do {
      if (puRam00000001137fa550 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa550;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa550,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa550 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa550;
}



/* Entry: 10b7e07fc; end: 10b7e0807;  */

bool FUN_10b7e07fc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7e0808; end: 10b7e086f; +[SCAdsCollectionImpressionTrack descriptor] */

void FUN_10b7e0808(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa558 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd7fc0,
                        &PTR____CFConstantStringClassReference_110f85af8,
                        &PTR_s_snapchat_ads_request_schema_1133e98d8,&PTR_DAT_1133e98f0,4,0x28,0x1c)
    ;
    puRam00000001137fa558 = puVar1;
  }
  return;
}



/* Entry: 10b7e0870; end: 10b7e08fb; +[SCAdsCollectionItemImpressionTrack descriptor] */

undefined * FUN_10b7e0870(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa560 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8010,
                        &PTR____CFConstantStringClassReference_110f85b18,
                        &PTR_s_snapchat_ads_request_schema_1133e98d8,&PTR_s_productId_1133e9970,8,
                        0x40,0x1c);
    func_0x00010c229040();
    puRam00000001137fa560 = puVar1;
  }
  return puRam00000001137fa560;
}



/* Entry: 10b7e08fc; end: 10b7e09df; +[SCAdsCollectionCardConfig descriptor] */

void FUN_10b7e08fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa568 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd80b0,
                        &PTR____CFConstantStringClassReference_110f85b38,&PTR_DAT_1133e9a70,
                        &PTR_DAT_1133e9a88,1,0x10,0x1c);
    puRam00000001137fa568 = puVar1;
  }
  return;
}



/* Entry: 10b7e09e0; end: 10b7e09eb;  */

bool FUN_10b7e09e0(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b7e09ec; end: 10b7e0acf; +[SCAdsCollectionInteractionTrack descriptor] */

void FUN_10b7e09ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa578 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8150,
                        &PTR____CFConstantStringClassReference_110f85b78,
                        &PTR_s_snapchat_ads_request_schema_1133e9aa8,&PTR_s_source_1133e9ac0,8,0x40,
                        0x1c);
    puRam00000001137fa578 = puVar1;
  }
  return;
}



/* Entry: 10b7e0ad0; end: 10b7e0adb;  */

bool FUN_10b7e0ad0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e0adc; end: 10b7e0b57;  */

undefined * FUN_10b7e0adc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa588 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85bb8,
                        &UNK_10e5dfaa0,&UNK_10e5dfac8,3,FUN_10b7e0b58,0);
    do {
      if (puRam00000001137fa588 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa588;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa588,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa588 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa588;
}



/* Entry: 10b7e0b58; end: 10b7e0b63;  */

bool FUN_10b7e0b58(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e0b64; end: 10b7e0bdf;  */

undefined * FUN_10b7e0b64(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa590 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85bd8,
                        &UNK_10e5dfad4,&UNK_10e5dfb68,10,FUN_10b7e0be0,0);
    do {
      if (puRam00000001137fa590 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa590;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa590,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa590 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa590;
}



/* Entry: 10b7e0be0; end: 10b7e0beb;  */

bool FUN_10b7e0be0(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b7e0bec; end: 10b7e0c67;  */

undefined * FUN_10b7e0bec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa598 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85bf8,
                        &UNK_10e5dfb90,&UNK_10e5dfbfc,9,FUN_10b7e0c68,0);
    do {
      if (puRam00000001137fa598 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa598;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa598,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa598 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa598;
}



/* Entry: 10b7e0c68; end: 10b7e0c73;  */

bool FUN_10b7e0c68(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10b7e0c74; end: 10b7e0cef;  */

undefined * FUN_10b7e0c74(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa5a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85c18,
                        &UNK_10e5dfc20,&UNK_10e5dfc64,5,FUN_10b7e0cf0,0);
    do {
      if (puRam00000001137fa5a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa5a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa5a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa5a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa5a0;
}



/* Entry: 10b7e0cf0; end: 10b7e0cfb;  */

bool FUN_10b7e0cf0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7e0cfc; end: 10b7e0d77;  */

undefined * FUN_10b7e0cfc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa5a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85c38,
                        &UNK_10e5dfc78,&UNK_10e5dfc9c,3,FUN_10b7e0d78,0);
    do {
      if (puRam00000001137fa5a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa5a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa5a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa5a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa5a8;
}



/* Entry: 10b7e0d78; end: 10b7e0d83;  */

bool FUN_10b7e0d78(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e0d84; end: 10b7e0dff;  */

undefined * FUN_10b7e0d84(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa5b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85c58,
                        &UNK_10e5dfca8,&UNK_10e5dfccc,3,FUN_10b7e0e00,0);
    do {
      if (puRam00000001137fa5b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa5b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa5b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa5b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa5b0;
}



/* Entry: 10b7e0e00; end: 10b7e0e0b;  */

bool FUN_10b7e0e00(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e0e0c; end: 10b7e0e87;  */

undefined * FUN_10b7e0e0c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa5b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85c78,
                        &UNK_10e5dfcd8,&UNK_10e5dfcfc,3,FUN_10b7e0e88,0);
    do {
      if (puRam00000001137fa5b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa5b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa5b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa5b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa5b8;
}



/* Entry: 10b7e0e88; end: 10b7e0e93;  */

bool FUN_10b7e0e88(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e0e94; end: 10b7e0f0f;  */

undefined * FUN_10b7e0e94(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa5c0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85c98,
                        &UNK_10e5dfd08,&UNK_10e5dfd20,3,FUN_10b7e0f10,0);
    do {
      if (puRam00000001137fa5c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa5c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa5c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa5c0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa5c0;
}



/* Entry: 10b7e0f10; end: 10b7e0f1b;  */

bool FUN_10b7e0f10(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e0f1c; end: 10b7e0f97;  */

undefined * FUN_10b7e0f1c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa5c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85cb8,
                        &UNK_10e5dfd2c,&UNK_10e5dfd60,3,FUN_10b7e0f98,0);
    do {
      if (puRam00000001137fa5c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa5c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa5c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa5c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa5c8;
}



/* Entry: 10b7e0f98; end: 10b7e0fa3;  */

bool FUN_10b7e0f98(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e0fa4; end: 10b7e101f;  */

undefined * FUN_10b7e0fa4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa5d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85cd8,
                        &UNK_10e5dfd6c,&UNK_10e5dfda0,3,FUN_10b7e1020,0);
    do {
      if (puRam00000001137fa5d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa5d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa5d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa5d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa5d0;
}



/* Entry: 10b7e1020; end: 10b7e102b;  */

bool FUN_10b7e1020(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e102c; end: 10b7e1093; +[SCAdsPromotedPlaceImpressionTrack descriptor] */

void FUN_10b7e102c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa5d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd81f0,
                        &PTR____CFConstantStringClassReference_110f85cf8,
                        &PTR_s_snapchat_ads_request_schema_1133e9bc8,&PTR_s_placeId_1133e9e60,7,0x30
                        ,0x1c);
    puRam00000001137fa5d8 = puVar1;
  }
  return;
}



/* Entry: 10b7e1094; end: 10b7e111f; +[SCAdsPlaceEvent descriptor] */

undefined * FUN_10b7e1094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa5e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8240,
                        &PTR____CFConstantStringClassReference_110f85d18,
                        &PTR_s_snapchat_ads_request_schema_1133e9bc8,&PTR_DAT_1133e9f40,0xd,0x70,
                        0x1c);
    func_0x00010c229040();
    puRam00000001137fa5e0 = puVar1;
  }
  return puRam00000001137fa5e0;
}



/* Entry: 10b7e1120; end: 10b7e1187; +[SCAdsPlaceAdLoadEvent descriptor] */

void FUN_10b7e1120(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa5e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8290,
                        &PTR____CFConstantStringClassReference_110f85d38,
                        &PTR_s_snapchat_ads_request_schema_1133e9bc8,&PTR_s_zoomLevel_1133e9d20,4,
                        0x20,0x1c);
    puRam00000001137fa5e8 = puVar1;
  }
  return;
}



/* Entry: 10b7e1188; end: 10b7e11ef; +[SCAdsZoomEvent descriptor] */

void FUN_10b7e1188(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa5f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd82e0,
                        &PTR____CFConstantStringClassReference_110f85d58,
                        &PTR_s_snapchat_ads_request_schema_1133e9bc8,&PTR_s_zoomLevel_1133e9be0,1,8,
                        0x1c);
    puRam00000001137fa5f0 = puVar1;
  }
  return;
}



/* Entry: 10b7e11f0; end: 10b7e1257; +[SCAdsPinVisibilityEvent descriptor] */

void FUN_10b7e11f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa5f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8330,
                        &PTR____CFConstantStringClassReference_110f85d78,
                        &PTR_s_snapchat_ads_request_schema_1133e9bc8,&PTR_s_visible_1133e9da0,6,0x20
                        ,0x1c);
    puRam00000001137fa5f8 = puVar1;
  }
  return;
}



/* Entry: 10b7e1258; end: 10b7e12bf; +[SCAdsPlaceActionEvent descriptor] */

void FUN_10b7e1258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa600 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8380,
                        &PTR____CFConstantStringClassReference_110f85d98,
                        &PTR_s_snapchat_ads_request_schema_1133e9bc8,&PTR_s_action_1133e9c00,1,8,
                        0x1c);
    puRam00000001137fa600 = puVar1;
  }
  return;
}



/* Entry: 10b7e12c0; end: 10b7e1327; +[SCAdsSnapAdEvent descriptor] */

void FUN_10b7e12c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa608 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd83d0,
                        &PTR____CFConstantStringClassReference_110f85db8,
                        &PTR_s_snapchat_ads_request_schema_1133e9bc8,&PTR_s_action_1133e9c20,1,8,
                        0x1c);
    puRam00000001137fa608 = puVar1;
  }
  return;
}



/* Entry: 10b7e1328; end: 10b7e138f; +[SCAdsThreeDEvent descriptor] */

void FUN_10b7e1328(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa610 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8420,
                        &PTR____CFConstantStringClassReference_110f85dd8,
                        &PTR_s_snapchat_ads_request_schema_1133e9bc8,&PTR_DAT_1133e9c40,1,8,0x1c);
    puRam00000001137fa610 = puVar1;
  }
  return;
}



/* Entry: 10b7e1390; end: 10b7e13f7; +[SCAdsEffectEvent descriptor] */

void FUN_10b7e1390(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa618 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8470,
                        &PTR____CFConstantStringClassReference_110f85df8,
                        &PTR_s_snapchat_ads_request_schema_1133e9bc8,&PTR_DAT_1133e9ca0,2,0xc,0x1c);
    puRam00000001137fa618 = puVar1;
  }
  return;
}


