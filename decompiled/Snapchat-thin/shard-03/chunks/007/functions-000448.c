/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b584c8; end: 102b584cf;  */

undefined8 FUN_102b584c8(void)

{
  return 0x1b;
}



/* Entry: 102b584d0; end: 102b58603;  */

void FUN_102b584d0(undefined8 *param_1)

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
  puVar1 = &UNK_1105a1af8;
  func_0x000107c613fc(&UNK_1105a1af8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102b586e8;
  func_0x00010058fa64(FUN_102b586e8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b58604; end: 102b58633;  */

undefined ** FUN_102b58604(void)

{
  return &PTR_DAT_112f1ea08;
}



/* Entry: 102b58634; end: 102b58653;  */

void FUN_102b58634(void)

{
  func_0x000107c61168(&PTR_PTR_11288dbe0);
  return;
}



/* Entry: 102b58654; end: 102b586a3;  */

undefined1  [16] FUN_102b58654(void)

{
  return ZEXT816(0x1105a1a30);
}



/* Entry: 102b586a4; end: 102b586e7;  */

void FUN_102b586a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef6a98 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126abff0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ef6a98 = puVar1;
  return;
}



/* Entry: 102b586e8; end: 102b5870f;  */

void FUN_102b586e8(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102b58710; end: 102b58723;  */

void FUN_102b58710(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102b58724; end: 102b58b33;  */

void FUN_102b58724(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  code *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_68;
  
  uVar12 = *param_2;
  func_0x0001000285a8(0x112ef6ab0,&UNK_10db25288);
  puVar1 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000102b5a224();
  pcVar3 = "SCScanResultsNotificationUIScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCScanResultsNotificationUIScopeExposerSubjectServiceProvider",0x3d,2);
  FUN_102b5a294();
  func_0x000100082720("SCRealTimeScanTriggerScopeExposerSubjectServiceProvider",0x37,2);
  puVar4 = puVar2;
  func_0x000102b5a278();
  func_0x000100082720("SCScanResultsNotificationUIScopeExposerObservableServiceProvider",0x40,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_102b58490;
  func_0x0001000823a8(FUN_102b58490,0);
  func_0x000100082720("SCRealTimeScanScopedServicesCleanupRelayServiceProvider",0x37,2);
  pcVar6 = pcVar3;
  FUN_102b5a324();
  func_0x000100082720("SCRealTimeScanTriggerScopeExposerObservableServiceProvider",0x3a,2);
  pcVar7 = pcVar3;
  FUN_102b5a078(pcVar3,puVar2);
  func_0x000100082720("RealTimeScanScopeGraphBridgeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112ef6ab8,&UNK_10db252a0);
  puVar8 = &UNK_1105a1ba8;
  func_0x000107c613fc(&UNK_1105a1ba8,0x50,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 *)(puVar8 + 0x18) = param_3;
  *(undefined8 *)(puVar8 + 0x20) = param_4;
  *(undefined8 *)(puVar8 + 0x28) = param_5;
  *(undefined8 *)(puVar8 + 0x30) = param_6;
  *(undefined8 *)(puVar8 + 0x38) = param_7;
  *(undefined8 **)(puVar8 + 0x40) = puVar4;
  *(char **)(puVar8 + 0x48) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(pcVar6);
  uVar12 = 0x102b58b44;
  func_0x0001000823a8(0x102b58b44,puVar8);
  func_0x000100082720("SCMainCameraRealTimeScanEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ef6ac0,&UNK_10db25290);
  puVar8 = &UNK_1105a1bd0;
  func_0x000107c613fc(&UNK_1105a1bd0,0x30,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(char **)(puVar8 + 0x18) = pcVar7;
  *(undefined8 *)(puVar8 + 0x20) = uVar12;
  *(code **)(puVar8 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(pcVar5);
  uVar9 = 0x102b58b58;
  func_0x0001000823a8(0x102b58b58,puVar8);
  func_0x000100082720("SCRealTimeScanScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112ef6a38,&UNK_10db25050);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x102b58b64;
  func_0x0001000823a8(0x102b58b64,uVar9);
  func_0x000100082720("SCRealTimeScanScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112ef6a28,&UNK_10db25040);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x102b58b6c;
  func_0x0001000823a8(0x102b58b6c,uVar10);
  func_0x000100082720("SCRealTimeScanScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar8 = &UNK_1105a1bf8;
  func_0x000107c613fc(&UNK_1105a1bf8,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar11;
  *(code **)(puVar8 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar11 = 0x102b58b74;
  func_0x0001000823a8(0x102b58b74,puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000100082720("SCRealTimeScanScopeEntryPointProvider",0x25,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 102b58b34; end: 102b58b7b;  */

void FUN_102b58b34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  code *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar14 = *param_2;
  func_0x0001000285a8(0x112ef6ab0,&UNK_10db25288);
  puVar1 = &uStack_68;
  uStack_68 = uVar14;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000102b5a224();
  pcVar3 = "SCScanResultsNotificationUIScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCScanResultsNotificationUIScopeExposerSubjectServiceProvider",0x3d,2);
  FUN_102b5a294();
  func_0x000100082720("SCRealTimeScanTriggerScopeExposerSubjectServiceProvider",0x37,2);
  puVar4 = puVar2;
  func_0x000102b5a278();
  func_0x000100082720("SCScanResultsNotificationUIScopeExposerObservableServiceProvider",0x40,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_102b58490;
  func_0x0001000823a8(FUN_102b58490,0);
  func_0x000100082720("SCRealTimeScanScopedServicesCleanupRelayServiceProvider",0x37,2);
  pcVar6 = pcVar3;
  FUN_102b5a324();
  func_0x000100082720("SCRealTimeScanTriggerScopeExposerObservableServiceProvider",0x3a,2);
  pcVar7 = pcVar3;
  FUN_102b5a078(pcVar3,puVar2);
  func_0x000100082720("RealTimeScanScopeGraphBridgeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112ef6ab8,&UNK_10db252a0);
  puVar8 = &UNK_1105a1ba8;
  func_0x000107c613fc(&UNK_1105a1ba8,0x50,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 *)(puVar8 + 0x18) = uVar9;
  *(undefined8 *)(puVar8 + 0x20) = uVar11;
  *(undefined8 *)(puVar8 + 0x28) = uVar10;
  *(undefined8 *)(puVar8 + 0x30) = uVar12;
  *(undefined8 *)(puVar8 + 0x38) = uVar13;
  *(undefined8 **)(puVar8 + 0x40) = puVar4;
  *(char **)(puVar8 + 0x48) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(pcVar6);
  uVar9 = 0x102b58b44;
  func_0x0001000823a8(0x102b58b44,puVar8);
  func_0x000100082720("SCMainCameraRealTimeScanEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ef6ac0,&UNK_10db25290);
  puVar8 = &UNK_1105a1bd0;
  func_0x000107c613fc(&UNK_1105a1bd0,0x30,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(char **)(puVar8 + 0x18) = pcVar7;
  *(undefined8 *)(puVar8 + 0x20) = uVar9;
  *(code **)(puVar8 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar5);
  uVar10 = 0x102b58b58;
  func_0x0001000823a8(0x102b58b58,puVar8);
  func_0x000100082720("SCRealTimeScanScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112ef6a38,&UNK_10db25050);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x102b58b64;
  func_0x0001000823a8(0x102b58b64,uVar10);
  func_0x000100082720("SCRealTimeScanScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112ef6a28,&UNK_10db25040);
  func_0x000107c6157c(uVar11);
  uVar12 = 0x102b58b6c;
  func_0x0001000823a8(0x102b58b6c,uVar11);
  func_0x000100082720("SCRealTimeScanScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar8 = &UNK_1105a1bf8;
  func_0x000107c613fc(&UNK_1105a1bf8,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar12;
  *(code **)(puVar8 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar12 = 0x102b58b74;
  func_0x0001000823a8(0x102b58b74,puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000100082720("SCRealTimeScanScopeEntryPointProvider",0x25,2);
  *param_1 = uVar12;
  return;
}



/* Entry: 102b58b7c; end: 102b59573;  */

void FUN_102b58b7c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  FUN_102b596f4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  func_0x0001000285a8(0x112e82970,&UNK_10da91890);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar10 = uStack_98;
  func_0x000107c6157c(uStack_98);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x18) = puVar6;
  func_0x0001000285a8(0x112ef6ac8,&UNK_10db252b0);
  func_0x000107c610f8();
  uVar10 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  func_0x00010025a71c();
  puVar7 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x20) = puVar7;
  puVar8 = PTR_PTR_1126abff8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar8;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar10 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0f2f90);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc7130);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f0f2fb0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f088090);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(puVar6);
  uVar10 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0880f0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0f2fe0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_a0);
  *param_1 = param_2;
  return;
}



/* Entry: 102b59574; end: 102b595e7;  */

void FUN_102b59574(void)

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



/* Entry: 102b595e8; end: 102b595ef;  */

undefined8 FUN_102b595e8(void)

{
  return 0x1b;
}



/* Entry: 102b595f0; end: 102b59673;  */

void FUN_102b595f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102b59734,param_2,FUN_102b59738,param_2,FUN_102b59760,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102b59674; end: 102b596c3;  */

undefined8 FUN_102b59674(void)

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



/* Entry: 102b596c4; end: 102b596f3;  */

undefined ** FUN_102b596c4(void)

{
  return &PTR_DAT_112f1ea08;
}



/* Entry: 102b596f4; end: 102b59713;  */

void FUN_102b596f4(void)

{
  func_0x000107c61168(&PTR_PTR_112ef6b38);
  return;
}



/* Entry: 102b59714; end: 102b59737;  */

undefined1  [16] FUN_102b59714(void)

{
  return ZEXT816(0x1105a1c50);
}



/* Entry: 102b59738; end: 102b5975f;  */

void FUN_102b59738(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102b59760; end: 102b59767;  */

undefined8 FUN_102b59760(void)

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



/* Entry: 102b59768; end: 102b597a3;  */

void FUN_102b59768(undefined8 *param_1,undefined8 param_2)

{
  FUN_102b597a4();
  func_0x0001000a7f38("SCRealTimeScanScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102b597a4; end: 102b5998f;  */

void FUN_102b597a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105dad20;
  ppuVar4 = &PTR_DAT_112f1ea08;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1105a1ca0;
  func_0x000107c613fc(&UNK_1105a1ca0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112ef6bd0;
  func_0x0001000285a8(0x112ef6bd0,&UNK_10db25430);
  func_0x0001000a6ee8(&UNK_1105a1f28,"RealTimeScanScopeGraphBridgeScopeInitializationPluginKey",0x38
                      ,2,FUN_102b59990,puVar2,uVar3,&UNK_1105a1f28,&PTR_DAT_112ef6c70);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105a1c50,
                      "SCMainCameraRealTimeScanEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,FUN_102b59a44,param_3,uVar3,&UNK_1105a1c50,&PTR_DAT_112ef6ad0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1105a1cc8;
  func_0x000107c613fc(&UNK_1105a1cc8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105a1a70,"SCRealTimeScanScopedServicesScopeInitializationPluginKey",0x38
                      ,2,FUN_102b59af4,puVar2,uVar3,&UNK_1105a1a70,&PTR_DAT_112ef6a40);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112ef6bd8;
  func_0x0001000285a8(0x112ef6bd8,&UNK_10db25438);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102b59990; end: 102b599cf;  */

void FUN_102b59990(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000102b5a3cc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("RealTimeScanScopeGraphBridgeScopeInitializationPluginProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b599d0; end: 102b59a43;  */

void FUN_102b599d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102b59b30;
  func_0x0001000823a8(0x102b59b30,param_3);
  func_0x000100082720("SCMainCameraRealTimeScanEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b59a44; end: 102b59a4b;  */

void FUN_102b59a44(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102b59b30;
  func_0x0001000823a8();
  func_0x000100082720("SCMainCameraRealTimeScanEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b59a4c; end: 102b59af3;  */

void FUN_102b59a4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a1cf0;
  func_0x000107c613fc(&UNK_1105a1cf0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102b59b28;
  func_0x0001000823a8(FUN_102b59b28,puVar1);
  func_0x000100082720("SCRealTimeScanScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102b59af4; end: 102b59afb;  */

void FUN_102b59af4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105a1cf0;
  func_0x000107c613fc(&UNK_1105a1cf0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102b59b28;
  func_0x0001000823a8(FUN_102b59b28,puVar3);
  func_0x000100082720("SCRealTimeScanScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102b59afc; end: 102b59b27;  */

void FUN_102b59afc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b59b28; end: 102b59b37;  */

void FUN_102b59b28(undefined8 *param_1)

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
  puVar1 = &UNK_1105a1af8;
  func_0x000107c613fc(&UNK_1105a1af8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102b586e8;
  func_0x00010058fa64(FUN_102b586e8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b59b38; end: 102b59c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102b59b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102b59f88();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112ef6be0) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112ef6be8) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b59c50);
  (*pcVar2)();
}



/* Entry: 102b59c50; end: 102b59caf; -[_TtC28RealTimeScanScopeGraphBridge43RealTimeScanScopeGraphBridgeSaberEntryPoint init] */

void FUN_102b59c50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RealTimeScanScopeGraphBridge.RealTimeScanScopeGraphBridgeSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b59c7c);
  (*pcVar1)();
}



/* Entry: 102b59cb0; end: 102b59ce7; -[_TtC28RealTimeScanScopeGraphBridge43RealTimeScanScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b59ccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b59cd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b59cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef6be0));
  return;
}



/* Entry: 102b59ce8; end: 102b59d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b59ce8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ef6be8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ef6be0));
  return;
}



/* Entry: 102b59d10; end: 102b59d2f;  */

void FUN_102b59d10(void)

{
  func_0x000107c61168(&PTR_PTR_11288dca0);
  return;
}



/* Entry: 102b59d30; end: 102b59db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b59d30(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef6c18) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ef6c20);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b59db8);
  (*pcVar2)();
}



/* Entry: 102b59db8; end: 102b59e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b59db8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ef6c18);
  *(undefined **)(unaff_x20 + _DAT_112ef6c18) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ef6c20);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ef6c20))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105a1de0;
  func_0x000107c613fc(&UNK_1105a1de0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102b59ea4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102b59ea0; end: 102b59eab;  */

void FUN_102b59ea0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102b59eac; end: 102b59f0b; -[_TtC28RealTimeScanScopeGraphBridge43SCRealTimeScanScopedServicesSaberEntryPoint init] */

void FUN_102b59eac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RealTimeScanScopeGraphBridge.SCRealTimeScanScopedServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b59ed8);
  (*pcVar1)();
}



/* Entry: 102b59f0c; end: 102b59f43; -[_TtC28RealTimeScanScopeGraphBridge43SCRealTimeScanScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b59f0c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef6c20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef6c18));
  return;
}



/* Entry: 102b59f44; end: 102b59f47;  */

void FUN_102b59f44(void)

{
  return;
}



/* Entry: 102b59f48; end: 102b59f67;  */

void FUN_102b59f48(void)

{
  FUN_102b59db8();
  return;
}



/* Entry: 102b59f68; end: 102b59f87;  */

void FUN_102b59f68(void)

{
  func_0x000107c61168(&PTR_PTR_11288dd68);
  return;
}



/* Entry: 102b59f88; end: 102b5a057;  */

undefined8 FUN_102b59f88(void)

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
  
  func_0x000107c61428(0x112ef6c50,&uStack_40,0x20,0);
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
    FUN_102b5a058();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102b5a058; end: 102b5a077;  */

void FUN_102b5a058(void)

{
  func_0x000107c61168(&PTR_PTR_11288de30);
  return;
}



/* Entry: 102b5a078; end: 102b5a09b;  */

void FUN_102b5a078(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105a1e28;
  func_0x0001000285a8(0x112ef6c58,&UNK_10db254e8);
  func_0x000107c613fc(&UNK_1105a1e28,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102b5a120,puVar1);
  return;
}



/* Entry: 102b5a09c; end: 102b5a11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5a09c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102b5a058();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ef6c60) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ef6c68) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102b5a120; end: 102b5a127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5a120(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_102b5a058();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112ef6c60) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112ef6c68) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 102b5a128; end: 102b5a18b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5a128(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef6c60) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6c68) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b5a18c; end: 102b5a1eb; -[_TtC28RealTimeScanScopeGraphBridge36RealTimeScanScopeGraphBridgeServices init] */

void FUN_102b5a18c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RealTimeScanScopeGraphBridge.RealTimeScanScopeGraphBridgeServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5a1b8);
  (*pcVar1)();
}



/* Entry: 102b5a1ec; end: 102b5a263; -[_TtC28RealTimeScanScopeGraphBridge36RealTimeScanScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b5a208: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b5a20c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5a1ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef6c68));
  return;
}



/* Entry: 102b5a264; end: 102b5a293;  */

void FUN_102b5a264(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 102b5a294; end: 102b5a2d3;  */

void FUN_102b5a294(void)

{
  func_0x0001000285a8(0x112d9e908,&UNK_10d93ef80);
  func_0x0001000823a8(FUN_102b5a2d4,0);
  return;
}



/* Entry: 102b5a2d4; end: 102b5a2e7;  */

void FUN_102b5a2d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9e968,&UNK_10d95d330);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 102b5a2e8; end: 102b5a323;  */

void FUN_102b5a2e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8();
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 102b5a324; end: 102b5a33f;  */

void FUN_102b5a324(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102b5a390,param_1);
  return;
}



/* Entry: 102b5a340; end: 102b5a38f;  */

void FUN_102b5a340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 102b5a390; end: 102b5a3c3;  */

void FUN_102b5a390(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102b5a3c4; end: 102b5a3ef;  */

undefined8 FUN_102b5a3c4(void)

{
  return 0x1b;
}



/* Entry: 102b5a3f0; end: 102b5a46f;  */

void FUN_102b5a3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_6,param_5);
  return;
}



/* Entry: 102b5a470; end: 102b5a567;  */

void FUN_102b5a470(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112ef6c50,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ef6c50,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105a1f68;
  func_0x000107c613fc(&UNK_1105a1f68,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102b5a688;
  func_0x00010058fa64(0x102b5a688,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b5a568; end: 102b5a593;  */

void FUN_102b5a568(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b5a594; end: 102b5a59b;  */

void FUN_102b5a594(undefined8 *param_1)

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
  func_0x000107c61428(0x112ef6c50,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ef6c50,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105a1f68;
  func_0x000107c613fc(&UNK_1105a1f68,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102b5a688;
  func_0x00010058fa64(0x102b5a688,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b5a59c; end: 102b5a5f7;  */

void FUN_102b5a59c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ef6c50,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ef6c50,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102b5a5f8; end: 102b5a693;  */

undefined ** FUN_102b5a5f8(void)

{
  return &PTR_DAT_112f1ea08;
}



/* Entry: 102b5a694; end: 102b5a6db; -[SCRealTimeScanScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5a694(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6cc0;
  func_0x000107c61428(param_1 + _DAT_112ef6cc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b5a6dc; end: 102b5a733; -[SCRealTimeScanScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5a6dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6cc0;
  func_0x000107c61428(param_1 + _DAT_112ef6cc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b5a734; end: 102b5a77b; -[SCRealTimeScanScopeGraphBridgeSaberEntryPoint sCScanResultsNotificationUIScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5a734(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6cc8;
  func_0x000107c61428(param_1 + _DAT_112ef6cc8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102b5a77c; end: 102b5a787; -[SCRealTimeScanScopeGraphBridgeSaberEntryPoint setSCScanResultsNotificationUIScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5a77c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6cc8;
  func_0x000107c61428(param_1 + _DAT_112ef6cc8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102b5a788; end: 102b5a7cf; -[SCRealTimeScanScopeGraphBridgeSaberEntryPoint sCRealTimeScanTriggerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5a788(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6cd0;
  func_0x000107c61428(param_1 + _DAT_112ef6cd0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102b5a7d0; end: 102b5a7db; -[SCRealTimeScanScopeGraphBridgeSaberEntryPoint setSCRealTimeScanTriggerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5a7d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6cd0;
  func_0x000107c61428(param_1 + _DAT_112ef6cd0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102b5a7dc; end: 102b5a823; -[SCRealTimeScanScopeGraphBridgeSaberEntryPoint realTimeScanScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5a7dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6cd8;
  func_0x000107c61428(param_1 + _DAT_112ef6cd8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102b5a824; end: 102b5a82f; -[SCRealTimeScanScopeGraphBridgeSaberEntryPoint setRealTimeScanScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5a824(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6cd8;
  func_0x000107c61428(param_1 + _DAT_112ef6cd8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102b5a830; end: 102b5a88f;  */

void FUN_102b5a830(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102b5a890; end: 102b5aac7;  */

/* WARNING: Possible PIC construction at 0x000102b5a9fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b5aa0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b5aa28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b5aa38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b5aa54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b5aa9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b5aa3c) */
/* WARNING: Removing unreachable block (ram,0x000102b5aa2c) */
/* WARNING: Removing unreachable block (ram,0x000102b5aa10) */
/* WARNING: Removing unreachable block (ram,0x000102b5aa00) */
/* WARNING: Removing unreachable block (ram,0x000102b5aaa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5a890(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c51258();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c51214();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c4f9d0();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_102b59d10();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_102b59f88();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102b5aac8);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112ef6be0) = lVar5;
        *(long *)(lVar4 + _DAT_112ef6be8) = unaff_x20;
        lStack_80 = lVar4;
        lStack_78 = lVar6;
        func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 102b5aac8; end: 102b5aaef; -[SCRealTimeScanScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102b5aac8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b5a890();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b5aaf0; end: 102b5ab33; -[SCRealTimeScanScopeGraphBridgeSaberEntryPoint end] */

void FUN_102b5aaf0(undefined8 param_1)

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



/* Entry: 102b5ab34; end: 102b5ada3;  */

void FUN_102b5ab34(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0f6da50)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010f0925b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0f0cd60)) {
          uVar2 = 0xd000000000000021;
          func_0x000107c605b8(0xd000000000000021,0x800000010f0f32a0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd00000000000002b;
            if (((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0f0cd30)) &&
               (func_0x000107c605b8(0xd00000000000002b,0x800000010f0f32d0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "RealTimeScanScopeGraphBridge/SCRealTimeScanScopeGraphBridgeSaberEntryPoint.swift"
                                  ,0x50,2,0x3d,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5ada4);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c57b78();
            goto LAB_102b5abc0;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c587bc();
        goto LAB_102b5abc0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58800();
  }
LAB_102b5abc0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102b5ada4; end: 102b5ae4f; -[SCRealTimeScanScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102b5ada4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b5ab34(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b5ae50; end: 102b5aed3; -[SCRealTimeScanScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5ae50(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef6cc0,0);
  *(undefined8 *)(param_1 + _DAT_112ef6cc8) = 0;
  *(undefined8 *)(param_1 + _DAT_112ef6cd0) = 0;
  *(undefined8 *)(param_1 + _DAT_112ef6cd8) = 0;
  *(undefined8 *)(param_1 + _DAT_112ef6ce0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b5aed4; end: 102b5af07;  */

void FUN_102b5aed4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b5af08; end: 102b5af6f; -[SCRealTimeScanScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b5af34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b5af54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b5af38) */
/* WARNING: Removing unreachable block (ram,0x000102b5af58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5af08(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef6cc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef6cc8));
  return;
}



/* Entry: 102b5af70; end: 102b5af8f;  */

void FUN_102b5af70(void)

{
  func_0x000107c61168(&PTR_PTR_11288def8);
  return;
}



/* Entry: 102b5af90; end: 102b5afd7; -[SCSCRealTimeScanScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5af90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef6d10;
  func_0x000107c61428(param_1 + _DAT_112ef6d10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b5afd8; end: 102b5b02f; -[SCSCRealTimeScanScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5afd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef6d10;
  func_0x000107c61428(param_1 + _DAT_112ef6d10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b5b030; end: 102b5b107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5b030(undefined8 param_1,long param_2)

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
    FUN_102b59f68();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ef6c18) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b5b108);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ef6c20);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ef6d18);
    *(long **)(unaff_x20 + _DAT_112ef6d18) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102b5b108; end: 102b5b12f; -[SCSCRealTimeScanScopedServicesSaberEntryPoint begin] */

void FUN_102b5b108(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b5b030();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b5b130; end: 102b5b2a7;  */

/* WARNING: Possible PIC construction at 0x000102b5b198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b5b230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b5b19c) */
/* WARNING: Removing unreachable block (ram,0x000102b5b234) */
/* WARNING: Removing unreachable block (ram,0x000102b5b24c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5b130(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ef6d18);
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



/* Entry: 102b5b2a8; end: 102b5b2af;  */

void FUN_102b5b2a8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102b5b2b0; end: 102b5b2e3; -[SCSCRealTimeScanScopedServicesSaberEntryPoint end] */

void FUN_102b5b2b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b5b130();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b5b2e4; end: 102b5b403;  */

void FUN_102b5b2e4(long param_1,long param_2,long param_3)

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
                        "RealTimeScanScopeGraphBridge/SCSCRealTimeScanScopedServicesSaberEntryPoint.swift"
                        ,0x50,2,0x31,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5b404);
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



/* Entry: 102b5b404; end: 102b5b4af; -[SCSCRealTimeScanScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102b5b404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b5b2e4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b5b4b0; end: 102b5b50f; -[SCSCRealTimeScanScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5b4b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef6d10,0);
  *(undefined8 *)(param_1 + _DAT_112ef6d18) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b5b510; end: 102b5b543;  */

void FUN_102b5b510(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b5b544; end: 102b5b57b; -[SCSCRealTimeScanScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5b544(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef6d10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef6d18));
  return;
}



/* Entry: 102b5b57c; end: 102b5b59b;  */

void FUN_102b5b57c(void)

{
  func_0x000107c61168(&PTR_PTR_11288dfd0);
  return;
}



/* Entry: 102b5b59c; end: 102b5b603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5b59c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100342b1c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ef6d50) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102b5b604; end: 102b5b64f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5b604(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef6d50) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b5b650; end: 102b5b723; -[_TtC37SCScanResultsNotificationUIScopeProxy40SCScanResultsNotificationUIScopeServices buildWithMetadata:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5b650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *apuStack_58 [2];
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126ab858;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174();
  func_0x000107c47b28(puVar1,param_2,param_3,param_4);
  apuStack_58[0] = puVar1;
  func_0x00010008a7c8(&uStack_48,apuStack_58);
  func_0x000100083b20(apuStack_58);
  func_0x000107c61574(uStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_58[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102b5b724; end: 102b5b753;  */

void FUN_102b5b724(void)

{
  func_0x000100342b1c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b5b754; end: 102b5b793; -[_TtC37SCScanResultsNotificationUIScopeProxy40SCScanResultsNotificationUIScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5b754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef6d50));
  return;
}


