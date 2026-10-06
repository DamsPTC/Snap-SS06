/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f4a9c0; end: 101f4aa2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4a9c0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f4adb4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e43200) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101f4aa2c; end: 101f4aa97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4aa2c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e43200) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f4aa98; end: 101f4aaf7; -[_TtC54SpectaclesDeviceConnectionScopedFactoryServiceProvider42SCSpectaclesDeviceConnectionScopedServices init] */

void FUN_101f4aa98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesDeviceConnectionScopedFactoryServiceProvider.SCSpectaclesDeviceConnectionScopedServices"
                      ,0x61,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f4aac4);
  (*pcVar1)();
}



/* Entry: 101f4aaf8; end: 101f4ab07; -[_TtC54SpectaclesDeviceConnectionScopedFactoryServiceProvider42SCSpectaclesDeviceConnectionScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4aaf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e43200));
  return;
}



/* Entry: 101f4ab08; end: 101f4ab73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4ab08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104a66e8;
  func_0x000107c613fc(&UNK_1104a66e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101f4ae4c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f4ab74; end: 101f4ac0f;  */

void FUN_101f4ab74(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104a65f8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104a65f8;
  return;
}



/* Entry: 101f4ac10; end: 101f4ac47;  */

void FUN_101f4ac10(long *param_1)

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



/* Entry: 101f4ac48; end: 101f4ac4f;  */

undefined8 FUN_101f4ac48(void)

{
  return 0x1b;
}



/* Entry: 101f4ac50; end: 101f4ad83;  */

void FUN_101f4ac50(undefined8 *param_1)

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
  puVar1 = &UNK_1104a6710;
  func_0x000107c613fc(&UNK_1104a6710,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f4ae24;
  func_0x00010058fa64(FUN_101f4ae24,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f4ad84; end: 101f4adb3;  */

undefined ** FUN_101f4ad84(void)

{
  return &PTR_DAT_113066f10;
}



/* Entry: 101f4adb4; end: 101f4add3;  */

void FUN_101f4adb4(void)

{
  func_0x000107c61168(&PTR_PTR_11280a790);
  return;
}



/* Entry: 101f4add4; end: 101f4ae23;  */

undefined1  [16] FUN_101f4add4(void)

{
  return ZEXT816(0x1104a6648);
}



/* Entry: 101f4ae24; end: 101f4ae4b;  */

void FUN_101f4ae24(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101f4ae4c; end: 101f4ae4f;  */

void FUN_101f4ae4c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f4ae50; end: 101f4af97;  */

/* WARNING: Possible PIC construction at 0x000101f4af28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f4af38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f4af48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f4af58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f4af68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f4af5c) */
/* WARNING: Removing unreachable block (ram,0x000101f4af4c) */
/* WARNING: Removing unreachable block (ram,0x000101f4af3c) */
/* WARNING: Removing unreachable block (ram,0x000101f4af2c) */
/* WARNING: Removing unreachable block (ram,0x000101f4af6c) */

void FUN_101f4ae50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1104a6798;
  func_0x000107c613fc(&UNK_1104a6798,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  uVar2 = 0x112e43270;
  func_0x0001000285a8(0x112e43270,&UNK_10da35510);
  func_0x000107c613fc();
  uVar3 = 0x101f4b738;
  func_0x0001000841fc(0x101f4b738,puVar1,uVar2);
  func_0x000100084214(&UNK_10da354d0,0x38,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101f4af98; end: 101f4afd3;  */

void FUN_101f4af98(void)

{
  long unaff_x20;
  
  FUN_101f4ae50(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101f4afd4; end: 101f4afe3;  */

undefined1  [16] FUN_101f4afd4(void)

{
  return ZEXT816(0x1104a6778);
}



/* Entry: 101f4afe4; end: 101f4b6c3;  */

void FUN_101f4afe4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 *puVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_68;
  
  uVar15 = *param_2;
  func_0x0001000285a8(0x112e43278,&UNK_10da35518);
  puVar1 = &uStack_68;
  uStack_68 = uVar15;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101f4eae8();
  func_0x000100082720("SCSpectaclesReportIssueScopeExposerSubjectServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e43280,&UNK_10da35520);
  puVar3 = &UNK_1104a67c0;
  func_0x000107c613fc(&UNK_1104a67c0,0x40,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  pcVar4 = FUN_101f4b774;
  func_0x0001000823a8(FUN_101f4b774,puVar3);
  func_0x000100082720("SCSpectaclesAppInitializationCompleteEntryPointWrapperServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e43288,&UNK_10da35860);
  puVar3 = &UNK_1104a67e8;
  func_0x000107c613fc(&UNK_1104a67e8,0x38,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_8;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_9;
  *(undefined8 *)(puVar3 + 0x30) = param_7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  uVar15 = 0x101f4b784;
  func_0x0001000823a8(0x101f4b784,puVar3);
  func_0x000100082720("SCSpectaclesMemoriesCloudSyncEntryPointWrapperServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e43290,&UNK_10da35530);
  puVar3 = &UNK_1104a6810;
  func_0x000107c613fc(&UNK_1104a6810,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  *(undefined8 *)(puVar3 + 0x20) = param_10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_10);
  uVar5 = 0x101f4b794;
  func_0x0001000823a8(0x101f4b794,puVar3);
  func_0x000100082720("SCSpectaclesMyStorySyncEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e43298,&UNK_10da35b10);
  puVar3 = &UNK_1104a6838;
  func_0x000107c613fc(&UNK_1104a6838,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_11;
  *(undefined8 *)(puVar3 + 0x20) = param_12;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  pcVar6 = FUN_101f4b7d4;
  func_0x0001000823a8(FUN_101f4b7d4,puVar3);
  func_0x000100082720("SCSpectaclesNotificationProcessorEntryPointWrapperServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e432a0,&UNK_10da35540);
  puVar3 = &UNK_1104a6860;
  func_0x000107c613fc(&UNK_1104a6860,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_8;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_13;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_13);
  uVar7 = 0x101f4b7e0;
  func_0x0001000823a8(0x101f4b7e0,puVar3);
  func_0x000100082720("SCSpectaclesShakeToReportInfoProviderEntryPointWrapperServiceProvider",0x45,2
                     );
  puVar8 = puVar2;
  FUN_101f4eb74();
  func_0x000100082720("SCSpectaclesReportIssueScopeExposerObservableServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar9 = FUN_101f4ac10;
  func_0x0001000823a8(FUN_101f4ac10,0);
  func_0x000100082720("SCSpectaclesDeviceConnectionScopedServicesCleanupRelayServiceProvider",0x45,2
                     );
  puVar10 = puVar2;
  FUN_101f4e99c();
  func_0x000100082720("SpectaclesDeviceConnectionScopeGraphBridgeServicesServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e432a8,&UNK_10da35550);
  puVar3 = &UNK_1104a6888;
  func_0x000107c613fc(&UNK_1104a6888,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_8;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  *(undefined8 **)(puVar3 + 0x28) = puVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(puVar8);
  pcVar11 = FUN_101f4b828;
  func_0x0001000823a8(FUN_101f4b828,puVar3);
  func_0x000100082720("SCSpectaclesDeviceReportIssueEntryPointWrapperServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e432b0,&UNK_10da35558);
  puVar3 = &UNK_1104a68b0;
  func_0x000107c613fc(&UNK_1104a68b0,0x58,7);
  *(code **)(puVar3 + 0x10) = pcVar4;
  *(undefined8 **)(puVar3 + 0x18) = puVar1;
  *(code **)(puVar3 + 0x20) = pcVar9;
  *(code **)(puVar3 + 0x28) = pcVar11;
  *(undefined8 *)(puVar3 + 0x30) = uVar15;
  *(undefined8 *)(puVar3 + 0x38) = uVar5;
  *(code **)(puVar3 + 0x40) = pcVar6;
  *(undefined8 *)(puVar3 + 0x48) = uVar7;
  *(undefined8 **)(puVar3 + 0x50) = puVar10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(pcVar11);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(puVar10);
  pcVar12 = FUN_101f4b834;
  func_0x0001000823a8(FUN_101f4b834,puVar3);
  func_0x000100082720("SCSpectaclesDeviceConnectionScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112e43208,&UNK_10da35250);
  func_0x000107c6157c(pcVar12);
  pcVar13 = FUN_101f4b868;
  func_0x0001000823a8(FUN_101f4b868,pcVar12);
  func_0x000100082720("SCSpectaclesDeviceConnectionScopeInitializationServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e431f8,&UNK_10da35240);
  func_0x000107c6157c(pcVar13);
  uVar14 = 0x101f4b870;
  func_0x0001000823a8(0x101f4b870,pcVar13);
  func_0x000100082720("SCSpectaclesDeviceConnectionScopedServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1104a68d8;
  func_0x000107c613fc(&UNK_1104a68d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar14;
  *(code **)(puVar3 + 0x18) = pcVar9;
  func_0x000107c6157c(pcVar9);
  uVar14 = 0x101f4b878;
  func_0x0001000823a8(0x101f4b878,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000100082720("SCSpectaclesDeviceConnectionScopeEntryPointProvider",0x33,2);
  *param_1 = uVar14;
  return;
}



/* Entry: 101f4b6c4; end: 101f4b773;  */

void FUN_101f4b6c4(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f4b774; end: 101f4b79f;  */

void FUN_101f4b774(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  FUN_101f4c0b8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a9a70;
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
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01d6e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f019ff0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85c30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *param_1 = lVar1;
  return;
}



/* Entry: 101f4b7a0; end: 101f4b7d3;  */

void FUN_101f4b7a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f4b7d4; end: 101f4b7eb;  */

void FUN_101f4b7d4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_101f4d6d0();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101f4d50c(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f4b7ec; end: 101f4b827;  */

void FUN_101f4b7ec(void)

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



/* Entry: 101f4b828; end: 101f4b833;  */

void FUN_101f4b828(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_101f4c628();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101f4c3b0(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f4b834; end: 101f4b867;  */

void FUN_101f4b834(void)

{
  long unaff_x20;
  
  FUN_101f4ddec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101f4b868; end: 101f4b87f;  */

void FUN_101f4b868(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112e43260,&UNK_10da354b0);
  uVar1 = 0;
  func_0x0001002cbdb8();
  func_0x000100083b20(&uStack_38);
  func_0x0001000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f4b880; end: 101f4bf5f;  */

void FUN_101f4b880(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_101f4c0b8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a9a70;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01d6e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f019ff0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85c30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *param_1 = param_2;
  return;
}



/* Entry: 101f4bf60; end: 101f4bfab;  */

void FUN_101f4bf60(void)

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



/* Entry: 101f4bfac; end: 101f4bfb3;  */

undefined8 FUN_101f4bfac(void)

{
  return 0x1b;
}



/* Entry: 101f4bfb4; end: 101f4c037;  */

void FUN_101f4bfb4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f4c0f8,param_2,FUN_101f4c0fc,param_2,FUN_101f4c124,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f4c038; end: 101f4c087;  */

undefined8 FUN_101f4c038(void)

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



/* Entry: 101f4c088; end: 101f4c0b7;  */

undefined ** FUN_101f4c088(void)

{
  return &PTR_DAT_113066f10;
}



/* Entry: 101f4c0b8; end: 101f4c0d7;  */

void FUN_101f4c0b8(void)

{
  func_0x000107c61168(&PTR_PTR_112e43320);
  return;
}



/* Entry: 101f4c0d8; end: 101f4c0fb;  */

undefined1  [16] FUN_101f4c0d8(void)

{
  return ZEXT816(0x1104a6930);
}



/* Entry: 101f4c0fc; end: 101f4c123;  */

void FUN_101f4c0fc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f4c124; end: 101f4c12b;  */

undefined8 FUN_101f4c124(void)

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



/* Entry: 101f4c12c; end: 101f4c283;  */

void FUN_101f4c12c(undefined8 *param_1)

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
  FUN_101f4c628();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101f4c3b0(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f4c284; end: 101f4c2bf;  */

void FUN_101f4c284(void)

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



/* Entry: 101f4c2c0; end: 101f4c2c7;  */

undefined8 FUN_101f4c2c0(void)

{
  return 0x1b;
}



/* Entry: 101f4c2c8; end: 101f4c34b;  */

void FUN_101f4c2c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f4c668,param_2,FUN_101f4c66c,param_2,FUN_101f4c694,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f4c34c; end: 101f4c39b;  */

undefined8 FUN_101f4c34c(void)

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



/* Entry: 101f4c39c; end: 101f4c3af;  */

void FUN_101f4c39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104a6970;
  return;
}



/* Entry: 101f4c3b0; end: 101f4c60b;  */

void FUN_101f4c3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  func_0x0001000285a8(0x112e43488,&UNK_10da35850);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_4);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_4);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126a9a78;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01d6e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f01d700);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f01d720);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101f4c60c; end: 101f4c627;  */

undefined ** FUN_101f4c60c(void)

{
  return &PTR_DAT_113066f10;
}



/* Entry: 101f4c628; end: 101f4c647;  */

void FUN_101f4c628(void)

{
  func_0x000107c61168(&PTR_PTR_112e43410);
  return;
}



/* Entry: 101f4c648; end: 101f4c66b;  */

undefined1  [16] FUN_101f4c648(void)

{
  return ZEXT816(0x1104a69b0);
}



/* Entry: 101f4c66c; end: 101f4c693;  */

void FUN_101f4c66c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f4c694; end: 101f4c69b;  */

undefined8 FUN_101f4c694(void)

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



/* Entry: 101f4c69c; end: 101f4cc87;  */

void FUN_101f4c69c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_101f4cdd8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a9a80;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01d6e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2a290);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 101f4cc88; end: 101f4cccb;  */

void FUN_101f4cc88(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f4cccc; end: 101f4ccd3;  */

undefined8 FUN_101f4cccc(void)

{
  return 0x1b;
}



/* Entry: 101f4ccd4; end: 101f4cd57;  */

void FUN_101f4ccd4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f4ce18,param_2,FUN_101f4ce1c,param_2,FUN_101f4ce44,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f4cd58; end: 101f4cda7;  */

undefined8 FUN_101f4cd58(void)

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



/* Entry: 101f4cda8; end: 101f4cdd7;  */

void FUN_101f4cda8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104a69f0;
  return;
}



/* Entry: 101f4cdd8; end: 101f4cdf7;  */

void FUN_101f4cdd8(void)

{
  func_0x000107c61168(&PTR_PTR_112e434f8);
  return;
}



/* Entry: 101f4cdf8; end: 101f4ce1b;  */

undefined1  [16] FUN_101f4cdf8(void)

{
  return ZEXT816(0x1104a6a30);
}



/* Entry: 101f4ce1c; end: 101f4ce43;  */

void FUN_101f4ce1c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f4ce44; end: 101f4ce4b;  */

undefined8 FUN_101f4ce44(void)

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



/* Entry: 101f4ce4c; end: 101f4cefb;  */

void FUN_101f4ce4c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_101f4d254();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101f4d090(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f4cefc; end: 101f4cf6b;  */

undefined8 FUN_101f4cefc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101f4d090(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101f4cf6c; end: 101f4cf9f;  */

void FUN_101f4cf6c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f4cfa0; end: 101f4cfa7;  */

undefined8 FUN_101f4cfa0(void)

{
  return 0x1b;
}



/* Entry: 101f4cfa8; end: 101f4d02b;  */

void FUN_101f4cfa8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f4d294,param_2,FUN_101f4d298,param_2,FUN_101f4d2c0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f4d02c; end: 101f4d07b;  */

undefined8 FUN_101f4d02c(void)

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



/* Entry: 101f4d07c; end: 101f4d08f;  */

void FUN_101f4d07c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104a6a70;
  return;
}



/* Entry: 101f4d090; end: 101f4d237;  */

void FUN_101f4d090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a9a88;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01d6e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f01d700);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21bb0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101f4d238; end: 101f4d253;  */

undefined ** FUN_101f4d238(void)

{
  return &PTR_DAT_113066f10;
}



/* Entry: 101f4d254; end: 101f4d273;  */

void FUN_101f4d254(void)

{
  func_0x000107c61168(&PTR_PTR_112e435e0);
  return;
}



/* Entry: 101f4d274; end: 101f4d297;  */

undefined1  [16] FUN_101f4d274(void)

{
  return ZEXT816(0x1104a6ab0);
}



/* Entry: 101f4d298; end: 101f4d2bf;  */

void FUN_101f4d298(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f4d2c0; end: 101f4d2c7;  */

undefined8 FUN_101f4d2c0(void)

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



/* Entry: 101f4d2c8; end: 101f4d377;  */

void FUN_101f4d2c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_101f4d6d0();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101f4d50c(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f4d378; end: 101f4d3e7;  */

undefined8 FUN_101f4d378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101f4d50c(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101f4d3e8; end: 101f4d41b;  */

void FUN_101f4d3e8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f4d41c; end: 101f4d423;  */

undefined8 FUN_101f4d41c(void)

{
  return 0x1b;
}



/* Entry: 101f4d424; end: 101f4d4a7;  */

void FUN_101f4d424(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f4d710,param_2,FUN_101f4d714,param_2,FUN_101f4d73c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f4d4a8; end: 101f4d4f7;  */

undefined8 FUN_101f4d4a8(void)

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



/* Entry: 101f4d4f8; end: 101f4d50b;  */

void FUN_101f4d4f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104a6af0;
  return;
}



/* Entry: 101f4d50c; end: 101f4d6b3;  */

void FUN_101f4d50c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a9a90;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01d6e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd20);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101f4d6b4; end: 101f4d6cf;  */

undefined ** FUN_101f4d6b4(void)

{
  return &PTR_DAT_113066f10;
}



/* Entry: 101f4d6d0; end: 101f4d6ef;  */

void FUN_101f4d6d0(void)

{
  func_0x000107c61168(&PTR_PTR_112e436b8);
  return;
}



/* Entry: 101f4d6f0; end: 101f4d713;  */

undefined1  [16] FUN_101f4d6f0(void)

{
  return ZEXT816(0x1104a6b30);
}



/* Entry: 101f4d714; end: 101f4d73b;  */

void FUN_101f4d714(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f4d73c; end: 101f4d743;  */

undefined8 FUN_101f4d73c(void)

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



/* Entry: 101f4d744; end: 101f4dc2f;  */

void FUN_101f4d744(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_101f4dd78();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  puVar1 = PTR_PTR_1126a9a98;
  func_0x000107c610f8();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_58;
  func_0x000107c61174(uStack_58);
  uVar6 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f01d750);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar6 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef854e0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 101f4dc30; end: 101f4dc6b;  */

void FUN_101f4dc30(void)

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



/* Entry: 101f4dc6c; end: 101f4dc73;  */

undefined8 FUN_101f4dc6c(void)

{
  return 0x1b;
}



/* Entry: 101f4dc74; end: 101f4dcf7;  */

void FUN_101f4dc74(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f4ddb8,param_2,FUN_101f4ddbc,param_2,FUN_101f4dde4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f4dcf8; end: 101f4dd47;  */

undefined8 FUN_101f4dcf8(void)

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



/* Entry: 101f4dd48; end: 101f4dd77;  */

void FUN_101f4dd48(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104a6b70;
  return;
}



/* Entry: 101f4dd78; end: 101f4dd97;  */

void FUN_101f4dd78(void)

{
  func_0x000107c61168(&PTR_PTR_112e43790);
  return;
}



/* Entry: 101f4dd98; end: 101f4ddbb;  */

undefined1  [16] FUN_101f4dd98(void)

{
  return ZEXT816(0x1104a6bb0);
}



/* Entry: 101f4ddbc; end: 101f4dde3;  */

void FUN_101f4ddbc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f4dde4; end: 101f4ddeb;  */

undefined8 FUN_101f4dde4(void)

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



/* Entry: 101f4ddec; end: 101f4e1b7;  */

void FUN_101f4ddec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074db90;
  ppuVar4 = &PTR_DAT_113066f10;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112e43808;
  func_0x0001000285a8(0x112e43808,&UNK_10da35e18);
  func_0x0001000a6ee8(&UNK_1104a6930,
                      "SCSpectaclesAppInitializationCompleteEntryPointWrapperScopeInitializationPluginKey"
                      ,0x52,2,FUN_101f4e1b8,param_2,uVar2,&UNK_1104a6930,&PTR_DAT_112e432b8);
  func_0x000107c61574(param_2);
  puVar3 = &UNK_1104a6c00;
  func_0x000107c613fc(&UNK_1104a6c00,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104a6688,
                      "SCSpectaclesDeviceConnectionScopedServicesScopeInitializationPluginKey",0x46,
                      2,FUN_101f4e28c,puVar3,uVar2,&UNK_1104a6688,&PTR_DAT_112e43210);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1104a69b0,
                      "SCSpectaclesDeviceReportIssueEntryPointWrapperScopeInitializationPluginKey",
                      0x4a,2,FUN_101f4e294,param_5,uVar2,&UNK_1104a69b0,&PTR_DAT_112e433a8);
  func_0x000107c61574(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1104a6a30,
                      "SCSpectaclesMemoriesCloudSyncEntryPointWrapperScopeInitializationPluginKey",
                      0x4a,2,0x101f4e2c0,param_6,uVar2,&UNK_1104a6a30,&PTR_DAT_112e43490);
  func_0x000107c61574(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_1104a6ab0,
                      "SCSpectaclesMyStorySyncEntryPointWrapperScopeInitializationPluginKey",0x44,2,
                      0x101f4e2ec,param_7,uVar2,&UNK_1104a6ab0,&PTR_DAT_112e43578);
  func_0x000107c61574(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_1104a6b30,
                      "SCSpectaclesNotificationProcessorEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4e,2,0x101f4e318,param_8,uVar2,&UNK_1104a6b30,&PTR_DAT_112e43650);
  func_0x000107c61574(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000a6ee8(&UNK_1104a6bb0,
                      "SCSpectaclesShakeToReportInfoProviderEntryPointWrapperScopeInitializationPluginKey"
                      ,0x52,2,FUN_101f4e3c8,param_9,uVar2,&UNK_1104a6bb0,&PTR_DAT_112e43728);
  func_0x000107c61574(param_9);
  puVar3 = &UNK_1104a6c28;
  func_0x000107c613fc(&UNK_1104a6c28,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_10;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_10);
  func_0x0001000a6ee8(&UNK_1104a6e50,
                      "SpectaclesDeviceConnectionScopeGraphBridgeScopeInitializationPluginKey",0x46,
                      2,FUN_101f4e3f4,puVar3,uVar2,&UNK_1104a6e50,&PTR_DAT_112e438a0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e43810;
  func_0x0001000285a8(0x112e43810,&UNK_10da35e20);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCSpectaclesDeviceConnectionScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 101f4e1b8; end: 101f4e1e3;  */

void FUN_101f4e1b8(void)

{
  FUN_101f4e344();
  return;
}



/* Entry: 101f4e1e4; end: 101f4e28b;  */

void FUN_101f4e1e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104a6c50;
  func_0x000107c613fc(&UNK_1104a6c50,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101f4e488;
  func_0x0001000823a8(FUN_101f4e488,puVar1);
  func_0x000100082720("SCSpectaclesDeviceConnectionScopedServicesScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101f4e28c; end: 101f4e293;  */

void FUN_101f4e28c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104a6c50;
  func_0x000107c613fc(&UNK_1104a6c50,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101f4e488;
  func_0x0001000823a8(FUN_101f4e488,puVar3);
  func_0x000100082720("SCSpectaclesDeviceConnectionScopedServicesScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101f4e294; end: 101f4e343;  */

void FUN_101f4e294(void)

{
  FUN_101f4e344();
  return;
}



/* Entry: 101f4e344; end: 101f4e3c7;  */

void FUN_101f4e344(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}


