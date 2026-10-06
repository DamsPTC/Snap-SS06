/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7e64a8; end: 10b7e6523;  */

undefined * FUN_10b7e64a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fabb0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87238,
                        &UNK_10e5e19a8,&UNK_10e5e1a08,3,FUN_10b7e6524,0);
    do {
      if (puRam00000001137fabb0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fabb0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fabb0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fabb0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fabb0;
}



/* Entry: 10b7e6524; end: 10b7e652f;  */

bool FUN_10b7e6524(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e6530; end: 10b7e6613; +[SCAdsEndCardImpressionTrack descriptor] */

void FUN_10b7e6530(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fabb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdc750,
                        &PTR____CFConstantStringClassReference_110f87258,
                        &PTR_s_snapchat_ads_request_schema_1133f15a8,&PTR_DAT_1133f15c0,0xc,0x58,
                        0x1c);
    puRam00000001137fabb8 = puVar1;
  }
  return;
}



/* Entry: 10b7e6614; end: 10b7e661f;  */

bool FUN_10b7e6614(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e6620; end: 10b7e669b;  */

undefined * FUN_10b7e6620(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fabc8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87298,
                        &UNK_10e5e1a3c,&UNK_10e5e1a54,3,FUN_10b7e669c,0);
    do {
      if (puRam00000001137fabc8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fabc8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fabc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fabc8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fabc8;
}



/* Entry: 10b7e669c; end: 10b7e66a7;  */

bool FUN_10b7e669c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e66a8; end: 10b7e670f; +[SCAdsMoreItemsImpression descriptor] */

void FUN_10b7e66a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fabd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdc7f0,
                        &PTR____CFConstantStringClassReference_110f872b8,
                        &PTR_s_snapchat_ads_request_schema_1133f1748,&PTR_DAT_1133f1760,1,8,0x1c);
    puRam00000001137fabd0 = puVar1;
  }
  return;
}



/* Entry: 10b7e6710; end: 10b7e6777; +[SCAdsDominoTileImpression descriptor] */

void FUN_10b7e6710(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fabd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdc840,
                        &PTR____CFConstantStringClassReference_110f872d8,
                        &PTR_s_snapchat_ads_request_schema_1133f1748,&PTR_DAT_1133f1780,3,0x18,0x1c)
    ;
    puRam00000001137fabd8 = puVar1;
  }
  return;
}



/* Entry: 10b7e6778; end: 10b7e6803; +[SCAdsDpaTopSnapImpressionTrack descriptor] */

undefined * FUN_10b7e6778(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fabe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdc890,
                        &PTR____CFConstantStringClassReference_110f872f8,
                        &PTR_s_snapchat_ads_request_schema_1133f1748,&PTR_DAT_1133f17e0,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001137fabe0 = puVar1;
  }
  return puRam00000001137fabe0;
}



/* Entry: 10b7e6804; end: 10b7e687f;  */

undefined * FUN_10b7e6804(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fabe8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87318,
                        &UNK_10e5e1a60,&UNK_10e5e1ac8,4,FUN_10b7e6880,0);
    do {
      if (puRam00000001137fabe8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fabe8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fabe8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fabe8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fabe8;
}



/* Entry: 10b7e6880; end: 10b7e688b;  */

bool FUN_10b7e6880(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7e688c; end: 10b7e6907;  */

undefined * FUN_10b7e688c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fabf0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87338,
                        &UNK_10e5e1ad8,&UNK_10e5e1b58,8,FUN_10b7e6908,0);
    do {
      if (puRam00000001137fabf0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fabf0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fabf0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fabf0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fabf0;
}



/* Entry: 10b7e6908; end: 10b7e6913;  */

bool FUN_10b7e6908(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10b7e6914; end: 10b7e697b; +[SCAdsTooltipImpressionTrack descriptor] */

void FUN_10b7e6914(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fabf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdc930,
                        &PTR____CFConstantStringClassReference_110f87358,
                        &PTR_s_snapchat_ads_request_schema_1133f1860,&PTR_DAT_1133f1878,1,0x10,0x1c)
    ;
    puRam00000001137fabf8 = puVar1;
  }
  return;
}



/* Entry: 10b7e697c; end: 10b7e69e3; +[SCAdsTooltipImpression descriptor] */

void FUN_10b7e697c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fac00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdc980,
                        &PTR____CFConstantStringClassReference_110f87378,
                        &PTR_s_snapchat_ads_request_schema_1133f1860,&PTR_DAT_1133f1898,4,0x20,0x1c)
    ;
    puRam00000001137fac00 = puVar1;
  }
  return;
}



/* Entry: 10b7e69e4; end: 10b7e6ac7; +[SCAdsCaptionCtaImpressionTrack descriptor] */

void FUN_10b7e69e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fac08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdca20,
                        &PTR____CFConstantStringClassReference_110f87398,
                        &PTR_s_snapchat_ads_request_schema_1133f1918,
                        &PTR_s_captionCtaPosition_1133f1930,2,0x18,0x1c);
    puRam00000001137fac08 = puVar1;
  }
  return;
}



/* Entry: 10b7e6ac8; end: 10b7e6ad3;  */

bool FUN_10b7e6ac8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e6ad4; end: 10b7e6b3b; +[SCAdsTapToPauseInteraction descriptor] */

void FUN_10b7e6ad4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fac18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdcac0,
                        &PTR____CFConstantStringClassReference_110f873d8,
                        &PTR_s_snapchat_ads_request_schema_1133f1970,&PTR_DAT_1133f1988,3,0x18,0x1c)
    ;
    puRam00000001137fac18 = puVar1;
  }
  return;
}



/* Entry: 10b7e6b3c; end: 10b7e6ba3; +[SCAdsPositionInfo descriptor] */

void FUN_10b7e6b3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fac20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdcb60,
                        &PTR____CFConstantStringClassReference_110f873f8,
                        &PTR_s_snapchat_ads_request_schema_1133f19e8,&PTR_DAT_1133f1a00,4,0x28,0x1c)
    ;
    puRam00000001137fac20 = puVar1;
  }
  return;
}



/* Entry: 10b7e6ba4; end: 10b7e6c87; +[SCAdsTapToAdvanceInteraction descriptor] */

void FUN_10b7e6ba4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fac28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdcc00,
                        &PTR____CFConstantStringClassReference_110f87418,
                        &PTR_s_snapchat_ads_request_schema_1133f1a80,&PTR_DAT_1133f1a98,2,0x18,0x1c)
    ;
    puRam00000001137fac28 = puVar1;
  }
  return;
}



/* Entry: 10b7e6c88; end: 10b7e6c93;  */

bool FUN_10b7e6c88(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7e6c94; end: 10b7e6cfb; +[SCAdsPromoImpressionTrack descriptor] */

void FUN_10b7e6c94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fac38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdcca0,
                        &PTR____CFConstantStringClassReference_110f87458,
                        &PTR_s_snapchat_ads_request_schema_1133f1ad8,&PTR_DAT_1133f1af0,3,0x18,0x1c)
    ;
    puRam00000001137fac38 = puVar1;
  }
  return;
}



/* Entry: 10b7e6cfc; end: 10b7e6d63; +[SCAdsPollStickerTrack descriptor] */

void FUN_10b7e6cfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fac40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdcd40,
                        &PTR____CFConstantStringClassReference_110f87478,
                        &PTR_s_snapchat_ads_request_schema_1133f1b50,&PTR_DAT_1133f1b68,2,0x18,0x1c)
    ;
    puRam00000001137fac40 = puVar1;
  }
  return;
}



/* Entry: 10b7e6d64; end: 10b7e6dcb; +[SCAdsWakeUpUiInteraction descriptor] */

void FUN_10b7e6d64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fac48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdcde0,
                        &PTR____CFConstantStringClassReference_110f87498,
                        &PTR_s_snapchat_ads_request_schema_1133f1ba8,&PTR_DAT_1133f1bc0,2,0x18,0x1c)
    ;
    puRam00000001137fac48 = puVar1;
  }
  return;
}



/* Entry: 10b7e6dcc; end: 10b7e6eaf; +[SCAdsLiveReviewImpressionTrack descriptor] */

void FUN_10b7e6dcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fac50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdce80,
                        &PTR____CFConstantStringClassReference_110f874b8,
                        &PTR_s_snapchat_ads_request_schema_1133f1c00,&PTR_DAT_1133f1c18,3,0x18,0x1c)
    ;
    puRam00000001137fac50 = puVar1;
  }
  return;
}



/* Entry: 10b7e6eb0; end: 10b7e6ebb;  */

bool FUN_10b7e6eb0(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b7e6ebc; end: 10b7e6f37;  */

undefined * FUN_10b7e6ebc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fac60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f874f8,
                        &UNK_10e5e1c88,&UNK_10e5e1ca0,2,FUN_10b7e6f38,0);
    do {
      if (puRam00000001137fac60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fac60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fac60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fac60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fac60;
}



/* Entry: 10b7e6f38; end: 10b7e6f43;  */

bool FUN_10b7e6f38(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e6f44; end: 10b7e6fbf;  */

undefined * FUN_10b7e6f44(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fac68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87518,
                        &UNK_10e5e1ca8,&UNK_10e5e1d0c,5,FUN_10b7e6fc0,0);
    do {
      if (puRam00000001137fac68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fac68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fac68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fac68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fac68;
}



/* Entry: 10b7e6fc0; end: 10b7e6fcb;  */

bool FUN_10b7e6fc0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7e6fcc; end: 10b7e7047;  */

undefined * FUN_10b7e6fcc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fac70 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87538,
                        &UNK_10e5e1d20,&UNK_10e5e1d3c,2,FUN_10b7e7048,0);
    do {
      if (puRam00000001137fac70 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fac70;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fac70,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fac70 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fac70;
}



/* Entry: 10b7e7048; end: 10b7e7053;  */

bool FUN_10b7e7048(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e7054; end: 10b7e70cf;  */

undefined * FUN_10b7e7054(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fac78 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87558,
                        &UNK_10e5e1d44,&UNK_10e5e1d7c,5,FUN_10b7e70d0,0);
    do {
      if (puRam00000001137fac78 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fac78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fac78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fac78 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fac78;
}



/* Entry: 10b7e70d0; end: 10b7e70db;  */

bool FUN_10b7e70d0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7e70dc; end: 10b7e7157;  */

undefined * FUN_10b7e70dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fac80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87578,
                        &UNK_10e5e1d90,&UNK_10e5e1dfc,3,FUN_10b7e7158,0);
    do {
      if (puRam00000001137fac80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fac80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fac80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fac80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fac80;
}



/* Entry: 10b7e7158; end: 10b7e7163;  */

bool FUN_10b7e7158(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e7164; end: 10b7e71df;  */

undefined * FUN_10b7e7164(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fac88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87598,
                        &UNK_10e5e1e08,&UNK_10e5e1e78,5,FUN_10b7e71e0,0);
    do {
      if (puRam00000001137fac88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fac88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fac88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fac88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fac88;
}



/* Entry: 10b7e71e0; end: 10b7e71eb;  */

bool FUN_10b7e71e0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7e71ec; end: 10b7e7267;  */

undefined * FUN_10b7e71ec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fac90 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f875b8,
                        &UNK_10e5e1e8c,&UNK_10e5e1ee0,8,FUN_10b7e7268,0);
    do {
      if (puRam00000001137fac90 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fac90;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fac90,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fac90 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fac90;
}



/* Entry: 10b7e7268; end: 10b7e7273;  */

bool FUN_10b7e7268(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10b7e7274; end: 10b7e72ef;  */

undefined * FUN_10b7e7274(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fac98 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f875d8,
                        &UNK_10e5e1f00,&UNK_10e5e1f18,2,FUN_10b7e72f0,0);
    do {
      if (puRam00000001137fac98 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fac98;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fac98,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fac98 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fac98;
}



/* Entry: 10b7e72f0; end: 10b7e72fb;  */

bool FUN_10b7e72f0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e72fc; end: 10b7e7377;  */

undefined * FUN_10b7e72fc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137faca0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f875f8,
                        &UNK_10e5e1f20,&UNK_10e5e1f58,3,FUN_10b7e7378,0);
    do {
      if (puRam00000001137faca0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137faca0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137faca0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137faca0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137faca0;
}



/* Entry: 10b7e7378; end: 10b7e7383;  */

bool FUN_10b7e7378(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e7384; end: 10b7e73ff;  */

undefined * FUN_10b7e7384(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137faca8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87618,
                        &UNK_10e5e1f64,&UNK_10e5e1fa8,3,FUN_10b7e7400,0);
    do {
      if (puRam00000001137faca8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137faca8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137faca8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137faca8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137faca8;
}



/* Entry: 10b7e7400; end: 10b7e740b;  */

bool FUN_10b7e7400(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e740c; end: 10b7e7487;  */

undefined * FUN_10b7e740c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137facb0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87638,
                        &UNK_10e5e1fb4,&UNK_10e5e1fd4,2,FUN_10b7e7488,0);
    do {
      if (puRam00000001137facb0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137facb0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137facb0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137facb0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137facb0;
}



/* Entry: 10b7e7488; end: 10b7e7493;  */

bool FUN_10b7e7488(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e7494; end: 10b7e750f;  */

undefined * FUN_10b7e7494(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137facb8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87658,
                        &UNK_10e5e1fdc,&UNK_10e5e1ff4,2,FUN_10b7e7510,0);
    do {
      if (puRam00000001137facb8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137facb8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137facb8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137facb8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137facb8;
}



/* Entry: 10b7e7510; end: 10b7e751b;  */

bool FUN_10b7e7510(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e751c; end: 10b7e7597;  */

undefined * FUN_10b7e751c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137facc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87678,
                        &UNK_10e5e1ffc,&UNK_10e5e2028,2,FUN_10b7e7598,0);
    do {
      if (puRam00000001137facc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137facc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137facc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137facc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137facc0;
}



/* Entry: 10b7e7598; end: 10b7e75a3;  */

bool FUN_10b7e7598(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e75a4; end: 10b7e761f;  */

undefined * FUN_10b7e75a4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137facc8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87698,
                        &UNK_10e5e2030,&UNK_10e5e2074,3,FUN_10b7e7620,0);
    do {
      if (puRam00000001137facc8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137facc8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137facc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137facc8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137facc8;
}



/* Entry: 10b7e7620; end: 10b7e762b;  */

bool FUN_10b7e7620(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e762c; end: 10b7e76a7;  */

undefined * FUN_10b7e762c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137facd0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f876b8,
                        &UNK_10e5e2080,&UNK_10e5e20ac,2,FUN_10b7e76a8,0);
    do {
      if (puRam00000001137facd0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137facd0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137facd0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137facd0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137facd0;
}



/* Entry: 10b7e76a8; end: 10b7e76b3;  */

bool FUN_10b7e76a8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e76b4; end: 10b7e772f;  */

undefined * FUN_10b7e76b4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137facd8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f876d8,
                        &UNK_10e5e20b4,&UNK_10e5e20e4,3,FUN_10b7e7730,0);
    do {
      if (puRam00000001137facd8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137facd8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137facd8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137facd8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137facd8;
}



/* Entry: 10b7e7730; end: 10b7e773b;  */

bool FUN_10b7e7730(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e773c; end: 10b7e77b7;  */

undefined * FUN_10b7e773c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137face0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f876f8,
                        &UNK_10e5e20f0,&UNK_10e5e2110,2,FUN_10b7e77b8,0);
    do {
      if (puRam00000001137face0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137face0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137face0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137face0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137face0;
}



/* Entry: 10b7e77b8; end: 10b7e77c3;  */

bool FUN_10b7e77b8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e77c4; end: 10b7e783f;  */

undefined * FUN_10b7e77c4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137face8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87718,
                        &UNK_10e5e2118,&UNK_10e5e2158,2,FUN_10b7e7840,0);
    do {
      if (puRam00000001137face8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137face8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137face8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137face8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137face8;
}



/* Entry: 10b7e7840; end: 10b7e784b;  */

bool FUN_10b7e7840(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e784c; end: 10b7e78c7;  */

undefined * FUN_10b7e784c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137facf0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87738,
                        &UNK_10e5e2160,&UNK_10e5e218c,3,FUN_10b7e78c8,0);
    do {
      if (puRam00000001137facf0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137facf0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137facf0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137facf0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137facf0;
}



/* Entry: 10b7e78c8; end: 10b7e78d3;  */

bool FUN_10b7e78c8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e78d4; end: 10b7e794f;  */

undefined * FUN_10b7e78d4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137facf8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87758,
                        &UNK_10e5e2198,&UNK_10e5e21cc,2,FUN_10b7e7950,0);
    do {
      if (puRam00000001137facf8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137facf8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137facf8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137facf8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137facf8;
}



/* Entry: 10b7e7950; end: 10b7e795b;  */

bool FUN_10b7e7950(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e795c; end: 10b7e79d7;  */

undefined * FUN_10b7e795c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fad00 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87778,
                        &UNK_10e5e21d4,&UNK_10e5e2224,5,FUN_10b7e79d8,0);
    do {
      if (puRam00000001137fad00 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fad00;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fad00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fad00 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fad00;
}



/* Entry: 10b7e79d8; end: 10b7e79e3;  */

bool FUN_10b7e79d8(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7e79e4; end: 10b7e7a5f;  */

undefined * FUN_10b7e79e4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fad08 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87798,
                        &UNK_10e5e2238,&UNK_10e5e2250,2,FUN_10b7e7a60,0);
    do {
      if (puRam00000001137fad08 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fad08;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fad08,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fad08 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fad08;
}



/* Entry: 10b7e7a60; end: 10b7e7a6b;  */

bool FUN_10b7e7a60(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e7a6c; end: 10b7e7ae7;  */

undefined * FUN_10b7e7a6c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fad10 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f877b8,
                        &UNK_10e5e2258,&UNK_10e5e2270,3,FUN_10b7e7ae8,0);
    do {
      if (puRam00000001137fad10 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fad10;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fad10,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fad10 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fad10;
}



/* Entry: 10b7e7ae8; end: 10b7e7af3;  */

bool FUN_10b7e7ae8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e7af4; end: 10b7e7b6f;  */

undefined * FUN_10b7e7af4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fad18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f877d8,
                        &UNK_10e5e227c,&UNK_10e5e2290,2,FUN_10b7e7b70,0);
    do {
      if (puRam00000001137fad18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fad18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fad18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fad18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fad18;
}



/* Entry: 10b7e7b70; end: 10b7e7b7b;  */

bool FUN_10b7e7b70(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e7b7c; end: 10b7e7bf7;  */

undefined * FUN_10b7e7b7c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fad20 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f877f8,
                        &UNK_10e5e2298,&UNK_10e5e22d8,3,FUN_10b7e7bf8,0);
    do {
      if (puRam00000001137fad20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fad20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fad20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fad20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fad20;
}



/* Entry: 10b7e7bf8; end: 10b7e7c03;  */

bool FUN_10b7e7bf8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e7c04; end: 10b7e7c7f;  */

undefined * FUN_10b7e7c04(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fad28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87818,
                        &UNK_10e5e22e4,&UNK_10e5e22f8,2,FUN_10b7e7c80,0);
    do {
      if (puRam00000001137fad28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fad28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fad28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fad28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fad28;
}



/* Entry: 10b7e7c80; end: 10b7e7c8b;  */

bool FUN_10b7e7c80(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e7c8c; end: 10b7e7d07;  */

undefined * FUN_10b7e7c8c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fad30 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87838,
                        &UNK_10e5e2300,&UNK_10e5e2324,3,FUN_10b7e7d08,0);
    do {
      if (puRam00000001137fad30 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fad30;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fad30,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fad30 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fad30;
}



/* Entry: 10b7e7d08; end: 10b7e7d13;  */

bool FUN_10b7e7d08(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e7d14; end: 10b7e7d8f;  */

undefined * FUN_10b7e7d14(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fad38 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87858,
                        &UNK_10e5e2330,&UNK_10e5e235c,2,FUN_10b7e7d90,0);
    do {
      if (puRam00000001137fad38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fad38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fad38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fad38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fad38;
}



/* Entry: 10b7e7d90; end: 10b7e7d9b;  */

bool FUN_10b7e7d90(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e7d9c; end: 10b7e7e17;  */

undefined * FUN_10b7e7d9c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fad40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87878,
                        &UNK_10e5e2364,&UNK_10e5e2384,2,FUN_10b7e7e18,0);
    do {
      if (puRam00000001137fad40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fad40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fad40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fad40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fad40;
}



/* Entry: 10b7e7e18; end: 10b7e7e23;  */

bool FUN_10b7e7e18(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e7e24; end: 10b7e7e9f;  */

undefined * FUN_10b7e7e24(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fad48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87898,
                        &UNK_10e5e238c,&UNK_10e5e23bc,2,FUN_10b7e7ea0,0);
    do {
      if (puRam00000001137fad48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fad48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fad48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fad48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fad48;
}



/* Entry: 10b7e7ea0; end: 10b7e7eab;  */

bool FUN_10b7e7ea0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e7eac; end: 10b7e7f27;  */

undefined * FUN_10b7e7eac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fad50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f878b8,
                        &UNK_10e5e23c4,&UNK_10e5e23e4,2,FUN_10b7e7f28,0);
    do {
      if (puRam00000001137fad50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fad50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fad50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fad50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fad50;
}



/* Entry: 10b7e7f28; end: 10b7e7f33;  */

bool FUN_10b7e7f28(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e7f34; end: 10b7e7faf;  */

undefined * FUN_10b7e7f34(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fad58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f878d8,
                        &UNK_10e5e23ec,&UNK_10e5e2438,4,FUN_10b7e7fb0,0);
    do {
      if (puRam00000001137fad58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fad58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fad58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fad58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fad58;
}



/* Entry: 10b7e7fb0; end: 10b7e7fbb;  */

bool FUN_10b7e7fb0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7e7fbc; end: 10b7e804b;  */

undefined * FUN_10b7e7fbc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fad60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f878f8,
                        &UNK_10e5e2448,&UNK_10e5e24a8,4,FUN_10b7e804c,0,&UNK_10e5e24b8);
    do {
      if (puRam00000001137fad60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fad60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fad60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fad60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fad60;
}



/* Entry: 10b7e804c; end: 10b7e8057;  */

bool FUN_10b7e804c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7e8058; end: 10b7e80d3;  */

undefined * FUN_10b7e8058(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fad68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87918,
                        &UNK_10e5e24c9,&UNK_10e5e250c,3,FUN_10b7e80d4,0);
    do {
      if (puRam00000001137fad68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fad68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fad68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fad68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fad68;
}



/* Entry: 10b7e80d4; end: 10b7e80df;  */

bool FUN_10b7e80d4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e80e0; end: 10b7e815b;  */

undefined * FUN_10b7e80e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fad70 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87938,
                        &UNK_10e5e2518,&UNK_10e5e2548,3,FUN_10b7e815c,0);
    do {
      if (puRam00000001137fad70 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fad70;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fad70,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fad70 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fad70;
}



/* Entry: 10b7e815c; end: 10b7e8167;  */

bool FUN_10b7e815c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e8168; end: 10b7e81e3;  */

undefined * FUN_10b7e8168(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fad78 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87958,
                        &UNK_10e5e2554,&UNK_10e5e2570,2,FUN_10b7e81e4,0);
    do {
      if (puRam00000001137fad78 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fad78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fad78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fad78 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fad78;
}



/* Entry: 10b7e81e4; end: 10b7e81ef;  */

bool FUN_10b7e81e4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e81f0; end: 10b7e826b;  */

undefined * FUN_10b7e81f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fad80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f87978,
                        &UNK_10e5e2578,&UNK_10e5e25a0,4,FUN_10b7e826c,0);
    do {
      if (puRam00000001137fad80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fad80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fad80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fad80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fad80;
}



/* Entry: 10b7e826c; end: 10b7e8277;  */

bool FUN_10b7e826c(uint param_1)

{
  return param_1 < 4;
}


