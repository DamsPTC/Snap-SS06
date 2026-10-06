/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028f4e80; end: 1028f4eeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f4e80(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1028f5274();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ecb848) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1028f4eec; end: 1028f4f57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f4eec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecb848) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028f4f58; end: 1028f4fb7; -[_TtC32ScanScopedFactoryServiceProvider20SCScanScopedServices init] */

void FUN_1028f4f58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ScanScopedFactoryServiceProvider.SCScanScopedServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f4f84);
  (*pcVar1)();
}



/* Entry: 1028f4fb8; end: 1028f4fc7; -[_TtC32ScanScopedFactoryServiceProvider20SCScanScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f4fb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ecb848));
  return;
}



/* Entry: 1028f4fc8; end: 1028f5033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f4fc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110568ea0;
  func_0x000107c613fc(&UNK_110568ea0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1028f5350,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1028f5034; end: 1028f50cf;  */

void FUN_1028f5034(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110568db0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110568db0;
  return;
}



/* Entry: 1028f50d0; end: 1028f5107;  */

void FUN_1028f50d0(long *param_1)

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



/* Entry: 1028f5108; end: 1028f510f;  */

undefined8 FUN_1028f5108(void)

{
  return 0x1b;
}



/* Entry: 1028f5110; end: 1028f5243;  */

void FUN_1028f5110(undefined8 *param_1)

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
  puVar1 = &UNK_110568ec8;
  func_0x000107c613fc(&UNK_110568ec8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1028f5328;
  func_0x00010058fa64(FUN_1028f5328,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028f5244; end: 1028f5273;  */

undefined ** FUN_1028f5244(void)

{
  return &PTR_DAT_112f3a2e8;
}



/* Entry: 1028f5274; end: 1028f5293;  */

void FUN_1028f5274(void)

{
  func_0x000107c61168(&PTR_PTR_11286e170);
  return;
}



/* Entry: 1028f5294; end: 1028f52e3;  */

undefined1  [16] FUN_1028f5294(void)

{
  return ZEXT816(0x110568e00);
}



/* Entry: 1028f52e4; end: 1028f5327;  */

void FUN_1028f52e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ecb8b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ab868;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ecb8b0 = puVar1;
  return;
}



/* Entry: 1028f5328; end: 1028f534f;  */

void FUN_1028f5328(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1028f5350; end: 1028f5363;  */

void FUN_1028f5350(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028f5364; end: 1028f5d97;  */

void FUN_1028f5364(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  code *pcVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  code *pcVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  code *pcVar23;
  code *pcVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  code *pcVar27;
  undefined8 uVar28;
  undefined8 auStack_70 [2];
  
  uVar28 = *param_2;
  func_0x0001000285a8(0x112ecb8c8,&UNK_10daef2e0);
  puVar1 = auStack_70;
  auStack_70[0] = uVar28;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001028fac08();
  pcVar3 = "SCAdOperaSessionScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCAdOperaSessionScopeExposerSubjectServiceProvider",0x32,2);
  FUN_1028fac64();
  pcVar4 = "SCFriendProfileScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCFriendProfileScopeExposerSubjectServiceProvider",0x31,2);
  FUN_1028facc0();
  pcVar5 = "SCScanResultsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCScanResultsScopeExposerSubjectServiceProvider",0x2f,2);
  FUN_1028fad1c();
  pcVar6 = "WebBrowsingScopeExposerSubjectServiceProvider";
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  func_0x0001028fadac();
  func_0x000100082720("SCScanResultsAnalyzerScopeExposerSubjectServiceProvider",0x37,2);
  func_0x0001000285a8(0x112ecb8d0,&UNK_10daef490);
  puVar7 = &UNK_110568f78;
  func_0x000107c613fc(&UNK_110568f78,0x40,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = param_3;
  *(undefined8 *)(puVar7 + 0x20) = param_4;
  *(undefined8 *)(puVar7 + 0x28) = param_5;
  *(undefined8 *)(puVar7 + 0x30) = param_6;
  *(undefined8 *)(puVar7 + 0x38) = param_7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  pcVar8 = FUN_1028f5de4;
  func_0x0001000823a8(FUN_1028f5de4,puVar7);
  func_0x000100082720("SCScanLoggingServicesEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112ecb8d8,&UNK_10daef2f0);
  puVar7 = &UNK_110568fa0;
  func_0x000107c613fc(&UNK_110568fa0,0x30,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = param_8;
  *(undefined8 *)(puVar7 + 0x20) = param_9;
  *(undefined8 *)(puVar7 + 0x28) = param_10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  uVar28 = 0x1028f5df4;
  func_0x0001000823a8(0x1028f5df4,puVar7);
  func_0x000100082720("SCScanMetadataServicesEntryPointWrapperServiceProvider",0x36,2);
  puVar9 = puVar2;
  FUN_1028fac48();
  func_0x000100082720("SCAdOperaSessionScopeExposerObservableServiceProvider",0x35,2);
  pcVar10 = pcVar3;
  FUN_1028faca4();
  func_0x000100082720("SCFriendProfileScopeExposerObservableServiceProvider",0x34,2);
  pcVar11 = pcVar4;
  FUN_1028fad00();
  func_0x000100082720("SCScanResultsScopeExposerObservableServiceProvider",0x32,2);
  pcVar12 = pcVar5;
  FUN_1028fad5c();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar13 = FUN_1028f50d0;
  func_0x0001000823a8(FUN_1028f50d0,0);
  func_0x000100082720("SCScanScopedServicesCleanupRelayServiceProvider",0x2f,2);
  pcVar14 = pcVar6;
  FUN_1028fae3c();
  func_0x000100082720("SCScanResultsAnalyzerScopeExposerObservableServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112ecb8e0,&UNK_10daef300);
  func_0x000107c6157c(pcVar8);
  uVar15 = 0x1028f5e00;
  func_0x0001000823a8(0x1028f5e00,pcVar8);
  func_0x000100082720("SCScanLoggingServicesServiceProvider",0x24,2);
  func_0x0001000285a8(0x112ecb8e8,&UNK_10daef308);
  func_0x000107c6157c(uVar28);
  uVar16 = 0x1028f5e08;
  func_0x0001000823a8(0x1028f5e08,uVar28);
  func_0x000100082720("SCScanMetadataServicesServiceProvider",0x25,2);
  func_0x0001000285a8(0x112ecb8f0,&UNK_10daef310);
  puVar7 = &UNK_110568fc8;
  func_0x000107c613fc(&UNK_110568fc8,0x20,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar15;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar15);
  uVar17 = 0x1028f5e10;
  func_0x0001000823a8(0x1028f5e10,puVar7);
  func_0x000100082720("SCScanViewModelLoggingServicesEntryPointWrapperServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112ecb8f8,&UNK_10daef970);
  puVar7 = &UNK_110568ff0;
  func_0x000107c613fc(&UNK_110568ff0,0x68,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = param_11;
  *(undefined8 *)(puVar7 + 0x20) = param_12;
  *(undefined8 *)(puVar7 + 0x28) = param_13;
  *(undefined8 *)(puVar7 + 0x30) = param_14;
  *(undefined8 *)(puVar7 + 0x38) = param_15;
  *(undefined8 *)(puVar7 + 0x40) = param_16;
  *(undefined8 *)(puVar7 + 0x48) = param_17;
  *(char **)(puVar7 + 0x50) = pcVar10;
  *(char **)(puVar7 + 0x58) = pcVar12;
  *(undefined8 **)(puVar7 + 0x60) = puVar9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(pcVar10);
  func_0x000107c6157c(pcVar12);
  func_0x000107c6157c(puVar9);
  pcVar18 = FUN_1028f5e18;
  func_0x0001000823a8(FUN_1028f5e18,puVar7);
  func_0x000100082720("SCSnapcodeActionHandlerServicesEntryPointWrapperServiceProvider",0x3f,2);
  FUN_1028fedc8(param_13,uVar15,param_18,param_8);
  func_0x000100082720("SCScanResultsScopedFactoryServiceProvider",0x29,2);
  uVar19 = param_13;
  FUN_1029021a0();
  func_0x000100082720("SCScanResultsScopeServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112ecb900,&UNK_10daef320);
  func_0x000107c6157c(uVar17);
  pcVar20 = FUN_1028f5e54;
  func_0x0001000823a8(FUN_1028f5e54,uVar17);
  func_0x000100082720("SCScanViewModelLoggingServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112ecb908,&UNK_10daef328);
  func_0x000107c6157c(pcVar18);
  uVar21 = 0x1028f5e5c;
  func_0x0001000823a8(0x1028f5e5c,pcVar18);
  func_0x000100082720("SCSnapcodeActionHandlerServicesServiceProvider",0x2e,2);
  puVar22 = puVar2;
  FUN_1028fa750(puVar2,pcVar3,uVar15,uVar16,pcVar6,pcVar4,uVar19,pcVar20,uVar21,pcVar5);
  func_0x000100082720("ScanScopeGraphBridgeServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112ecb910,&UNK_10daef330);
  puVar7 = &UNK_110569018;
  func_0x000107c613fc(&UNK_110569018,0x58,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar15;
  *(undefined8 *)(puVar7 + 0x20) = param_10;
  *(undefined8 *)(puVar7 + 0x28) = uVar16;
  *(undefined8 *)(puVar7 + 0x30) = param_15;
  *(undefined8 *)(puVar7 + 0x38) = param_8;
  *(undefined8 *)(puVar7 + 0x40) = uVar19;
  *(char **)(puVar7 + 0x48) = pcVar11;
  *(char **)(puVar7 + 0x50) = pcVar14;
  func_0x000107c6157c();
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(uVar19);
  func_0x000107c6157c(pcVar11);
  func_0x000107c6157c(pcVar14);
  pcVar23 = FUN_1028f5e64;
  func_0x0001000823a8(FUN_1028f5e64,puVar7);
  func_0x000100082720("SCScanEntryPointWrapperServiceProvider",0x26,2);
  func_0x0001000285a8(0x112ecb918,&UNK_10daef338);
  puVar7 = &UNK_110569040;
  func_0x000107c613fc(&UNK_110569040,0x50,7);
  *(code **)(puVar7 + 0x10) = pcVar23;
  *(code **)(puVar7 + 0x18) = pcVar8;
  *(undefined8 *)(puVar7 + 0x20) = uVar28;
  *(undefined8 **)(puVar7 + 0x28) = puVar1;
  *(code **)(puVar7 + 0x30) = pcVar13;
  *(undefined8 *)(puVar7 + 0x38) = uVar17;
  *(code **)(puVar7 + 0x40) = pcVar18;
  *(undefined8 **)(puVar7 + 0x48) = puVar22;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(uVar28);
  func_0x000107c6157c(uVar17);
  func_0x000107c6157c(pcVar18);
  func_0x000107c6157c(pcVar23);
  func_0x000107c6157c(pcVar13);
  func_0x000107c6157c(puVar22);
  pcVar24 = FUN_1028f5e98;
  func_0x0001000823a8(FUN_1028f5e98,puVar7);
  func_0x000100082720("SCScanScopeInitializationPluginRegistryServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ecb850,&UNK_10daef0d0);
  func_0x000107c6157c(pcVar24);
  uVar25 = 0x1028f5eac;
  func_0x0001000823a8(0x1028f5eac,pcVar24);
  func_0x000100082720("SCScanScopeInitializationServiceProvider",0x28,2);
  func_0x0001000285a8(0x112ecb840,&UNK_10daef0c0);
  func_0x000107c6157c(uVar25);
  uVar26 = 0x1028f5eb4;
  func_0x0001000823a8(0x1028f5eb4,uVar25);
  func_0x000100082720("SCScanScopedServicesServiceProvider",0x23,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar7 = &UNK_110569068;
  func_0x000107c613fc(&UNK_110569068,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar26;
  *(code **)(puVar7 + 0x18) = pcVar13;
  func_0x000107c6157c(pcVar13);
  pcVar27 = FUN_1028f5ee8;
  func_0x0001000823a8(FUN_1028f5ee8,puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar28);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(param_13);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(pcVar20);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(puVar22);
  func_0x000107c61574(pcVar23);
  func_0x000107c61574(pcVar24);
  func_0x000107c61574(uVar25);
  func_0x000100082720("SCScanScopeEntryPointProvider",0x1d,2);
  *param_1 = pcVar27;
  return;
}



/* Entry: 1028f5d98; end: 1028f5de3;  */

void FUN_1028f5d98(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1028f5364(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 1028f5de4; end: 1028f5e17;  */

void FUN_1028f5de4(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  FUN_1028f7640();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126ab878;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar10 = 0x706f63536e616373;
  func_0x000107c5fadc(0x706f63536e616373,0xe900000000000065);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef29650);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  lVar12 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0ca410);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(uVar11);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 != 0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(long *)(lVar2 + 0x48) = lVar12;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f7080);
  (*pcVar1)();
}



/* Entry: 1028f5e18; end: 1028f5e53;  */

void FUN_1028f5e18(void)

{
  long unaff_x20;
  
  FUN_1028f81bc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1028f5e54; end: 1028f5e63;  */

void FUN_1028f5e54(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028f5e64; end: 1028f5e97;  */

void FUN_1028f5e64(void)

{
  long unaff_x20;
  
  FUN_1028f5ef0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1028f5e98; end: 1028f5ebb;  */

void FUN_1028f5e98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar9 = &UNK_110609818;
  ppuVar12 = &PTR_DAT_112f3a2e8;
  uVar13 = uVar2;
  func_0x0001000a3aa4();
  func_0x000107c6157c(uVar1);
  uVar10 = 0x112ecbe30;
  func_0x0001000285a8(0x112ecbe30,&UNK_10daefb68);
  func_0x0001000a6ee8(&UNK_1105690c0,"SCScanEntryPointWrapperScopeInitializationPluginKey",0x33,2,
                      FUN_1028f9698,uVar1,uVar10,&UNK_1105690c0,&PTR_DAT_112ecb930);
  func_0x000107c61574(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x0001000a6ee8(&UNK_110569160,
                      "SCScanLoggingServicesEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      0x1028f96c4,uVar5,uVar10,&UNK_110569160,&PTR_DAT_112ecba38);
  func_0x000107c61574(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x0001000a6ee8(&UNK_110569200,
                      "SCScanMetadataServicesEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      0x1028f96f0,uVar2,uVar10,&UNK_110569200,&PTR_DAT_112ecbb38);
  func_0x000107c61574(uVar2);
  puVar11 = &UNK_110569390;
  func_0x000107c613fc(&UNK_110569390,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = uVar6;
  *(undefined8 *)(puVar11 + 0x18) = uVar3;
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x0001000a6ee8(&UNK_110568e40,"SCScanScopedServicesScopeInitializationPluginKey",0x30,2,
                      FUN_1028f97c4,puVar11,uVar10,&UNK_110568e40,&PTR_DAT_112ecb858);
  func_0x000107c61574(puVar11);
  func_0x000107c6157c(uVar7);
  func_0x0001000a6ee8(&UNK_1105692a0,
                      "SCScanViewModelLoggingServicesEntryPointWrapperScopeInitializationPluginKey",
                      0x4b,2,FUN_1028f97cc,uVar7,uVar10,&UNK_1105692a0,&PTR_DAT_112ecbc28);
  func_0x000107c61574(uVar7);
  func_0x000107c6157c(uVar4);
  func_0x0001000a6ee8(&UNK_110569340,
                      "SCSnapcodeActionHandlerServicesEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4c,2,FUN_1028f987c,uVar4,uVar10,&UNK_110569340,&PTR_DAT_112ecbd08);
  func_0x000107c61574(uVar4);
  puVar11 = &UNK_1105693b8;
  func_0x000107c613fc(&UNK_1105693b8,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = uVar6;
  *(undefined8 *)(puVar11 + 0x18) = uVar8;
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar8);
  func_0x0001000a6ee8(&UNK_1105697a0,"ScanScopeGraphBridgeScopeInitializationPluginKey",0x30,2,
                      FUN_1028f98a8,puVar11,uVar10,&UNK_1105697a0,&PTR_DAT_112ecc0c0);
  func_0x000107c61574(puVar11);
  uVar10 = 0x112ecbe38;
  func_0x0001000285a8(0x112ecbe38,&UNK_10daefb70);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar9,ppuVar12,uVar13,uVar10);
  func_0x0001000a7f38("SCScanScopeInitializationPluginRegistryServiceProvider",0x36,2);
  *param_1 = puVar9;
  return;
}



/* Entry: 1028f5ebc; end: 1028f5ee7;  */

void FUN_1028f5ebc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028f5ee8; end: 1028f5eef;  */

void FUN_1028f5ee8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110568db0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110568db0;
  return;
}



/* Entry: 1028f5ef0; end: 1028f6a33;  */

void FUN_1028f5ef0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  FUN_1028f6bbc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  func_0x0001000285a8(0x112ecb920,&UNK_10daef348);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174();
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x18) = puVar7;
  func_0x0001000285a8(0x112ecb928,&UNK_10daef350);
  func_0x000107c610f8();
  uVar9 = uStack_a8;
  func_0x000107c6157c(uStack_a8);
  func_0x00010025a71c();
  puVar7 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x20) = puVar7;
  puVar7 = PTR_PTR_1126ab870;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar7;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0x706f63536e616373;
  func_0x000107c5fadc(0x706f63536e616373,0xe900000000000065);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0ca360);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc7130);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0ca380);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0ca3a0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0ca3c0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0ca3e0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uStack_a0);
  func_0x000107c61574(uStack_a8);
  *param_1 = param_2;
  return;
}



/* Entry: 1028f6a34; end: 1028f6aaf;  */

void FUN_1028f6a34(void)

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
  return;
}



/* Entry: 1028f6ab0; end: 1028f6ab7;  */

undefined8 FUN_1028f6ab0(void)

{
  return 0x1b;
}



/* Entry: 1028f6ab8; end: 1028f6b3b;  */

void FUN_1028f6ab8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1028f6bfc,param_2,FUN_1028f6c00,param_2,FUN_1028f6c28,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1028f6b3c; end: 1028f6b8b;  */

undefined8 FUN_1028f6b3c(void)

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



/* Entry: 1028f6b8c; end: 1028f6bbb;  */

undefined ** FUN_1028f6b8c(void)

{
  return &PTR_DAT_112f3a2e8;
}



/* Entry: 1028f6bbc; end: 1028f6bdb;  */

void FUN_1028f6bbc(void)

{
  func_0x000107c61168(&PTR_PTR_112ecb998);
  return;
}



/* Entry: 1028f6bdc; end: 1028f6bff;  */

undefined1  [16] FUN_1028f6bdc(void)

{
  return ZEXT816(0x1105690c0);
}



/* Entry: 1028f6c00; end: 1028f6c27;  */

void FUN_1028f6c00(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1028f6c28; end: 1028f6c2f;  */

undefined8 FUN_1028f6c28(void)

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



/* Entry: 1028f6c30; end: 1028f746b;  */

void FUN_1028f6c30(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  FUN_1028f7640();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126ab878;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0x706f63536e616373;
  func_0x000107c5fadc(0x706f63536e616373,0xe900000000000065);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef29650);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  lVar11 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0ca410);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar11 != 0) {
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(long *)(param_2 + 0x48) = lVar11;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f7080);
  (*pcVar1)();
}



/* Entry: 1028f746c; end: 1028f74df;  */

void FUN_1028f746c(void)

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
  return;
}



/* Entry: 1028f74e0; end: 1028f7533;  */

void FUN_1028f74e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028f7534; end: 1028f753b;  */

undefined8 FUN_1028f7534(void)

{
  return 0x1b;
}



/* Entry: 1028f753c; end: 1028f75bf;  */

void FUN_1028f753c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1028f7690,param_2,FUN_1028f7694,param_2,FUN_1028f76bc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1028f75c0; end: 1028f760f;  */

undefined8 FUN_1028f75c0(void)

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



/* Entry: 1028f7610; end: 1028f763f;  */

void FUN_1028f7610(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110569100;
  return;
}



/* Entry: 1028f7640; end: 1028f765f;  */

void FUN_1028f7640(void)

{
  func_0x000107c61168(&PTR_PTR_112ecbaa0);
  return;
}



/* Entry: 1028f7660; end: 1028f7693;  */

undefined1  [16] FUN_1028f7660(void)

{
  return ZEXT816(0x110569140);
}



/* Entry: 1028f7694; end: 1028f76bb;  */

void FUN_1028f7694(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1028f76bc; end: 1028f76c3;  */

undefined8 FUN_1028f76bc(void)

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



/* Entry: 1028f76c4; end: 1028f781b;  */

void FUN_1028f76c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_1028f7c74();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1028f79ac(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028f781c; end: 1028f7867;  */

void FUN_1028f781c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028f7868; end: 1028f78bb;  */

void FUN_1028f7868(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028f78bc; end: 1028f78c3;  */

undefined8 FUN_1028f78bc(void)

{
  return 0x1b;
}



/* Entry: 1028f78c4; end: 1028f7947;  */

void FUN_1028f78c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1028f7cc4,param_2,FUN_1028f7cc8,param_2,FUN_1028f7cf0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1028f7948; end: 1028f7997;  */

undefined8 FUN_1028f7948(void)

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



/* Entry: 1028f7998; end: 1028f79ab;  */

void FUN_1028f7998(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1105691a0;
  return;
}



/* Entry: 1028f79ac; end: 1028f7c57;  */

void FUN_1028f79ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126ab880;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0x706f63536e616373;
  func_0x000107c5fadc(0x706f63536e616373,0xe900000000000065);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc7130);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0ca430);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x38) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f7c58);
  (*pcVar1)();
}



/* Entry: 1028f7c58; end: 1028f7c73;  */

undefined ** FUN_1028f7c58(void)

{
  return &PTR_DAT_112f3a2e8;
}



/* Entry: 1028f7c74; end: 1028f7c93;  */

void FUN_1028f7c74(void)

{
  func_0x000107c61168(&PTR_PTR_112ecbba0);
  return;
}



/* Entry: 1028f7c94; end: 1028f7cc7;  */

undefined1  [16] FUN_1028f7c94(void)

{
  return ZEXT816(0x1105691e0);
}



/* Entry: 1028f7cc8; end: 1028f7cef;  */

void FUN_1028f7cc8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1028f7cf0; end: 1028f7cf7;  */

undefined8 FUN_1028f7cf0(void)

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



/* Entry: 1028f7cf8; end: 1028f7ddf;  */

void FUN_1028f7cf8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_1028f8138();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1028f7f60(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028f7de0; end: 1028f7e1b;  */

void FUN_1028f7de0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028f7e1c; end: 1028f7e6f;  */

void FUN_1028f7e1c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028f7e70; end: 1028f7e77;  */

undefined8 FUN_1028f7e70(void)

{
  return 0x1b;
}



/* Entry: 1028f7e78; end: 1028f7efb;  */

void FUN_1028f7e78(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1028f8188,param_2,FUN_1028f818c,param_2,FUN_1028f81b4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1028f7efc; end: 1028f7f4b;  */

undefined8 FUN_1028f7efc(void)

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



/* Entry: 1028f7f4c; end: 1028f7f5f;  */

void FUN_1028f7f4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110569240;
  return;
}



/* Entry: 1028f7f60; end: 1028f811b;  */

void FUN_1028f7f60(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126ab888;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0x706f63536e616373;
  func_0x000107c5fadc(0x706f63536e616373,0xe900000000000065);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0ca360);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0ca450);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f811c);
  (*pcVar1)();
}



/* Entry: 1028f811c; end: 1028f8137;  */

undefined ** FUN_1028f811c(void)

{
  return &PTR_DAT_112f3a2e8;
}



/* Entry: 1028f8138; end: 1028f8157;  */

void FUN_1028f8138(void)

{
  func_0x000107c61168(&PTR_PTR_112ecbc90);
  return;
}



/* Entry: 1028f8158; end: 1028f818b;  */

undefined1  [16] FUN_1028f8158(void)

{
  return ZEXT816(0x110569280);
}



/* Entry: 1028f818c; end: 1028f81b3;  */

void FUN_1028f818c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1028f81b4; end: 1028f81bb;  */

undefined8 FUN_1028f81b4(void)

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



/* Entry: 1028f81bc; end: 1028f90a7;  */

void FUN_1028f81bc(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
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
  FUN_1028f92a4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x38) = uStack_78;
  *(undefined8 *)(param_2 + 0x40) = uStack_80;
  *(undefined8 *)(param_2 + 0x48) = uStack_88;
  *(undefined8 *)(param_2 + 0x50) = uStack_90;
  *(undefined8 *)(param_2 + 0x58) = uStack_98;
  *(undefined8 *)(param_2 + 0x60) = uStack_a0;
  *(undefined8 *)(param_2 + 0x68) = uStack_a8;
  func_0x0001000285a8(0x112e4ccf0,&UNK_10daaf8a0);
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar11 = uStack_b0;
  func_0x000107c6157c(uStack_b0);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x18) = puVar9;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar11 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x20) = puVar9;
  func_0x0001000285a8(0x112e9a918,&UNK_10dabac60);
  func_0x000107c610f8();
  uVar11 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x28) = puVar9;
  puVar9 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x30) = puVar9;
  puVar9 = PTR_PTR_1126ab890;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = auStack_70[0];
  func_0x000107c61174();
  uVar11 = 0x706f63536e616373;
  func_0x000107c5fadc(0x706f63536e616373,0xe900000000000065);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2a4b0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar11 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef19df0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef1adc0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1ae00);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef1ade0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  lVar12 = *(long *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f0ca480);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar11);
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef28160);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar11);
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar13);
  uVar13 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1ae20);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 != 0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61574(uStack_b0);
    func_0x000107c61574(uStack_b8);
    func_0x000107c61574(uStack_c0);
    *(long *)(param_2 + 0x70) = lVar12;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f89a0);
  (*pcVar1)();
}



/* Entry: 1028f90a8; end: 1028f9143;  */

void FUN_1028f90a8(void)

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
  return;
}



/* Entry: 1028f9144; end: 1028f9197;  */

void FUN_1028f9144(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028f9198; end: 1028f919f;  */

undefined8 FUN_1028f9198(void)

{
  return 0x1b;
}



/* Entry: 1028f91a0; end: 1028f9223;  */

void FUN_1028f91a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1028f92f4,param_2,FUN_1028f92f8,param_2,FUN_1028f9320,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1028f9224; end: 1028f9273;  */

undefined8 FUN_1028f9224(void)

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



/* Entry: 1028f9274; end: 1028f92a3;  */

undefined ** FUN_1028f9274(void)

{
  return &PTR_DAT_112f3a2e8;
}



/* Entry: 1028f92a4; end: 1028f92c3;  */

void FUN_1028f92a4(void)

{
  func_0x000107c61168(&PTR_PTR_112ecbd70);
  return;
}



/* Entry: 1028f92c4; end: 1028f92f7;  */

undefined1  [16] FUN_1028f92c4(void)

{
  return ZEXT816(0x110569320);
}



/* Entry: 1028f92f8; end: 1028f931f;  */

void FUN_1028f92f8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1028f9320; end: 1028f9327;  */

undefined8 FUN_1028f9320(void)

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



/* Entry: 1028f9328; end: 1028f9697;  */

void FUN_1028f9328(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110609818;
  ppuVar4 = &PTR_DAT_112f3a2e8;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112ecbe30;
  func_0x0001000285a8(0x112ecbe30,&UNK_10daefb68);
  func_0x0001000a6ee8(&UNK_1105690c0,"SCScanEntryPointWrapperScopeInitializationPluginKey",0x33,2,
                      FUN_1028f9698,param_2,uVar2,&UNK_1105690c0,&PTR_DAT_112ecb930);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110569160,
                      "SCScanLoggingServicesEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      0x1028f96c4,param_3,uVar2,&UNK_110569160,&PTR_DAT_112ecba38);
  func_0x000107c61574(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110569200,
                      "SCScanMetadataServicesEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      0x1028f96f0,param_4,uVar2,&UNK_110569200,&PTR_DAT_112ecbb38);
  func_0x000107c61574(param_4);
  puVar3 = &UNK_110569390;
  func_0x000107c613fc(&UNK_110569390,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_110568e40,"SCScanScopedServicesScopeInitializationPluginKey",0x30,2,
                      FUN_1028f97c4,puVar3,uVar2,&UNK_110568e40,&PTR_DAT_112ecb858);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_1105692a0,
                      "SCScanViewModelLoggingServicesEntryPointWrapperScopeInitializationPluginKey",
                      0x4b,2,FUN_1028f97cc,param_7,uVar2,&UNK_1105692a0,&PTR_DAT_112ecbc28);
  func_0x000107c61574(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_110569340,
                      "SCSnapcodeActionHandlerServicesEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4c,2,FUN_1028f987c,param_8,uVar2,&UNK_110569340,&PTR_DAT_112ecbd08);
  func_0x000107c61574(param_8);
  puVar3 = &UNK_1105693b8;
  func_0x000107c613fc(&UNK_1105693b8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  *(undefined8 *)(puVar3 + 0x18) = param_9;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_9);
  func_0x0001000a6ee8(&UNK_1105697a0,"ScanScopeGraphBridgeScopeInitializationPluginKey",0x30,2,
                      FUN_1028f98a8,puVar3,uVar2,&UNK_1105697a0,&PTR_DAT_112ecc0c0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ecbe38;
  func_0x0001000285a8(0x112ecbe38,&UNK_10daefb70);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCScanScopeInitializationPluginRegistryServiceProvider",0x36,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1028f9698; end: 1028f971b;  */

void FUN_1028f9698(void)

{
  FUN_1028f97f8();
  return;
}



/* Entry: 1028f971c; end: 1028f97c3;  */

void FUN_1028f971c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105693e0;
  func_0x000107c613fc(&UNK_1105693e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1028f9924;
  func_0x0001000823a8(FUN_1028f9924,puVar1);
  func_0x000100082720("SCScanScopedServicesScopeInitializationPluginProvider",0x35,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1028f97c4; end: 1028f97cb;  */

void FUN_1028f97c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105693e0;
  func_0x000107c613fc(&UNK_1105693e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1028f9924;
  func_0x0001000823a8(FUN_1028f9924,puVar3);
  func_0x000100082720("SCScanScopedServicesScopeInitializationPluginProvider",0x35,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1028f97cc; end: 1028f97f7;  */

void FUN_1028f97cc(void)

{
  FUN_1028f97f8();
  return;
}



/* Entry: 1028f97f8; end: 1028f987b;  */

void FUN_1028f97f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 1028f987c; end: 1028f98a7;  */

void FUN_1028f987c(void)

{
  FUN_1028f97f8();
  return;
}



/* Entry: 1028f98a8; end: 1028f98e7;  */

void FUN_1028f98a8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1028faeb0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ScanScopeGraphBridgeScopeInitializationPluginProvider",0x35,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028f98e8; end: 1028f98f7;  */

void FUN_1028f98e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x1028f92f4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1028f98f8; end: 1028f9923;  */

void FUN_1028f98f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028f9924; end: 1028f9943;  */

void FUN_1028f9924(undefined8 *param_1)

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
  puVar1 = &UNK_110568ec8;
  func_0x000107c613fc(&UNK_110568ec8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1028f5328;
  func_0x00010058fa64(FUN_1028f5328,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028f9944; end: 1028f9b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1028f9944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_1028fa660();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_5;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_6;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112ecbe40) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112ecbe48) = param_7;
    puVar4 = auStack_80;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028f9b1c);
  (*pcVar2)();
}



/* Entry: 1028f9b1c; end: 1028f9b7b; -[_TtC20ScanScopeGraphBridge35ScanScopeGraphBridgeSaberEntryPoint init] */

void FUN_1028f9b1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ScanScopeGraphBridge.ScanScopeGraphBridgeSaberEntryPoint",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f9b48);
  (*pcVar1)();
}



/* Entry: 1028f9b7c; end: 1028f9bb3; -[_TtC20ScanScopeGraphBridge35ScanScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028f9b98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028f9b9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f9b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecbe40));
  return;
}



/* Entry: 1028f9bb4; end: 1028f9bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f9bb4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ecbe48),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ecbe40));
  return;
}



/* Entry: 1028f9bdc; end: 1028f9bfb;  */

void FUN_1028f9bdc(void)

{
  func_0x000107c61168(&PTR_PTR_11286e230);
  return;
}



/* Entry: 1028f9bfc; end: 1028f9c97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028f9bfc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ecc080);
  *(undefined8 *)(unaff_x20 + _DAT_112ecbe78) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ecbe80) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1028f9c98; end: 1028f9cf7; -[_TtC20ScanScopeGraphBridge36SCScanLoggingServicesSaberEntryPoint init] */

void FUN_1028f9c98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ScanScopeGraphBridge.SCScanLoggingServicesSaberEntryPoint",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f9cc4);
  (*pcVar1)();
}


