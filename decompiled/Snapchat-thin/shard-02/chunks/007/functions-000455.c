/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10201eaec; end: 10201eb0b;  */

void FUN_10201eaec(void)

{
  func_0x000107c61168(&PTR_PTR_1128186d0);
  return;
}



/* Entry: 10201eb0c; end: 10201eb77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201eb0c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10201ef00();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e50b98) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10201eb78; end: 10201ebe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201eb78(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e50b98) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10201ebe4; end: 10201ec43; -[_TtC39TopicViewerScopedFactoryServiceProvider27SCTopicViewerScopedServices init] */

void FUN_10201ebe4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TopicViewerScopedFactoryServiceProvider.SCTopicViewerScopedServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10201ec10);
  (*pcVar1)();
}



/* Entry: 10201ec44; end: 10201ec53; -[_TtC39TopicViewerScopedFactoryServiceProvider27SCTopicViewerScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201ec44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e50b98));
  return;
}



/* Entry: 10201ec54; end: 10201ecbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201ec54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104be348;
  func_0x000107c613fc(&UNK_1104be348,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10201ef98,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10201ecc0; end: 10201ed5b;  */

void FUN_10201ecc0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104be258;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104be258;
  return;
}



/* Entry: 10201ed5c; end: 10201ed93;  */

void FUN_10201ed5c(long *param_1)

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



/* Entry: 10201ed94; end: 10201ed9b;  */

undefined8 FUN_10201ed94(void)

{
  return 0x1b;
}



/* Entry: 10201ed9c; end: 10201eecf;  */

void FUN_10201ed9c(undefined8 *param_1)

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
  puVar1 = &UNK_1104be370;
  func_0x000107c613fc(&UNK_1104be370,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10201ef70;
  func_0x00010058fa64(FUN_10201ef70,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10201eed0; end: 10201eeff;  */

undefined ** FUN_10201eed0(void)

{
  return &PTR_DAT_1130747f0;
}



/* Entry: 10201ef00; end: 10201ef1f;  */

void FUN_10201ef00(void)

{
  func_0x000107c61168(&PTR_PTR_112818790);
  return;
}



/* Entry: 10201ef20; end: 10201ef6f;  */

undefined1  [16] FUN_10201ef20(void)

{
  return ZEXT816(0x1104be2a8);
}



/* Entry: 10201ef70; end: 10201ef97;  */

void FUN_10201ef70(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10201ef98; end: 10201efab;  */

void FUN_10201ef98(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10201efac; end: 10201f4c3;  */

void FUN_10201efac(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 auStack_70 [2];
  
  uVar14 = *param_2;
  func_0x0001000285a8(0x112e50c10,&UNK_10da4fa48);
  puVar1 = auStack_70;
  auStack_70[0] = uVar14;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001020217ac();
  pcVar3 = "SCAddToStoryCameraScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCAddToStoryCameraScopeExposerSubjectServiceProvider",0x34,2);
  FUN_1020217f8();
  pcVar4 = "SCSendToScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSendToScopeExposerSubjectServiceProvider",0x2a,2);
  FUN_102021844();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar5 = puVar2;
  FUN_1020217ec();
  func_0x000100082720("SCAddToStoryCameraScopeExposerObservableServiceProvider",0x37,2);
  pcVar6 = pcVar3;
  FUN_102021838();
  func_0x000100082720("SCSendToScopeExposerObservableServiceProvider",0x2d,2);
  pcVar7 = pcVar4;
  FUN_1020218d0();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar8 = FUN_10201ed5c;
  func_0x0001000823a8(FUN_10201ed5c,0);
  func_0x000100082720("SCTopicViewerScopedServicesCleanupRelayServiceProvider",0x36,2);
  puVar9 = puVar2;
  FUN_102021548(puVar2,pcVar3,pcVar4);
  func_0x000100082720("TopicViewerScopeGraphBridgeServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e50c18,&UNK_10da4fa60);
  puVar10 = &UNK_1104be420;
  func_0x000107c613fc(&UNK_1104be420,0x98,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar1;
  *(undefined8 *)(puVar10 + 0x18) = param_3;
  *(undefined8 *)(puVar10 + 0x20) = param_4;
  *(undefined8 *)(puVar10 + 0x28) = param_5;
  *(undefined8 *)(puVar10 + 0x30) = param_6;
  *(undefined8 *)(puVar10 + 0x38) = param_7;
  *(undefined8 *)(puVar10 + 0x40) = param_8;
  *(undefined8 *)(puVar10 + 0x48) = param_9;
  *(undefined8 *)(puVar10 + 0x50) = param_10;
  *(undefined8 *)(puVar10 + 0x58) = param_11;
  *(undefined8 *)(puVar10 + 0x60) = param_12;
  *(undefined8 *)(puVar10 + 0x68) = param_13;
  *(undefined8 *)(puVar10 + 0x70) = param_14;
  *(undefined8 *)(puVar10 + 0x78) = param_15;
  *(char **)(puVar10 + 0x80) = pcVar6;
  *(char **)(puVar10 + 0x88) = pcVar7;
  *(undefined8 **)(puVar10 + 0x90) = puVar5;
  func_0x000107c6157c(puVar1);
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
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(puVar5);
  uVar14 = 0x10201f504;
  func_0x0001000823a8(0x10201f504,puVar10);
  func_0x000100082720("SCTopicViewerEntryPointWrapperServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112e50c20,&UNK_10da4fa50);
  puVar10 = &UNK_1104be448;
  func_0x000107c613fc(&UNK_1104be448,0x30,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar14;
  *(undefined8 **)(puVar10 + 0x18) = puVar1;
  *(code **)(puVar10 + 0x20) = pcVar8;
  *(undefined8 **)(puVar10 + 0x28) = puVar9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(puVar9);
  pcVar11 = FUN_10201f548;
  func_0x0001000823a8(FUN_10201f548,puVar10);
  func_0x000100082720("SCTopicViewerScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e50ba0,&UNK_10da4f810);
  func_0x000107c6157c(pcVar11);
  uVar12 = 0x10201f554;
  func_0x0001000823a8(0x10201f554,pcVar11);
  func_0x000100082720("SCTopicViewerScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112e50b90,&UNK_10da4f800);
  func_0x000107c6157c(uVar12);
  uVar13 = 0x10201f55c;
  func_0x0001000823a8(0x10201f55c,uVar12);
  func_0x000100082720("SCTopicViewerScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar10 = &UNK_1104be470;
  func_0x000107c613fc(&UNK_1104be470,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar13;
  *(code **)(puVar10 + 0x18) = pcVar8;
  func_0x000107c6157c(pcVar8);
  uVar13 = 0x10201f564;
  func_0x0001000823a8(0x10201f564,puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(uVar12);
  func_0x000100082720("SCTopicViewerScopeEntryPointProvider",0x24,2);
  *param_1 = uVar13;
  return;
}



/* Entry: 10201f4c4; end: 10201f547;  */

void FUN_10201f4c4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10201efac(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 10201f548; end: 10201f56b;  */

void FUN_10201f548(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102020c30(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCTopicViewerScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10201f56c; end: 1020209b7;  */

void FUN_10201f56c(long *param_1,long param_2)

{
  undefined8 uVar1;
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
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
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
  FUN_102020b80();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  *(undefined8 *)(param_2 + 0x88) = uStack_d0;
  *(undefined8 *)(param_2 + 0x90) = uStack_d8;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174(uStack_c0);
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar16 = uStack_e0;
  func_0x000107c6157c(uStack_e0);
  func_0x00010017da58();
  puVar14 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar16);
  *(undefined **)(param_2 + 0x18) = puVar14;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar16 = uStack_e8;
  func_0x000107c6157c(uStack_e8);
  func_0x00010017da58();
  puVar14 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar16);
  *(undefined **)(param_2 + 0x20) = puVar14;
  func_0x0001000285a8(0x112e4d1d0,&UNK_10dbc49b0);
  func_0x000107c610f8();
  uVar16 = uStack_f0;
  func_0x000107c6157c(uStack_f0);
  func_0x00010017da58();
  puVar14 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar16);
  *(undefined **)(param_2 + 0x28) = puVar14;
  puVar14 = PTR_PTR_1126a9e00;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar14;
  func_0x000107c61174();
  uVar15 = auStack_70[0];
  func_0x000107c61174();
  uVar19 = 0xd000000000000010;
  uVar16 = uVar19;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f058d60);
  func_0x000107c5a49c(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef2dc90);
  func_0x000107c5a49c(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar14);
  uVar17 = 0xd000000000000018;
  uVar16 = uVar17;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0583b0);
  func_0x000107c5a49c(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar14);
  uVar16 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar16);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a810);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000018,0x800000010f058d80);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21bf0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar16);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar16 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef2d2e0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef11140);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174(uVar18);
  uVar16 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2dcc0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  func_0x000107c61174(uVar13);
  func_0x000107c61174();
  uVar16 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef32690);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar16);
  uVar16 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2dd30);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  uVar16 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar18);
  func_0x000107c61174(uVar16);
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar19 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174(uVar19);
  uVar16 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0523a0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar16);
  func_0x000107c3e740(uVar17);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar1);
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
  func_0x000107c61574(uStack_e0);
  func_0x000107c61574(uStack_e8);
  func_0x000107c61574(uStack_f0);
  *param_1 = param_2;
  return;
}



/* Entry: 1020209b8; end: 102020a73;  */

void FUN_1020209b8(void)

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
  return;
}



/* Entry: 102020a74; end: 102020a7b;  */

undefined8 FUN_102020a74(void)

{
  return 0x1b;
}



/* Entry: 102020a7c; end: 102020aff;  */

void FUN_102020a7c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102020bc0,param_2,FUN_102020bc4,param_2,FUN_102020bec,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102020b00; end: 102020b4f;  */

undefined8 FUN_102020b00(void)

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



/* Entry: 102020b50; end: 102020b7f;  */

undefined ** FUN_102020b50(void)

{
  return &PTR_DAT_1130747f0;
}



/* Entry: 102020b80; end: 102020b9f;  */

void FUN_102020b80(void)

{
  func_0x000107c61168(&PTR_PTR_112e50c98);
  return;
}



/* Entry: 102020ba0; end: 102020bc3;  */

undefined1  [16] FUN_102020ba0(void)

{
  return ZEXT816(0x1104be4c8);
}



/* Entry: 102020bc4; end: 102020beb;  */

void FUN_102020bc4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102020bec; end: 102020bf3;  */

undefined8 FUN_102020bec(void)

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



/* Entry: 102020bf4; end: 102020c2f;  */

void FUN_102020bf4(undefined8 *param_1,undefined8 param_2)

{
  FUN_102020c30();
  func_0x0001000a7f38("SCTopicViewerScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102020c30; end: 102020e1b;  */

void FUN_102020c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1107641f0;
  ppuVar4 = &PTR_DAT_1130747f0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e50d78;
  func_0x0001000285a8(0x112e50d78,&UNK_10da4fbf0);
  func_0x0001000a6ee8(&UNK_1104be4c8,"SCTopicViewerEntryPointWrapperScopeInitializationPluginKey",
                      0x3a,2,FUN_102020e90,param_1,uVar2,&UNK_1104be4c8,&PTR_DAT_112e50c30);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104be518;
  func_0x000107c613fc(&UNK_1104be518,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104be2e8,"SCTopicViewerScopedServicesScopeInitializationPluginKey",0x37,
                      2,FUN_102020f40,puVar3,uVar2,&UNK_1104be2e8,&PTR_DAT_112e50ba8);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104be540;
  func_0x000107c613fc(&UNK_1104be540,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104be7e0,"TopicViewerScopeGraphBridgeScopeInitializationPluginKey",0x37,
                      2,FUN_102020f48,puVar3,uVar2,&UNK_1104be7e0,&PTR_DAT_112e50e20);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e50d80;
  func_0x0001000285a8(0x112e50d80,&UNK_10da4fbf8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 102020e1c; end: 102020e8f;  */

void FUN_102020e1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102020fbc;
  func_0x0001000823a8(0x102020fbc,param_3);
  func_0x000100082720("SCTopicViewerEntryPointWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102020e90; end: 102020e97;  */

void FUN_102020e90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102020fbc;
  func_0x0001000823a8();
  func_0x000100082720("SCTopicViewerEntryPointWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102020e98; end: 102020f3f;  */

void FUN_102020e98(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104be568;
  func_0x000107c613fc(&UNK_1104be568,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102020fb4;
  func_0x0001000823a8(FUN_102020fb4,puVar1);
  func_0x000100082720("SCTopicViewerScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102020f40; end: 102020f47;  */

void FUN_102020f40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104be568;
  func_0x000107c613fc(&UNK_1104be568,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102020fb4;
  func_0x0001000823a8(FUN_102020fb4,puVar3);
  func_0x000100082720("SCTopicViewerScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102020f48; end: 102020f87;  */

void FUN_102020f48(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102021970(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("TopicViewerScopeGraphBridgeScopeInitializationPluginProvider",0x3c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102020f88; end: 102020fb3;  */

void FUN_102020f88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102020fb4; end: 102020fc3;  */

void FUN_102020fb4(undefined8 *param_1)

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
  puVar1 = &UNK_1104be370;
  func_0x000107c613fc(&UNK_1104be370,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10201ef70;
  func_0x00010058fa64(FUN_10201ef70,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102020fc4; end: 10202111f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102020fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = auStack_80;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102021458();
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
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112e50d88) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e50d90) = param_5;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102021120);
  (*pcVar2)();
}



/* Entry: 102021120; end: 10202117f; -[_TtC27TopicViewerScopeGraphBridge42TopicViewerScopeGraphBridgeSaberEntryPoint init] */

void FUN_102021120(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TopicViewerScopeGraphBridge.TopicViewerScopeGraphBridgeSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10202114c);
  (*pcVar1)();
}



/* Entry: 102021180; end: 1020211b7; -[_TtC27TopicViewerScopeGraphBridge42TopicViewerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010202119c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020211a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102021180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50d88));
  return;
}



/* Entry: 1020211b8; end: 1020211df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020211b8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e50d90),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e50d88));
  return;
}



/* Entry: 1020211e0; end: 1020211ff;  */

void FUN_1020211e0(void)

{
  func_0x000107c61168(&PTR_PTR_112818850);
  return;
}



/* Entry: 102021200; end: 102021287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102021200(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e50dc0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e50dc8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102021288);
  (*pcVar2)();
}



/* Entry: 102021288; end: 10202136f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102021288(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e50dc0);
  *(undefined **)(unaff_x20 + _DAT_112e50dc0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e50dc8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e50dc8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104be658;
  func_0x000107c613fc(&UNK_1104be658,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102021374,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102021370; end: 10202137b;  */

void FUN_102021370(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10202137c; end: 1020213db; -[_TtC27TopicViewerScopeGraphBridge42SCTopicViewerScopedServicesSaberEntryPoint init] */

void FUN_10202137c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TopicViewerScopeGraphBridge.SCTopicViewerScopedServicesSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020213a8);
  (*pcVar1)();
}



/* Entry: 1020213dc; end: 102021413; -[_TtC27TopicViewerScopeGraphBridge42SCTopicViewerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020213dc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e50dc8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50dc0));
  return;
}



/* Entry: 102021414; end: 102021417;  */

void FUN_102021414(void)

{
  return;
}



/* Entry: 102021418; end: 102021437;  */

void FUN_102021418(void)

{
  FUN_102021288();
  return;
}



/* Entry: 102021438; end: 102021457;  */

void FUN_102021438(void)

{
  func_0x000107c61168(&PTR_PTR_112818918);
  return;
}



/* Entry: 102021458; end: 102021527;  */

undefined8 FUN_102021458(void)

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
  
  func_0x000107c61428(0x112e50df8,&uStack_40,0x20,0);
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
    FUN_102021528();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102021528; end: 102021547;  */

void FUN_102021528(void)

{
  func_0x000107c61168(&PTR_PTR_1128189e0);
  return;
}



/* Entry: 102021548; end: 102021683;  */

void FUN_102021548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e50e00,&UNK_10da4fca8);
  puVar1 = &UNK_1104be6a0;
  func_0x000107c613fc(&UNK_1104be6a0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102021684,puVar1);
  return;
}



/* Entry: 102021684; end: 10202168f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102021684(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_102021528();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112e50e08) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e50e10) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112e50e18) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 102021690; end: 102021703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102021690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e50e08) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e50e10) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e50e18) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102021704; end: 102021763; -[_TtC27TopicViewerScopeGraphBridge35TopicViewerScopeGraphBridgeServices init] */

void FUN_102021704(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TopicViewerScopeGraphBridge.TopicViewerScopeGraphBridgeServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102021730);
  (*pcVar1)();
}



/* Entry: 102021764; end: 1020217eb; -[_TtC27TopicViewerScopeGraphBridge35TopicViewerScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102021780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102021784) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102021764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e50e08));
  return;
}



/* Entry: 1020217ec; end: 1020217f7;  */

void FUN_1020217ec(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102021c08,param_1);
  return;
}



/* Entry: 1020217f8; end: 102021837;  */

void FUN_1020217f8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102021c0c,0);
  return;
}



/* Entry: 102021838; end: 102021843;  */

void FUN_102021838(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102021c04,param_1);
  return;
}



/* Entry: 102021844; end: 1020218cf;  */

void FUN_102021844(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102021c14,0);
  return;
}



/* Entry: 1020218d0; end: 1020218db;  */

void FUN_1020218d0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102021934,param_1);
  return;
}



/* Entry: 1020218dc; end: 102021933;  */

void FUN_1020218dc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 102021934; end: 102021967;  */

void FUN_102021934(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102021968; end: 10202196f;  */

undefined8 FUN_102021968(void)

{
  return 0x1b;
}



/* Entry: 102021970; end: 102021ae7;  */

void FUN_102021970(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104be6c8;
  func_0x000107c613fc(&UNK_1104be6c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102021ae8,puVar1);
  return;
}



/* Entry: 102021ae8; end: 102021aef;  */

void FUN_102021ae8(undefined8 *param_1)

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
  func_0x000107c61428(0x112e50df8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e50df8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104be820;
  func_0x000107c613fc(&UNK_1104be820,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102021bfc;
  func_0x00010058fa64(0x102021bfc,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102021af0; end: 102021b4b;  */

void FUN_102021af0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e50df8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e50df8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102021b4c; end: 102021c17;  */

undefined ** FUN_102021b4c(void)

{
  return &PTR_DAT_1130747f0;
}



/* Entry: 102021c18; end: 102021c5f; -[SCTopicViewerScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102021c18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50e70;
  func_0x000107c61428(param_1 + _DAT_112e50e70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102021c60; end: 102021cb7; -[SCTopicViewerScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102021c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50e70;
  func_0x000107c61428(param_1 + _DAT_112e50e70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102021cb8; end: 102021cff; -[SCTopicViewerScopeGraphBridgeSaberEntryPoint sCAddToStoryCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102021cb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50e78;
  func_0x000107c61428(param_1 + _DAT_112e50e78,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102021d00; end: 102021d0b; -[SCTopicViewerScopeGraphBridgeSaberEntryPoint setSCAddToStoryCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102021d00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50e78;
  func_0x000107c61428(param_1 + _DAT_112e50e78,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102021d0c; end: 102021d53; -[SCTopicViewerScopeGraphBridgeSaberEntryPoint sCSendToScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102021d0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50e80;
  func_0x000107c61428(param_1 + _DAT_112e50e80,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102021d54; end: 102021d5f; -[SCTopicViewerScopeGraphBridgeSaberEntryPoint setSCSendToScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102021d54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50e80;
  func_0x000107c61428(param_1 + _DAT_112e50e80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102021d60; end: 102021da7; -[SCTopicViewerScopeGraphBridgeSaberEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102021d60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50e88;
  func_0x000107c61428(param_1 + _DAT_112e50e88,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102021da8; end: 102021db3; -[SCTopicViewerScopeGraphBridgeSaberEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102021da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50e88;
  func_0x000107c61428(param_1 + _DAT_112e50e88,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102021db4; end: 102021dfb; -[SCTopicViewerScopeGraphBridgeSaberEntryPoint topicViewerScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102021db4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50e90;
  func_0x000107c61428(param_1 + _DAT_112e50e90,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102021dfc; end: 102021e07; -[SCTopicViewerScopeGraphBridgeSaberEntryPoint setTopicViewerScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102021dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50e90;
  func_0x000107c61428(param_1 + _DAT_112e50e90,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102021e08; end: 102021e67;  */

void FUN_102021e08(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102021e68; end: 10202212b;  */

/* WARNING: Possible PIC construction at 0x000102022030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102022040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102022064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102022074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102022084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020220f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102022100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020220e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102022104) */
/* WARNING: Removing unreachable block (ram,0x0001020220f4) */
/* WARNING: Removing unreachable block (ram,0x000102022088) */
/* WARNING: Removing unreachable block (ram,0x000102022078) */
/* WARNING: Removing unreachable block (ram,0x000102022068) */
/* WARNING: Removing unreachable block (ram,0x000102022044) */
/* WARNING: Removing unreachable block (ram,0x000102022034) */
/* WARNING: Removing unreachable block (ram,0x0001020220e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102021e68(void)

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
  func_0x000107c50a24();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c512a4();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c5e1d0();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        func_0x000107c5cc60();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          lVar6 = 0;
          FUN_1020211e0();
          lVar4 = lVar6;
          func_0x000107c610f8();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          lVar5 = lVar3;
          FUN_102021458();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10202212c);
            (*pcVar2)();
          }
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uStack_68);
          *(long *)(lVar4 + _DAT_112e50d88) = lVar5;
          *(long *)(lVar4 + _DAT_112e50d90) = unaff_x20;
          lStack_80 = lVar4;
          lStack_78 = lVar6;
          func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10202212c; end: 102022153; -[SCTopicViewerScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10202212c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102021e68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102022154; end: 102022197; -[SCTopicViewerScopeGraphBridgeSaberEntryPoint end] */

void FUN_102022154(undefined8 param_1)

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



/* Entry: 102022198; end: 102022477;  */

void FUN_102022198(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0fad6e0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001e,0x800000010f052920,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef0fa7000)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000014,0x800000010f059000,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd000000000000017;
            if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ed990)) ||
               (func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5a68c();
            }
            else {
              uVar2 = 0;
              if (((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0fa6fe0)) &&
                 (func_0x000107c605b8(0xd00000000000002a,0x800000010f059020,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "TopicViewerScopeGraphBridge/SCTopicViewerScopeGraphBridgeSaberEntryPoint.swift"
                                    ,0x4e,2,0x4a,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102022478);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c59f20();
            }
            goto LAB_102022224;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5884c();
        goto LAB_102022224;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57fcc();
  }
LAB_102022224:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102022478; end: 102022523; -[SCTopicViewerScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102022478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102022198(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102022524; end: 1020225b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102022524(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e50e70,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e50e78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e50e80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e50e88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e50e90) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e50e98) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020225b4; end: 1020225d3; -[SCTopicViewerScopeGraphBridgeSaberEntryPoint init] */

void FUN_1020225b4(void)

{
  FUN_102022524();
  return;
}



/* Entry: 1020225d4; end: 102022607;  */

void FUN_1020225d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102022608; end: 10202267f; -[SCTopicViewerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102022634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102022654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102022638) */
/* WARNING: Removing unreachable block (ram,0x000102022658) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102022608(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e50e70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50e78));
  return;
}



/* Entry: 102022680; end: 10202269f;  */

void FUN_102022680(void)

{
  func_0x000107c61168(&PTR_PTR_112818ab0);
  return;
}



/* Entry: 1020226a0; end: 1020226e7; -[SCSCTopicViewerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020226a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50ec8;
  func_0x000107c61428(param_1 + _DAT_112e50ec8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1020226e8; end: 10202273f; -[SCSCTopicViewerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020226e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50ec8;
  func_0x000107c61428(param_1 + _DAT_112e50ec8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102022740; end: 102022817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102022740(undefined8 param_1,long param_2)

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
    FUN_102021438();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e50dc0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102022818);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e50dc8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e50ed0);
    *(long **)(unaff_x20 + _DAT_112e50ed0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102022818; end: 10202283f; -[SCSCTopicViewerScopedServicesSaberEntryPoint begin] */

void FUN_102022818(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102022740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102022840; end: 1020229b7;  */

/* WARNING: Possible PIC construction at 0x0001020228a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102022940: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020228ac) */
/* WARNING: Removing unreachable block (ram,0x000102022944) */
/* WARNING: Removing unreachable block (ram,0x00010202295c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102022840(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e50ed0);
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



/* Entry: 1020229b8; end: 1020229bf;  */

void FUN_1020229b8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1020229c0; end: 1020229f3; -[SCSCTopicViewerScopedServicesSaberEntryPoint end] */

void FUN_1020229c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102022840();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1020229f4; end: 102022b13;  */

void FUN_1020229f4(long param_1,long param_2,long param_3)

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
                        "TopicViewerScopeGraphBridge/SCSCTopicViewerScopedServicesSaberEntryPoint.swift"
                        ,0x4e,2,0x3a,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102022b14);
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



/* Entry: 102022b14; end: 102022bbf; -[SCSCTopicViewerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102022b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1020229f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102022bc0; end: 102022c1f; -[SCSCTopicViewerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102022bc0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e50ec8,0);
  *(undefined8 *)(param_1 + _DAT_112e50ed0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}


