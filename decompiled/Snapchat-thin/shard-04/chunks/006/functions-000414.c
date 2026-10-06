/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036ee4b0; end: 1036ee5cf;  */

void FUN_1036ee4b0(long param_1,long param_2,long param_3)

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
                        "SpectaclesCustomExportScopeGraphBridge/SCSCSpectaclesCustomExportScopedServicesSaberEntryPoint.swift"
                        ,100,2,0x36,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ee5d0);
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



/* Entry: 1036ee5d0; end: 1036ee67b; -[SCSCSpectaclesCustomExportScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1036ee5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1036ee4b0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1036ee67c; end: 1036ee6db; -[SCSCSpectaclesCustomExportScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ee67c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f88f50,0);
  *(undefined8 *)(param_1 + _DAT_112f88f58) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036ee6dc; end: 1036ee70f;  */

void FUN_1036ee6dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036ee710; end: 1036ee747; -[SCSCSpectaclesCustomExportScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ee710(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f88f50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f88f58));
  return;
}



/* Entry: 1036ee748; end: 1036ee767;  */

void FUN_1036ee748(void)

{
  func_0x000107c61168(&PTR_PTR_1128e3e28);
  return;
}



/* Entry: 1036ee768; end: 1036ee7d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ee768(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1036eeb5c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f88f90) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1036ee7d4; end: 1036ee83f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ee7d4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f88f90) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036ee840; end: 1036ee89f; -[_TtC58SpectaclesMemoriesCustomExportScopedFactoryServiceProvider46SCSpectaclesMemoriesCustomExportScopedServices init] */

void FUN_1036ee840(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesMemoriesCustomExportScopedFactoryServiceProvider.SCSpectaclesMemoriesCustomExportScopedServices"
                      ,0x69,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ee86c);
  (*pcVar1)();
}



/* Entry: 1036ee8a0; end: 1036ee8af; -[_TtC58SpectaclesMemoriesCustomExportScopedFactoryServiceProvider46SCSpectaclesMemoriesCustomExportScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ee8a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f88f90));
  return;
}



/* Entry: 1036ee8b0; end: 1036ee91b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ee8b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110684160;
  func_0x000107c613fc(&UNK_110684160,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1036eebf4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1036ee91c; end: 1036ee9b7;  */

void FUN_1036ee91c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110684070;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110684070;
  return;
}



/* Entry: 1036ee9b8; end: 1036ee9ef;  */

void FUN_1036ee9b8(long *param_1)

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



/* Entry: 1036ee9f0; end: 1036ee9f7;  */

undefined8 FUN_1036ee9f0(void)

{
  return 0x1b;
}



/* Entry: 1036ee9f8; end: 1036eeb2b;  */

void FUN_1036ee9f8(undefined8 *param_1)

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
  puVar1 = &UNK_110684188;
  func_0x000107c613fc(&UNK_110684188,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1036eebcc;
  func_0x00010058fa64(FUN_1036eebcc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036eeb2c; end: 1036eeb5b;  */

undefined ** FUN_1036eeb2c(void)

{
  return &PTR_DAT_113066fa0;
}



/* Entry: 1036eeb5c; end: 1036eeb7b;  */

void FUN_1036eeb5c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e3ee8);
  return;
}



/* Entry: 1036eeb7c; end: 1036eebcb;  */

undefined1  [16] FUN_1036eeb7c(void)

{
  return ZEXT816(0x1106840c0);
}



/* Entry: 1036eebcc; end: 1036eebf3;  */

void FUN_1036eebcc(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1036eebf4; end: 1036eebf7;  */

void FUN_1036eebf4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1036eebf8; end: 1036eecb7;  */

/* WARNING: Possible PIC construction at 0x0001036eec94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036eec98) */

void FUN_1036eebf8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110684210;
  func_0x000107c613fc(&UNK_110684210,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112f89000;
  func_0x0001000285a8(0x112f89000,&UNK_10dbfd870);
  func_0x000107c613fc();
  pcVar3 = FUN_1036ef08c;
  func_0x0001000841fc(FUN_1036ef08c,puVar1,uVar2);
  func_0x000100084214(&UNK_10dbfd830,0x3c,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1036eecb8; end: 1036eecd3;  */

/* WARNING: Possible PIC construction at 0x0001036eec94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036eec98) */

void FUN_1036eecb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_110684210;
  func_0x000107c613fc(&UNK_110684210,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112f89000;
  func_0x0001000285a8(0x112f89000,&UNK_10dbfd870);
  func_0x000107c613fc();
  pcVar4 = FUN_1036ef08c;
  func_0x0001000841fc(FUN_1036ef08c,puVar2,uVar3);
  func_0x000100084214(&UNK_10dbfd830,0x3c,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1036eecd4; end: 1036ef057;  */

void FUN_1036eecd4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f89008,&UNK_10dbfd878);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1036f0304();
  func_0x000100082720("SCSpectaclesCustomExportScopeExposerSubjectServiceProvider",0x3a,2);
  puVar3 = puVar2;
  FUN_1036f0390();
  func_0x000100082720("SCSpectaclesCustomExportScopeExposerObservableServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1036ee9b8;
  func_0x0001000823a8(FUN_1036ee9b8,0);
  func_0x000100082720("SCSpectaclesMemoriesCustomExportScopedServicesCleanupRelayServiceProvider",
                      0x49,2);
  puVar5 = puVar2;
  FUN_1036f01b8();
  func_0x000100082720("SpectaclesMemoriesCustomExportScopeGraphBridgeServicesServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112f89010,&UNK_10dbfd890);
  puVar6 = &UNK_110684238;
  func_0x000107c613fc(&UNK_110684238,0x38,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 **)(puVar6 + 0x30) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x1036ef098;
  func_0x0001000823a8(0x1036ef098,puVar6);
  func_0x000100082720("SCSpectaclesMemoriesCustomExportEntryPointWrapperServiceProvider",0x40,2);
  func_0x0001000285a8(0x112f89018,&UNK_10dbfd880);
  puVar6 = &UNK_110684260;
  func_0x000107c613fc(&UNK_110684260,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  uVar7 = 0x1036ef0a8;
  func_0x0001000823a8(0x1036ef0a8,puVar6);
  func_0x000100082720("SCSpectaclesMemoriesCustomExportScopeInitializationPluginRegistryServiceProvider"
                      ,0x50,2);
  func_0x0001000285a8(0x112f88f98,&UNK_10dbfd5b0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1036ef0b4;
  func_0x0001000823a8(0x1036ef0b4,uVar7);
  func_0x000100082720("SCSpectaclesMemoriesCustomExportScopeInitializationServiceProvider",0x42,2);
  func_0x0001000285a8(0x112f88f88,&UNK_10dbfd5a0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1036ef0bc;
  func_0x0001000823a8(0x1036ef0bc,uVar8);
  func_0x000100082720("SCSpectaclesMemoriesCustomExportScopedServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110684288;
  func_0x000107c613fc(&UNK_110684288,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1036ef0c4;
  func_0x0001000823a8(0x1036ef0c4,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCSpectaclesMemoriesCustomExportScopeEntryPointProvider",0x37,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1036ef058; end: 1036ef08b;  */

void FUN_1036ef058(void)

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



/* Entry: 1036ef08c; end: 1036ef0cb;  */

void FUN_1036ef08c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f89008,&UNK_10dbfd878);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1036f0304();
  func_0x000100082720("SCSpectaclesCustomExportScopeExposerSubjectServiceProvider",0x3a,2);
  puVar3 = puVar2;
  FUN_1036f0390();
  func_0x000100082720("SCSpectaclesCustomExportScopeExposerObservableServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1036ee9b8;
  func_0x0001000823a8(FUN_1036ee9b8,0);
  func_0x000100082720("SCSpectaclesMemoriesCustomExportScopedServicesCleanupRelayServiceProvider",
                      0x49,2);
  puVar5 = puVar2;
  FUN_1036f01b8();
  func_0x000100082720("SpectaclesMemoriesCustomExportScopeGraphBridgeServicesServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112f89010,&UNK_10dbfd890);
  puVar6 = &UNK_110684238;
  func_0x000107c613fc(&UNK_110684238,0x38,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar7;
  *(undefined8 *)(puVar6 + 0x20) = uVar8;
  *(undefined8 *)(puVar6 + 0x28) = uVar9;
  *(undefined8 **)(puVar6 + 0x30) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(puVar3);
  uVar7 = 0x1036ef098;
  func_0x0001000823a8(0x1036ef098,puVar6);
  func_0x000100082720("SCSpectaclesMemoriesCustomExportEntryPointWrapperServiceProvider",0x40,2);
  func_0x0001000285a8(0x112f89018,&UNK_10dbfd880);
  puVar6 = &UNK_110684260;
  func_0x000107c613fc(&UNK_110684260,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar7;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  uVar8 = 0x1036ef0a8;
  func_0x0001000823a8(0x1036ef0a8,puVar6);
  func_0x000100082720("SCSpectaclesMemoriesCustomExportScopeInitializationPluginRegistryServiceProvider"
                      ,0x50,2);
  func_0x0001000285a8(0x112f88f98,&UNK_10dbfd5b0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1036ef0b4;
  func_0x0001000823a8(0x1036ef0b4,uVar8);
  func_0x000100082720("SCSpectaclesMemoriesCustomExportScopeInitializationServiceProvider",0x42,2);
  func_0x0001000285a8(0x112f88f88,&UNK_10dbfd5a0);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x1036ef0bc;
  func_0x0001000823a8(0x1036ef0bc,uVar9);
  func_0x000100082720("SCSpectaclesMemoriesCustomExportScopedServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110684288;
  func_0x000107c613fc(&UNK_110684288,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar10 = 0x1036ef0c4;
  func_0x0001000823a8(0x1036ef0c4,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCSpectaclesMemoriesCustomExportScopeEntryPointProvider",0x37,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 1036ef0cc; end: 1036ef71f;  */

void FUN_1036ef0cc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  FUN_1036ef870();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  func_0x0001000285a8(0x112f89020,&UNK_10dbfd898);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar7 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar4;
  puVar5 = PTR_PTR_1126ad4c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar5;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f15b9f0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar5);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar5);
  uVar7 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar5);
  uVar7 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f066a30);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(puVar5);
  func_0x000107c61174(puVar4);
  uVar7 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f15ba10);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uStack_88);
  *param_1 = param_2;
  return;
}



/* Entry: 1036ef720; end: 1036ef763;  */

void FUN_1036ef720(void)

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



/* Entry: 1036ef764; end: 1036ef76b;  */

undefined8 FUN_1036ef764(void)

{
  return 0x1b;
}



/* Entry: 1036ef76c; end: 1036ef7ef;  */

void FUN_1036ef76c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1036ef8b0,param_2,FUN_1036ef8b4,param_2,FUN_1036ef8dc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1036ef7f0; end: 1036ef83f;  */

undefined8 FUN_1036ef7f0(void)

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



/* Entry: 1036ef840; end: 1036ef86f;  */

undefined ** FUN_1036ef840(void)

{
  return &PTR_DAT_113066fa0;
}



/* Entry: 1036ef870; end: 1036ef88f;  */

void FUN_1036ef870(void)

{
  func_0x000107c61168(&PTR_PTR_112f89090);
  return;
}



/* Entry: 1036ef890; end: 1036ef8b3;  */

undefined1  [16] FUN_1036ef890(void)

{
  return ZEXT816(0x1106842e0);
}



/* Entry: 1036ef8b4; end: 1036ef8db;  */

void FUN_1036ef8b4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1036ef8dc; end: 1036ef8e3;  */

undefined8 FUN_1036ef8dc(void)

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



/* Entry: 1036ef8e4; end: 1036ef91f;  */

void FUN_1036ef8e4(undefined8 *param_1,undefined8 param_2)

{
  FUN_1036ef920();
  func_0x0001000a7f38("SCSpectaclesMemoriesCustomExportScopeInitializationPluginRegistryServiceProvider"
                      ,0x50,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1036ef920; end: 1036efb0b;  */

void FUN_1036ef920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074dc80;
  ppuVar4 = &PTR_DAT_113066fa0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f89110;
  func_0x0001000285a8(0x112f89110,&UNK_10dbfda28);
  func_0x0001000a6ee8(&UNK_1106842e0,
                      "SCSpectaclesMemoriesCustomExportEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4d,2,FUN_1036efb80,param_1,uVar2,&UNK_1106842e0,&PTR_DAT_112f89028);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110684330;
  func_0x000107c613fc(&UNK_110684330,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110684100,
                      "SCSpectaclesMemoriesCustomExportScopedServicesScopeInitializationPluginKey",
                      0x4a,2,FUN_1036efc30,puVar3,uVar2,&UNK_110684100,&PTR_DAT_112f88fa0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110684358;
  func_0x000107c613fc(&UNK_110684358,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110684580,
                      "SpectaclesMemoriesCustomExportScopeGraphBridgeScopeInitializationPluginKey",
                      0x4a,2,FUN_1036efc38,puVar3,uVar2,&UNK_110684580,&PTR_DAT_112f891a8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f89118;
  func_0x0001000285a8(0x112f89118,&UNK_10dbfda30);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1036efb0c; end: 1036efb7f;  */

void FUN_1036efb0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1036efcac;
  func_0x0001000823a8(0x1036efcac,param_3);
  func_0x000100082720("SCSpectaclesMemoriesCustomExportEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036efb80; end: 1036efb87;  */

void FUN_1036efb80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1036efcac;
  func_0x0001000823a8();
  func_0x000100082720("SCSpectaclesMemoriesCustomExportEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036efb88; end: 1036efc2f;  */

void FUN_1036efb88(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110684380;
  func_0x000107c613fc(&UNK_110684380,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1036efca4;
  func_0x0001000823a8(FUN_1036efca4,puVar1);
  func_0x000100082720("SCSpectaclesMemoriesCustomExportScopedServicesScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1036efc30; end: 1036efc37;  */

void FUN_1036efc30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110684380;
  func_0x000107c613fc(&UNK_110684380,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1036efca4;
  func_0x0001000823a8(FUN_1036efca4,puVar3);
  func_0x000100082720("SCSpectaclesMemoriesCustomExportScopedServicesScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1036efc38; end: 1036efc77;  */

void FUN_1036efc38(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1036f0438(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpectaclesMemoriesCustomExportScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036efc78; end: 1036efca3;  */

void FUN_1036efc78(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036efca4; end: 1036efcb3;  */

void FUN_1036efca4(undefined8 *param_1)

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
  puVar1 = &UNK_110684188;
  func_0x000107c613fc(&UNK_110684188,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1036eebcc;
  func_0x00010058fa64(FUN_1036eebcc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036efcb4; end: 1036efd8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036efcb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1036f00c8();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f89120) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f89128) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036efd90);
  (*pcVar1)();
}



/* Entry: 1036efd90; end: 1036efdef; -[_TtC46SpectaclesMemoriesCustomExportScopeGraphBridge61SpectaclesMemoriesCustomExportScopeGraphBridgeSaberEntryPoint init] */

void FUN_1036efd90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesMemoriesCustomExportScopeGraphBridge.SpectaclesMemoriesCustomExportScopeGraphBridgeSaberEntryPoint"
                      ,0x6c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036efdbc);
  (*pcVar1)();
}



/* Entry: 1036efdf0; end: 1036efe27; -[_TtC46SpectaclesMemoriesCustomExportScopeGraphBridge61SpectaclesMemoriesCustomExportScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036efe0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036efe10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036efdf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f89120));
  return;
}



/* Entry: 1036efe28; end: 1036efe4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036efe28(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f89128),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f89120));
  return;
}



/* Entry: 1036efe50; end: 1036efe6f;  */

void FUN_1036efe50(void)

{
  func_0x000107c61168(&PTR_PTR_1128e3fa8);
  return;
}



/* Entry: 1036efe70; end: 1036efef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036efe70(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f89158) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f89160);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036efef8);
  (*pcVar2)();
}



/* Entry: 1036efef8; end: 1036effdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036efef8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f89158);
  *(undefined **)(unaff_x20 + _DAT_112f89158) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f89160);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f89160))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1106844a0;
  func_0x000107c613fc(&UNK_1106844a0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1036effe4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1036effe0; end: 1036effeb;  */

void FUN_1036effe0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1036effec; end: 1036f004b; -[_TtC46SpectaclesMemoriesCustomExportScopeGraphBridge61SCSpectaclesMemoriesCustomExportScopedServicesSaberEntryPoint init] */

void FUN_1036effec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesMemoriesCustomExportScopeGraphBridge.SCSpectaclesMemoriesCustomExportScopedServicesSaberEntryPoint"
                      ,0x6c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f0018);
  (*pcVar1)();
}



/* Entry: 1036f004c; end: 1036f0083; -[_TtC46SpectaclesMemoriesCustomExportScopeGraphBridge61SCSpectaclesMemoriesCustomExportScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f004c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f89160));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f89158));
  return;
}



/* Entry: 1036f0084; end: 1036f0087;  */

void FUN_1036f0084(void)

{
  return;
}



/* Entry: 1036f0088; end: 1036f00a7;  */

void FUN_1036f0088(void)

{
  FUN_1036efef8();
  return;
}



/* Entry: 1036f00a8; end: 1036f00c7;  */

void FUN_1036f00a8(void)

{
  func_0x000107c61168(&PTR_PTR_1128e4070);
  return;
}



/* Entry: 1036f00c8; end: 1036f0197;  */

undefined8 FUN_1036f00c8(void)

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
  
  func_0x000107c61428(0x112f89190,&uStack_40,0x20,0);
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
    FUN_1036f0198();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1036f0198; end: 1036f01b7;  */

void FUN_1036f0198(void)

{
  func_0x000107c61168(&PTR_PTR_1128e4138);
  return;
}



/* Entry: 1036f01b8; end: 1036f01d3;  */

void FUN_1036f01b8(undefined8 param_1)

{
  func_0x0001000285a8(0x112f89198,&UNK_10dbfdb18);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1036f0240,param_1);
  return;
}



/* Entry: 1036f01d4; end: 1036f023f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f01d4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1036f0198();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f891a0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1036f0240; end: 1036f0247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f0240(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1036f0198();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f891a0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1036f0248; end: 1036f0293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f0248(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f891a0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036f0294; end: 1036f02f3; -[_TtC46SpectaclesMemoriesCustomExportScopeGraphBridge54SpectaclesMemoriesCustomExportScopeGraphBridgeServices init] */

void FUN_1036f0294(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesMemoriesCustomExportScopeGraphBridge.SpectaclesMemoriesCustomExportScopeGraphBridgeServices"
                      ,0x65,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f02c0);
  (*pcVar1)();
}



/* Entry: 1036f02f4; end: 1036f0303; -[_TtC46SpectaclesMemoriesCustomExportScopeGraphBridge54SpectaclesMemoriesCustomExportScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f02f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f891a0));
  return;
}



/* Entry: 1036f0304; end: 1036f038f;  */

void FUN_1036f0304(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1036f0344,0);
  return;
}



/* Entry: 1036f0390; end: 1036f03ab;  */

void FUN_1036f0390(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1036f03fc,param_1);
  return;
}



/* Entry: 1036f03ac; end: 1036f03fb;  */

void FUN_1036f03ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1036f03fc; end: 1036f042f;  */

void FUN_1036f03fc(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1036f0430; end: 1036f0437;  */

undefined8 FUN_1036f0430(void)

{
  return 0x1b;
}



/* Entry: 1036f0438; end: 1036f05af;  */

void FUN_1036f0438(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106844e8;
  func_0x000107c613fc(&UNK_1106844e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1036f05b0,puVar1);
  return;
}



/* Entry: 1036f05b0; end: 1036f05b7;  */

void FUN_1036f05b0(undefined8 *param_1)

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
  func_0x000107c61428(0x112f89190,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f89190,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1106845c0;
  func_0x000107c613fc(&UNK_1106845c0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1036f0684;
  func_0x00010058fa64(0x1036f0684,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036f05b8; end: 1036f0613;  */

void FUN_1036f05b8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f89190,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f89190,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1036f0614; end: 1036f068b;  */

undefined ** FUN_1036f0614(void)

{
  return &PTR_DAT_113066fa0;
}



/* Entry: 1036f068c; end: 1036f06d3; -[SCSpectaclesMemoriesCustomExportScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f068c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f891f8;
  func_0x000107c61428(param_1 + _DAT_112f891f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036f06d4; end: 1036f072b; -[SCSpectaclesMemoriesCustomExportScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f06d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f891f8;
  func_0x000107c61428(param_1 + _DAT_112f891f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036f072c; end: 1036f0773; -[SCSpectaclesMemoriesCustomExportScopeGraphBridgeSaberEntryPoint sCSpectaclesCustomExportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f072c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f89200;
  func_0x000107c61428(param_1 + _DAT_112f89200,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1036f0774; end: 1036f077f; -[SCSpectaclesMemoriesCustomExportScopeGraphBridgeSaberEntryPoint setSCSpectaclesCustomExportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f0774(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f89200;
  func_0x000107c61428(param_1 + _DAT_112f89200,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1036f0780; end: 1036f07c7; -[SCSpectaclesMemoriesCustomExportScopeGraphBridgeSaberEntryPoint spectaclesMemoriesCustomExportScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f0780(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f89208;
  func_0x000107c61428(param_1 + _DAT_112f89208,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1036f07c8; end: 1036f07d3; -[SCSpectaclesMemoriesCustomExportScopeGraphBridgeSaberEntryPoint setSpectaclesMemoriesCustomExportScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f07c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f89208;
  func_0x000107c61428(param_1 + _DAT_112f89208,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1036f07d4; end: 1036f0833;  */

void FUN_1036f07d4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1036f0834; end: 1036f09ef;  */

/* WARNING: Possible PIC construction at 0x0001036f094c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f0970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f0980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f09c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f0984) */
/* WARNING: Removing unreachable block (ram,0x0001036f0974) */
/* WARNING: Removing unreachable block (ram,0x0001036f0950) */
/* WARNING: Removing unreachable block (ram,0x0001036f09c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f0834(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c51348();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5b744();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1036efe50();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1036f00c8();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f09f0);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f89120) = lVar5;
      *(long *)(lVar3 + _DAT_112f89128) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1036f09f0; end: 1036f0a17; -[SCSpectaclesMemoriesCustomExportScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1036f09f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036f0834();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036f0a18; end: 1036f0a5b; -[SCSpectaclesMemoriesCustomExportScopeGraphBridgeSaberEntryPoint end] */

void FUN_1036f0a18(undefined8 param_1)

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



/* Entry: 1036f0a5c; end: 1036f0c5f;  */

void FUN_1036f0a5c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0ea4290)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000024,0x800000010f15bd70,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000003d;
        if (((param_2 != -0x2fffffffffffffc3) || (param_3 != -0x7ffffffef0ea4260)) &&
           (func_0x000107c605b8(0xd00000000000003d,0x800000010f15bda0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SpectaclesMemoriesCustomExportScopeGraphBridge/SCSpectaclesMemoriesCustomExportScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x74,2,0x35,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f0c60);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5960c();
        goto LAB_1036f0ae8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c588f0();
  }
LAB_1036f0ae8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1036f0c60; end: 1036f0d0b; -[SCSpectaclesMemoriesCustomExportScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1036f0c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1036f0a5c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1036f0d0c; end: 1036f0d83; -[SCSpectaclesMemoriesCustomExportScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f0d0c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f891f8,0);
  *(undefined8 *)(param_1 + _DAT_112f89200) = 0;
  *(undefined8 *)(param_1 + _DAT_112f89208) = 0;
  *(undefined8 *)(param_1 + _DAT_112f89210) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036f0d84; end: 1036f0db7;  */

void FUN_1036f0d84(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036f0db8; end: 1036f0e0f; -[SCSpectaclesMemoriesCustomExportScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036f0de4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f0de8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f0db8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f891f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f89200));
  return;
}



/* Entry: 1036f0e10; end: 1036f0e2f;  */

void FUN_1036f0e10(void)

{
  func_0x000107c61168(&PTR_PTR_1128e41f8);
  return;
}



/* Entry: 1036f0e30; end: 1036f0e77; -[SCSCSpectaclesMemoriesCustomExportScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f0e30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f89240;
  func_0x000107c61428(param_1 + _DAT_112f89240,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036f0e78; end: 1036f0ecf; -[SCSCSpectaclesMemoriesCustomExportScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f0e78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f89240;
  func_0x000107c61428(param_1 + _DAT_112f89240,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036f0ed0; end: 1036f0fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f0ed0(undefined8 param_1,long param_2)

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
    FUN_1036f00a8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f89158) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036f0fa8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f89160);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f89248);
    *(long **)(unaff_x20 + _DAT_112f89248) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1036f0fa8; end: 1036f0fcf; -[SCSCSpectaclesMemoriesCustomExportScopedServicesSaberEntryPoint begin] */

void FUN_1036f0fa8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036f0ed0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036f0fd0; end: 1036f1147;  */

/* WARNING: Possible PIC construction at 0x0001036f1038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f10d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f103c) */
/* WARNING: Removing unreachable block (ram,0x0001036f10d4) */
/* WARNING: Removing unreachable block (ram,0x0001036f10ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f0fd0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f89248);
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



/* Entry: 1036f1148; end: 1036f114f;  */

void FUN_1036f1148(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1036f1150; end: 1036f1183; -[SCSCSpectaclesMemoriesCustomExportScopedServicesSaberEntryPoint end] */

void FUN_1036f1150(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1036f0fd0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036f1184; end: 1036f12a3;  */

void FUN_1036f1184(long param_1,long param_2,long param_3)

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
                        "SpectaclesMemoriesCustomExportScopeGraphBridge/SCSCSpectaclesMemoriesCustomExportScopedServicesSaberEntryPoint.swift"
                        ,0x74,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f12a4);
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



/* Entry: 1036f12a4; end: 1036f134f; -[SCSCSpectaclesMemoriesCustomExportScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1036f12a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1036f1184(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1036f1350; end: 1036f13af; -[SCSCSpectaclesMemoriesCustomExportScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f1350(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f89240,0);
  *(undefined8 *)(param_1 + _DAT_112f89248) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}


