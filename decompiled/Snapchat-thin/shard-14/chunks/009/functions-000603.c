/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b70b364; end: 10b70b36f;  */

bool FUN_10b70b364(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b70b370; end: 10b70b3d7; +[SCContextV1ContextField descriptor] */

void FUN_10b70b370(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8238 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caa6b0,
                        &PTR____CFConstantStringClassReference_110f73a58,&PTR_DAT_1133c0580,
                        &PTR_DAT_1133c05d8,2,0x18,0x1c);
    puRam00000001137f8238 = puVar1;
  }
  return;
}



/* Entry: 10b70b3d8; end: 10b70b43f; +[SCContextV1GroupMessageIdentifier descriptor] */

void FUN_10b70b3d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8240 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caa700,
                        &PTR____CFConstantStringClassReference_110f73a78,&PTR_DAT_1133c0580,
                        &PTR_s_messageId_1133c0798,4,0x28,0x1c);
    puRam00000001137f8240 = puVar1;
  }
  return;
}



/* Entry: 10b70b440; end: 10b70b4db; +[SCContextV1Image descriptor] */

undefined * FUN_10b70b440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8248 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caaa48,
                        &PTR____CFConstantStringClassReference_110dac698,&PTR_DAT_1133c0580,
                        &PTR_s_imageURL_1133c0918,5,0x30,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dd8a808);
    puRam00000001137f8248 = puVar1;
  }
  return puRam00000001137f8248;
}



/* Entry: 10b70b4dc; end: 10b70b55f; +[SCContextV1Image_InlineImage descriptor] */

undefined * FUN_10b70b4dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8250 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caaa70,
                        &PTR____CFConstantStringClassReference_110f73a98,&PTR_DAT_1133c0580,
                        &PTR_DAT_1133c0618,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8250 = puVar1;
  }
  return puRam00000001137f8250;
}



/* Entry: 10b70b560; end: 10b70b60b; +[SCContextV1Image_EncryptedImage descriptor] */

undefined * FUN_10b70b560(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8258 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caaa98,
                        &PTR____CFConstantStringClassReference_110f73ab8,&PTR_DAT_1133c0580,
                        &PTR_s_key_1133c0818,4,0x28,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10df2e908);
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112caaa48);
    puRam00000001137f8258 = puVar1;
  }
  return puRam00000001137f8258;
}



/* Entry: 10b70b60c; end: 10b70b68f; +[SCContextV1Image_ImageReference descriptor] */

undefined * FUN_10b70b60c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8260 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caaac0,
                        &PTR____CFConstantStringClassReference_110f73ad8,&PTR_DAT_1133c0580,
                        &PTR_s_resourceId_1133c0598,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8260 = puVar1;
  }
  return puRam00000001137f8260;
}



/* Entry: 10b70b690; end: 10b70b6f7; +[SCContextV1GeoLocation descriptor] */

void FUN_10b70b690(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8268 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caa7f0,
                        &PTR____CFConstantStringClassReference_110e04498,&PTR_DAT_1133c0580,
                        &PTR_s_lat_1133c0898,4,0x14,0x1c);
    puRam00000001137f8268 = puVar1;
  }
  return;
}



/* Entry: 10b70b6f8; end: 10b70b75f; +[SCContextV1Point2f descriptor] */

void FUN_10b70b6f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8270 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caa840,
                        &PTR____CFConstantStringClassReference_110f73af8,&PTR_DAT_1133c0580,
                        &PTR_DAT_1133c0658,2,0xc,0x1c);
    puRam00000001137f8270 = puVar1;
  }
  return;
}



/* Entry: 10b70b760; end: 10b70b7c7; +[SCContextV1Size2i descriptor] */

void FUN_10b70b760(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8278 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caa890,
                        &PTR____CFConstantStringClassReference_110f73b18,&PTR_DAT_1133c0580,
                        &PTR_s_height_1133c0698,2,0xc,0x1c);
    puRam00000001137f8278 = puVar1;
  }
  return;
}



/* Entry: 10b70b7c8; end: 10b70b863; +[SCContextV1Html descriptor] */

undefined * FUN_10b70b7c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8280 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caaae8,
                        &PTR____CFConstantStringClassReference_110f73b38,&PTR_DAT_1133c0580,
                        &PTR_s_URL_1133c06d8,2,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10e5d4b8c);
    puRam00000001137f8280 = puVar1;
  }
  return puRam00000001137f8280;
}



/* Entry: 10b70b864; end: 10b70b8f7; +[SCContextV1Html_InlineHtml descriptor] */

undefined * FUN_10b70b864(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8288 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caab10,
                        &PTR____CFConstantStringClassReference_110f73b58,&PTR_DAT_1133c0580,
                        &PTR_DAT_1133c0718,2,0x18,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112caaae8);
    puRam00000001137f8288 = puVar1;
  }
  return puRam00000001137f8288;
}



/* Entry: 10b70b8f8; end: 10b70b973; +[SCContextV1VenueOverrides descriptor] */

undefined * FUN_10b70b8f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8290 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caa930,
                        &PTR____CFConstantStringClassReference_110f73b78,&PTR_DAT_1133c0580,
                        &PTR_DAT_1133c0a98,8,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f8290 = puVar1;
  }
  return puRam00000001137f8290;
}



/* Entry: 10b70b974; end: 10b70b9db; +[SCContextV1Address descriptor] */

void FUN_10b70b974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8298 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caa980,
                        &PTR____CFConstantStringClassReference_110f34e38,&PTR_DAT_1133c0580,
                        &PTR_DAT_1133c09b8,7,0x40,0x1c);
    puRam00000001137f8298 = puVar1;
  }
  return;
}



/* Entry: 10b70b9dc; end: 10b70ba43; +[SCContextV1Hours descriptor] */

void FUN_10b70b9dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f82a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caa9d0,
                        &PTR____CFConstantStringClassReference_110f73b98,&PTR_DAT_1133c0580,
                        &PTR_DAT_1133c05b8,1,0x10,0x1c);
    puRam00000001137f82a0 = puVar1;
  }
  return;
}



/* Entry: 10b70ba44; end: 10b70baab; +[SCContextV1TimeRange descriptor] */

void FUN_10b70ba44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f82a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caaa20,
                        &PTR____CFConstantStringClassReference_110ed74d8,&PTR_DAT_1133c0580,
                        &PTR_DAT_1133c0758,2,0xc,0x1c);
    puRam00000001137f82a8 = puVar1;
  }
  return;
}



/* Entry: 10b70baac; end: 10b70bb13; +[SDMDynamicAttachmentRenderingInfo descriptor] */

void FUN_10b70baac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f82b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caabb0,
                        &PTR____CFConstantStringClassReference_110f73bb8,&PTR_DAT_1133c0b98,
                        &PTR_DAT_1133c0bb0,2,0x18,0x1c);
    puRam00000001137f82b0 = puVar1;
  }
  return;
}



/* Entry: 10b70bb14; end: 10b70bbf7; +[SDMArticle descriptor] */

void FUN_10b70bb14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f82b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caac50,
                        &PTR____CFConstantStringClassReference_110f73bd8,&PTR_DAT_1133c0bf0,
                        &PTR_DAT_1133c0c08,4,0x28,0x1c);
    puRam00000001137f82b8 = puVar1;
  }
  return;
}



/* Entry: 10b70bbf8; end: 10b70bc03;  */

bool FUN_10b70bbf8(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b70bc04; end: 10b70bc7f;  */

undefined * FUN_10b70bc04(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f82c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f73c18,
                        &UNK_10e5d4be0,&UNK_10e5d4bf4,3,FUN_10b70bc80,0);
    do {
      if (puRam00000001137f82c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f82c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f82c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f82c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f82c8;
}



/* Entry: 10b70bc80; end: 10b70bc8b;  */

bool FUN_10b70bc80(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b70bc8c; end: 10b70bcf3; +[SDMEmojiType descriptor] */

void FUN_10b70bc8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f82d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caacf0,
                        &PTR____CFConstantStringClassReference_110f73c38,&PTR_DAT_1133c0ca8,
                        &PTR_s_id_p_1133c0cc0,1,0x10,0x1c);
    puRam00000001137f82d0 = puVar1;
  }
  return;
}



/* Entry: 10b70bcf4; end: 10b70bd8f; +[SDMExplanationPage descriptor] */

undefined * FUN_10b70bcf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f82d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caad40,
                        &PTR____CFConstantStringClassReference_110f73c58,&PTR_DAT_1133c0ca8,
                        &PTR_s_description_p_1133c0d20,4,0x28,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10e5d4c00);
    puRam00000001137f82d8 = puVar1;
  }
  return puRam00000001137f82d8;
}



/* Entry: 10b70bd90; end: 10b70bdf7; +[SDMUpdateInfo descriptor] */

void FUN_10b70bd90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f82e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caad90,
                        &PTR____CFConstantStringClassReference_110f73c78,&PTR_DAT_1133c0ca8,
                        &PTR_DAT_1133c0ce0,2,0x18,0x1c);
    puRam00000001137f82e0 = puVar1;
  }
  return;
}



/* Entry: 10b70bdf8; end: 10b70be93; +[SDMPageProperties descriptor] */

undefined * FUN_10b70bdf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f82e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caade0,
                        &PTR____CFConstantStringClassReference_110f73c98,&PTR_DAT_1133c0ca8,
                        &PTR_s_backgroundColor_1133c1020,0x15,0xa0,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10e5d4c07);
    puRam00000001137f82e8 = puVar1;
  }
  return puRam00000001137f82e8;
}



/* Entry: 10b70be94; end: 10b70befb; +[SDMPoll descriptor] */

void FUN_10b70be94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f82f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caae30,
                        &PTR____CFConstantStringClassReference_110db56d8,&PTR_DAT_1133c0ca8,
                        &PTR_DAT_1133c0f00,9,0x40,0x1c);
    puRam00000001137f82f0 = puVar1;
  }
  return;
}



/* Entry: 10b70befc; end: 10b70bf77; +[SDMPoll_PollPage descriptor] */

undefined * FUN_10b70befc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f82f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caaea8,
                        &PTR____CFConstantStringClassReference_110f73cb8,&PTR_DAT_1133c0ca8,
                        &PTR_s_id_p_1133c0da0,5,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001137f82f8 = puVar1;
  }
  return puRam00000001137f82f8;
}



/* Entry: 10b70bf78; end: 10b70c023; +[SDMPoll_PollPage_PollItem descriptor] */

undefined * FUN_10b70bf78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8300 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caaed0,
                        &PTR____CFConstantStringClassReference_110f73cd8,&PTR_DAT_1133c0ca8,
                        &PTR_s_id_p_1133c0e40,6,0x38,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10e5d4c18);
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112caaea8);
    puRam00000001137f8300 = puVar1;
  }
  return puRam00000001137f8300;
}



/* Entry: 10b70c024; end: 10b70c09f; +[SDMGameAttachment descriptor] */

undefined * FUN_10b70c024(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8308 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caaf70,
                        &PTR____CFConstantStringClassReference_110f73cf8,&PTR_DAT_1133c12c0,
                        &PTR_s_id_p_1133c12d8,6,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f8308 = puVar1;
  }
  return puRam00000001137f8308;
}



/* Entry: 10b70c0a0; end: 10b70c11b; +[SDMLongformVideo descriptor] */

undefined * FUN_10b70c0a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8310 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab010,
                        &PTR____CFConstantStringClassReference_110f73838,&PTR_DAT_1133c1398,
                        &PTR_s_id_p_1133c13b0,0xc,0x60,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f8310 = puVar1;
  }
  return puRam00000001137f8310;
}



/* Entry: 10b70c11c; end: 10b70c183; +[SDMNotificationSettings descriptor] */

void FUN_10b70c11c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8318 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab0b0,
                        &PTR____CFConstantStringClassReference_110f4d7d8,&PTR_DAT_1133c1530,
                        &PTR_DAT_1133c1548,2,0x18,0x1c);
    puRam00000001137f8318 = puVar1;
  }
  return;
}



/* Entry: 10b70c184; end: 10b70c20f; +[SDMSubscription descriptor] */

undefined * FUN_10b70c184(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8320 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab150,
                        &PTR____CFConstantStringClassReference_110e800f8,&PTR_DAT_1133c1598,
                        &PTR_DAT_1133c15f0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137f8320 = puVar1;
  }
  return puRam00000001137f8320;
}



/* Entry: 10b70c210; end: 10b70c2ab; +[SDMSubscription_CustomSubscribe descriptor] */

undefined * FUN_10b70c210(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8328 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab1f0,
                        &PTR____CFConstantStringClassReference_110f73d18,&PTR_DAT_1133c1598,
                        &PTR_s_displayName_1133c1650,5,0x30,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cab150);
    puRam00000001137f8328 = puVar1;
  }
  return puRam00000001137f8328;
}



/* Entry: 10b70c2ac; end: 10b70c32f; +[SDMSubscription_CustomSubscribe_Publisher descriptor] */

undefined * FUN_10b70c2ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8330 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab218,
                        &PTR____CFConstantStringClassReference_110dffd18,&PTR_DAT_1133c1598,
                        &PTR_s_publisherId_1133c15b0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8330 = puVar1;
  }
  return puRam00000001137f8330;
}



/* Entry: 10b70c330; end: 10b70c3b3; +[SDMSubscription_CustomSubscribe_PublicUser descriptor] */

undefined * FUN_10b70c330(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8338 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab240,
                        &PTR____CFConstantStringClassReference_110f73d38,&PTR_DAT_1133c1598,
                        &PTR_s_userId_1133c15d0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8338 = puVar1;
  }
  return puRam00000001137f8338;
}



/* Entry: 10b70c3b4; end: 10b70c41b; +[SDMSnapProStoryReplyQuote descriptor] */

void FUN_10b70c3b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8340 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab2e0,
                        &PTR____CFConstantStringClassReference_110f73d58,&PTR_DAT_1133c16f0,
                        &PTR_s_userId_1133c1708,2,0x18,0x1c);
    puRam00000001137f8340 = puVar1;
  }
  return;
}



/* Entry: 10b70c41c; end: 10b70c483; +[SDMPlaceMetadata descriptor] */

void FUN_10b70c41c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8348 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab380,
                        &PTR____CFConstantStringClassReference_110e5c718,&PTR_DAT_1133c1748,
                        &PTR_DAT_1133c1760,1,0x10,0x1c);
    puRam00000001137f8348 = puVar1;
  }
  return;
}



/* Entry: 10b70c484; end: 10b70c4eb; +[SDMQuestionStickerReplyQuote descriptor] */

void FUN_10b70c484(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8350 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab420,
                        &PTR____CFConstantStringClassReference_110f73d78,&PTR_DAT_1133c1780,
                        &PTR_s_userId_1133c1798,1,0x10,0x1c);
    puRam00000001137f8350 = puVar1;
  }
  return;
}



/* Entry: 10b70c4ec; end: 10b70c553; +[SDMRepostToStoryInfo descriptor] */

void FUN_10b70c4ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8358 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab4c0,
                        &PTR____CFConstantStringClassReference_110f73d98,&PTR_DAT_1133c17b8,
                        &PTR_s_snapId_1133c17d0,2,0x18,0x1c);
    puRam00000001137f8358 = puVar1;
  }
  return;
}



/* Entry: 10b70c554; end: 10b70c637; +[SDMAttribution descriptor] */

void FUN_10b70c554(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8360 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab560,
                        &PTR____CFConstantStringClassReference_110f73db8,&PTR_DAT_1133c1810,
                        &PTR_s_userId_1133c1828,3,0x20,0x1c);
    puRam00000001137f8360 = puVar1;
  }
  return;
}



/* Entry: 10b70c638; end: 10b70c643;  */

bool FUN_10b70c638(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b70c644; end: 10b70c6ab; +[SDMSponsor descriptor] */

void FUN_10b70c644(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8370 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab600,
                        &PTR____CFConstantStringClassReference_110f73df8,&PTR_DAT_1133c1888,
                        &PTR_s_profileId_1133c18a0,3,0x18,0x1c);
    puRam00000001137f8370 = puVar1;
  }
  return;
}



/* Entry: 10b70c6ac; end: 10b70c6b7;  */

bool FUN_10b70c6ac(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b70c6b8; end: 10b70c71f; +[SDMCameoMetadata descriptor] */

void FUN_10b70c6b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8380 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab6f0,
                        &PTR____CFConstantStringClassReference_110f73e38,&PTR_DAT_1133c1900,
                        &PTR_DAT_1133c1918,4,0x28,0x1c);
    puRam00000001137f8380 = puVar1;
  }
  return;
}



/* Entry: 10b70c720; end: 10b70c787; +[SCCameosCameoBoltContentObject descriptor] */

void FUN_10b70c720(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8388 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab790,
                        &PTR____CFConstantStringClassReference_110f73e58,&PTR_DAT_1133c1998,
                        &PTR_s_contentObject_1133c19b0,1,0x10,0x1c);
    puRam00000001137f8388 = puVar1;
  }
  return;
}



/* Entry: 10b70c788; end: 10b70c7ef; +[SDMCreativeKitSourceApp descriptor] */

void FUN_10b70c788(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8390 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab830,
                        &PTR____CFConstantStringClassReference_110f73e78,&PTR_DAT_1133c19d0,
                        &PTR_DAT_1133c19e8,2,0x18,0x1c);
    puRam00000001137f8390 = puVar1;
  }
  return;
}



/* Entry: 10b70c7f0; end: 10b70c8d3; +[SDMCreativeToolsAnalytics descriptor] */

void FUN_10b70c7f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8398 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab8d0,
                        &PTR____CFConstantStringClassReference_110f73e98,&PTR_DAT_1133c1a28,
                        &PTR_DAT_1133c1a40,2,4,0x1c);
    puRam00000001137f8398 = puVar1;
  }
  return;
}



/* Entry: 10b70c8d4; end: 10b70c8df;  */

bool FUN_10b70c8d4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b70c8e0; end: 10b70c947; +[SDMEditInfo descriptor] */

void FUN_10b70c8e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f83a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab970,
                        &PTR____CFConstantStringClassReference_110f73ed8,&PTR_DAT_1133c1a80,
                        &PTR_s_playback_1133c1a98,2,0x18,0x1c);
    puRam00000001137f83a8 = puVar1;
  }
  return;
}



/* Entry: 10b70c948; end: 10b70c9c3; +[SDMEditInfo_SnapEditor descriptor] */

undefined * FUN_10b70c948(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f83b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cab9c0,
                        &PTR____CFConstantStringClassReference_110f73ef8,&PTR_DAT_1133c1a80,
                        &PTR_s_version_1133c1b18,4,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f83b0 = puVar1;
  }
  return puRam00000001137f83b0;
}



/* Entry: 10b70c9c4; end: 10b70cabb; +[SDMEditInfo_SnapEditor_SnapEditorClientInfo descriptor] */

undefined * FUN_10b70c9c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f83b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caba10,
                        &PTR____CFConstantStringClassReference_110f73f18,&PTR_DAT_1133c1a80,
                        &PTR_s_os_1133c1ad8,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f83b8 = puVar1;
  }
  return puRam00000001137f83b8;
}



/* Entry: 10b70cabc; end: 10b70cac7;  */

bool FUN_10b70cabc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b70cac8; end: 10b70cb43;  */

undefined * FUN_10b70cac8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f83c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f73f58,
                        &UNK_10e5d4d48,&UNK_10e5d4d78,4,FUN_10b70cb44,0);
    do {
      if (puRam00000001137f83c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f83c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f83c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f83c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f83c8;
}



/* Entry: 10b70cb44; end: 10b70cb4f;  */

bool FUN_10b70cb44(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b70cb50; end: 10b70cbdb; +[SDMGeneratedCameo descriptor] */

undefined * FUN_10b70cb50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f83d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cabab0,
                        &PTR____CFConstantStringClassReference_110f73f78,&PTR_DAT_1133c1ba0,
                        &PTR_s_source_1133c1bb8,6,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001137f83d0 = puVar1;
  }
  return puRam00000001137f83d0;
}



/* Entry: 10b70cbdc; end: 10b70ccbf; +[SDMLegacyMultisnap descriptor] */

void FUN_10b70cbdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f83d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cabb50,
                        &PTR____CFConstantStringClassReference_110f73f98,&PTR_DAT_1133c1c78,
                        &PTR_DAT_1133c1c90,6,0x20,0x1c);
    puRam00000001137f83d8 = puVar1;
  }
  return;
}



/* Entry: 10b70ccc0; end: 10b70cccb;  */

bool FUN_10b70ccc0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b70cccc; end: 10b70cd47;  */

undefined * FUN_10b70cccc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f83f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f73fd8,
                        &UNK_10e5d4dc4,&UNK_10e5d4de8,3,FUN_10b70cd48,0);
    do {
      if (puRam00000001137f83f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f83f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f83f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f83f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f83f0;
}



/* Entry: 10b70cd48; end: 10b70cd53;  */

bool FUN_10b70cd48(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b70cd54; end: 10b70cdcf; +[SCLensSbEncryptionData descriptor] */

undefined * FUN_10b70cd54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f83f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cabc90,
                        &PTR____CFConstantStringClassReference_110f73ff8,&PTR_DAT_1133c1e28,
                        &PTR_s_key_1133c2000,5,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f83f8 = puVar1;
  }
  return puRam00000001137f83f8;
}



/* Entry: 10b70cdd0; end: 10b70ce37; +[SCLensSbPlayerData descriptor] */

void FUN_10b70cdd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8400 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cabce0,
                        &PTR____CFConstantStringClassReference_110f74018,&PTR_DAT_1133c1e28,
                        &PTR_DAT_1133c1ee0,2,0x18,0x1c);
    puRam00000001137f8400 = puVar1;
  }
  return;
}



/* Entry: 10b70ce38; end: 10b70ce9f; +[SCLensSbSessionData descriptor] */

void FUN_10b70ce38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8408 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cabd30,
                        &PTR____CFConstantStringClassReference_110f3cfd8,&PTR_DAT_1133c1e28,
                        &PTR_DAT_1133c1e40,1,0x10,0x1c);
    puRam00000001137f8408 = puVar1;
  }
  return;
}



/* Entry: 10b70cea0; end: 10b70cf1b; +[SCLensSbSnappableMedia descriptor] */

undefined * FUN_10b70cea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8410 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cabd80,
                        &PTR____CFConstantStringClassReference_110f74038,&PTR_DAT_1133c1e28,
                        &PTR_s_sessionId_1133c20a0,5,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f8410 = puVar1;
  }
  return puRam00000001137f8410;
}



/* Entry: 10b70cf1c; end: 10b70cf83; +[SCLensSbSnap3DData descriptor] */

void FUN_10b70cf1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8418 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cabdd0,
                        &PTR____CFConstantStringClassReference_110f74058,&PTR_DAT_1133c1e28,
                        &PTR_DAT_1133c1e60,1,4,0x1c);
    puRam00000001137f8418 = puVar1;
  }
  return;
}



/* Entry: 10b70cf84; end: 10b70cfeb; +[SCLensSbUsesCameraRoll descriptor] */

void FUN_10b70cf84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8420 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cabe20,
                        &PTR____CFConstantStringClassReference_110f74078,&PTR_DAT_1133c1e28,
                        &PTR_DAT_1133c1e80,1,4,0x1c);
    puRam00000001137f8420 = puVar1;
  }
  return;
}



/* Entry: 10b70cfec; end: 10b70d067; +[SCLensSbSnappableMessage descriptor] */

undefined * FUN_10b70cfec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8428 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cabe70,
                        &PTR____CFConstantStringClassReference_110f74098,&PTR_DAT_1133c1e28,
                        &PTR_DAT_1133c2260,0xb,0x50,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f8428 = puVar1;
  }
  return puRam00000001137f8428;
}



/* Entry: 10b70d068; end: 10b70d0cf; +[SCLensSbSnappable descriptor] */

void FUN_10b70d068(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8430 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cabec0,
                        &PTR____CFConstantStringClassReference_110f0f218,&PTR_DAT_1133c1e28,
                        &PTR_s_id_p_1133c2140,9,0x48,0x1c);
    puRam00000001137f8430 = puVar1;
  }
  return;
}



/* Entry: 10b70d0d0; end: 10b70d137; +[SCLensSbPutSnappableRequest descriptor] */

void FUN_10b70d0d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8438 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cabf10,
                        &PTR____CFConstantStringClassReference_110f740b8,&PTR_DAT_1133c1e28,
                        &PTR_DAT_1133c1f20,2,0x18,0x1c);
    puRam00000001137f8438 = puVar1;
  }
  return;
}



/* Entry: 10b70d138; end: 10b70d19f; +[SCLensSbPutSnappableResponse descriptor] */

void FUN_10b70d138(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8440 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cabf60,
                        &PTR____CFConstantStringClassReference_110f740d8,&PTR_DAT_1133c1e28,
                        &PTR_s_id_p_1133c1ea0,1,0x10,0x1c);
    puRam00000001137f8440 = puVar1;
  }
  return;
}



/* Entry: 10b70d1a0; end: 10b70d207; +[SCLensSbGetSnappableRequest descriptor] */

void FUN_10b70d1a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8448 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cabfb0,
                        &PTR____CFConstantStringClassReference_110f740f8,&PTR_DAT_1133c1e28,
                        &PTR_s_id_p_1133c1ec0,1,0x10,0x1c);
    puRam00000001137f8448 = puVar1;
  }
  return;
}



/* Entry: 10b70d208; end: 10b70d26f; +[SCLensSbGetSnappableResponse descriptor] */

void FUN_10b70d208(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8450 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac000,
                        &PTR____CFConstantStringClassReference_110f74118,&PTR_DAT_1133c1e28,
                        &PTR_s_data_p_1133c1f60,2,0x18,0x1c);
    puRam00000001137f8450 = puVar1;
  }
  return;
}



/* Entry: 10b70d270; end: 10b70d367; +[SCLensSbSnappableEncryptedKey descriptor] */

void FUN_10b70d270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8458 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac050,
                        &PTR____CFConstantStringClassReference_110f74138,&PTR_DAT_1133c1e28,
                        &PTR_DAT_1133c1fa0,3,0x20,0x1c);
    puRam00000001137f8458 = puVar1;
  }
  return;
}



/* Entry: 10b70d368; end: 10b70d373;  */

bool FUN_10b70d368(uint param_1)

{
  return param_1 < 0x52;
}



/* Entry: 10b70d374; end: 10b70d3ef;  */

undefined * FUN_10b70d374(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8468 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f74178,
                        &UNK_10e5d586e,&UNK_10e5d5898,3,FUN_10b70d3f0,0);
    do {
      if (puRam00000001137f8468 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8468;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8468,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8468 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8468;
}



/* Entry: 10b70d3f0; end: 10b70d3fb;  */

bool FUN_10b70d3f0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b70d3fc; end: 10b70d477;  */

undefined * FUN_10b70d3fc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8470 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f74198,
                        &UNK_10e5d58a4,&UNK_10e5d58f4,5,FUN_10b70d478,0);
    do {
      if (puRam00000001137f8470 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8470;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8470,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8470 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8470;
}



/* Entry: 10b70d478; end: 10b70d483;  */

bool FUN_10b70d478(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b70d484; end: 10b70d513;  */

undefined * FUN_10b70d484(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8478 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f741b8,
                        &UNK_10e5d5908,&UNK_10e5d5970,4,FUN_10b70d514,0,&UNK_10e5d5980);
    do {
      if (puRam00000001137f8478 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8478;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8478,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8478 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8478;
}



/* Entry: 10b70d514; end: 10b70d51f;  */

bool FUN_10b70d514(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b70d520; end: 10b70d59b;  */

undefined * FUN_10b70d520(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8480 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f741d8,
                        &UNK_10e5d5f80,&UNK_10e5d5990,2,FUN_10b70d59c,0);
    do {
      if (puRam00000001137f8480 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8480;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8480,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8480 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8480;
}



/* Entry: 10b70d59c; end: 10b70d5a7;  */

bool FUN_10b70d59c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b70d5a8; end: 10b70d637;  */

undefined * FUN_10b70d5a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8488 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f741f8,
                        &UNK_10e5d5998,&UNK_10e5d5ae0,0xb,FUN_10b70d638,0,&UNK_10e5d5b0c);
    do {
      if (puRam00000001137f8488 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8488;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8488,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8488 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8488;
}



/* Entry: 10b70d638; end: 10b70d643;  */

bool FUN_10b70d638(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 10b70d644; end: 10b70d6bf;  */

undefined * FUN_10b70d644(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8490 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f74218,
                        &UNK_10e5d5b32,&UNK_10e5d5b78,7,FUN_10b70d6c0,0);
    do {
      if (puRam00000001137f8490 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8490;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8490,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8490 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8490;
}



/* Entry: 10b70d6c0; end: 10b70d6cb;  */

bool FUN_10b70d6c0(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b70d6cc; end: 10b70d747;  */

undefined * FUN_10b70d6cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8498 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f74238,
                        &UNK_10e5d5b94,&UNK_10e5d5bc0,3,FUN_10b70d748,0);
    do {
      if (puRam00000001137f8498 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8498;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8498,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8498 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8498;
}



/* Entry: 10b70d748; end: 10b70d753;  */

bool FUN_10b70d748(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b70d754; end: 10b70d7cf;  */

undefined * FUN_10b70d754(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f84a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f74258,
                        &UNK_10e5d5bcc,&UNK_10e5d5be4,3,FUN_10b70d7d0,0);
    do {
      if (puRam00000001137f84a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f84a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f84a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f84a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f84a0;
}



/* Entry: 10b70d7d0; end: 10b70d7db;  */

bool FUN_10b70d7d0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b70d7dc; end: 10b70d857;  */

undefined * FUN_10b70d7dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f84a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f74278,
                        &UNK_10e5d5bf0,&UNK_10e5d5c04,2,FUN_10b70d858,0);
    do {
      if (puRam00000001137f84a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f84a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f84a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f84a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f84a8;
}



/* Entry: 10b70d858; end: 10b70d863;  */

bool FUN_10b70d858(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b70d864; end: 10b70d8f3;  */

undefined * FUN_10b70d864(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f84b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f74298,
                        &UNK_10e5d5c0c,&UNK_10e5d5c44,4,FUN_10b70d8f4,0,&UNK_10e5d5c54);
    do {
      if (puRam00000001137f84b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f84b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f84b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f84b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f84b0;
}



/* Entry: 10b70d8f4; end: 10b70d8ff;  */

bool FUN_10b70d8f4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b70d900; end: 10b70d98f;  */

undefined * FUN_10b70d900(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f84b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f742b8,
                        &UNK_10e5d5c62,&UNK_10e5d5c90,4,FUN_10b70d990,0,&UNK_10e5d5ca0);
    do {
      if (puRam00000001137f84b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f84b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f84b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f84b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f84b8;
}



/* Entry: 10b70d990; end: 10b70d99b;  */

bool FUN_10b70d990(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b70d99c; end: 10b70da2b;  */

undefined * FUN_10b70d99c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f84c0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f742d8,
                        &UNK_10e5d5cae,&UNK_10e5d5ccc,4,FUN_10b70da2c,0,&UNK_10e5d5cdc);
    do {
      if (puRam00000001137f84c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f84c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f84c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f84c0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f84c0;
}



/* Entry: 10b70da2c; end: 10b70da37;  */

bool FUN_10b70da2c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b70da38; end: 10b70dab3;  */

undefined * FUN_10b70da38(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f84c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f742f8,
                        &UNK_10e5d5cea,&UNK_10e5d5d0c,3,FUN_10b70dab4,0);
    do {
      if (puRam00000001137f84c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f84c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f84c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f84c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f84c8;
}



/* Entry: 10b70dab4; end: 10b70dabf;  */

bool FUN_10b70dab4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b70dac0; end: 10b70db4f;  */

undefined * FUN_10b70dac0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f84d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f74318,
                        &UNK_10e5d5d18,&UNK_10e5d5d60,3,FUN_10b70db50,0,&UNK_10e5d5d6c);
    do {
      if (puRam00000001137f84d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f84d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f84d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f84d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f84d0;
}


