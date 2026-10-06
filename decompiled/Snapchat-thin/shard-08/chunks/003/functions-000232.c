/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060093b8; end: 10600949b; +[SCPNCoordinate descriptor] */

void FUN_1060093b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2aa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abc6a0,
                        &PTR____CFConstantStringClassReference_110df0138,&PTR_DAT_113138ee8,
                        &PTR_DAT_113138fc0,3,0x10,0x1c);
    puRam00000001136c2aa0 = puVar1;
  }
  return;
}



/* Entry: 10600949c; end: 1060094a7;  */

bool FUN_10600949c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1060094a8; end: 106009523;  */

undefined * FUN_1060094a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2ab0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e38278,
                        &UNK_10ddd3730,&UNK_10ddd3764,3,FUN_106009524,0);
    do {
      if (puRam00000001136c2ab0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2ab0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2ab0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2ab0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2ab0;
}



/* Entry: 106009524; end: 10600952f;  */

bool FUN_106009524(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106009530; end: 106009597; +[ExtractFeaturesRequest descriptor] */

void FUN_106009530(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2ab8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abc740,
                        &PTR____CFConstantStringClassReference_110e38298,&PTR_DAT_113139028,
                        &PTR_DAT_113139040,3,0x18,0x1c);
    puRam00000001136c2ab8 = puVar1;
  }
  return;
}



/* Entry: 106009598; end: 106009623; +[ExtractFeaturesResponse descriptor] */

undefined * FUN_106009598(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2ac0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abc790,
                        &PTR____CFConstantStringClassReference_110e382b8,&PTR_DAT_113139028,
                        &PTR_DAT_113139180,6,0x38,0x1c);
    func_0x00010c229040();
    puRam00000001136c2ac0 = puVar1;
  }
  return puRam00000001136c2ac0;
}



/* Entry: 106009624; end: 10600968b; +[BatchExtractFeaturesRequest descriptor] */

void FUN_106009624(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2ac8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abc7e0,
                        &PTR____CFConstantStringClassReference_110e382d8,&PTR_DAT_113139028,
                        &PTR_DAT_1131390a0,3,0x18,0x1c);
    puRam00000001136c2ac8 = puVar1;
  }
  return;
}



/* Entry: 10600968c; end: 1060096f3; +[BatchExtractFeaturesResponse descriptor] */

void FUN_10600968c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2ad0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abc830,
                        &PTR____CFConstantStringClassReference_110e382f8,&PTR_DAT_113139028,
                        &PTR_DAT_113139100,4,0x28,0x1c);
    puRam00000001136c2ad0 = puVar1;
  }
  return;
}



/* Entry: 1060096f4; end: 10600975b; +[SCPNLOOKALIEBytesList descriptor] */

void FUN_1060096f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2ad8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abc8d0,
                        &PTR____CFConstantStringClassReference_110e38158,&PTR_DAT_113139250,
                        &PTR_DAT_113139268,1,0x10,0x1c);
    puRam00000001136c2ad8 = puVar1;
  }
  return;
}



/* Entry: 10600975c; end: 1060097c3; +[SCPNLOOKALIEFloatList descriptor] */

void FUN_10600975c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2ae0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abc920,
                        &PTR____CFConstantStringClassReference_110e38178,&PTR_DAT_113139250,
                        &PTR_DAT_113139288,1,0x10,0x1c);
    puRam00000001136c2ae0 = puVar1;
  }
  return;
}



/* Entry: 1060097c4; end: 10600982b; +[SCPNLOOKALIEInt64List descriptor] */

void FUN_1060097c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2ae8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abc970,
                        &PTR____CFConstantStringClassReference_110e38198,&PTR_DAT_113139250,
                        &PTR_DAT_1131392a8,1,0x10,0x1c);
    puRam00000001136c2ae8 = puVar1;
  }
  return;
}



/* Entry: 10600982c; end: 1060098b7; +[SCPNLOOKALIEFeature descriptor] */

undefined * FUN_10600982c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2af0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abc9c0,
                        &PTR____CFConstantStringClassReference_110e32f78,&PTR_DAT_113139250,
                        &PTR_DAT_1131393e8,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136c2af0 = puVar1;
  }
  return puRam00000001136c2af0;
}



/* Entry: 1060098b8; end: 10600991f; +[SCPNLOOKALIEFeatures descriptor] */

void FUN_1060098b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2af8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abca10,
                        &PTR____CFConstantStringClassReference_110e38318,&PTR_DAT_113139250,
                        &PTR_s_feature_1131392c8,1,0x10,0x1c);
    puRam00000001136c2af8 = puVar1;
  }
  return;
}



/* Entry: 106009920; end: 106009987; +[SCPNLOOKALIEFeatureList descriptor] */

void FUN_106009920(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abca60,
                        &PTR____CFConstantStringClassReference_110e38338,&PTR_DAT_113139250,
                        &PTR_DAT_1131392e8,1,0x10,0x1c);
    puRam00000001136c2b00 = puVar1;
  }
  return;
}



/* Entry: 106009988; end: 1060099ef; +[SCPNLOOKALIEFeatureLists descriptor] */

void FUN_106009988(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abcab0,
                        &PTR____CFConstantStringClassReference_110e38358,&PTR_DAT_113139250,
                        &PTR_DAT_113139308,1,0x10,0x1c);
    puRam00000001136c2b08 = puVar1;
  }
  return;
}



/* Entry: 1060099f0; end: 106009a57; +[SCPNLOOKALIESequenceExample descriptor] */

void FUN_1060099f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abcb00,
                        &PTR____CFConstantStringClassReference_110e38378,&PTR_DAT_113139250,
                        &PTR_s_context_113139348,2,0x18,0x1c);
    puRam00000001136c2b10 = puVar1;
  }
  return;
}



/* Entry: 106009a58; end: 106009ae3; +[SCPNLOOKALIEMediaFeatures descriptor] */

undefined * FUN_106009a58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abcb50,
                        &PTR____CFConstantStringClassReference_110e38398,&PTR_DAT_113139250,
                        &PTR_DAT_113139388,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c2b18 = puVar1;
  }
  return puRam00000001136c2b18;
}



/* Entry: 106009ae4; end: 106009b4b; +[SCPNLOOKALIEMediaFeaturesList descriptor] */

void FUN_106009ae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abcba0,
                        &PTR____CFConstantStringClassReference_110e383b8,&PTR_DAT_113139250,
                        &PTR_DAT_113139328,1,0x10,0x1c);
    puRam00000001136c2b20 = puVar1;
  }
  return;
}



/* Entry: 106009b4c; end: 106009c2f; +[Hit descriptor] */

void FUN_106009b4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abcc40,
                        &PTR____CFConstantStringClassReference_110e383d8,&PTR_DAT_113139468,
                        &PTR_DAT_113139480,4,0x20,0x1c);
    puRam00000001136c2b28 = puVar1;
  }
  return;
}



/* Entry: 106009c30; end: 106009c3b;  */

bool FUN_106009c30(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 106009c3c; end: 106009cd7; +[SCPNLOOKALIEMediaReference descriptor] */

undefined * FUN_106009c3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abcce0,
                        &PTR____CFConstantStringClassReference_110e38418,&PTR_DAT_113139508,
                        &PTR_s_mediaId_1131395c0,6,0x30,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10ddd37b8);
    puRam00000001136c2b38 = puVar1;
  }
  return puRam00000001136c2b38;
}



/* Entry: 106009cd8; end: 106009d3f; +[SCPNLOOKALIEMedia descriptor] */

void FUN_106009cd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abcd30,
                        &PTR____CFConstantStringClassReference_110e133f8,&PTR_DAT_113139508,
                        &PTR_DAT_113139560,3,0x18,0x1c);
    puRam00000001136c2b40 = puVar1;
  }
  return;
}



/* Entry: 106009d40; end: 106009da7; +[SCPNLOOKALIEMediaList descriptor] */

void FUN_106009d40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abcd80,
                        &PTR____CFConstantStringClassReference_110e38438,&PTR_DAT_113139508,
                        &PTR_DAT_113139520,1,0x10,0x1c);
    puRam00000001136c2b48 = puVar1;
  }
  return;
}



/* Entry: 106009da8; end: 106009e0f; +[SCPNLOOKALIEMediaMap descriptor] */

void FUN_106009da8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abcdd0,
                        &PTR____CFConstantStringClassReference_110e37cb8,&PTR_DAT_113139508,
                        &PTR_s_map_113139540,1,0x10,0x1c);
    puRam00000001136c2b50 = puVar1;
  }
  return;
}



/* Entry: 106009e10; end: 106009e77; +[SCPCNRTSAnnotations descriptor] */

void FUN_106009e10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abce70,
                        &PTR____CFConstantStringClassReference_110e38458,&PTR_DAT_113139680,
                        &PTR_DAT_113139698,1,0x10,0x1c);
    puRam00000001136c2b58 = puVar1;
  }
  return;
}



/* Entry: 106009e78; end: 106009f5b; +[SCPCNRTSAnnotation descriptor] */

void FUN_106009e78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abcec0,
                        &PTR____CFConstantStringClassReference_110e38478,&PTR_DAT_113139680,
                        &PTR_s_label_1131396b8,2,0x10,0x1c);
    puRam00000001136c2b60 = puVar1;
  }
  return;
}



/* Entry: 106009f5c; end: 106009f67;  */

bool FUN_106009f5c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106009f68; end: 106009fcf; +[SCPCNSettingsSettingsRequest descriptor] */

void FUN_106009f68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abcf60,
                        &PTR____CFConstantStringClassReference_110e384b8,&PTR_DAT_113139700,
                        &PTR_s_requestId_113139718,1,0x10,0x1c);
    puRam00000001136c2b70 = puVar1;
  }
  return;
}



/* Entry: 106009fd0; end: 10600a037; +[SCPCNSettingsSettingsResponse descriptor] */

void FUN_106009fd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abd118,
                        &PTR____CFConstantStringClassReference_110e384d8,&PTR_DAT_113139700,
                        &PTR_DAT_113139738,1,0x10,0x1c);
    puRam00000001136c2b78 = puVar1;
  }
  return;
}



/* Entry: 10600a038; end: 10600a0d3; +[SCPCNSettingsSettingsResponse_Section descriptor] */

undefined * FUN_10600a038(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abd140,
                        &PTR____CFConstantStringClassReference_110dec3b8,&PTR_DAT_113139700,
                        &PTR_s_title_113139818,3,0x20,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112abd118);
    puRam00000001136c2b80 = puVar1;
  }
  return puRam00000001136c2b80;
}



/* Entry: 10600a0d4; end: 10600a13b; +[SCPCNSettingsCategoriesRequiringPermissions descriptor] */

void FUN_10600a0d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abd168,
                        &PTR____CFConstantStringClassReference_110e384f8,&PTR_DAT_113139700,
                        &PTR_s_categoriesArray_113139758,1,0x10,0x1c);
    puRam00000001136c2b88 = puVar1;
  }
  return;
}



/* Entry: 10600a13c; end: 10600a1bf; +[SCPCNSettingsCategoriesRequiringPermissions_Category descriptor] */

undefined * FUN_10600a13c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abd190,
                        &PTR____CFConstantStringClassReference_110e38518,&PTR_DAT_113139700,
                        &PTR_s_categoryId_113139798,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c2b90 = puVar1;
  }
  return puRam00000001136c2b90;
}



/* Entry: 10600a1c0; end: 10600a227; +[SCPCNSettingsCategoryPermissionSettings descriptor] */

void FUN_10600a1c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2b98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abd050,
                        &PTR____CFConstantStringClassReference_110e38538,&PTR_DAT_113139700,
                        &PTR_DAT_113139778,1,0x10,0x1c);
    puRam00000001136c2b98 = puVar1;
  }
  return;
}



/* Entry: 10600a228; end: 10600a28f; +[SCPCNSettingsCategoryPermissionSetting descriptor] */

void FUN_10600a228(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2ba0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abd0a0,
                        &PTR____CFConstantStringClassReference_110e38558,&PTR_DAT_113139700,
                        &PTR_s_categoryId_113139878,4,0x20,0x1c);
    puRam00000001136c2ba0 = puVar1;
  }
  return;
}



/* Entry: 10600a290; end: 10600a373; +[SCPCNSettingsPromptHistory descriptor] */

void FUN_10600a290(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2ba8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abd0f0,
                        &PTR____CFConstantStringClassReference_110e38578,&PTR_DAT_113139700,
                        &PTR_DAT_1131397d8,2,0x18,0x1c);
    puRam00000001136c2ba8 = puVar1;
  }
  return;
}



/* Entry: 10600a374; end: 10600a37f;  */

bool FUN_10600a374(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10600a380; end: 10600a3fb;  */

undefined * FUN_10600a380(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2bb8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e385b8,
                        &UNK_10ddd3868,&UNK_10ddd3888,4,FUN_10600a3fc,0);
    do {
      if (puRam00000001136c2bb8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2bb8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2bb8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2bb8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2bb8;
}



/* Entry: 10600a3fc; end: 10600a407;  */

bool FUN_10600a3fc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10600a408; end: 10600a46f; +[Lens descriptor] */

void FUN_10600a408(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2bc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abd230,
                        &PTR____CFConstantStringClassReference_110dcb5d8,&PTR_DAT_113139900,
                        &PTR_s_id_p_113139918,1,0x10,0x1c);
    puRam00000001136c2bc0 = puVar1;
  }
  return;
}



/* Entry: 10600a470; end: 10600a4eb; +[URL descriptor] */

undefined * FUN_10600a470(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2bc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abd280,
                        &PTR____CFConstantStringClassReference_110e2dc38,&PTR_DAT_113139900,
                        &PTR_s_URL_113139938,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2bc8 = puVar1;
  }
  return puRam00000001136c2bc8;
}



/* Entry: 10600a4ec; end: 10600a553; +[Imagecode descriptor] */

void FUN_10600a4ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2bd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abd2d0,
                        &PTR____CFConstantStringClassReference_110e385d8,&PTR_DAT_113139900,
                        &PTR_DAT_113139978,2,0x10,0x1c);
    puRam00000001136c2bd0 = puVar1;
  }
  return;
}



/* Entry: 10600a554; end: 10600a5cf; +[SnapProProfile descriptor] */

undefined * FUN_10600a554(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2bd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abd320,
                        &PTR____CFConstantStringClassReference_110e385f8,&PTR_DAT_113139900,
                        &PTR_s_userId_1131399b8,6,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2bd8 = puVar1;
  }
  return puRam00000001136c2bd8;
}



/* Entry: 10600a5d0; end: 10600a64b; +[WebResult descriptor] */

undefined * FUN_10600a5d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2be0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abd370,
                        &PTR____CFConstantStringClassReference_110e38618,&PTR_DAT_113139900,
                        &PTR_DAT_113139a78,6,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2be0 = puVar1;
  }
  return puRam00000001136c2be0;
}



/* Entry: 10600a64c; end: 10600a6c7; +[Discover descriptor] */

undefined * FUN_10600a64c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2be8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abd3c0,
                        &PTR____CFConstantStringClassReference_110df1158,&PTR_DAT_113139900,
                        &PTR_DAT_113139b38,6,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2be8 = puVar1;
  }
  return puRam00000001136c2be8;
}



/* Entry: 10600a6c8; end: 10600a743; +[KnowledgeGraphEntity descriptor] */

undefined * FUN_10600a6c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2bf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abd410,
                        &PTR____CFConstantStringClassReference_110e38638,&PTR_DAT_113139900,
                        &PTR_DAT_113139bf8,7,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2bf0 = puVar1;
  }
  return puRam00000001136c2bf0;
}



/* Entry: 10600a744; end: 10600a7df; +[TaggedContent descriptor] */

undefined * FUN_10600a744(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2bf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abd460,
                        &PTR____CFConstantStringClassReference_110e38658,&PTR_DAT_113139900,
                        &PTR_DAT_113139cd8,9,0x50,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10ddd38dd);
    puRam00000001136c2bf8 = puVar1;
  }
  return puRam00000001136c2bf8;
}



/* Entry: 10600a7e0; end: 10600a847; +[TaggedContents descriptor] */

void FUN_10600a7e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2c00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abd4b0,
                        &PTR____CFConstantStringClassReference_110e38678,&PTR_DAT_113139900,
                        &PTR_s_contentsArray_113139958,1,0x10,0x1c);
    puRam00000001136c2c00 = puVar1;
  }
  return;
}



/* Entry: 10600a848; end: 10600a8af; +[SCPCNCOFScanImageResolution descriptor] */

void FUN_10600a848(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2c08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112abd550,
                        &PTR____CFConstantStringClassReference_110e38698,&PTR_DAT_113139df8,
                        &PTR_s_width_113139e10,4,0x10,0x1c);
    puRam00000001136c2c08 = puVar1;
  }
  return;
}



/* Entry: 10600a8b0; end: 10600a923; -[SCScanSessionBlizzardViewModelLogger initWithSessionLogger:] */

undefined1 * FUN_10600a8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef030;
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



/* Entry: 10600a924; end: 10600a95b; -[SCScanSessionBlizzardViewModelLogger didAutoOpenSnapcodeAddFriendViewModel] */

void FUN_10600a924(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14eac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10600a95c; end: 10600a967; -[SCScanSessionBlizzardViewModelLogger .cxx_destruct] */

void FUN_10600a95c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10600a968; end: 10600aa67; -[SCScanViewModelLoggingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10600a968(long param_1)

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
  puVar2 = PTR_PTR_1126c7080;
  _objc_alloc(PTR_PTR_1126c7080);
  func_0x00010c0453c0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11273ccc0));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10600aa68; end: 10600ab07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10600aa68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c7078;
  _objc_alloc(PTR_PTR_1126c7078);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_11273ccc8;
    _objc_loadWeakRetained(lVar3);
  }
  lVar2 = lVar3;
  func_0x00010c160160(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0453c0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10600ab08; end: 10600ab4f; -[SCScanViewModelLoggingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10600ab08(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ccc0,0);
  _objc_destroyWeak(param_1 + _DAT_11273ccc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273ccc4);
  return;
}



/* Entry: 10600ab50; end: 10600abc3; -[SCScanViewModelLoggingServices initWithSessionLogger:] */

undefined1 * FUN_10600ab50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef038;
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



/* Entry: 10600abc4; end: 10600abcb; -[SCScanViewModelLoggingServices sessionLogger] */

undefined8 FUN_10600abc4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10600abcc; end: 10600abd7; -[SCScanViewModelLoggingServices .cxx_destruct] */

void FUN_10600abcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10600abd8; end: 10600abdb; -[SCScanResultsEntryPoint begin] */

void FUN_10600abd8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__begin_1125525c8);
  return;
}



/* Entry: 10600abdc; end: 10600acd3; -[SCScanResultsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10600abdc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar5 = (long)_DAT_11273ccd0;
  lVar1 = *(long *)(param_1 + lVar5);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273ccd4);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10600acd4;
    puStack_40 = &UNK_110842e18;
    uStack_38 = uVar3;
    _objc_retain(uVar3);
    func_0x00010bf95bc0(uVar4,param_2,&puStack_58);
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010c117720(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_38);
    _objc_release(uVar3);
  }
  else {
    func_0x00010c117720();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10600acd4; end: 10600acdb;  */

void FUN_10600acd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10600acdc; end: 10600add7; -[SCScanResultsEntryPoint _begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10600acdc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_11273ccf0;
    _objc_loadWeakRetained();
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273ccd8);
  _objc_retain(lVar1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf9d5c0(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10600add8; end: 10600ae23;  */

void FUN_10600add8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7088;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10600ae24; end: 10600ae9b;  */

void FUN_10600ae24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0d3c80(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf22660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(param_2);
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd3e40();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10600ae9c; end: 10600b3b7; -[SCScanResultsEntryPoint _beginWithPlugIns:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10600ae9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c7090;
  _objc_alloc();
  lVar17 = (long)_DAT_11273ccdc;
  lVar2 = param_1 + lVar17;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c160160();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11273cce0;
  lVar4 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0453e0();
  lVar16 = (long)_DAT_11273cce4;
  uVar6 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar6);
  _objc_retain(puVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_initWeak(auStack_68,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10600b3b8;
  puStack_80 = &UNK_110841fb0;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar1);
  puStack_78 = puVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_98);
  lVar2 = param_1 + _DAT_11273cce8;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126c7098;
  _objc_alloc();
  lVar2 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c14e860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar4);
  lVar8 = lVar4;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034f80();
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar9 = PTR_PTR_1126c70a0;
  _objc_alloc(PTR_PTR_1126c70a0);
  uVar6 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c14efc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11273ccec;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + lVar17;
  _objc_loadWeakRetained(lVar17);
  lVar8 = lVar17;
  func_0x00010c160160();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar4);
  lVar10 = lVar4;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0572a0(puVar9);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar17);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar6);
  puVar11 = PTR_PTR_1126c70a8;
  _objc_alloc(PTR_PTR_1126c70a8);
  func_0x00010c041760();
  puVar12 = PTR_PTR_1126c70b0;
  _objc_alloc(PTR_PTR_1126c70b0);
  uVar6 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c14ef80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c14efa0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c14f4a0();
  func_0x00010c062000(puVar12);
  _objc_release(lVar2);
  _objc_release(uVar13);
  _objc_release(uVar6);
  puVar14 = PTR_PTR_1126c70b8;
  _objc_alloc();
  lVar2 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061fe0();
  lVar17 = (long)_DAT_11273ccd4;
  uVar6 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar14;
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar2);
  uVar6 = *(undefined8 *)(param_1 + lVar17);
  param_1 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c14e900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf191a0(uVar6);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(lVar5);
  _objc_release(puStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10600b3b8; end: 10600b437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10600b3b8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + _DAT_11273cce0;
    _objc_loadWeakRetained(lVar2);
  }
  lVar1 = lVar2;
  func_0x00010c27ece0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10600b438; end: 10600b513; -[SCScanResultsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10600b438(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ccf8,0);
  _objc_storeStrong(param_1 + _DAT_11273ccd8,0);
  _objc_storeStrong(param_1 + _DAT_11273ccf4,0);
  _objc_destroyWeak(param_1 + _DAT_11273cce8);
  _objc_destroyWeak(param_1 + _DAT_11273ccf0);
  _objc_destroyWeak(param_1 + _DAT_11273ccec);
  _objc_destroyWeak(param_1 + _DAT_11273cce0);
  _objc_destroyWeak(param_1 + _DAT_11273ccdc);
  _objc_storeStrong(param_1 + _DAT_11273ccfc,0);
  _objc_storeStrong(param_1 + _DAT_11273cd00,0);
  _objc_storeStrong(param_1 + _DAT_11273ccd0,0);
  _objc_storeStrong(param_1 + _DAT_11273cce4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273ccd4,0);
  return;
}



/* Entry: 10600b514; end: 10600b547; -[SCScanResultsPageNameLoggingViewController viewDidLoad] */

void FUN_10600b514(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ef040;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewDidLoad_112684cd8);
  return;
}



/* Entry: 10600b548; end: 10600b54f; -[SCScanResultsPageNameLoggingViewController pageViewName] */

undefined8 FUN_10600b548(void)

{
  return 0xf9;
}



/* Entry: 10600b550; end: 10600b60b; -[SCScanResultsViewController initWithSessionLogger:scanResultsDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10600b550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ef048;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273cd04;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11273cd08),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10600b60c; end: 10600b647; -[SCScanResultsViewController loadView] */

void FUN_10600b60c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c6f40;
  _objc_alloc_init(PTR_PTR_1126c6f40);
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10600b648; end: 10600ba27; -[SCScanResultsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10600b648(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ef048;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_viewDidLoad_112684cd8);
  puVar2 = PTR_PTR_1126b0870;
  _objc_alloc_init();
  func_0x00010c1d96a0();
  lVar8 = (long)_DAT_11273cd0c;
  _objc_retain(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar2;
  _objc_release(uVar3);
  lVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  func_0x00010c14c940(puVar2);
  puVar4 = PTR_PTR_1126b0870;
  _objc_alloc_init();
  func_0x00010c1d96a0();
  lVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar8);
  func_0x00010c14c940(puVar4);
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  puVar5 = PTR_PTR_1126aeaf8;
  puStack_98 = &uStack_a0;
  _objc_alloc();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10600ba28;
  puStack_b8 = &UNK_1109078e8;
  puStack_a8 = &uStack_a0;
  _objc_retain(puVar4);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x10600ba70;
  puStack_e8 = &UNK_110907918;
  puStack_d8 = &uStack_a0;
  puStack_b0 = puVar4;
  _objc_retain(puVar4);
  puStack_e0 = puVar4;
  func_0x00010c0311a0();
  puVar6 = PTR_PTR_1126c70c0;
  _objc_alloc_init();
  puVar7 = PTR_PTR_1126c6f40;
  _objc_alloc_init(PTR_PTR_1126c6f40);
  func_0x00010c222380(puVar6);
  _objc_release(puVar7);
  lVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c29bf00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar8);
  _objc_release(puVar7);
  _objc_release(lVar8);
  puVar7 = puVar6;
  func_0x00010c29bf00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c940();
  _objc_release(puVar7);
  lVar8 = (long)_DAT_11273cd10;
  _objc_retain(puVar6);
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar6;
  _objc_release(uVar3);
  _objc_initWeak(auStack_108,param_1);
  puVar7 = PTR_PTR_1126aeaf8;
  _objc_alloc();
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_10600bad8;
  puStack_128 = &UNK_1108e3768;
  _objc_retain(puVar5);
  puStack_120 = puVar5;
  _objc_retain(puVar6);
  puStack_118 = puVar6;
  _objc_copyWeak(auStack_110,auStack_108);
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  _objc_copyWeak(auStack_148,auStack_108);
  func_0x00010c0311a0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273cd14);
  *(undefined **)(param_1 + _DAT_11273cd14) = puVar7;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_148);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_110);
  _objc_release(puStack_118);
  _objc_release(puStack_120);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puStack_e0);
  _objc_release(puStack_b0);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(puVar4);
  _objc_release(puVar2);
  return;
}



/* Entry: 10600ba28; end: 10600bad7;  */

void FUN_10600ba28(long param_1,undefined8 param_2)

{
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) {
    func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 10600bad8; end: 10600bc7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10600bad8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf0c980(uVar1);
  func_0x00010c1c8b80(param_2);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11273cd08;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c13ca60();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10600bc80; end: 10600bc8b;  */

void FUN_10600bc80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10600bc8c; end: 10600bc9b; -[SCScanResultsViewController scanResultsContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10600bc8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273cd0c);
}



/* Entry: 10600bc9c; end: 10600bcab; -[SCScanResultsViewController scanResultsActionContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10600bc9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273cd14);
}



/* Entry: 10600bcac; end: 10600bcbb; -[SCScanResultsViewController scanResultsActionPresentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10600bcac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273cd10);
}



/* Entry: 10600bcbc; end: 10600bd27; -[SCScanResultsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10600bcbc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273cd10,0);
  _objc_storeStrong(param_1 + _DAT_11273cd14,0);
  _objc_storeStrong(param_1 + _DAT_11273cd0c,0);
  _objc_storeStrong(param_1 + _DAT_11273cd04,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273cd08);
  return;
}



/* Entry: 10600bd28; end: 10600be7b; -[SCScanResultsWorkflow initWithViewModelProviderWorkflow:actionRouterWorkflow:scanCardsWorkflow:performer:delegate:] */

undefined1 *
FUN_10600bd28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ef050;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10600be7c; end: 10600bfdb; -[SCScanResultsWorkflow beginWithScanAnalysisObservables:] */

void FUN_10600be7c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010beeed00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 8);
    lVar2 = param_3;
    func_0x00010c14f020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf19160(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010bf191c0(*(undefined8 *)(param_1 + 0x10));
    func_0x00010bf19280(*(undefined8 *)(param_1 + 0x18));
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10600bfdc; end: 10600c023;  */

void FUN_10600bfdc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff940();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10600c024; end: 10600c16b; -[SCScanResultsWorkflow endWithCompletion:] */

void FUN_10600c024(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uVar2 = param_3;
  _objc_retain();
  _dispatch_group_create();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10600c16c;
  puStack_60 = &UNK_110842e18;
  uStack_58 = uVar2;
  _objc_retain();
  ppuVar3 = &puStack_78;
  _objc_retainBlock(ppuVar3);
  _dispatch_group_enter(uVar2);
  func_0x00010bf95bc0(*(undefined8 *)(param_1 + 8));
  _dispatch_group_enter(uVar2);
  func_0x00010bf95bc0(*(undefined8 *)(param_1 + 0x10));
  _dispatch_group_enter(uVar2);
  func_0x00010bf95bc0(*(undefined8 *)(param_1 + 0x18));
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10600c174;
  puStack_88 = &UNK_110849530;
  uStack_80 = param_3;
  _objc_retain(param_3);
  func_0x000100bc0718(uVar2,uVar4,&puStack_a0);
  _objc_release(uVar4);
  _objc_release(uStack_80);
  _objc_release(ppuVar3);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10600c16c; end: 10600c187;  */

void FUN_10600c16c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10600c188; end: 10600c27b; -[SCScanResultsWorkflow _didReceiveScanCardsAction:] */

void FUN_10600c188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10600c27c;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10600c2ac;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x10600c2dc;
  puStack_80 = &UNK_110849810;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x10600c324;
  puStack_a8 = &UNK_110907978;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x10600c36c;
  puStack_d0 = &UNK_1108450c8;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_10600c3b4;
  puStack_f8 = &UNK_1108450c8;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0bd5a0(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110);
  return;
}



/* Entry: 10600c27c; end: 10600c3b3;  */

void FUN_10600c27c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c13cfc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10600c3b4; end: 10600c3c3;  */

void FUN_10600c3b4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),PTR_s_next__112614028,param_2);
  return;
}



/* Entry: 10600c3c4; end: 10600c42b; -[SCScanResultsWorkflow .cxx_destruct] */

void FUN_10600c3c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10600c42c; end: 10600c507; -[SCScanResultsScanCardsWorkflow initWithScanCardsRouter:performer:] */

undefined1 *
FUN_10600c42c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef058;
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
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10600c508; end: 10600c52f; -[SCScanResultsScanCardsWorkflow actionObservable] */

void FUN_10600c508(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10600c530; end: 10600c583; -[SCScanResultsScanCardsWorkflow beginWithViewModelStreamObservable:] */

void FUN_10600c530(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_3);
    func_0x00010bf86d80(uVar1);
    func_0x00010c10e020(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10600c584; end: 10600c5cf; -[SCScanResultsScanCardsWorkflow endWithCompletion:] */

void FUN_10600c584(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf86d80(uVar1);
  func_0x00010bf84420(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10600c5d0; end: 10600c613; -[SCScanResultsScanCardsWorkflow scanCardsDidDeflate] */

void FUN_10600c5d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126c70c8;
  func_0x00010bf74600(PTR_PTR_1126c70c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10600c614; end: 10600c657; -[SCScanResultsScanCardsWorkflow scanCardsDidInflate] */

void FUN_10600c614(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126c70c8;
  func_0x00010bf774e0(PTR_PTR_1126c70c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10600c658; end: 10600c69b; -[SCScanResultsScanCardsWorkflow scanCardsWantsDismiss:] */

void FUN_10600c658(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126c70c8;
  func_0x00010c2a1a20(PTR_PTR_1126c70c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10600c69c; end: 10600c6df; -[SCScanResultsScanCardsWorkflow scanCardsDidDisplayResultViewWithViewModel:] */

void FUN_10600c69c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126c70c8;
  func_0x00010bf75540(PTR_PTR_1126c70c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10600c6e0; end: 10600c723; -[SCScanResultsScanCardsWorkflow scanCardsDidActionOnResultViewWithId:] */

void FUN_10600c6e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126c70c8;
  func_0x00010bf72160(PTR_PTR_1126c70c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10600c724; end: 10600c767; -[SCScanResultsScanCardsWorkflow scanCardsDidSelectPillWithId:] */

void FUN_10600c724(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126c70c8;
  func_0x00010bf7ad40(PTR_PTR_1126c70c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10600c768; end: 10600c7af; -[SCScanResultsScanCardsWorkflow .cxx_destruct] */

void FUN_10600c768(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10600c7b0; end: 10600c8a7; -[SCScanResultsActionRouterWorkflow initWithPerformer:scanActionRouter:scanResultsDelegate:] */

undefined1 *
FUN_10600c7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ef060;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10600c8a8; end: 10600c8ef; -[SCScanResultsActionRouterWorkflow dealloc] */

void FUN_10600c8a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf95bc0(param_1,param_2,0);
  puStack_28 = PTR_PTR_1126ef060;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}


