/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1037ac9e0; end: 1037ac9e7;  */

undefined8 FUN_1037ac9e0(void)

{
  return 0x1b;
}



/* Entry: 1037ac9e8; end: 1037acb1b;  */

void FUN_1037ac9e8(undefined8 *param_1)

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
  puVar1 = &UNK_110693cb8;
  func_0x000107c613fc(&UNK_110693cb8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1037acbbc;
  func_0x00010058fa64(FUN_1037acbbc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1037acb1c; end: 1037acb4b;  */

undefined ** FUN_1037acb1c(void)

{
  return &PTR_DAT_113067198;
}



/* Entry: 1037acb4c; end: 1037acb6b;  */

void FUN_1037acb4c(void)

{
  func_0x000107c61168(&PTR_PTR_1128ea620);
  return;
}



/* Entry: 1037acb6c; end: 1037acbbb;  */

undefined1  [16] FUN_1037acb6c(void)

{
  return ZEXT816(0x110693bf0);
}



/* Entry: 1037acbbc; end: 1037acbe3;  */

void FUN_1037acbbc(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1037acbe4; end: 1037acbe7;  */

void FUN_1037acbe4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1037acbe8; end: 1037accb3;  */

/* WARNING: Possible PIC construction at 0x0001037acc88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037acc98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037acc8c) */
/* WARNING: Removing unreachable block (ram,0x0001037acc9c) */

void FUN_1037acbe8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110693d48;
  func_0x000107c613fc(&UNK_110693d48,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uVar2 = 0x112f938f0;
  func_0x0001000285a8(0x112f938f0,&UNK_10dc0c510);
  func_0x000107c613fc();
  pcVar3 = FUN_1037ad084;
  func_0x0001000841fc(FUN_1037ad084,puVar1,uVar2);
  func_0x000100084214(&UNK_10dc0c4d0,0x3d,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1037accb4; end: 1037acccf;  */

/* WARNING: Possible PIC construction at 0x0001037acc88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037acc98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037acc8c) */
/* WARNING: Removing unreachable block (ram,0x0001037acc9c) */

void FUN_1037accb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_110693d48;
  func_0x000107c613fc(&UNK_110693d48,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112f938f0;
  func_0x0001000285a8(0x112f938f0,&UNK_10dc0c510);
  func_0x000107c613fc();
  pcVar6 = FUN_1037ad084;
  func_0x0001000841fc(FUN_1037ad084,puVar4,uVar5);
  func_0x000100084214(&UNK_10dc0c4d0,0x3d,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1037accd0; end: 1037ad047;  */

void FUN_1037accd0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  func_0x0001000285a8(0x112f938f8,&UNK_10dc0c518);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f93900,&UNK_10dc0c520);
  puVar2 = &UNK_110693d70;
  func_0x000107c613fc(&UNK_110693d70,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  uVar10 = 0x1037ad090;
  func_0x0001000823a8(0x1037ad090,puVar2);
  func_0x000100082720("WebViewInjectionScriptSaberPluginRegistryServiceProvider",0x38,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_1037ac9a8;
  func_0x0001000823a8(FUN_1037ac9a8,0);
  func_0x000100082720("WebViewInjectionScriptSaberPluginScopedServicesCleanupRelayServiceProvider",
                      0x4a,2);
  puVar4 = puVar1;
  FUN_103985bd0(puVar1,uVar10);
  pcVar5 = "WebViewInjectionScriptPluginCollectionServiceProvider";
  func_0x000100082720("WebViewInjectionScriptPluginCollectionServiceProvider",0x35,2);
  FUN_1037b4b28();
  func_0x000100082720("WebViewInjectionScriptSaberPluginScopeGraphBridgeServicesServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112f93908,&UNK_10dc0c530);
  puVar2 = &UNK_110693d98;
  func_0x000107c613fc(&UNK_110693d98,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(char **)(puVar2 + 0x18) = pcVar5;
  *(code **)(puVar2 + 0x20) = pcVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(pcVar3);
  uVar6 = 0x1037ad0a0;
  func_0x0001000823a8(0x1037ad0a0,puVar2);
  func_0x000100082720("WebViewInjectionScriptSaberPluginScopeInitializationPluginRegistryServiceProvider"
                      ,0x51,2);
  func_0x0001000285a8(0x112f93888,&UNK_10dc0c230);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1037ad0ac;
  func_0x0001000823a8(0x1037ad0ac,uVar6);
  func_0x000100082720("WebViewInjectionScriptSaberPluginScopeInitializationServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f93868,&UNK_10dc0c220);
  puVar2 = &UNK_110693dc0;
  func_0x000107c613fc(&UNK_110693dc0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar4;
  *(undefined8 *)(puVar2 + 0x18) = uVar7;
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1037ad0b4;
  func_0x0001000823a8(0x1037ad0b4,puVar2);
  func_0x000100082720("WebViewInjectionScriptSaberPluginScopedServicesServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f93880,&UNK_10dc0c228);
  puVar2 = &UNK_110693de8;
  func_0x000107c613fc(&UNK_110693de8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  pcVar9 = FUN_1037ad0e8;
  func_0x0001000823a8(FUN_1037ad0e8,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("WebViewInjectionScriptSaberPluginScopeEntryPointProvider",0x38,2);
  *param_1 = pcVar9;
  return;
}



/* Entry: 1037ad048; end: 1037ad083;  */

void FUN_1037ad048(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1037ad084; end: 1037ad0bb;  */

void FUN_1037ad084(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112f938f8,&UNK_10dc0c518);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f93900,&UNK_10dc0c520);
  puVar2 = &UNK_110693d70;
  func_0x000107c613fc(&UNK_110693d70,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar3;
  *(undefined8 *)(puVar2 + 0x30) = uVar9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar9);
  uVar3 = 0x1037ad090;
  func_0x0001000823a8(0x1037ad090,puVar2);
  func_0x000100082720("WebViewInjectionScriptSaberPluginRegistryServiceProvider",0x38,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1037ac9a8;
  func_0x0001000823a8(FUN_1037ac9a8,0);
  func_0x000100082720("WebViewInjectionScriptSaberPluginScopedServicesCleanupRelayServiceProvider",
                      0x4a,2);
  puVar5 = puVar1;
  FUN_103985bd0(puVar1,uVar3);
  pcVar6 = "WebViewInjectionScriptPluginCollectionServiceProvider";
  func_0x000100082720("WebViewInjectionScriptPluginCollectionServiceProvider",0x35,2);
  FUN_1037b4b28();
  func_0x000100082720("WebViewInjectionScriptSaberPluginScopeGraphBridgeServicesServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112f93908,&UNK_10dc0c530);
  puVar2 = &UNK_110693d98;
  func_0x000107c613fc(&UNK_110693d98,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(char **)(puVar2 + 0x18) = pcVar6;
  *(code **)(puVar2 + 0x20) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1037ad0a0;
  func_0x0001000823a8(0x1037ad0a0,puVar2);
  func_0x000100082720("WebViewInjectionScriptSaberPluginScopeInitializationPluginRegistryServiceProvider"
                      ,0x51,2);
  func_0x0001000285a8(0x112f93888,&UNK_10dc0c230);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1037ad0ac;
  func_0x0001000823a8(0x1037ad0ac,uVar7);
  func_0x000100082720("WebViewInjectionScriptSaberPluginScopeInitializationServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f93868,&UNK_10dc0c220);
  puVar2 = &UNK_110693dc0;
  func_0x000107c613fc(&UNK_110693dc0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar5;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1037ad0b4;
  func_0x0001000823a8(0x1037ad0b4,puVar2);
  func_0x000100082720("WebViewInjectionScriptSaberPluginScopedServicesServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f93880,&UNK_10dc0c228);
  puVar2 = &UNK_110693de8;
  func_0x000107c613fc(&UNK_110693de8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_1037ad0e8;
  func_0x0001000823a8(FUN_1037ad0e8,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("WebViewInjectionScriptSaberPluginScopeEntryPointProvider",0x38,2);
  *param_1 = pcVar10;
  return;
}



/* Entry: 1037ad0bc; end: 1037ad0e7;  */

void FUN_1037ad0bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1037ad0e8; end: 1037ad0ef;  */

void FUN_1037ad0e8(undefined8 *param_1)

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
  *(undefined ***)(lStack_38 + 0x18) = &PTR_DAT_110693b88;
  uVar1 = auStack_50[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110693b98;
  return;
}



/* Entry: 1037ad0f0; end: 1037ad1d3;  */

/* WARNING: Possible PIC construction at 0x0001037ad19c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ad1ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037ad1a0) */
/* WARNING: Removing unreachable block (ram,0x0001037ad1b0) */

void FUN_1037ad0f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110693e10;
  func_0x000107c613fc(&UNK_110693e10,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  uVar2 = 0x112f93910;
  func_0x0001000285a8(0x112f93910,&UNK_10dc0c538);
  func_0x000107c613fc();
  pcVar3 = FUN_1037ad2b0;
  func_0x0001000841fc(FUN_1037ad2b0,puVar1,uVar2);
  func_0x000100084214("WebViewInjectionScriptSaberPluginRegistryServiceProvider",0x38,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1037ad1d4; end: 1037ad2af;  */

void FUN_1037ad1d4(undefined8 *param_1,byte *param_2,byte *param_3,undefined8 param_4,
                  undefined8 param_5,byte *param_6,undefined8 param_7)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  bVar1 = *param_2;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_1037ade64(param_3,param_4,param_5,param_6);
      pcVar2 = "AmazonHandshakeInjectionScriptSaberPluginProvider";
      uVar3 = 0x31;
      goto LAB_1037ad298;
    }
    FUN_1037ae23c(param_3,param_6,param_7);
    pcVar2 = "AsmInjectionScriptSaberPluginProvider";
  }
  else {
    if (bVar1 == 2) {
      func_0x0001037af448(param_6,param_7);
      pcVar2 = "DynamicInjectionScriptSaberPluginProvider";
      uVar3 = 0x29;
      param_3 = param_6;
      goto LAB_1037ad298;
    }
    if (bVar1 != 3) {
      FUN_1037b0f60();
      pcVar2 = "PopupBridgeScriptSaberPluginProvider";
      uVar3 = 0x24;
      param_3 = param_2;
      goto LAB_1037ad298;
    }
    func_0x0001037b0e64();
    pcVar2 = "PerformanceMetricsSaberPluginProvider";
  }
  uVar3 = 0x25;
LAB_1037ad298:
  func_0x000100082720(pcVar2,uVar3,2);
  *param_1 = param_3;
  return;
}



/* Entry: 1037ad2b0; end: 1037ad2bf;  */

void FUN_1037ad2b0(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  pbVar4 = *(byte **)(unaff_x20 + 0x10);
  pbVar3 = *(byte **)(unaff_x20 + 0x28);
  bVar1 = *param_2;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_1037ade64(pbVar4,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                    pbVar3);
      pcVar2 = "AmazonHandshakeInjectionScriptSaberPluginProvider";
      uVar5 = 0x31;
      goto LAB_1037ad298;
    }
    FUN_1037ae23c(pbVar4,pbVar3,*(undefined8 *)(unaff_x20 + 0x30));
    pcVar2 = "AsmInjectionScriptSaberPluginProvider";
  }
  else {
    if (bVar1 == 2) {
      func_0x0001037af448(pbVar3,*(undefined8 *)(unaff_x20 + 0x30));
      pcVar2 = "DynamicInjectionScriptSaberPluginProvider";
      uVar5 = 0x29;
      pbVar4 = pbVar3;
      goto LAB_1037ad298;
    }
    if (bVar1 != 3) {
      FUN_1037b0f60();
      pcVar2 = "PopupBridgeScriptSaberPluginProvider";
      uVar5 = 0x24;
      pbVar4 = param_2;
      goto LAB_1037ad298;
    }
    func_0x0001037b0e64();
    pcVar2 = "PerformanceMetricsSaberPluginProvider";
  }
  uVar5 = 0x25;
LAB_1037ad298:
  func_0x000100082720(pcVar2,uVar5,2);
  *param_1 = pbVar4;
  return;
}



/* Entry: 1037ad2c0; end: 1037ad2fb;  */

void FUN_1037ad2c0(undefined8 *param_1,undefined8 param_2)

{
  FUN_1037ad2fc();
  func_0x0001000a7f38("WebViewInjectionScriptSaberPluginScopeInitializationPluginRegistryServiceProvider"
                      ,0x51,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1037ad2fc; end: 1037ad493;  */

void FUN_1037ad2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074dfc8;
  ppuVar4 = &PTR_DAT_113067198;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110693e38;
  func_0x000107c613fc(&UNK_110693e38,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f93918;
  func_0x0001000285a8(0x112f93918,&UNK_10dc0c540);
  func_0x0001000a6ee8(&UNK_110694a68,
                      "WebViewInjectionScriptSaberPluginScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x4d,2,FUN_1037ad494,puVar2,uVar3,&UNK_110694a68,&PTR_DAT_112f93c58);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110693e60;
  func_0x000107c613fc(&UNK_110693e60,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110693c30,
                      "WebViewInjectionScriptSaberPluginScopedServicesScopeInitializationPluginKey",
                      0x4b,2,FUN_1037ad57c,puVar2,uVar3,&UNK_110693c30,&PTR_DAT_112f93890);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f93920;
  func_0x0001000285a8(0x112f93920,&UNK_10dc0c548);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1037ad494; end: 1037ad4d3;  */

void FUN_1037ad494(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1037b4c0c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("WebViewInjectionScriptSaberPluginScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1037ad4d4; end: 1037ad57b;  */

void FUN_1037ad4d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110693e88;
  func_0x000107c613fc(&UNK_110693e88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1037ad5b0;
  func_0x0001000823a8(FUN_1037ad5b0,puVar1);
  func_0x000100082720("WebViewInjectionScriptSaberPluginScopedServicesScopeInitializationPluginProvider"
                      ,0x50,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1037ad57c; end: 1037ad583;  */

void FUN_1037ad57c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110693e88;
  func_0x000107c613fc(&UNK_110693e88,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1037ad5b0;
  func_0x0001000823a8(FUN_1037ad5b0,puVar3);
  func_0x000100082720("WebViewInjectionScriptSaberPluginScopedServicesScopeInitializationPluginProvider"
                      ,0x50,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1037ad584; end: 1037ad5af;  */

void FUN_1037ad584(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1037ad5b0; end: 1037ad5b7;  */

void FUN_1037ad5b0(undefined8 *param_1)

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
  puVar1 = &UNK_110693cb8;
  func_0x000107c613fc(&UNK_110693cb8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1037acbbc;
  func_0x00010058fa64(FUN_1037acbbc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1037ad5b8; end: 1037ad5c3; -[_TtC36AmazonHandshakeInjectionScriptPlugin36AmazonHandshakeInjectionScriptPlugin name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ad5b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f93928);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f93928))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037ad5c4; end: 1037ad5cf; -[_TtC36AmazonHandshakeInjectionScriptPlugin36AmazonHandshakeInjectionScriptPlugin scriptString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ad5c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f93930);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f93930))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037ad5d0; end: 1037ad617;  */

void FUN_1037ad5d0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037ad618; end: 1037ad627; -[_TtC36AmazonHandshakeInjectionScriptPlugin36AmazonHandshakeInjectionScriptPlugin injectionTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037ad618(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f93938);
}



/* Entry: 1037ad628; end: 1037ad66f; -[_TtC36AmazonHandshakeInjectionScriptPlugin36AmazonHandshakeInjectionScriptPlugin callbackNames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ad628(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f93940);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037ad670; end: 1037ad67f; -[_TtC36AmazonHandshakeInjectionScriptPlugin36AmazonHandshakeInjectionScriptPlugin forMainFrameOnly] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1037ad670(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f93948);
}



/* Entry: 1037ad680; end: 1037ad6df; -[_TtC36AmazonHandshakeInjectionScriptPlugin36AmazonHandshakeInjectionScriptPlugin init] */

void FUN_1037ad680(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AmazonHandshakeInjectionScriptPlugin.AmazonHandshakeInjectionScriptPlugin",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037ad6ac);
  (*pcVar1)();
}



/* Entry: 1037ad6e0; end: 1037ad75f; -[_TtC36AmazonHandshakeInjectionScriptPlugin36AmazonHandshakeInjectionScriptPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037ad6e0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f93928 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f93930 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f93940));
  func_0x000107c61610(param_1 + _DAT_112f93950);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f93958));
  param_1 = param_1 + _DAT_112f93960;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1037ad760; end: 1037ad77f;  */

void FUN_1037ad760(void)

{
  func_0x000107c61168(&PTR_PTR_1128ea6e8);
  return;
}



/* Entry: 1037ad780; end: 1037ad8b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ad780(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar5 - extraout_x12;
  func_0x000107c61604(unaff_x20 + _DAT_112f93950,param_3);
  func_0x000107c3abfc();
  func_0x000107c61180();
  if (param_3 != 0) {
    func_0x000107c5edb4(puVar5);
    func_0x000107c61170(param_3);
    lVar2 = lVar4;
    (**(code **)(lVar7 + 0x20))(lVar4,puVar5,lVar1);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f93958);
    func_0x000107c5ed90();
    uVar3 = uVar6;
    func_0x000107c49a10();
    func_0x000107c61170(lVar2);
    if ((int)uVar3 != 0) {
      func_0x000107c5d910(uVar6);
    }
    (**(code **)(lVar7 + 8))(lVar4,lVar1);
  }
  return;
}



/* Entry: 1037ad8b8; end: 1037ad947; -[_TtC36AmazonHandshakeInjectionScriptPlugin36AmazonHandshakeInjectionScriptPlugin userContentController:didReceive:webView:] */

/* WARNING: Possible PIC construction at 0x0001037ad91c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ad92c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037ad920) */
/* WARNING: Removing unreachable block (ram,0x0001037ad930) */

void FUN_1037ad8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1037ad780(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1037ad948; end: 1037adabb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ad948(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar4 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eb08();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar3 = param_3 + _DAT_112f93950;
    func_0x000107c61618();
    func_0x000107c61170(param_3);
    if (lVar3 != 0) {
      (**(code **)(lVar7 + 0x10))(puVar4,param_4,lVar1);
      func_0x000107c5eaec(lVar5,0x404e000000000000,puVar4,0);
      func_0x000107c5eae0();
      (**(code **)(lVar6 + 8))(lVar5,lVar2);
      lVar1 = lVar3;
      func_0x000107c4b768(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 1037adabc; end: 1037adb73; -[_TtC36AmazonHandshakeInjectionScriptPlugin36AmazonHandshakeInjectionScriptPlugin thirdPartyLoginHandler:loadURL:] */

void FUN_1037adabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar2,param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1037adbb8(puVar2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1037adb74; end: 1037adbb7; -[_TtC36AmazonHandshakeInjectionScriptPlugin36AmazonHandshakeInjectionScriptPlugin dismissBrowserForThirdPartyLoginHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037adb74(long param_1)

{
  param_1 = param_1 + _DAT_112f93960;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c420b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1037adbb8; end: 1037addf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037adbb8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  char *pcVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  lVar10 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)&puStack_90 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  lVar2 = unaff_x20 + _DAT_112f93950;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c40110();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar3;
    func_0x000107c5e27c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar2;
    func_0x000107c44f48();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f93958);
      func_0x000107c61174(lVar3);
      lVar2 = lVar3;
      func_0x000107c5ed90();
      func_0x000107c4015c(uVar12);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      puVar4 = &UNK_110693f30;
      func_0x000107c613fc(&UNK_110693f30,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      (**(code **)(lVar13 + 0x10))(lVar9,param_1,lVar1);
      uVar8 = (ulong)*(byte *)(lVar13 + 0x50);
      uVar11 = uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff);
      puVar5 = &UNK_110693f58;
      func_0x000107c613fc(&UNK_110693f58,uVar11 + lVar10,uVar8 | 7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      (**(code **)(lVar13 + 0x20))(puVar5 + uVar11,lVar9,lVar1);
      pcStack_70 = FUN_1037addf8;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_101c871e4;
      puStack_78 = &UNK_110693f70;
      ppuVar6 = &puStack_90;
      puStack_68 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_68);
      pcVar7 = "thirdPartyLoginHandler(_:loadURL:)";
      func_0x0001000c10c0("thirdPartyLoginHandler(_:loadURL:)");
      func_0x000107c61180();
      func_0x000107c5dc64(uVar12);
      func_0x000107c615e8(pcVar7);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar12);
    }
  }
  return;
}



/* Entry: 1037addf8; end: 1037ade47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037addf8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  func_0x000107c5ede0();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x000107c5ede0(0,param_2);
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar4 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eb08();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar5 + 0x10,auStack_78,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar3 = lVar5 + _DAT_112f93950;
    func_0x000107c61618();
    func_0x000107c61170(lVar5);
    if (lVar3 != 0) {
      (**(code **)(lVar9 + 0x10))
                (puVar4,unaff_x20 + (uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff)),lVar1);
      func_0x000107c5eaec(lVar7,0x404e000000000000,puVar4,0);
      func_0x000107c5eae0();
      (**(code **)(lVar8 + 8))(lVar7,lVar2);
      lVar5 = lVar3;
      func_0x000107c4b768(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar5);
    }
  }
  return;
}



/* Entry: 1037ade48; end: 1037ade63;  */

void FUN_1037ade48(long param_1,long param_2)

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



/* Entry: 1037ade64; end: 1037adf07;  */

void FUN_1037ade64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f93990,&UNK_10dc0c580);
  puVar1 = &UNK_110693fa8;
  func_0x000107c613fc(&UNK_110693fa8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1037ae220,puVar1);
  return;
}



/* Entry: 1037adf08; end: 1037ae21f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037adf08(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  code *pcVar14;
  ulong *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  uVar5 = uStack_68;
  func_0x000107c4d80c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&lStack_70);
  uVar16 = *(undefined8 *)(lStack_70 + _DAT_112fbd3b8);
  func_0x000107c6157c(uVar16);
  func_0x000107c61170(lStack_70);
  func_0x000100083b20(&lStack_78);
  uVar17 = *(undefined8 *)(lStack_78 + _DAT_11308d048);
  func_0x000107c6157c(uVar17);
  func_0x000107c61170(lStack_78);
  func_0x000100083b20(&lStack_80);
  lVar6 = _DAT_11307c2f0;
  func_0x000107c61428(lStack_80 + _DAT_11307c2f0,auStack_98,0,0);
  lVar6 = lStack_80 + lVar6;
  func_0x000107c61618();
  func_0x000107c61170(lStack_80);
  lVar7 = 0;
  FUN_1037ad760();
  lVar8 = lVar7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f93928);
  *puVar1 = 0xd000000000000010;
  puVar1[1] = 0x800000010f164e20;
  func_0x000107c61614(lVar8 + _DAT_112f93950,0);
  lVar3 = _DAT_112f93960;
  func_0x000107c61614(lVar8 + _DAT_112f93960,0);
  FUN_10398c9b4(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(uVar17);
  func_0x000107c61174();
  uVar10 = uVar5;
  uVar13 = uVar16;
  func_0x000103988c7c();
  lVar2 = _DAT_112f93958;
  *(undefined8 *)(lVar8 + _DAT_112f93958) = uVar10;
  func_0x000107c496c4();
  func_0x000107c61180();
  uVar9 = uVar10;
  func_0x000107c5faec();
  func_0x000107c61170(uVar10);
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f93930);
  *puVar1 = uVar9;
  puVar1[1] = uVar13;
  uVar9 = *(undefined8 *)(lVar8 + lVar2);
  func_0x000107c4d44c();
  func_0x000107c61180();
  uVar10 = uVar9;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar9);
  *(undefined8 *)(lVar8 + _DAT_112f93940) = uVar10;
  uVar10 = *(undefined8 *)(lVar8 + lVar2);
  func_0x000107c496dc();
  *(undefined8 *)(lVar8 + _DAT_112f93938) = uVar10;
  uVar4 = (undefined1)*(undefined8 *)(lVar8 + lVar2);
  func_0x000107c437e4();
  *(undefined1 *)(lVar8 + _DAT_112f93948) = uVar4;
  func_0x000107c61604(lVar8 + lVar3,lVar6);
  plVar11 = &lStack_a8;
  lStack_a8 = lVar8;
  lStack_a0 = lVar7;
  func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
  puVar15 = *(ulong **)((long)plVar11 + _DAT_112f93958);
  pcVar14 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar15) + 0xd0);
  plVar12 = plVar11;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(puVar15);
  (*pcVar14)(plVar11);
  func_0x000107c61170(plVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar17);
  func_0x000107c615e8(lVar6);
  func_0x000107c61170(puVar15);
  *param_1 = plVar11;
  return;
}



/* Entry: 1037ae220; end: 1037ae23b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ae220(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  code *pcVar14;
  ulong *puVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  uVar5 = uStack_68;
  func_0x000107c4d80c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&lStack_70);
  uVar16 = *(undefined8 *)(lStack_70 + _DAT_112fbd3b8);
  func_0x000107c6157c(uVar16);
  func_0x000107c61170(lStack_70);
  func_0x000100083b20(&lStack_78);
  uVar17 = *(undefined8 *)(lStack_78 + _DAT_11308d048);
  func_0x000107c6157c(uVar17);
  func_0x000107c61170(lStack_78);
  func_0x000100083b20(&lStack_80);
  lVar6 = _DAT_11307c2f0;
  func_0x000107c61428(lStack_80 + _DAT_11307c2f0,auStack_98,0,0);
  lVar6 = lStack_80 + lVar6;
  func_0x000107c61618();
  func_0x000107c61170(lStack_80);
  lVar7 = 0;
  FUN_1037ad760();
  lVar8 = lVar7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f93928);
  *puVar1 = 0xd000000000000010;
  puVar1[1] = 0x800000010f164e20;
  func_0x000107c61614(lVar8 + _DAT_112f93950,0);
  lVar3 = _DAT_112f93960;
  func_0x000107c61614(lVar8 + _DAT_112f93960,0);
  FUN_10398c9b4(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(uVar17);
  func_0x000107c61174();
  uVar10 = uVar5;
  uVar13 = uVar16;
  func_0x000103988c7c();
  lVar2 = _DAT_112f93958;
  *(undefined8 *)(lVar8 + _DAT_112f93958) = uVar10;
  func_0x000107c496c4();
  func_0x000107c61180();
  uVar9 = uVar10;
  func_0x000107c5faec();
  func_0x000107c61170(uVar10);
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f93930);
  *puVar1 = uVar9;
  puVar1[1] = uVar13;
  uVar9 = *(undefined8 *)(lVar8 + lVar2);
  func_0x000107c4d44c();
  func_0x000107c61180();
  uVar10 = uVar9;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar9);
  *(undefined8 *)(lVar8 + _DAT_112f93940) = uVar10;
  uVar10 = *(undefined8 *)(lVar8 + lVar2);
  func_0x000107c496dc();
  *(undefined8 *)(lVar8 + _DAT_112f93938) = uVar10;
  uVar4 = (undefined1)*(undefined8 *)(lVar8 + lVar2);
  func_0x000107c437e4();
  *(undefined1 *)(lVar8 + _DAT_112f93948) = uVar4;
  func_0x000107c61604(lVar8 + lVar3,lVar6);
  plVar11 = &lStack_a8;
  lStack_a8 = lVar8;
  lStack_a0 = lVar7;
  func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
  puVar15 = *(ulong **)((long)plVar11 + _DAT_112f93958);
  pcVar14 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar15) + 0xd0);
  plVar12 = plVar11;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(puVar15);
  (*pcVar14)(plVar11);
  func_0x000107c61170(plVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar17);
  func_0x000107c615e8(lVar6);
  func_0x000107c61170(puVar15);
  *param_1 = plVar11;
  return;
}



/* Entry: 1037ae23c; end: 1037ae2d3;  */

void FUN_1037ae23c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f93990,&UNK_10dc0c580);
  puVar1 = &UNK_110694070;
  func_0x000107c613fc(&UNK_110694070,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1037ae2d4,puVar1);
  return;
}



/* Entry: 1037ae2d4; end: 1037ae517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ae2d4(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar4 = lStack_68;
  uVar7 = *(undefined8 *)(lStack_68 + _DAT_11308d048);
  func_0x000107c6157c(uVar7);
  func_0x000107c61170(lVar4);
  func_0x0001000d224c(&uStack_70);
  func_0x000107c61574(uVar7);
  uVar2 = uStack_70;
  if (*(long *)(lVar3 + _DAT_11307c2e0) == 0) {
LAB_1037ae3ac:
    uVar8 = 0;
    uVar6 = param_3;
  }
  else {
    puVar1 = (ulong *)(*(long *)(lVar3 + _DAT_11307c2e0) + _DAT_11308b558);
    uVar8 = puVar1[1];
    if (uVar8 == 0) goto LAB_1037ae3ac;
    uVar9 = *puVar1;
    uVar5 = uVar9 & 0xffffffffffff;
    if ((uVar8 & 0x2000000000000000) != 0) {
      uVar5 = uVar8 >> 0x38 & 0xf;
    }
    func_0x000107c61434(uVar8);
    uVar6 = param_3;
    if (uVar5 != 0) goto LAB_1037ae3e0;
  }
  uVar5 = uVar2;
  func_0x000107c3e1ec(uVar2);
  func_0x000107c61180();
  uVar9 = uVar5;
  func_0x000107c5faec();
  param_3 = uVar6;
  func_0x000107c61170(uVar5);
  func_0x000107c6142c(uVar8);
  uVar8 = uVar6;
LAB_1037ae3e0:
  func_0x000100083b20(&lStack_68);
  uVar7 = *(undefined8 *)(lStack_68 + _DAT_113011788);
  func_0x000107c6157c(uVar7);
  func_0x000107c61170(lStack_68);
  func_0x0001000d224c(&uStack_70);
  func_0x000107c61574(uVar7);
  uVar6 = uVar2;
  func_0x000107c3e1f0(uVar2);
  func_0x000107c61180();
  uVar5 = uStack_70;
  func_0x000107c4428c();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uStack_70);
  if (uVar5 == 0) {
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c6142c(uVar8);
  }
  else {
    uVar6 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    uVar7 = *(undefined8 *)(lVar3 + _DAT_11307c2f8);
    FUN_1037aefc8(0);
    func_0x000107c610f8();
    func_0x000107c615f0(uVar7);
    FUN_1037ae648(uVar6,param_3,uVar9,uVar8,uVar7);
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(lVar3);
    uVar5 = uVar6;
  }
  *param_1 = uVar5;
  return;
}



/* Entry: 1037ae518; end: 1037ae527;  */

undefined1  [16] FUN_1037ae518(void)

{
  return ZEXT816(0x110694098);
}



/* Entry: 1037ae528; end: 1037ae533; -[_TtC24AsmInjectionScriptPlugin24AsmInjectionScriptPlugin name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ae528(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f93998);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f93998))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037ae534; end: 1037ae53f; -[_TtC24AsmInjectionScriptPlugin24AsmInjectionScriptPlugin scriptString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ae534(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f939a0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f939a0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037ae540; end: 1037ae587;  */

void FUN_1037ae540(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037ae588; end: 1037ae597; -[_TtC24AsmInjectionScriptPlugin24AsmInjectionScriptPlugin injectionTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037ae588(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f939a8);
}



/* Entry: 1037ae598; end: 1037ae59f; -[_TtC24AsmInjectionScriptPlugin24AsmInjectionScriptPlugin forMainFrameOnly] */

undefined8 FUN_1037ae598(void)

{
  return 0;
}



/* Entry: 1037ae5a0; end: 1037ae5e7; -[_TtC24AsmInjectionScriptPlugin24AsmInjectionScriptPlugin callbackNames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ae5a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f939b0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037ae5e8; end: 1037ae647;  */

void FUN_1037ae5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c610f8();
  FUN_1037ae648(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 1037ae648; end: 1037ae77b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ae648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_112f93998);
  *puVar4 = 0x6d7361;
  puVar4[1] = 0xe300000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f939a8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f939b8) = 0;
  lVar3 = _DAT_112f939b0;
  puVar4 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar4[3] = 4;
  puVar4[2] = 2;
  puVar5 = puVar4;
  func_0x000103c54dc8();
  puVar6 = (undefined8 *)puVar5[1];
  puVar4[4] = *puVar5;
  puVar4[5] = puVar6;
  func_0x000107c61434();
  func_0x000103c54dd4();
  uVar1 = puVar6[1];
  puVar4[6] = *puVar6;
  puVar4[7] = uVar1;
  *(undefined8 **)(unaff_x20 + lVar3) = puVar4;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_112f939a0);
  *puVar4 = param_1;
  puVar4[1] = param_2;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_112f939c0);
  *puVar4 = param_3;
  puVar4[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f939c8) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61434();
  func_0x000107c61154(&stack0xffffffffffffff90,puVar2);
  return;
}



/* Entry: 1037ae77c; end: 1037ae807; -[_TtC24AsmInjectionScriptPlugin24AsmInjectionScriptPlugin userContentController:didReceive:webView:] */

/* WARNING: Possible PIC construction at 0x0001037ae7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ae7ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037ae7e0) */
/* WARNING: Removing unreachable block (ram,0x0001037ae7f0) */

void FUN_1037ae77c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1037ae8b0(param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1037ae808; end: 1037ae83b;  */

void FUN_1037ae808(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037ae83c; end: 1037ae8af; -[_TtC24AsmInjectionScriptPlugin24AsmInjectionScriptPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037ae86c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037ae894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037ae870) */
/* WARNING: Removing unreachable block (ram,0x0001037ae898) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ae83c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f939c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f939c0 + 8))
  ;
  return;
}



/* Entry: 1037ae8b0; end: 1037aefc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ae8b0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long alStack_d0 [2];
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0x112d36580;
  puVar7 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar14 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar14 - extraout_x12;
  lVar1 = 0;
  func_0x000107c5fb10();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar16 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  plVar2 = param_1;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  plVar3 = plVar2;
  func_0x000107c5faec();
  puVar4 = puVar7;
  func_0x000107c61170();
  func_0x000103c54dc8();
  if ((plVar3 == (long *)*plVar2) && (puVar7 == (undefined *)plVar2[1])) {
    func_0x000107c6142c(puVar7);
LAB_1037ae9ec:
    lVar15 = ((undefined8 *)(unaff_x20 + _DAT_112f939c0))[1];
    if (lVar15 != 0) {
      uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f939c0);
      uStack_90 = 0;
      puStack_88 = (undefined *)0xe000000000000000;
      func_0x000107c602fc(0x2a);
      func_0x000107c6142c(puStack_88);
      uStack_90 = 0xd000000000000026;
      puStack_88 = (undefined *)0x800000010f11d1e0;
      func_0x000107c5fb78(uVar17,lVar15);
      func_0x000107c5fb78(0x3b29,0xe200000000000000);
      puVar7 = puStack_88;
      uVar17 = uStack_90;
      puVar4 = puStack_88;
      func_0x000107c5fadc(uStack_90);
      func_0x000107c6142c(puVar7);
      func_0x000107c42a80(param_2);
      func_0x000107c61170(uVar17);
    }
  }
  else {
    puVar4 = puVar7;
    func_0x000107c605b8();
    func_0x000107c6142c(puVar7);
    if (((ulong)plVar3 & 1) != 0) goto LAB_1037ae9ec;
  }
  plVar2 = param_1;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  plVar3 = plVar2;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x000103c54dd4();
  if ((plVar3 == (long *)*plVar2) && (puVar4 == (undefined *)plVar2[1])) {
    func_0x000107c6142c(puVar4);
  }
  else {
    func_0x000107c605b8(plVar3,puVar4,(long *)*plVar2,(undefined *)plVar2[1],0);
    func_0x000107c6142c(puVar4);
    if (((ulong)plVar3 & 1) == 0) goto LAB_1037aef8c;
  }
  func_0x000107c3eb80(param_1);
  func_0x000107c61180();
  func_0x000107c60234(&uStack_90);
  func_0x000107c615e8(param_1);
  puVar7 = PTR___sypN_11034f1a8;
  plVar2 = &lStack_a0;
  func_0x000107c6147c(plVar2,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  uVar17 = uStack_98;
  if ((int)plVar2 == 0) goto LAB_1037aef8c;
  func_0x000107c5fb04(lVar16);
  func_0x000100e8b654();
  uVar8 = 0;
  lVar15 = lVar16;
  func_0x000107c60214(lVar16,0,PTR___sSSN_11034da80,plVar2);
  (**(code **)(lVar11 + 8))(lVar16,lVar1);
  func_0x000107c6142c(uVar17);
  if (0xe < uVar8 >> 0x3c) goto LAB_1037aef8c;
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  lVar1 = lVar15;
  func_0x000107c5ee20(lVar15,uVar8);
  uStack_90 = 0;
  func_0x000107c3ab8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  uVar17 = uStack_90;
  if (puVar4 == (undefined *)0x0) {
    uVar5 = uStack_90;
    func_0x000107c61174();
    func_0x000107c5ed30(uVar17);
    func_0x000107c61170(uVar5);
    func_0x000107c61654();
    func_0x0001000b44c0(lVar15,uVar8);
    func_0x000107c614ac(uVar17);
    goto LAB_1037aef8c;
  }
  func_0x000107c61174();
  func_0x000107c60234(&uStack_90,puVar4);
  func_0x000107c615e8(puVar4);
  uVar17 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  plVar2 = &lStack_a0;
  func_0x000107c6147c(plVar2,&uStack_90,puVar7 + 8,uVar17,6);
  lVar1 = lStack_a0;
  if (((ulong)plVar2 & 1) != 0) {
    if (*(long *)(lStack_a0 + 0x10) == 0) {
LAB_1037aed08:
      lVar11 = 0;
      uVar17 = 0xe000000000000000;
    }
    else {
      func_0x000107c61434(lStack_a0);
      lVar11 = 0x707954746e657665;
      uVar9 = 0xe900000000000065;
      func_0x000100029284(0x707954746e657665);
      if ((uVar9 & 1) == 0) {
        func_0x000107c6142c(lVar1);
        goto LAB_1037aed08;
      }
      func_0x0001000bb420(*(long *)(lVar1 + 0x38) + lVar11 * 0x20,&uStack_90);
      func_0x000107c6142c(lVar1);
      plVar2 = &lStack_a0;
      func_0x000107c6147c(plVar2,&uStack_90,puVar7 + 8,PTR___sSSN_11034da80,6);
      lVar11 = lStack_a0;
      uVar17 = uStack_98;
      if (((ulong)plVar2 & 1) == 0) goto LAB_1037aed08;
    }
    if (*(long *)(lVar1 + 0x10) == 0) {
LAB_1037aed58:
      puStack_88 = (undefined *)0x0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c61434(lVar1);
      lVar6 = 0x61746164;
      uVar9 = 0;
      func_0x000100029284(0x61746164);
      if ((uVar9 & 1) == 0) {
        func_0x000107c6142c(lVar1);
        goto LAB_1037aed58;
      }
      func_0x0001000bb420(*(long *)(lVar1 + 0x38) + lVar6 * 0x20,&uStack_90);
      func_0x000107c6142c(lVar1);
    }
    func_0x000107c6142c(lVar1);
    lStack_b8 = lVar15;
    if (lStack_78 == 0) {
      FUN_1037aefe8(&uStack_90,0x112d387f8,&UNK_10d902650);
LAB_1037aedb8:
      lVar1 = 0;
      uVar5 = 0xe000000000000000;
    }
    else {
      plVar2 = &lStack_a0;
      func_0x000107c6147c(plVar2,&uStack_90,puVar7 + 8,PTR___sSSN_11034da80,6);
      lVar1 = lStack_a0;
      uVar5 = uStack_98;
      if (((ulong)plVar2 & 1) == 0) goto LAB_1037aedb8;
    }
    func_0x000107c3abfc();
    func_0x000107c61180();
    if (param_2 != 0) {
      func_0x000107c5edb4(puVar14);
      func_0x000107c61170(param_2);
    }
    lVar6 = 0;
    func_0x000107c5ede0();
    lVar12 = *(long *)(lVar6 + -8);
    (**(code **)(lVar12 + 0x38))(puVar14,param_2 == 0,1,lVar6);
    func_0x0001001021cc(puVar14,lVar13);
    uVar10 = 1;
    lVar15 = lVar13;
    (**(code **)(lVar12 + 0x30))(lVar13,1,lVar6);
    if ((int)lVar15 == 1) {
      FUN_1037aefe8(lVar13,0x112d36580,&UNK_10d9016d0);
      lVar15 = 0;
      uVar10 = 0xe000000000000000;
    }
    else {
      func_0x000107c5ed70();
      (**(code **)(lVar12 + 8))(lVar13,lVar6);
    }
    puVar7 = PTR_PTR_1126ad758;
    func_0x000107c610f8(PTR_PTR_1126ad758);
    func_0x000107c5fadc(lVar1,uVar5);
    func_0x000107c6142c(uVar5);
    lVar13 = lVar11;
    func_0x000107c5fadc(lVar11,uVar17);
    func_0x000107c5fadc(lVar15,uVar10);
    func_0x000107c6142c(uVar10);
    func_0x000107c467f0(puVar7);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar15);
    if (*(long *)(unaff_x20 + _DAT_112f939c8) != 0) {
      func_0x000107c4ba10();
    }
    puVar4 = PTR_PTR_1126a6d58;
    func_0x000107c610f8(PTR_PTR_1126a6d58);
    func_0x000107c453e4();
    func_0x000107c5fadc(lVar11,uVar17);
    func_0x000107c6142c(uVar17);
    func_0x000107bc1440(puVar4,lVar11,1);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar11);
    lVar15 = lStack_b8;
  }
  func_0x0001000b44c0(lVar15,uVar8);
LAB_1037aef8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    *(undefined1 **)(lVar16 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(lVar16 + -8) = FUN_1037aefc8;
    func_0x000107c61168(&PTR_PTR_1128ea7e0);
    return;
  }
  return;
}



/* Entry: 1037aefc8; end: 1037aefe7;  */

void FUN_1037aefc8(void)

{
  func_0x000107c61168(&PTR_PTR_1128ea7e0);
  return;
}



/* Entry: 1037aefe8; end: 1037af027;  */

undefined8 FUN_1037aefe8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1037af028; end: 1037af033; -[_TtC28DynamicInjectionScriptPlugin28DynamicInjectionScriptPlugin name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037af028(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f939f8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f939f8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037af034; end: 1037af03f; -[_TtC28DynamicInjectionScriptPlugin28DynamicInjectionScriptPlugin scriptString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037af034(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f93a00);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f93a00))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037af040; end: 1037af087;  */

void FUN_1037af040(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037af088; end: 1037af097; -[_TtC28DynamicInjectionScriptPlugin28DynamicInjectionScriptPlugin injectionTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037af088(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f93a08);
}



/* Entry: 1037af098; end: 1037af0df; -[_TtC28DynamicInjectionScriptPlugin28DynamicInjectionScriptPlugin callbackNames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037af098(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f93a10);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037af0e0; end: 1037af0e7; -[_TtC28DynamicInjectionScriptPlugin28DynamicInjectionScriptPlugin forMainFrameOnly] */

undefined8 FUN_1037af0e0(void)

{
  return 0;
}



/* Entry: 1037af0e8; end: 1037af167; -[_TtC28DynamicInjectionScriptPlugin28DynamicInjectionScriptPlugin userContentController:didReceive:webView:] */

/* WARNING: Possible PIC construction at 0x0001037af140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037af150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037af144) */
/* WARNING: Removing unreachable block (ram,0x0001037af154) */

void FUN_1037af0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1037af2f8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1037af168; end: 1037af1c7; -[_TtC28DynamicInjectionScriptPlugin28DynamicInjectionScriptPlugin init] */

void FUN_1037af168(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DynamicInjectionScriptPlugin.DynamicInjectionScriptPlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037af194);
  (*pcVar1)();
}



/* Entry: 1037af1c8; end: 1037af217; -[_TtC28DynamicInjectionScriptPlugin28DynamicInjectionScriptPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037af1e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037af1ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037af1c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f939f8 + 8))
  ;
  return;
}



/* Entry: 1037af218; end: 1037af237;  */

void FUN_1037af218(void)

{
  func_0x000107c61168(&PTR_PTR_1128ea8d0);
  return;
}



/* Entry: 1037af238; end: 1037af2f7;  */

/* WARNING: Removing unreachable block (ram,0x0001037af420) */

undefined8 ******* FUN_1037af238(long *param_1,undefined8 *******param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******unaff_x20;
  long *unaff_x21;
  undefined8 ******ppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  undefined1 auStack_90 [32];
  long *plStack_70;
  long *plStack_68;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  plStack_40 = (long *)0x0;
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  plStack_68 = plStack_40;
  if (unaff_x20 == (undefined8 *******)0x0) {
    param_1 = plStack_40;
    func_0x000107c61174();
    func_0x000107c5ed30();
    plVar1 = param_1;
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    plVar1 = plStack_40;
    func_0x000107c61174();
    plStack_68 = unaff_x21;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    pcStack_48 = FUN_1037af2f8;
    plVar2 = plVar1;
    plStack_70 = param_1;
    plStack_58 = plStack_68;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    plVar3 = plVar2;
    func_0x000107c5faec();
    func_0x000107c61170();
    func_0x000103c54de0();
    if (plVar3 == (long *)*plVar2 && param_2 == (undefined8 *******)plVar2[1]) {
      func_0x000107c6142c(param_2);
    }
    else {
      func_0x000107c605b8(plVar3,param_2,(long *)*plVar2,(undefined8 *******)plVar2[1],0);
      func_0x000107c6142c(param_2);
      if (((ulong)plVar3 & 1) == 0) {
        return param_2;
      }
    }
    func_0x000107c3eb80(plVar1);
    func_0x000107c61180();
    func_0x000107c60234(auStack_90);
    func_0x000107c615e8(plVar1);
    pppppppuVar4 = &ppppppuStack_a0;
    func_0x000107c6147c(pppppppuVar4,auStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)pppppppuVar4 & 1) != 0) {
      pppppppuVar5 = (undefined8 *******)ppppppuStack_a0;
      pppppppuVar6 = (undefined8 *******)ppppppuStack_98;
      func_0x000107c5ee08(ppppppuStack_a0,ppppppuStack_98,0);
      func_0x000107c6142c(ppppppuStack_98);
      pppppppuVar4 = (undefined8 *******)ppppppuStack_98;
      if ((ulong)pppppppuVar6 >> 0x3c < 0xf) {
        func_0x000107c610f8(PTR_PTR_1126d6e90);
        pppppppuVar4 = pppppppuVar5;
        FUN_1037af238(pppppppuVar5,pppppppuVar6);
        func_0x0001000b44c0(pppppppuVar5,pppppppuVar6);
        func_0x000107c61170(pppppppuVar4);
      }
    }
    return pppppppuVar4;
  }
  return unaff_x20;
}



/* Entry: 1037af2f8; end: 1037af4c7;  */

/* WARNING: Removing unreachable block (ram,0x0001037af420) */

void FUN_1037af2f8(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined1 auStack_50 [32];
  
  plVar1 = param_1;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  plVar2 = plVar1;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x000103c54de0();
  if (plVar2 == (long *)*plVar1 && param_2 == plVar1[1]) {
    func_0x000107c6142c(param_2);
  }
  else {
    func_0x000107c605b8(plVar2,param_2,(long *)*plVar1,plVar1[1],0);
    func_0x000107c6142c(param_2);
    if (((ulong)plVar2 & 1) == 0) {
      return;
    }
  }
  func_0x000107c3eb80(param_1);
  func_0x000107c61180();
  func_0x000107c60234(auStack_50);
  func_0x000107c615e8(param_1);
  puVar3 = &uStack_60;
  func_0x000107c6147c(puVar3,auStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)puVar3 & 1) != 0) {
    uVar4 = uStack_60;
    uVar6 = uStack_58;
    func_0x000107c5ee08(uStack_60,uStack_58,0);
    func_0x000107c6142c(uStack_58);
    if (uVar6 >> 0x3c < 0xf) {
      func_0x000107c610f8(PTR_PTR_1126d6e90);
      uVar5 = uVar4;
      FUN_1037af238(uVar4,uVar6);
      func_0x0001000b44c0(uVar4,uVar6);
      func_0x000107c61170(uVar5);
    }
  }
  return;
}



/* Entry: 1037af4c8; end: 1037af7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037af4c8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long alStack_80 [3];
  undefined8 uStack_68;
  
  func_0x000100083b20(alStack_80 + 2);
  lVar2 = alStack_80[2];
  uVar10 = *(undefined8 *)(alStack_80[2] + _DAT_11308d048);
  func_0x000107c6157c(uVar10);
  func_0x000107c61170(lVar2);
  func_0x0001000d224c(alStack_80);
  func_0x000107c61574(uVar10);
  lVar2 = alStack_80[0];
  lVar3 = alStack_80[0];
  func_0x000107c423bc();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5faec();
    uVar10 = param_3;
    func_0x000107c61170(lVar3);
    func_0x000100083b20(alStack_80 + 2);
    uVar11 = *(undefined8 *)(alStack_80[2] + _DAT_113011788);
    func_0x000107c6157c(uVar11);
    func_0x000107c61170(alStack_80[2]);
    func_0x0001000d224c(alStack_80);
    func_0x000107c61574(uVar11);
    lVar3 = lVar2;
    func_0x000107c423c0(lVar2);
    func_0x000107c61180();
    lVar4 = alStack_80[0];
    func_0x000107c4428c();
    func_0x000107c61180();
    func_0x000107c615e8(alStack_80[0]);
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
      lVar5 = 0;
      FUN_1037af218();
      lVar4 = lVar5;
      func_0x000107c610f8();
      puVar6 = (undefined8 *)(lVar4 + _DAT_112f939f8);
      *puVar6 = 0x5f63696d616e7964;
      puVar6[1] = 0xee00747069726373;
      *(undefined8 *)(lVar4 + _DAT_112f93a08) = 0;
      lVar3 = _DAT_112f93a10;
      puVar6 = (undefined8 *)0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      puVar6[3] = 2;
      puVar6[2] = 1;
      puVar7 = puVar6;
      func_0x000103c54de0();
      uVar11 = puVar7[1];
      puVar6[4] = *puVar7;
      puVar6[5] = uVar11;
      *(undefined8 **)(lVar4 + lVar3) = puVar6;
      *(undefined1 *)(lVar4 + _DAT_112f93a18) = 0;
      alStack_80[0] = -0x2fffffffffffffe9;
      alStack_80[1] = 0x800000010f164ec0;
      uStack_88 = param_3;
      uStack_68 = uVar10;
      func_0x000100e8b654();
      func_0x000107c61434(uVar11);
      plVar9 = alStack_80;
      puVar8 = auStack_90;
      func_0x000107c601fc(plVar9,puVar8,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                          PTR___sSSN_11034da80,puVar7,puVar7,puVar7);
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c(param_3);
      plVar1 = (long *)(lVar4 + _DAT_112f93a00);
      *plVar1 = (long)plVar9;
      plVar1[1] = (long)puVar8;
      plVar9 = &lStack_a0;
      lStack_a0 = lVar4;
      lStack_98 = lVar5;
      func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
      func_0x000107c615e8(lVar2);
      goto LAB_1037af79c;
    }
    func_0x000107c6142c(param_3);
  }
  func_0x000107c615e8(lVar2);
  plVar9 = (long *)0x0;
LAB_1037af79c:
  *param_1 = (long)plVar9;
  return;
}



/* Entry: 1037af7c0; end: 1037af7d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037af7c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long *plVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long alStack_80 [3];
  undefined8 uStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(alStack_80 + 2,*(undefined8 *)(unaff_x20 + 0x10));
  lVar2 = alStack_80[2];
  uVar11 = *(undefined8 *)(alStack_80[2] + _DAT_11308d048);
  func_0x000107c6157c(uVar11);
  func_0x000107c61170(lVar2);
  func_0x0001000d224c(alStack_80);
  func_0x000107c61574(uVar11);
  lVar2 = alStack_80[0];
  lVar3 = alStack_80[0];
  func_0x000107c423bc();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5faec();
    uVar11 = uVar8;
    func_0x000107c61170(lVar3);
    func_0x000100083b20(alStack_80 + 2);
    uVar12 = *(undefined8 *)(alStack_80[2] + _DAT_113011788);
    func_0x000107c6157c(uVar12);
    func_0x000107c61170(alStack_80[2]);
    func_0x0001000d224c(alStack_80);
    func_0x000107c61574(uVar12);
    lVar3 = lVar2;
    func_0x000107c423c0(lVar2);
    func_0x000107c61180();
    lVar4 = alStack_80[0];
    func_0x000107c4428c();
    func_0x000107c61180();
    func_0x000107c615e8(alStack_80[0]);
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
      lVar5 = 0;
      FUN_1037af218();
      lVar4 = lVar5;
      func_0x000107c610f8();
      puVar6 = (undefined8 *)(lVar4 + _DAT_112f939f8);
      *puVar6 = 0x5f63696d616e7964;
      puVar6[1] = 0xee00747069726373;
      *(undefined8 *)(lVar4 + _DAT_112f93a08) = 0;
      lVar3 = _DAT_112f93a10;
      puVar6 = (undefined8 *)0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      puVar6[3] = 2;
      puVar6[2] = 1;
      puVar7 = puVar6;
      func_0x000103c54de0();
      uVar12 = puVar7[1];
      puVar6[4] = *puVar7;
      puVar6[5] = uVar12;
      *(undefined8 **)(lVar4 + lVar3) = puVar6;
      *(undefined1 *)(lVar4 + _DAT_112f93a18) = 0;
      alStack_80[0] = -0x2fffffffffffffe9;
      alStack_80[1] = 0x800000010f164ec0;
      uStack_88 = uVar8;
      uStack_68 = uVar11;
      func_0x000100e8b654();
      func_0x000107c61434(uVar12);
      plVar10 = alStack_80;
      puVar9 = auStack_90;
      func_0x000107c601fc(plVar10,puVar9,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                          PTR___sSSN_11034da80,puVar7,puVar7,puVar7);
      func_0x000107c6142c(uVar11);
      func_0x000107c6142c(uVar8);
      plVar1 = (long *)(lVar4 + _DAT_112f93a00);
      *plVar1 = (long)plVar10;
      plVar1[1] = (long)puVar9;
      plVar10 = &lStack_a0;
      lStack_a0 = lVar4;
      lStack_98 = lVar5;
      func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
      func_0x000107c615e8(lVar2);
      goto LAB_1037af79c;
    }
    func_0x000107c6142c(uVar8);
  }
  func_0x000107c615e8(lVar2);
  plVar10 = (long *)0x0;
LAB_1037af79c:
  *param_1 = (long)plVar10;
  return;
}



/* Entry: 1037af7d8; end: 1037af7e3; -[_TtC39PerformanceMetricsInjectionScriptPlugin39PerformanceMetricsInjectionScriptPlugin name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037af7d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f93a48);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f93a48))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037af7e4; end: 1037af7ef; -[_TtC39PerformanceMetricsInjectionScriptPlugin39PerformanceMetricsInjectionScriptPlugin scriptString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037af7e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f93a50);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f93a50))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037af7f0; end: 1037af837;  */

void FUN_1037af7f0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037af838; end: 1037af847; -[_TtC39PerformanceMetricsInjectionScriptPlugin39PerformanceMetricsInjectionScriptPlugin injectionTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037af838(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f93a58);
}



/* Entry: 1037af848; end: 1037af84f; -[_TtC39PerformanceMetricsInjectionScriptPlugin39PerformanceMetricsInjectionScriptPlugin forMainFrameOnly] */

undefined8 FUN_1037af848(void)

{
  return 0;
}



/* Entry: 1037af850; end: 1037af897; -[_TtC39PerformanceMetricsInjectionScriptPlugin39PerformanceMetricsInjectionScriptPlugin callbackNames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037af850(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f93a68);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037af898; end: 1037af91f; -[_TtC39PerformanceMetricsInjectionScriptPlugin39PerformanceMetricsInjectionScriptPlugin userContentController:didReceive:webView:] */

/* WARNING: Possible PIC construction at 0x0001037af8f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037af904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037af8f8) */
/* WARNING: Removing unreachable block (ram,0x0001037af908) */

void FUN_1037af898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1037aff58(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1037af920; end: 1037af97f; -[_TtC39PerformanceMetricsInjectionScriptPlugin39PerformanceMetricsInjectionScriptPlugin init] */

void FUN_1037af920(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PerformanceMetricsInjectionScriptPlugin.PerformanceMetricsInjectionScriptPlugin"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037af94c);
  (*pcVar1)();
}



/* Entry: 1037af980; end: 1037af9df; -[_TtC39PerformanceMetricsInjectionScriptPlugin39PerformanceMetricsInjectionScriptPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037af980(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f93a48 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f93a50 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f93a68));
  param_1 = param_1 + _DAT_112f93a70;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1037af9e0; end: 1037af9ff;  */

void FUN_1037af9e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128ea9b0);
  return;
}



/* Entry: 1037afa00; end: 1037afe3f;  */

undefined1  [16] FUN_1037afa00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000103c54e04();
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c602fc(0x19d7);
  func_0x000107c5fb78(0xd000000000000c97,0x800000010f165060);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f164f50);
  func_0x000107c5fb78(0xd000000000000080,0x800000010f165d00);
  func_0x000107c5fb78(0xd000000000000019,0x800000010f164f30);
  func_0x000107c5fb78(0xd00000000000009c,0x800000010f165d90);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f164f90);
  func_0x000107c5fb78(0xd0000000000000b7,0x800000010f165e30);
  func_0x000107c5fb78(0xd000000000000015,0x800000010f164f70);
  func_0x000107c5fb78(0xd00000000000009d,0x800000010f165ef0);
  func_0x000107c5fb78(0x616f6c5f6c6c7566,0xec000000736d5f64);
  func_0x000107c5fb78(0xd000000000000098,0x800000010f165f90);
  func_0x000107c5fb78(0x65736e6f70736572,0xef736d5f646e655f);
  func_0x000107c5fb78(0xd00000000000002d,0x800000010f166030);
  func_0x000107c5fb78(0x695f61675f736168,0xef646564756c636e);
  func_0x000107c5fb78(0xd000000000000048,0x800000010f166060);
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c5fb78(0xd0000000000001c9,0x800000010f1660b0);
  func_0x000107c5fb78(0x695f61675f736168,0xef646564756c636e);
  func_0x000107c5fb78(0xd000000000000048,0x800000010f166060);
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c5fb78(0xd0000000000000ab,0x800000010f166280);
  func_0x000107c5fb78(0xd000000000000017,0x800000010f164fb0);
  func_0x000107c5fb78(0xd000000000000030,0x800000010f166330);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f164fd0);
  func_0x000107c5fb78(0xd000000000000084,0x800000010f166370);
  func_0x000107c5fb78(0x745f7469685f6167,0xec00000073657079);
  func_0x000107c5fb78(0xd000000000000034,0x800000010f166400);
  func_0x000107c5fb78(0xd000000000000014,0x800000010f164ff0);
  func_0x000107c5fb78(0xd000000000000028,0x800000010f166440);
  func_0x000107c5fb78(0xd000000000000024,0x800000010f165010);
  func_0x000107c5fb78(0xd000000000000035,0x800000010f166470);
  func_0x000107c5fb78(0x695f61675f736168,0xef646564756c636e);
  func_0x000107c5fb78(0xd000000000000048,0x800000010f166060);
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c5fb78(0xd000000000000558,0x800000010f1664b0);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1037afe40; end: 1037aff57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037afe40(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f93a48);
  *puVar2 = 0xd000000000000013;
  puVar2[1] = 0x800000010f165040;
  *(undefined8 *)(unaff_x20 + _DAT_112f93a58) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f93a60) = 0;
  lVar1 = _DAT_112f93a68;
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 2;
  puVar2[2] = 1;
  puVar3 = puVar2;
  func_0x000103c54e04();
  uVar4 = puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = uVar4;
  *(undefined8 **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f93a70;
  func_0x000107c61614(unaff_x20 + _DAT_112f93a70,0);
  func_0x000107c61604(unaff_x20 + lVar1);
  func_0x000107c61434();
  FUN_1037afa00();
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f93a50);
  *puVar2 = uVar4;
  puVar2[1] = param_1;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037aff58; end: 1037b0db3;  */

/* WARNING: Possible PIC construction at 0x0001037b0a64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037b0a68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ***** FUN_1037aff58(long *****param_1,long *****param_2)

{
  long lVar1;
  undefined *puVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  long lVar6;
  undefined *puVar7;
  double *pdVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  ulong uVar11;
  char *pcVar12;
  undefined1 uVar13;
  long extraout_x8;
  long ****pppplVar14;
  byte bVar15;
  long unaff_x20;
  long ****pppplVar16;
  long *****ppppplVar17;
  long ****pppplVar18;
  undefined8 uVar19;
  undefined8 auStack_550 [2];
  undefined2 uStack_540;
  undefined1 auStack_53e [6];
  undefined8 auStack_538 [4];
  undefined1 auStack_518 [8];
  undefined8 uStack_510;
  undefined1 auStack_508 [8];
  undefined8 uStack_500;
  undefined1 auStack_4f8 [8];
  undefined8 uStack_4f0;
  undefined1 auStack_4e8 [8];
  undefined8 uStack_4e0;
  undefined1 auStack_4d8 [8];
  undefined8 uStack_4d0;
  undefined1 auStack_4c8 [8];
  undefined8 auStack_4c0 [2];
  long lStack_4b0;
  undefined8 uStack_4a8;
  long alStack_4a0 [2];
  long ***ppplStack_490;
  char *pcStack_488;
  double adStack_480 [2];
  long ***ppplStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long lStack_458;
  long ****pppplStack_370;
  long ****pppplStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long ***ppplStack_300;
  undefined8 uStack_2f8;
  long ***ppplStack_2f0;
  undefined8 uStack_2e8;
  long ***ppplStack_2e0;
  undefined8 uStack_2d8;
  long ***ppplStack_2d0;
  undefined8 uStack_2c8;
  long ***ppplStack_2c0;
  undefined8 uStack_2b8;
  long ***ppplStack_2b0;
  undefined8 uStack_2a8;
  long ***ppplStack_2a0;
  long ***ppplStack_298;
  undefined8 uStack_290;
  long ***ppplStack_288;
  undefined4 uStack_280;
  long ****pppplStack_270;
  long ****pppplStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  long ****pppplStack_170;
  long ****pppplStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long ***ppplStack_100;
  undefined8 uStack_f8;
  long ***ppplStack_f0;
  undefined8 uStack_e8;
  long ***ppplStack_e0;
  undefined8 uStack_d8;
  long ***ppplStack_d0;
  undefined8 uStack_c8;
  long ***ppplStack_c0;
  undefined8 uStack_b8;
  long ***ppplStack_b0;
  undefined8 uStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  undefined8 uStack_90;
  long ***ppplStack_88;
  undefined4 uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar3 = (long *****)0x0;
  func_0x000107c5fb10();
  pppplVar18 = ppppplVar3[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(pppplVar18[8]);
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  ppppplVar17 = (long *****)((long)&ppplStack_490 + lVar1);
  ppppplVar4 = param_1;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  ppppplVar10 = ppppplVar4;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x000103c54e04();
  if (ppppplVar10 == (long *****)*ppppplVar4 && param_2 == (long *****)ppppplVar4[1]) {
    func_0x000107c6142c(param_2);
LAB_1037b0034:
    func_0x000107c3eb80();
    func_0x000107c61180();
    func_0x000107c60234(&pppplStack_170);
    func_0x000107c615e8(param_1);
    puVar2 = PTR___sypN_11034f1a8;
    param_2 = &pppplStack_270;
    ppppplVar9 = &pppplStack_170;
    func_0x000107c6147c(param_2,ppppplVar9,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    ppppplVar4 = (long *****)pppplStack_268;
    if (((ulong)param_2 & 1) != 0) {
      pppplStack_170 = pppplStack_270;
      pppplStack_168 = pppplStack_268;
      func_0x000107c5fb04(ppppplVar17);
      func_0x000100e8b654();
      ppppplVar10 = (long *****)0x0;
      ppppplVar5 = ppppplVar17;
      func_0x000107c60214(ppppplVar17,0,PTR___sSSN_11034da80,param_2);
      (*(code *)pppplVar18[1])(ppppplVar17,ppppplVar3);
      func_0x000107c6142c(ppppplVar4);
      param_2 = ppppplVar4;
      ppppplVar9 = ppppplVar3;
      param_1 = &pppplStack_170;
      if ((ulong)ppppplVar10 >> 0x3c < 0xf) {
        ppppplVar4 = (long *****)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x000107c61168();
        ppppplVar3 = ppppplVar5;
        func_0x000107c5ee20(ppppplVar5,ppppplVar10);
        pppplStack_170 = (long ****)0x0;
        func_0x000107c3ab8c();
        func_0x000107c61180();
        func_0x000107c61170(ppppplVar3);
        param_1 = (long *****)pppplStack_170;
        if (ppppplVar4 == (long *****)0x0) {
          ppppplVar4 = (long *****)pppplStack_170;
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(ppppplVar4);
          func_0x000107c61654();
          func_0x0001000b44c0(ppppplVar5,ppppplVar10);
          param_2 = param_1;
          func_0x000107c614ac(param_1);
          ppppplVar9 = ppppplVar10;
        }
        else {
          func_0x000107c61174();
          func_0x000107c60234(&pppplStack_170,ppppplVar4);
          func_0x000107c615e8(ppppplVar4);
          uVar19 = 0x112d472a8;
          func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
          ppppplVar3 = &pppplStack_270;
          func_0x000107c6147c(ppppplVar3,&pppplStack_170,puVar2 + 8,uVar19,6);
          pppplVar18 = pppplStack_270;
          if (((ulong)ppppplVar3 & 1) == 0) {
            func_0x0001000b44c0(ppppplVar5,ppppplVar10);
            param_2 = ppppplVar5;
            ppppplVar9 = ppppplVar10;
            param_1 = ppppplVar4;
          }
          else {
            bVar15 = 1;
            *(undefined4 *)((long)alStack_4a0 + lVar1) = 1;
            *(undefined8 *)((long)&uStack_4a8 + lVar1) = 0;
            *(undefined1 *)((long)&lStack_4b0 + lVar1) = 1;
            *(undefined8 *)((long)auStack_4c0 + lVar1 + 8) = 0;
            *(undefined8 *)((long)auStack_4c0 + lVar1) = 0;
            auStack_4c8[lVar1] = 1;
            *(undefined8 *)((long)&uStack_4d0 + lVar1) = 0;
            auStack_4d8[lVar1] = 1;
            *(undefined8 *)((long)&uStack_4e0 + lVar1) = 0;
            auStack_4e8[lVar1] = 1;
            *(undefined8 *)((long)&uStack_4f0 + lVar1) = 0;
            auStack_4f8[lVar1] = 1;
            *(undefined8 *)((long)&uStack_500 + lVar1) = 0;
            auStack_508[lVar1] = 1;
            *(undefined8 *)((long)&uStack_510 + lVar1) = 0;
            auStack_518[lVar1] = 1;
            *(undefined8 *)((long)auStack_538 + lVar1 + 0x18) = 0;
            *(undefined8 *)((long)auStack_538 + lVar1 + 0x10) = 0;
            *(undefined8 *)((long)auStack_538 + lVar1 + 8) = 0;
            *(undefined8 *)((long)auStack_538 + lVar1) = 0;
            auStack_53e[lVar1] = 2;
            *(undefined2 *)((long)&uStack_540 + lVar1) = 0x201;
            *(undefined8 *)((long)auStack_550 + lVar1 + 8) = 0;
            *(undefined8 *)((long)auStack_550 + lVar1) = 0;
            func_0x000104642684(&pppplStack_270,2,0,0,0,0,0,1,0);
            uStack_2a8 = uStack_1a8;
            ppplStack_2b0 = (long ***)uStack_1b0;
            ppplStack_298 = (long ***)uStack_198;
            ppplStack_2a0 = (long ***)uStack_1a0;
            ppplStack_288 = (long ***)uStack_188;
            uStack_290 = uStack_190;
            uStack_280 = uStack_180;
            uStack_2e8 = uStack_1e8;
            ppplStack_2f0 = (long ***)uStack_1f0;
            uStack_2d8 = uStack_1d8;
            ppplStack_2e0 = (long ***)uStack_1e0;
            uStack_2c8 = uStack_1c8;
            ppplStack_2d0 = (long ***)uStack_1d0;
            uStack_2b8 = uStack_1b8;
            ppplStack_2c0 = (long ***)uStack_1c0;
            uStack_328 = uStack_228;
            uStack_330 = uStack_230;
            uStack_318 = uStack_218;
            uStack_320 = uStack_220;
            uStack_308 = uStack_208;
            uStack_310 = uStack_210;
            uStack_2f8 = uStack_1f8;
            ppplStack_300 = (long ***)uStack_200;
            pppplStack_368 = pppplStack_268;
            pppplStack_370 = pppplStack_270;
            uStack_358 = uStack_258;
            uStack_360 = uStack_260;
            uStack_348 = uStack_248;
            uStack_350 = uStack_250;
            uStack_338 = uStack_238;
            uStack_340 = uStack_240;
            pppplVar14 = (long ****)0x0;
            if ((long ****)pppplVar18[2] != (long ****)0x0) {
              func_0x000107c61434(pppplVar18);
              lVar6 = -0x2fffffffffffffe7;
              uVar11 = 0;
              func_0x000100029284(0xd000000000000019);
              if ((uVar11 & 1) == 0) {
                func_0x000107c6142c(pppplVar18);
                pppplVar14 = (long ****)0x0;
                bVar15 = 1;
              }
              else {
                func_0x0001000bb420(pppplVar18[7] + lVar6 * 4,&pppplStack_170);
                func_0x000107c6142c(pppplVar18);
                pppplVar16 = &ppplStack_470;
                func_0x000107c6147c(pppplVar16,&pppplStack_170,puVar2 + 8,PTR___sSdN_11034dd90,6);
                pppplVar14 = (long ****)ppplStack_470;
                if ((int)pppplVar16 == 0) {
                  pppplVar14 = (long ****)0x0;
                }
                bVar15 = (byte)pppplVar16 ^ 1;
              }
            }
            uStack_2f8 = CONCAT71(uStack_2f8._1_7_,bVar15);
            ppplStack_300 = (long ***)pppplVar14;
            if ((long ****)pppplVar18[2] == (long ****)0x0) {
LAB_1037b03c8:
              ppplStack_2f0 = (long ***)0x0;
              bVar15 = 1;
            }
            else {
              func_0x000107c61434(pppplVar18);
              lVar6 = -0x2fffffffffffffed;
              uVar11 = 0;
              func_0x000100029284(0xd000000000000013);
              if ((uVar11 & 1) == 0) {
                func_0x000107c6142c(pppplVar18);
                goto LAB_1037b03c8;
              }
              func_0x0001000bb420(pppplVar18[7] + lVar6 * 4,&pppplStack_170);
              func_0x000107c6142c(pppplVar18);
              pppplVar14 = &ppplStack_470;
              func_0x000107c6147c(pppplVar14,&pppplStack_170,puVar2 + 8,PTR___sSdN_11034dd90,6);
              ppplStack_2f0 = ppplStack_470;
              if ((int)pppplVar14 == 0) {
                ppplStack_2f0 = (long ***)0x0;
              }
              bVar15 = (byte)pppplVar14 ^ 1;
            }
            uStack_2e8 = CONCAT71(uStack_2e8._1_7_,bVar15);
            pcStack_488 = "nceMetricsInjectionScriptPlugin";
            if ((long ****)pppplVar18[2] == (long ****)0x0) {
LAB_1037b045c:
              ppplStack_2e0 = (long ***)0x0;
              bVar15 = 1;
            }
            else {
              func_0x000107c61434(pppplVar18);
              lVar6 = -0x2fffffffffffffeb;
              uVar11 = 0;
              func_0x000100029284(0xd000000000000015);
              if ((uVar11 & 1) == 0) {
                func_0x000107c6142c(pppplVar18);
                goto LAB_1037b045c;
              }
              func_0x0001000bb420(pppplVar18[7] + lVar6 * 4,&pppplStack_170);
              func_0x000107c6142c(pppplVar18);
              pppplVar14 = &ppplStack_470;
              func_0x000107c6147c(pppplVar14,&pppplStack_170,puVar2 + 8,PTR___sSdN_11034dd90,6);
              ppplStack_2e0 = ppplStack_470;
              if ((int)pppplVar14 == 0) {
                ppplStack_2e0 = (long ***)0x0;
              }
              bVar15 = (byte)pppplVar14 ^ 1;
            }
            uStack_2d8 = CONCAT71(uStack_2d8._1_7_,bVar15);
            if ((long ****)pppplVar18[2] == (long ****)0x0) {
LAB_1037b0504:
              ppplStack_2d0 = (long ***)0x0;
              bVar15 = 1;
            }
            else {
              func_0x000107c61434(pppplVar18);
              uVar11 = 0;
              lVar6 = -0x2fffffffffffffee;
              func_0x000100029284(0xd000000000000012);
              if ((uVar11 & 1) == 0) {
                func_0x000107c6142c(pppplVar18);
                goto LAB_1037b0504;
              }
              func_0x0001000bb420(pppplVar18[7] + lVar6 * 4,&pppplStack_170);
              func_0x000107c6142c(pppplVar18);
              pppplVar14 = &ppplStack_470;
              func_0x000107c6147c(pppplVar14,&pppplStack_170,puVar2 + 8,PTR___sSdN_11034dd90,6);
              ppplStack_2d0 = ppplStack_470;
              if ((int)pppplVar14 == 0) {
                ppplStack_2d0 = (long ***)0x0;
              }
              bVar15 = (byte)pppplVar14 ^ 1;
            }
            uVar11 = 0;
            lVar6 = 0x616f6c5f6c6c7566;
            uStack_2c8 = CONCAT71(uStack_2c8._1_7_,bVar15);
            if ((long ****)pppplVar18[2] == (long ****)0x0) {
LAB_1037b05a4:
              ppplStack_2c0 = (long ***)0x0;
              bVar15 = 1;
            }
            else {
              func_0x000107c61434(pppplVar18);
              func_0x000100029284(0x616f6c5f6c6c7566);
              if ((uVar11 & 1) == 0) {
                func_0x000107c6142c(pppplVar18);
                goto LAB_1037b05a4;
              }
              func_0x0001000bb420(pppplVar18[7] + lVar6 * 4,&pppplStack_170);
              func_0x000107c6142c(pppplVar18);
              pppplVar14 = &ppplStack_470;
              func_0x000107c6147c(pppplVar14,&pppplStack_170,puVar2 + 8,PTR___sSdN_11034dd90,6);
              ppplStack_2c0 = ppplStack_470;
              if ((int)pppplVar14 == 0) {
                ppplStack_2c0 = (long ***)0x0;
              }
              bVar15 = (byte)pppplVar14 ^ 1;
            }
            uStack_2b8 = CONCAT71(uStack_2b8._1_7_,bVar15);
            if ((long ****)pppplVar18[2] == (long ****)0x0) {
              bVar15 = 1;
              ppplStack_2b0 = (long ***)0x0;
            }
            else {
              func_0x000107c61434(pppplVar18);
              lVar6 = 0x65736e6f70736572;
              uVar11 = 0xef736d5f646e655f;
              func_0x000100029284(0x65736e6f70736572);
              if ((uVar11 & 1) == 0) {
                func_0x000107c6142c(pppplVar18);
                ppplStack_2b0 = (long ***)0x0;
                bVar15 = 1;
              }
              else {
                func_0x0001000bb420(pppplVar18[7] + lVar6 * 4,&pppplStack_170);
                func_0x000107c6142c(pppplVar18);
                pppplVar14 = &ppplStack_470;
                func_0x000107c6147c(pppplVar14,&pppplStack_170,puVar2 + 8,PTR___sSdN_11034dd90,6);
                ppplStack_2b0 = ppplStack_470;
                if ((int)pppplVar14 == 0) {
                  ppplStack_2b0 = (long ***)0x0;
                }
                bVar15 = (byte)pppplVar14 ^ 1;
              }
            }
            uStack_2a8 = CONCAT71(uStack_2a8._1_7_,bVar15);
            if ((long ****)pppplVar18[2] == (long ****)0x0) {
LAB_1037b06f0:
              ppplStack_298 = (long ***)0x0;
              bVar15 = 1;
            }
            else {
              func_0x000107c61434(pppplVar18);
              lVar6 = -0x2fffffffffffffe9;
              uVar11 = 0;
              func_0x000100029284(0xd000000000000017);
              if ((uVar11 & 1) == 0) {
                func_0x000107c6142c(pppplVar18);
                goto LAB_1037b06f0;
              }
              func_0x0001000bb420(pppplVar18[7] + lVar6 * 4,&pppplStack_170);
              func_0x000107c6142c(pppplVar18);
              pppplVar14 = &ppplStack_470;
              func_0x000107c6147c(pppplVar14,&pppplStack_170,puVar2 + 8,PTR___sSdN_11034dd90,6);
              ppplStack_298 = ppplStack_470;
              if ((int)pppplVar14 == 0) {
                ppplStack_298 = (long ***)0x0;
              }
              bVar15 = (byte)pppplVar14 ^ 1;
            }
            uStack_290 = CONCAT71(uStack_290._1_7_,bVar15);
            if ((long ****)pppplVar18[2] == (long ****)0x0) {
LAB_1037b0784:
              ppplStack_288 = (long ***)0x0;
              bVar15 = 1;
            }
            else {
              func_0x000107c61434(pppplVar18);
              uVar11 = 0;
              lVar6 = -0x2fffffffffffffee;
              func_0x000100029284(0xd000000000000012);
              if ((uVar11 & 1) == 0) {
                func_0x000107c6142c(pppplVar18);
                goto LAB_1037b0784;
              }
              func_0x0001000bb420(pppplVar18[7] + lVar6 * 4,&pppplStack_170);
              func_0x000107c6142c(pppplVar18);
              pppplVar14 = &ppplStack_470;
              func_0x000107c6147c(pppplVar14,&pppplStack_170,puVar2 + 8,PTR___sSdN_11034dd90,6);
              ppplStack_288 = ppplStack_470;
              if ((int)pppplVar14 == 0) {
                ppplStack_288 = (long ***)0x0;
              }
              bVar15 = (byte)pppplVar14 ^ 1;
            }
            uStack_178 = uStack_1a0;
            uStack_280 = CONCAT31(uStack_280._1_3_,bVar15);
            if ((long ****)pppplVar18[2] == (long ****)0x0) {
LAB_1037b0840:
              func_0x0001037b0df0(&uStack_178,0x112d445a8,&UNK_10d990150);
              pppplVar16 = (long ****)0x0;
            }
            else {
              func_0x000107c61434(pppplVar18);
              lVar6 = 0x745f7469685f6167;
              uVar11 = 0xec00000073657079;
              func_0x000100029284(0x745f7469685f6167);
              if ((uVar11 & 1) == 0) {
                func_0x000107c6142c(pppplVar18);
                goto LAB_1037b0840;
              }
              func_0x0001000bb420(pppplVar18[7] + lVar6 * 4,&pppplStack_170);
              func_0x000107c6142c(pppplVar18);
              uVar19 = 0x112d38270;
              func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
              pppplVar14 = &ppplStack_470;
              func_0x000107c6147c(pppplVar14,&pppplStack_170,puVar2 + 8,uVar19,6);
              pppplVar16 = (long ****)ppplStack_470;
              if (((ulong)pppplVar14 & 1) == 0) goto LAB_1037b0840;
              func_0x0001037b0df0(&uStack_178,0x112d445a8,&UNK_10d990150);
            }
            uVar13 = 0;
            ppplStack_2a0 = (long ***)pppplVar16;
            if ((long ****)pppplVar18[2] != (long ****)0x0) {
              func_0x000107c61434(pppplVar18);
              lVar6 = -0x2fffffffffffffec;
              uVar11 = 0;
              func_0x000100029284(0xd000000000000014);
              if ((uVar11 & 1) == 0) {
                func_0x000107c6142c(pppplVar18);
              }
              else {
                func_0x0001000bb420(pppplVar18[7] + lVar6 * 4,&pppplStack_170);
                func_0x000107c6142c(pppplVar18);
                pppplVar14 = &ppplStack_470;
                func_0x000107c6147c(pppplVar14,&pppplStack_170,puVar2 + 8,PTR___sSbN_11034dd40,6);
                if (((ulong)pppplVar14 & 1) != 0) {
                  uVar13 = SUB81(ppplStack_470,0);
                  goto LAB_1037b08dc;
                }
              }
              uVar13 = 0;
            }
LAB_1037b08dc:
            uStack_280._0_2_ = CONCAT11(uVar13,(undefined1)uStack_280);
            uVar13 = 0;
            if ((long ****)pppplVar18[2] != (long ****)0x0) {
              func_0x000107c61434(pppplVar18);
              lVar6 = -0x2fffffffffffffdc;
              uVar11 = 0;
              func_0x000100029284(0xd000000000000024);
              if ((uVar11 & 1) == 0) {
                func_0x000107c6142c(pppplVar18);
              }
              else {
                func_0x0001000bb420(pppplVar18[7] + lVar6 * 4,&pppplStack_170);
                func_0x000107c6142c(pppplVar18);
                pppplVar14 = &ppplStack_470;
                func_0x000107c6147c(pppplVar14,&pppplStack_170,puVar2 + 8,PTR___sSbN_11034dd40,6);
                if (((ulong)pppplVar14 & 1) != 0) {
                  uVar13 = SUB81(ppplStack_470,0);
                  goto LAB_1037b095c;
                }
              }
              uVar13 = 0;
            }
LAB_1037b095c:
            uStack_280._0_3_ = CONCAT12(uVar13,(undefined2)uStack_280);
            uVar13 = 0;
            if ((long ****)pppplVar18[2] != (long ****)0x0) {
              func_0x000107c61434(pppplVar18);
              lVar6 = 0x695f61675f736168;
              uVar11 = 0;
              func_0x000100029284(0x695f61675f736168);
              if ((uVar11 & 1) == 0) {
                func_0x000107c6142c(pppplVar18);
              }
              else {
                func_0x0001000bb420(pppplVar18[7] + lVar6 * 4,&pppplStack_170);
                func_0x000107c6142c(pppplVar18);
                pppplVar14 = &ppplStack_470;
                func_0x000107c6147c(pppplVar14,&pppplStack_170,puVar2 + 8,PTR___sSbN_11034dd40,6);
                if (((ulong)pppplVar14 & 1) != 0) {
                  uVar13 = SUB81(ppplStack_470,0);
                  goto LAB_1037b09e8;
                }
              }
              uVar13 = 0;
            }
LAB_1037b09e8:
            uStack_280 = CONCAT13(uVar13,(undefined3)uStack_280);
            lVar6 = unaff_x20 + _DAT_112f93a70;
            func_0x000107c61618();
            if (lVar6 != 0) {
              uStack_a8 = uStack_2a8;
              ppplStack_b0 = ppplStack_2b0;
              ppplStack_98 = ppplStack_298;
              ppplStack_a0 = ppplStack_2a0;
              ppplStack_88 = ppplStack_288;
              uStack_90 = uStack_290;
              uStack_80 = uStack_280;
              uStack_e8 = uStack_2e8;
              ppplStack_f0 = ppplStack_2f0;
              uStack_d8 = uStack_2d8;
              ppplStack_e0 = ppplStack_2e0;
              uStack_c8 = uStack_2c8;
              ppplStack_d0 = ppplStack_2d0;
              uStack_b8 = uStack_2b8;
              ppplStack_c0 = ppplStack_2c0;
              uStack_128 = uStack_328;
              uStack_130 = uStack_330;
              uStack_118 = uStack_318;
              uStack_120 = uStack_320;
              uStack_108 = uStack_308;
              uStack_110 = uStack_310;
              uStack_f8 = uStack_2f8;
              ppplStack_100 = ppplStack_300;
              pppplStack_168 = pppplStack_368;
              pppplStack_170 = pppplStack_370;
              uStack_158 = uStack_358;
              uStack_160 = uStack_360;
              uStack_148 = uStack_348;
              uStack_150 = uStack_350;
              uStack_138 = uStack_338;
              uStack_140 = uStack_340;
              param_1 = (long *****)0x0;
              func_0x00010465c0fc();
              func_0x000107c610f8();
              param_2 = &pppplStack_170;
              ppppplVar9 = (long *****)&ppplStack_470;
              uVar19 = 0x1037b0a68;
              goto FUN_1037b0db4;
            }
            puVar7 = PTR_PTR_1126a6d58;
            func_0x000107c610f8(PTR_PTR_1126a6d58);
            func_0x000107c453e4();
            if ((long ****)pppplVar18[2] != (long ****)0x0) {
              func_0x000107c61434(pppplVar18);
              lVar6 = -0x2fffffffffffffe7;
              pcVar12 = pcStack_488;
              func_0x000100029284(0xd000000000000019);
              if (((ulong)pcVar12 & 1) == 0) {
                func_0x000107c6142c(pppplVar18);
              }
              else {
                func_0x0001000bb420(pppplVar18[7] + lVar6 * 4,&ppplStack_470);
                func_0x000107c6142c(pppplVar18);
                pdVar8 = adStack_480;
                func_0x000107c6147c(pdVar8,&ppplStack_470,puVar2 + 8,PTR___sSdN_11034dd90,6);
                if ((((ulong)pdVar8 & 1) != 0) && (0.0 < adStack_480[0])) {
                  func_0x000107bc1230(adStack_480[0] / 1000.0,puVar7);
                }
              }
            }
            if ((long ****)pppplVar18[2] != (long ****)0x0) {
              func_0x000107c61434(pppplVar18);
              lVar6 = -0x2fffffffffffffeb;
              uVar11 = 0;
              func_0x000100029284(0xd000000000000015);
              if ((uVar11 & 1) == 0) {
                func_0x000107c6142c(pppplVar18);
              }
              else {
                func_0x0001000bb420(pppplVar18[7] + lVar6 * 4,&ppplStack_470);
                func_0x000107c6142c(pppplVar18);
                pdVar8 = adStack_480;
                func_0x000107c6147c(pdVar8,&ppplStack_470,puVar2 + 8,PTR___sSdN_11034dd90,6);
                if ((((ulong)pdVar8 & 1) != 0) && (0.0 < adStack_480[0])) {
                  func_0x000107bc12b4(adStack_480[0] / 1000.0,puVar7);
                }
              }
            }
            if ((long ****)pppplVar18[2] != (long ****)0x0) {
              func_0x000107c61434(pppplVar18);
              uVar11 = 0;
              lVar6 = -0x2fffffffffffffee;
              func_0x000100029284(0xd000000000000012);
              if ((uVar11 & 1) == 0) {
                func_0x000107c6142c(pppplVar18);
              }
              else {
                func_0x0001000bb420(pppplVar18[7] + lVar6 * 4,&ppplStack_470);
                func_0x000107c6142c(pppplVar18);
                pdVar8 = adStack_480;
                func_0x000107c6147c(pdVar8,&ppplStack_470,puVar2 + 8,PTR___sSdN_11034dd90,6);
                if ((((ulong)pdVar8 & 1) != 0) && (0.0 < adStack_480[0])) {
                  func_0x000107bc1338(adStack_480[0] / 1000.0,puVar7);
                }
              }
            }
            lVar6 = 0x616f6c5f6c6c7566;
            param_1 = (long *****)0xec000000736d5f64;
            if ((long ****)pppplVar18[2] == (long ****)0x0) {
LAB_1037b0cd0:
              uStack_468 = 0;
              ppplStack_470 = (long ***)0x0;
              lStack_458 = 0;
              uStack_460 = 0;
            }
            else {
              func_0x000107c61434(pppplVar18);
              func_0x000100029284(0x616f6c5f6c6c7566);
              if (((ulong)param_1 & 1) == 0) {
                func_0x000107c6142c(pppplVar18);
                param_1 = (long *****)pppplVar18;
                goto LAB_1037b0cd0;
              }
              func_0x0001000bb420(pppplVar18[7] + lVar6 * 4,&ppplStack_470);
              func_0x000107c6142c(pppplVar18);
              param_1 = (long *****)pppplVar18;
            }
            func_0x000107c6142c(pppplVar18);
            if (lStack_458 == 0) {
              func_0x0001000b44c0(ppppplVar5,ppppplVar10);
              func_0x000107c61170(puVar7);
              ppppplVar10 = (long *****)0x112d387f8;
              func_0x0001037b0df0(&ppplStack_470,0x112d387f8,&UNK_10d902650);
            }
            else {
              pdVar8 = adStack_480;
              func_0x000107c6147c(pdVar8,&ppplStack_470,puVar2 + 8,PTR___sSdN_11034dd90,6);
              if ((((ulong)pdVar8 & 1) != 0) && (0.0 < adStack_480[0])) {
                func_0x000107bc13bc(adStack_480[0] / 1000.0,puVar7);
              }
              func_0x0001000b44c0(ppppplVar5,ppppplVar10);
              func_0x000107c61170(puVar7);
            }
            param_2 = &pppplStack_370;
            func_0x0001037b0e30(param_2);
            ppppplVar9 = ppppplVar10;
          }
        }
      }
    }
  }
  else {
    ppppplVar9 = param_2;
    func_0x000107c605b8(ppppplVar10,param_2,*ppppplVar4,ppppplVar4[1],0);
    func_0x000107c6142c(param_2);
    if (((ulong)ppppplVar10 & 1) != 0) goto LAB_1037b0034;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_2;
  }
  uVar19 = 0x1037b0db4;
  func_0x000107c60e78();
FUN_1037b0db4:
  *(long ******)((long)&lStack_4b0 + lVar1) = param_1;
  *(long *****)((long)&uStack_4a8 + lVar1) = &ppplStack_490;
  *(undefined1 **)((long)alStack_4a0 + lVar1) = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)alStack_4a0 + lVar1 + 8) = uVar19;
  (*(code *)&DAT_104643a44)(ppppplVar9,param_2);
  return ppppplVar9;
}



/* Entry: 1037b0db4; end: 1037b0eaf;  */

undefined8 FUN_1037b0db4(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_104643a44)(param_2,param_1);
  return param_2;
}



/* Entry: 1037b0eb0; end: 1037b0f47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b0eb0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = _DAT_11307c2f0;
  func_0x000107c61428(lStack_38 + _DAT_11307c2f0,auStack_50,0,0);
  lVar1 = lStack_38 + lVar1;
  func_0x000107c61618();
  func_0x000107c61170(lStack_38);
  FUN_1037af9e0(0);
  func_0x000107c610f8();
  lVar2 = lVar1;
  FUN_1037afe40();
  func_0x000107c615e8(lVar1);
  *param_1 = lVar2;
  return;
}



/* Entry: 1037b0f48; end: 1037b0f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037b0f48(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = _DAT_11307c2f0;
  func_0x000107c61428(lStack_38 + _DAT_11307c2f0,auStack_50,0,0);
  lVar1 = lStack_38 + lVar1;
  func_0x000107c61618();
  func_0x000107c61170(lStack_38);
  FUN_1037af9e0(0);
  func_0x000107c610f8();
  lVar2 = lVar1;
  FUN_1037afe40();
  func_0x000107c615e8(lVar1);
  *param_1 = lVar2;
  return;
}



/* Entry: 1037b0f60; end: 1037b0fcf;  */

void FUN_1037b0f60(void)

{
  func_0x0001000285a8(0x112f93990,&UNK_10dc0c580);
  func_0x0001000823a8(0x1037b0fa0,0);
  return;
}



/* Entry: 1037b0fd0; end: 1037b0ff3;  */

undefined1  [16] FUN_1037b0fd0(void)

{
  return ZEXT816(0x110694320);
}



/* Entry: 1037b0ff4; end: 1037b109f;  */

void FUN_1037b0ff4(void)

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



/* Entry: 1037b10a0; end: 1037b10ef;  */

undefined1  [16] FUN_1037b10a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar3 = *unaff_x20;
  uVar4 = 0xea0000000000736d;
  uVar2 = 0x6574497972657571;
  if (cVar3 != '\x01') {
    uVar4 = 0xe400000000000000;
    uVar2 = 0x68736168;
  }
  uVar1 = 0x68746170;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe400000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 1037b10f0; end: 1037b1113;  */

void FUN_1037b10f0(undefined1 *param_1,undefined1 param_2)

{
  FUN_1037b1794();
  *param_1 = param_2;
  return;
}



/* Entry: 1037b1114; end: 1037b112b;  */

undefined1  [16] FUN_1037b1114(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1037b112c; end: 1037b117b;  */

void FUN_1037b112c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1037b1524();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1037b117c; end: 1037b12e7;  */

void FUN_1037b117c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_70 [14];
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined1 uStack_51;
  
  lVar1 = 0x112f93aa0;
  func_0x0001000285a8(0x112f93aa0,&UNK_10dc0c768);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_1037b1524();
  func_0x000107c606ec(auStack_70 + -extraout_x8,&UNK_1106944b8,&UNK_1106944b8,param_1,uVar2,uVar3);
  uStack_51 = 0;
  func_0x000107c6053c(*unaff_x20,unaff_x20[1],&uStack_51,lVar1);
  if (unaff_x21 == 0) {
    uStack_60 = unaff_x20[2];
    uStack_61 = 1;
    uVar2 = 0x112d550a0;
    func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
    uVar3 = uVar2;
    func_0x00010266d214();
    func_0x000107c60554(&uStack_60,&uStack_61,lVar1,uVar2,uVar3);
    uStack_62 = 2;
    func_0x000107c60520(unaff_x20[3],unaff_x20[4],&uStack_62,lVar1);
  }
  (**(code **)(lVar4 + 8))(auStack_70 + -extraout_x8,lVar1);
  return;
}



/* Entry: 1037b12e8; end: 1037b12fb;  */

void FUN_1037b12e8(void)

{
  FUN_1037b117c();
  return;
}


