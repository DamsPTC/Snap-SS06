/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7e13f8; end: 10b7e145f; +[SCAdsSessionPauseResumeEvent descriptor] */

void FUN_10b7e13f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa620 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd84c0,
                        &PTR____CFConstantStringClassReference_110f85e18,
                        &PTR_s_snapchat_ads_request_schema_1133e9bc8,&PTR_DAT_1133e9ce0,2,0xc,0x1c);
    puRam00000001137fa620 = puVar1;
  }
  return;
}



/* Entry: 10b7e1460; end: 10b7e14c7; +[SCAdsFlushEvent descriptor] */

void FUN_10b7e1460(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa628 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8510,
                        &PTR____CFConstantStringClassReference_110f85e38,
                        &PTR_s_snapchat_ads_request_schema_1133e9bc8,0,0,4,0x1c);
    puRam00000001137fa628 = puVar1;
  }
  return;
}



/* Entry: 10b7e14c8; end: 10b7e152f; +[SCAdsMapSessionExitEvent descriptor] */

void FUN_10b7e14c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa630 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8560,
                        &PTR____CFConstantStringClassReference_110f85e58,
                        &PTR_s_snapchat_ads_request_schema_1133e9bc8,&PTR_s_trigger_1133e9c60,1,8,
                        0x1c);
    puRam00000001137fa630 = puVar1;
  }
  return;
}



/* Entry: 10b7e1530; end: 10b7e1597; +[SCAdsSessionRestartEvent descriptor] */

void FUN_10b7e1530(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa638 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd85b0,
                        &PTR____CFConstantStringClassReference_110f85e78,
                        &PTR_s_snapchat_ads_request_schema_1133e9bc8,0,0,4,0x1c);
    puRam00000001137fa638 = puVar1;
  }
  return;
}



/* Entry: 10b7e1598; end: 10b7e15ff; +[SCAdsSessionStartEvent descriptor] */

void FUN_10b7e1598(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa640 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8600,
                        &PTR____CFConstantStringClassReference_110f85e98,
                        &PTR_s_snapchat_ads_request_schema_1133e9bc8,&PTR_DAT_1133e9c80,1,4,0x1c);
    puRam00000001137fa640 = puVar1;
  }
  return;
}



/* Entry: 10b7e1600; end: 10b7e1667; +[SCAdsStoryImpressionTrack descriptor] */

void FUN_10b7e1600(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa648 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd86a0,
                        &PTR____CFConstantStringClassReference_110f85eb8,
                        &PTR_s_snapchat_ads_request_schema_1133ea0f8,&PTR_DAT_1133ea5f0,0x11,0x88,
                        0x1c);
    puRam00000001137fa648 = puVar1;
  }
  return;
}



/* Entry: 10b7e1668; end: 10b7e16f3; +[SCAdsStorySnapImpressionTrack descriptor] */

undefined * FUN_10b7e1668(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa650 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd86f0,
                        &PTR____CFConstantStringClassReference_110f85ed8,
                        &PTR_s_snapchat_ads_request_schema_1133ea0f8,&PTR_DAT_1133ea1f0,0x10,0x80,
                        0x1c);
    func_0x00010c229040();
    puRam00000001137fa650 = puVar1;
  }
  return puRam00000001137fa650;
}



/* Entry: 10b7e16f4; end: 10b7e177f; +[SCAdsTileImpressionTrack descriptor] */

undefined * FUN_10b7e16f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa658 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8740,
                        &PTR____CFConstantStringClassReference_110f85ef8,
                        &PTR_s_snapchat_ads_request_schema_1133ea0f8,&PTR_DAT_1133ea3f0,0x10,0x88,
                        0x1c);
    func_0x00010c229040();
    puRam00000001137fa658 = puVar1;
  }
  return puRam00000001137fa658;
}



/* Entry: 10b7e1780; end: 10b7e180b; +[SCAdsTileInteractionTrack descriptor] */

undefined * FUN_10b7e1780(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa660 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8790,
                        &PTR____CFConstantStringClassReference_110f85f18,
                        &PTR_s_snapchat_ads_request_schema_1133ea0f8,&PTR_DAT_1133ea150,5,0x30,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001137fa660 = puVar1;
  }
  return puRam00000001137fa660;
}



/* Entry: 10b7e180c; end: 10b7e18ef; +[SCAdsStoryAdHintInteractionTrack descriptor] */

void FUN_10b7e180c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa668 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd87e0,
                        &PTR____CFConstantStringClassReference_110f85f38,
                        &PTR_s_snapchat_ads_request_schema_1133ea0f8,&PTR_DAT_1133ea110,2,0x18,0x1c)
    ;
    puRam00000001137fa668 = puVar1;
  }
  return;
}



/* Entry: 10b7e18f0; end: 10b7e18fb;  */

bool FUN_10b7e18f0(uint param_1)

{
  return param_1 < 0x13;
}



/* Entry: 10b7e18fc; end: 10b7e19df; +[SCAdsAdToLensImpressionTrack descriptor] */

void FUN_10b7e18fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa678 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd88d0,
                        &PTR____CFConstantStringClassReference_110f85f78,
                        &PTR_s_snapchat_ads_request_schema_1133ea810,&PTR_DAT_1133ea828,2,0x18,0x1c)
    ;
    puRam00000001137fa678 = puVar1;
  }
  return;
}



/* Entry: 10b7e19e0; end: 10b7e19eb;  */

bool FUN_10b7e19e0(uint param_1)

{
  return param_1 < 0xe;
}



/* Entry: 10b7e19ec; end: 10b7e1a67;  */

undefined * FUN_10b7e19ec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa688 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85fb8,
                        &UNK_10e5dffac,&UNK_10e5dffd8,3,FUN_10b7e1a68,0);
    do {
      if (puRam00000001137fa688 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa688;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa688,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa688 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa688;
}



/* Entry: 10b7e1a68; end: 10b7e1a73;  */

bool FUN_10b7e1a68(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e1a74; end: 10b7e1aef;  */

undefined * FUN_10b7e1a74(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa690 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85fd8,
                        &UNK_10e5dffe4,&UNK_10e5e0004,3,FUN_10b7e1af0,0);
    do {
      if (puRam00000001137fa690 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa690;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa690,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa690 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa690;
}



/* Entry: 10b7e1af0; end: 10b7e1afb;  */

bool FUN_10b7e1af0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e1afc; end: 10b7e1b77;  */

undefined * FUN_10b7e1afc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa698 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f85ff8,
                        &UNK_10e5e0010,&UNK_10e5e004c,3,FUN_10b7e1b78,0);
    do {
      if (puRam00000001137fa698 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa698;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa698,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa698 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa698;
}



/* Entry: 10b7e1b78; end: 10b7e1b83;  */

bool FUN_10b7e1b78(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e1b84; end: 10b7e1bff;  */

undefined * FUN_10b7e1b84(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa6a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f86018,
                        &UNK_10e5e0058,&UNK_10e5e00c0,4,FUN_10b7e1c00,0);
    do {
      if (puRam00000001137fa6a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa6a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa6a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa6a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa6a0;
}



/* Entry: 10b7e1c00; end: 10b7e1c0b;  */

bool FUN_10b7e1c00(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7e1c0c; end: 10b7e1c87;  */

undefined * FUN_10b7e1c0c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa6a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f86038,
                        &UNK_10e5e00d0,&UNK_10e5e0110,4,FUN_10b7e1c88,0);
    do {
      if (puRam00000001137fa6a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa6a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa6a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa6a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa6a8;
}



/* Entry: 10b7e1c88; end: 10b7e1c93;  */

bool FUN_10b7e1c88(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7e1c94; end: 10b7e1d0f;  */

undefined * FUN_10b7e1c94(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa6b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f86058,
                        &UNK_10e5e0120,&UNK_10e5e0198,10,FUN_10b7e1d10,0);
    do {
      if (puRam00000001137fa6b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa6b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa6b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa6b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa6b0;
}



/* Entry: 10b7e1d10; end: 10b7e1d1b;  */

bool FUN_10b7e1d10(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b7e1d1c; end: 10b7e1d97;  */

undefined * FUN_10b7e1d1c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa6b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f86078,
                        &UNK_10e5e01c0,&UNK_10e5e0200,6,FUN_10b7e1d98,0);
    do {
      if (puRam00000001137fa6b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa6b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa6b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa6b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa6b8;
}



/* Entry: 10b7e1d98; end: 10b7e1da3;  */

bool FUN_10b7e1d98(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b7e1da4; end: 10b7e1e0b; +[SCAdsLensCarouselImpressionTrack descriptor] */

void FUN_10b7e1da4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa6c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8970,
                        &PTR____CFConstantStringClassReference_110f86098,
                        &PTR_s_snapchat_ads_request_schema_1133ea868,&PTR_DAT_1133eaa80,8,0x40,0x1c)
    ;
    puRam00000001137fa6c0 = puVar1;
  }
  return;
}



/* Entry: 10b7e1e0c; end: 10b7e1e73; +[SCAdsLensImpressionTrack descriptor] */

void FUN_10b7e1e0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa6c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd89c0,
                        &PTR____CFConstantStringClassReference_110f860b8,
                        &PTR_s_snapchat_ads_request_schema_1133ea868,&PTR_s_lensId_1133ead20,0x41,
                        0x1f0,0x1c);
    puRam00000001137fa6c8 = puVar1;
  }
  return;
}



/* Entry: 10b7e1e74; end: 10b7e1edb; +[SCAdsPostLensRenderUserInteractions descriptor] */

void FUN_10b7e1e74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa6d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8a10,
                        &PTR____CFConstantStringClassReference_110f860d8,
                        &PTR_s_snapchat_ads_request_schema_1133ea868,&PTR_DAT_1133ea940,3,0x20,0x1c)
    ;
    puRam00000001137fa6d0 = puVar1;
  }
  return;
}



/* Entry: 10b7e1edc; end: 10b7e1f43; +[SCAdsLensCreatorEvent descriptor] */

void FUN_10b7e1edc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa6d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8a60,
                        &PTR____CFConstantStringClassReference_110f860f8,
                        &PTR_s_snapchat_ads_request_schema_1133ea868,&PTR_s_trigger_1133ea880,2,0xc,
                        0x1c);
    puRam00000001137fa6d8 = puVar1;
  }
  return;
}



/* Entry: 10b7e1f44; end: 10b7e1fab; +[SCAdsShoppingLensTrackingEvent descriptor] */

void FUN_10b7e1f44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa6e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8ab0,
                        &PTR____CFConstantStringClassReference_110f86118,
                        &PTR_s_snapchat_ads_request_schema_1133ea868,&PTR_DAT_1133ea8c0,2,0xc,0x1c);
    puRam00000001137fa6e0 = puVar1;
  }
  return;
}



/* Entry: 10b7e1fac; end: 10b7e2013; +[SCAdsLensExplorerImpressionTrack descriptor] */

void FUN_10b7e1fac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa6e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8b00,
                        &PTR____CFConstantStringClassReference_110f86138,
                        &PTR_s_snapchat_ads_request_schema_1133ea868,&PTR_DAT_1133ea900,2,0x18,0x1c)
    ;
    puRam00000001137fa6e8 = puVar1;
  }
  return;
}



/* Entry: 10b7e2014; end: 10b7e207b; +[SCAdsLensTileImpressionTrack descriptor] */

void FUN_10b7e2014(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa6f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8b50,
                        &PTR____CFConstantStringClassReference_110f86158,
                        &PTR_s_snapchat_ads_request_schema_1133ea868,&PTR_DAT_1133ea9a0,3,0x20,0x1c)
    ;
    puRam00000001137fa6f0 = puVar1;
  }
  return;
}



/* Entry: 10b7e207c; end: 10b7e20e3; +[SCAdsTileViewImpressionTrack descriptor] */

void FUN_10b7e207c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa6f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8ba0,
                        &PTR____CFConstantStringClassReference_110f86178,
                        &PTR_s_snapchat_ads_request_schema_1133ea868,&PTR_s_lensId_1133eab80,0xd,
                        0x70,0x1c);
    puRam00000001137fa6f8 = puVar1;
  }
  return;
}



/* Entry: 10b7e20e4; end: 10b7e21c7; +[SCAdsLensStackImpressionTrack descriptor] */

void FUN_10b7e20e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa700 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8bf0,
                        &PTR____CFConstantStringClassReference_110f86198,
                        &PTR_s_snapchat_ads_request_schema_1133ea868,&PTR_DAT_1133eaa00,4,0x28,0x1c)
    ;
    puRam00000001137fa700 = puVar1;
  }
  return;
}



/* Entry: 10b7e21c8; end: 10b7e21d3;  */

bool FUN_10b7e21c8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7e21d4; end: 10b7e22b7; +[SCAdsSnapCreationInfo descriptor] */

void FUN_10b7e21d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa710 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8c90,
                        &PTR____CFConstantStringClassReference_110f861d8,
                        &PTR_s_snapchat_ads_request_schema_1133eb540,&PTR_s_camera_1133eb558,8,0x40,
                        0x1c);
    puRam00000001137fa710 = puVar1;
  }
  return;
}



/* Entry: 10b7e22b8; end: 10b7e22c3;  */

bool FUN_10b7e22b8(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b7e22c4; end: 10b7e234f; +[SCAdsUnlockableAttachmentImpression descriptor] */

undefined * FUN_10b7e22c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa720 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8d30,
                        &PTR____CFConstantStringClassReference_110f86218,
                        &PTR_s_snapchat_ads_request_schema_1133eb660,&PTR_DAT_1133eb678,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001137fa720 = puVar1;
  }
  return puRam00000001137fa720;
}



/* Entry: 10b7e2350; end: 10b7e23b7; +[SCAdsUnlockableLongformVideoView descriptor] */

void FUN_10b7e2350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa728 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8d80,
                        &PTR____CFConstantStringClassReference_110f86238,
                        &PTR_s_snapchat_ads_request_schema_1133eb660,&PTR_DAT_1133eb6f8,4,0x28,0x1c)
    ;
    puRam00000001137fa728 = puVar1;
  }
  return;
}



/* Entry: 10b7e23b8; end: 10b7e241f; +[SCAdsUnlockableLongformWebviewView descriptor] */

void FUN_10b7e23b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa730 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8dd0,
                        &PTR____CFConstantStringClassReference_110f86258,
                        &PTR_s_snapchat_ads_request_schema_1133eb660,&PTR_DAT_1133eb8b8,7,0x40,0x1c)
    ;
    puRam00000001137fa730 = puVar1;
  }
  return;
}



/* Entry: 10b7e2420; end: 10b7e2487; +[SCAdsUnlockableLongformAppInstall descriptor] */

void FUN_10b7e2420(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa738 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8e20,
                        &PTR____CFConstantStringClassReference_110f86278,
                        &PTR_s_snapchat_ads_request_schema_1133eb660,&PTR_DAT_1133eb778,5,0x30,0x1c)
    ;
    puRam00000001137fa738 = puVar1;
  }
  return;
}



/* Entry: 10b7e2488; end: 10b7e24ef; +[SCAdsUnlockableDeepLink descriptor] */

void FUN_10b7e2488(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8e70,
                        &PTR____CFConstantStringClassReference_110f86298,
                        &PTR_s_snapchat_ads_request_schema_1133eb660,&PTR_DAT_1133eb818,5,0x30,0x1c)
    ;
    puRam00000001137fa740 = puVar1;
  }
  return;
}



/* Entry: 10b7e24f0; end: 10b7e2557; +[SCAdsLensPerformanceMetrics descriptor] */

void FUN_10b7e24f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8f10,
                        &PTR____CFConstantStringClassReference_110f862b8,
                        &PTR_s_snapchat_ads_request_schema_1133eb998,&PTR_DAT_1133eb9b0,3,0x20,0x1c)
    ;
    puRam00000001137fa748 = puVar1;
  }
  return;
}



/* Entry: 10b7e2558; end: 10b7e25bf; +[SCAdsLensProductImpressionCollectionTrack descriptor] */

void FUN_10b7e2558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd8fb0,
                        &PTR____CFConstantStringClassReference_110f862d8,
                        &PTR_s_snapchat_ads_request_schema_1133eba10,&PTR_DAT_1133eba28,1,0x10,0x1c)
    ;
    puRam00000001137fa750 = puVar1;
  }
  return;
}



/* Entry: 10b7e25c0; end: 10b7e26a3; +[SCAdsLensProductImpressionTrack descriptor] */

void FUN_10b7e25c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa758 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9000,
                        &PTR____CFConstantStringClassReference_110f862f8,
                        &PTR_s_snapchat_ads_request_schema_1133eba10,&PTR_s_productId_1133eba48,10,
                        0x58,0x1c);
    puRam00000001137fa758 = puVar1;
  }
  return;
}



/* Entry: 10b7e26a4; end: 10b7e26af;  */

bool FUN_10b7e26a4(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b7e26b0; end: 10b7e272b;  */

undefined * FUN_10b7e26b0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa768 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f86338,
                        &UNK_10e5e03d0,&UNK_10e5e04b8,0xd,FUN_10b7e272c,0);
    do {
      if (puRam00000001137fa768 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa768;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa768,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa768 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa768;
}



/* Entry: 10b7e272c; end: 10b7e2737;  */

bool FUN_10b7e272c(uint param_1)

{
  return param_1 < 0xd;
}



/* Entry: 10b7e2738; end: 10b7e281b; +[SCAdsDeepLinkImpressionTrack descriptor] */

void FUN_10b7e2738(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa770 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9140,
                        &PTR____CFConstantStringClassReference_110f86358,
                        &PTR_s_snapchat_ads_request_schema_1133ebb88,&PTR_DAT_1133ebba0,0x11,0x80,
                        0x1c);
    puRam00000001137fa770 = puVar1;
  }
  return;
}



/* Entry: 10b7e281c; end: 10b7e2827;  */

bool FUN_10b7e281c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7e2828; end: 10b7e291f; +[SCAdsDeeplink descriptor] */

undefined * FUN_10b7e2828(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa780 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd91e0,
                        &PTR____CFConstantStringClassReference_110f3c9d8,&PTR_DAT_1133ebdc0,
                        &PTR_s_uri_1133ebdd8,0x1c,0xd8,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fa780 = puVar1;
  }
  return puRam00000001137fa780;
}



/* Entry: 10b7e2920; end: 10b7e292b;  */

bool FUN_10b7e2920(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7e292c; end: 10b7e29a7;  */

undefined * FUN_10b7e292c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa790 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f863b8,
                        &UNK_10e5e059c,&UNK_10e5e05c8,3,FUN_10b7e29a8,0);
    do {
      if (puRam00000001137fa790 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa790;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa790,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa790 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa790;
}



/* Entry: 10b7e29a8; end: 10b7e29b3;  */

bool FUN_10b7e29a8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e29b4; end: 10b7e2a1b; +[SCAdsAppInstall descriptor] */

void FUN_10b7e29b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa798 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd92d0,
                        &PTR____CFConstantStringClassReference_110f73918,&PTR_DAT_1133ec158,
                        &PTR_DAT_1133ec1b0,0x19,0xc0,0x1c);
    puRam00000001137fa798 = puVar1;
  }
  return;
}



/* Entry: 10b7e2a1c; end: 10b7e2a83; +[SCAdsCountryScreenshotList descriptor] */

void FUN_10b7e2a1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa7a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9320,
                        &PTR____CFConstantStringClassReference_110f863d8,&PTR_DAT_1133ec158,
                        &PTR_s_country_1133ec170,2,0x18,0x1c);
    puRam00000001137fa7a0 = puVar1;
  }
  return;
}



/* Entry: 10b7e2a84; end: 10b7e2aeb; +[SCAdsAppPrice descriptor] */

void FUN_10b7e2a84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa7a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd93c0,
                        &PTR____CFConstantStringClassReference_110f863f8,&PTR_DAT_1133ec4d0,
                        &PTR_s_price_1133ec4e8,2,0x18,0x1c);
    puRam00000001137fa7a8 = puVar1;
  }
  return;
}



/* Entry: 10b7e2aec; end: 10b7e2b53; +[SCAdsAppPopularityInfo descriptor] */

void FUN_10b7e2aec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa7b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9460,
                        &PTR____CFConstantStringClassReference_110f86418,&PTR_DAT_1133ec528,
                        &PTR_DAT_1133ec540,3,0x20,0x1c);
    puRam00000001137fa7b0 = puVar1;
  }
  return;
}



/* Entry: 10b7e2b54; end: 10b7e2bbb; +[SCAdsAppReview descriptor] */

void FUN_10b7e2b54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa7b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9500,
                        &PTR____CFConstantStringClassReference_110f86438,&PTR_DAT_1133ec5a0,
                        &PTR_DAT_1133ec5b8,10,0x58,0x1c);
    puRam00000001137fa7b8 = puVar1;
  }
  return;
}



/* Entry: 10b7e2bbc; end: 10b7e2c23; +[SCAdsPlayableMediaInfo descriptor] */

void FUN_10b7e2bbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa7c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd95a0,
                        &PTR____CFConstantStringClassReference_110f86458,&PTR_DAT_1133ec6f8,
                        &PTR_DAT_1133ec710,7,0x20,0x1c);
    puRam00000001137fa7c0 = puVar1;
  }
  return;
}



/* Entry: 10b7e2c24; end: 10b7e2c8b; +[SCAdsAppInstallImpressionTrack descriptor] */

void FUN_10b7e2c24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa7c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9640,
                        &PTR____CFConstantStringClassReference_110f86478,
                        &PTR_s_snapchat_ads_request_schema_1133ec7f0,&PTR_DAT_1133ec808,0x12,0x90,
                        0x1c);
    puRam00000001137fa7c8 = puVar1;
  }
  return;
}



/* Entry: 10b7e2c8c; end: 10b7e2cf3; +[SCAdsSKOverlayMetrics descriptor] */

void FUN_10b7e2c8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa7d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd96e0,
                        &PTR____CFConstantStringClassReference_110f86498,
                        &PTR_s_snapchat_ads_request_schema_1133eca48,&PTR_DAT_1133ecb80,0xd,0x70,
                        0x1c);
    puRam00000001137fa7d0 = puVar1;
  }
  return;
}



/* Entry: 10b7e2cf4; end: 10b7e2d6f; +[SCAdsSKOverlayMetrics_Frame descriptor] */

undefined * FUN_10b7e2cf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa7d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9730,
                        &PTR____CFConstantStringClassReference_110e6ee18,
                        &PTR_s_snapchat_ads_request_schema_1133eca48,&PTR_DAT_1133ecb00,4,0x14,0x1c)
    ;
    func_0x00010c228780();
    puRam00000001137fa7d8 = puVar1;
  }
  return puRam00000001137fa7d8;
}



/* Entry: 10b7e2d70; end: 10b7e2deb; +[SCAdsSKOverlayMetrics_CtaTap descriptor] */

undefined * FUN_10b7e2d70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa7e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9780,
                        &PTR____CFConstantStringClassReference_110f864b8,
                        &PTR_s_snapchat_ads_request_schema_1133eca48,&PTR_DAT_1133ecaa0,3,0x18,0x1c)
    ;
    func_0x00010c228780();
    puRam00000001137fa7e0 = puVar1;
  }
  return puRam00000001137fa7e0;
}



/* Entry: 10b7e2dec; end: 10b7e2ee3; +[SCAdsSKOverlayMetrics_Error descriptor] */

undefined * FUN_10b7e2dec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa7e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd97d0,
                        &PTR____CFConstantStringClassReference_110dae318,
                        &PTR_s_snapchat_ads_request_schema_1133eca48,&PTR_s_domain_1133eca60,2,0x10,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137fa7e8 = puVar1;
  }
  return puRam00000001137fa7e8;
}



/* Entry: 10b7e2ee4; end: 10b7e2eef;  */

bool FUN_10b7e2ee4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e2ef0; end: 10b7e2f57; +[SCAdsLocalWebpageImpressionTrack descriptor] */

void FUN_10b7e2ef0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa7f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd98c0,
                        &PTR____CFConstantStringClassReference_110f864f8,
                        &PTR_s_snapchat_ads_request_schema_1133ecd20,&PTR_DAT_1133ecd38,4,0x28,0x1c)
    ;
    puRam00000001137fa7f8 = puVar1;
  }
  return;
}



/* Entry: 10b7e2f58; end: 10b7e303b; +[SCAdsLongformVideoImpressionTrack descriptor] */

void FUN_10b7e2f58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa800 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9960,
                        &PTR____CFConstantStringClassReference_110f86518,
                        &PTR_s_snapchat_ads_request_schema_1133ecdb8,&PTR_DAT_1133ecdd0,2,0x18,0x1c)
    ;
    puRam00000001137fa800 = puVar1;
  }
  return;
}



/* Entry: 10b7e303c; end: 10b7e3047;  */

bool FUN_10b7e303c(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b7e3048; end: 10b7e30af; +[SCAdsRemoteWebpageImpressionTrack descriptor] */

void FUN_10b7e3048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa810 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9a00,
                        &PTR____CFConstantStringClassReference_110f86558,
                        &PTR_s_snapchat_ads_request_schema_1133ece10,&PTR_DAT_1133ece28,0xf,0x78,
                        0x1c);
    puRam00000001137fa810 = puVar1;
  }
  return;
}



/* Entry: 10b7e30b0; end: 10b7e3117; +[SCAdsInfoCardConfig descriptor] */

void FUN_10b7e30b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa818 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9aa0,
                        &PTR____CFConstantStringClassReference_110f86578,&PTR_DAT_1133ed008,
                        &PTR_DAT_1133ed020,3,0x20,0x1c);
    puRam00000001137fa818 = puVar1;
  }
  return;
}



/* Entry: 10b7e3118; end: 10b7e317f; +[SCAdsAdStageAnimation descriptor] */

void FUN_10b7e3118(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa820 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9b40,
                        &PTR____CFConstantStringClassReference_110f86598,&PTR_DAT_1133ed080,
                        &PTR_s_initialProperties_1133ed098,2,0x18,0x1c);
    puRam00000001137fa820 = puVar1;
  }
  return;
}



/* Entry: 10b7e3180; end: 10b7e31fb; +[SCAdsAdStageAnimation_AdPropertyAnimation descriptor] */

undefined * FUN_10b7e3180(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa828 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9b90,
                        &PTR____CFConstantStringClassReference_110f865b8,&PTR_DAT_1133ed080,
                        &PTR_DAT_1133ed0d8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137fa828 = puVar1;
  }
  return puRam00000001137fa828;
}



/* Entry: 10b7e31fc; end: 10b7e3277; +[SCAdsAdStageAnimation_AdStagedAnimationProperties descriptor] */

undefined * FUN_10b7e31fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa830 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9be0,
                        &PTR____CFConstantStringClassReference_110f865d8,&PTR_DAT_1133ed080,
                        &PTR_s_width_1133ed118,6,0x38,0x1c);
    func_0x00010c228780();
    puRam00000001137fa830 = puVar1;
  }
  return puRam00000001137fa830;
}



/* Entry: 10b7e3278; end: 10b7e32df; +[SCAdsAnimationConfig descriptor] */

void FUN_10b7e3278(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa838 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9c80,
                        &PTR____CFConstantStringClassReference_110edf9d8,&PTR_DAT_1133ed1d8,
                        &PTR_DAT_1133ed1f0,2,0x18,0x1c);
    puRam00000001137fa838 = puVar1;
  }
  return;
}



/* Entry: 10b7e32e0; end: 10b7e3347; +[SCAdsShimmerAnimationProperties descriptor] */

void FUN_10b7e32e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa840 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9d20,
                        &PTR____CFConstantStringClassReference_110f865f8,&PTR_DAT_1133ed230,
                        &PTR_DAT_1133ed248,2,0x18,0x1c);
    puRam00000001137fa840 = puVar1;
  }
  return;
}



/* Entry: 10b7e3348; end: 10b7e33af; +[SCAdsPharmaAd descriptor] */

void FUN_10b7e3348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa848 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9dc0,
                        &PTR____CFConstantStringClassReference_110f86618,
                        &PTR_s_snapchat_ads_request_schema_1133ed288,&PTR_DAT_1133ed2a0,2,0x18,0x1c)
    ;
    puRam00000001137fa848 = puVar1;
  }
  return;
}



/* Entry: 10b7e33b0; end: 10b7e3417; +[SCAdsPharmaDisclaimerImpressions descriptor] */

void FUN_10b7e33b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa850 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9e10,
                        &PTR____CFConstantStringClassReference_110f86638,
                        &PTR_s_snapchat_ads_request_schema_1133ed288,
                        &PTR_s_importantSafetyInformation_1133ed2e0,5,0x30,0x1c);
    puRam00000001137fa850 = puVar1;
  }
  return;
}



/* Entry: 10b7e3418; end: 10b7e34fb; +[SCAdsPharmaDisclaimerClickInteractions descriptor] */

void FUN_10b7e3418(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa858 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9e60,
                        &PTR____CFConstantStringClassReference_110f86658,
                        &PTR_s_snapchat_ads_request_schema_1133ed288,
                        &PTR_s_importantSafetyInformation_1133ed380,5,0x30,0x1c);
    puRam00000001137fa858 = puVar1;
  }
  return;
}



/* Entry: 10b7e34fc; end: 10b7e3507;  */

bool FUN_10b7e34fc(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7e3508; end: 10b7e3583;  */

undefined * FUN_10b7e3508(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa868 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f86698,
                        &UNK_10e5e06d4,&UNK_10e5e070c,5,FUN_10b7e3584,0);
    do {
      if (puRam00000001137fa868 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa868;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa868,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa868 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa868;
}



/* Entry: 10b7e3584; end: 10b7e358f;  */

bool FUN_10b7e3584(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7e3590; end: 10b7e3687; +[SCAdsWebViewContext descriptor] */

undefined * FUN_10b7e3590(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa870 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9f00,
                        &PTR____CFConstantStringClassReference_110f866b8,
                        &PTR_s_snapchat_ads_request_schema_1133ed420,&PTR_DAT_1133ed438,0x31,0xd0,
                        0x1c);
    func_0x00010c2289e0();
    puRam00000001137fa870 = puVar1;
  }
  return puRam00000001137fa870;
}



/* Entry: 10b7e3688; end: 10b7e3693;  */

bool FUN_10b7e3688(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7e3694; end: 10b7e370f;  */

undefined * FUN_10b7e3694(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa880 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f866f8,
                        &UNK_10e5e0760,&UNK_10e5e0794,5,FUN_10b7e3710,0);
    do {
      if (puRam00000001137fa880 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa880;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa880,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa880 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa880;
}



/* Entry: 10b7e3710; end: 10b7e371b;  */

bool FUN_10b7e3710(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7e371c; end: 10b7e3813; +[SCAdsWebViewLoadInfo descriptor] */

undefined * FUN_10b7e371c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa888 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cd9ff0,
                        &PTR____CFConstantStringClassReference_110f86718,
                        &PTR_s_snapchat_ads_request_schema_1133eda58,&PTR_DAT_1133eda70,0x24,0x128,
                        0x1c);
    func_0x00010c2289e0();
    puRam00000001137fa888 = puVar1;
  }
  return puRam00000001137fa888;
}



/* Entry: 10b7e3814; end: 10b7e381f;  */

bool FUN_10b7e3814(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7e3820; end: 10b7e3887; +[SCAdsWebViewAutofillInfo descriptor] */

void FUN_10b7e3820(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa898 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cda0e0,
                        &PTR____CFConstantStringClassReference_110f86758,
                        &PTR_s_snapchat_ads_request_schema_1133edef0,&PTR_DAT_1133edf08,0x16,0xb0,
                        0x1c);
    puRam00000001137fa898 = puVar1;
  }
  return;
}



/* Entry: 10b7e3888; end: 10b7e38ef; +[SCAdsSubscribeImpressionTrack descriptor] */

void FUN_10b7e3888(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa8a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cda180,
                        &PTR____CFConstantStringClassReference_110f86778,
                        &PTR_s_snapchat_ads_request_schema_1133ee1c8,&PTR_DAT_1133ee1e0,2,0x18,0x1c)
    ;
    puRam00000001137fa8a0 = puVar1;
  }
  return;
}



/* Entry: 10b7e38f0; end: 10b7e39d3; +[SCAdsThreeVImpressionTrack descriptor] */

void FUN_10b7e38f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa8a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cda220,
                        &PTR____CFConstantStringClassReference_110f86798,
                        &PTR_s_snapchat_ads_request_schema_1133ee220,&PTR_DAT_1133ee238,1,0x10,0x1c)
    ;
    puRam00000001137fa8a8 = puVar1;
  }
  return;
}



/* Entry: 10b7e39d4; end: 10b7e39df;  */

bool FUN_10b7e39d4(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10b7e39e0; end: 10b7e3a5b;  */

undefined * FUN_10b7e39e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fa8b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f867d8,
                        &UNK_10e5e08b4,&UNK_10e5e08dc,3,FUN_10b7e3a5c,0);
    do {
      if (puRam00000001137fa8b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fa8b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fa8b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fa8b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fa8b8;
}



/* Entry: 10b7e3a5c; end: 10b7e3a67;  */

bool FUN_10b7e3a5c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7e3a68; end: 10b7e3acf; +[SCAdsUnlockableViewImpressionTrack descriptor] */

void FUN_10b7e3a68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa8c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cda2c0,
                        &PTR____CFConstantStringClassReference_110f867f8,
                        &PTR_s_snapchat_ads_request_schema_1133ee258,&PTR_DAT_1133ee2b0,8,0x40,0x1c)
    ;
    puRam00000001137fa8c0 = puVar1;
  }
  return;
}



/* Entry: 10b7e3ad0; end: 10b7e3b37; +[SCAdsSponsoredInfo descriptor] */

void FUN_10b7e3ad0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa8c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cda310,
                        &PTR____CFConstantStringClassReference_110f7b518,
                        &PTR_s_snapchat_ads_request_schema_1133ee258,&PTR_DAT_1133ee270,2,0x18,0x1c)
    ;
    puRam00000001137fa8c8 = puVar1;
  }
  return;
}



/* Entry: 10b7e3b38; end: 10b7e3b9f; +[SCAdsDeviceInfo descriptor] */

void FUN_10b7e3b38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa8d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cda3b0,
                        &PTR____CFConstantStringClassReference_110f04078,&PTR_DAT_1133ee3b0,
                        &PTR_DAT_1133ee3c8,1,0x10,0x1c);
    puRam00000001137fa8d0 = puVar1;
  }
  return;
}



/* Entry: 10b7e3ba0; end: 10b7e3c83; +[SCAdsScreenDimension descriptor] */

void FUN_10b7e3ba0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fa8d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cda400,
                        &PTR____CFConstantStringClassReference_110f86818,&PTR_DAT_1133ee3b0,
                        &PTR_s_height_1133ee3e8,2,0x18,0x1c);
    puRam00000001137fa8d8 = puVar1;
  }
  return;
}


