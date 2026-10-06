/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105592b1c; end: 105592b97; +[SCCTPGetItemsByExternalIDsResponse_Item descriptor] */

undefined * FUN_105592b1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bca98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48160,
                        &PTR____CFConstantStringClassReference_110dd6618,&PTR_DAT_1130e51b8,
                        &PTR_DAT_1130e5290,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136bca98 = puVar1;
  }
  return puRam00000001136bca98;
}



/* Entry: 105592b98; end: 105592bff; +[SCCTPGetItemsByCTPIDsRequest descriptor] */

void FUN_105592b98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcaa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a481b0,
                        &PTR____CFConstantStringClassReference_110dec318,&PTR_DAT_1130e51b8,
                        &PTR_DAT_1130e51f0,1,0x10,0x1c);
    puRam00000001136bcaa0 = puVar1;
  }
  return;
}



/* Entry: 105592c00; end: 105592c67; +[SCCTPGetItemsByCTPIDsResponse descriptor] */

void FUN_105592c00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcaa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48228,
                        &PTR____CFConstantStringClassReference_110dec338,&PTR_DAT_1130e51b8,
                        &PTR_DAT_1130e5210,1,0x10,0x1c);
    puRam00000001136bcaa8 = puVar1;
  }
  return;
}



/* Entry: 105592c68; end: 105592ceb; +[SCCTPGetItemsByCTPIDsResponse_ItemResponse descriptor] */

undefined * FUN_105592c68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcab0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48250,
                        &PTR____CFConstantStringClassReference_110dec358,&PTR_DAT_1130e51b8,
                        &PTR_s_item_1130e5230,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bcab0 = puVar1;
  }
  return puRam00000001136bcab0;
}



/* Entry: 105592cec; end: 105592d53; +[SCCTPSearchRequest descriptor] */

void FUN_105592cec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcab8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a482f0,
                        &PTR____CFConstantStringClassReference_110dec378,&PTR_DAT_1130e52f0,
                        &PTR_DAT_1130e5408,0xc,0x60,0x1c);
    puRam00000001136bcab8 = puVar1;
  }
  return;
}



/* Entry: 105592d54; end: 105592dbb; +[SCCTPSearchResponse descriptor] */

void FUN_105592d54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcac0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48340,
                        &PTR____CFConstantStringClassReference_110dec398,&PTR_DAT_1130e52f0,
                        &PTR_DAT_1130e5308,2,0x18,0x1c);
    puRam00000001136bcac0 = puVar1;
  }
  return;
}



/* Entry: 105592dbc; end: 105592e23; +[SCCTPSection descriptor] */

void FUN_105592dbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcac8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48390,
                        &PTR____CFConstantStringClassReference_110dec3b8,&PTR_DAT_1130e52f0,
                        &PTR_DAT_1130e5348,3,0x18,0x1c);
    puRam00000001136bcac8 = puVar1;
  }
  return;
}



/* Entry: 105592e24; end: 105592f07; +[SCCTPResult descriptor] */

void FUN_105592e24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcad0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a483e0,
                        &PTR____CFConstantStringClassReference_110debb78,&PTR_DAT_1130e52f0,
                        &PTR_DAT_1130e53a8,3,0x18,0x1c);
    puRam00000001136bcad0 = puVar1;
  }
  return;
}



/* Entry: 105592f08; end: 105592f13;  */

bool FUN_105592f08(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 105592f14; end: 105592f8f;  */

undefined * FUN_105592f14(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcae0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dec3f8,
                        &UNK_10ddb2938,&UNK_10ddb2960,3,FUN_105592f90,0);
    do {
      if (puRam00000001136bcae0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcae0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcae0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcae0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcae0;
}



/* Entry: 105592f90; end: 105592f9b;  */

bool FUN_105592f90(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105592f9c; end: 105593003; +[SCCTPSectionedResults descriptor] */

void FUN_105592f9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcae8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48480,
                        &PTR____CFConstantStringClassReference_110dec418,&PTR_DAT_1130e5590,
                        &PTR_DAT_1130e55a8,2,0x18,0x1c);
    puRam00000001136bcae8 = puVar1;
  }
  return;
}



/* Entry: 105593004; end: 10559306b; +[SCCTPResultSection descriptor] */

void FUN_105593004(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcaf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a484d0,
                        &PTR____CFConstantStringClassReference_110dec438,&PTR_DAT_1130e5590,
                        &PTR_DAT_1130e5628,5,0x20,0x1c);
    puRam00000001136bcaf0 = puVar1;
  }
  return;
}



/* Entry: 10559306c; end: 1055930f7; +[SCCTPResultEntry descriptor] */

undefined * FUN_10559306c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcaf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48520,
                        &PTR____CFConstantStringClassReference_110dec458,&PTR_DAT_1130e5590,
                        &PTR_DAT_1130e56c8,5,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001136bcaf8 = puVar1;
  }
  return puRam00000001136bcaf8;
}



/* Entry: 1055930f8; end: 1055931db; +[SCCTPClientCachedCTItem descriptor] */

void FUN_1055930f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcb00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48570,
                        &PTR____CFConstantStringClassReference_110dec478,&PTR_DAT_1130e5590,
                        &PTR_s_id_p_1130e55e8,2,0x10,0x1c);
    puRam00000001136bcb00 = puVar1;
  }
  return;
}



/* Entry: 1055931dc; end: 1055931e7;  */

bool FUN_1055931dc(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 1055931e8; end: 105593263;  */

undefined * FUN_1055931e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcb10 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dec4b8,
                        &UNK_10ddb2a28,&UNK_10ddb2b10,0xb,FUN_105593264,0);
    do {
      if (puRam00000001136bcb10 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcb10;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcb10,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcb10 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcb10;
}



/* Entry: 105593264; end: 10559326f;  */

bool FUN_105593264(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 105593270; end: 1055932eb;  */

undefined * FUN_105593270(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcb18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dec4d8,
                        &UNK_10ddb2b3c,&UNK_10ddb2b78,3,FUN_1055932ec,0);
    do {
      if (puRam00000001136bcb18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcb18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcb18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcb18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcb18;
}



/* Entry: 1055932ec; end: 1055932f7;  */

bool FUN_1055932ec(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1055932f8; end: 105593373;  */

undefined * FUN_1055932f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcb20 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dec4f8,
                        &UNK_10ddb2b84,&UNK_10ddb2c3c,9,FUN_105593374,0);
    do {
      if (puRam00000001136bcb20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcb20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcb20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcb20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcb20;
}



/* Entry: 105593374; end: 10559337f;  */

bool FUN_105593374(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 105593380; end: 1055933e7; +[SCS2StickerSearchRequest descriptor] */

void FUN_105593380(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcb28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48610,
                        &PTR____CFConstantStringClassReference_110dec378,&PTR_DAT_1130e5770,
                        &PTR_DAT_1130e5b28,0xc,0x58,0x1c);
    puRam00000001136bcb28 = puVar1;
  }
  return;
}



/* Entry: 1055933e8; end: 10559344f; +[SCS2StickerSearchResponse descriptor] */

void FUN_1055933e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcb30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48660,
                        &PTR____CFConstantStringClassReference_110dec398,&PTR_DAT_1130e5770,
                        &PTR_DAT_1130e58c8,3,0x20,0x1c);
    puRam00000001136bcb30 = puVar1;
  }
  return;
}



/* Entry: 105593450; end: 1055934b7; +[SCS2StickerLookupRequest descriptor] */

void FUN_105593450(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcb38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a486b0,
                        &PTR____CFConstantStringClassReference_110dec518,&PTR_DAT_1130e5770,
                        &PTR_DAT_1130e5808,2,0x10,0x1c);
    puRam00000001136bcb38 = puVar1;
  }
  return;
}



/* Entry: 1055934b8; end: 10559351f; +[SCS2StickerLookupResponse descriptor] */

void FUN_1055934b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcb40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48700,
                        &PTR____CFConstantStringClassReference_110dec538,&PTR_DAT_1130e5770,
                        &PTR_DAT_1130e5788,1,0x10,0x1c);
    puRam00000001136bcb40 = puVar1;
  }
  return;
}



/* Entry: 105593520; end: 105593587; +[SCS2StickerReplyRequest descriptor] */

void FUN_105593520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcb48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48750,
                        &PTR____CFConstantStringClassReference_110dec558,&PTR_DAT_1130e5770,
                        &PTR_DAT_1130e5848,2,0x18,0x1c);
    puRam00000001136bcb48 = puVar1;
  }
  return;
}



/* Entry: 105593588; end: 1055935ef; +[SCS2StickerReplyResponse descriptor] */

void FUN_105593588(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcb50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a487a0,
                        &PTR____CFConstantStringClassReference_110dec578,&PTR_DAT_1130e5770,
                        &PTR_s_result_1130e57a8,1,0x10,0x1c);
    puRam00000001136bcb50 = puVar1;
  }
  return;
}



/* Entry: 1055935f0; end: 105593657; +[SCS2StickerSection descriptor] */

void FUN_1055935f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcb58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a487f0,
                        &PTR____CFConstantStringClassReference_110dec3b8,&PTR_DAT_1130e5770,
                        &PTR_DAT_1130e5888,2,0x10,0x1c);
    puRam00000001136bcb58 = puVar1;
  }
  return;
}



/* Entry: 105593658; end: 1055936e3; +[SCS2StickerResultTypeOption descriptor] */

undefined * FUN_105593658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcb60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48840,
                        &PTR____CFConstantStringClassReference_110dec598,&PTR_DAT_1130e5770,
                        &PTR_DAT_1130e5988,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136bcb60 = puVar1;
  }
  return puRam00000001136bcb60;
}



/* Entry: 1055936e4; end: 10559375f; +[SCS2StickerResultTypeOption_CameoOption descriptor] */

undefined * FUN_1055936e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcb68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48890,
                        &PTR____CFConstantStringClassReference_110dec5b8,&PTR_DAT_1130e5770,
                        &PTR_DAT_1130e5a08,4,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136bcb68 = puVar1;
  }
  return puRam00000001136bcb68;
}



/* Entry: 105593760; end: 1055937db; +[SCS2StickerResultTypeOption_BitmojiOption descriptor] */

undefined * FUN_105593760(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcb70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a488e0,
                        &PTR____CFConstantStringClassReference_110dec5d8,&PTR_DAT_1130e5770,
                        &PTR_s_typesArray_1130e5928,3,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bcb70 = puVar1;
  }
  return puRam00000001136bcb70;
}



/* Entry: 1055937dc; end: 105593857; +[SCS2StickerResultTypeOption_GfycatOption descriptor] */

undefined * FUN_1055937dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcb78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48930,
                        &PTR____CFConstantStringClassReference_110dec5f8,&PTR_DAT_1130e5770,
                        &PTR_DAT_1130e57c8,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bcb78 = puVar1;
  }
  return puRam00000001136bcb78;
}



/* Entry: 105593858; end: 1055938bf; +[SCS2StickerResultMetadata descriptor] */

void FUN_105593858(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcb80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a48980,
                        &PTR____CFConstantStringClassReference_110dec618,&PTR_DAT_1130e5770,
                        &PTR_DAT_1130e57e8,1,0x10,0x1c);
    puRam00000001136bcb80 = puVar1;
  }
  return;
}



/* Entry: 1055938c0; end: 105593927; +[SCS2StickerResult descriptor] */

void FUN_1055938c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcb88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a489d0,
                        &PTR____CFConstantStringClassReference_110debb78,&PTR_DAT_1130e5770,
                        &PTR_DAT_1130e5a88,5,0x28,0x1c);
    puRam00000001136bcb88 = puVar1;
  }
  return;
}



/* Entry: 105593928; end: 105593a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105593928(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126bb1b8;
  _objc_alloc(PTR_PTR_1126bb1b8);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar2 + _DAT_112725ce8;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010bf4c240(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar4 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar4 + _DAT_112725cec;
    _objc_loadWeakRetained(lVar8);
  }
  lVar5 = lVar8;
  func_0x00010bf1ef20(lVar8);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112725cf0;
    _objc_loadWeakRetained(lVar9);
  }
  lVar6 = lVar9;
  func_0x00010c0f98e0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002ec0(puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105593a98; end: 105593ae7; -[CTPStickerContentManagerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105593a98(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112725cf0);
  _objc_destroyWeak(param_1 + _DAT_112725cec);
  _objc_destroyWeak(param_1 + _DAT_112725ce8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725ce4);
  return;
}



/* Entry: 105593ae8; end: 105593b97;  */

void FUN_105593ae8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dec638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0295e0(puVar1,param_2,puVar2,2);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105593b98; end: 105593cd7; -[CTPStickerContentManagerImpl initWithContentDelivery:boltUploader:performerProvider:] */

long FUN_105593b98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae720;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105593cd8;
    puStack_50 = &UNK_1108994d8;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x00010bf11fe0(puVar2,param_2,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar2;
    _objc_release(uVar1);
    _objc_release(uStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105593cd8; end: 105593d47;  */

void FUN_105593cd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105593d48; end: 105593e47; -[CTPStickerContentManagerImpl registerNewStickerWithId:imageContent:completion:] */

void FUN_105593d48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  FUN_105593ae8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a860(uVar1,param_2,param_4,uVar2,0,0,param_5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105593e48; end: 1055940c3; -[CTPStickerContentManagerImpl uploadStickerBoltContent:content:completion:] */

void FUN_105593e48(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ba988;
  _objc_alloc(PTR_PTR_1126ba988);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar6 = param_3;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dec638);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5988;
  func_0x00010bfeb740(PTR_PTR_1126b5988,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0035e0(puVar1,param_2,puVar2,8,0,puVar3,2,0,uVar6 & 0xffffffffffffff00,0,0,0,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1055940c4;
  puStack_70 = &UNK_110899508;
  _objc_retain(param_5);
  puStack_b8 = puVar2;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105594180;
  puStack_a0 = &UNK_110899538;
  uStack_68 = param_5;
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_retain(param_5);
  uStack_90 = param_5;
  func_0x00010c28eb40(uVar4,param_2,puVar1,uVar5,&puStack_88,&puStack_b8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_68);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055940c4; end: 10559417f;  */

void FUN_1055940c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c15ea20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf4db80(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,uVar1,uVar2,0);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105594180; end: 1055941df;  */

void FUN_105594180(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf987e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055941e0; end: 10559456b; -[CTPStickerContentManagerImpl retrieveSticker:mediaContent:encKey:encIv:completion:] */

void FUN_1055941e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_3;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_105593ae8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b1060;
  _objc_alloc();
  func_0x00010c032f60();
  puVar4 = PTR_PTR_1126b2798;
  _objc_alloc_init();
  if (param_4 == 0) {
    func_0x00010bf4c240();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0844e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    FUN_105593ae8();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c13e560(uVar1,param_2,uVar6,puVar3,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7460(puVar4,param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  else {
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10559456c;
    puStack_a8 = &UNK_110899598;
    uStack_a0 = param_1;
    _objc_retain(uVar2);
    uStack_98 = uVar2;
    _objc_retain(param_5);
    uStack_90 = param_5;
    _objc_retain(param_6);
    uStack_88 = param_6;
    _objc_retain(puVar4);
    puStack_80 = puVar4;
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_retain(puVar3);
    puStack_70 = puVar3;
    _objc_retain(param_7);
    uStack_68 = param_7;
    func_0x00010c0c1100(param_4,param_2,0,&puStack_c0);
    _objc_release(uStack_68);
    _objc_release(puStack_70);
    _objc_release(uStack_78);
    _objc_release(puStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10559456c; end: 105594743;  */

void FUN_10559456c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4c240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar6);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar3);
  func_0x00010c125e00(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 105594744; end: 105594883;  */

void FUN_105594744(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = lVar1;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0844e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_105593ae8();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c13e560(lVar3,param_2,uVar5,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7460(uVar7,param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105594884; end: 10559493f;  */

void FUN_105594884(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),7);
  return;
}



/* Entry: 105594940; end: 105594a6b; -[CTPStickerContentManagerImpl retrieveStickerWithId:completion:] */

void FUN_105594940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  FUN_105593ae8(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  func_0x00010bf4c240(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c13e560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105594a6c; end: 105594a73; -[CTPStickerContentManagerImpl contentDelivery] */

undefined8 FUN_105594a6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105594a74; end: 105594aa3; -[CTPStickerContentManagerImpl setContentDelivery:] */

void FUN_105594a74(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105594aa4; end: 105594aab; -[CTPStickerContentManagerImpl boltUploader] */

undefined8 FUN_105594aa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105594aac; end: 105594adb; -[CTPStickerContentManagerImpl setBoltUploader:] */

void FUN_105594aac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105594adc; end: 105594ae3; -[CTPStickerContentManagerImpl performer] */

undefined8 FUN_105594adc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105594ae4; end: 105594b13; -[CTPStickerContentManagerImpl setPerformer:] */

void FUN_105594ae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105594b14; end: 105594b4f; -[CTPStickerContentManagerImpl .cxx_destruct] */

void FUN_105594b14(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105594b50; end: 105594d8f; -[CTPItemViewFactory initWithRenderers:protobufTransformer:defaultPresentationModelProvider:creativeToolsABProvider:] */

undefined8 *
FUN_105594b50(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_f8 = PTR_PTR_1126e90c8;
  puVar5 = &uStack_100;
  uStack_100 = param_1;
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar5[1];
    puVar5[1] = puVar1;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar5[2];
    puVar5[2] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar5[3];
    puVar5[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar5[4];
    puVar5[4] = param_6;
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    _objc_alloc_init();
    uVar3 = puVar5[5];
    puVar5[5] = puVar1;
    _objc_release(uVar3);
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(param_3);
    puVar4 = &uStack_140;
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined8 *)0x0) {
      lVar6 = *plStack_130;
      do {
        puVar4 = (undefined8 *)0x0;
        do {
          if (*plStack_130 != lVar6) {
            _objc_enumerationMutation(param_3);
          }
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar3 = puVar5[1];
          func_0x00010bf5cc40(*(undefined8 *)(lStack_138 + (long)puVar4 * 8));
          func_0x00010c0df760(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar3);
          _objc_release(puVar1);
          puVar4 = (undefined8 *)((long)puVar4 + 1);
        } while (puVar2 != puVar4);
        puVar4 = &uStack_140;
        puVar2 = param_3;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar5;
  }
  ___stack_chk_fail();
  uVar3 = param_3[2];
  func_0x00010bf96f00(puVar4);
  func_0x00010bf96dc0(uVar3);
  func_0x00010c09faa0(param_3[5]);
  puVar5 = (undefined8 *)param_3[1];
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c280b40(param_3[5]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 105594d90; end: 105594e23; -[CTPItemViewFactory _rendererForItem:] */

void FUN_105594d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf96f00(param_3);
  func_0x00010bf96dc0(uVar2,param_2,param_3);
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105594e24; end: 105594eeb; -[CTPItemViewFactory _rendererForItemInstance:] */

void FUN_105594e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf96ee0();
  _objc_release(uVar5);
  _objc_release(param_3);
  iVar1 = 9;
  if ((int)uVar3 != 0x18) {
    iVar1 = (int)uVar3;
  }
  iVar2 = 9;
  if (iVar1 != 7) {
    iVar2 = iVar1;
  }
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x28));
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,iVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105594eec; end: 105594fd7; -[CTPItemViewFactory _noRegisteredRendererErrorForType:] */

void FUN_105594eec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f38758;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar5,param_2,&PTR____CFConstantStringClassReference_110f38738,1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110f38738;
    pcStack_58 = FUN_105594fd8;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110f38758;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_80 = puVar2;
    puStack_78 = puVar1;
    puStack_68 = puVar5;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_90 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_90,&ppuStack_98,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar4,param_2,&PTR____CFConstantStringClassReference_110f38738,1,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release();
    puVar5 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      func_0x00010c09faa0(*(undefined8 *)(puVar3 + 0x28));
      puVar5 = *(undefined **)(puVar3 + 8);
      func_0x00010bf00d20(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c280b40(*(undefined8 *)(puVar3 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105594fd8; end: 1055950c3; -[CTPItemViewFactory _noRegisteredRendererErrorForEntityCase:] */

void FUN_105594fd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f38758;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar3,param_2,&PTR____CFConstantStringClassReference_110f38738,1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    func_0x00010c09faa0(*(undefined8 *)(puVar1 + 0x28));
    puVar3 = *(undefined **)(puVar1 + 8);
    func_0x00010bf00d20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c280b40(*(undefined8 *)(puVar1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055950c4; end: 105595107; -[CTPItemViewFactory registeredRenderers] */

void FUN_1055950c4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105595108; end: 10559519b; -[CTPItemViewFactory registerItemRenderer:] */

void FUN_105595108(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_3);
    func_0x00010c09faa0(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf5cc40(param_3);
    func_0x00010c0df760(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2);
    _objc_release(param_3);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_unlock_11267dcf8);
    return;
  }
  return;
}



/* Entry: 10559519c; end: 10559530b; -[CTPItemViewFactory viewForItem:reuseView:presentationModelProvider:] */

void FUN_10559519c(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_1;
  func_0x00010be8e700(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = param_3;
    func_0x00010bf96f00(param_3);
    func_0x00010be63ec0(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae6b8;
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bb1c8;
    _objc_alloc(PTR_PTR_1126bb1c8);
    func_0x00010c030a60();
    _objc_release(puVar4);
    _objc_release(param_1);
  }
  else {
    if (param_4 != 0) {
      puVar3 = puVar1;
      func_0x00010bf0db40(puVar1,param_2,param_4,param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 != (undefined *)0x0) goto LAB_1055952d0;
    }
    puVar3 = puVar1;
    func_0x00010c29cdc0(puVar1,param_2,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1055952d0:
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10559530c; end: 1055956cf; -[CTPItemViewFactory viewForItemInstance:feature:presentationModelProviderType:] */

void FUN_10559530c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = param_1;
  func_0x00010be8e720();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf96ee0();
    func_0x00010be63ea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar8 = PTR_PTR_1126ae6b8;
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126bb1c8;
    _objc_alloc(PTR_PTR_1126bb1c8);
    func_0x00010c030a60();
    _objc_release(puVar8);
  }
  else {
    puVar8 = puVar1;
    _objc_opt_respondsToSelector(puVar1,PTR_s_viewForItemInstance_presentation_112684db0);
    if (((ulong)puVar8 & 1) != 0) {
      puVar4 = puVar1;
      func_0x00010c29ce20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105595678;
    }
    puVar8 = *(undefined **)(param_1 + 0x10);
    uVar2 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c084460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (puVar8 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126ae6b8;
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126bb1c8;
      _objc_alloc(PTR_PTR_1126bb1c8);
      func_0x00010c030a60();
      _objc_release(puVar7);
    }
    else {
      puStack_98 = &uStack_a0;
      uStack_a0 = 0;
      uStack_90 = 0x3032000000;
      pcStack_88 = FUN_1055956d0;
      uStack_80 = 0x1055956e0;
      puStack_78 = (undefined *)0x0;
      _objc_retain(param_3);
      _objc_retain(puVar8);
      func_0x00010c0c11a0(param_5);
      uVar5 = puStack_98[5];
      _objc_opt_respondsToSelector(uVar5,PTR_s_updateCTPItemFeature__11267ea20);
      if ((uVar5 & 1) != 0) {
        func_0x00010c283fe0(puStack_98[5]);
      }
      func_0x00010c29cde0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(param_3);
      __Block_object_dispose(&uStack_a0,8);
      puVar6 = puStack_78;
      puVar4 = param_1;
    }
    _objc_release(puVar6);
    param_1 = puVar8;
  }
  _objc_release(param_1);
LAB_105595678:
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055956d0; end: 1055956e7;  */

void FUN_1055956d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1055956e8; end: 1055957df;  */

void FUN_1055956e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0cc0c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0840e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96ee0();
  func_0x00010c0df760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10f560();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar7;
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c284010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
             PTR_s_updateCTPItemImageSize__11267ea28,param_2);
  return;
}



/* Entry: 1055957e0; end: 105595873;  */

void FUN_1055957e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c10f580(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c284010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
             PTR_s_updateCTPItemImageSize__11267ea28,param_2);
  return;
}



/* Entry: 105595874; end: 1055958c7; -[CTPItemViewFactory viewReuseIdentifierForItem:] */

void FUN_105595874(long param_1)

{
  long lVar1;
  
  func_0x00010be8e700();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c29e120(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055958c8; end: 1055958fb; -[CTPItemViewFactory canRenderItemViewForItemInstance:] */

bool FUN_1055958c8(long param_1)

{
  func_0x00010be8e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1055958fc; end: 1055959db; -[CTPItemViewFactory .cxx_destruct] */

void FUN_1055958fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055959dc; end: 105595c27;  */

void FUN_1055959dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bb1f8;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126bb200;
  _objc_alloc();
  func_0x00010bff8100();
  puVar3 = PTR_PTR_1126bb208;
  _objc_alloc_init();
  puVar4 = PTR_PTR_1126bb210;
  _objc_alloc_init();
  puVar5 = PTR_PTR_1126bb218;
  _objc_alloc();
  func_0x00010c002f60();
  puVar6 = PTR_PTR_1126bb220;
  _objc_alloc();
  func_0x00010c002e80();
  puVar7 = PTR_PTR_1126bb228;
  _objc_alloc();
  func_0x00010c046860();
  puVar8 = PTR_PTR_1126bb230;
  _objc_alloc();
  func_0x00010c04c7e0();
  puVar9 = PTR_PTR_1126bb238;
  _objc_alloc();
  func_0x00010c049740();
  puVar10 = PTR_PTR_1126bb240;
  _objc_alloc();
  func_0x00010c0493c0();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  _objc_release(*(undefined8 *)(puVar1 + 0xf0));
  _objc_release(*(undefined8 *)(puVar1 + 0xe8));
  _objc_release(*(undefined8 *)(puVar1 + 0xe0));
  _objc_release(*(undefined8 *)(puVar1 + 0xd8));
  _objc_release(*(undefined8 *)(puVar1 + 0xd0));
  _objc_release(*(undefined8 *)(puVar1 + 200));
  _objc_release(*(undefined8 *)(puVar1 + 0xc0));
  _objc_release(*(undefined8 *)(puVar1 + 0xb8));
  _objc_release(*(undefined8 *)(puVar1 + 0xb0));
  _objc_release(*(undefined8 *)(puVar1 + 0xa8));
  _objc_release(*(undefined8 *)(puVar1 + 0xa0));
  _objc_release(*(undefined8 *)(puVar1 + 0x98));
  _objc_release(*(undefined8 *)(puVar1 + 0x90));
  _objc_release(*(undefined8 *)(puVar1 + 0x88));
  _objc_release(*(undefined8 *)(puVar1 + 0x80));
  _objc_release(*(undefined8 *)(puVar1 + 0x78));
  _objc_release(*(undefined8 *)(puVar1 + 0x70));
  _objc_release(*(undefined8 *)(puVar1 + 0x68));
  _objc_release(*(undefined8 *)(puVar1 + 0x60));
  _objc_release(*(undefined8 *)(puVar1 + 0x58));
  _objc_release(*(undefined8 *)(puVar1 + 0x50));
  _objc_release(*(undefined8 *)(puVar1 + 0x48));
  _objc_release(*(undefined8 *)(puVar1 + 0x40));
  _objc_release(*(undefined8 *)(puVar1 + 0x38));
  _objc_release(*(undefined8 *)(puVar1 + 0x30));
  _objc_release(*(undefined8 *)(puVar1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(puVar1 + 0x20));
  return;
}



/* Entry: 105595c28; end: 105595d17;  */

void FUN_105595c28(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0xf0));
  _objc_release(*(undefined8 *)(param_1 + 0xe8));
  _objc_release(*(undefined8 *)(param_1 + 0xe0));
  _objc_release(*(undefined8 *)(param_1 + 0xd8));
  _objc_release(*(undefined8 *)(param_1 + 0xd0));
  _objc_release(*(undefined8 *)(param_1 + 200));
  _objc_release(*(undefined8 *)(param_1 + 0xc0));
  _objc_release(*(undefined8 *)(param_1 + 0xb8));
  _objc_release(*(undefined8 *)(param_1 + 0xb0));
  _objc_release(*(undefined8 *)(param_1 + 0xa8));
  _objc_release(*(undefined8 *)(param_1 + 0xa0));
  _objc_release(*(undefined8 *)(param_1 + 0x98));
  _objc_release(*(undefined8 *)(param_1 + 0x90));
  _objc_release(*(undefined8 *)(param_1 + 0x88));
  _objc_release(*(undefined8 *)(param_1 + 0x80));
  _objc_release(*(undefined8 *)(param_1 + 0x78));
  _objc_release(*(undefined8 *)(param_1 + 0x70));
  _objc_release(*(undefined8 *)(param_1 + 0x68));
  _objc_release(*(undefined8 *)(param_1 + 0x60));
  _objc_release(*(undefined8 *)(param_1 + 0x58));
  _objc_release(*(undefined8 *)(param_1 + 0x50));
  _objc_release(*(undefined8 *)(param_1 + 0x48));
  _objc_release(*(undefined8 *)(param_1 + 0x40));
  _objc_release(*(undefined8 *)(param_1 + 0x38));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105595d18; end: 105595dff;  */

void FUN_105595d18(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bb248;
  _objc_alloc(PTR_PTR_1126bb248);
  lVar2 = *(long *)(param_1 + 0x38);
  (**(code **)(lVar2 + 0x10))(lVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e2c0(puVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105595e00; end: 105595f27; -[CTPItemViewServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105595e00(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112725d64);
  _objc_destroyWeak(param_1 + _DAT_112725d68);
  _objc_destroyWeak(param_1 + _DAT_112725d1c);
  _objc_destroyWeak(param_1 + _DAT_112725d60);
  _objc_destroyWeak(param_1 + _DAT_112725d5c);
  _objc_destroyWeak(param_1 + _DAT_112725d54);
  _objc_destroyWeak(param_1 + _DAT_112725d50);
  _objc_destroyWeak(param_1 + _DAT_112725d4c);
  _objc_destroyWeak(param_1 + _DAT_112725d20);
  _objc_destroyWeak(param_1 + _DAT_112725d58);
  _objc_destroyWeak(param_1 + _DAT_112725d38);
  _objc_destroyWeak(param_1 + _DAT_112725d24);
  _objc_destroyWeak(param_1 + _DAT_112725d34);
  _objc_destroyWeak(param_1 + _DAT_112725d2c);
  _objc_destroyWeak(param_1 + _DAT_112725d28);
  _objc_destroyWeak(param_1 + _DAT_112725d18);
  _objc_destroyWeak(param_1 + _DAT_112725d14);
  _objc_destroyWeak(param_1 + _DAT_112725d30);
  _objc_destroyWeak(param_1 + _DAT_112725d48);
  _objc_destroyWeak(param_1 + _DAT_112725d44);
  _objc_destroyWeak(param_1 + _DAT_112725d40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725d3c);
  return;
}



/* Entry: 105595f28; end: 105595f9b; -[CTPRenderingLoggerImplementation initWithGrapheneRegistry:] */

undefined1 * FUN_105595f28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e90d0;
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



/* Entry: 105595f9c; end: 105596157; -[CTPRenderingLoggerImplementation logRendererMetricsWithDurationMs:name:isRecycledView:] */

void FUN_105595f9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126baca8;
  func_0x00010bfe80e0(PTR_PTR_1126baca8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dec678;
  if (param_5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dec698;
  }
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110db5dd8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf5cf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126baca8;
  func_0x00010bfe8100(PTR_PTR_1126baca8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110db5dd8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf5cf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105596158; end: 105596163; -[CTPRenderingLoggerImplementation .cxx_destruct] */

void FUN_105596158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105596164; end: 10559616b; -[CTPItemRendererAutoCaptions ctItemEntityCase] */

undefined8 FUN_105596164(void)

{
  return 0x16;
}



/* Entry: 10559616c; end: 105596177; -[CTPItemRendererAutoCaptions viewReuseIdentifier] */

undefined ** FUN_10559616c(void)

{
  return &PTR____CFConstantStringClassReference_110dec6b8;
}



/* Entry: 105596178; end: 10559617f; -[CTPItemRendererAutoCaptions viewForItem:presentationModelProvider:] */

void FUN_105596178(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be90ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestFailureWithErrorCode__112581d98,1);
  return;
}



/* Entry: 105596180; end: 105596187; -[CTPItemRendererAutoCaptions attemptToRecycleView:forUseWithItem:presentationModelProvider:] */

undefined8 FUN_105596180(void)

{
  return 0;
}



/* Entry: 105596188; end: 1055963bb; -[CTPItemRendererAutoCaptions viewForItemInstance:presentationModelProviderType:] */

void FUN_105596188(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf114a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) {
    func_0x00010be90fe0(param_1,param_2,2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0fb880();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126bb258;
      _objc_alloc(PTR_PTR_1126bb258);
      func_0x00010c0511e0();
      puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
      puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      func_0x00010bfe7c80(puVar7,param_2,puVar4,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126badc8;
    _objc_retain(puVar7);
    _objc_opt_new(puVar4);
    puVar5 = puVar4;
    func_0x00010c2ad3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126bb260;
    _objc_alloc(PTR_PTR_1126bb260);
    func_0x00010c01c560();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    param_1 = PTR_PTR_1126bb1c8;
    _objc_alloc(PTR_PTR_1126bb1c8);
    puVar4 = PTR_PTR_1126ae6b8;
    puVar6 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c030a60(param_1,param_2,puVar4,0);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar7);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055963bc; end: 105596477; -[CTPItemRendererAutoCaptions _requestFailureWithErrorCode:] */

void FUN_1055963bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110f38738,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bb1c8;
  _objc_alloc(PTR_PTR_1126bb1c8);
  func_0x00010c030a60();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105596478; end: 1055964df; -[CTPCustomojiItemView initWithItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105596478(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_112725d74;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1055964e0; end: 105596533; -[CTPCustomojiItemView initWithFrame:] */

undefined1 * FUN_1055964e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e90d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c219b60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105596534; end: 1055967ef; -[CTPCustomojiItemView setCustomojiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105596534(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar16 = (long)_DAT_112725d78;
  if (*(long *)(param_1 + lVar16) != 0) {
    func_0x00010c12c960();
  }
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_class(PTR__OBJC_CLASS___UIImageView_1126aec28);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) != 0) {
    lVar15 = (long)_DAT_112725d7c;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar15);
    *(ulong *)(param_1 + lVar15) = param_3;
    _objc_release(uVar3);
  }
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  *(ulong *)(param_1 + lVar16) = param_3;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  if (*(long *)(param_1 + lVar16) != 0) {
    func_0x00010befbb60(param_1);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c2793a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08de00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(param_1);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(lVar15);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1055967f0; end: 1055967f3; -[CTPCustomojiItemView willDisplay] */

void FUN_1055967f0(void)

{
  return;
}



/* Entry: 1055967f4; end: 1055967f7; -[CTPCustomojiItemView didEndDisplay] */

void FUN_1055967f4(void)

{
  return;
}



/* Entry: 1055967f8; end: 105596807; -[CTPCustomojiItemView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1055967f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725d74);
}



/* Entry: 105596808; end: 105596847; -[CTPCustomojiItemView setItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105596808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112725d74;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105596848; end: 105596857; -[CTPCustomojiItemView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105596848(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725d80);
}



/* Entry: 105596858; end: 105596867; -[CTPCustomojiItemView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105596858(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112725d70);
}



/* Entry: 105596868; end: 105596877; -[CTPCustomojiItemView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105596868(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112725d70) = param_3;
  return;
}



/* Entry: 105596878; end: 105596887; -[CTPCustomojiItemView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105596878(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725d7c);
}



/* Entry: 105596888; end: 105596897; -[CTPCustomojiItemView customojiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105596888(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112725d78);
}



/* Entry: 105596898; end: 1055968f7; -[CTPCustomojiItemView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105596898(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112725d78,0);
  _objc_storeStrong(param_1 + _DAT_112725d7c,0);
  _objc_storeStrong(param_1 + _DAT_112725d80,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112725d74,0);
  return;
}



/* Entry: 1055968f8; end: 105596933; -[CTPItemRenderRequestBitmoji init] */

void FUN_1055968f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126e90e0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return;
}



/* Entry: 105596934; end: 105596997; -[CTPItemRenderRequestBitmoji setCurrentRequest:] */

void FUN_105596934(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bf2dba0();
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 105596998; end: 1055969e3; -[CTPItemRenderRequestBitmoji cancel] */

void FUN_105596998(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x14) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}


