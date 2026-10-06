/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1039877c8; end: 103987833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039877c8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033ca28();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fbb010) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103987834; end: 10398783b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103987834(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033ca28();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbb010) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10398783c; end: 103987887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398783c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbb010) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103987888; end: 1039879b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_103987888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x000100337e5c(0);
  func_0x000107c610f8();
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x00010446f774(param_1,param_2,param_3,param_4,param_5);
  uStack_68 = param_1;
  func_0x00010008a7c8(&uStack_58,&uStack_68);
  func_0x000100083b20(&uStack_68);
  func_0x000107c61574(uStack_58);
  uVar2 = uStack_68;
  uVar1 = uStack_68;
  func_0x000107c614f0(uStack_68);
  (**(code **)(lStack_60 + 0x10))();
  func_0x000107c615e8(uVar2);
  func_0x000100083b20(&lStack_70);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  uVar2 = *(undefined8 *)(lStack_70 + 0x10);
  func_0x000107c61434(uVar2);
  func_0x000107c61574(lStack_70);
  return uVar2;
}



/* Entry: 1039879b4; end: 103987a13; -[_TtC36WebViewNavigationSaberPluginRegistry41WebViewNavigationSaberPluginScopeServices init] */

void FUN_1039879b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebViewNavigationSaberPluginRegistry.WebViewNavigationSaberPluginScopeServices"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039879e0);
  (*pcVar1)();
}



/* Entry: 103987a14; end: 103987a23; -[_TtC36WebViewNavigationSaberPluginRegistry41WebViewNavigationSaberPluginScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103987a14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbb010));
  return;
}



/* Entry: 103987a24; end: 103987a43;  */

void FUN_103987a24(void)

{
  FUN_103987888();
  return;
}



/* Entry: 103987a44; end: 103987a53;  */

undefined1  [16] FUN_103987a44(void)

{
  return ZEXT816(0x1106b46f8);
}



/* Entry: 103987a54; end: 103987b3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103987a54(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_2;
  func_0x000100083b20(&uStack_38);
  FUN_103987eb4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fbb048) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fbb050) = uStack_38;
  puVar1 = PTR_s_init_1125d9248;
  lStack_48 = lVar3;
  lStack_40 = lVar2;
  func_0x000107c6157c(param_2);
  plVar4 = &lStack_48;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 103987b40; end: 103987b5f;  */

void FUN_103987b40(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103987b60; end: 103987bbf; -[_TtC65WebBrowsingThirdPartyLoginSaberPluginScopedFactoryServiceProvider51WebBrowsingThirdPartyLoginSaberPluginScopedServices init] */

void FUN_103987b60(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowsingThirdPartyLoginSaberPluginScopedFactoryServiceProvider.WebBrowsingThirdPartyLoginSaberPluginScopedServices"
                      ,0x75,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103987b8c);
  (*pcVar1)();
}



/* Entry: 103987bc0; end: 103987bf7; -[_TtC65WebBrowsingThirdPartyLoginSaberPluginScopedFactoryServiceProvider51WebBrowsingThirdPartyLoginSaberPluginScopedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103987bdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103987be0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103987bc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbb050));
  return;
}



/* Entry: 103987bf8; end: 103987c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103987bf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106b48f8;
  func_0x000107c613fc(&UNK_1106b48f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_103987f4c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103987c64; end: 103987c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103987c64(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112fbb048));
  return;
}



/* Entry: 103987c74; end: 103987d0f;  */

void FUN_103987c74(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&lStack_38);
  func_0x000107c61428(lStack_38 + 0x10,auStack_50,1,0);
  uVar2 = *(undefined8 *)(lStack_38 + 0x10);
  *(undefined8 *)(lStack_38 + 0x10) = auStack_50[0];
  *(undefined ***)(lStack_38 + 0x18) = &PTR_DAT_1106b47f0;
  uVar1 = auStack_50[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106b4800;
  return;
}



/* Entry: 103987d10; end: 103987d47;  */

void FUN_103987d10(long *param_1)

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



/* Entry: 103987d48; end: 103987d4f;  */

undefined8 FUN_103987d48(void)

{
  return 0x1b;
}



/* Entry: 103987d50; end: 103987e83;  */

void FUN_103987d50(undefined8 *param_1)

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
  puVar1 = &UNK_1106b4920;
  func_0x000107c613fc(&UNK_1106b4920,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103987f24;
  func_0x00010058fa64(FUN_103987f24,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103987e84; end: 103987eb3;  */

undefined ** FUN_103987e84(void)

{
  return &PTR_DAT_113067180;
}



/* Entry: 103987eb4; end: 103987ed3;  */

void FUN_103987eb4(void)

{
  func_0x000107c61168(&PTR_PTR_1129090c8);
  return;
}



/* Entry: 103987ed4; end: 103987f23;  */

undefined1  [16] FUN_103987ed4(void)

{
  return ZEXT816(0x1106b4858);
}



/* Entry: 103987f24; end: 103987f4b;  */

void FUN_103987f24(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 103987f4c; end: 103987f5f;  */

void FUN_103987f4c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103987f60; end: 1039882c7;  */

void FUN_103987f60(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112fbb0d0,&UNK_10dc2cc50);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112fbb0d8,&UNK_10dc2cc58);
  puVar2 = &UNK_1106b49d8;
  func_0x000107c613fc(&UNK_1106b49d8,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_3);
  uVar10 = 0x1039882d4;
  func_0x0001000823a8(0x1039882d4,puVar2);
  func_0x000100082720("WebBrowsingThirdPartyLoginSaberPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_103987d10;
  func_0x0001000823a8(FUN_103987d10,0);
  func_0x000100082720("WebBrowsingThirdPartyLoginSaberPluginScopedServicesCleanupRelayServiceProvider"
                      ,0x4e,2);
  puVar4 = puVar1;
  func_0x000103b7f408(puVar1,uVar10);
  pcVar5 = "WebBrowsingThirdPartyLoginPluginCollectionServiceProvider";
  func_0x000100082720("WebBrowsingThirdPartyLoginPluginCollectionServiceProvider",0x39,2);
  FUN_10398f514();
  func_0x000100082720("WebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeServicesServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112fbb0e0,&UNK_10dc2cc68);
  puVar2 = &UNK_1106b4a00;
  func_0x000107c613fc(&UNK_1106b4a00,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(char **)(puVar2 + 0x18) = pcVar5;
  *(code **)(puVar2 + 0x20) = pcVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(pcVar3);
  uVar6 = 0x1039882e0;
  func_0x0001000823a8(0x1039882e0,puVar2);
  func_0x000100082720("WebBrowsingThirdPartyLoginSaberPluginScopeInitializationPluginRegistryServiceProvider"
                      ,0x55,2);
  func_0x0001000285a8(0x112fbb060,&UNK_10dc2c930);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1039882ec;
  func_0x0001000823a8(0x1039882ec,uVar6);
  func_0x000100082720("WebBrowsingThirdPartyLoginSaberPluginScopeInitializationServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112fbb040,&UNK_10dc2c920);
  puVar2 = &UNK_1106b4a28;
  func_0x000107c613fc(&UNK_1106b4a28,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar4;
  *(undefined8 *)(puVar2 + 0x18) = uVar7;
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1039882f4;
  func_0x0001000823a8(0x1039882f4,puVar2);
  func_0x000100082720("WebBrowsingThirdPartyLoginSaberPluginScopedServicesServiceProvider",0x42,2);
  func_0x0001000285a8(0x112fbb058,&UNK_10dc2cc70);
  puVar2 = &UNK_1106b4a50;
  func_0x000107c613fc(&UNK_1106b4a50,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  pcVar9 = FUN_103988328;
  func_0x0001000823a8(FUN_103988328,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("WebBrowsingThirdPartyLoginSaberPluginScopeEntryPointProvider",0x3c,2);
  *param_1 = pcVar9;
  return;
}



/* Entry: 1039882c8; end: 1039882fb;  */

void FUN_1039882c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112fbb0d0,&UNK_10dc2cc50);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112fbb0d8,&UNK_10dc2cc58);
  puVar2 = &UNK_1106b49d8;
  func_0x000107c613fc(&UNK_1106b49d8,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar7;
  *(undefined8 *)(puVar2 + 0x20) = uVar9;
  *(undefined8 *)(puVar2 + 0x28) = uVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar3);
  uVar3 = 0x1039882d4;
  func_0x0001000823a8(0x1039882d4,puVar2);
  func_0x000100082720("WebBrowsingThirdPartyLoginSaberPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_103987d10;
  func_0x0001000823a8(FUN_103987d10,0);
  func_0x000100082720("WebBrowsingThirdPartyLoginSaberPluginScopedServicesCleanupRelayServiceProvider"
                      ,0x4e,2);
  puVar5 = puVar1;
  func_0x000103b7f408(puVar1,uVar3);
  pcVar6 = "WebBrowsingThirdPartyLoginPluginCollectionServiceProvider";
  func_0x000100082720("WebBrowsingThirdPartyLoginPluginCollectionServiceProvider",0x39,2);
  FUN_10398f514();
  func_0x000100082720("WebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeServicesServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112fbb0e0,&UNK_10dc2cc68);
  puVar2 = &UNK_1106b4a00;
  func_0x000107c613fc(&UNK_1106b4a00,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(char **)(puVar2 + 0x18) = pcVar6;
  *(code **)(puVar2 + 0x20) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1039882e0;
  func_0x0001000823a8(0x1039882e0,puVar2);
  func_0x000100082720("WebBrowsingThirdPartyLoginSaberPluginScopeInitializationPluginRegistryServiceProvider"
                      ,0x55,2);
  func_0x0001000285a8(0x112fbb060,&UNK_10dc2c930);
  func_0x000107c6157c(uVar7);
  uVar9 = 0x1039882ec;
  func_0x0001000823a8(0x1039882ec,uVar7);
  func_0x000100082720("WebBrowsingThirdPartyLoginSaberPluginScopeInitializationServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112fbb040,&UNK_10dc2c920);
  puVar2 = &UNK_1106b4a28;
  func_0x000107c613fc(&UNK_1106b4a28,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar5;
  *(undefined8 *)(puVar2 + 0x18) = uVar9;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x1039882f4;
  func_0x0001000823a8(0x1039882f4,puVar2);
  func_0x000100082720("WebBrowsingThirdPartyLoginSaberPluginScopedServicesServiceProvider",0x42,2);
  func_0x0001000285a8(0x112fbb058,&UNK_10dc2cc70);
  puVar2 = &UNK_1106b4a50;
  func_0x000107c613fc(&UNK_1106b4a50,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar10;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_103988328;
  func_0x0001000823a8(FUN_103988328,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar9);
  func_0x000100082720("WebBrowsingThirdPartyLoginSaberPluginScopeEntryPointProvider",0x3c,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1039882fc; end: 103988327;  */

void FUN_1039882fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103988328; end: 10398832f;  */

void FUN_103988328(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_38);
  func_0x000107c61428(lStack_38 + 0x10,auStack_50,1,0);
  uVar2 = *(undefined8 *)(lStack_38 + 0x10);
  *(undefined8 *)(lStack_38 + 0x10) = auStack_50[0];
  *(undefined ***)(lStack_38 + 0x18) = &PTR_DAT_1106b47f0;
  uVar1 = auStack_50[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106b4800;
  return;
}



/* Entry: 103988330; end: 1039883fb;  */

/* WARNING: Possible PIC construction at 0x0001039883d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039883e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039883d4) */
/* WARNING: Removing unreachable block (ram,0x0001039883e4) */

void FUN_103988330(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1106b4a78;
  func_0x000107c613fc(&UNK_1106b4a78,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uVar2 = 0x112fbb0e8;
  func_0x0001000285a8(0x112fbb0e8,&UNK_10dc2cc78);
  func_0x000107c613fc();
  pcVar3 = FUN_1039883fc;
  func_0x0001000841fc(FUN_1039883fc,puVar1,uVar2);
  func_0x000100084214("WebBrowsingThirdPartyLoginSaberPluginRegistryServiceProvider",0x3c,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1039883fc; end: 10398847b;  */

void FUN_1039883fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103988738(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100082720("WebBrowsingThirdPartyLoginAmazonHandlerSaberPluginProvider",0x3a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10398847c; end: 103988613;  */

void FUN_10398847c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074dfa0;
  ppuVar4 = &PTR_DAT_113067180;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1106b4aa0;
  func_0x000107c613fc(&UNK_1106b4aa0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112fbb0f0;
  func_0x0001000285a8(0x112fbb0f0,&UNK_10dc2cc80);
  func_0x0001000a6ee8(&UNK_1106b52f8,
                      "WebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x51,2,FUN_103988614,puVar2,uVar3,&UNK_1106b52f8,&PTR_DAT_112fbb220);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1106b4ac8;
  func_0x000107c613fc(&UNK_1106b4ac8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106b4898,
                      "WebBrowsingThirdPartyLoginSaberPluginScopedServicesScopeInitializationPluginKey"
                      ,0x4f,2,FUN_1039886fc,puVar2,uVar3,&UNK_1106b4898,&PTR_DAT_112fbb068);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112fbb0f8;
  func_0x0001000285a8(0x112fbb0f8,&UNK_10dc2cc88);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 103988614; end: 103988653;  */

void FUN_103988614(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10398f5f8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("WebBrowsingThirdPartyLoginSaberPluginScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x56,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103988654; end: 1039886fb;  */

void FUN_103988654(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106b4af0;
  func_0x000107c613fc(&UNK_1106b4af0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103988730;
  func_0x0001000823a8(FUN_103988730,puVar1);
  func_0x000100082720("WebBrowsingThirdPartyLoginSaberPluginScopedServicesScopeInitializationPluginProvider"
                      ,0x54,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1039886fc; end: 103988703;  */

void FUN_1039886fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1106b4af0;
  func_0x000107c613fc(&UNK_1106b4af0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_103988730;
  func_0x0001000823a8(FUN_103988730,puVar3);
  func_0x000100082720("WebBrowsingThirdPartyLoginSaberPluginScopedServicesScopeInitializationPluginProvider"
                      ,0x54,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103988704; end: 10398872f;  */

void FUN_103988704(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103988730; end: 103988737;  */

void FUN_103988730(undefined8 *param_1)

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
  puVar1 = &UNK_1106b4920;
  func_0x000107c613fc(&UNK_1106b4920,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103987f24;
  func_0x00010058fa64(FUN_103987f24,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103988738; end: 1039888fb;  */

void FUN_103988738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112fbb100,&UNK_10dc2cc90);
  puVar1 = &UNK_1106b4b98;
  func_0x000107c613fc(&UNK_1106b4b98,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(0x1039887dc,puVar1);
  return;
}



/* Entry: 1039888fc; end: 10398890b;  */

undefined1  [16] FUN_1039888fc(void)

{
  return ZEXT816(0x1106b4bc0);
}



/* Entry: 10398890c; end: 103988923; -[_TtC39WebBrowsingThirdPartyLoginAmazonHandler39WebBrowsingThirdPartyLoginAmazonHandler delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398890c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11380c048;
  func_0x000107c61428(param_1 + _DAT_11380c048,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103988924; end: 10398893b; -[_TtC39WebBrowsingThirdPartyLoginAmazonHandler39WebBrowsingThirdPartyLoginAmazonHandler setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103988924(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11380c048;
  func_0x000107c61428(param_1 + _DAT_11380c048,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10398893c; end: 1039889bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10398893c(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = 0x30;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x30,0x92ef);
  }
  *param_1 = lVar1;
  lVar2 = _DAT_11380c048;
  *(long *)(lVar1 + 0x20) = unaff_x20;
  *(long *)(lVar1 + 0x28) = lVar2;
  func_0x000107c61428(unaff_x20 + lVar2,lVar1,0x21,0);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  *(long *)(lVar1 + 0x18) = lVar2;
  auVar3._8_8_ = (long *)(lVar1 + 0x18);
  auVar3._0_8_ = 0x10398f060;
  return auVar3;
}



/* Entry: 1039889c0; end: 1039889cb; -[_TtC39WebBrowsingThirdPartyLoginAmazonHandler39WebBrowsingThirdPartyLoginAmazonHandler javaScriptExecutionDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039889c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11380c050;
  func_0x000107c61428(param_1 + _DAT_11380c050,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039889cc; end: 103988a0f;  */

void FUN_1039889cc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103988a10; end: 103988a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103988a10(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11380c050;
  func_0x000107c61428(unaff_x20 + _DAT_11380c050,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 103988a1c; end: 103988a5b;  */

void FUN_103988a1c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 103988a5c; end: 103988a67; -[_TtC39WebBrowsingThirdPartyLoginAmazonHandler39WebBrowsingThirdPartyLoginAmazonHandler setJavaScriptExecutionDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103988a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11380c050;
  func_0x000107c61428(param_1 + _DAT_11380c050,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103988a68; end: 103988abb;  */

void FUN_103988a68(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103988abc; end: 103988ac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103988abc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11380c050;
  func_0x000107c61428(unaff_x20 + _DAT_11380c050,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 103988ac8; end: 103988ba3;  */

void FUN_103988ac8(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_2;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 103988ba4; end: 103988ba7;  */

void FUN_103988ba4(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61604(*(long *)(lVar1 + 0x20) + *(long *)(lVar1 + 0x28),uVar2);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar1);
    func_0x000107c615e8(uVar2);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar1 + 0x18));
    func_0x000107c614a8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 103988ba8; end: 103988ccb;  */

void FUN_103988ba8(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61604(*(long *)(lVar1 + 0x20) + *(long *)(lVar1 + 0x28),uVar2);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar1);
    func_0x000107c615e8(uVar2);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar1 + 0x18));
    func_0x000107c614a8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 103988ccc; end: 103988cff;  */

void FUN_103988ccc(void)

{
  FUN_10398c9b4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103988d00; end: 103988da7; -[_TtC39WebBrowsingThirdPartyLoginAmazonHandler39WebBrowsingThirdPartyLoginAmazonHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103988d8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103988d90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103988d00(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fbb120));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fbb128));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fbb110));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fbb118));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fbb130));
  func_0x00010398e4d0(param_1 + _DAT_11356fde0,0x112d36580,&UNK_10d9016d0);
  param_1 = param_1 + _DAT_11380c048;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103988da8; end: 103988dab; -[_TtC39WebBrowsingThirdPartyLoginAmazonHandler39WebBrowsingThirdPartyLoginAmazonHandler scriptController] */

void FUN_103988da8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103988dac; end: 103988e6b; -[_TtC39WebBrowsingThirdPartyLoginAmazonHandler39WebBrowsingThirdPartyLoginAmazonHandler httpHeaderFieldsForLoadingURL:] */

void FUN_103988dac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar3,param_3);
  puVar2 = puVar3;
  FUN_10398cce8();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  if (puVar2 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3 = puVar2;
    func_0x000107c5f9dc(puVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103988e6c; end: 103988f07; -[_TtC39WebBrowsingThirdPartyLoginAmazonHandler39WebBrowsingThirdPartyLoginAmazonHandler isAllowlisted:] */

bool FUN_103988e6c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar2,param_3);
  FUN_10398c9ec(puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
  }
  return param_2 != 0;
}



/* Entry: 103988f08; end: 103988f1b;  */

bool FUN_103988f08(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103988f1c; end: 103988fc7;  */

void FUN_103988f1c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103988fc8; end: 10398902f;  */

undefined1  [16] FUN_103988fc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar4 = 0xee00736c69617465;
  uVar2 = 0x446567617373656d;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xe300000000000000;
    uVar2 = 0x6c7275;
  }
  uVar1 = 0xeb0000000065646f;
  uVar3 = 0x436567617373656d;
  if (*unaff_x20 != '\0') {
    uVar1 = uVar4;
    uVar3 = uVar2;
  }
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 103989030; end: 103989057;  */

void FUN_103989030(undefined1 *param_1,undefined1 param_2)

{
  FUN_10398ce70();
  *param_1 = param_2;
  return;
}



/* Entry: 103989058; end: 10398906f;  */

undefined1  [16] FUN_103989058(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103989070; end: 1039890bf;  */

void FUN_103989070(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10398ed74();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1039890c0; end: 1039890ff;  */

void FUN_1039890c0(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10398cf90(&uStack_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[3] = uStack_38;
    param_1[2] = uStack_40;
    param_1[5] = uStack_28;
    param_1[4] = uStack_30;
  }
  return;
}



/* Entry: 103989100; end: 10398911b; -[_TtC39WebBrowsingThirdPartyLoginAmazonHandler39WebBrowsingThirdPartyLoginAmazonHandler injectedJavaScript] */

void FUN_103989100(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10398911c; end: 103989157; -[_TtC39WebBrowsingThirdPartyLoginAmazonHandler39WebBrowsingThirdPartyLoginAmazonHandler nativeCallbackNames] */

void FUN_10398911c(void)

{
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  func_0x000107c5fc48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103989158; end: 10398915f; -[_TtC39WebBrowsingThirdPartyLoginAmazonHandler39WebBrowsingThirdPartyLoginAmazonHandler injectionTime] */

undefined8 FUN_103989158(void)

{
  return 0;
}



/* Entry: 103989160; end: 103989167; -[_TtC39WebBrowsingThirdPartyLoginAmazonHandler39WebBrowsingThirdPartyLoginAmazonHandler forMainFrameOnly] */

undefined8 FUN_103989160(void)

{
  return 1;
}



/* Entry: 103989168; end: 1039891cf; -[_TtC39WebBrowsingThirdPartyLoginAmazonHandler39WebBrowsingThirdPartyLoginAmazonHandler userContentController:didReceiveScriptMessage:] */

/* WARNING: Possible PIC construction at 0x0001039891b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039891b4) */

void FUN_103989168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10398de38(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1039891d0; end: 10398957f;  */

/* WARNING: Possible PIC construction at 0x000103989508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103989318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103989370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039893e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103989404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103989338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103989408) */
/* WARNING: Removing unreachable block (ram,0x0001039893e8) */
/* WARNING: Removing unreachable block (ram,0x00010398940c) */
/* WARNING: Removing unreachable block (ram,0x000103989464) */
/* WARNING: Removing unreachable block (ram,0x000103989430) */
/* WARNING: Removing unreachable block (ram,0x000103989374) */
/* WARNING: Removing unreachable block (ram,0x00010398931c) */
/* WARNING: Removing unreachable block (ram,0x00010398933c) */
/* WARNING: Removing unreachable block (ram,0x000103989380) */
/* WARNING: Removing unreachable block (ram,0x000103989340) */
/* WARNING: Removing unreachable block (ram,0x000103989388) */
/* WARNING: Removing unreachable block (ram,0x0001039893d8) */
/* WARNING: Removing unreachable block (ram,0x0001039893ec) */
/* WARNING: Removing unreachable block (ram,0x0001039893e0) */
/* WARNING: Removing unreachable block (ram,0x00010398936c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039891d0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -0x2fffffffffffffdb;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0150d0);
  lVar2 = 0;
  func_0x000107c5fe40();
  lVar8 = lVar1;
  lVar6 = lVar2;
  func_0x000107c312f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  if (lVar8 == 0) {
    lVar1 = 0;
    lVar8 = 0;
    lVar2 = lVar6;
    puVar5 = PTR_PTR_1126afde0;
  }
  else {
    lVar1 = lVar8;
    func_0x000107c5faec(lVar8);
    lVar2 = lVar6;
    func_0x000107c61170(lVar8);
    lVar8 = lVar6;
    puVar5 = PTR_PTR_1126afde0;
  }
  PTR_PTR_1126afde0 = puVar5;
  if (param_1 == (long *)0x0) {
    if (lVar8 == 0) {
      lVar8 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar8 + -8) + 0x38))(auStack_80 + -extraout_x8,1,1,lVar8);
      lVar8 = _DAT_11356fde0;
      func_0x000107c61428(unaff_x20 + _DAT_11356fde0,auStack_78,0x21,0);
      func_0x0001014522e4(auStack_80 + -extraout_x8,unaff_x20 + lVar8);
      func_0x000107c614a8(auStack_78);
      return;
    }
    func_0x000107c61168(puVar5);
    func_0x000107c5fadc(lVar1,lVar8);
    func_0x000107c40b14(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar6 = *(long *)(unaff_x20 + _DAT_112fbb120);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      puVar7 = puVar5;
      func_0x000107c61174(puVar5);
      func_0x000107c5c2e0(lVar6);
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(puVar7);
    }
    func_0x000107c61170(puVar5);
  }
  else {
    func_0x000107c614b0(param_1);
    func_0x000107c5ed2c();
    plVar3 = param_1;
    func_0x000107c42210();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    plVar4 = plVar3;
    lVar8 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170();
    FUN_10399ca34();
    if ((plVar4 != (long *)*plVar3) || (lVar8 != plVar3[1])) {
      func_0x000107c605b8(plVar4,lVar8,(long *)*plVar3,plVar3[1],0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar8);
  return;
}



/* Entry: 103989580; end: 10398976f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103989580(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  code *pcVar7;
  long extraout_x8;
  code *unaff_x20;
  code *pcVar8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  code *pcStack_90;
  code *pcStack_88;
  code *pcStack_80;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001000d224c(&uStack_50);
  uVar2 = uStack_50;
  uVar1 = uStack_50;
  func_0x000107c49678();
  func_0x000107c615e8(uVar2);
  pcVar8 = (code *)0x0;
  if ((int)uVar1 == 0) {
    pcVar4 = pcVar8;
    func_0x000107c61174(0);
    func_0x000107c5ed30();
    func_0x000107c61170(pcVar4);
    func_0x000107c61654();
    func_0x000107c614b0(pcVar8);
    FUN_1039891d0(pcVar8);
    func_0x000107c614ac(pcVar8);
    pcVar5 = pcVar8;
    func_0x000107c614ac();
    pcVar4 = pcVar8;
  }
  else {
    func_0x0001000285a8(0x112ed5868,&UNK_10daff280);
    func_0x000107c61174(0);
    func_0x0001000d224c(&uStack_50);
    uVar2 = uStack_50;
    func_0x000107c4c030(uStack_50);
    func_0x000107c61180();
    func_0x000107c615e8(uStack_50);
    uVar1 = uVar2;
    func_0x0001000b637c(uVar2);
    func_0x000107c61170(uVar2);
    pcVar8 = (code *)0x1;
    func_0x00010061b458();
    func_0x000107c61574(uVar1);
    pcVar4 = (code *)&UNK_1106b4ee0;
    func_0x000107c613fc(&UNK_1106b4ee0,0x18,7);
    func_0x000107c61614(pcVar4 + 0x10);
    pcVar3 = FUN_10398e9dc;
    pcVar7 = pcVar4;
    (**(code **)(*(long *)pcVar8 + 0x60))();
    func_0x000107c61574(pcVar8);
    func_0x000107c61574(pcVar4);
    pcVar5 = pcVar3;
    func_0x000107c614f0(pcVar3);
    (**(code **)(pcVar7 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112fbb130),pcVar5,pcVar7);
    pcVar5 = pcVar3;
    func_0x000107c615e8();
    unaff_x20 = pcVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  lVar6 = 0x112d36580;
  pcStack_90 = pcVar4;
  pcStack_88 = pcVar8;
  pcStack_80 = unaff_x20;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar5[_DAT_112fbb108] = (code)0x0;
  lVar6 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(auStack_b0 + -extraout_x8,1,1,lVar6);
  lVar6 = _DAT_11356fde0;
  func_0x000107c61428(pcVar5 + _DAT_11356fde0,auStack_a8,0x21,0);
  pcVar8 = pcVar5;
  func_0x000107c61174(pcVar5);
  func_0x0001014522e4(auStack_b0 + -extraout_x8,pcVar5 + lVar6);
  func_0x000107c614a8(auStack_a8);
  func_0x000107c61170(pcVar8);
  return;
}



/* Entry: 103989770; end: 10398984b; -[_TtC39WebBrowsingThirdPartyLoginAmazonHandler39WebBrowsingThirdPartyLoginAmazonHandler resetAuthSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103989770(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(undefined1 *)(param_1 + _DAT_112fbb108) = 0;
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(auStack_50 + -extraout_x8,1,1,lVar1);
  lVar1 = _DAT_11356fde0;
  func_0x000107c61428(param_1 + _DAT_11356fde0,auStack_48,0x21,0);
  lVar2 = param_1;
  func_0x000107c61174(param_1);
  func_0x0001014522e4(auStack_50 + -extraout_x8,param_1 + lVar1);
  func_0x000107c614a8(auStack_48);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 10398984c; end: 10398b04f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10398984c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  code **ppcVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar15;
  long lVar16;
  long extraout_x8_02;
  long lVar17;
  long lVar18;
  long extraout_x8_03;
  long lVar19;
  long extraout_x8_04;
  code *pcVar20;
  code *pcVar21;
  code *pcVar22;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long unaff_x20;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  undefined4 *puVar34;
  long lVar35;
  undefined8 uVar36;
  long lVar37;
  undefined8 uVar38;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar3 = 0;
  func_0x000107c5f7fc();
  lVar28 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar28 + 0x40));
  lVar30 = (long)&lStack_240 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  lVar33 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar33 + 0x40));
  lVar35 = lVar30 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined *)0x0;
  func_0x000107c5eea4();
  lVar37 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar37 + 0x40));
  lVar23 = lVar35 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_190 = lVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = lVar23 - extraout_x12;
  lStack_198 = lVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar24 = (undefined *)(lVar23 - extraout_x12_00);
  puStack_1a8 = puVar24;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (long)puVar24 - extraout_x12_01;
  lVar6 = 0;
  func_0x000107c5ef5c();
  lVar16 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  func_0x000107c5ef64();
  lVar18 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar19 = lVar17 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar23 = 0x112d373d8;
  puVar24 = &UNK_10d9014c0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
  lVar25 = lVar19 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lStack_180 = lVar25;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = lVar25 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_188 = lVar25 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar26 = (lVar25 - extraout_x12_03) - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = (lVar26 - extraout_x12_05) - extraout_x12_06;
  FUN_10398c9ec();
  if (puVar24 == (undefined *)0x0) {
    puVar24 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNull_1126aef28);
    func_0x000107c453e4();
    func_0x000107c451b0(puVar24);
    func_0x000107c61180();
  }
  else {
    uVar8 = param_2;
    puVar14 = puVar24;
    lStack_240 = lVar33;
    lStack_230 = lVar30;
    lStack_220 = lVar3;
    pcStack_1b0 = (code *)(lVar26 - extraout_x12_05);
    func_0x000107c60f34();
    func_0x0001000d224c(&pcStack_a8);
    pcVar2 = pcStack_a8;
    pcVar9 = pcStack_a8;
    func_0x000107c3dc68();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar2);
    pcVar20 = pcVar9;
    func_0x000107c5faec();
    func_0x000107c61170(pcVar9);
    puVar34 = (undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4houryA2EmFWC_110350d80;
    puVar12 = PTR___sSSN_11034da80;
    pcVar2 = (code *)PTR___NSConcreteStackBlock_11034bd00;
    puVar11 = PTR__NSHTTPCookieDomain_110345498;
    uVar1 = (ulong)pcVar20 & 0xffffffffffff;
    if (((ulong)puVar14 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar14 >> 0x38 & 0xf;
    }
    lStack_238 = lVar4;
    lStack_228 = lVar28;
    lStack_1a0 = lVar35;
    if (uVar1 == 0) {
      func_0x000107c6142c(puVar14);
    }
    else {
      func_0x000107c5ef54(lVar19);
      (**(code **)(lVar16 + 0x68))(lVar17,*puVar34,lVar6);
      func_0x000107c5eea0(lVar15);
      func_0x000107c5ef4c(lVar23,lVar17,1,lVar15,0);
      pcStack_1c0 = *(code **)(lVar37 + 8);
      (*pcStack_1c0)(lVar15,puVar5);
      (**(code **)(lVar16 + 8))(lVar17,lVar6);
      (**(code **)(lVar18 + 8))(lVar19,lVar7);
      pcVar2 = (code *)0x112d6ea08;
      func_0x0001000285a8(0x112d6ea08,&UNK_10dc2cd60);
      func_0x000107c613fc();
      *(undefined8 *)(pcVar2 + 0x18) = 0xe;
      *(undefined8 *)(pcVar2 + 0x10) = 7;
      *(undefined8 *)(pcVar2 + 0x20) = *(undefined8 *)puVar11;
      pcStack_a8 = (code *)0x2e;
      uStack_a0 = 0xe100000000000000;
      func_0x000107c61174();
      func_0x000107c5fb78(param_2,puVar24);
      *(code **)(pcVar2 + 0x28) = pcStack_a8;
      *(undefined8 *)(pcVar2 + 0x30) = uStack_a0;
      uVar10 = *(undefined8 *)PTR__NSHTTPCookiePath_1103454b8;
      *(undefined **)(pcVar2 + 0x40) = puVar12;
      *(undefined8 *)(pcVar2 + 0x48) = uVar10;
      *(undefined8 *)(pcVar2 + 0x50) = 0x2f;
      *(undefined8 *)(pcVar2 + 0x58) = 0xe100000000000000;
      uVar10 = *(undefined8 *)PTR__NSHTTPCookieName_1103454a8;
      *(undefined **)(pcVar2 + 0x68) = puVar12;
      *(undefined8 *)(pcVar2 + 0x70) = uVar10;
      *(undefined8 *)(pcVar2 + 0x78) = 0x6970612d61612d78;
      *(undefined8 *)(pcVar2 + 0x80) = 0xec00000079656b2d;
      uVar27 = *(undefined8 *)PTR__NSHTTPCookieValue_1103454d0;
      *(undefined **)(pcVar2 + 0x90) = puVar12;
      *(undefined8 *)(pcVar2 + 0x98) = uVar27;
      *(code **)(pcVar2 + 0xa0) = pcVar20;
      *(undefined **)(pcVar2 + 0xa8) = puVar14;
      uVar38 = *(undefined8 *)PTR__NSHTTPCookieDiscard_110345490;
      *(undefined **)(pcVar2 + 0xb8) = puVar12;
      *(undefined8 *)(pcVar2 + 0xc0) = uVar38;
      *(undefined8 *)(pcVar2 + 200) = 0x45555254;
      *(undefined8 *)(pcVar2 + 0xd0) = 0xe400000000000000;
      uVar31 = *(undefined8 *)PTR__NSHTTPCookieSecure_1103454c8;
      *(undefined **)(pcVar2 + 0xe0) = puVar12;
      *(undefined8 *)(pcVar2 + 0xe8) = uVar31;
      *(undefined8 *)(pcVar2 + 0xf0) = 0x45555254;
      *(undefined8 *)(pcVar2 + 0xf8) = 0xe400000000000000;
      uVar36 = *(undefined8 *)PTR__NSHTTPCookieSameSitePolicy_1103454c0;
      *(undefined **)(pcVar2 + 0x108) = puVar12;
      *(undefined8 *)(pcVar2 + 0x110) = uVar36;
      *(undefined **)(pcVar2 + 0x130) = puVar12;
      *(undefined8 *)(pcVar2 + 0x118) = 0x656e6f6e;
      *(undefined8 *)(pcVar2 + 0x120) = 0xe400000000000000;
      func_0x000107c61174();
      func_0x000107c61174(uVar10);
      func_0x000107c61174(uVar27);
      puStack_1b8 = puVar14;
      func_0x000107c61434(puVar14);
      func_0x000107c61174(uVar38);
      func_0x000107c61174(uVar31);
      func_0x000107c61174(uVar36);
      uVar10 = 0x112d6ea10;
      pcVar9 = pcVar2;
      func_0x00010398e26c(pcVar2,0x112d6ea18,&UNK_10d9307f8,0x112d6ea10,&UNK_10d9307f0);
      func_0x000107c61588(pcVar2);
      func_0x0001000285a8(0x112d6ea10,&UNK_10d9307f0);
      func_0x000107c61408(pcVar2 + 0x20,7,uVar10);
      func_0x000107c6145c(pcVar2,0x20,7);
      uVar10 = 0x796c6e4f70747448;
      func_0x000107c5fadc(0x796c6e4f70747448,0xe800000000000000);
      pcStack_d0 = (code *)0x45555254;
      uStack_c8 = 0xe400000000000000;
      puStack_b8 = puVar12;
      func_0x000100102924(&pcStack_d0,&pcStack_a8);
      pcVar2 = pcVar9;
      func_0x000107c61558(pcVar9);
      pcStack_d0 = pcVar9;
      func_0x00010398bffc(&pcStack_a8,uVar10,pcVar2);
      func_0x000107c61170(uVar10);
      pcVar9 = pcStack_d0;
      pcVar2 = pcStack_1b0;
      pcStack_b0 = pcStack_d0;
      FUN_10398eaf8(lVar23,pcStack_1b0,0x112d373d8,&UNK_10d9014c0);
      pcVar20 = pcVar2;
      (**(code **)(lVar37 + 0x30))(pcVar2,1,puVar5);
      puVar11 = puStack_1a8;
      if ((int)pcVar20 == 1) {
        func_0x00010398e4d0(pcVar2,0x112d373d8,&UNK_10d9014c0);
        pcVar2 = (code *)PTR___NSConcreteStackBlock_11034bd00;
        puVar34 = (undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4houryA2EmFWC_110350d80;
      }
      else {
        (**(code **)(lVar37 + 0x20))(puStack_1a8,pcVar2,puVar5);
        uVar10 = *(undefined8 *)PTR__NSHTTPCookieExpires_1103454a0;
        puStack_90 = puVar5;
        func_0x0001000a9d90(&pcStack_a8);
        (**(code **)(lVar37 + 0x10))();
        uStack_e8 = uStack_a0;
        pcStack_f0 = pcStack_a8;
        puStack_d8 = puStack_90;
        puStack_e0 = puStack_98;
        if (puStack_90 == (undefined *)0x0) {
          func_0x000107c61174(uVar10);
          func_0x00010398e4d0(&pcStack_f0,0x112d387f8,&UNK_10d902650);
          func_0x00010398bf38(&pcStack_d0,uVar10);
          func_0x000107c61170(uVar10);
          func_0x00010398e4d0(&pcStack_d0,0x112d387f8,&UNK_10d902650);
        }
        else {
          func_0x000100102924(&pcStack_f0,&pcStack_d0);
          func_0x000107c61174(uVar10);
          pcVar2 = pcVar9;
          func_0x000107c61558(pcVar9);
          pcStack_f0 = pcVar9;
          func_0x00010398bffc(&pcStack_d0,uVar10,pcVar2);
          func_0x000107c61170(uVar10);
          pcStack_b0 = pcStack_f0;
        }
        pcVar9 = pcStack_b0;
        puVar34 = (undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4houryA2EmFWC_110350d80;
        pcVar2 = (code *)PTR___NSConcreteStackBlock_11034bd00;
        (*pcStack_1c0)(puVar11,puVar5);
      }
      puVar11 = PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0;
      func_0x000107c610f8();
      uVar27 = 0;
      func_0x00010129b9f4(0);
      uVar10 = 0x112d6e8c0;
      FUN_10398e3dc(0x112d6e8c0,&SUB_10129b9f4,&UNK_10d930714);
      pcVar20 = pcVar9;
      func_0x000107c5f9dc(pcVar9,uVar27,PTR___sypN_11034f1a8 + 8,uVar10);
      func_0x000107c48194();
      func_0x000107c6142c(puStack_1b8);
      func_0x000107c6142c(pcVar9);
      func_0x000107c61170(pcVar20);
      func_0x00010398e4d0(lVar23,0x112d373d8,&UNK_10d9014c0);
      if (puVar11 != (undefined *)0x0) {
        func_0x000107c60f38(uVar8);
        puVar12 = &UNK_1106b4d50;
        func_0x000107c613fc(&UNK_1106b4d50,0x18,7);
        *(undefined8 *)(puVar12 + 0x10) = uVar8;
        pcStack_88 = (code *)0x10398f034;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_1106b4d68;
        ppcVar13 = &pcStack_a8;
        pcStack_a8 = pcVar2;
        puStack_80 = puVar12;
        func_0x000107c60bc4(ppcVar13);
        puVar12 = puStack_80;
        func_0x000107c61174(uVar8);
        func_0x000107c61574(puVar12);
        func_0x000107c539ac(param_1);
        func_0x000107c60bd0(ppcVar13);
        func_0x000107c61170(puVar11);
      }
    }
    func_0x000107c60f38(uVar8);
    lVar23 = unaff_x20;
    func_0x000107c614f0();
    func_0x0001000d224c(&pcStack_d0);
    pcVar9 = pcStack_d0;
    pcVar20 = pcStack_d0;
    func_0x000107c43194(pcStack_d0);
    func_0x000107c61180();
    func_0x000107c615e8(pcVar9);
    puVar11 = &UNK_1106b4da0;
    uVar10 = 0x38;
    func_0x000107c613fc(&UNK_1106b4da0,0x38,7);
    *(undefined8 *)(puVar11 + 0x10) = param_2;
    *(undefined **)(puVar11 + 0x18) = puVar24;
    *(undefined8 *)(puVar11 + 0x28) = uVar8;
    *(long *)(puVar11 + 0x30) = lVar23;
    *(undefined8 *)(puVar11 + 0x20) = param_1;
    pcStack_88 = FUN_10398e510;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_101c871e8;
    puStack_90 = &UNK_1106b4db8;
    ppcVar13 = &pcStack_a8;
    pcStack_a8 = pcVar2;
    puStack_80 = puVar11;
    func_0x000107c60bc4(ppcVar13);
    puVar11 = puStack_80;
    func_0x000107c61434(puVar24);
    func_0x000107c615f0(param_1);
    func_0x000107c61174();
    func_0x000107c61574(puVar11);
    func_0x000107c5dc64(pcVar20);
    func_0x000107c60bd0(ppcVar13);
    func_0x000107c61170(pcVar20);
    puVar11 = PTR_PTR_1126b2930;
    func_0x000107c61168();
    puStack_1a8 = puVar11;
    func_0x000107c40efc();
    func_0x000107c61180();
    puVar12 = puVar11;
    func_0x000107c5c620();
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    puVar14 = puVar12;
    func_0x000107c5faec();
    func_0x000107c61170(puVar12);
    uVar27 = uVar10;
    func_0x000107c5fb24();
    func_0x000107c6142c(uVar10);
    func_0x000107c5ef54(lVar19);
    pcStack_1b0 = *(code **)(lVar16 + 0x68);
    puStack_1b8 = (undefined *)CONCAT44(puStack_1b8._4_4_,*puVar34);
    (*pcStack_1b0)(lVar17,*puVar34,lVar6);
    func_0x000107c5eea0(lVar15);
    func_0x000107c5ef4c(lVar26,lVar17,0x30,lVar15,0);
    pcVar20 = *(code **)(lVar37 + 8);
    (*pcVar20)(lVar15,puVar5);
    pcVar21 = *(code **)(lVar16 + 8);
    (*pcVar21)(lVar17,lVar6);
    pcVar22 = *(code **)(lVar18 + 8);
    (*pcVar22)(lVar19,lVar7);
    pcVar2 = (code *)0x112d6ea08;
    func_0x0001000285a8(0x112d6ea08,&UNK_10dc2cd60);
    pcStack_1c0 = pcVar2;
    func_0x000107c613fc();
    uStack_1c8 = 0xe;
    uStack_1d0 = 7;
    *(undefined8 *)(pcVar2 + 0x18) = 0xe;
    *(undefined8 *)(pcVar2 + 0x10) = 7;
    uVar10 = *(undefined8 *)PTR__NSHTTPCookieDomain_110345498;
    *(undefined8 *)(pcVar2 + 0x20) = uVar10;
    pcStack_a8 = (code *)0x2e;
    uStack_a0 = 0xe100000000000000;
    func_0x000107c61174();
    func_0x000107c61174();
    uStack_1d8 = uVar10;
    func_0x000107c5fb78(param_2,puVar24);
    *(code **)(pcVar2 + 0x28) = pcStack_a8;
    *(undefined8 *)(pcVar2 + 0x30) = uStack_a0;
    puVar11 = PTR___sSSN_11034da80;
    uVar10 = *(undefined8 *)PTR__NSHTTPCookiePath_1103454b8;
    *(undefined **)(pcVar2 + 0x40) = PTR___sSSN_11034da80;
    *(undefined8 *)(pcVar2 + 0x48) = uVar10;
    *(undefined8 *)(pcVar2 + 0x50) = 0x2f;
    *(undefined8 *)(pcVar2 + 0x58) = 0xe100000000000000;
    uVar31 = *(undefined8 *)PTR__NSHTTPCookieName_1103454a8;
    *(undefined **)(pcVar2 + 0x68) = puVar11;
    *(undefined8 *)(pcVar2 + 0x70) = uVar31;
    *(undefined8 *)(pcVar2 + 0x78) = 0xd000000000000012;
    *(undefined8 *)(pcVar2 + 0x80) = 0x800000010f17e880;
    uVar36 = *(undefined8 *)PTR__NSHTTPCookieValue_1103454d0;
    *(undefined **)(pcVar2 + 0x90) = puVar11;
    *(undefined8 *)(pcVar2 + 0x98) = uVar36;
    *(undefined **)(pcVar2 + 0xa0) = puVar14;
    *(undefined8 *)(pcVar2 + 0xa8) = uVar27;
    uVar38 = *(undefined8 *)PTR__NSHTTPCookieDiscard_110345490;
    *(undefined **)(pcVar2 + 0xb8) = puVar11;
    *(undefined8 *)(pcVar2 + 0xc0) = uVar38;
    *(undefined8 *)(pcVar2 + 200) = 0x45555254;
    *(undefined8 *)(pcVar2 + 0xd0) = 0xe400000000000000;
    uVar29 = *(undefined8 *)PTR__NSHTTPCookieSecure_1103454c8;
    *(undefined **)(pcVar2 + 0xe0) = puVar11;
    *(undefined8 *)(pcVar2 + 0xe8) = uVar29;
    *(undefined8 *)(pcVar2 + 0xf0) = 0x45555254;
    *(undefined8 *)(pcVar2 + 0xf8) = 0xe400000000000000;
    uVar32 = *(undefined8 *)PTR__NSHTTPCookieSameSitePolicy_1103454c0;
    *(undefined **)(pcVar2 + 0x108) = puVar11;
    *(undefined8 *)(pcVar2 + 0x110) = uVar32;
    *(undefined **)(pcVar2 + 0x130) = puVar11;
    *(undefined8 *)(pcVar2 + 0x118) = 0x656e6f6e;
    *(undefined8 *)(pcVar2 + 0x120) = 0xe400000000000000;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    uStack_218 = uVar10;
    func_0x000107c61174();
    uStack_210 = uVar31;
    func_0x000107c61174();
    uStack_200 = uVar36;
    func_0x000107c61174();
    uStack_208 = uVar38;
    func_0x000107c61174();
    uStack_1f0 = uVar29;
    func_0x000107c61174();
    uStack_1f8 = uVar32;
    func_0x000107c61434(uVar27);
    uVar10 = 0x112d6ea10;
    pcVar9 = pcVar2;
    func_0x00010398e26c(pcVar2,0x112d6ea18,&UNK_10d9307f8,0x112d6ea10,&UNK_10d9307f0);
    func_0x000107c61588(pcVar2);
    func_0x0001000285a8(0x112d6ea10,&UNK_10d9307f0);
    uStack_1e0 = uVar10;
    func_0x000107c61408(pcVar2 + 0x20,7);
    func_0x000107c6145c(pcVar2,0x20,7);
    lVar3 = lStack_188;
    pcStack_b0 = pcVar9;
    FUN_10398eaf8(lVar26,lStack_188,0x112d373d8,&UNK_10d9014c0);
    pcStack_1e8 = *(code **)(lVar37 + 0x30);
    lVar4 = lVar3;
    (*pcStack_1e8)(lVar3,1,puVar5);
    lVar23 = lStack_198;
    if ((int)lVar4 == 1) {
      func_0x00010398e4d0(lVar3,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      (**(code **)(lVar37 + 0x20))(lStack_198,lVar3,puVar5);
      uVar10 = *(undefined8 *)PTR__NSHTTPCookieExpires_1103454a0;
      puStack_90 = puVar5;
      func_0x0001000a9d90(&pcStack_a8);
      (**(code **)(lVar37 + 0x10))();
      uStack_e8 = uStack_a0;
      pcStack_f0 = pcStack_a8;
      puStack_d8 = puStack_90;
      puStack_e0 = puStack_98;
      if (puStack_90 == (undefined *)0x0) {
        func_0x000107c61174(uVar10);
        func_0x00010398e4d0(&pcStack_f0,0x112d387f8,&UNK_10d902650);
        func_0x00010398bf38(&pcStack_d0,uVar10);
        func_0x000107c61170(uVar10);
        func_0x00010398e4d0(&pcStack_d0,0x112d387f8,&UNK_10d902650);
      }
      else {
        func_0x000100102924(&pcStack_f0,&pcStack_d0);
        func_0x000107c61174(uVar10);
        pcVar2 = pcVar9;
        func_0x000107c61558(pcVar9);
        pcStack_f0 = pcVar9;
        func_0x00010398bffc(&pcStack_d0,uVar10,pcVar2);
        func_0x000107c61170(uVar10);
        pcStack_b0 = pcStack_f0;
      }
      pcVar9 = pcStack_b0;
      (*pcVar20)(lVar23,puVar5);
    }
    puVar11 = PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0;
    func_0x000107c610f8();
    lVar23 = 0;
    func_0x00010129b9f4();
    uVar10 = 0x112d6e8c0;
    FUN_10398e3dc(0x112d6e8c0,&SUB_10129b9f4,&UNK_10d930714);
    pcVar2 = pcVar9;
    lStack_188 = lVar23;
    func_0x000107c5f9dc(pcVar9,lVar23,PTR___sypN_11034f1a8 + 8,uVar10);
    func_0x000107c48194();
    func_0x000107c6142c(pcVar9);
    func_0x000107c61170(pcVar2);
    func_0x000107c6142c(uVar27);
    uVar27 = 0x112d373d8;
    func_0x00010398e4d0(lVar26,0x112d373d8,&UNK_10d9014c0);
    if (puVar11 != (undefined *)0x0) {
      func_0x000107c60f38(uVar8);
      puVar12 = &UNK_1106b4d00;
      uVar27 = 0x18;
      func_0x000107c613fc(&UNK_1106b4d00,0x18,7);
      *(undefined8 *)(puVar12 + 0x10) = uVar8;
      pcStack_88 = (code *)0x10398f044;
      pcStack_a8 = (code *)PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_1106b4d18;
      ppcVar13 = &pcStack_a8;
      puStack_80 = puVar12;
      func_0x000107c60bc4(ppcVar13);
      puVar12 = puStack_80;
      func_0x000107c61174(uVar8);
      func_0x000107c61574(puVar12);
      func_0x000107c539ac(param_1);
      func_0x000107c60bd0(ppcVar13);
      func_0x000107c61170(puVar11);
    }
    puVar11 = puStack_1a8;
    func_0x000107c40efc();
    func_0x000107c61180();
    puVar12 = puVar11;
    func_0x000107c5c650();
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    puVar14 = puVar12;
    func_0x000107c5faec();
    func_0x000107c61170(puVar12);
    func_0x000107c5ef54(lVar19);
    (*pcStack_1b0)(lVar17,(ulong)puStack_1b8 & 0xffffffff,lVar6);
    func_0x000107c5eea0(lVar15);
    func_0x000107c5ef4c(lVar25,lVar17,0x30,lVar15,0);
    (*pcVar20)(lVar15,puVar5);
    (*pcVar21)(lVar17,lVar6);
    (*pcVar22)(lVar19,lVar7);
    pcVar9 = pcStack_1c0;
    func_0x000107c613fc(pcStack_1c0,0x138,7);
    *(undefined8 *)(pcVar9 + 0x18) = uStack_1c8;
    *(undefined8 *)(pcVar9 + 0x10) = uStack_1d0;
    *(undefined8 *)(pcVar9 + 0x20) = uStack_1d8;
    pcStack_a8 = (code *)0x2e;
    uStack_a0 = 0xe100000000000000;
    func_0x000107c5fb78(param_2,puVar24);
    *(code **)(pcVar9 + 0x28) = pcStack_a8;
    *(undefined8 *)(pcVar9 + 0x30) = uStack_a0;
    puVar11 = PTR___sSSN_11034da80;
    *(undefined **)(pcVar9 + 0x40) = PTR___sSSN_11034da80;
    *(undefined8 *)(pcVar9 + 0x48) = uStack_218;
    *(undefined8 *)(pcVar9 + 0x50) = 0x2f;
    *(undefined8 *)(pcVar9 + 0x58) = 0xe100000000000000;
    *(undefined **)(pcVar9 + 0x68) = puVar11;
    *(undefined8 *)(pcVar9 + 0x70) = uStack_210;
    *(undefined8 *)(pcVar9 + 0x78) = 0xd000000000000015;
    *(undefined8 *)(pcVar9 + 0x80) = 0x800000010f17e8a0;
    *(undefined **)(pcVar9 + 0x90) = puVar11;
    *(undefined8 *)(pcVar9 + 0x98) = uStack_200;
    *(undefined **)(pcVar9 + 0xa0) = puVar14;
    *(undefined8 *)(pcVar9 + 0xa8) = uVar27;
    *(undefined **)(pcVar9 + 0xb8) = puVar11;
    *(undefined8 *)(pcVar9 + 0xc0) = uStack_208;
    *(undefined8 *)(pcVar9 + 200) = 0x45555254;
    *(undefined8 *)(pcVar9 + 0xd0) = 0xe400000000000000;
    *(undefined **)(pcVar9 + 0xe0) = puVar11;
    *(undefined8 *)(pcVar9 + 0xe8) = uStack_1f0;
    *(undefined8 *)(pcVar9 + 0xf0) = 0x45555254;
    *(undefined8 *)(pcVar9 + 0xf8) = 0xe400000000000000;
    *(undefined **)(pcVar9 + 0x108) = puVar11;
    *(undefined8 *)(pcVar9 + 0x110) = uStack_1f8;
    *(undefined **)(pcVar9 + 0x130) = puVar11;
    *(undefined8 *)(pcVar9 + 0x118) = 0x656e6f6e;
    *(undefined8 *)(pcVar9 + 0x120) = 0xe400000000000000;
    func_0x000107c61434(uVar27);
    pcVar2 = pcVar9;
    func_0x00010398e26c(pcVar9,0x112d6ea18,&UNK_10d9307f8,0x112d6ea10,&UNK_10d9307f0);
    func_0x000107c61588(pcVar9);
    func_0x000107c61408(pcVar9 + 0x20,7,uStack_1e0);
    func_0x000107c6145c(pcVar9,0x20,7);
    lVar3 = lStack_180;
    pcStack_b0 = pcVar2;
    FUN_10398eaf8(lVar25,lStack_180,0x112d373d8,&UNK_10d9014c0);
    lVar4 = lVar3;
    (*pcStack_1e8)(lVar3,1,puVar5);
    lVar23 = lStack_190;
    if ((int)lVar4 == 1) {
      func_0x00010398e4d0(lVar3,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      (**(code **)(lVar37 + 0x20))(lStack_190,lVar3,puVar5);
      uVar31 = *(undefined8 *)PTR__NSHTTPCookieExpires_1103454a0;
      puStack_90 = puVar5;
      func_0x0001000a9d90(&pcStack_a8);
      (**(code **)(lVar37 + 0x10))();
      uStack_e8 = uStack_a0;
      pcStack_f0 = pcStack_a8;
      puStack_d8 = puStack_90;
      puStack_e0 = puStack_98;
      if (puStack_90 == (undefined *)0x0) {
        func_0x000107c61174(uVar31);
        func_0x00010398e4d0(&pcStack_f0,0x112d387f8,&UNK_10d902650);
        func_0x00010398bf38(&pcStack_d0,uVar31);
        func_0x000107c61170(uVar31);
        func_0x00010398e4d0(&pcStack_d0,0x112d387f8,&UNK_10d902650);
      }
      else {
        func_0x000100102924(&pcStack_f0,&pcStack_d0);
        func_0x000107c61174(uVar31);
        pcVar9 = pcVar2;
        func_0x000107c61558(pcVar2);
        pcStack_f0 = pcVar2;
        func_0x00010398bffc(&pcStack_d0,uVar31,pcVar9);
        func_0x000107c61170(uVar31);
        pcStack_b0 = pcStack_f0;
      }
      pcVar2 = pcStack_b0;
      (*pcVar20)(lVar23,puVar5);
    }
    puVar11 = PTR___NSConcreteStackBlock_11034bd00;
    puVar5 = PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0;
    func_0x000107c610f8();
    pcVar9 = pcVar2;
    func_0x000107c5f9dc(pcVar2,lStack_188,PTR___sypN_11034f1a8 + 8,uVar10);
    func_0x000107c48194();
    func_0x000107c6142c(puVar24);
    func_0x000107c6142c(pcVar2);
    func_0x000107c61170(pcVar9);
    func_0x000107c6142c(uVar27);
    func_0x00010398e4d0(lVar25,0x112d373d8,&UNK_10d9014c0);
    if (puVar5 != (undefined *)0x0) {
      func_0x000107c60f38(uVar8);
      puVar24 = &UNK_1106b4cb0;
      func_0x000107c613fc(&UNK_1106b4cb0,0x18,7);
      *(undefined8 *)(puVar24 + 0x10) = uVar8;
      pcStack_88 = (code *)0x10398f02c;
      pcStack_a8 = (code *)puVar11;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_1106b4cc8;
      ppcVar13 = &pcStack_a8;
      puStack_80 = puVar24;
      func_0x000107c60bc4(ppcVar13);
      puVar24 = puStack_80;
      func_0x000107c61174(uVar8);
      func_0x000107c61574(puVar24);
      func_0x000107c539ac(param_1);
      func_0x000107c60bd0(ppcVar13);
      func_0x000107c61170(puVar5);
    }
    puVar5 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar3 = *(long *)(unaff_x20 + _DAT_112fbb118);
    func_0x000107c4f7c0();
    func_0x000107c61180();
    lVar23 = lStack_1a0;
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10398b050);
      (*pcVar2)();
    }
    puVar24 = &UNK_1106b4c60;
    func_0x000107c613fc(&UNK_1106b4c60,0x18,7);
    *(undefined **)(puVar24 + 0x10) = puVar5;
    pcStack_88 = FUN_10398e380;
    pcStack_a8 = (code *)puVar11;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1106b4c78;
    ppcVar13 = &pcStack_a8;
    puStack_80 = puVar24;
    func_0x000107c60bc4(ppcVar13);
    func_0x000107c61174(puVar5);
    func_0x000107c5f808(lVar23);
    pcStack_d0 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar10 = 0x112d4af88;
    FUN_10398e3dc(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar27 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar31 = uVar27;
    func_0x0001001c7f30();
    lVar6 = lStack_220;
    lVar4 = lStack_230;
    func_0x000107c60264(lStack_230,&pcStack_d0,uVar27,uVar31,lStack_220,uVar10);
    func_0x000107c5ffb8(lVar23,lVar4,lVar3,ppcVar13);
    func_0x000107c60bd0(ppcVar13);
    func_0x000107c61170(lVar3);
    (**(code **)(lStack_228 + 8))(lVar4,lVar6);
    (**(code **)(lStack_240 + 8))(lVar23,lStack_238);
    func_0x000107c61574(puStack_80);
    puVar24 = puVar5;
    func_0x000107c43bf4(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
  }
  func_0x000107c61170(puVar5);
  return puVar24;
}



/* Entry: 10398b050; end: 10398b113; -[_TtC39WebBrowsingThirdPartyLoginAmazonHandler39WebBrowsingThirdPartyLoginAmazonHandler configureHTTPCookieStore:forLoadingURL:] */

void FUN_10398b050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar3,param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_10398984c(param_3,puVar3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10398b114; end: 10398b86f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398b114(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e0;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  lVar1 = 0;
  uStack_258 = param_3;
  uStack_250 = param_4;
  uStack_230 = param_6;
  uStack_228 = param_5;
  func_0x000107c5eea4();
  lStack_240 = *(long *)(lVar1 + -8);
  lStack_238 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_240 + 0x40));
  lVar11 = (long)&pcStack_280 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_260 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5ef5c();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ef64();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_248 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = lVar1 - extraout_x12_00;
  if ((param_2 == 0) && (param_1 != 0)) {
    uStack_270 = *(undefined8 *)(param_1 + _DAT_112fbd5b8);
    uStack_278 = ((undefined8 *)(param_1 + _DAT_112fbd5b8))[1];
    lStack_268 = lVar1;
    func_0x000107c5ef54(lVar10);
    (**(code **)(lVar15 + 0x68))
              (lVar16,*(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4houryA2EmFWC_110350d80
               ,lVar2);
    func_0x000107c5eea0(lVar11);
    func_0x000107c5ef4c(lVar1,lVar16,1,lVar11,0);
    pcStack_280 = *(code **)(lStack_240 + 8);
    (*pcStack_280)(lVar11,lStack_238);
    (**(code **)(lVar15 + 8))(lVar16,lVar2);
    (**(code **)(lVar12 + 8))(lVar10,lVar3);
    puVar4 = (undefined *)0x112d6ea08;
    func_0x0001000285a8(0x112d6ea08,&UNK_10dc2cd60);
    func_0x000107c61534();
    *(undefined8 *)(puVar4 + 0x18) = 0xe;
    *(undefined8 *)(puVar4 + 0x10) = 7;
    *(undefined8 *)(puVar4 + 0x20) = *(undefined8 *)PTR__NSHTTPCookieDomain_110345498;
    puStack_98 = (undefined *)0x2e;
    uStack_90 = 0xe100000000000000;
    func_0x000107c61174();
    func_0x000107c5fb78(uStack_258,uStack_250);
    uVar7 = uStack_278;
    puVar8 = PTR___sSSN_11034da80;
    *(undefined **)(puVar4 + 0x28) = puStack_98;
    *(undefined8 *)(puVar4 + 0x30) = uStack_90;
    uVar5 = *(undefined8 *)PTR__NSHTTPCookiePath_1103454b8;
    *(undefined **)(puVar4 + 0x40) = puVar8;
    *(undefined8 *)(puVar4 + 0x48) = uVar5;
    *(undefined8 *)(puVar4 + 0x50) = 0x2f;
    *(undefined8 *)(puVar4 + 0x58) = 0xe100000000000000;
    uVar5 = *(undefined8 *)PTR__NSHTTPCookieName_1103454a8;
    *(undefined **)(puVar4 + 0x68) = puVar8;
    *(undefined8 *)(puVar4 + 0x70) = uVar5;
    *(undefined8 *)(puVar4 + 0x78) = 0xd000000000000013;
    *(undefined8 *)(puVar4 + 0x80) = 0x800000010f17e8c0;
    uVar14 = *(undefined8 *)PTR__NSHTTPCookieValue_1103454d0;
    *(undefined **)(puVar4 + 0x90) = puVar8;
    *(undefined8 *)(puVar4 + 0x98) = uVar14;
    puVar6 = PTR__NSHTTPCookieDiscard_110345490;
    *(undefined8 *)(puVar4 + 0xa0) = uStack_270;
    *(undefined8 *)(puVar4 + 0xa8) = uStack_278;
    uVar17 = *(undefined8 *)puVar6;
    *(undefined **)(puVar4 + 0xb8) = puVar8;
    *(undefined8 *)(puVar4 + 0xc0) = uVar17;
    *(undefined8 *)(puVar4 + 200) = 0x45555254;
    *(undefined8 *)(puVar4 + 0xd0) = 0xe400000000000000;
    uVar18 = *(undefined8 *)PTR__NSHTTPCookieSecure_1103454c8;
    *(undefined **)(puVar4 + 0xe0) = puVar8;
    *(undefined8 *)(puVar4 + 0xe8) = uVar18;
    *(undefined8 *)(puVar4 + 0xf0) = 0x45555254;
    *(undefined8 *)(puVar4 + 0xf8) = 0xe400000000000000;
    uVar13 = *(undefined8 *)PTR__NSHTTPCookieSameSitePolicy_1103454c0;
    *(undefined **)(puVar4 + 0x108) = puVar8;
    *(undefined8 *)(puVar4 + 0x110) = uVar13;
    *(undefined **)(puVar4 + 0x130) = puVar8;
    *(undefined8 *)(puVar4 + 0x118) = 0x656e6f6e;
    *(undefined8 *)(puVar4 + 0x120) = 0xe400000000000000;
    func_0x000107c61174();
    func_0x000107c61174(uVar5);
    lVar10 = lStack_238;
    func_0x000107c61174(uVar14);
    func_0x000107c61434(uVar7);
    func_0x000107c61174(uVar17);
    func_0x000107c61174(uVar18);
    func_0x000107c61174(uVar13);
    uVar7 = 0x112d6ea10;
    puVar6 = puVar4;
    func_0x00010398e26c(puVar4,0x112d6ea18,&UNK_10d9307f8,0x112d6ea10,&UNK_10d9307f0);
    func_0x000107c61588(puVar4);
    lVar11 = lStack_240;
    func_0x0001000285a8(0x112d6ea10,&UNK_10d9307f0);
    func_0x000107c61408(puVar4 + 0x20,7,uVar7);
    uVar7 = 0x796c6e4f70747448;
    func_0x000107c5fadc(0x796c6e4f70747448,0xe800000000000000);
    puStack_1f8 = (undefined *)0x45555254;
    uStack_1f0 = 0xe400000000000000;
    puStack_1e0 = puVar8;
    func_0x000100102924(&puStack_1f8,&puStack_98);
    puVar4 = puVar6;
    func_0x000107c61558(puVar6);
    puStack_1f8 = puVar6;
    func_0x00010398bffc(&puStack_98,uVar7,puVar4);
    func_0x000107c61170(uVar7);
    puVar4 = puStack_1f8;
    lVar3 = lStack_248;
    lVar1 = lStack_268;
    puStack_a0 = puStack_1f8;
    FUN_10398eaf8(lStack_268,lStack_248,0x112d373d8,&UNK_10d9014c0);
    lVar12 = lVar3;
    (**(code **)(lVar11 + 0x30))(lVar3,1,lVar10);
    lVar2 = lStack_260;
    if ((int)lVar12 == 1) {
      func_0x00010398e4d0(lVar3,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      (**(code **)(lVar11 + 0x20))(lStack_260,lVar3,lVar10);
      uVar7 = *(undefined8 *)PTR__NSHTTPCookieExpires_1103454a0;
      puStack_80 = (undefined *)lVar10;
      func_0x0001000a9d90(&puStack_98);
      (**(code **)(lVar11 + 0x10))();
      uStack_218 = uStack_90;
      puStack_220 = puStack_98;
      lStack_208 = (long)puStack_80;
      uStack_210 = pcStack_88;
      if (puStack_80 == (undefined *)0x0) {
        func_0x000107c61174(uVar7);
        func_0x00010398e4d0(&puStack_220,0x112d387f8,&UNK_10d902650);
        func_0x00010398bf38(&puStack_1f8,uVar7);
        func_0x000107c61170(uVar7);
        func_0x00010398e4d0(&puStack_1f8,0x112d387f8,&UNK_10d902650);
      }
      else {
        func_0x000100102924(&puStack_220,&puStack_1f8);
        func_0x000107c61174(uVar7);
        puVar6 = puVar4;
        func_0x000107c61558(puVar4);
        puStack_220 = puVar4;
        func_0x00010398bffc(&puStack_1f8,uVar7,puVar6);
        func_0x000107c61170(uVar7);
        puStack_a0 = puStack_220;
      }
      puVar4 = puStack_a0;
      (*pcStack_280)(lVar2,lVar10);
    }
    puVar6 = PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0;
    func_0x000107c610f8();
    uVar5 = 0;
    func_0x00010129b9f4(0);
    uVar7 = 0x112d6e8c0;
    FUN_10398e3dc(0x112d6e8c0,&SUB_10129b9f4,&UNK_10d930714);
    puVar8 = puVar4;
    func_0x000107c5f9dc(puVar4,uVar5,PTR___sypN_11034f1a8 + 8,uVar7);
    func_0x000107c48194();
    func_0x000107c6142c(puVar4);
    func_0x000107c61170(puVar8);
    func_0x00010398e4d0(lVar1,0x112d373d8,&UNK_10d9014c0);
    if (puVar6 != (undefined *)0x0) {
      puVar4 = &UNK_1106b4e40;
      func_0x000107c613fc(&UNK_1106b4e40,0x18,7);
      uVar7 = uStack_230;
      *(undefined8 *)(puVar4 + 0x10) = uStack_230;
      pcStack_78 = (code *)0x10398f04c;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      pcStack_88 = (code *)&UNK_1000f6b44;
      puStack_80 = &UNK_1106b4e58;
      ppuVar9 = &puStack_98;
      puStack_70 = puVar4;
      func_0x000107c60bc4(ppuVar9);
      puVar4 = puStack_70;
      func_0x000107c61174(uVar7);
      func_0x000107c61574(puVar4);
      func_0x000107c539ac(uStack_228);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(puVar6);
      return;
    }
  }
  puVar4 = &UNK_1106b4df0;
  func_0x000107c613fc(&UNK_1106b4df0,0x20,7);
  uVar5 = uStack_228;
  uVar7 = uStack_230;
  *(undefined8 *)(puVar4 + 0x10) = uStack_230;
  *(undefined8 *)(puVar4 + 0x18) = uStack_228;
  pcStack_78 = FUN_10398e51c;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_10398b870;
  puStack_80 = &UNK_1106b4e08;
  ppuVar9 = &puStack_98;
  puStack_70 = puVar4;
  func_0x000107c60bc4(ppuVar9);
  puVar4 = puStack_70;
  func_0x000107c61174(uVar7);
  func_0x000107c615f0(uVar5);
  func_0x000107c61574(puVar4);
  func_0x000107c43ec4(uVar5);
  func_0x000107c60bd0(ppuVar9);
  return;
}



/* Entry: 10398b870; end: 10398b8cb;  */

void FUN_10398b870(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_10398e840(0);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10398b8cc; end: 10398bb3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398b8cc(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  ulong uVar5;
  long extraout_x12;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&puStack_c0 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar10 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar8 - extraout_x12;
  uVar7 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_11356fde0;
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + _DAT_11356fde0,auStack_90,0,0);
    FUN_10398eaf8(param_2 + lVar1,lVar10,0x112d36580,&UNK_10d9016d0);
    lVar1 = lVar10;
    (**(code **)(lVar12 + 0x30))(lVar10,1,lVar2);
    if ((int)lVar1 == 1) {
      func_0x000107c61170(param_2);
      func_0x00010398e4d0(lVar10,0x112d36580,&UNK_10d9016d0);
    }
    else {
      pcVar13 = *(code **)(lVar12 + 0x20);
      (*pcVar13)(lVar6,lVar10,lVar2);
      uVar11 = *(undefined8 *)(param_2 + _DAT_112fbb118);
      (**(code **)(lVar12 + 0x10))(lVar8,lVar6,lVar2);
      uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
      uVar14 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
      puVar3 = &UNK_1106b4f58;
      func_0x000107c613fc(&UNK_1106b4f58,uVar14 + lVar9,uVar5 | 7);
      *(long *)(puVar3 + 0x10) = param_2;
      *(undefined8 *)(puVar3 + 0x18) = uVar7;
      (*pcVar13)(puVar3 + uVar14,lVar8,lVar2);
      pcStack_a0 = FUN_10398e9e4;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000f6b44;
      puStack_a8 = &UNK_1106b4f70;
      ppuVar4 = &puStack_c0;
      puStack_98 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar3 = puStack_98;
      func_0x000107c61174(param_2);
      func_0x000107c61174(uVar7);
      func_0x000107c61574(puVar3);
      func_0x000107c4e524(uVar11);
      func_0x000107c60bd0(ppuVar4);
      (**(code **)(lVar12 + 8))(lVar6,lVar2);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 10398bb40; end: 10398bb9b;  */

void FUN_10398bb40(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_10398e840();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d6e9f8;
  plVar5 = (long *)&UNK_10d9307e0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10398bb9c; end: 10398bc27;  */

void FUN_10398bb9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_88 [72];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = param_1;
  func_0x000107c5faec();
  func_0x000107c6068c(auStack_88,uVar3);
  puVar2 = auStack_88;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  FUN_10398bc8c(param_1,puVar2);
  return;
}



/* Entry: 10398bc28; end: 10398bc8b;  */

void FUN_10398bc28(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8) = param_2;
  func_0x000100102924(param_3,*(long *)(param_4 + 0x38) + param_1 * 0x20);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10398bc8c);
  (*pcVar2)();
}



/* Entry: 10398bc8c; end: 10398bd83;  */

undefined1  [16] FUN_10398bc8c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = param_2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    while( true ) {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar6 * 8);
      func_0x000107c5faec();
      uVar2 = param_1;
      uVar3 = param_2;
      func_0x000107c5faec();
      if (uVar1 == uVar2 && param_2 == uVar3) break;
      uVar4 = param_2;
      func_0x000107c605b8(uVar1,param_2,uVar2,uVar3,0);
      uVar7 = (uint)uVar1;
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar3);
      if (((uVar1 & 1) != 0) ||
         (uVar6 = uVar6 + 1 & ~uVar5, param_2 = uVar4,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0))
      goto LAB_10398bd64;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar3);
    uVar7 = 1;
  }
LAB_10398bd64:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 10398bd84; end: 10398bf37;  */

ulong FUN_10398bd84(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10398be68);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10398be6c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0;
    func_0x000107c61168(PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0;
    func_0x000107c61168(PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10398e840(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10398bf38);
  (*pcVar2)();
}



/* Entry: 10398bf38; end: 10398c103;  */

void FUN_10398bf38(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  FUN_10398bb9c();
  func_0x000107c6142c(lVar2);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x00010398c104();
    }
    func_0x000107c61170(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_2 * 8));
    func_0x000100102924(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    func_0x00010398c560(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Entry: 10398c104; end: 10398c733;  */

void FUN_10398c104(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_80 [32];
  
  func_0x0001000285a8(0x112d6ea18,&UNK_10d9307f8);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c6048c();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_10398c1e8;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar10 << 6;
        uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x0001000bb420(*(long *)(lVar8 + 0x38) + uVar7 * 0x20,auStack_80);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) = uVar9;
        func_0x000100102924(auStack_80,*(long *)(lVar4 + 0x38) + uVar7 * 0x20);
        func_0x000107c61174(uVar9);
        if (uVar5 != 0) break;
LAB_10398c1e8:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10398c288);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_10398c258;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_10398c258:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 10398c734; end: 10398c74f;  */

void FUN_10398c734(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10398c750();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10398c750; end: 10398c9b3;  */

undefined * FUN_10398c750(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10398c874);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_10398bb40();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_10398e840(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10398c9b4; end: 10398c9eb;  */

void FUN_10398c9b4(undefined8 param_1)

{
  if (lRam000000011356fde8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e793970);
  return;
}



/* Entry: 10398c9ec; end: 10398cce7;  */

undefined1  [16] FUN_10398c9ec(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_120 [176];
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  ppuVar3 = &puStack_70;
  puVar15 = &stack0xfffffffffffffff0;
  func_0x000107c5edbc();
  puVar12 = param_2;
  if (param_2 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x800000010f17e900;
    if ((param_1 == (undefined8 *)0xd000000000000014) &&
       (param_2 == (undefined8 *)0x800000010f17e900)) {
      func_0x000107c6142c(0x800000010f17e900);
      param_1 = (undefined8 *)0xd000000000000014;
      puVar12 = param_2;
    }
    else {
      puVar9 = param_1;
      func_0x000107c605b8(param_1,param_2,0xd000000000000014,0x800000010f17e900,0);
      if (((ulong)puVar9 & 1) == 0) {
        uVar8 = 0xd000000000000015;
        puVar9 = (undefined8 *)0x800000010f17e920;
        uVar16 = 0x10398ca9c;
        func_0x000107c5fbb8(0xd000000000000015,0x800000010f17e920,param_1,param_2);
        if ((uVar8 & 1) == 0) {
          lVar14 = 0;
          do {
            lVar1 = lVar14 + 1;
            puVar11 = (undefined8 *)(ulong)(byte)(&UNK_10dc2ce10)[lVar14];
            puVar13 = (undefined8 *)0xe300000000000000;
            puVar7 = (undefined8 *)0x6d6f63;
            ppuVar4 = &puStack_70;
            ppuVar5 = &puStack_70;
            ppuVar6 = &puStack_70;
            switch((&UNK_10dc2ce10)[lVar14]) {
            case 0:
              break;
            default:
              puVar13 = (undefined8 *)0xe200000000000000;
            case 0x83:
            case 0x89:
            case 0x91:
            case 0xea:
              puVar7 = (undefined8 *)0x6163;
code_r0x00010398cb4c:
              break;
            case 2:
              puVar13 = (undefined8 *)0xe200000000000000;
              puVar7 = (undefined8 *)0x6561;
              break;
            case 3:
              puVar13 = (undefined8 *)0xe200000000000000;
              puVar7 = (undefined8 *)0x6e63;
            case 0x25:
              break;
            case 4:
            case 0xf5:
              puVar13 = (undefined8 *)0xe500000000000000;
            case 0xf6:
              puVar7 = (undefined8 *)0x6f63;
code_r0x00010398cb7c:
              puVar7 = (undefined8 *)((ulong)puVar7 & 0xffffffff0000ffff | 0x6a2e0000);
code_r0x00010398cb80:
              puVar7 = (undefined8 *)((ulong)puVar7 | 0x7000000000);
code_r0x00010398cb84:
              break;
            case 5:
              puVar13 = (undefined8 *)0xe500000000000000;
            case 0xe1:
              puVar7 = (undefined8 *)0x6f63;
code_r0x00010398cc00:
              puVar7 = (undefined8 *)((ulong)puVar7 & 0xffffffff0000ffff | 0x6b752e0000);
              break;
            case 6:
              puVar13 = (undefined8 *)0xe600000000000000;
              puVar7 = (undefined8 *)0x6f63;
            case 0x1a:
              puVar7 = (undefined8 *)((ulong)puVar7 & 0xffffffff0000ffff | 0x75612e6d0000);
              break;
            case 7:
              puVar13 = (undefined8 *)0xe600000000000000;
              puVar7 = (undefined8 *)0x6f63;
            case 0x22:
              puVar7 = (undefined8 *)((ulong)puVar7 & 0xffffffff0000ffff | 0x65622e6d0000);
              break;
            case 8:
            case 0x2b:
              puVar13 = (undefined8 *)0xe600000000000000;
              puVar7 = (undefined8 *)0x2e6d6f63;
            case 0x1c:
            case 0x69:
              puVar7 = (undefined8 *)((ulong)puVar7 | 0x726200000000);
              break;
            case 9:
            case 0xfd:
              puVar13 = (undefined8 *)0xe600000000000000;
            case 0xfe:
              puVar7 = (undefined8 *)0x6f63;
code_r0x00010398cb9c:
              puVar7 = (undefined8 *)((ulong)puVar7 & 0xffffffff0000ffff | 0x2e6d0000);
code_r0x00010398cba0:
              puVar7 = (undefined8 *)((ulong)puVar7 | 0x727400000000);
              break;
            case 10:
              puVar13 = (undefined8 *)0xe600000000000000;
            case 99:
              puVar7 = (undefined8 *)0x6f63;
code_r0x00010398cc4c:
              puVar7 = (undefined8 *)((ulong)puVar7 & 0xffffffff0000ffff | 0x786d2e6d0000);
              break;
            case 0xb:
            case 0xf2:
              puVar13 = (undefined8 *)0xe200000000000000;
            case 0xf3:
              puVar7 = (undefined8 *)0x6564;
code_r0x00010398cb70:
              break;
            case 0xc:
            case 0xfa:
              puVar13 = (undefined8 *)0xe200000000000000;
            case 0xfb:
              puVar7 = (undefined8 *)0x7365;
code_r0x00010398cb90:
              break;
            case 0xd:
              puVar13 = (undefined8 *)0xe200000000000000;
              puVar7 = (undefined8 *)0x6765;
            case 0x26:
              break;
            case 0xe:
            case 0xef:
              puVar13 = (undefined8 *)0xe200000000000000;
            case 0x81:
            case 0xb1:
            case 0xf0:
              puVar7 = (undefined8 *)0x7266;
code_r0x00010398cb64:
              break;
            case 0xf:
              puVar13 = (undefined8 *)0xe200000000000000;
              puVar7 = (undefined8 *)0x6e69;
            case 0x18:
              break;
            case 0x10:
            case 0xec:
              puVar13 = (undefined8 *)0xe200000000000000;
            case 0xed:
              puVar7 = (undefined8 *)0x7469;
code_r0x00010398cb58:
              break;
            case 0x11:
            case 0x1b:
              puVar13 = (undefined8 *)0xe200000000000000;
              puVar7 = (undefined8 *)0x6c6e;
              break;
            case 0x12:
            case 0x1e:
              puVar13 = (undefined8 *)0xe200000000000000;
              puVar7 = (undefined8 *)0x6c70;
              break;
            case 0x13:
            case 0x2c:
              puVar13 = (undefined8 *)0xe200000000000000;
              puVar7 = (undefined8 *)0x6173;
              break;
            case 0x14:
              puVar13 = (undefined8 *)0xe200000000000000;
              puVar7 = (undefined8 *)0x6573;
            case 0x23:
              break;
            case 0x15:
              puVar13 = (undefined8 *)0xe200000000000000;
              puVar7 = (undefined8 *)0x6773;
            case 0x19:
              break;
            case 0x16:
              puVar13 = (undefined8 *)0xe500000000000000;
              puVar7 = (undefined8 *)0x617a2e6f63;
            case 0x5e:
              break;
            case 0x17:
            case 0xeb:
              goto code_r0x00010398cb4c;
            case 0x1d:
              goto code_r0x00010398cc90;
            case 0x1f:
              goto code_r0x00010398ccc4;
            case 0x20:
              goto code_r0x00010398cc00;
            case 0x21:
              goto code_r0x00010398ccb0;
            case 0x24:
            case 0x59:
              goto code_r0x00010398cc84;
            case 0x28:
            case 0x4c:
              goto code_r0x00010398cc4c;
            case 0x29:
              goto code_r0x00010398cca4;
            case 0x2a:
              goto code_r0x00010398ccec;
            case 0x2d:
            case 0x4a:
            case 0x6e:
              goto code_r0x00010398ccd8;
            case 0x39:
              if (puVar12 == puVar11) goto code_r0x00010398cf3c;
              goto LAB_10398cf58;
            case 0x3a:
            case 0x4f:
              goto code_r0x00010398cd20;
            case 0x3b:
              goto code_r0x00010398ce4c;
            case 0x3d:
            case 0xf9:
              goto code_r0x00010398cb84;
            case 0x49:
              goto code_r0x00010398cca0;
            case 0x4b:
              goto code_r0x00010398cccc;
            case 0x4d:
            case 0x57:
            case 0x5b:
            case 0x6f:
              goto code_r0x00010398cd0c;
            case 0x4e:
            case 0x5f:
            case 0x67:
              goto code_r0x00010398cd00;
            case 0x50:
              goto code_r0x00010398cd10;
            case 0x51:
            case 0x56:
            case 0x61:
              ppuVar3 = (undefined8 **)auStack_120;
              goto code_r0x00010398ccec;
            case 0x52:
            case 0x62:
            case 0x68:
            case 0x6b:
              goto code_r0x00010398ccfc;
            case 0x53:
            case 0x60:
              goto code_r0x00010398cce0;
            case 0x54:
              goto code_r0x00010398cc94;
            case 0x55:
              goto code_r0x00010398cce4;
            case 0x58:
            case 0x6c:
              goto code_r0x00010398ccd4;
            case 0x5a:
            case 0x65:
            case 0x6a:
              goto code_r0x00010398ccc8;
            case 0x5c:
              goto code_r0x00010398cd14;
            case 0x5d:
              goto code_r0x00010398cd28;
            case 100:
              goto code_r0x00010398ccf8;
            case 0x66:
              goto code_r0x00010398cd2c;
            case 0x6d:
              goto code_r0x00010398ccf4;
            case 0x71:
            case 0x79:
            case 0xa1:
            case 0xa9:
            case 0xf1:
              goto code_r0x00010398cb64;
            case 0x85:
            case 0x86:
            case 0x87:
              goto code_r0x00010398cf40;
            case 0x88:
              goto code_r0x00010398cd40;
            case 0x9d:
code_r0x00010398cf3c:
              puVar11 = (undefined8 *)0xe300000000000000;
              goto code_r0x00010398cf40;
            case 0xb3:
            case 0xfc:
              goto code_r0x00010398cb90;
            case 0xd9:
              goto code_r0x00010398cba0;
            case 0xee:
              goto code_r0x00010398cb58;
            case 0xf4:
              goto code_r0x00010398cb70;
            case 0xf7:
              goto code_r0x00010398cb7c;
            case 0xf8:
              goto code_r0x00010398cb80;
            case 0xff:
              goto code_r0x00010398cb9c;
            }
            puStack_70 = (undefined8 *)0x612e6c6169636f73;
            puStack_68 = (undefined8 *)0xee002e6e6f7a616d;
code_r0x00010398cc84:
            func_0x000107c5fb78(puVar7,puVar13);
code_r0x00010398cc90:
            puVar7 = puVar13;
code_r0x00010398cc94:
            func_0x000107c6142c(puVar7);
            puVar7 = puStack_70;
            puVar12 = puStack_68;
            puVar13 = puStack_70;
code_r0x00010398cca0:
            puVar9 = puVar12;
            puVar12 = puVar9;
code_r0x00010398cca4:
            func_0x000107c5fbb8();
code_r0x00010398ccb0:
            if (((ulong)puVar7 & 1) != 0) {
code_r0x00010398ccd8:
              func_0x000107c6142c(param_2);
              goto code_r0x00010398cce0;
            }
            uVar16 = 0x10398ccbc;
            func_0x000107c6142c(puVar12);
            lVar14 = lVar1;
          } while (lVar1 != 0x17);
code_r0x00010398ccc4:
          puVar7 = param_2;
          goto code_r0x00010398ccc8;
        }
      }
      func_0x000107c6142c(param_2);
      param_1 = (undefined8 *)0xd000000000000014;
    }
  }
LAB_10398cab4:
  auVar17._8_8_ = puVar12;
  auVar17._0_8_ = param_1;
  return auVar17;
code_r0x00010398cce0:
  param_1 = puVar13;
code_r0x00010398cce4:
  goto LAB_10398cab4;
code_r0x00010398ccc8:
  func_0x000107c6142c(puVar7);
code_r0x00010398cccc:
  param_1 = (undefined8 *)0x0;
  param_2 = (undefined8 *)0x0;
code_r0x00010398ccd4:
  puVar12 = param_2;
  goto LAB_10398cab4;
code_r0x00010398cf40:
  if (param_2 == puVar11) {
    func_0x000107c6142c(param_2);
    uVar8 = 2;
  }
  else {
LAB_10398cf58:
    uVar8 = 0x6c7275;
    puVar9 = (undefined8 *)0xe300000000000000;
    func_0x000107c605b8(0x6c7275,0xe300000000000000,puVar12,param_2,0);
    func_0x000107c6142c(param_2);
    uVar10 = 2;
    if ((uVar8 & 1) == 0) {
      uVar10 = 3;
    }
    uVar8 = (ulong)uVar10;
  }
  auVar19._8_8_ = puVar9;
  auVar19._0_8_ = uVar8;
  return auVar19;
code_r0x00010398ccec:
  *(long *)((long)ppuVar3 + 0x70) = lVar1;
  *(undefined **)((long)ppuVar3 + 0x78) = &UNK_10dc2cde8;
  *(undefined8 *)((long)ppuVar3 + 0x80) = 0xe300000000000000;
  *(undefined8 **)((long)ppuVar3 + 0x88) = param_1;
  ppuVar4 = ppuVar3;
code_r0x00010398ccf4:
  *(undefined8 **)((long)ppuVar4 + 0x90) = puVar12;
  *(undefined8 **)((long)ppuVar4 + 0x98) = param_2;
  ppuVar5 = ppuVar4;
code_r0x00010398ccf8:
  *(undefined1 **)((long)ppuVar5 + 0xa0) = puVar15;
  *(undefined8 *)((long)ppuVar5 + 0xa8) = uVar16;
  ppuVar6 = ppuVar5;
code_r0x00010398ccfc:
  puVar15 = (undefined1 *)((long)ppuVar6 + 0xa0);
code_r0x00010398cd00:
  puVar7 = puVar9;
  FUN_10398c9ec();
  if (puVar7 == (undefined8 *)0x0) {
    param_2 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0x0;
code_r0x00010398cd40:
  }
  else {
code_r0x00010398cd0c:
    func_0x000107c6142c();
code_r0x00010398cd10:
    puVar11 = (undefined8 *)0xe000000000000000;
code_r0x00010398cd14:
    *(undefined8 *)(puVar15 + -0x40) = 0;
    *(undefined8 **)(puVar15 + -0x38) = puVar11;
    func_0x000107c5eefc();
    puVar11 = (undefined8 *)puVar7[2];
code_r0x00010398cd20:
    if (puVar11 == (undefined8 *)0x0) {
      param_2 = (undefined8 *)0xe500000000000000;
      param_1 = (undefined8 *)0x53552d6e65;
    }
    else {
      param_1 = (undefined8 *)puVar7[4];
      param_2 = (undefined8 *)puVar7[5];
code_r0x00010398cd28:
code_r0x00010398cd2c:
      func_0x000107c61434(param_2);
    }
    func_0x000107c6142c();
    func_0x000107c5fb78(param_1,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c5fb78(0x2e303d713b6e652c,0xe900000000000039);
    uVar16 = *(undefined8 *)(puVar15 + -0x40);
    uVar2 = *(undefined8 *)(puVar15 + -0x38);
    puVar12 = (undefined8 *)0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61534();
    puVar12[3] = 4;
    puVar12[2] = 2;
    puVar7 = puVar12 + 4;
    *puVar7 = 0x4c2d747065636341;
    puVar12[5] = 0xef65676175676e61;
    puVar12[6] = uVar16;
    puVar12[7] = uVar2;
    puVar12[8] = 0xd000000000000019;
    puVar12[9] = 0x800000010f17e940;
    puVar12[10] = 0x2e302e302e373231;
    puVar12[0xb] = 0xe900000000000031;
    param_2 = puVar12;
    func_0x0001001830b8();
    func_0x000107c61588(puVar12);
    func_0x0001000285a8(0x112d38308,&UNK_10d902040);
code_r0x00010398ce4c:
    puVar9 = (undefined8 *)0x2;
    func_0x000107c61408(puVar7,2);
  }
  auVar18._8_8_ = puVar9;
  auVar18._0_8_ = param_2;
  return auVar18;
}



/* Entry: 10398cce8; end: 10398ce6f;  */

long FUN_10398cce8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_10398c9ec();
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c6142c();
    func_0x000107c5eefc();
    if (*(long *)(param_2 + 0x10) == 0) {
      uVar3 = 0xe500000000000000;
      uVar4 = 0x53552d6e65;
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      uVar3 = *(undefined8 *)(param_2 + 0x28);
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6142c();
    func_0x000107c5fb78(uVar4,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x000107c5fb78(0x2e303d713b6e652c,0xe900000000000039);
    lVar1 = 0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 4;
    *(undefined8 *)(lVar1 + 0x10) = 2;
    *(undefined8 *)(lVar1 + 0x20) = 0x4c2d747065636341;
    *(undefined8 *)(lVar1 + 0x28) = 0xef65676175676e61;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0xe000000000000000;
    *(undefined8 *)(lVar1 + 0x40) = 0xd000000000000019;
    *(undefined8 *)(lVar1 + 0x48) = 0x800000010f17e940;
    *(undefined8 *)(lVar1 + 0x50) = 0x2e302e302e373231;
    *(undefined8 *)(lVar1 + 0x58) = 0xe900000000000031;
    lVar2 = lVar1;
    func_0x0001001830b8();
    func_0x000107c61588(lVar1);
    uVar4 = 0x112d38308;
    func_0x0001000285a8(0x112d38308,&UNK_10d902040);
    func_0x000107c61408((undefined8 *)(lVar1 + 0x20),2,uVar4);
  }
  return lVar2;
}



/* Entry: 10398ce70; end: 10398cf8f;  */

undefined4 FUN_10398ce70(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x436567617373656d;
  if ((param_1 == 0x436567617373656d && param_2 == -0x14ffffffff9a9b91) ||
     (func_0x000107c605b8(0x436567617373656d,0xeb0000000065646f,param_1,param_2,0), (uVar1 & 1) != 0
     )) {
    func_0x000107c6142c(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x446567617373656d;
    if (((param_1 == 0x446567617373656d) && (param_2 == -0x11ff8c93969e8b9b)) ||
       (func_0x000107c605b8(0x446567617373656d,0xee00736c69617465,param_1,param_2,0),
       (uVar1 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar2 = 1;
    }
    else if ((param_1 == 0x6c7275) && (param_2 == -0x1d00000000000000)) {
      func_0x000107c6142c(0xe300000000000000);
      uVar2 = 2;
    }
    else {
      uVar1 = 0x6c7275;
      func_0x000107c605b8(0x6c7275,0xe300000000000000,param_1,param_2,0);
      func_0x000107c6142c(param_2);
      uVar2 = 2;
      if ((uVar1 & 1) == 0) {
        uVar2 = 3;
      }
    }
  }
  return uVar2;
}



/* Entry: 10398cf90; end: 10398d16b;  */

/* WARNING: Removing unreachable block (ram,0x00010398d104) */
/* WARNING: Removing unreachable block (ram,0x00010398d0c4) */
/* WARNING: Removing unreachable block (ram,0x00010398d114) */
/* WARNING: Removing unreachable block (ram,0x00010398d128) */
/* WARNING: Removing unreachable block (ram,0x00010398d05c) */

void FUN_10398cf90(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long unaff_x21;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112fbb198;
  func_0x0001000285a8(0x112fbb198,&UNK_10dc2ce78);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_10398ed74();
  func_0x000107c606e0(auStack_80 + -extraout_x8,&UNK_1106b50a0,&UNK_1106b50a0,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar5 = &uStack_51;
    lVar4 = lVar3;
    func_0x000107c604f4();
    uStack_52 = 1;
    puVar6 = &uStack_52;
    lVar7 = lVar3;
    puStack_68 = puVar5;
    func_0x000107c604d4();
    uStack_53 = 2;
    puVar5 = &uStack_53;
    lVar8 = lVar3;
    puStack_78 = puVar6;
    lStack_70 = lVar7;
    func_0x000107c604d4();
    (**(code **)(lVar9 + 8))(auStack_80 + -extraout_x8,lVar3);
    FUN_10398edb4(param_2);
    *param_1 = puStack_68;
    param_1[1] = lVar4;
    param_1[2] = puStack_78;
    param_1[3] = lStack_70;
    param_1[4] = puVar5;
    param_1[5] = lVar8;
  }
  else {
    FUN_10398edb4(param_2);
  }
  return;
}



/* Entry: 10398d16c; end: 10398db5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398d16c(undefined *param_1,undefined *param_2)

{
  byte *pbVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  code *pcVar8;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar2 = &puStack_70;
  puVar19 = &stack0xfffffffffffffff0;
  uVar20 = 0x10398d194;
  puVar10 = param_1;
  func_0x000107c5edbc();
  if (param_2 != (undefined *)0x0) {
    lVar13 = 0;
    puVar16 = (undefined1 *)0x2e6e6f7a616d61;
    puVar15 = &UNK_10dc2cd3e;
    puVar5 = param_2;
LAB_10398d214:
code_r0x00010398d218:
code_r0x00010398d21c:
    if (lVar13 != 0x17) {
code_r0x00010398d220:
      puVar7 = &UNK_10dc2cde8 + lVar13;
      goto code_r0x00010398d224;
    }
LAB_10398d380:
    puVar3 = param_2;
code_r0x00010398d384:
    func_0x000107c6142c(puVar3);
code_r0x00010398d388:
  }
code_r0x00010398d394:
code_r0x00010398d398:
code_r0x00010398d39c:
code_r0x00010398d3a8:
code_r0x00010398d3b0:
  return;
code_r0x00010398d224:
  pbVar1 = puVar7 + 0x28;
  puVar7 = (undefined *)(ulong)*pbVar1;
code_r0x00010398d228:
  puVar12 = (undefined *)0xe300000000000000;
  puVar3 = (undefined *)0x6d6f63;
  lVar11 = 1;
  puVar6 = param_1;
  puVar14 = puVar10;
  switch(*pbVar1) {
  case 0:
  case 0xd4:
    break;
  case 1:
    puVar12 = (undefined *)0xe200000000000000;
    puVar3 = (undefined *)0x6163;
    break;
  case 2:
    puVar12 = (undefined *)0xe200000000000000;
    puVar3 = (undefined *)0x6561;
    break;
  case 3:
    puVar12 = (undefined *)0xe200000000000000;
    puVar3 = (undefined *)0x6e63;
    break;
  case 4:
    puVar12 = (undefined *)0xe500000000000000;
    puVar3 = (undefined *)0x706a2e6f63;
    break;
  case 5:
  case 0x52:
    puVar12 = (undefined *)0xe500000000000000;
    puVar3 = (undefined *)0x6b752e6f63;
  case 0x47:
    break;
  case 6:
    puVar12 = (undefined *)0xe600000000000000;
  case 0x3d:
    puVar3 = (undefined *)0x75612e6d6f63;
code_r0x00010398d328:
    break;
  case 7:
    puVar12 = (undefined *)0xe600000000000000;
    puVar3 = (undefined *)0x65622e6d6f63;
  case 0x4c:
  case 0xf2:
    break;
  case 8:
    puVar12 = (undefined *)0xe600000000000000;
  case 0x43:
  case 0x4e:
  case 0x53:
  case 0xf4:
  case 0xfc:
    puVar3 = (undefined *)0x6f63;
code_r0x00010398d354:
    puVar3 = (undefined *)((ulong)puVar3 & 0xffffffff0000ffff | 0x72622e6d0000);
code_r0x00010398d35c:
    break;
  case 9:
    puVar12 = (undefined *)0xe600000000000000;
    puVar3 = (undefined *)0x72742e6d6f63;
    break;
  case 10:
    puVar12 = (undefined *)0xe600000000000000;
    puVar3 = (undefined *)0x786d2e6d6f63;
    break;
  case 0xb:
    puVar12 = (undefined *)0xe200000000000000;
    puVar3 = (undefined *)0x6564;
    break;
  case 0xc:
    puVar12 = (undefined *)0xe200000000000000;
    puVar3 = (undefined *)0x7365;
  case 0xca:
    break;
  case 0xd:
  case 0x42:
    puVar12 = (undefined *)0xe200000000000000;
    puVar3 = (undefined *)0x6765;
    break;
  case 0xe:
    puVar12 = (undefined *)0xe200000000000000;
    puVar3 = (undefined *)0x7266;
    break;
  case 0xf:
    puVar12 = (undefined *)0xe200000000000000;
    puVar3 = (undefined *)0x6e69;
    break;
  default:
    puVar12 = (undefined *)0xe200000000000000;
  case 0x6c:
  case 0x72:
  case 0x7a:
  case 0xd3:
    puVar3 = (undefined *)0x7469;
    break;
  case 0x11:
  case 0x35:
  case 0xff:
    puVar12 = (undefined *)0xe200000000000000;
    puVar3 = (undefined *)0x6c6e;
    break;
  case 0x12:
    puVar12 = (undefined *)0xe200000000000000;
    puVar3 = (undefined *)0x6c70;
    break;
  case 0x13:
    puVar12 = (undefined *)0xe200000000000000;
    puVar3 = (undefined *)0x6173;
  case 0x56:
    break;
  case 0x14:
    puVar12 = (undefined *)0xe200000000000000;
    puVar3 = (undefined *)0x6573;
    break;
  case 0x15:
  case 0xf8:
    puVar12 = (undefined *)0xe200000000000000;
    puVar3 = (undefined *)0x6773;
    break;
  case 0x16:
  case 0x33:
  case 0x57:
  case 0xf9:
  case 0xfe:
    puVar12 = (undefined *)0xe500000000000000;
    puVar3 = (undefined *)0x6f63;
  case 0x3c:
  case 0x49:
  case 0xfd:
    puVar3 = (undefined *)((ulong)puVar3 & 0xffffffff0000ffff | 0x7a2e0000);
code_r0x00010398d36c:
    puVar3 = (undefined *)((ulong)puVar3 | 0x6100000000);
code_r0x00010398d370:
    break;
  case 0x22:
    goto code_r0x00010398d5bc;
  case 0x23:
  case 0x38:
    goto code_r0x00010398d3a8;
  case 0x24:
    goto code_r0x00010398d4d4;
  case 0x26:
  case 0xe2:
    goto code_r0x00010398d20c;
  case 0x32:
    goto code_r0x00010398d328;
  case 0x34:
    goto code_r0x00010398d354;
  case 0x36:
  case 0x40:
  case 0x44:
  case 0x58:
    goto code_r0x00010398d394;
  case 0x37:
  case 0x48:
  case 0x50:
  case 0xf6:
    goto code_r0x00010398d388;
  case 0x39:
  case 0xfa:
  case 0xfb:
    goto code_r0x00010398d398;
  case 0x3a:
  case 0x3f:
  case 0x4a:
    goto code_r0x00010398d370;
  case 0x3b:
  case 0x4b:
  case 0x51:
  case 0x54:
  case 0xf7:
    goto code_r0x00010398d384;
  case 0x3e:
    goto code_r0x00010398d36c;
  case 0x41:
  case 0x55:
    goto code_r0x00010398d35c;
  case 0x45:
    goto code_r0x00010398d39c;
  case 0x46:
    goto code_r0x00010398d3b0;
  case 0x4d:
  case 0xf3:
    goto LAB_10398d380;
  case 0x4f:
  case 0xf5:
    ppuVar2 = &puStack_d0;
    puStack_d0 = &UNK_10dc2cd3e;
    uStack_c8 = 0xe700000000000000;
    uStack_c0 = 0x2e6e6f7a616d61;
    puStack_b8 = &UNK_10dc2cde8;
    uStack_a8 = 0xe300000000000000;
    uStack_a0 = 1;
    lStack_b0 = lVar13;
    puStack_98 = puVar10;
    puStack_90 = param_1;
    puStack_88 = param_2;
  case 0x71:
    *(undefined1 **)((long)ppuVar2 + 0x50) = puVar19;
    *(undefined8 *)((long)ppuVar2 + 0x58) = uVar20;
    puVar19 = (undefined1 *)((long)ppuVar2 + 0x50);
    lVar13 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar16 = (undefined1 *)((long)ppuVar2 + (-0x50 - extraout_x8));
    param_2 = (undefined *)0x0;
    func_0x000107c5ede0();
    lVar11 = *(long *)(param_2 + -8);
    puVar12 = *(undefined **)(lVar11 + 0x40);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar18 = (long)puVar16 - ((ulong)(puVar12 + 0xf) & 0xfffffffffffffff0);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar14 = (undefined *)(lVar18 - extraout_x12);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar13 = (long)puVar14 - extraout_x12_00;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar10 = (undefined *)(lVar13 - extraout_x12_01);
    if (puVar5 != (undefined *)0x0) {
      func_0x000107c5edd0(puVar16,0x6d6f63);
      puVar4 = puVar16;
      (**(code **)(lVar11 + 0x30))(puVar16,1,param_2);
      if ((int)puVar4 == 1) {
code_r0x00010398d4d4:
        func_0x00010398e4d0(puVar16,0x112d36580,&UNK_10d9016d0);
      }
      else {
        pcVar8 = *(code **)(lVar11 + 0x20);
        *(long *)((long)ppuVar2 + -0x48) = lVar18;
        *(code **)((long)ppuVar2 + -0x40) = pcVar8;
        puVar15 = puVar14;
        (*pcVar8)(puVar14,puVar16,param_2);
        func_0x000107c5ed90();
        puVar5 = param_1;
        func_0x000107c49a10();
        func_0x000107c61170(puVar15);
        if ((((ulong)puVar5 & 1) == 0) &&
           (puVar15 = puVar14, FUN_10398d16c(), ((ulong)puVar15 & 1) == 0)) {
          pcVar8 = *(code **)(lVar11 + 8);
        }
        else {
          pcVar8 = *(code **)((long)ppuVar2 + -0x40);
          (*pcVar8)(lVar13,puVar14,param_2);
          (*pcVar8)(puVar10,lVar13,param_2);
          puVar14 = puVar10;
          if ((param_1[_DAT_112fbb108] & 1) == 0) {
            param_1[_DAT_112fbb108] = 1;
            func_0x0001000d224c((undefined1 *)((long)ppuVar2 + -8));
            puVar15 = *(undefined **)((long)ppuVar2 + -8);
            puVar6 = puVar15;
            func_0x000107c43194(puVar15);
            func_0x000107c61180();
            func_0x000107c615e8(puVar15);
            puVar3 = &UNK_1106b4ee0;
            puVar15 = param_1;
code_r0x00010398d5bc:
code_r0x00010398d5c4:
            func_0x000107c613fc();
            puVar14 = puVar10;
code_r0x00010398d5c8:
            func_0x000107c61614(puVar3 + 0x10,puVar15);
            uVar20 = *(undefined8 *)(puVar19 + -0x98);
            (**(code **)(lVar11 + 0x10))(uVar20,puVar14,param_2);
            uVar9 = (ulong)*(byte *)(lVar11 + 0x50);
            uVar17 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
            puVar10 = &UNK_1106b4f08;
            func_0x000107c613fc(&UNK_1106b4f08,puVar12 + uVar17,uVar9 | 7);
            *(undefined **)(puVar10 + 0x10) = puVar3;
            (**(code **)(puVar19 + -0x90))(puVar10 + uVar17,uVar20,param_2);
            *(code **)(puVar19 + -0x68) = FUN_10398e8cc;
            *(undefined **)(puVar19 + -0x60) = puVar10;
            *(undefined **)(puVar19 + -0x88) = PTR___NSConcreteStackBlock_11034bd00;
            *(undefined8 *)(puVar19 + -0x80) = 0x42000000;
            *(undefined **)(puVar19 + -0x78) = &UNK_101c871e8;
            *(undefined **)(puVar19 + -0x70) = &UNK_1106b4f20;
            puVar16 = puVar19 + -0x88;
            func_0x000107c60bc4(puVar16);
            func_0x000107c61574(*(undefined8 *)(puVar19 + -0x60));
            func_0x000107c5dc64(puVar6);
            func_0x000107c60bd0(puVar16);
            func_0x000107c61170(puVar6);
          }
          pcVar8 = *(code **)(lVar11 + 8);
        }
        (*pcVar8)(puVar14,param_2);
      }
    }
    return;
  case 0x5a:
  case 0x62:
  case 0x8a:
  case 0x92:
  case 0xda:
    goto code_r0x00010398d1ec;
  case 0x6a:
  case 0x9a:
  case 0xd9:
    goto code_r0x00010398d1e8;
  case 0x6e:
  case 0x6f:
  case 0x70:
    goto code_r0x00010398d5c8;
  case 0x86:
    goto code_r0x00010398d5c4;
  case 0x9c:
  case 0xe5:
    goto code_r0x00010398d218;
  case 0xc2:
    goto code_r0x00010398d228;
  case 0xd5:
    goto code_r0x00010398d1d8;
  case 0xd6:
    goto code_r0x00010398d1dc;
  case 0xd7:
    goto code_r0x00010398d1e0;
  case 0xd8:
    goto code_r0x00010398d1e4;
  case 0xdb:
    goto code_r0x00010398d1f0;
  case 0xdc:
    goto code_r0x00010398d1f4;
  case 0xdd:
    goto code_r0x00010398d1f8;
  case 0xde:
    goto code_r0x00010398d1fc;
  case 0xdf:
    goto code_r0x00010398d200;
  case 0xe0:
    goto code_r0x00010398d204;
  case 0xe1:
    goto code_r0x00010398d208;
  case 0xe3:
    goto code_r0x00010398d210;
  case 0xe4:
    goto LAB_10398d214;
  case 0xe6:
    goto code_r0x00010398d21c;
  case 0xe7:
    goto code_r0x00010398d220;
  case 0xe8:
    goto code_r0x00010398d224;
  }
  puStack_70 = (undefined *)0x2e6e6f7a616d61;
  puStack_68 = (undefined *)0xe700000000000000;
code_r0x00010398d1d8:
code_r0x00010398d1dc:
code_r0x00010398d1e0:
  func_0x000107c5fb78(puVar3);
code_r0x00010398d1e4:
  puVar3 = puVar12;
code_r0x00010398d1e8:
  func_0x000107c6142c(puVar3);
code_r0x00010398d1ec:
  puVar3 = puStack_70;
  param_1 = puStack_68;
code_r0x00010398d1f0:
  puVar5 = param_1;
  param_1 = puVar5;
code_r0x00010398d1f4:
code_r0x00010398d1f8:
code_r0x00010398d1fc:
  func_0x000107c5fbb8();
code_r0x00010398d200:
  puVar12 = puVar3;
code_r0x00010398d204:
  puVar3 = param_1;
  param_1 = puVar3;
code_r0x00010398d208:
  uVar20 = 0x10398d20c;
  func_0x000107c6142c(puVar3);
code_r0x00010398d20c:
  lVar13 = lVar13 + 1;
code_r0x00010398d210:
  if (((ulong)puVar12 & 1) != 0) goto LAB_10398d380;
  goto LAB_10398d214;
}



/* Entry: 10398db60; end: 10398de37;  */

void FUN_10398db60(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  ulong unaff_x20;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  code *pcVar13;
  long lVar14;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  uVar10 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if (param_2 != 0) {
    func_0x000107c5edd0(puVar12,param_1);
    puVar2 = puVar12;
    (**(code **)(lVar14 + 0x30))(puVar12,1,lVar1);
    if ((int)puVar2 == 1) {
      func_0x00010398e4d0(puVar12,0x112d36580,&UNK_10d9016d0);
    }
    else {
      pcVar13 = *(code **)(lVar14 + 0x20);
      uVar3 = uVar10;
      (*pcVar13)(uVar10,puVar12,lVar1);
      func_0x000107c5ed90();
      func_0x000107c49a10();
      func_0x000107c61170(uVar3);
      if (((unaff_x20 & 1) == 0) && (uVar3 = uVar10, FUN_10398d16c(), (uVar3 & 1) == 0)) {
        pcVar13 = *(code **)(lVar14 + 8);
      }
      else {
        (*pcVar13)(lVar11,uVar10,lVar1);
        (*pcVar13)(lVar11 - extraout_x12_00,lVar11,lVar1);
        puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x000107c61168();
        puVar5 = puVar4;
        func_0x000107c5a9c4();
        func_0x000107c61180();
        puVar6 = puVar5;
        func_0x000107c5ed90();
        puVar7 = puVar5;
        func_0x000107c3f3f4();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar6);
        if ((int)puVar7 != 0) {
          func_0x000107c5a9c4(puVar4);
          func_0x000107c61180();
          puVar5 = puVar4;
          func_0x000107c5ed90();
          puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x00010398e26c(PTR___swiftEmptyArrayStorage_11034f1c8,0x112d377b0,&UNK_10d913200,
                              0x112d377b8,&UNK_10d9016f0);
          uVar8 = 0;
          func_0x000100dfa6ec(0);
          uVar9 = 0x112d377a8;
          FUN_10398e3dc(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
          puVar7 = puVar6;
          func_0x000107c5f9dc(puVar6,uVar8,PTR___sypN_11034f1a8 + 8,uVar9);
          func_0x000107c6142c(puVar6);
          func_0x000107c4de70(puVar4);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar7);
        }
        pcVar13 = *(code **)(lVar14 + 8);
        uVar10 = lVar11 - extraout_x12_00;
      }
      (*pcVar13)(uVar10,lVar1);
    }
  }
  return;
}



/* Entry: 10398de38; end: 10398e37f;  */

/* WARNING: Removing unreachable block (ram,0x00010398e00c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398de38(ulong param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 auStack_b0 [2];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5fb10();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)auStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar7 = param_1;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  uVar6 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  if ((uVar6 == 0xd000000000000022) && (param_2 == -0x7ffffffef0e817b0)) {
    func_0x000107c6142c(0x800000010f17e850);
  }
  else {
    func_0x000107c605b8(uVar6,param_2,0xd000000000000022,0x800000010f17e850,0);
    func_0x000107c6142c(param_2);
    if ((uVar6 & 1) == 0) {
      return;
    }
  }
  func_0x000107c3eb80(param_1);
  func_0x000107c61180();
  func_0x000107c60234(&lStack_a0);
  func_0x000107c615e8(param_1);
  plVar2 = &lStack_70;
  func_0x000107c6147c(plVar2,&lStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar2 & 1) == 0) {
    return;
  }
  lStack_a0 = lStack_70;
  lStack_98 = lStack_68;
  func_0x000107c5fb04(lVar8);
  func_0x000100e8b654();
  uVar7 = 0;
  lVar3 = lVar8;
  func_0x000107c60214(lVar8,0,PTR___sSSN_11034da80,plVar2);
  (**(code **)(lVar9 + 8))(lVar8,lVar1);
  func_0x000107c6142c(lStack_68);
  if (0xe < uVar7 >> 0x3c) {
    return;
  }
  uVar4 = 0;
  func_0x000107c5eb24();
  func_0x000107c613fc();
  func_0x000107c5eb20();
  uVar5 = uVar4;
  FUN_10398e88c();
  func_0x000107c5eb1c(&lStack_a0,&UNK_1106b5000,lVar3,uVar7,&UNK_1106b5000,uVar5);
  uVar6 = 0;
  func_0x000107c61574(uVar4);
  lVar8 = lStack_98;
  lVar1 = lStack_a0;
  auStack_b0[0] = uStack_88;
  if (((lStack_a0 == 0x5f48534552464552) && (lStack_98 == -0x12ffffb1bab4b0ac)) ||
     (func_0x000107c605b8(0x5f48534552464552,0xed00004e454b4f54,lStack_a0,lStack_98,0),
     (uVar6 & 1) != 0)) {
    func_0x00010398d3b4(uStack_80,uStack_78);
  }
  else {
    uVar6 = 0x49544e4548545541;
    if (((lVar1 == 0x49544e4548545541) && (lVar8 == -0x13ffffffbaabbebd)) ||
       (func_0x000107c605b8(0x49544e4548545541,0xec00000045544143,lVar1,lVar8,0), (uVar6 & 1) != 0))
    {
      func_0x00010398d6dc(uStack_80,uStack_78);
    }
    else {
      uVar6 = 0;
      if (((lVar1 == 0x565f44414f4c4552) && (lVar8 == -0x14ffffffffa8bab7)) ||
         (func_0x000107c605b8(0x565f44414f4c4552,0xeb00000000574549,lVar1,lVar8,0), (uVar6 & 1) != 0
         )) {
        func_0x00010398d944(uStack_80,uStack_78);
      }
      else {
        uVar6 = 0x49565f45534f4c43;
        if (((lVar1 == 0x49565f45534f4c43) && (lVar8 == -0x15ffffffffffa8bb)) ||
           (func_0x000107c605b8(0x49565f45534f4c43,0xea00000000005745,lVar1,lVar8,0),
           (uVar6 & 1) != 0)) {
          lVar1 = _DAT_11380c048;
          func_0x000107c61428(unaff_x20 + _DAT_11380c048,&lStack_a0,0,0);
          lVar1 = unaff_x20 + lVar1;
          func_0x000107c61618();
          if (lVar1 != 0) {
            func_0x000107c42020();
            func_0x0001000b44c0(lVar3,uVar7);
            func_0x000107c615e8(lVar1);
            goto LAB_10398e0ac;
          }
        }
        else {
          if ((lVar1 != -0x2fffffffffffffee) || (lVar8 != -0x7ffffffef0e81720)) {
            uVar6 = 0;
            func_0x000107c605b8(0xd000000000000012,0x800000010f17e8e0,lVar1,lVar8,0);
            if ((uVar6 & 1) == 0) goto LAB_10398e0a0;
          }
          FUN_10398db60(uStack_80,uStack_78);
        }
      }
    }
  }
LAB_10398e0a0:
  func_0x0001000b44c0(lVar3,uVar7);
LAB_10398e0ac:
  func_0x000107c6142c(lVar8);
  func_0x000107c6142c(auStack_b0[0]);
  func_0x000107c6142c(uStack_78);
  return;
}



/* Entry: 10398e380; end: 10398e3bf;  */

void FUN_10398e380(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNull_1126aef28);
  func_0x000107c453e4();
  func_0x000107c3fefc(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10398e3c0; end: 10398e3db;  */

void FUN_10398e3c0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10398e3dc; end: 10398e41b;  */

void FUN_10398e3dc(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10398e41c; end: 10398e423;  */

void FUN_10398e41c(void)

{
  if (lRam000000011356fde8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e793970);
  return;
}



/* Entry: 10398e424; end: 10398e50f;  */

void FUN_10398e424(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_68 = PTR___sBOWV_11034d658 + 0x40;
  puStack_60 = PTR___sBoWV_11034d678 + 0x40;
  puStack_50 = &UNK_10dc2cd98;
  puStack_40 = &UNK_10dc2cdb0;
  lVar1 = 0x13f;
  puStack_58 = puStack_60;
  puStack_48 = puStack_60;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dc2cdc8;
    puStack_28 = &UNK_10dc2cdc8;
    func_0x000107c61630(param_1,0x100,9,&puStack_68,param_1 + 0x50);
  }
  return;
}



/* Entry: 10398e510; end: 10398e51b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398e510(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e0;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  uStack_258 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_250 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_230 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = 0;
  func_0x000107c5eea4();
  lStack_240 = *(long *)(lVar1 + -8);
  lStack_238 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_240 + 0x40));
  lVar11 = (long)&pcStack_280 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_260 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5ef5c();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ef64();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_248 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = lVar1 - extraout_x12_00;
  if ((param_2 == 0) && (param_1 != 0)) {
    uStack_270 = *(undefined8 *)(param_1 + _DAT_112fbd5b8);
    uStack_278 = ((undefined8 *)(param_1 + _DAT_112fbd5b8))[1];
    lStack_268 = lVar1;
    func_0x000107c5ef54(lVar10);
    (**(code **)(lVar15 + 0x68))
              (lVar16,*(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4houryA2EmFWC_110350d80
               ,lVar2);
    func_0x000107c5eea0(lVar11);
    func_0x000107c5ef4c(lVar1,lVar16,1,lVar11,0);
    pcStack_280 = *(code **)(lStack_240 + 8);
    (*pcStack_280)(lVar11,lStack_238);
    (**(code **)(lVar15 + 8))(lVar16,lVar2);
    (**(code **)(lVar12 + 8))(lVar10,lVar3);
    puVar4 = (undefined *)0x112d6ea08;
    func_0x0001000285a8(0x112d6ea08,&UNK_10dc2cd60);
    func_0x000107c61534();
    *(undefined8 *)(puVar4 + 0x18) = 0xe;
    *(undefined8 *)(puVar4 + 0x10) = 7;
    *(undefined8 *)(puVar4 + 0x20) = *(undefined8 *)PTR__NSHTTPCookieDomain_110345498;
    puStack_98 = (undefined *)0x2e;
    uStack_90 = 0xe100000000000000;
    func_0x000107c61174();
    func_0x000107c5fb78(uStack_258,uStack_250);
    uVar7 = uStack_278;
    puVar8 = PTR___sSSN_11034da80;
    *(undefined **)(puVar4 + 0x28) = puStack_98;
    *(undefined8 *)(puVar4 + 0x30) = uStack_90;
    uVar5 = *(undefined8 *)PTR__NSHTTPCookiePath_1103454b8;
    *(undefined **)(puVar4 + 0x40) = puVar8;
    *(undefined8 *)(puVar4 + 0x48) = uVar5;
    *(undefined8 *)(puVar4 + 0x50) = 0x2f;
    *(undefined8 *)(puVar4 + 0x58) = 0xe100000000000000;
    uVar5 = *(undefined8 *)PTR__NSHTTPCookieName_1103454a8;
    *(undefined **)(puVar4 + 0x68) = puVar8;
    *(undefined8 *)(puVar4 + 0x70) = uVar5;
    *(undefined8 *)(puVar4 + 0x78) = 0xd000000000000013;
    *(undefined8 *)(puVar4 + 0x80) = 0x800000010f17e8c0;
    uVar14 = *(undefined8 *)PTR__NSHTTPCookieValue_1103454d0;
    *(undefined **)(puVar4 + 0x90) = puVar8;
    *(undefined8 *)(puVar4 + 0x98) = uVar14;
    puVar6 = PTR__NSHTTPCookieDiscard_110345490;
    *(undefined8 *)(puVar4 + 0xa0) = uStack_270;
    *(undefined8 *)(puVar4 + 0xa8) = uStack_278;
    uVar17 = *(undefined8 *)puVar6;
    *(undefined **)(puVar4 + 0xb8) = puVar8;
    *(undefined8 *)(puVar4 + 0xc0) = uVar17;
    *(undefined8 *)(puVar4 + 200) = 0x45555254;
    *(undefined8 *)(puVar4 + 0xd0) = 0xe400000000000000;
    uVar18 = *(undefined8 *)PTR__NSHTTPCookieSecure_1103454c8;
    *(undefined **)(puVar4 + 0xe0) = puVar8;
    *(undefined8 *)(puVar4 + 0xe8) = uVar18;
    *(undefined8 *)(puVar4 + 0xf0) = 0x45555254;
    *(undefined8 *)(puVar4 + 0xf8) = 0xe400000000000000;
    uVar13 = *(undefined8 *)PTR__NSHTTPCookieSameSitePolicy_1103454c0;
    *(undefined **)(puVar4 + 0x108) = puVar8;
    *(undefined8 *)(puVar4 + 0x110) = uVar13;
    *(undefined **)(puVar4 + 0x130) = puVar8;
    *(undefined8 *)(puVar4 + 0x118) = 0x656e6f6e;
    *(undefined8 *)(puVar4 + 0x120) = 0xe400000000000000;
    func_0x000107c61174();
    func_0x000107c61174(uVar5);
    lVar10 = lStack_238;
    func_0x000107c61174(uVar14);
    func_0x000107c61434(uVar7);
    func_0x000107c61174(uVar17);
    func_0x000107c61174(uVar18);
    func_0x000107c61174(uVar13);
    uVar7 = 0x112d6ea10;
    puVar6 = puVar4;
    func_0x00010398e26c(puVar4,0x112d6ea18,&UNK_10d9307f8,0x112d6ea10,&UNK_10d9307f0);
    func_0x000107c61588(puVar4);
    lVar11 = lStack_240;
    func_0x0001000285a8(0x112d6ea10,&UNK_10d9307f0);
    func_0x000107c61408(puVar4 + 0x20,7,uVar7);
    uVar7 = 0x796c6e4f70747448;
    func_0x000107c5fadc(0x796c6e4f70747448,0xe800000000000000);
    puStack_1f8 = (undefined *)0x45555254;
    uStack_1f0 = 0xe400000000000000;
    puStack_1e0 = puVar8;
    func_0x000100102924(&puStack_1f8,&puStack_98);
    puVar4 = puVar6;
    func_0x000107c61558(puVar6);
    puStack_1f8 = puVar6;
    func_0x00010398bffc(&puStack_98,uVar7,puVar4);
    func_0x000107c61170(uVar7);
    puVar4 = puStack_1f8;
    lVar3 = lStack_248;
    lVar1 = lStack_268;
    puStack_a0 = puStack_1f8;
    FUN_10398eaf8(lStack_268,lStack_248,0x112d373d8,&UNK_10d9014c0);
    lVar12 = lVar3;
    (**(code **)(lVar11 + 0x30))(lVar3,1,lVar10);
    lVar2 = lStack_260;
    if ((int)lVar12 == 1) {
      func_0x00010398e4d0(lVar3,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      (**(code **)(lVar11 + 0x20))(lStack_260,lVar3,lVar10);
      uVar7 = *(undefined8 *)PTR__NSHTTPCookieExpires_1103454a0;
      puStack_80 = (undefined *)lVar10;
      func_0x0001000a9d90(&puStack_98);
      (**(code **)(lVar11 + 0x10))();
      uStack_218 = uStack_90;
      puStack_220 = puStack_98;
      lStack_208 = (long)puStack_80;
      uStack_210 = pcStack_88;
      if (puStack_80 == (undefined *)0x0) {
        func_0x000107c61174(uVar7);
        func_0x00010398e4d0(&puStack_220,0x112d387f8,&UNK_10d902650);
        func_0x00010398bf38(&puStack_1f8,uVar7);
        func_0x000107c61170(uVar7);
        func_0x00010398e4d0(&puStack_1f8,0x112d387f8,&UNK_10d902650);
      }
      else {
        func_0x000100102924(&puStack_220,&puStack_1f8);
        func_0x000107c61174(uVar7);
        puVar6 = puVar4;
        func_0x000107c61558(puVar4);
        puStack_220 = puVar4;
        func_0x00010398bffc(&puStack_1f8,uVar7,puVar6);
        func_0x000107c61170(uVar7);
        puStack_a0 = puStack_220;
      }
      puVar4 = puStack_a0;
      (*pcStack_280)(lVar2,lVar10);
    }
    puVar6 = PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0;
    func_0x000107c610f8();
    uVar5 = 0;
    func_0x00010129b9f4(0);
    uVar7 = 0x112d6e8c0;
    FUN_10398e3dc(0x112d6e8c0,&SUB_10129b9f4,&UNK_10d930714);
    puVar8 = puVar4;
    func_0x000107c5f9dc(puVar4,uVar5,PTR___sypN_11034f1a8 + 8,uVar7);
    func_0x000107c48194();
    func_0x000107c6142c(puVar4);
    func_0x000107c61170(puVar8);
    func_0x00010398e4d0(lVar1,0x112d373d8,&UNK_10d9014c0);
    if (puVar6 != (undefined *)0x0) {
      puVar4 = &UNK_1106b4e40;
      func_0x000107c613fc(&UNK_1106b4e40,0x18,7);
      uVar7 = uStack_230;
      *(undefined8 *)(puVar4 + 0x10) = uStack_230;
      pcStack_78 = (code *)0x10398f04c;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      pcStack_88 = (code *)&UNK_1000f6b44;
      puStack_80 = &UNK_1106b4e58;
      ppuVar9 = &puStack_98;
      puStack_70 = puVar4;
      func_0x000107c60bc4(ppuVar9);
      puVar4 = puStack_70;
      func_0x000107c61174(uVar7);
      func_0x000107c61574(puVar4);
      func_0x000107c539ac(uStack_228);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(puVar6);
      return;
    }
  }
  puVar4 = &UNK_1106b4df0;
  func_0x000107c613fc(&UNK_1106b4df0,0x20,7);
  uVar5 = uStack_228;
  uVar7 = uStack_230;
  *(undefined8 *)(puVar4 + 0x10) = uStack_230;
  *(undefined8 *)(puVar4 + 0x18) = uStack_228;
  pcStack_78 = FUN_10398e51c;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_10398b870;
  puStack_80 = &UNK_1106b4e08;
  ppuVar9 = &puStack_98;
  puStack_70 = puVar4;
  func_0x000107c60bc4(ppuVar9);
  puVar4 = puStack_70;
  func_0x000107c61174(uVar7);
  func_0x000107c615f0(uVar5);
  func_0x000107c61574(puVar4);
  func_0x000107c43ec4(uVar5);
  func_0x000107c60bd0(ppuVar9);
  return;
}



/* Entry: 10398e51c; end: 10398e83f;  */

void FUN_10398e51c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined *puVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 >> 0x3e == 0) {
    uVar14 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar14 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar14 = param_1;
    }
    func_0x000107c60480();
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar14 != 0) {
    uStack_98 = param_1 & 0xffffffffffffff8;
    uVar13 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uStack_98 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10398e6e8);
            (*pcVar4)();
          }
          uVar5 = *(ulong *)(param_1 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
          uVar11 = param_2;
        }
        else {
          uVar5 = uVar13;
          uVar11 = param_1;
          FUN_10398bd84();
        }
        uVar1 = uVar13 + 1;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10398e6e4);
          (*pcVar4)();
        }
        uVar6 = uVar5;
        func_0x000107c4d3e4();
        func_0x000107c61180();
        uVar7 = uVar6;
        func_0x000107c5faec();
        param_2 = uVar11;
        func_0x000107c61170(uVar6);
        if ((uVar7 != 0xd000000000000013) || (uVar11 != 0x800000010f17e8c0)) break;
        func_0x000107c6142c(0x800000010f17e8c0);
LAB_10398e65c:
        puVar12 = puVar9;
        func_0x000107c61558();
        puStack_90 = puVar9;
        if (((ulong)puVar12 & 1) == 0) {
          param_2 = *(long *)(puVar9 + 0x10) + 1;
          FUN_10398c734(0,param_2,1);
        }
        uVar11 = *(ulong *)(puStack_90 + 0x10);
        uVar13 = uVar11 + 1;
        if (*(ulong *)(puStack_90 + 0x18) >> 1 <= uVar11) {
          param_2 = uVar13;
          FUN_10398c734(1 < *(ulong *)(puStack_90 + 0x18),uVar13,1);
        }
        *(ulong *)(puStack_90 + 0x10) = uVar13;
        *(ulong *)(puStack_90 + uVar11 * 8 + 0x20) = uVar5;
        uVar13 = uVar1;
        puVar9 = puStack_90;
        if (uVar1 == uVar14) goto joined_r0x00010398e70c;
      }
      param_2 = uVar11;
      func_0x000107c605b8(uVar7,uVar11,0xd000000000000013,0x800000010f17e8c0,0);
      func_0x000107c6142c(uVar11);
      if ((uVar7 & 1) != 0) goto LAB_10398e65c;
      func_0x000107c61170(uVar5);
      uVar13 = uVar13 + 1;
    } while (uVar1 != uVar14);
  }
joined_r0x00010398e70c:
  if (((long)puVar9 < 0) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
    puVar12 = puVar9;
    func_0x000107c60480();
  }
  else {
    puVar12 = *(undefined **)(puVar9 + 0x10);
  }
  if (puVar12 != (undefined *)0x0) {
    if (((ulong)puVar9 & 0xc000000000000001) == 0) {
      if (*(long *)(puVar9 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10398e840);
        (*pcVar4)();
      }
      uVar8 = *(undefined8 *)(puVar9 + 0x20);
      func_0x000107c61174(uVar8);
    }
    else {
      uVar8 = 0;
      FUN_10398bd84(0,puVar9);
    }
    func_0x000107c61574(puVar9);
    puVar9 = &UNK_1106b4e90;
    func_0x000107c613fc(&UNK_1106b4e90,0x18,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar2;
    pcStack_70 = FUN_10398e884;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1106b4ea8;
    ppuVar10 = &puStack_90;
    puStack_68 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar9 = puStack_68;
    func_0x000107c61174(uVar2);
    func_0x000107c61574(puVar9);
    func_0x000107c416c8(uVar3);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(uVar8);
    return;
  }
  func_0x000107c61574(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(uVar2);
  return;
}



/* Entry: 10398e840; end: 10398e883;  */

void FUN_10398e840(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d6ea00 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d6ea00 = puVar1;
  return;
}


