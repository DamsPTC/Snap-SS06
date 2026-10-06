/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b75401c; end: 10b754083; +[SCAdsStoreContext descriptor] */

void FUN_10b75401c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9408 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9340,
                        &PTR____CFConstantStringClassReference_110e019d8,&PTR_DAT_1133cd180,
                        &PTR_s_storeId_1133cd198,2,0x18,0x1c);
    puRam00000001137f9408 = puVar1;
  }
  return;
}



/* Entry: 10b754084; end: 10b7540eb; +[SCAdsPdpContext descriptor] */

void FUN_10b754084(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9410 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9390,
                        &PTR____CFConstantStringClassReference_110f7a938,&PTR_DAT_1133cd180,
                        &PTR_s_productId_1133cd1d8,2,0x18,0x1c);
    puRam00000001137f9410 = puVar1;
  }
  return;
}



/* Entry: 10b7540ec; end: 10b7541cf; +[SCAdsOrganicAdToken descriptor] */

void FUN_10b7540ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9418 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb93e0,
                        &PTR____CFConstantStringClassReference_110f7a958,&PTR_DAT_1133cd180,
                        &PTR_DAT_1133cd218,2,0x18,0x1c);
    puRam00000001137f9418 = puVar1;
  }
  return;
}



/* Entry: 10b7541d0; end: 10b7541db;  */

bool FUN_10b7541d0(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b7541dc; end: 10b754257; +[SCAdsPharmaDisclaimerCta descriptor] */

undefined * FUN_10b7541dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9428 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9480,
                        &PTR____CFConstantStringClassReference_110f7a998,&PTR_DAT_1133cd258,
                        &PTR_DAT_1133cd270,2,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9428 = puVar1;
  }
  return puRam00000001137f9428;
}



/* Entry: 10b754258; end: 10b7542bf; +[SCAdsPromotionInfo descriptor] */

void FUN_10b754258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9430 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9520,
                        &PTR____CFConstantStringClassReference_110f7a9b8,&PTR_DAT_1133cd2b0,
                        &PTR_DAT_1133cd2c8,3,0x20,0x1c);
    puRam00000001137f9430 = puVar1;
  }
  return;
}



/* Entry: 10b7542c0; end: 10b7543b7; +[SCAdsWebView descriptor] */

undefined * FUN_10b7542c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9438 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb95c0,
                        &PTR____CFConstantStringClassReference_110e44f18,&PTR_DAT_1133cd328,
                        &PTR_s_URL_1133cd340,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9438 = puVar1;
  }
  return puRam00000001137f9438;
}



/* Entry: 10b7543b8; end: 10b7543c3;  */

bool FUN_10b7543b8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7543c4; end: 10b75443f;  */

undefined * FUN_10b7543c4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9448 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a9f8,
                        &UNK_10e5d8c70,&UNK_10e5d8c84,3,FUN_10b754440,0);
    do {
      if (puRam00000001137f9448 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9448;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9448,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9448 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9448;
}



/* Entry: 10b754440; end: 10b75444b;  */

bool FUN_10b754440(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b75444c; end: 10b7544b3; +[SCAdsCookieInfo descriptor] */

void FUN_10b75444c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9450 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9660,
                        &PTR____CFConstantStringClassReference_110f7aa18,&PTR_DAT_1133cd380,
                        &PTR_DAT_1133cd398,4,0x20,0x1c);
    puRam00000001137f9450 = puVar1;
  }
  return;
}



/* Entry: 10b7544b4; end: 10b75451b; +[SCAdsEngagementStreamMetadata descriptor] */

void FUN_10b7544b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9458 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9700,
                        &PTR____CFConstantStringClassReference_110f7aa38,&PTR_DAT_1133cd418,
                        &PTR_DAT_1133cd430,2,0x10,0x1c);
    puRam00000001137f9458 = puVar1;
  }
  return;
}



/* Entry: 10b75451c; end: 10b754597; +[SCAdsEngagementStreamScript descriptor] */

undefined * FUN_10b75451c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9460 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9750,
                        &PTR____CFConstantStringClassReference_110f7aa58,&PTR_DAT_1133cd418,
                        &PTR_DAT_1133cd470,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9460 = puVar1;
  }
  return puRam00000001137f9460;
}



/* Entry: 10b754598; end: 10b754613; +[SCAdsWebViewMetadata descriptor] */

undefined * FUN_10b754598(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9468 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb97f0,
                        &PTR____CFConstantStringClassReference_110f7aa78,&PTR_DAT_1133cd4b0,
                        &PTR_s_id_p_1133cd4c8,0xe,0x78,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9468 = puVar1;
  }
  return puRam00000001137f9468;
}



/* Entry: 10b754614; end: 10b75468f; +[SCWebViewResourceInfo descriptor] */

undefined * FUN_10b754614(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9470 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9890,
                        &PTR____CFConstantStringClassReference_110f7aa98,&PTR_DAT_1133cd688,
                        &PTR_DAT_1133cd6a0,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9470 = puVar1;
  }
  return puRam00000001137f9470;
}



/* Entry: 10b754690; end: 10b75470b; +[SCAdsWebViewInHouseCache descriptor] */

undefined * FUN_10b754690(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9478 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9930,
                        &PTR____CFConstantStringClassReference_110f7aab8,&PTR_DAT_1133cd6e0,
                        &PTR_DAT_1133cd6f8,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9478 = puVar1;
  }
  return puRam00000001137f9478;
}



/* Entry: 10b75470c; end: 10b7547ef; +[SCMEDIAImageSize descriptor] */

void FUN_10b75470c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9480 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb99d0,
                        &PTR____CFConstantStringClassReference_110f7aad8,&PTR_DAT_1133cd718,
                        &PTR_s_width_1133cd730,2,0xc,0x1c);
    puRam00000001137f9480 = puVar1;
  }
  return;
}



/* Entry: 10b7547f0; end: 10b7547fb;  */

bool FUN_10b7547f0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7547fc; end: 10b754863; +[SPCGPoint descriptor] */

void FUN_10b7547fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9490 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9a70,
                        &PTR____CFConstantStringClassReference_110e06b78,&PTR_DAT_1133cd778,
                        &PTR_s_lat_1133cd810,2,0x18,0x1c);
    puRam00000001137f9490 = puVar1;
  }
  return;
}



/* Entry: 10b754864; end: 10b7548cb; +[SPCGLineString descriptor] */

void FUN_10b754864(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9498 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9ac0,
                        &PTR____CFConstantStringClassReference_110ea5718,&PTR_DAT_1133cd778,
                        &PTR_s_pointsArray_1133cd790,1,0x10,0x1c);
    puRam00000001137f9498 = puVar1;
  }
  return;
}



/* Entry: 10b7548cc; end: 10b754933; +[SPCGLinearRing descriptor] */

void FUN_10b7548cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f94a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9b10,
                        &PTR____CFConstantStringClassReference_110f7ab18,&PTR_DAT_1133cd778,
                        &PTR_s_pointsArray_1133cd7b0,1,0x10,0x1c);
    puRam00000001137f94a0 = puVar1;
  }
  return;
}



/* Entry: 10b754934; end: 10b75499b; +[SPCGPolygon descriptor] */

void FUN_10b754934(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f94a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9b60,
                        &PTR____CFConstantStringClassReference_110e32f18,&PTR_DAT_1133cd778,
                        &PTR_DAT_1133cd7d0,1,0x10,0x1c);
    puRam00000001137f94a8 = puVar1;
  }
  return;
}



/* Entry: 10b75499c; end: 10b754a03; +[SPCGMultiPolygon descriptor] */

void FUN_10b75499c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f94b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9bb0,
                        &PTR____CFConstantStringClassReference_110f69178,&PTR_DAT_1133cd778,
                        &PTR_DAT_1133cd7f0,1,0x10,0x1c);
    puRam00000001137f94b0 = puVar1;
  }
  return;
}



/* Entry: 10b754a04; end: 10b754a6b; +[SPCGRect descriptor] */

void FUN_10b754a04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f94b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9c00,
                        &PTR____CFConstantStringClassReference_110f08ff8,&PTR_DAT_1133cd778,
                        &PTR_DAT_1133cd850,2,0x18,0x1c);
    puRam00000001137f94b8 = puVar1;
  }
  return;
}



/* Entry: 10b754a6c; end: 10b754ad3; +[SPCGCircle descriptor] */

void FUN_10b754a6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f94c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9c50,
                        &PTR____CFConstantStringClassReference_110f7ab38,&PTR_DAT_1133cd778,
                        &PTR_DAT_1133cd890,3,0x18,0x1c);
    puRam00000001137f94c0 = puVar1;
  }
  return;
}



/* Entry: 10b754ad4; end: 10b754b6f; +[SPCGGeometry descriptor] */

undefined * FUN_10b754ad4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f94c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9ca0,
                        &PTR____CFConstantStringClassReference_110ea5738,&PTR_DAT_1133cd778,
                        &PTR_DAT_1133cd8f0,7,0x40,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10e5d8cfc);
    puRam00000001137f94c8 = puVar1;
  }
  return puRam00000001137f94c8;
}



/* Entry: 10b754b70; end: 10b754bff;  */

undefined * FUN_10b754b70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f94d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7ab58,
                        &UNK_10e5d8d04,&UNK_10e5d8d54,10,FUN_10b754c00,0,&UNK_10e5d8d7c);
    do {
      if (puRam00000001137f94d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f94d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f94d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f94d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f94d0;
}



/* Entry: 10b754c00; end: 10b754c0b;  */

bool FUN_10b754c00(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b754c0c; end: 10b754c87;  */

undefined * FUN_10b754c0c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f94d8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7ab78,
                        &UNK_10e5d8d8a,&UNK_10e5d8da4,3,FUN_10b754c88,0);
    do {
      if (puRam00000001137f94d8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f94d8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f94d8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f94d8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f94d8;
}



/* Entry: 10b754c88; end: 10b754c93;  */

bool FUN_10b754c88(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b754c94; end: 10b754cfb; +[SCCTPGfycat descriptor] */

void FUN_10b754c94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f94e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9d40,
                        &PTR____CFConstantStringClassReference_110f7ab98,&PTR_DAT_1133cd9d0,
                        &PTR_DAT_1133cda88,0x11,0x70,0x1c);
    puRam00000001137f94e0 = puVar1;
  }
  return;
}



/* Entry: 10b754cfc; end: 10b754d77; +[SCCTPGfycat_MediaAsset descriptor] */

undefined * FUN_10b754cfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f94e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9d90,
                        &PTR____CFConstantStringClassReference_110f7abb8,&PTR_DAT_1133cd9d0,
                        &PTR_s_format_1133cd9e8,5,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f94e8 = puVar1;
  }
  return puRam00000001137f94e8;
}



/* Entry: 10b754d78; end: 10b754ddf; +[SCCTPGiphy descriptor] */

void FUN_10b754d78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f94f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9e30,
                        &PTR____CFConstantStringClassReference_110f7abd8,&PTR_DAT_1133cdca8,
                        &PTR_DAT_1133cdcc0,4,0x20,0x1c);
    puRam00000001137f94f0 = puVar1;
  }
  return;
}



/* Entry: 10b754de0; end: 10b754ec3; +[SCCTPLottie descriptor] */

void FUN_10b754de0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f94f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9ed0,
                        &PTR____CFConstantStringClassReference_110f7abf8,&PTR_DAT_1133cdd40,
                        &PTR_s_mediaContent_1133cdd58,1,0x10,0x1c);
    puRam00000001137f94f8 = puVar1;
  }
  return;
}



/* Entry: 10b754ec4; end: 10b754ecf;  */

bool FUN_10b754ec4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b754ed0; end: 10b754f4b; +[SCCTPSubtextInfo descriptor] */

undefined * FUN_10b754ed0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9508 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9f70,
                        &PTR____CFConstantStringClassReference_110e0b218,&PTR_DAT_1133cdd78,
                        &PTR_s_iconURL_1133cdd90,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9508 = puVar1;
  }
  return puRam00000001137f9508;
}



/* Entry: 10b754f4c; end: 10b754fb3; +[SCCTPRelatedTrackInfo descriptor] */

void FUN_10b754f4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9510 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9fc0,
                        &PTR____CFConstantStringClassReference_110f7ac38,&PTR_DAT_1133cdd78,
                        &PTR_s_trackId_1133cde10,4,0x28,0x1c);
    puRam00000001137f9510 = puVar1;
  }
  return;
}



/* Entry: 10b754fb4; end: 10b75502f; +[SCCTPMusicTrack descriptor] */

undefined * FUN_10b754fb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9518 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba010,
                        &PTR____CFConstantStringClassReference_110e0b0d8,&PTR_DAT_1133cdd78,
                        &PTR_s_trackId_1133cde90,0x16,0x88,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9518 = puVar1;
  }
  return puRam00000001137f9518;
}



/* Entry: 10b755030; end: 10b755097; +[SCCTPMusicArtist descriptor] */

void FUN_10b755030(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9520 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba0b0,
                        &PTR____CFConstantStringClassReference_110e0b0f8,&PTR_DAT_1133ce150,
                        &PTR_DAT_1133ce168,4,0x28,0x1c);
    puRam00000001137f9520 = puVar1;
  }
  return;
}



/* Entry: 10b755098; end: 10b75517b; +[SCCTPMusicArtistLink descriptor] */

void FUN_10b755098(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9528 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba150,
                        &PTR____CFConstantStringClassReference_110f7ac58,&PTR_DAT_1133ce1e8,
                        &PTR_s_userId_1133ce200,8,0x48,0x1c);
    puRam00000001137f9528 = puVar1;
  }
  return;
}



/* Entry: 10b75517c; end: 10b755187;  */

bool FUN_10b75517c(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10b755188; end: 10b7551ef; +[SCCTPStickerPack descriptor] */

void FUN_10b755188(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9538 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba1f0,
                        &PTR____CFConstantStringClassReference_110df00d8,&PTR_DAT_1133ce308,
                        &PTR_DAT_1133ce340,0xd,0x50,0x1c);
    puRam00000001137f9538 = puVar1;
  }
  return;
}



/* Entry: 10b7551f0; end: 10b75528b; +[SCCTPStickerPack_StickerEntity descriptor] */

undefined * FUN_10b7551f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9540 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba240,
                        &PTR____CFConstantStringClassReference_110f7ac98,&PTR_DAT_1133ce308,
                        &PTR_DAT_1133ce320,1,0x10,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cba1f0);
    puRam00000001137f9540 = puVar1;
  }
  return puRam00000001137f9540;
}



/* Entry: 10b75528c; end: 10b7552f3; +[SCCTPSnapSticker descriptor] */

void FUN_10b75528c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9548 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba2e0,
                        &PTR____CFConstantStringClassReference_110f7acb8,&PTR_DAT_1133ce4e0,
                        &PTR_DAT_1133ce4f8,5,0x28,0x1c);
    puRam00000001137f9548 = puVar1;
  }
  return;
}



/* Entry: 10b7552f4; end: 10b7553d7; +[SCCTPMiniAppMetadata descriptor] */

void FUN_10b7552f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9550 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba380,
                        &PTR____CFConstantStringClassReference_110f7acd8,&PTR_DAT_1133ce598,
                        &PTR_DAT_1133ce5b0,2,0x18,0x1c);
    puRam00000001137f9550 = puVar1;
  }
  return;
}



/* Entry: 10b7553d8; end: 10b7553e3;  */

bool FUN_10b7553d8(uint param_1)

{
  return param_1 < 0x1d;
}



/* Entry: 10b7553e4; end: 10b7554c7; +[SCCTPInfoSticker descriptor] */

void FUN_10b7553e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9560 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba420,
                        &PTR____CFConstantStringClassReference_110efe438,&PTR_DAT_1133ce5f0,
                        &PTR_DAT_1133ce608,1,8,0x1c);
    puRam00000001137f9560 = puVar1;
  }
  return;
}



/* Entry: 10b7554c8; end: 10b7554d3;  */

bool FUN_10b7554c8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7554d4; end: 10b75554f;  */

undefined * FUN_10b7554d4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9570 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7ad38,
                        &UNK_10e5d902c,&UNK_10e5d9104,0x10,FUN_10b755550,0);
    do {
      if (puRam00000001137f9570 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9570;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9570,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9570 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9570;
}



/* Entry: 10b755550; end: 10b75555b;  */

bool FUN_10b755550(uint param_1)

{
  return param_1 < 0x10;
}



/* Entry: 10b75555c; end: 10b7555d7;  */

undefined * FUN_10b75555c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9578 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7ad58,
                        &UNK_10e5d9144,&UNK_10e5d9168,5,FUN_10b7555d8,0);
    do {
      if (puRam00000001137f9578 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9578;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9578,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9578 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9578;
}



/* Entry: 10b7555d8; end: 10b7555e3;  */

bool FUN_10b7555d8(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7555e4; end: 10b75566f; +[SCCTPCTTargetedItem descriptor] */

undefined * FUN_10b7555e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9580 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba740,
                        &PTR____CFConstantStringClassReference_110f7ad78,&PTR_DAT_1133ce640,
                        &PTR_DAT_1133cea18,0x12,0x70,0x1c);
    func_0x00010c229040();
    puRam00000001137f9580 = puVar1;
  }
  return puRam00000001137f9580;
}



/* Entry: 10b755670; end: 10b7556f3; +[SCCTPCTTargetedItem_TargetedEntity descriptor] */

undefined * FUN_10b755670(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9588 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba768,
                        &PTR____CFConstantStringClassReference_110f7ad98,&PTR_DAT_1133ce640,
                        &PTR_DAT_1133ce6b8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f9588 = puVar1;
  }
  return puRam00000001137f9588;
}



/* Entry: 10b7556f4; end: 10b755777; +[SCCTPCTTargetedItem_TargetingRules descriptor] */

undefined * FUN_10b7556f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9590 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba790,
                        &PTR____CFConstantStringClassReference_110f7adb8,&PTR_DAT_1133ce640,
                        &PTR_DAT_1133cec58,0x1b,0xd0,0x1c);
    func_0x00010c228780();
    puRam00000001137f9590 = puVar1;
  }
  return puRam00000001137f9590;
}



/* Entry: 10b755778; end: 10b755813; +[SCCTPCTTargetedItem_Visibility descriptor] */

undefined * FUN_10b755778(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9598 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba7b8,
                        &PTR____CFConstantStringClassReference_110f4fe18,&PTR_DAT_1133ce640,
                        &PTR_DAT_1133ce778,3,0x20,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cba740);
    puRam00000001137f9598 = puVar1;
  }
  return puRam00000001137f9598;
}



/* Entry: 10b755814; end: 10b755897; +[SCCTPCTTargetedItem_Visibility_Off descriptor] */

undefined * FUN_10b755814(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f95a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba7e0,
                        &PTR____CFConstantStringClassReference_110f7add8,&PTR_DAT_1133ce640,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137f95a0 = puVar1;
  }
  return puRam00000001137f95a0;
}



/* Entry: 10b755898; end: 10b75591b; +[SCCTPCTTargetedItem_Visibility_Public descriptor] */

undefined * FUN_10b755898(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f95a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba808,
                        &PTR____CFConstantStringClassReference_110eaeab8,&PTR_DAT_1133ce640,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137f95a8 = puVar1;
  }
  return puRam00000001137f95a8;
}



/* Entry: 10b75591c; end: 10b75599f; +[SCCTPCTTargetedItem_Visibility_AllowList descriptor] */

undefined * FUN_10b75591c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f95b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba830,
                        &PTR____CFConstantStringClassReference_110ea5b58,&PTR_DAT_1133ce640,
                        &PTR_DAT_1133ce6f8,2,4,0x1c);
    func_0x00010c228780();
    puRam00000001137f95b0 = puVar1;
  }
  return puRam00000001137f95b0;
}



/* Entry: 10b7559a0; end: 10b755a3b; +[SCCTPCTTargetedItem_Schedule descriptor] */

undefined * FUN_10b7559a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f95b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba858,
                        &PTR____CFConstantStringClassReference_110e80f98,&PTR_DAT_1133ce640,
                        &PTR_DAT_1133ce838,4,0x28,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cba740);
    puRam00000001137f95b8 = puVar1;
  }
  return puRam00000001137f95b8;
}



/* Entry: 10b755a3c; end: 10b755abf; +[SCCTPCTTargetedItem_Schedule_TimeInterval descriptor] */

undefined * FUN_10b755a3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f95c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba880,
                        &PTR____CFConstantStringClassReference_110f7adf8,&PTR_DAT_1133ce640,
                        &PTR_DAT_1133ce738,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f95c0 = puVar1;
  }
  return puRam00000001137f95c0;
}



/* Entry: 10b755ac0; end: 10b755b43; +[SCCTPCTTargetedItem_Schedule_ScheduleOnce descriptor] */

undefined * FUN_10b755ac0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f95c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba8a8,
                        &PTR____CFConstantStringClassReference_110f7ae18,&PTR_DAT_1133ce640,
                        &PTR_DAT_1133ce658,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f95c8 = puVar1;
  }
  return puRam00000001137f95c8;
}



/* Entry: 10b755b44; end: 10b755bc7; +[SCCTPCTTargetedItem_Schedule_Repeat descriptor] */

undefined * FUN_10b755b44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f95d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba8d0,
                        &PTR____CFConstantStringClassReference_110f7ae38,&PTR_DAT_1133ce640,
                        &PTR_DAT_1133ce958,6,0x30,0x1c);
    func_0x00010c228780();
    puRam00000001137f95d0 = puVar1;
  }
  return puRam00000001137f95d0;
}



/* Entry: 10b755bc8; end: 10b755c4b; +[SCCTPCTTargetedItem_Schedule_Intervals descriptor] */

undefined * FUN_10b755bc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f95d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba8f8,
                        &PTR____CFConstantStringClassReference_110f7ae58,&PTR_DAT_1133ce640,
                        &PTR_DAT_1133ce678,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f95d8 = puVar1;
  }
  return puRam00000001137f95d8;
}



/* Entry: 10b755c4c; end: 10b755ccf; +[SCCTPCTTargetedItem_Schedule_Always descriptor] */

undefined * FUN_10b755c4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f95e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba920,
                        &PTR____CFConstantStringClassReference_110f7ae78,&PTR_DAT_1133ce640,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137f95e0 = puVar1;
  }
  return puRam00000001137f95e0;
}



/* Entry: 10b755cd0; end: 10b755d53; +[SCCTPCTTargetedItem_UnlockMechanism descriptor] */

undefined * FUN_10b755cd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f95e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba948,
                        &PTR____CFConstantStringClassReference_110f7ae98,&PTR_DAT_1133ce640,
                        &PTR_s_snapcode_1133ce8b8,5,4,0x1c);
    func_0x00010c228780();
    puRam00000001137f95e8 = puVar1;
  }
  return puRam00000001137f95e8;
}



/* Entry: 10b755d54; end: 10b755dd7; +[SCCTPCTTargetedItem_FilterInfo descriptor] */

undefined * FUN_10b755d54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f95f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba970,
                        &PTR____CFConstantStringClassReference_110e73538,&PTR_DAT_1133ce640,
                        &PTR_DAT_1133ce7d8,3,8,0x1c);
    func_0x00010c228780();
    puRam00000001137f95f0 = puVar1;
  }
  return puRam00000001137f95f0;
}



/* Entry: 10b755dd8; end: 10b755ebb; +[SCCTPCTTargetedItems descriptor] */

void FUN_10b755dd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f95f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cba718,
                        &PTR____CFConstantStringClassReference_110f7aeb8,&PTR_DAT_1133ce640,
                        &PTR_s_itemsArray_1133ce698,1,0x10,0x1c);
    puRam00000001137f95f8 = puVar1;
  }
  return;
}



/* Entry: 10b755ebc; end: 10b755ec7;  */

bool FUN_10b755ebc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b755ec8; end: 10b755f43;  */

undefined * FUN_10b755ec8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9608 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7aef8,
                        &UNK_10e5d91a8,&UNK_10e5d92bc,0x17,FUN_10b755f44,0);
    do {
      if (puRam00000001137f9608 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9608;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9608,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9608 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9608;
}



/* Entry: 10b755f44; end: 10b755f4f;  */

bool FUN_10b755f44(uint param_1)

{
  return param_1 < 0x17;
}



/* Entry: 10b755f50; end: 10b755fcb;  */

undefined * FUN_10b755f50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9610 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7af18,
                        &UNK_10e5d9318,&UNK_10e5d9350,5,FUN_10b755fcc,0);
    do {
      if (puRam00000001137f9610 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9610;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9610,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9610 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9610;
}



/* Entry: 10b755fcc; end: 10b755fd7;  */

bool FUN_10b755fcc(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b755fd8; end: 10b756063; +[SCCTPTargetingExpression descriptor] */

undefined * FUN_10b755fd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9618 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbaa10,
                        &PTR____CFConstantStringClassReference_110f7af38,&PTR_DAT_1133cefc8,
                        &PTR_DAT_1133cf020,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137f9618 = puVar1;
  }
  return puRam00000001137f9618;
}



/* Entry: 10b756064; end: 10b7560df; +[SCCTPTargetingExpression_ParentNode descriptor] */

undefined * FUN_10b756064(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9620 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbaa60,
                        &PTR____CFConstantStringClassReference_110f7af58,&PTR_DAT_1133cefc8,
                        &PTR_DAT_1133cf060,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f9620 = puVar1;
  }
  return puRam00000001137f9620;
}



/* Entry: 10b7560e0; end: 10b75615b; +[SCCTPTargetingExpression_LeafNode descriptor] */

undefined * FUN_10b7560e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9628 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbaab0,
                        &PTR____CFConstantStringClassReference_110f7af78,&PTR_DAT_1133cefc8,
                        &PTR_s_category_1133cf120,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f9628 = puVar1;
  }
  return puRam00000001137f9628;
}



/* Entry: 10b75615c; end: 10b7561c3; +[SCCTPFlattenedRules descriptor] */

void FUN_10b75615c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9630 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbabf0,
                        &PTR____CFConstantStringClassReference_110f7af98,&PTR_DAT_1133cefc8,
                        &PTR_DAT_1133cefe0,1,0x10,0x1c);
    puRam00000001137f9630 = puVar1;
  }
  return;
}



/* Entry: 10b7561c4; end: 10b756247; +[SCCTPFlattenedRules_AndOperation descriptor] */

undefined * FUN_10b7561c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9638 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbac18,
                        &PTR____CFConstantStringClassReference_110f7afb8,&PTR_DAT_1133cefc8,
                        &PTR_DAT_1133cf000,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f9638 = puVar1;
  }
  return puRam00000001137f9638;
}



/* Entry: 10b756248; end: 10b7562e3; +[SCCTPFlattenedRules_CategoryRule descriptor] */

undefined * FUN_10b756248(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9640 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbac40,
                        &PTR____CFConstantStringClassReference_110f7afd8,&PTR_DAT_1133cefc8,
                        &PTR_DAT_1133cf180,3,0x20,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cbabf0);
    puRam00000001137f9640 = puVar1;
  }
  return puRam00000001137f9640;
}



/* Entry: 10b7562e4; end: 10b756367; +[SCCTPFlattenedRules_CategoryRule_StringRule descriptor] */

undefined * FUN_10b7562e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9648 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbac68,
                        &PTR____CFConstantStringClassReference_110f7aff8,&PTR_DAT_1133cefc8,
                        &PTR_DAT_1133cf0a0,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f9648 = puVar1;
  }
  return puRam00000001137f9648;
}



/* Entry: 10b756368; end: 10b7563eb; +[SCCTPFlattenedRules_CategoryRule_UIntRule descriptor] */

undefined * FUN_10b756368(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9650 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbac90,
                        &PTR____CFConstantStringClassReference_110f7b018,&PTR_DAT_1133cefc8,
                        &PTR_DAT_1133cf1e0,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f9650 = puVar1;
  }
  return puRam00000001137f9650;
}



/* Entry: 10b7563ec; end: 10b756453; +[SCCTPUIntRange descriptor] */

void FUN_10b7563ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9658 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbabc8,
                        &PTR____CFConstantStringClassReference_110f7b038,&PTR_DAT_1133cefc8,
                        &PTR_DAT_1133cf0e0,2,0xc,0x1c);
    puRam00000001137f9658 = puVar1;
  }
  return;
}



/* Entry: 10b756454; end: 10b75645f;  */

bool FUN_10b756454(uint param_1)

{
  return param_1 < 0xfc;
}



/* Entry: 10b756460; end: 10b7564db;  */

undefined * FUN_10b756460(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9668 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7b078,
                        &UNK_10e5d9a4c,&UNK_10e5d9ae4,0x2b,FUN_10b7564dc,0);
    do {
      if (puRam00000001137f9668 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9668;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9668,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9668 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9668;
}



/* Entry: 10b7564dc; end: 10b7564e7;  */

bool FUN_10b7564dc(uint param_1)

{
  return param_1 < 0x2b;
}



/* Entry: 10b7564e8; end: 10b75654f; +[SCCOMMONVersionNumber descriptor] */

void FUN_10b7564e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9670 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbadd0,
                        &PTR____CFConstantStringClassReference_110df41b8,&PTR_DAT_1133cf240,
                        &PTR_DAT_1133cf258,1,0x10,0x1c);
    puRam00000001137f9670 = puVar1;
  }
  return;
}



/* Entry: 10b756550; end: 10b756633; +[SCCOMMONVersionNumberRange descriptor] */

void FUN_10b756550(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9678 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbae20,
                        &PTR____CFConstantStringClassReference_110f7b098,&PTR_DAT_1133cf240,
                        &PTR_DAT_1133cf278,4,0x18,0x1c);
    puRam00000001137f9678 = puVar1;
  }
  return;
}



/* Entry: 10b756634; end: 10b75663f;  */

bool FUN_10b756634(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b756640; end: 10b7566bb;  */

undefined * FUN_10b756640(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9688 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7b0d8,
                        &UNK_10e5d9bc8,&UNK_10e5d9c24,7,FUN_10b7566bc,0);
    do {
      if (puRam00000001137f9688 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9688;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9688,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9688 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9688;
}



/* Entry: 10b7566bc; end: 10b7566c7;  */

bool FUN_10b7566bc(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b7566c8; end: 10b75672f; +[SCCOREAppVersion descriptor] */

void FUN_10b7566c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9690 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbaec0,
                        &PTR____CFConstantStringClassReference_110df4198,&PTR_DAT_1133cf2f8,
                        &PTR_s_versionNumber_1133cf310,2,0x10,0x1c);
    puRam00000001137f9690 = puVar1;
  }
  return;
}



/* Entry: 10b756730; end: 10b7567ab; +[SCCOREAppVersion_VersionNumber descriptor] */

undefined * FUN_10b756730(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9698 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbaf10,
                        &PTR____CFConstantStringClassReference_110df41b8,&PTR_DAT_1133cf2f8,
                        &PTR_DAT_1133cf350,4,0x14,0x1c);
    func_0x00010c228780();
    puRam00000001137f9698 = puVar1;
  }
  return puRam00000001137f9698;
}



/* Entry: 10b7567ac; end: 10b756813; +[SCCTPServerCameo descriptor] */

void FUN_10b7567ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f96a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbafb0,
                        &PTR____CFConstantStringClassReference_110f7b0f8,&PTR_DAT_1133cf3d0,
                        &PTR_DAT_1133cf3e8,8,0x40,0x1c);
    puRam00000001137f96a0 = puVar1;
  }
  return;
}



/* Entry: 10b756814; end: 10b7568f7; +[SCCameosApiVersion descriptor] */

void FUN_10b756814(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f96a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb050,
                        &PTR____CFConstantStringClassReference_110f7b118,&PTR_DAT_1133cf4e8,
                        &PTR_DAT_1133cf500,3,0x10,0x1c);
    puRam00000001137f96a8 = puVar1;
  }
  return;
}



/* Entry: 10b7568f8; end: 10b756903;  */

bool FUN_10b7568f8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b756904; end: 10b75696b; +[SCCameosCustomTextParameters descriptor] */

void FUN_10b756904(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f96b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb140,
                        &PTR____CFConstantStringClassReference_110f7b158,&PTR_DAT_1133cf560,
                        &PTR_DAT_1133cf658,6,0x20,0x1c);
    puRam00000001137f96b8 = puVar1;
  }
  return;
}



/* Entry: 10b75696c; end: 10b7569f7; +[SCCameosCustomTextParameters_FontResource descriptor] */

undefined * FUN_10b75696c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f96c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb190,
                        &PTR____CFConstantStringClassReference_110f7b178,&PTR_DAT_1133cf560,
                        &PTR_DAT_1133cf578,2,0x18,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cbb140);
    puRam00000001137f96c0 = puVar1;
  }
  return puRam00000001137f96c0;
}



/* Entry: 10b7569f8; end: 10b756aef; +[SCCameosCustomTextParameters_TextArea descriptor] */

undefined * FUN_10b7569f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f96c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb1e0,
                        &PTR____CFConstantStringClassReference_110f7b198,&PTR_DAT_1133cf560,
                        &PTR_DAT_1133cf5b8,5,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f96c8 = puVar1;
  }
  return puRam00000001137f96c8;
}



/* Entry: 10b756af0; end: 10b756afb;  */

bool FUN_10b756af0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b756afc; end: 10b756b63; +[SCCameosLens descriptor] */

void FUN_10b756afc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f96d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb2d0,
                        &PTR____CFConstantStringClassReference_110dcb5d8,&PTR_DAT_1133cf718,
                        &PTR_s_id_p_1133cf750,2,0x18,0x1c);
    puRam00000001137f96d8 = puVar1;
  }
  return;
}


