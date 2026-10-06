/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024c0790; end: 1024c0797;  */

undefined8 FUN_1024c0790(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1024ceb38();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1024c0798; end: 1024c0b4f;  */

void FUN_1024c0798(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074dd20;
  ppuVar4 = &PTR_DAT_113067000;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1105140c0;
  func_0x000107c613fc(&UNK_1105140c0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar3 = 0x112e9f7a0;
  func_0x0001000285a8(0x112e9f7a0,&UNK_10dab0768);
  func_0x0001000a6ee8(&UNK_110514e98,"AdsSpotlightPrefetchServiceKey",0x1e,2,FUN_1024c0b50,puVar2,
                      uVar3,&UNK_110514e98,&PTR_DAT_112ea0168);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_110513eb0,
                      "LensPlayTimeTrackingInSpotlightEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4c,2,FUN_1024c0b94,param_6,uVar3,&UNK_110513eb0,&PTR_DAT_112e9ef70);
  func_0x000107c61574(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_110513f50,
                      "SCLegacySpotlightServicesEntryPointWrapperScopeInitializationPluginKey",0x46,
                      2,0x1024c0bc0,param_7,uVar3,&UNK_110513f50,&PTR_DAT_112e9f060);
  func_0x000107c61574(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_110513ff0,"SCSpotlightEntryPointWrapperScopeInitializationPluginKey",0x38
                      ,2,0x1024c0bec,param_8,uVar3,&UNK_110513ff0,&PTR_DAT_112e9f4b8);
  func_0x000107c61574(param_8);
  puVar2 = &UNK_1105140e8;
  func_0x000107c613fc(&UNK_1105140e8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_9;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_9);
  func_0x0001000a6ee8(&UNK_110513c58,"SCSpotlightScopedServicesScopeInitializationPluginKey",0x35,2,
                      FUN_1024c0cc0,puVar2,uVar3,&UNK_110513c58,&PTR_DAT_112e9eec8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_10);
  func_0x0001000a6ee8(&UNK_110514070,
                      "SpotlightLensesFeedDataFetchingEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4c,2,FUN_1024c0d4c,param_10,uVar3,&UNK_110514070,&PTR_DAT_112e9f6c8);
  func_0x000107c61574(param_10);
  puVar2 = &UNK_110514110;
  func_0x000107c613fc(&UNK_110514110,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_11;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_11);
  func_0x0001000a6ee8(&UNK_110514cd8,"SpotlightScopeGraphBridgeScopeInitializationPluginKey",0x35,2,
                      FUN_1024c0d78,puVar2,uVar3,&UNK_110514cd8,&PTR_DAT_112e9fe28);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e9f7a8;
  func_0x0001000285a8(0x112e9f7a8,&UNK_10dab0770);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  func_0x0001000a7f38("SCSpotlightScopeInitializationPluginRegistryServiceProvider",0x3b,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1024c0b50; end: 1024c0b93;  */

void FUN_1024c0b50(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1024caa58(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100082720("AdsSpotlightPrefetchServicePluginProvider",0x29,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024c0b94; end: 1024c0c17;  */

void FUN_1024c0b94(void)

{
  FUN_1024c0cc8();
  return;
}



/* Entry: 1024c0c18; end: 1024c0cbf;  */

void FUN_1024c0c18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110514138;
  func_0x000107c613fc(&UNK_110514138,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1024c0dec;
  func_0x0001000823a8(FUN_1024c0dec,puVar1);
  func_0x000100082720("SCSpotlightScopedServicesScopeInitializationPluginProvider",0x3a,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1024c0cc0; end: 1024c0cc7;  */

void FUN_1024c0cc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110514138;
  func_0x000107c613fc(&UNK_110514138,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1024c0dec;
  func_0x0001000823a8(FUN_1024c0dec,puVar3);
  func_0x000100082720("SCSpotlightScopedServicesScopeInitializationPluginProvider",0x3a,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1024c0cc8; end: 1024c0d4b;  */

void FUN_1024c0cc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 1024c0d4c; end: 1024c0d77;  */

void FUN_1024c0d4c(void)

{
  FUN_1024c0cc8();
  return;
}



/* Entry: 1024c0d78; end: 1024c0db7;  */

void FUN_1024c0d78(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1024c69ac(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpotlightScopeGraphBridgeScopeInitializationPluginProvider",0x3a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024c0db8; end: 1024c0dbf;  */

void FUN_1024c0db8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x1024c0764);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1024c0dc0; end: 1024c0deb;  */

void FUN_1024c0dc0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024c0dec; end: 1024c0e0b;  */

void FUN_1024c0dec(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110513ce0;
  func_0x000107c613fc(&UNK_110513ce0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1024b2bb8;
  func_0x00010058fa64(FUN_1024b2bb8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024c0e0c; end: 1024c0e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c0e0c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1024c1200();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e9f7b8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1024c0e78; end: 1024c0ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c0e78(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9f7b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024c0ee4; end: 1024c0f43; -[_TtC50DiscoverFeedManagementScopedFactoryServiceProvider38SCDiscoverFeedManagementScopedServices init] */

void FUN_1024c0ee4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiscoverFeedManagementScopedFactoryServiceProvider.SCDiscoverFeedManagementScopedServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024c0f10);
  (*pcVar1)();
}



/* Entry: 1024c0f44; end: 1024c0f53; -[_TtC50DiscoverFeedManagementScopedFactoryServiceProvider38SCDiscoverFeedManagementScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c0f44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9f7b8));
  return;
}



/* Entry: 1024c0f54; end: 1024c0fbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c0f54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110514318;
  func_0x000107c613fc(&UNK_110514318,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1024c1298,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1024c0fc0; end: 1024c105b;  */

void FUN_1024c0fc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110514228;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110514228;
  return;
}



/* Entry: 1024c105c; end: 1024c1093;  */

void FUN_1024c105c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1024c1094; end: 1024c109b;  */

undefined8 FUN_1024c1094(void)

{
  return 0x1b;
}



/* Entry: 1024c109c; end: 1024c11cf;  */

void FUN_1024c109c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110514340;
  func_0x000107c613fc(&UNK_110514340,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1024c1270;
  func_0x00010058fa64(FUN_1024c1270,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024c11d0; end: 1024c11ff;  */

undefined ** FUN_1024c11d0(void)

{
  return &PTR_DAT_112f30898;
}



/* Entry: 1024c1200; end: 1024c121f;  */

void FUN_1024c1200(void)

{
  func_0x000107c61168(&PTR_PTR_112846c18);
  return;
}



/* Entry: 1024c1220; end: 1024c126f;  */

undefined1  [16] FUN_1024c1220(void)

{
  return ZEXT816(0x110514278);
}



/* Entry: 1024c1270; end: 1024c1297;  */

void FUN_1024c1270(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1024c1298; end: 1024c129b;  */

void FUN_1024c1298(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1024c129c; end: 1024c1683;  */

void FUN_1024c129c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9f820,&UNK_10dab09f0);
  puVar1 = &UNK_110514380;
  func_0x000107c613fc(&UNK_110514380,0xb8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_8;
  *(undefined8 *)(puVar1 + 0x40) = param_9;
  *(undefined8 *)(puVar1 + 0x48) = param_11;
  *(undefined8 *)(puVar1 + 0x50) = param_7;
  *(undefined8 *)(puVar1 + 0x58) = param_13;
  *(undefined8 *)(puVar1 + 0x60) = param_14;
  *(undefined8 *)(puVar1 + 0x68) = param_15;
  *(undefined8 *)(puVar1 + 0x70) = param_19;
  *(undefined8 *)(puVar1 + 0x78) = param_18;
  *(undefined8 *)(puVar1 + 0x80) = param_20;
  *(undefined8 *)(puVar1 + 0x88) = param_21;
  *(undefined8 *)(puVar1 + 0x90) = param_10;
  *(undefined8 *)(puVar1 + 0x98) = param_12;
  *(undefined8 *)(puVar1 + 0xa0) = param_16;
  *(undefined8 *)(puVar1 + 0xa8) = param_17;
  *(undefined8 *)(puVar1 + 0xb0) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1024c1684,puVar1);
  return;
}



/* Entry: 1024c1684; end: 1024c16cf;  */

void FUN_1024c1684(void)

{
  long unaff_x20;
  
  func_0x0001024c1484(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0));
  return;
}



/* Entry: 1024c16d0; end: 1024c16df;  */

undefined1  [16] FUN_1024c16d0(void)

{
  return ZEXT816(0x1105143a8);
}



/* Entry: 1024c16e0; end: 1024c1b53;  */

void FUN_1024c16e0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 auStack_70 [2];
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e9f830,&UNK_10dab0a40);
  puVar1 = auStack_70;
  auStack_70[0] = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1024c4078();
  func_0x000100082720("DiscoverFeedManagementScopeGraphBridgeServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e9f838,&UNK_10dab0a50);
  puVar3 = &UNK_1105143f0;
  func_0x000107c613fc(&UNK_1105143f0,0xc0,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = param_8;
  *(undefined8 *)(puVar3 + 0x48) = param_9;
  *(undefined8 *)(puVar3 + 0x50) = param_10;
  *(undefined8 *)(puVar3 + 0x58) = param_11;
  *(undefined8 *)(puVar3 + 0x60) = param_12;
  *(undefined8 *)(puVar3 + 0x68) = param_13;
  *(undefined8 *)(puVar3 + 0x70) = param_14;
  *(undefined8 *)(puVar3 + 0x78) = param_15;
  *(undefined8 *)(puVar3 + 0x80) = param_16;
  *(undefined8 *)(puVar3 + 0x88) = param_17;
  *(undefined8 *)(puVar3 + 0x90) = param_18;
  *(undefined8 *)(puVar3 + 0x98) = param_19;
  *(undefined8 *)(puVar3 + 0xa0) = param_20;
  *(undefined8 *)(puVar3 + 0xa8) = param_21;
  *(undefined8 *)(puVar3 + 0xb0) = param_22;
  *(undefined8 *)(puVar3 + 0xb8) = param_23;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  uVar8 = 0x1024c1c70;
  func_0x0001000823a8(0x1024c1c70,puVar3);
  func_0x000100082720("SCDiscoverFeedManagementScopeEntryPointWrapperServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1024c105c;
  func_0x0001000823a8(FUN_1024c105c,0);
  func_0x000100082720("SCDiscoverFeedManagementScopedServicesCleanupRelayServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e9f840,&UNK_10dab0a48);
  puVar3 = &UNK_110514418;
  func_0x000107c613fc(&UNK_110514418,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_1024c1cbc;
  func_0x0001000823a8(FUN_1024c1cbc,puVar3);
  func_0x000100082720("SCDiscoverFeedManagementScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112e9f7c0,&UNK_10dab0790);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1024c1cc8;
  func_0x0001000823a8(0x1024c1cc8,pcVar5);
  func_0x000100082720("SCDiscoverFeedManagementScopeInitializationServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e9f7b0,&UNK_10dab0780);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1024c1cd0;
  func_0x0001000823a8(0x1024c1cd0,uVar6);
  func_0x000100082720("SCDiscoverFeedManagementScopedServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110514440;
  func_0x000107c613fc(&UNK_110514440,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1024c1cd8;
  func_0x0001000823a8(0x1024c1cd8,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCDiscoverFeedManagementScopeEntryPointProvider",0x2f,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1024c1b54; end: 1024c1cbb;  */

void FUN_1024c1b54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024c1cbc; end: 1024c1cdf;  */

void FUN_1024c1cbc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1024c3834(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCDiscoverFeedManagementScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024c1ce0; end: 1024c3593;  */

void FUN_1024c1ce0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  FUN_1024c3784();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  *(undefined8 *)(param_2 + 0x98) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_100;
  *(undefined8 *)(param_2 + 0xa8) = uStack_108;
  *(undefined8 *)(param_2 + 0xb0) = uStack_110;
  *(undefined8 *)(param_2 + 0xb8) = uStack_118;
  puVar1 = PTR_PTR_1126aa930;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  uVar16 = uStack_e8;
  func_0x000107c61174();
  uVar17 = uStack_f0;
  func_0x000107c61174(uStack_f0);
  uVar18 = uStack_f8;
  func_0x000107c61174();
  uVar19 = uStack_100;
  func_0x000107c61174(uStack_100);
  uVar20 = uStack_108;
  func_0x000107c61174(uStack_108);
  uVar21 = uStack_110;
  func_0x000107c61174();
  uVar22 = uStack_118;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar23 = auStack_70[0];
  func_0x000107c61174();
  uVar24 = 0x656d6567616e616d;
  func_0x000107c5fadc(0x656d6567616e616d,0xef65706f6353746e);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  uVar25 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01ab40);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0a4940);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(uVar25);
  uVar24 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(uVar25);
  uVar24 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f05bfd0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f052190);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(uVar25);
  uVar24 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(uVar25);
  uVar24 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar24);
  uVar25 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(uVar25);
  uVar24 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(uVar25);
  uVar24 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar24);
  uVar24 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar25 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar25);
  uVar25 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar17);
  func_0x000107c61174(uVar25);
  uVar24 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar24);
  func_0x000107c61174(uVar18);
  func_0x000107c61174(uVar25);
  uVar24 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar24);
  func_0x000107c61174(uVar19);
  func_0x000107c61174(uVar25);
  uVar24 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21bb0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef287a0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar24);
  uVar25 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000031;
  func_0x000107c5fadc(0xd000000000000031,0x800000010f052200);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar24);
  func_0x000107c3e740(uVar25);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  *param_1 = param_2;
  return;
}



/* Entry: 1024c3594; end: 1024c3677;  */

void FUN_1024c3594(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 1024c3678; end: 1024c367f;  */

undefined8 FUN_1024c3678(void)

{
  return 0x1b;
}



/* Entry: 1024c3680; end: 1024c3703;  */

void FUN_1024c3680(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1024c37c4,param_2,FUN_1024c37c8,param_2,FUN_1024c37f0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1024c3704; end: 1024c3753;  */

undefined8 FUN_1024c3704(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1024c3754; end: 1024c3783;  */

undefined ** FUN_1024c3754(void)

{
  return &PTR_DAT_112f30898;
}



/* Entry: 1024c3784; end: 1024c37a3;  */

void FUN_1024c3784(void)

{
  func_0x000107c61168(&PTR_PTR_112e9f8b0);
  return;
}



/* Entry: 1024c37a4; end: 1024c37c7;  */

undefined1  [16] FUN_1024c37a4(void)

{
  return ZEXT816(0x110514498);
}



/* Entry: 1024c37c8; end: 1024c37ef;  */

void FUN_1024c37c8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1024c37f0; end: 1024c37f7;  */

undefined8 FUN_1024c37f0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1024c37f8; end: 1024c3833;  */

void FUN_1024c37f8(undefined8 *param_1,undefined8 param_2)

{
  FUN_1024c3834();
  func_0x0001000a7f38("SCDiscoverFeedManagementScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1024c3834; end: 1024c3a1f;  */

void FUN_1024c3834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105f98d8;
  ppuVar4 = &PTR_DAT_112f30898;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1105144e8;
  func_0x000107c613fc(&UNK_1105144e8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e9f9b8;
  func_0x0001000285a8(0x112e9f9b8,&UNK_10dab0c40);
  func_0x0001000a6ee8(&UNK_1105146c8,
                      "DiscoverFeedManagementScopeGraphBridgeScopeInitializationPluginKey",0x42,2,
                      FUN_1024c3a20,puVar2,uVar3,&UNK_1105146c8,&PTR_DAT_112e9fa48);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110514498,
                      "SCDiscoverFeedManagementScopeEntryPointWrapperScopeInitializationPluginKey",
                      0x4a,2,FUN_1024c3ad4,param_3,uVar3,&UNK_110514498,&PTR_DAT_112e9f848);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110514510;
  func_0x000107c613fc(&UNK_110514510,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105142b8,
                      "SCDiscoverFeedManagementScopedServicesScopeInitializationPluginKey",0x42,2,
                      FUN_1024c3b84,puVar2,uVar3,&UNK_1105142b8,&PTR_DAT_112e9f7c8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e9f9c0;
  func_0x0001000285a8(0x112e9f9c0,&UNK_10dab0c48);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1024c3a20; end: 1024c3a5f;  */

void FUN_1024c3a20(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1024c415c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("DiscoverFeedManagementScopeGraphBridgeScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024c3a60; end: 1024c3ad3;  */

void FUN_1024c3a60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1024c3bc0;
  func_0x0001000823a8(0x1024c3bc0,param_3);
  func_0x000100082720("SCDiscoverFeedManagementScopeEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024c3ad4; end: 1024c3adb;  */

void FUN_1024c3ad4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1024c3bc0;
  func_0x0001000823a8();
  func_0x000100082720("SCDiscoverFeedManagementScopeEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024c3adc; end: 1024c3b83;  */

void FUN_1024c3adc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110514538;
  func_0x000107c613fc(&UNK_110514538,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1024c3bb8;
  func_0x0001000823a8(FUN_1024c3bb8,puVar1);
  func_0x000100082720("SCDiscoverFeedManagementScopedServicesScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1024c3b84; end: 1024c3b8b;  */

void FUN_1024c3b84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110514538;
  func_0x000107c613fc(&UNK_110514538,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1024c3bb8;
  func_0x0001000823a8(FUN_1024c3bb8,puVar3);
  func_0x000100082720("SCDiscoverFeedManagementScopedServicesScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1024c3b8c; end: 1024c3bb7;  */

void FUN_1024c3b8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024c3bb8; end: 1024c3bc7;  */

void FUN_1024c3bb8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110514340;
  func_0x000107c613fc(&UNK_110514340,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1024c1270;
  func_0x00010058fa64(FUN_1024c1270,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024c3bc8; end: 1024c3c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024c3bc8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1024c3f88();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e9f9c8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e9f9d0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024c3c50);
  (*pcVar1)();
}



/* Entry: 1024c3c50; end: 1024c3caf; -[_TtC38DiscoverFeedManagementScopeGraphBridge53DiscoverFeedManagementScopeGraphBridgeSaberEntryPoint init] */

void FUN_1024c3c50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiscoverFeedManagementScopeGraphBridge.DiscoverFeedManagementScopeGraphBridgeSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024c3c7c);
  (*pcVar1)();
}



/* Entry: 1024c3cb0; end: 1024c3ce7; -[_TtC38DiscoverFeedManagementScopeGraphBridge53DiscoverFeedManagementScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024c3ccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024c3cd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c3cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9f9c8));
  return;
}



/* Entry: 1024c3ce8; end: 1024c3d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c3ce8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e9f9d0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e9f9c8));
  return;
}



/* Entry: 1024c3d10; end: 1024c3d2f;  */

void FUN_1024c3d10(void)

{
  func_0x000107c61168(&PTR_PTR_112846cd8);
  return;
}



/* Entry: 1024c3d30; end: 1024c3db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024c3d30(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9fa00) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e9fa08);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024c3db8);
  (*pcVar2)();
}



/* Entry: 1024c3db8; end: 1024c3e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1024c3db8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9fa00);
  *(undefined **)(unaff_x20 + _DAT_112e9fa00) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9fa08);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e9fa08))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110514628;
  func_0x000107c613fc(&UNK_110514628,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1024c3ea4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1024c3ea0; end: 1024c3eab;  */

void FUN_1024c3ea0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1024c3eac; end: 1024c3f0b; -[_TtC38DiscoverFeedManagementScopeGraphBridge53SCDiscoverFeedManagementScopedServicesSaberEntryPoint init] */

void FUN_1024c3eac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiscoverFeedManagementScopeGraphBridge.SCDiscoverFeedManagementScopedServicesSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024c3ed8);
  (*pcVar1)();
}



/* Entry: 1024c3f0c; end: 1024c3f43; -[_TtC38DiscoverFeedManagementScopeGraphBridge53SCDiscoverFeedManagementScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c3f0c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9fa08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9fa00));
  return;
}



/* Entry: 1024c3f44; end: 1024c3f47;  */

void FUN_1024c3f44(void)

{
  return;
}



/* Entry: 1024c3f48; end: 1024c3f67;  */

void FUN_1024c3f48(void)

{
  FUN_1024c3db8();
  return;
}



/* Entry: 1024c3f68; end: 1024c3f87;  */

void FUN_1024c3f68(void)

{
  func_0x000107c61168(&PTR_PTR_112846da0);
  return;
}



/* Entry: 1024c3f88; end: 1024c4057;  */

undefined8 FUN_1024c3f88(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e9fa38,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1024c4058();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1024c4058; end: 1024c4077;  */

void FUN_1024c4058(void)

{
  func_0x000107c61168(&PTR_PTR_112846e68);
  return;
}



/* Entry: 1024c4078; end: 1024c40e3;  */

void FUN_1024c4078(void)

{
  func_0x0001000285a8(0x112e9fa40,&UNK_10dab0d18);
  func_0x0001000823a8(0x1024c40b8,0);
  return;
}



/* Entry: 1024c40e4; end: 1024c411f; -[_TtC38DiscoverFeedManagementScopeGraphBridge46DiscoverFeedManagementScopeGraphBridgeServices init] */

void FUN_1024c40e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024c4120; end: 1024c4153;  */

void FUN_1024c4120(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024c4154; end: 1024c415b;  */

undefined8 FUN_1024c4154(void)

{
  return 0x1b;
}



/* Entry: 1024c415c; end: 1024c42d3;  */

void FUN_1024c415c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110514670;
  func_0x000107c613fc(&UNK_110514670,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1024c42d4,puVar1);
  return;
}



/* Entry: 1024c42d4; end: 1024c42db;  */

void FUN_1024c42d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e9fa38,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e9fa38,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110514708;
  func_0x000107c613fc(&UNK_110514708,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1024c4388;
  func_0x00010058fa64(0x1024c4388,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024c42dc; end: 1024c4337;  */

void FUN_1024c42dc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e9fa38,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e9fa38,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1024c4338; end: 1024c438f;  */

undefined ** FUN_1024c4338(void)

{
  return &PTR_DAT_112f30898;
}



/* Entry: 1024c4390; end: 1024c43d7; -[SCDiscoverFeedManagementScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c4390(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9fa98;
  func_0x000107c61428(param_1 + _DAT_112e9fa98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024c43d8; end: 1024c442f; -[SCDiscoverFeedManagementScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c43d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9fa98;
  func_0x000107c61428(param_1 + _DAT_112e9fa98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024c4430; end: 1024c4477; -[SCDiscoverFeedManagementScopeGraphBridgeSaberEntryPoint discoverFeedManagementScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c4430(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9faa0;
  func_0x000107c61428(param_1 + _DAT_112e9faa0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024c4478; end: 1024c44db; -[SCDiscoverFeedManagementScopeGraphBridgeSaberEntryPoint setDiscoverFeedManagementScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c4478(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9faa0;
  func_0x000107c61428(param_1 + _DAT_112e9faa0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024c44dc; end: 1024c460f;  */

/* WARNING: Possible PIC construction at 0x0001024c4594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024c45b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024c45cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024c4598) */
/* WARNING: Removing unreachable block (ram,0x0001024c45b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c44dc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c41f80();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1024c3d10();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1024c3f88();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024c4610);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e9f9c8) = lVar5;
    *(long *)(lVar4 + _DAT_112e9f9d0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1024c4610; end: 1024c4637; -[SCDiscoverFeedManagementScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1024c4610(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024c44dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024c4638; end: 1024c467b; -[SCDiscoverFeedManagementScopeGraphBridgeSaberEntryPoint end] */

void FUN_1024c4638(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024c467c; end: 1024c4813;  */

void FUN_1024c467c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffcb) || (param_3 != -0x7ffffffef0f5b400)) {
      uVar2 = 0xd000000000000035;
      func_0x000107c605b8(0xd000000000000035,0x800000010f0a4c00,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "DiscoverFeedManagementScopeGraphBridge/SCDiscoverFeedManagementScopeGraphBridgeSaberEntryPoint.swift"
                            ,100,2,0x2e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024c4814);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c541ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1024c4814; end: 1024c48bf; -[SCDiscoverFeedManagementScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1024c4814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1024c467c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1024c48c0; end: 1024c492b; -[SCDiscoverFeedManagementScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c48c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9fa98,0);
  *(undefined8 *)(param_1 + _DAT_112e9faa0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9faa8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024c492c; end: 1024c495f;  */

void FUN_1024c492c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024c4960; end: 1024c49a7; -[SCDiscoverFeedManagementScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024c498c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024c4990) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c4960(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9fa98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9faa0));
  return;
}



/* Entry: 1024c49a8; end: 1024c49c7;  */

void FUN_1024c49a8(void)

{
  func_0x000107c61168(&PTR_PTR_112846f18);
  return;
}



/* Entry: 1024c49c8; end: 1024c4a0f; -[SCSCDiscoverFeedManagementScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c49c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9fad8;
  func_0x000107c61428(param_1 + _DAT_112e9fad8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024c4a10; end: 1024c4a67; -[SCSCDiscoverFeedManagementScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c4a10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9fad8;
  func_0x000107c61428(param_1 + _DAT_112e9fad8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024c4a68; end: 1024c4b3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c4a68(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_1024c3f68();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e9fa00) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024c4b40);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e9fa08);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e9fae0);
    *(long **)(unaff_x20 + _DAT_112e9fae0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1024c4b40; end: 1024c4b67; -[SCSCDiscoverFeedManagementScopedServicesSaberEntryPoint begin] */

void FUN_1024c4b40(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024c4a68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024c4b68; end: 1024c4cdf;  */

/* WARNING: Possible PIC construction at 0x0001024c4bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024c4c68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024c4bd4) */
/* WARNING: Removing unreachable block (ram,0x0001024c4c6c) */
/* WARNING: Removing unreachable block (ram,0x0001024c4c84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c4b68(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9fae0);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1024c4ce0; end: 1024c4ce7;  */

void FUN_1024c4ce0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1024c4ce8; end: 1024c4d1b; -[SCSCDiscoverFeedManagementScopedServicesSaberEntryPoint end] */

void FUN_1024c4ce8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1024c4b68();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024c4d1c; end: 1024c4e3b;  */

void FUN_1024c4d1c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "DiscoverFeedManagementScopeGraphBridge/SCSCDiscoverFeedManagementScopedServicesSaberEntryPoint.swift"
                        ,100,2,0x2a,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024c4e3c);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1024c4e3c; end: 1024c4ee7; -[SCSCDiscoverFeedManagementScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1024c4e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1024c4d1c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1024c4ee8; end: 1024c4f47; -[SCSCDiscoverFeedManagementScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c4ee8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9fad8,0);
  *(undefined8 *)(param_1 + _DAT_112e9fae0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024c4f48; end: 1024c4f7b;  */

void FUN_1024c4f48(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024c4f7c; end: 1024c4fb3; -[SCSCDiscoverFeedManagementScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c4f7c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9fad8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9fae0));
  return;
}



/* Entry: 1024c4fb4; end: 1024c4fd3;  */

void FUN_1024c4fb4(void)

{
  func_0x000107c61168(&PTR_PTR_112846fe0);
  return;
}


