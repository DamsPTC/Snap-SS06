/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b042820; end: 10b04282b;  */

bool FUN_10b042820(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b04282c; end: 10b0428a7;  */

undefined * FUN_10b04282c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f38e8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f51bd8,
                        &UNK_10e551eec,&UNK_10e551f50,0xc,FUN_10b0428a8,0);
    do {
      if (puRam00000001137f38e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f38e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f38e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f38e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f38e8;
}



/* Entry: 10b0428a8; end: 10b0428b3;  */

bool FUN_10b0428a8(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 10b0428b4; end: 10b04292f;  */

undefined * FUN_10b0428b4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f38f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f51bf8,
                        &UNK_10e551f80,&UNK_10e551fa4,4,FUN_10b042930,0);
    do {
      if (puRam00000001137f38f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f38f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f38f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f38f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f38f0;
}



/* Entry: 10b042930; end: 10b04293b;  */

bool FUN_10b042930(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b04293c; end: 10b0429b7;  */

undefined * FUN_10b04293c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f38f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f51c18,
                        &UNK_10e551fb4,&UNK_10e551fd8,3,FUN_10b0429b8,0);
    do {
      if (puRam00000001137f38f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f38f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f38f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f38f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f38f8;
}



/* Entry: 10b0429b8; end: 10b0429c3;  */

bool FUN_10b0429b8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b0429c4; end: 10b042a3f; +[LensMetaInfo descriptor] */

undefined * FUN_10b0429c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3900 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5ccd0,
                        &PTR____CFConstantStringClassReference_110f51c38,&PTR_DAT_113364348,
                        &PTR_DAT_113364800,0x2c,0x118,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f3900 = puVar1;
  }
  return puRam00000001137f3900;
}



/* Entry: 10b042a40; end: 10b042abb; +[LensMetaInfo_Context descriptor] */

undefined * FUN_10b042a40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3908 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5cd20,
                        &PTR____CFConstantStringClassReference_110dcb198,&PTR_DAT_113364348,
                        &PTR_DAT_1133643a0,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f3908 = puVar1;
  }
  return puRam00000001137f3908;
}



/* Entry: 10b042abc; end: 10b042b37; +[LensMetaInfo_StudioVersion descriptor] */

undefined * FUN_10b042abc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3910 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5cd70,
                        &PTR____CFConstantStringClassReference_110f51c58,&PTR_DAT_113364348,
                        &PTR_DAT_113364520,5,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f3910 = puVar1;
  }
  return puRam00000001137f3910;
}



/* Entry: 10b042b38; end: 10b042bb3; +[LensMetaInfo_MlAsset descriptor] */

undefined * FUN_10b042b38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3918 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5cdc0,
                        &PTR____CFConstantStringClassReference_110f51c78,&PTR_DAT_113364348,
                        &PTR_DAT_113364700,8,0x48,0x1c);
    func_0x00010c228780();
    puRam00000001137f3918 = puVar1;
  }
  return puRam00000001137f3918;
}



/* Entry: 10b042bb4; end: 10b042c2f; +[LensMetaInfo_SnapTrackInfo descriptor] */

undefined * FUN_10b042bb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3920 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5ce10,
                        &PTR____CFConstantStringClassReference_110f51c98,&PTR_DAT_113364348,
                        &PTR_s_trackId_1133643e0,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f3920 = puVar1;
  }
  return puRam00000001137f3920;
}



/* Entry: 10b042c30; end: 10b042cbb; +[LensMetaInfo_FromTemplate descriptor] */

undefined * FUN_10b042c30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3928 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5ce60,
                        &PTR____CFConstantStringClassReference_110f51cb8,&PTR_DAT_113364348,
                        &PTR_DAT_113364420,2,0x18,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c5ccd0);
    puRam00000001137f3928 = puVar1;
  }
  return puRam00000001137f3928;
}



/* Entry: 10b042cbc; end: 10b042d37; +[LensMetaInfo_CustomComponents descriptor] */

undefined * FUN_10b042cbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3930 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5ceb0,
                        &PTR____CFConstantStringClassReference_110f51cd8,&PTR_DAT_113364348,
                        &PTR_DAT_1133645c0,5,0x30,0x1c);
    func_0x00010c228780();
    puRam00000001137f3930 = puVar1;
  }
  return puRam00000001137f3930;
}



/* Entry: 10b042d38; end: 10b042db3; +[LensMetaInfo_AssetPackages descriptor] */

undefined * FUN_10b042d38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3938 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5cf00,
                        &PTR____CFConstantStringClassReference_110f51cf8,&PTR_DAT_113364348,
                        &PTR_DAT_113364660,5,0x30,0x1c);
    func_0x00010c228780();
    puRam00000001137f3938 = puVar1;
  }
  return puRam00000001137f3938;
}



/* Entry: 10b042db4; end: 10b042e2f; +[LensMetaInfo_VoicemlLensInfo descriptor] */

undefined * FUN_10b042db4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3940 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5cf50,
                        &PTR____CFConstantStringClassReference_110f51d18,&PTR_DAT_113364348,
                        &PTR_DAT_113364360,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f3940 = puVar1;
  }
  return puRam00000001137f3940;
}



/* Entry: 10b042e30; end: 10b042eab; +[LensMetaInfo_LensStudioMobileWebComponent descriptor] */

undefined * FUN_10b042e30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3948 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5cfa0,
                        &PTR____CFConstantStringClassReference_110f51d38,&PTR_DAT_113364348,
                        &PTR_DAT_113364460,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f3948 = puVar1;
  }
  return puRam00000001137f3948;
}



/* Entry: 10b042eac; end: 10b042f27; +[LensMetaInfo_LensStudioMobileWebDataSourceReferences descriptor] */

undefined * FUN_10b042eac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3950 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5cff0,
                        &PTR____CFConstantStringClassReference_110f51d58,&PTR_DAT_113364348,
                        &PTR_DAT_113364380,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f3950 = puVar1;
  }
  return puRam00000001137f3950;
}



/* Entry: 10b042f28; end: 10b04301f; +[LensMetaInfo_EasyLensBlock descriptor] */

undefined * FUN_10b042f28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3958 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d040,
                        &PTR____CFConstantStringClassReference_110f51d78,&PTR_DAT_113364348,
                        &PTR_DAT_1133644a0,4,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f3958 = puVar1;
  }
  return puRam00000001137f3958;
}



/* Entry: 10b043020; end: 10b04302b;  */

bool FUN_10b043020(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b04302c; end: 10b043093; +[ConnectedLensInfo descriptor] */

void FUN_10b04302c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3968 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d0e0,
                        &PTR____CFConstantStringClassReference_110f51db8,&PTR_DAT_113364d80,
                        &PTR_s_appId_113364d98,2,0x18,0x1c);
    puRam00000001137f3968 = puVar1;
  }
  return;
}



/* Entry: 10b043094; end: 10b043177; +[RemoteApiInfo descriptor] */

void FUN_10b043094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3970 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d180,
                        &PTR____CFConstantStringClassReference_110f51dd8,&PTR_DAT_113364dd8,
                        &PTR_DAT_113364df0,1,0x10,0x1c);
    puRam00000001137f3970 = puVar1;
  }
  return;
}



/* Entry: 10b043178; end: 10b043183;  */

bool FUN_10b043178(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b043184; end: 10b0431eb; +[DigitalGood descriptor] */

void FUN_10b043184(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3980 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d220,
                        &PTR____CFConstantStringClassReference_110f51e18,&PTR_DAT_113364e10,
                        &PTR_s_sku_113364e48,5,0x28,0x1c);
    puRam00000001137f3980 = puVar1;
  }
  return;
}



/* Entry: 10b0431ec; end: 10b043253; +[DigitalGoods descriptor] */

void FUN_10b0431ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3988 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d270,
                        &PTR____CFConstantStringClassReference_110f51e38,&PTR_DAT_113364e10,
                        &PTR_DAT_113364e28,1,0x10,0x1c);
    puRam00000001137f3988 = puVar1;
  }
  return;
}



/* Entry: 10b043254; end: 10b0432bb; +[ArShoppingMetadata descriptor] */

void FUN_10b043254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3990 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d310,
                        &PTR____CFConstantStringClassReference_110f51e58,&PTR_DAT_113364ee8,
                        &PTR_DAT_113364f00,2,0x10,0x1c);
    puRam00000001137f3990 = puVar1;
  }
  return;
}



/* Entry: 10b0432bc; end: 10b043323; +[Domain descriptor] */

void FUN_10b0432bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3998 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d388,
                        &PTR____CFConstantStringClassReference_110f51e78,&PTR_DAT_113364ee8,
                        &PTR_DAT_113364f80,4,0x28,0x1c);
    puRam00000001137f3998 = puVar1;
  }
  return;
}



/* Entry: 10b043324; end: 10b0433a7; +[Domain_DomainState descriptor] */

undefined * FUN_10b043324(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f39a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d3b0,
                        &PTR____CFConstantStringClassReference_110f51e98,&PTR_DAT_113364ee8,
                        &PTR_DAT_113364f40,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f39a0 = puVar1;
  }
  return puRam00000001137f39a0;
}



/* Entry: 10b0433a8; end: 10b043423;  */

undefined * FUN_10b0433a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f39a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f51eb8,
                        &UNK_10e552084,&UNK_10e5520e8,4,FUN_10b043424,0);
    do {
      if (puRam00000001137f39a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f39a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f39a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f39a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f39a8;
}



/* Entry: 10b043424; end: 10b04342f;  */

bool FUN_10b043424(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b043430; end: 10b0434ab;  */

undefined * FUN_10b043430(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f39b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f51ed8,
                        &UNK_10e5520f8,&UNK_10e552134,3,FUN_10b0434ac,0);
    do {
      if (puRam00000001137f39b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f39b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f39b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f39b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f39b0;
}



/* Entry: 10b0434ac; end: 10b0434b7;  */

bool FUN_10b0434ac(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b0434b8; end: 10b043533;  */

undefined * FUN_10b0434b8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f39b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f51ef8,
                        &UNK_10e552140,&UNK_10e552180,4,FUN_10b043534,0);
    do {
      if (puRam00000001137f39b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f39b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f39b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f39b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f39b8;
}



/* Entry: 10b043534; end: 10b04353f;  */

bool FUN_10b043534(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b043540; end: 10b0435a7; +[LensCustomizationInfo descriptor] */

void FUN_10b043540(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f39c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d450,
                        &PTR____CFConstantStringClassReference_110f51f18,&PTR_DAT_113365000,
                        &PTR_DAT_113365098,5,0x28,0x1c);
    puRam00000001137f39c0 = puVar1;
  }
  return;
}



/* Entry: 10b0435a8; end: 10b043623; +[LensCustomizationInfo_GenAIAsset descriptor] */

undefined * FUN_10b0435a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f39c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d4a0,
                        &PTR____CFConstantStringClassReference_110f51f38,&PTR_DAT_113365000,
                        &PTR_DAT_113365018,4,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f39c8 = puVar1;
  }
  return puRam00000001137f39c8;
}



/* Entry: 10b043624; end: 10b04368b; +[SCLensCentralCommonPbLensSpace descriptor] */

void FUN_10b043624(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f39d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d540,
                        &PTR____CFConstantStringClassReference_110f51f58,&PTR_DAT_113365138,
                        &PTR_s_id_p_1133651d0,4,0x28,0x1c);
    puRam00000001137f39d0 = puVar1;
  }
  return;
}



/* Entry: 10b04368c; end: 10b0436f3; +[SCLensCentralCommonPbOrganization descriptor] */

void FUN_10b04368c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f39d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d590,
                        &PTR____CFConstantStringClassReference_110ed2318,&PTR_DAT_113365138,
                        &PTR_s_id_p_113365250,6,0x30,0x1c);
    puRam00000001137f39d8 = puVar1;
  }
  return;
}



/* Entry: 10b0436f4; end: 10b04375b; +[SCLensCentralCommonPbAdAccount descriptor] */

void FUN_10b0436f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f39e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d5e0,
                        &PTR____CFConstantStringClassReference_110f51f78,&PTR_DAT_113365138,
                        &PTR_s_id_p_113365150,2,0x18,0x1c);
    puRam00000001137f39e0 = puVar1;
  }
  return;
}



/* Entry: 10b04375c; end: 10b0437c3; +[SCLensCentralCommonPbBusinessProfile descriptor] */

void FUN_10b04375c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f39e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d630,
                        &PTR____CFConstantStringClassReference_110f4d418,&PTR_DAT_113365138,
                        &PTR_s_id_p_113365190,2,0x18,0x1c);
    puRam00000001137f39e8 = puVar1;
  }
  return;
}



/* Entry: 10b0437c4; end: 10b0438a7; +[SCLensCentralCommonPbLensStudioAnalytics descriptor] */

void FUN_10b0437c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f39f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d6d0,
                        &PTR____CFConstantStringClassReference_110f51f98,&PTR_DAT_113365310,
                        &PTR_DAT_113365328,0xb,0x60,0x1c);
    puRam00000001137f39f0 = puVar1;
  }
  return;
}



/* Entry: 10b0438a8; end: 10b0438b3;  */

bool FUN_10b0438a8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b0438b4; end: 10b04392f;  */

undefined * FUN_10b0438b4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3a00 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f51fd8,
                        &UNK_10e5521d0,&UNK_10e552208,3,FUN_10b043930,0);
    do {
      if (puRam00000001137f3a00 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3a00;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3a00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3a00 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3a00;
}



/* Entry: 10b043930; end: 10b04393b;  */

bool FUN_10b043930(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b04393c; end: 10b043a1f; +[FilterBy descriptor] */

void FUN_10b04393c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3a08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d770,
                        &PTR____CFConstantStringClassReference_110f51ff8,&PTR_DAT_113365488,
                        &PTR_DAT_1133654a0,5,0x30,0x1c);
    puRam00000001137f3a08 = puVar1;
  }
  return;
}



/* Entry: 10b043a20; end: 10b043a2b;  */

bool FUN_10b043a20(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b043a2c; end: 10b043ab7; +[SCResourcePbLensResource descriptor] */

undefined * FUN_10b043a2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3a18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d810,
                        &PTR____CFConstantStringClassReference_110f52038,&PTR_DAT_113365558,
                        &PTR_DAT_113365670,5,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001137f3a18 = puVar1;
  }
  return puRam00000001137f3a18;
}



/* Entry: 10b043ab8; end: 10b043b43; +[SCResourcePbLensIconResource descriptor] */

undefined * FUN_10b043ab8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3a20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d860,
                        &PTR____CFConstantStringClassReference_110f52058,&PTR_DAT_113365558,
                        &PTR_DAT_113365570,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137f3a20 = puVar1;
  }
  return puRam00000001137f3a20;
}



/* Entry: 10b043b44; end: 10b043bcf; +[SCResourcePbPreviewMediaResource descriptor] */

undefined * FUN_10b043b44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3a28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d8b0,
                        &PTR____CFConstantStringClassReference_110f52078,&PTR_DAT_113365558,
                        &PTR_DAT_1133655b0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137f3a28 = puVar1;
  }
  return puRam00000001137f3a28;
}



/* Entry: 10b043bd0; end: 10b043cb3; +[SCResourcePbLensResourceCallback descriptor] */

void FUN_10b043bd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3a30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d900,
                        &PTR____CFConstantStringClassReference_110f52098,&PTR_DAT_113365558,
                        &PTR_DAT_113365610,3,0x20,0x1c);
    puRam00000001137f3a30 = puVar1;
  }
  return;
}



/* Entry: 10b043cb4; end: 10b043cbf;  */

bool FUN_10b043cb4(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b043cc0; end: 10b043d3b;  */

undefined * FUN_10b043cc0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3a40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f520d8,
                        &UNK_10e5522e4,&UNK_10e552404,0xe,FUN_10b043d3c,0);
    do {
      if (puRam00000001137f3a40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3a40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3a40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3a40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3a40;
}



/* Entry: 10b043d3c; end: 10b043d47;  */

bool FUN_10b043d3c(uint param_1)

{
  return param_1 < 0xe;
}



/* Entry: 10b043d48; end: 10b043dc3;  */

undefined * FUN_10b043d48(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3a48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f520f8,
                        &UNK_10e55243c,&UNK_10e5524b8,5,FUN_10b043dc4,0);
    do {
      if (puRam00000001137f3a48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3a48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3a48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3a48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3a48;
}



/* Entry: 10b043dc4; end: 10b043dcf;  */

bool FUN_10b043dc4(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b043dd0; end: 10b043e4b;  */

undefined * FUN_10b043dd0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3a50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f52118,
                        &UNK_10e5524cc,&UNK_10e552544,6,FUN_10b043e4c,0);
    do {
      if (puRam00000001137f3a50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3a50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3a50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3a50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3a50;
}



/* Entry: 10b043e4c; end: 10b043e57;  */

bool FUN_10b043e4c(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b043e58; end: 10b043ed3;  */

undefined * FUN_10b043e58(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3a58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f52138,
                        &UNK_10e55255c,&UNK_10e5525a4,3,FUN_10b043ed4,0);
    do {
      if (puRam00000001137f3a58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3a58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3a58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3a58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3a58;
}



/* Entry: 10b043ed4; end: 10b043edf;  */

bool FUN_10b043ed4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b043ee0; end: 10b043f5b;  */

undefined * FUN_10b043ee0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3a60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f52158,
                        &UNK_10e5525b0,&UNK_10e5526bc,9,FUN_10b043f5c,0);
    do {
      if (puRam00000001137f3a60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3a60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3a60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3a60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3a60;
}



/* Entry: 10b043f5c; end: 10b043f67;  */

bool FUN_10b043f5c(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10b043f68; end: 10b043fe3;  */

undefined * FUN_10b043f68(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3a68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f52178,
                        &UNK_10e5526e0,&UNK_10e55273c,4,FUN_10b043fe4,0);
    do {
      if (puRam00000001137f3a68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3a68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3a68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3a68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3a68;
}



/* Entry: 10b043fe4; end: 10b043ffb;  */

uint FUN_10b043fe4(uint param_1)

{
  return (uint)(param_1 < 5) & 0x1dU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10b043ffc; end: 10b044077;  */

undefined * FUN_10b043ffc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3a70 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f52198,
                        &UNK_10e55274c,&UNK_10e5527ec,4,FUN_10b044078,0);
    do {
      if (puRam00000001137f3a70 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3a70;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3a70,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3a70 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3a70;
}



/* Entry: 10b044078; end: 10b044083;  */

bool FUN_10b044078(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b044084; end: 10b0440ff;  */

undefined * FUN_10b044084(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3a78 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f521b8,
                        &UNK_10e5527fc,&UNK_10e552890,4,FUN_10b044100,0);
    do {
      if (puRam00000001137f3a78 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3a78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3a78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3a78 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3a78;
}



/* Entry: 10b044100; end: 10b04410b;  */

bool FUN_10b044100(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b04410c; end: 10b044187;  */

undefined * FUN_10b04410c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3a80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f521d8,
                        &UNK_10e5528a0,&UNK_10e5528d0,3,FUN_10b044188,0);
    do {
      if (puRam00000001137f3a80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3a80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3a80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3a80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3a80;
}



/* Entry: 10b044188; end: 10b044193;  */

bool FUN_10b044188(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b044194; end: 10b04420f;  */

undefined * FUN_10b044194(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3a88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f521f8,
                        &UNK_10e5528dc,&UNK_10e552a4c,0x19,FUN_10b044210,0);
    do {
      if (puRam00000001137f3a88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3a88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3a88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3a88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3a88;
}



/* Entry: 10b044210; end: 10b04421b;  */

bool FUN_10b044210(uint param_1)

{
  return param_1 < 0x19;
}



/* Entry: 10b04421c; end: 10b044297; +[SCLensCentralCommonPbLens descriptor] */

undefined * FUN_10b04421c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3a90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d9a0,
                        &PTR____CFConstantStringClassReference_110dcb5d8,&PTR_DAT_113365720,
                        &PTR_s_id_p_113365d58,0x2b,0x128,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f3a90 = puVar1;
  }
  return puRam00000001137f3a90;
}



/* Entry: 10b044298; end: 10b044313; +[SCLensCentralCommonPbSnapcode descriptor] */

undefined * FUN_10b044298(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3a98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5d9f0,
                        &PTR____CFConstantStringClassReference_110e375b8,&PTR_DAT_113365720,
                        &PTR_s_imageURL_1133658f8,4,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f3a98 = puVar1;
  }
  return puRam00000001137f3a98;
}



/* Entry: 10b044314; end: 10b04437b; +[SCLensCentralCommonPbLensRejectionErrors descriptor] */

void FUN_10b044314(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3aa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5da40,
                        &PTR____CFConstantStringClassReference_110f52218,&PTR_DAT_113365720,
                        &PTR_DAT_113365978,4,0x20,0x1c);
    puRam00000001137f3aa0 = puVar1;
  }
  return;
}



/* Entry: 10b04437c; end: 10b0443f7; +[SCLensCentralCommonPbPreviewMedia descriptor] */

undefined * FUN_10b04437c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3aa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5da90,
                        &PTR____CFConstantStringClassReference_110f52238,&PTR_DAT_113365720,
                        &PTR_DAT_113365b78,5,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f3aa8 = puVar1;
  }
  return puRam00000001137f3aa8;
}



/* Entry: 10b0443f8; end: 10b044483; +[SCLensCentralCommonPbLensCta descriptor] */

undefined * FUN_10b0443f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3ab0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5dae0,
                        &PTR____CFConstantStringClassReference_110f52258,&PTR_DAT_113365720,
                        &PTR_DAT_113365c18,5,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001137f3ab0 = puVar1;
  }
  return puRam00000001137f3ab0;
}



/* Entry: 10b044484; end: 10b04450f; +[SCLensCentralCommonPbLensCta_Website descriptor] */

undefined * FUN_10b044484(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3ab8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5db30,
                        &PTR____CFConstantStringClassReference_110f52278,&PTR_DAT_113365720,
                        &PTR_s_URL_113365738,1,0x10,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c5dae0);
    puRam00000001137f3ab8 = puVar1;
  }
  return puRam00000001137f3ab8;
}



/* Entry: 10b044510; end: 10b04459b; +[SCLensCentralCommonPbLensCta_Deeplink descriptor] */

undefined * FUN_10b044510(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3ac0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5db80,
                        &PTR____CFConstantStringClassReference_110f3c9d8,&PTR_DAT_113365720,
                        &PTR_s_appName_1133659f8,4,0x28,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c5dae0);
    puRam00000001137f3ac0 = puVar1;
  }
  return puRam00000001137f3ac0;
}



/* Entry: 10b04459c; end: 10b044627; +[SCLensCentralCommonPbLensAccountID descriptor] */

undefined * FUN_10b04459c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3ac8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5dbd0,
                        &PTR____CFConstantStringClassReference_110f52298,&PTR_DAT_113365720,
                        &PTR_s_userId_113365cb8,5,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001137f3ac8 = puVar1;
  }
  return puRam00000001137f3ac8;
}



/* Entry: 10b044628; end: 10b0446a3; +[SCLensCentralCommonPbLensAccountID_OrganizationAndAdAccountID descriptor] */

undefined * FUN_10b044628(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3ad0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5dc20,
                        &PTR____CFConstantStringClassReference_110f522b8,&PTR_DAT_113365720,
                        &PTR_DAT_113365758,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f3ad0 = puVar1;
  }
  return puRam00000001137f3ad0;
}



/* Entry: 10b0446a4; end: 10b04470b; +[SCLensCentralCommonPbDistribution descriptor] */

void FUN_10b0446a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3ad8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5dc70,
                        &PTR____CFConstantStringClassReference_110f522d8,&PTR_DAT_113365720,
                        &PTR_DAT_113365898,3,0x18,0x1c);
    puRam00000001137f3ad8 = puVar1;
  }
  return;
}



/* Entry: 10b04470c; end: 10b044773; +[SCLensCentralCommonPbRole descriptor] */

void FUN_10b04470c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3ae0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5dcc0,
                        &PTR____CFConstantStringClassReference_110f4eeb8,&PTR_DAT_113365720,
                        &PTR_s_id_p_113365a78,4,0x20,0x1c);
    puRam00000001137f3ae0 = puVar1;
  }
  return;
}



/* Entry: 10b044774; end: 10b0447db; +[SCLensCentralCommonPbSubmissionError descriptor] */

void FUN_10b044774(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3ae8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5dd10,
                        &PTR____CFConstantStringClassReference_110f522f8,&PTR_DAT_113365720,
                        &PTR_DAT_113365798,2,0x18,0x1c);
    puRam00000001137f3ae8 = puVar1;
  }
  return;
}



/* Entry: 10b0447dc; end: 10b044843; +[SCLensCentralCommonPbGcsLink descriptor] */

void FUN_10b0447dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3af0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5dd60,
                        &PTR____CFConstantStringClassReference_110f52318,&PTR_DAT_113365720,
                        &PTR_s_bucket_1133657d8,2,0x18,0x1c);
    puRam00000001137f3af0 = puVar1;
  }
  return;
}



/* Entry: 10b044844; end: 10b0448ab; +[SCLensCentralCommonPbLensDiscoverability descriptor] */

void FUN_10b044844(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3af8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5ddb0,
                        &PTR____CFConstantStringClassReference_110f52338,&PTR_DAT_113365720,
                        &PTR_DAT_113365af8,4,0x28,0x1c);
    puRam00000001137f3af8 = puVar1;
  }
  return;
}



/* Entry: 10b0448ac; end: 10b044913; +[SCLensCentralCommonPbDistributionRestriction descriptor] */

void FUN_10b0448ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3b00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5de00,
                        &PTR____CFConstantStringClassReference_110f52358,&PTR_DAT_113365720,
                        &PTR_DAT_113365818,2,0x10,0x1c);
    puRam00000001137f3b00 = puVar1;
  }
  return;
}



/* Entry: 10b044914; end: 10b0449f7; +[SCLensCentralCommonPbReleaseNote descriptor] */

void FUN_10b044914(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3b08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5de50,
                        &PTR____CFConstantStringClassReference_110f384d8,&PTR_DAT_113365720,
                        &PTR_DAT_113365858,2,0x18,0x1c);
    puRam00000001137f3b08 = puVar1;
  }
  return;
}



/* Entry: 10b0449f8; end: 10b044a03;  */

bool FUN_10b0449f8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b044a04; end: 10b044a7f;  */

undefined * FUN_10b044a04(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3b18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f52398,
                        &UNK_10e552b44,&UNK_10e552b90,3,FUN_10b044a80,0);
    do {
      if (puRam00000001137f3b18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3b18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3b18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3b18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3b18;
}



/* Entry: 10b044a80; end: 10b044a8b;  */

bool FUN_10b044a80(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b044a8c; end: 10b044b1b;  */

undefined * FUN_10b044a8c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3b20 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f523b8,
                        &UNK_10e552b9c,&UNK_10e552f54,0x2b,FUN_10b044b1c,0,&UNK_10e553000);
    do {
      if (puRam00000001137f3b20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3b20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3b20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3b20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3b20;
}



/* Entry: 10b044b1c; end: 10b044b27;  */

bool FUN_10b044b1c(uint param_1)

{
  return param_1 < 0x2b;
}



/* Entry: 10b044b28; end: 10b044ba3;  */

undefined * FUN_10b044b28(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3b28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f523d8,
                        &UNK_10e553009,&UNK_10e5530ac,6,FUN_10b044ba4,0);
    do {
      if (puRam00000001137f3b28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3b28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3b28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3b28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3b28;
}



/* Entry: 10b044ba4; end: 10b044baf;  */

bool FUN_10b044ba4(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b044bb0; end: 10b044c17; +[SCLensCentralInLensPurchasePbPriceTier descriptor] */

void FUN_10b044bb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3b30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5def0,
                        &PTR____CFConstantStringClassReference_110f523f8,&PTR_DAT_1133662b8,
                        &PTR_DAT_1133662d0,2,0xc,0x1c);
    puRam00000001137f3b30 = puVar1;
  }
  return;
}



/* Entry: 10b044c18; end: 10b044c7f; +[SCLensCentralInLensPurchasePbDigitalGood descriptor] */

void FUN_10b044c18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3b38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5df40,
                        &PTR____CFConstantStringClassReference_110f51e18,&PTR_DAT_1133662b8,
                        &PTR_s_sku_1133663b0,8,0x38,0x1c);
    puRam00000001137f3b38 = puVar1;
  }
  return;
}



/* Entry: 10b044c80; end: 10b044ce7; +[SCLensCentralInLensPurchasePbDigitalGoodLocalization descriptor] */

void FUN_10b044c80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3b40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5df90,
                        &PTR____CFConstantStringClassReference_110f52418,&PTR_DAT_1133662b8,
                        &PTR_s_locale_113366350,3,0x18,0x1c);
    puRam00000001137f3b40 = puVar1;
  }
  return;
}



/* Entry: 10b044ce8; end: 10b044d4f; +[SCLensCentralInLensPurchasePbIldgEligibilityBreakdown descriptor] */

void FUN_10b044ce8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3b48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5dfe0,
                        &PTR____CFConstantStringClassReference_110f52438,&PTR_DAT_1133662b8,
                        &PTR_DAT_113366310,2,8,0x1c);
    puRam00000001137f3b48 = puVar1;
  }
  return;
}



/* Entry: 10b044d50; end: 10b044db7; +[LensCentralStats descriptor] */

void FUN_10b044d50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3b50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5e080,
                        &PTR____CFConstantStringClassReference_110f52458,&PTR_DAT_1133664b0,
                        &PTR_s_snapchat_1133664c8,1,0x10,0x1c);
    puRam00000001137f3b50 = puVar1;
  }
  return;
}



/* Entry: 10b044db8; end: 10b044e9b; +[SnapchatStats descriptor] */

void FUN_10b044db8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3b58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c5e0d0,
                        &PTR____CFConstantStringClassReference_110f52478,&PTR_DAT_1133664b0,
                        &PTR_DAT_1133664e8,4,0x28,0x1c);
    puRam00000001137f3b58 = puVar1;
  }
  return;
}


