/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f6b4ec; end: 101f6b54b; -[_TtC58SpectaclesFlightImuCalibrationScopedFactoryServiceProvider46SCSpectaclesFlightImuCalibrationScopedServices init] */

void FUN_101f6b4ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesFlightImuCalibrationScopedFactoryServiceProvider.SCSpectaclesFlightImuCalibrationScopedServices"
                      ,0x69,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f6b518);
  (*pcVar1)();
}



/* Entry: 101f6b54c; end: 101f6b55b; -[_TtC58SpectaclesFlightImuCalibrationScopedFactoryServiceProvider46SCSpectaclesFlightImuCalibrationScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6b54c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e46138));
  return;
}



/* Entry: 101f6b55c; end: 101f6b5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6b55c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104a8ed0;
  func_0x000107c613fc(&UNK_1104a8ed0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101f6b8a0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f6b5c8; end: 101f6b663;  */

void FUN_101f6b5c8(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104a8de0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104a8de0;
  return;
}



/* Entry: 101f6b664; end: 101f6b69b;  */

void FUN_101f6b664(long *param_1)

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



/* Entry: 101f6b69c; end: 101f6b6a3;  */

undefined8 FUN_101f6b69c(void)

{
  return 0x1b;
}



/* Entry: 101f6b6a4; end: 101f6b7d7;  */

void FUN_101f6b6a4(undefined8 *param_1)

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
  puVar1 = &UNK_1104a8ef8;
  func_0x000107c613fc(&UNK_1104a8ef8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f6b878;
  func_0x00010058fa64(FUN_101f6b878,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f6b7d8; end: 101f6b807;  */

undefined ** FUN_101f6b7d8(void)

{
  return &PTR_DAT_113066f40;
}



/* Entry: 101f6b808; end: 101f6b827;  */

void FUN_101f6b808(void)

{
  func_0x000107c61168(&PTR_PTR_11280d3e0);
  return;
}



/* Entry: 101f6b828; end: 101f6b877;  */

undefined1  [16] FUN_101f6b828(void)

{
  return ZEXT816(0x1104a8e30);
}



/* Entry: 101f6b878; end: 101f6b89f;  */

void FUN_101f6b878(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101f6b8a0; end: 101f6b8a3;  */

void FUN_101f6b8a0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f6b8a4; end: 101f6ba13;  */

void FUN_101f6b8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e461a0,&UNK_10da3a260);
  puVar1 = &UNK_1104a8f38;
  func_0x000107c613fc(&UNK_1104a8f38,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_101f6ba14,puVar1);
  return;
}



/* Entry: 101f6ba14; end: 101f6ba2f;  */

/* WARNING: Possible PIC construction at 0x000101f6b9e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f6b9f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f6b9ec) */
/* WARNING: Removing unreachable block (ram,0x000101f6b9fc) */

void FUN_101f6ba14(undefined8 *param_1)

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
  puVar4 = &UNK_1104a8f80;
  func_0x000107c613fc(&UNK_1104a8f80,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112e461a8;
  func_0x0001000285a8(0x112e461a8,&UNK_10da3a2b0);
  func_0x000107c613fc();
  pcVar6 = FUN_101f6bd58;
  func_0x0001000841fc(FUN_101f6bd58,puVar4,uVar5);
  func_0x000100084214(&UNK_10da3a270,0x3c,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101f6ba30; end: 101f6bd57;  */

void FUN_101f6ba30(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e461b0,&UNK_10da3a2b8);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e461b8,&UNK_10da3a2c0);
  puVar2 = &UNK_1104a8fa8;
  func_0x000107c613fc(&UNK_1104a8fa8,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  uVar8 = 0x101f6bd64;
  func_0x0001000823a8(0x101f6bd64,puVar2);
  func_0x000100082720("SCSpectaclesFlightImuCalibrationEntryPointWrapperServiceProvider",0x40,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_101f6b664;
  func_0x0001000823a8(FUN_101f6b664,0);
  pcVar4 = "SCSpectaclesFlightImuCalibrationScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCSpectaclesFlightImuCalibrationScopedServicesCleanupRelayServiceProvider",
                      0x49,2);
  FUN_101f6ce20();
  func_0x000100082720("SpectaclesFlightImuCalibrationScopeGraphBridgeServicesServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e461c0,&UNK_10da3a2d0);
  puVar2 = &UNK_1104a8fd0;
  func_0x000107c613fc(&UNK_1104a8fd0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar3;
  *(char **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_101f6bdb0;
  func_0x0001000823a8(FUN_101f6bdb0,puVar2);
  func_0x000100082720("SCSpectaclesFlightImuCalibrationScopeInitializationPluginRegistryServiceProvider"
                      ,0x50,2);
  func_0x0001000285a8(0x112e46140,&UNK_10da39ff0);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x101f6bdbc;
  func_0x0001000823a8(0x101f6bdbc,pcVar5);
  func_0x000100082720("SCSpectaclesFlightImuCalibrationScopeInitializationServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e46130,&UNK_10da39fe0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101f6bdc4;
  func_0x0001000823a8(0x101f6bdc4,uVar6);
  func_0x000100082720("SCSpectaclesFlightImuCalibrationScopedServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104a8ff8;
  func_0x000107c613fc(&UNK_1104a8ff8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  uVar7 = 0x101f6bdcc;
  func_0x0001000823a8(0x101f6bdcc,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCSpectaclesFlightImuCalibrationScopeEntryPointProvider",0x37,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101f6bd58; end: 101f6bd73;  */

void FUN_101f6bd58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  char *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e461b0,&UNK_10da3a2b8);
  puVar2 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e461b8,&UNK_10da3a2c0);
  puVar3 = &UNK_1104a8fa8;
  func_0x000107c613fc(&UNK_1104a8fa8,0x38,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  *(undefined8 *)(puVar3 + 0x30) = uVar1;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  uVar4 = 0x101f6bd64;
  func_0x0001000823a8(0x101f6bd64,puVar3);
  func_0x000100082720("SCSpectaclesFlightImuCalibrationEntryPointWrapperServiceProvider",0x40,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_101f6b664;
  func_0x0001000823a8(FUN_101f6b664,0);
  pcVar6 = "SCSpectaclesFlightImuCalibrationScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCSpectaclesFlightImuCalibrationScopedServicesCleanupRelayServiceProvider",
                      0x49,2);
  FUN_101f6ce20();
  func_0x000100082720("SpectaclesFlightImuCalibrationScopeGraphBridgeServicesServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e461c0,&UNK_10da3a2d0);
  puVar3 = &UNK_1104a8fd0;
  func_0x000107c613fc(&UNK_1104a8fd0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(code **)(puVar3 + 0x20) = pcVar5;
  *(char **)(puVar3 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(pcVar6);
  pcVar7 = FUN_101f6bdb0;
  func_0x0001000823a8(FUN_101f6bdb0,puVar3);
  func_0x000100082720("SCSpectaclesFlightImuCalibrationScopeInitializationPluginRegistryServiceProvider"
                      ,0x50,2);
  func_0x0001000285a8(0x112e46140,&UNK_10da39ff0);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x101f6bdbc;
  func_0x0001000823a8(0x101f6bdbc,pcVar7);
  func_0x000100082720("SCSpectaclesFlightImuCalibrationScopeInitializationServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e46130,&UNK_10da39fe0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x101f6bdc4;
  func_0x0001000823a8(0x101f6bdc4,uVar8);
  func_0x000100082720("SCSpectaclesFlightImuCalibrationScopedServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1104a8ff8;
  func_0x000107c613fc(&UNK_1104a8ff8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(code **)(puVar3 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar9 = 0x101f6bdcc;
  func_0x0001000823a8(0x101f6bdcc,puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCSpectaclesFlightImuCalibrationScopeEntryPointProvider",0x37,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 101f6bd74; end: 101f6bdaf;  */

void FUN_101f6bd74(void)

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



/* Entry: 101f6bdb0; end: 101f6bdd3;  */

void FUN_101f6bdb0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f6c5dc(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCSpectaclesFlightImuCalibrationScopeInitializationPluginRegistryServiceProvider"
                      ,0x50,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f6bdd4; end: 101f6c3db;  */

void FUN_101f6bdd4(long *param_1,long param_2)

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
  FUN_101f6c52c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a9b48;
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
  uVar7 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f022230);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar7 = 0x6553726579616c70;
  func_0x000107c5fadc(0x6553726579616c70,0xee00736563697672);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f022250);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar7);
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 101f6c3dc; end: 101f6c41f;  */

void FUN_101f6c3dc(void)

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



/* Entry: 101f6c420; end: 101f6c427;  */

undefined8 FUN_101f6c420(void)

{
  return 0x1b;
}



/* Entry: 101f6c428; end: 101f6c4ab;  */

void FUN_101f6c428(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f6c56c,param_2,FUN_101f6c570,param_2,FUN_101f6c598,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f6c4ac; end: 101f6c4fb;  */

undefined8 FUN_101f6c4ac(void)

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



/* Entry: 101f6c4fc; end: 101f6c52b;  */

void FUN_101f6c4fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104a9010;
  return;
}



/* Entry: 101f6c52c; end: 101f6c54b;  */

void FUN_101f6c52c(void)

{
  func_0x000107c61168(&PTR_PTR_112e46230);
  return;
}



/* Entry: 101f6c54c; end: 101f6c56f;  */

undefined1  [16] FUN_101f6c54c(void)

{
  return ZEXT816(0x1104a9050);
}



/* Entry: 101f6c570; end: 101f6c597;  */

void FUN_101f6c570(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f6c598; end: 101f6c59f;  */

undefined8 FUN_101f6c598(void)

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



/* Entry: 101f6c5a0; end: 101f6c5db;  */

void FUN_101f6c5a0(undefined8 *param_1,undefined8 param_2)

{
  FUN_101f6c5dc();
  func_0x0001000a7f38("SCSpectaclesFlightImuCalibrationScopeInitializationPluginRegistryServiceProvider"
                      ,0x50,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101f6c5dc; end: 101f6c7c7;  */

void FUN_101f6c5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074dbe0;
  ppuVar4 = &PTR_DAT_113066f40;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e462b0;
  func_0x0001000285a8(0x112e462b0,&UNK_10da3a458);
  func_0x0001000a6ee8(&UNK_1104a9050,
                      "SCSpectaclesFlightImuCalibrationEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4d,2,FUN_101f6c83c,param_1,uVar2,&UNK_1104a9050,&PTR_DAT_112e461c8);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104a90a0;
  func_0x000107c613fc(&UNK_1104a90a0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104a8e70,
                      "SCSpectaclesFlightImuCalibrationScopedServicesScopeInitializationPluginKey",
                      0x4a,2,FUN_101f6c8ec,puVar3,uVar2,&UNK_1104a8e70,&PTR_DAT_112e46148);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104a90c8;
  func_0x000107c613fc(&UNK_1104a90c8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104a92b0,
                      "SpectaclesFlightImuCalibrationScopeGraphBridgeScopeInitializationPluginKey",
                      0x4a,2,FUN_101f6c8f4,puVar3,uVar2,&UNK_1104a92b0,&PTR_DAT_112e46340);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e462b8;
  func_0x0001000285a8(0x112e462b8,&UNK_10da3a460);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101f6c7c8; end: 101f6c83b;  */

void FUN_101f6c7c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101f6c968;
  func_0x0001000823a8(0x101f6c968,param_3);
  func_0x000100082720("SCSpectaclesFlightImuCalibrationEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f6c83c; end: 101f6c843;  */

void FUN_101f6c83c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101f6c968;
  func_0x0001000823a8();
  func_0x000100082720("SCSpectaclesFlightImuCalibrationEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f6c844; end: 101f6c8eb;  */

void FUN_101f6c844(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104a90f0;
  func_0x000107c613fc(&UNK_1104a90f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101f6c960;
  func_0x0001000823a8(FUN_101f6c960,puVar1);
  func_0x000100082720("SCSpectaclesFlightImuCalibrationScopedServicesScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101f6c8ec; end: 101f6c8f3;  */

void FUN_101f6c8ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104a90f0;
  func_0x000107c613fc(&UNK_1104a90f0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101f6c960;
  func_0x0001000823a8(FUN_101f6c960,puVar3);
  func_0x000100082720("SCSpectaclesFlightImuCalibrationScopedServicesScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101f6c8f4; end: 101f6c933;  */

void FUN_101f6c8f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f6cf04(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpectaclesFlightImuCalibrationScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f6c934; end: 101f6c95f;  */

void FUN_101f6c934(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f6c960; end: 101f6c96f;  */

void FUN_101f6c960(undefined8 *param_1)

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
  puVar1 = &UNK_1104a8ef8;
  func_0x000107c613fc(&UNK_1104a8ef8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f6b878;
  func_0x00010058fa64(FUN_101f6b878,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f6c970; end: 101f6c9f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f6c970(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101f6cd30();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e462c0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e462c8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f6c9f8);
  (*pcVar1)();
}



/* Entry: 101f6c9f8; end: 101f6ca57; -[_TtC46SpectaclesFlightImuCalibrationScopeGraphBridge61SpectaclesFlightImuCalibrationScopeGraphBridgeSaberEntryPoint init] */

void FUN_101f6c9f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesFlightImuCalibrationScopeGraphBridge.SpectaclesFlightImuCalibrationScopeGraphBridgeSaberEntryPoint"
                      ,0x6c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f6ca24);
  (*pcVar1)();
}



/* Entry: 101f6ca58; end: 101f6ca8f; -[_TtC46SpectaclesFlightImuCalibrationScopeGraphBridge61SpectaclesFlightImuCalibrationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f6ca74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f6ca78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6ca58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e462c0));
  return;
}



/* Entry: 101f6ca90; end: 101f6cab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6ca90(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e462c8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e462c0));
  return;
}



/* Entry: 101f6cab8; end: 101f6cad7;  */

void FUN_101f6cab8(void)

{
  func_0x000107c61168(&PTR_PTR_11280d4a0);
  return;
}



/* Entry: 101f6cad8; end: 101f6cb5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f6cad8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e462f8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e46300);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f6cb60);
  (*pcVar2)();
}



/* Entry: 101f6cb60; end: 101f6cc47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f6cb60(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e462f8);
  *(undefined **)(unaff_x20 + _DAT_112e462f8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e46300);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e46300))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104a9210;
  func_0x000107c613fc(&UNK_1104a9210,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101f6cc4c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101f6cc48; end: 101f6cc53;  */

void FUN_101f6cc48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f6cc54; end: 101f6ccb3; -[_TtC46SpectaclesFlightImuCalibrationScopeGraphBridge61SCSpectaclesFlightImuCalibrationScopedServicesSaberEntryPoint init] */

void FUN_101f6cc54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesFlightImuCalibrationScopeGraphBridge.SCSpectaclesFlightImuCalibrationScopedServicesSaberEntryPoint"
                      ,0x6c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f6cc80);
  (*pcVar1)();
}



/* Entry: 101f6ccb4; end: 101f6cceb; -[_TtC46SpectaclesFlightImuCalibrationScopeGraphBridge61SCSpectaclesFlightImuCalibrationScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6ccb4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e46300));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e462f8));
  return;
}



/* Entry: 101f6ccec; end: 101f6ccef;  */

void FUN_101f6ccec(void)

{
  return;
}



/* Entry: 101f6ccf0; end: 101f6cd0f;  */

void FUN_101f6ccf0(void)

{
  FUN_101f6cb60();
  return;
}



/* Entry: 101f6cd10; end: 101f6cd2f;  */

void FUN_101f6cd10(void)

{
  func_0x000107c61168(&PTR_PTR_11280d568);
  return;
}



/* Entry: 101f6cd30; end: 101f6cdff;  */

undefined8 FUN_101f6cd30(void)

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
  
  func_0x000107c61428(0x112e46330,&uStack_40,0x20,0);
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
    FUN_101f6ce00();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101f6ce00; end: 101f6ce1f;  */

void FUN_101f6ce00(void)

{
  func_0x000107c61168(&PTR_PTR_11280d630);
  return;
}



/* Entry: 101f6ce20; end: 101f6ce8b;  */

void FUN_101f6ce20(void)

{
  func_0x0001000285a8(0x112e46338,&UNK_10da3a548);
  func_0x0001000823a8(0x101f6ce60,0);
  return;
}



/* Entry: 101f6ce8c; end: 101f6cec7; -[_TtC46SpectaclesFlightImuCalibrationScopeGraphBridge54SpectaclesFlightImuCalibrationScopeGraphBridgeServices init] */

void FUN_101f6ce8c(undefined8 param_1)

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



/* Entry: 101f6cec8; end: 101f6cefb;  */

void FUN_101f6cec8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f6cefc; end: 101f6cf03;  */

undefined8 FUN_101f6cefc(void)

{
  return 0x1b;
}



/* Entry: 101f6cf04; end: 101f6d07b;  */

void FUN_101f6cf04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104a9258;
  func_0x000107c613fc(&UNK_1104a9258,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101f6d07c,puVar1);
  return;
}



/* Entry: 101f6d07c; end: 101f6d083;  */

void FUN_101f6d07c(undefined8 *param_1)

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
  func_0x000107c61428(0x112e46330,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e46330,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104a92f0;
  func_0x000107c613fc(&UNK_1104a92f0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101f6d130;
  func_0x00010058fa64(0x101f6d130,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f6d084; end: 101f6d0df;  */

void FUN_101f6d084(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e46330,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e46330,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101f6d0e0; end: 101f6d137;  */

undefined ** FUN_101f6d0e0(void)

{
  return &PTR_DAT_113066f40;
}



/* Entry: 101f6d138; end: 101f6d17f; -[SCSpectaclesFlightImuCalibrationScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6d138(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e46390;
  func_0x000107c61428(param_1 + _DAT_112e46390,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f6d180; end: 101f6d1d7; -[SCSpectaclesFlightImuCalibrationScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6d180(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e46390;
  func_0x000107c61428(param_1 + _DAT_112e46390,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f6d1d8; end: 101f6d21f; -[SCSpectaclesFlightImuCalibrationScopeGraphBridgeSaberEntryPoint spectaclesFlightImuCalibrationScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6d1d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e46398;
  func_0x000107c61428(param_1 + _DAT_112e46398,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f6d220; end: 101f6d283; -[SCSpectaclesFlightImuCalibrationScopeGraphBridgeSaberEntryPoint setSpectaclesFlightImuCalibrationScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6d220(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e46398;
  func_0x000107c61428(param_1 + _DAT_112e46398,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f6d284; end: 101f6d3b7;  */

/* WARNING: Possible PIC construction at 0x000101f6d33c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f6d358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f6d374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f6d340) */
/* WARNING: Removing unreachable block (ram,0x000101f6d35c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6d284(void)

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
  func_0x000107c5b718();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101f6cab8();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101f6cd30();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101f6d3b8);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e462c0) = lVar5;
    *(long *)(lVar4 + _DAT_112e462c8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101f6d3b8; end: 101f6d3df; -[SCSpectaclesFlightImuCalibrationScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101f6d3b8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f6d284();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f6d3e0; end: 101f6d423; -[SCSpectaclesFlightImuCalibrationScopeGraphBridgeSaberEntryPoint end] */

void FUN_101f6d3e0(undefined8 param_1)

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



/* Entry: 101f6d424; end: 101f6d5bb;  */

void FUN_101f6d424(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffc3) || (param_3 != -0x7ffffffef0fddac0)) {
      uVar2 = 0xd00000000000003d;
      func_0x000107c605b8(0xd00000000000003d,0x800000010f022540,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpectaclesFlightImuCalibrationScopeGraphBridge/SCSpectaclesFlightImuCalibrationScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x74,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f6d5bc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595ec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f6d5bc; end: 101f6d667; -[SCSpectaclesFlightImuCalibrationScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101f6d5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f6d424(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f6d668; end: 101f6d6d3; -[SCSpectaclesFlightImuCalibrationScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6d668(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e46390,0);
  *(undefined8 *)(param_1 + _DAT_112e46398) = 0;
  *(undefined8 *)(param_1 + _DAT_112e463a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f6d6d4; end: 101f6d707;  */

void FUN_101f6d6d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f6d708; end: 101f6d74f; -[SCSpectaclesFlightImuCalibrationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f6d734: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f6d738) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6d708(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e46390);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e46398));
  return;
}



/* Entry: 101f6d750; end: 101f6d76f;  */

void FUN_101f6d750(void)

{
  func_0x000107c61168(&PTR_PTR_11280d6e0);
  return;
}



/* Entry: 101f6d770; end: 101f6d7b7; -[SCSCSpectaclesFlightImuCalibrationScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6d770(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e463d0;
  func_0x000107c61428(param_1 + _DAT_112e463d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f6d7b8; end: 101f6d80f; -[SCSCSpectaclesFlightImuCalibrationScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6d7b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e463d0;
  func_0x000107c61428(param_1 + _DAT_112e463d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f6d810; end: 101f6d8e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6d810(undefined8 param_1,long param_2)

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
    FUN_101f6cd10();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e462f8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f6d8e8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e46300);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e463d8);
    *(long **)(unaff_x20 + _DAT_112e463d8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101f6d8e8; end: 101f6d90f; -[SCSCSpectaclesFlightImuCalibrationScopedServicesSaberEntryPoint begin] */

void FUN_101f6d8e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f6d810();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f6d910; end: 101f6da87;  */

/* WARNING: Possible PIC construction at 0x000101f6d978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f6da10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f6d97c) */
/* WARNING: Removing unreachable block (ram,0x000101f6da14) */
/* WARNING: Removing unreachable block (ram,0x000101f6da2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6d910(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e463d8);
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



/* Entry: 101f6da88; end: 101f6da8f;  */

void FUN_101f6da88(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f6da90; end: 101f6dac3; -[SCSCSpectaclesFlightImuCalibrationScopedServicesSaberEntryPoint end] */

void FUN_101f6da90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f6d910();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f6dac4; end: 101f6dbe3;  */

void FUN_101f6dac4(long param_1,long param_2,long param_3)

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
                        "SpectaclesFlightImuCalibrationScopeGraphBridge/SCSCSpectaclesFlightImuCalibrationScopedServicesSaberEntryPoint.swift"
                        ,0x74,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f6dbe4);
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



/* Entry: 101f6dbe4; end: 101f6dc8f; -[SCSCSpectaclesFlightImuCalibrationScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f6dbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f6dac4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f6dc90; end: 101f6dcef; -[SCSCSpectaclesFlightImuCalibrationScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6dc90(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e463d0,0);
  *(undefined8 *)(param_1 + _DAT_112e463d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f6dcf0; end: 101f6dd23;  */

void FUN_101f6dcf0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f6dd24; end: 101f6dd5b; -[SCSCSpectaclesFlightImuCalibrationScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6dd24(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e463d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e463d8));
  return;
}



/* Entry: 101f6dd5c; end: 101f6dd7b;  */

void FUN_101f6dd5c(void)

{
  func_0x000107c61168(&PTR_PTR_11280d7a8);
  return;
}



/* Entry: 101f6dd7c; end: 101f6dde7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6dd7c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f6e170();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e46410) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101f6dde8; end: 101f6de53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6dde8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e46410) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f6de54; end: 101f6deb3; -[_TtC52SpectaclesFlightSettingsScopedFactoryServiceProvider40SCSpectaclesFlightSettingsScopedServices init] */

void FUN_101f6de54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesFlightSettingsScopedFactoryServiceProvider.SCSpectaclesFlightSettingsScopedServices"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f6de80);
  (*pcVar1)();
}



/* Entry: 101f6deb4; end: 101f6dec3; -[_TtC52SpectaclesFlightSettingsScopedFactoryServiceProvider40SCSpectaclesFlightSettingsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6deb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e46410));
  return;
}



/* Entry: 101f6dec4; end: 101f6df2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f6dec4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104a9508;
  func_0x000107c613fc(&UNK_1104a9508,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101f6e208,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f6df30; end: 101f6dfcb;  */

void FUN_101f6df30(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104a9418;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104a9418;
  return;
}



/* Entry: 101f6dfcc; end: 101f6e003;  */

void FUN_101f6dfcc(long *param_1)

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



/* Entry: 101f6e004; end: 101f6e00b;  */

undefined8 FUN_101f6e004(void)

{
  return 0x1b;
}



/* Entry: 101f6e00c; end: 101f6e13f;  */

void FUN_101f6e00c(undefined8 *param_1)

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
  puVar1 = &UNK_1104a9530;
  func_0x000107c613fc(&UNK_1104a9530,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f6e1e0;
  func_0x00010058fa64(FUN_101f6e1e0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f6e140; end: 101f6e16f;  */

undefined ** FUN_101f6e140(void)

{
  return &PTR_DAT_113066f58;
}



/* Entry: 101f6e170; end: 101f6e18f;  */

void FUN_101f6e170(void)

{
  func_0x000107c61168(&PTR_PTR_11280d868);
  return;
}



/* Entry: 101f6e190; end: 101f6e1df;  */

undefined1  [16] FUN_101f6e190(void)

{
  return ZEXT816(0x1104a9468);
}



/* Entry: 101f6e1e0; end: 101f6e207;  */

void FUN_101f6e1e0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101f6e208; end: 101f6e20b;  */

void FUN_101f6e208(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}


