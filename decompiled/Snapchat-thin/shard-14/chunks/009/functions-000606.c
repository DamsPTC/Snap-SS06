/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b71335c; end: 10b7133c3; +[SCBitmojiAvatarOption descriptor] */

void FUN_10b71335c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8ac8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caf9d0,
                        &PTR____CFConstantStringClassReference_110f75938,&PTR_DAT_1133c60c8,
                        &PTR_DAT_1133c60e0,3,0x18,0x1c);
    puRam00000001137f8ac8 = puVar1;
  }
  return;
}



/* Entry: 10b7133c4; end: 10b71343f; +[SCCTXEncryptedMedia descriptor] */

undefined * FUN_10b7133c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8ad0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cafa70,
                        &PTR____CFConstantStringClassReference_110f75958,&PTR_DAT_1133c6140,
                        &PTR_s_contentURL_1133c6158,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f8ad0 = puVar1;
  }
  return puRam00000001137f8ad0;
}



/* Entry: 10b713440; end: 10b713523; +[SCCORERect descriptor] */

void FUN_10b713440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8ad8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cafb10,
                        &PTR____CFConstantStringClassReference_110f08ff8,&PTR_DAT_1133c61b8,
                        &PTR_s_left_1133c61d0,4,0x14,0x1c);
    puRam00000001137f8ad8 = puVar1;
  }
  return;
}



/* Entry: 10b713524; end: 10b71352f;  */

bool FUN_10b713524(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b713530; end: 10b7135ab;  */

undefined * FUN_10b713530(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8ae8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f75998,
                        &UNK_10e5d6038,&UNK_10e5d6068,3,FUN_10b7135ac,0);
    do {
      if (puRam00000001137f8ae8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8ae8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8ae8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8ae8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8ae8;
}



/* Entry: 10b7135ac; end: 10b7135b7;  */

bool FUN_10b7135ac(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7135b8; end: 10b713653; +[SCPSSShowcaseRequest descriptor] */

undefined * FUN_10b7135b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8af0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cafbb0,
                        &PTR____CFConstantStringClassReference_110f759b8,&PTR_DAT_1133c6268,
                        &PTR_DAT_1133c6840,6,0x30,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10ddc1b30);
    puRam00000001137f8af0 = puVar1;
  }
  return puRam00000001137f8af0;
}



/* Entry: 10b713654; end: 10b7136ef; +[SCPSSGenerateEmbeddingRequest descriptor] */

undefined * FUN_10b713654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8af8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cafc00,
                        &PTR____CFConstantStringClassReference_110f759d8,&PTR_DAT_1133c6268,
                        &PTR_DAT_1133c6620,4,0x28,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10ddb5398);
    puRam00000001137f8af8 = puVar1;
  }
  return puRam00000001137f8af8;
}



/* Entry: 10b7136f0; end: 10b713757; +[SCPSSShowcaseContext descriptor] */

void FUN_10b7136f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cafc50,
                        &PTR____CFConstantStringClassReference_110e3def8,&PTR_DAT_1133c6268,
                        &PTR_DAT_1133c6280,1,0x10,0x1c);
    puRam00000001137f8b00 = puVar1;
  }
  return;
}



/* Entry: 10b713758; end: 10b7137bf; +[SCPSSShowcaseCOFConfig descriptor] */

void FUN_10b713758(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cafca0,
                        &PTR____CFConstantStringClassReference_110f759f8,&PTR_DAT_1133c6268,
                        &PTR_DAT_1133c62e0,2,0x18,0x1c);
    puRam00000001137f8b08 = puVar1;
  }
  return;
}



/* Entry: 10b7137c0; end: 10b713827; +[SCPSSShowcaseResponse descriptor] */

void FUN_10b7137c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cafcf0,
                        &PTR____CFConstantStringClassReference_110f75a18,&PTR_DAT_1133c6268,
                        &PTR_s_bytes_1133c64a0,3,0x20,0x1c);
    puRam00000001137f8b10 = puVar1;
  }
  return;
}



/* Entry: 10b713828; end: 10b71388f; +[SCPSSGenerateEmbeddingResponse descriptor] */

void FUN_10b713828(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cafd40,
                        &PTR____CFConstantStringClassReference_110f75a38,&PTR_DAT_1133c6268,
                        &PTR_DAT_1133c6500,3,0x20,0x1c);
    puRam00000001137f8b18 = puVar1;
  }
  return;
}



/* Entry: 10b713890; end: 10b7138f7; +[SCPSSShoppableRequest descriptor] */

void FUN_10b713890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cafd90,
                        &PTR____CFConstantStringClassReference_110f75a58,&PTR_DAT_1133c6268,
                        &PTR_DAT_1133c6560,3,0x18,0x1c);
    puRam00000001137f8b20 = puVar1;
  }
  return;
}



/* Entry: 10b7138f8; end: 10b71395f; +[SCPSSShoppableCategoriesResponse descriptor] */

void FUN_10b7138f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cafde0,
                        &PTR____CFConstantStringClassReference_110f75a78,&PTR_DAT_1133c6268,
                        &PTR_DAT_1133c66a0,4,0x20,0x1c);
    puRam00000001137f8b28 = puVar1;
  }
  return;
}



/* Entry: 10b713960; end: 10b7139c7; +[SCPSSShoppableResponse descriptor] */

void FUN_10b713960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cafe30,
                        &PTR____CFConstantStringClassReference_110f75a98,&PTR_DAT_1133c6268,
                        &PTR_DAT_1133c6320,2,0x18,0x1c);
    puRam00000001137f8b30 = puVar1;
  }
  return;
}



/* Entry: 10b7139c8; end: 10b713a2f; +[SCPSSShoppabilityVersionRequest descriptor] */

void FUN_10b7139c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cafe80,
                        &PTR____CFConstantStringClassReference_110f75ab8,&PTR_DAT_1133c6268,0,0,4,
                        0x1c);
    puRam00000001137f8b38 = puVar1;
  }
  return;
}



/* Entry: 10b713a30; end: 10b713a97; +[SCPSSShoppabilityVersionResponse descriptor] */

void FUN_10b713a30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cafed0,
                        &PTR____CFConstantStringClassReference_110f75ad8,&PTR_DAT_1133c6268,
                        &PTR_s_version_1133c62a0,1,8,0x1c);
    puRam00000001137f8b40 = puVar1;
  }
  return;
}



/* Entry: 10b713a98; end: 10b713b33; +[SCPSSSnapShoppableRequest descriptor] */

undefined * FUN_10b713a98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caff20,
                        &PTR____CFConstantStringClassReference_110f75af8,&PTR_DAT_1133c6268,
                        &PTR_s_imageURL_1133c6900,6,0x38,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dd8a808);
    puRam00000001137f8b48 = puVar1;
  }
  return puRam00000001137f8b48;
}



/* Entry: 10b713b34; end: 10b713baf; +[SCPSSSnapJoinerImageData descriptor] */

undefined * FUN_10b713b34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caff70,
                        &PTR____CFConstantStringClassReference_110f75b18,&PTR_DAT_1133c6268,
                        &PTR_s_imageURL_1133c6360,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f8b50 = puVar1;
  }
  return puRam00000001137f8b50;
}



/* Entry: 10b713bb0; end: 10b713c2b; +[SCPSSSnapJoinerVideoData descriptor] */

undefined * FUN_10b713bb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caffc0,
                        &PTR____CFConstantStringClassReference_110f75b38,&PTR_DAT_1133c6268,
                        &PTR_DAT_1133c65c0,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f8b58 = puVar1;
  }
  return puRam00000001137f8b58;
}



/* Entry: 10b713c2c; end: 10b713c93; +[SCPSSDecryptionKey descriptor] */

void FUN_10b713c2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0010,
                        &PTR____CFConstantStringClassReference_110f75b58,&PTR_DAT_1133c6268,
                        &PTR_s_key_1133c63a0,2,0x18,0x1c);
    puRam00000001137f8b60 = puVar1;
  }
  return;
}



/* Entry: 10b713c94; end: 10b713cfb; +[SCPSSSnapShoppableResponse descriptor] */

void FUN_10b713c94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0060,
                        &PTR____CFConstantStringClassReference_110f75b78,&PTR_DAT_1133c6268,
                        &PTR_DAT_1133c63e0,2,0x10,0x1c);
    puRam00000001137f8b68 = puVar1;
  }
  return;
}



/* Entry: 10b713cfc; end: 10b713d63; +[SCPSSShoppabilityIndicator descriptor] */

void FUN_10b713cfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb00b0,
                        &PTR____CFConstantStringClassReference_110f75b98,&PTR_DAT_1133c6268,
                        &PTR_DAT_1133c67a0,5,0x20,0x1c);
    puRam00000001137f8b70 = puVar1;
  }
  return;
}



/* Entry: 10b713d64; end: 10b713dcb; +[SCPSSTreatmentToShoppability descriptor] */

void FUN_10b713d64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0100,
                        &PTR____CFConstantStringClassReference_110f75bb8,&PTR_DAT_1133c6268,
                        &PTR_DAT_1133c6720,4,0x20,0x1c);
    puRam00000001137f8b78 = puVar1;
  }
  return;
}



/* Entry: 10b713dcc; end: 10b713e33; +[SCPSSNormalizedVertex descriptor] */

void FUN_10b713dcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0150,
                        &PTR____CFConstantStringClassReference_110e38218,&PTR_DAT_1133c6268,
                        &PTR_DAT_1133c6420,2,0xc,0x1c);
    puRam00000001137f8b80 = puVar1;
  }
  return;
}



/* Entry: 10b713e34; end: 10b713e9b; +[SCPSSNormalizedBoundingPoly descriptor] */

void FUN_10b713e34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb01a0,
                        &PTR____CFConstantStringClassReference_110f75bd8,&PTR_DAT_1133c6268,
                        &PTR_DAT_1133c62c0,1,0x10,0x1c);
    puRam00000001137f8b88 = puVar1;
  }
  return;
}



/* Entry: 10b713e9c; end: 10b713f03; +[SCPSSScreenshopShowcaseContextWithBoundingPoly descriptor] */

void FUN_10b713e9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb01f0,
                        &PTR____CFConstantStringClassReference_110f75bf8,&PTR_DAT_1133c6268,
                        &PTR_s_bytes_1133c6460,2,0x18,0x1c);
    puRam00000001137f8b90 = puVar1;
  }
  return;
}



/* Entry: 10b713f04; end: 10b713f6b; +[SCCTTopicSticker descriptor] */

void FUN_10b713f04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8b98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0290,
                        &PTR____CFConstantStringClassReference_110f75c18,&PTR_DAT_1133c69c0,
                        &PTR_s_topicId_1133c69d8,2,0x18,0x1c);
    puRam00000001137f8b98 = puVar1;
  }
  return;
}



/* Entry: 10b713f6c; end: 10b713fd3; +[SCCTTopicStickerMemoriesModel descriptor] */

void FUN_10b713f6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8ba0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb02e0,
                        &PTR____CFConstantStringClassReference_110f75c38,&PTR_DAT_1133c69c0,
                        &PTR_s_topicId_1133c6a18,2,0x18,0x1c);
    puRam00000001137f8ba0 = puVar1;
  }
  return;
}



/* Entry: 10b713fd4; end: 10b7140b7; +[SDMLocation descriptor] */

void FUN_10b713fd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8ba8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0380,
                        &PTR____CFConstantStringClassReference_110df2f78,&PTR_DAT_1133c6a58,
                        &PTR_DAT_1133c6a70,5,0x30,0x1c);
    puRam00000001137f8ba8 = puVar1;
  }
  return;
}



/* Entry: 10b7140b8; end: 10b7140c3;  */

bool FUN_10b7140b8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7140c4; end: 10b71413f;  */

undefined * FUN_10b7140c4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8bb8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f75c78,
                        &UNK_10e5d6094,&UNK_10e5d60bc,3,FUN_10b714140,0);
    do {
      if (puRam00000001137f8bb8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8bb8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8bb8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8bb8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8bb8;
}



/* Entry: 10b714140; end: 10b71414b;  */

bool FUN_10b714140(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b71414c; end: 10b7141c7;  */

undefined * FUN_10b71414c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8bc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f75c98,
                        &UNK_10e5d60c8,&UNK_10e5d60f8,3,FUN_10b7141c8,0);
    do {
      if (puRam00000001137f8bc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8bc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8bc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8bc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8bc0;
}



/* Entry: 10b7141c8; end: 10b7141d3;  */

bool FUN_10b7141c8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7141d4; end: 10b71424f; +[SDMPackaging descriptor] */

undefined * FUN_10b7141d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8bc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0420,
                        &PTR____CFConstantStringClassReference_110f75cb8,&PTR_DAT_1133c6b10,
                        &PTR_DAT_1133c6c68,8,0x40,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f8bc8 = puVar1;
  }
  return puRam00000001137f8bc8;
}



/* Entry: 10b714250; end: 10b7142cb; +[SDMPackaging_PackagedImage descriptor] */

undefined * FUN_10b714250(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8bd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0470,
                        &PTR____CFConstantStringClassReference_110f75cd8,&PTR_DAT_1133c6b10,
                        &PTR_DAT_1133c6b28,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8bd0 = puVar1;
  }
  return puRam00000001137f8bd0;
}



/* Entry: 10b7142cc; end: 10b714347; +[SDMPackaging_PackagedVideo descriptor] */

undefined * FUN_10b7142cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8bd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb04c0,
                        &PTR____CFConstantStringClassReference_110f75cf8,&PTR_DAT_1133c6b10,
                        &PTR_DAT_1133c6bc8,5,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f8bd8 = puVar1;
  }
  return puRam00000001137f8bd8;
}



/* Entry: 10b714348; end: 10b71443f; +[SDMPackaging_Overlay descriptor] */

undefined * FUN_10b714348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8be0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0510,
                        &PTR____CFConstantStringClassReference_110ea71b8,&PTR_DAT_1133c6b10,
                        &PTR_DAT_1133c6b68,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f8be0 = puVar1;
  }
  return puRam00000001137f8be0;
}



/* Entry: 10b714440; end: 10b71444b;  */

bool FUN_10b714440(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b71444c; end: 10b7144c7;  */

undefined * FUN_10b71444c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8bf0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f75d38,
                        &UNK_10e5d6124,&UNK_10e5d6164,3,FUN_10b7144c8,0);
    do {
      if (puRam00000001137f8bf0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8bf0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8bf0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8bf0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8bf0;
}



/* Entry: 10b7144c8; end: 10b7144d3;  */

bool FUN_10b7144c8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7144d4; end: 10b71453b; +[SDMPermittedUserActions descriptor] */

void FUN_10b7144d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8bf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb05b0,
                        &PTR____CFConstantStringClassReference_110e58378,&PTR_DAT_1133c6d68,
                        &PTR_DAT_1133c6d80,2,0xc,0x1c);
    puRam00000001137f8bf8 = puVar1;
  }
  return;
}



/* Entry: 10b71453c; end: 10b714547;  */

bool FUN_10b71453c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b714548; end: 10b71462b; +[SDMMediaEffects descriptor] */

void FUN_10b714548(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8c10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0740,
                        &PTR____CFConstantStringClassReference_110f75d98,&PTR_DAT_1133c6eb8,
                        &PTR_DAT_1133c6ed0,3,0x20,0x1c);
    puRam00000001137f8c10 = puVar1;
  }
  return;
}



/* Entry: 10b71462c; end: 10b714637;  */

bool FUN_10b71462c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b714638; end: 10b71469f; +[SDMTrackSegment descriptor] */

void FUN_10b714638(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8c20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb07e0,
                        &PTR____CFConstantStringClassReference_110f75dd8,&PTR_DAT_1133c6f30,
                        &PTR_DAT_1133c7028,6,0x30,0x1c);
    puRam00000001137f8c20 = puVar1;
  }
  return;
}



/* Entry: 10b7146a0; end: 10b714707; +[SDMTrack descriptor] */

void FUN_10b7146a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8c28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0830,
                        &PTR____CFConstantStringClassReference_110f36998,&PTR_DAT_1133c6f30,
                        &PTR_DAT_1133c6fa8,4,0x18,0x1c);
    puRam00000001137f8c28 = puVar1;
  }
  return;
}



/* Entry: 10b714708; end: 10b7147eb; +[SDMLayerComposition descriptor] */

void FUN_10b714708(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8c30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0880,
                        &PTR____CFConstantStringClassReference_110f75df8,&PTR_DAT_1133c6f30,
                        &PTR_DAT_1133c6f48,3,0x18,0x1c);
    puRam00000001137f8c30 = puVar1;
  }
  return;
}



/* Entry: 10b7147ec; end: 10b7147f7;  */

bool FUN_10b7147ec(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7147f8; end: 10b714883; +[SDMRenderEffectNode descriptor] */

undefined * FUN_10b7147f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8c40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0920,
                        &PTR____CFConstantStringClassReference_110f75e38,&PTR_DAT_1133c70f8,
                        &PTR_DAT_1133c7290,6,0x38,0x1c);
    func_0x00010c229040();
    puRam00000001137f8c40 = puVar1;
  }
  return puRam00000001137f8c40;
}



/* Entry: 10b714884; end: 10b71491f; +[SDMRenderEffectNode_Input descriptor] */

undefined * FUN_10b714884(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8c48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0970,
                        &PTR____CFConstantStringClassReference_110e89c58,&PTR_DAT_1133c70f8,
                        &PTR_DAT_1133c7210,4,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cb0920);
    puRam00000001137f8c48 = puVar1;
  }
  return puRam00000001137f8c48;
}



/* Entry: 10b714920; end: 10b714987; +[SDMRenderEffectDAG descriptor] */

void FUN_10b714920(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8c50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb09c0,
                        &PTR____CFConstantStringClassReference_110f75e58,&PTR_DAT_1133c70f8,
                        &PTR_DAT_1133c7150,3,0x20,0x1c);
    puRam00000001137f8c50 = puVar1;
  }
  return;
}



/* Entry: 10b714988; end: 10b7149ef; +[SDMRenderEffectScene descriptor] */

void FUN_10b714988(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8c58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0a10,
                        &PTR____CFConstantStringClassReference_110f75e78,&PTR_DAT_1133c70f8,
                        &PTR_DAT_1133c7110,2,0x10,0x1c);
    puRam00000001137f8c58 = puVar1;
  }
  return;
}



/* Entry: 10b7149f0; end: 10b714ad3; +[SDMRenderEffectScenes descriptor] */

void FUN_10b7149f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8c60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0a60,
                        &PTR____CFConstantStringClassReference_110f75e98,&PTR_DAT_1133c70f8,
                        &PTR_DAT_1133c71b0,3,0x18,0x1c);
    puRam00000001137f8c60 = puVar1;
  }
  return;
}



/* Entry: 10b714ad4; end: 10b714adf;  */

bool FUN_10b714ad4(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b714ae0; end: 10b714b6b; +[SCMERenderEffect descriptor] */

undefined * FUN_10b714ae0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8c70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0b00,
                        &PTR____CFConstantStringClassReference_110f75ed8,&PTR_DAT_1133c7358,
                        &PTR_DAT_1133c73f0,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001137f8c70 = puVar1;
  }
  return puRam00000001137f8c70;
}



/* Entry: 10b714b6c; end: 10b714bd3; +[SCMEAudioTrackVolume descriptor] */

void FUN_10b714b6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8c78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0b50,
                        &PTR____CFConstantStringClassReference_110f75ef8,&PTR_DAT_1133c7358,
                        &PTR_DAT_1133c7370,1,0x10,0x1c);
    puRam00000001137f8c78 = puVar1;
  }
  return;
}



/* Entry: 10b714bd4; end: 10b714c3b; +[SCMEAutoCrop descriptor] */

void FUN_10b714bd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8c80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0ba0,
                        &PTR____CFConstantStringClassReference_110f75f18,&PTR_DAT_1133c7358,0,0,4,
                        0x1c);
    puRam00000001137f8c80 = puVar1;
  }
  return;
}



/* Entry: 10b714c3c; end: 10b714ca3; +[SCMESupercut descriptor] */

void FUN_10b714c3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8c88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0bf0,
                        &PTR____CFConstantStringClassReference_110f75f38,&PTR_DAT_1133c7358,
                        &PTR_DAT_1133c7390,1,8,0x1c);
    puRam00000001137f8c88 = puVar1;
  }
  return;
}



/* Entry: 10b714ca4; end: 10b714d0b; +[SCMEMagicMoment descriptor] */

void FUN_10b714ca4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8c90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0c40,
                        &PTR____CFConstantStringClassReference_110f75f58,&PTR_DAT_1133c7358,
                        &PTR_DAT_1133c73b0,2,0xc,0x1c);
    puRam00000001137f8c90 = puVar1;
  }
  return;
}



/* Entry: 10b714d0c; end: 10b714d73; +[SDMSeekPointMetadata descriptor] */

void FUN_10b714d0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8ca0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0d30,
                        &PTR____CFConstantStringClassReference_110f75f98,&PTR_DAT_1133c7478,
                        &PTR_s_chapterId_1133c7490,1,0x10,0x1c);
    puRam00000001137f8ca0 = puVar1;
  }
  return;
}



/* Entry: 10b714d74; end: 10b714ddb; +[SDMNonReplayable descriptor] */

void FUN_10b714d74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8ca8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0dd0,
                        &PTR____CFConstantStringClassReference_110f75fb8,&PTR_DAT_1133c75b8,0,0,4,
                        0x1c);
    puRam00000001137f8ca8 = puVar1;
  }
  return;
}



/* Entry: 10b714ddc; end: 10b714e43; +[SDMEarlyExpiration descriptor] */

void FUN_10b714ddc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8cb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0e20,
                        &PTR____CFConstantStringClassReference_110f75fd8,&PTR_DAT_1133c75b8,
                        &PTR_DAT_1133c75d0,1,0x10,0x1c);
    puRam00000001137f8cb0 = puVar1;
  }
  return;
}



/* Entry: 10b714e44; end: 10b714ecf; +[SDMDeliveryMechanism descriptor] */

undefined * FUN_10b714e44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8cb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0e70,
                        &PTR____CFConstantStringClassReference_110f75ff8,&PTR_DAT_1133c75b8,
                        &PTR_DAT_1133c75f0,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137f8cb8 = puVar1;
  }
  return puRam00000001137f8cb8;
}



/* Entry: 10b714ed0; end: 10b714f37; +[SDMLayerProperties descriptor] */

void FUN_10b714ed0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8cc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0f10,
                        &PTR____CFConstantStringClassReference_110f76018,&PTR_DAT_1133c7638,
                        &PTR_DAT_1133c7750,0x11,0x68,0x1c);
    puRam00000001137f8cc0 = puVar1;
  }
  return;
}



/* Entry: 10b714f38; end: 10b714f9f; +[SDMCaption descriptor] */

void FUN_10b714f38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8cd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1000,
                        &PTR____CFConstantStringClassReference_110e2b278,&PTR_DAT_1133c7970,
                        &PTR_s_text_1133c7988,1,0x10,0x1c);
    puRam00000001137f8cd0 = puVar1;
  }
  return;
}



/* Entry: 10b714fa0; end: 10b715083; +[SDMTimeInstant descriptor] */

void FUN_10b714fa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8cd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb10a0,
                        &PTR____CFConstantStringClassReference_110f76058,&PTR_DAT_1133c79a8,
                        &PTR_DAT_1133c79c0,1,0x10,0x1c);
    puRam00000001137f8cd8 = puVar1;
  }
  return;
}



/* Entry: 10b715084; end: 10b71508f;  */

bool FUN_10b715084(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b715090; end: 10b71510b;  */

undefined * FUN_10b715090(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8ce8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f76098,
                        &UNK_10e5d6270,&UNK_10e5d62b4,4,FUN_10b71510c,0);
    do {
      if (puRam00000001137f8ce8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8ce8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8ce8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8ce8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8ce8;
}



/* Entry: 10b71510c; end: 10b715117;  */

bool FUN_10b71510c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b715118; end: 10b715193;  */

undefined * FUN_10b715118(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8cf0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f760b8,
                        &UNK_10e5d62c4,&UNK_10e5d62e0,2,FUN_10b715194,0);
    do {
      if (puRam00000001137f8cf0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8cf0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8cf0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8cf0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8cf0;
}



/* Entry: 10b715194; end: 10b71519f;  */

bool FUN_10b715194(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7151a0; end: 10b71521b;  */

undefined * FUN_10b7151a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8cf8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f760d8,
                        &UNK_10e5d62e8,&UNK_10e5d6334,5,FUN_10b71521c,0);
    do {
      if (puRam00000001137f8cf8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8cf8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8cf8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8cf8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8cf8;
}



/* Entry: 10b71521c; end: 10b715227;  */

bool FUN_10b71521c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b715228; end: 10b7152a3;  */

undefined * FUN_10b715228(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8d00 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f760f8,
                        &UNK_10e5d6348,&UNK_10e5d6384,3,FUN_10b7152a4,0);
    do {
      if (puRam00000001137f8d00 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8d00;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8d00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8d00 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8d00;
}



/* Entry: 10b7152a4; end: 10b7152af;  */

bool FUN_10b7152a4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7152b0; end: 10b71532b;  */

undefined * FUN_10b7152b0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8d08 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f76118,
                        &UNK_10e5d6390,&UNK_10e5d63bc,2,FUN_10b71532c,0);
    do {
      if (puRam00000001137f8d08 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8d08;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8d08,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8d08 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8d08;
}



/* Entry: 10b71532c; end: 10b715337;  */

bool FUN_10b71532c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b715338; end: 10b7153b3;  */

undefined * FUN_10b715338(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8d10 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f76138,
                        &UNK_10e5d63c4,&UNK_10e5d63f0,2,FUN_10b7153b4,0);
    do {
      if (puRam00000001137f8d10 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8d10;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8d10,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8d10 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8d10;
}



/* Entry: 10b7153b4; end: 10b7153bf;  */

bool FUN_10b7153b4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7153c0; end: 10b71543b;  */

undefined * FUN_10b7153c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8d18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f76158,
                        &UNK_10e5d63f8,&UNK_10e5d640c,2,FUN_10b71543c,0);
    do {
      if (puRam00000001137f8d18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8d18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8d18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8d18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8d18;
}



/* Entry: 10b71543c; end: 10b715447;  */

bool FUN_10b71543c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b715448; end: 10b7154c3;  */

undefined * FUN_10b715448(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8d20 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f76178,
                        &UNK_10e5d6414,&UNK_10e5d6434,2,FUN_10b7154c4,0);
    do {
      if (puRam00000001137f8d20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8d20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8d20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8d20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8d20;
}



/* Entry: 10b7154c4; end: 10b7154cf;  */

bool FUN_10b7154c4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7154d0; end: 10b7155c7; +[SDMWebPage descriptor] */

undefined * FUN_10b7154d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8d28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1140,
                        &PTR____CFConstantStringClassReference_110f29818,&PTR_DAT_1133c79e0,
                        &PTR_s_URL_1133c79f8,0x11,0x50,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f8d28 = puVar1;
  }
  return puRam00000001137f8d28;
}



/* Entry: 10b7155c8; end: 10b7155d3;  */

bool FUN_10b7155c8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7155d4; end: 10b71564f;  */

undefined * FUN_10b7155d4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8d38 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f761b8,
                        &UNK_10e5d6468,&UNK_10e5d64ac,8,FUN_10b715650,0);
    do {
      if (puRam00000001137f8d38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8d38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8d38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8d38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8d38;
}



/* Entry: 10b715650; end: 10b71565b;  */

bool FUN_10b715650(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10b71565c; end: 10b7156d7;  */

undefined * FUN_10b71565c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8d40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f761d8,
                        &UNK_10e5d64cc,&UNK_10e5d64e4,3,FUN_10b7156d8,0);
    do {
      if (puRam00000001137f8d40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8d40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8d40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8d40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8d40;
}



/* Entry: 10b7156d8; end: 10b7156e3;  */

bool FUN_10b7156d8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7156e4; end: 10b71574b; +[SDMFeatureTag descriptor] */

void FUN_10b7156e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8d48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1230,
                        &PTR____CFConstantStringClassReference_110f761f8,&PTR_DAT_1133c7c18,
                        &PTR_DAT_1133c7c30,2,0xc,0x1c);
    puRam00000001137f8d48 = puVar1;
  }
  return;
}



/* Entry: 10b71574c; end: 10b7157b3; +[SDMCreativeEditTag descriptor] */

void FUN_10b71574c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8d50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1280,
                        &PTR____CFConstantStringClassReference_110f76218,&PTR_DAT_1133c7c18,
                        &PTR_DAT_1133c7c70,3,0x18,0x1c);
    puRam00000001137f8d50 = puVar1;
  }
  return;
}



/* Entry: 10b7157b4; end: 10b71583f; +[SDMPlaybackSpeedMultiplier descriptor] */

undefined * FUN_10b7157b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8d58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1320,
                        &PTR____CFConstantStringClassReference_110f76238,&PTR_DAT_1133c7cd8,
                        &PTR_DAT_1133c7cf0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137f8d58 = puVar1;
  }
  return puRam00000001137f8d58;
}



/* Entry: 10b715840; end: 10b715923; +[SDMTimeframe descriptor] */

void FUN_10b715840(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8d60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb13c0,
                        &PTR____CFConstantStringClassReference_110f76258,&PTR_DAT_1133c7d50,
                        &PTR_DAT_1133c7d68,2,0x18,0x1c);
    puRam00000001137f8d60 = puVar1;
  }
  return;
}



/* Entry: 10b715924; end: 10b71592f;  */

bool FUN_10b715924(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b715930; end: 10b7159ab;  */

undefined * FUN_10b715930(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8d70 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f76298,
                        &UNK_10e5d6518,&UNK_10e5d6540,2,FUN_10b7159ac,0);
    do {
      if (puRam00000001137f8d70 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8d70;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8d70,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8d70 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8d70;
}



/* Entry: 10b7159ac; end: 10b7159b7;  */

bool FUN_10b7159ac(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7159b8; end: 10b715a1f; +[SDMSubtitleBundle descriptor] */

void FUN_10b7159b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8d78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1460,
                        &PTR____CFConstantStringClassReference_110f762b8,&PTR_DAT_1133c7da8,
                        &PTR_DAT_1133c7dc0,1,0x10,0x1c);
    puRam00000001137f8d78 = puVar1;
  }
  return;
}



/* Entry: 10b715a20; end: 10b715a9b; +[SDMSubtitleBundle_Subtitle descriptor] */

undefined * FUN_10b715a20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8d80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb14b0,
                        &PTR____CFConstantStringClassReference_110f762d8,&PTR_DAT_1133c7da8,
                        &PTR_DAT_1133c7de0,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f8d80 = puVar1;
  }
  return puRam00000001137f8d80;
}


