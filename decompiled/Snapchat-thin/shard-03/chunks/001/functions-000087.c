/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024cb254; end: 1024cb2bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cb254(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1024cb648();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ea0248) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1024cb2c0; end: 1024cb32b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cb2c0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea0248) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024cb32c; end: 1024cb38b; -[_TtC55CreatorsSpotlightSubmissionScopedFactoryServiceProvider43SCCreatorsSpotlightSubmissionScopedServices init] */

void FUN_1024cb32c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsSpotlightSubmissionScopedFactoryServiceProvider.SCCreatorsSpotlightSubmissionScopedServices"
                      ,99,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024cb358);
  (*pcVar1)();
}



/* Entry: 1024cb38c; end: 1024cb39b; -[_TtC55CreatorsSpotlightSubmissionScopedFactoryServiceProvider43SCCreatorsSpotlightSubmissionScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cb38c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea0248));
  return;
}



/* Entry: 1024cb39c; end: 1024cb407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cb39c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110515128;
  func_0x000107c613fc(&UNK_110515128,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1024cb6e0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1024cb408; end: 1024cb4a3;  */

void FUN_1024cb408(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110515038;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110515038;
  return;
}



/* Entry: 1024cb4a4; end: 1024cb4db;  */

void FUN_1024cb4a4(long *param_1)

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



/* Entry: 1024cb4dc; end: 1024cb4e3;  */

undefined8 FUN_1024cb4dc(void)

{
  return 0x1b;
}



/* Entry: 1024cb4e4; end: 1024cb617;  */

void FUN_1024cb4e4(undefined8 *param_1)

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
  puVar1 = &UNK_110515150;
  func_0x000107c613fc(&UNK_110515150,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1024cb6b8;
  func_0x00010058fa64(FUN_1024cb6b8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024cb618; end: 1024cb647;  */

undefined ** FUN_1024cb618(void)

{
  return &PTR_DAT_113066a60;
}



/* Entry: 1024cb648; end: 1024cb667;  */

void FUN_1024cb648(void)

{
  func_0x000107c61168(&PTR_PTR_112847920);
  return;
}



/* Entry: 1024cb668; end: 1024cb6b7;  */

undefined1  [16] FUN_1024cb668(void)

{
  return ZEXT816(0x110515088);
}



/* Entry: 1024cb6b8; end: 1024cb6df;  */

void FUN_1024cb6b8(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1024cb6e0; end: 1024cb6e3;  */

void FUN_1024cb6e0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1024cb6e4; end: 1024cb883;  */

void FUN_1024cb6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea02b0,&UNK_10dab1cf0);
  puVar1 = &UNK_110515190;
  func_0x000107c613fc(&UNK_110515190,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1024cb884,puVar1);
  return;
}



/* Entry: 1024cb884; end: 1024cb8a3;  */

/* WARNING: Possible PIC construction at 0x0001024cb84c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024cb85c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024cb850) */
/* WARNING: Removing unreachable block (ram,0x0001024cb860) */

void FUN_1024cb884(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_1105151d8;
  func_0x000107c613fc(&UNK_1105151d8,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112ea02b8;
  func_0x0001000285a8(0x112ea02b8,&UNK_10dab1d40);
  func_0x000107c613fc();
  pcVar6 = FUN_1024cbd00;
  func_0x0001000841fc(FUN_1024cbd00,puVar4,uVar5);
  func_0x000100084214(&UNK_10dab1d00,0x39,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1024cb8a4; end: 1024cbcbb;  */

void FUN_1024cb8a4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_68;
  
  uVar12 = *param_2;
  func_0x0001000285a8(0x112ea02c0,&UNK_10dab1d48);
  puVar1 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001024cd434();
  pcVar3 = "SCDirectorModeScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCDirectorModeScopeExposerSubjectServiceProvider",0x30,2);
  func_0x0001024cd4b4();
  func_0x000100082720("SCMemoriesQuickPostScopeExposerSubjectServiceProvider",0x35,2);
  puVar4 = puVar2;
  FUN_1024cd474();
  func_0x000100082720("SCDirectorModeScopeExposerObservableServiceProvider",0x33,2);
  pcVar5 = pcVar3;
  FUN_1024cd540();
  func_0x000100082720("SCMemoriesQuickPostScopeExposerObservableServiceProvider",0x38,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_1024cb4a4;
  func_0x0001000823a8(FUN_1024cb4a4,0);
  func_0x000100082720("SCCreatorsSpotlightSubmissionScopedServicesCleanupRelayServiceProvider",0x46,
                      2);
  puVar7 = puVar2;
  FUN_1024cd288(puVar2,pcVar3);
  func_0x000100082720("CreatorsSpotlightSubmissionScopeGraphBridgeServicesServiceProvider",0x42,2);
  func_0x0001000285a8(0x112ea02c8,&UNK_10dab1d60);
  puVar8 = &UNK_110515200;
  func_0x000107c613fc(&UNK_110515200,0x50,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 *)(puVar8 + 0x18) = param_3;
  *(undefined8 *)(puVar8 + 0x20) = param_4;
  *(undefined8 *)(puVar8 + 0x28) = param_5;
  *(undefined8 *)(puVar8 + 0x30) = param_6;
  *(undefined8 *)(puVar8 + 0x38) = param_7;
  *(undefined8 **)(puVar8 + 0x40) = puVar4;
  *(char **)(puVar8 + 0x48) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(pcVar5);
  uVar12 = 0x1024cbd10;
  func_0x0001000823a8(0x1024cbd10,puVar8);
  func_0x000100082720("SCCreatorsSpotlightSubmissionEntryPointWrapperServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112ea02d0,&UNK_10dab1d50);
  puVar8 = &UNK_110515228;
  func_0x000107c613fc(&UNK_110515228,0x30,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 **)(puVar8 + 0x18) = puVar7;
  *(undefined8 *)(puVar8 + 0x20) = uVar12;
  *(code **)(puVar8 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(pcVar6);
  uVar9 = 0x1024cbd24;
  func_0x0001000823a8(0x1024cbd24,puVar8);
  func_0x000100082720("SCCreatorsSpotlightSubmissionScopeInitializationPluginRegistryServiceProvider"
                      ,0x4d,2);
  func_0x0001000285a8(0x112ea0250,&UNK_10dab1a80);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x1024cbd30;
  func_0x0001000823a8(0x1024cbd30,uVar9);
  func_0x000100082720("SCCreatorsSpotlightSubmissionScopeInitializationServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112ea0240,&UNK_10dab1a70);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x1024cbd38;
  func_0x0001000823a8(0x1024cbd38,uVar10);
  func_0x000100082720("SCCreatorsSpotlightSubmissionScopedServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar8 = &UNK_110515250;
  func_0x000107c613fc(&UNK_110515250,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar11;
  *(code **)(puVar8 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar11 = 0x1024cbd40;
  func_0x0001000823a8(0x1024cbd40,puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000100082720("SCCreatorsSpotlightSubmissionScopeEntryPointProvider",0x34,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 1024cbcbc; end: 1024cbcff;  */

void FUN_1024cbcbc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024cbd00; end: 1024cbd47;  */

void FUN_1024cbd00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 *puVar7;
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
  func_0x0001000285a8(0x112ea02c0,&UNK_10dab1d48);
  puVar1 = &uStack_68;
  uStack_68 = uVar14;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001024cd434();
  pcVar3 = "SCDirectorModeScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCDirectorModeScopeExposerSubjectServiceProvider",0x30,2);
  func_0x0001024cd4b4();
  func_0x000100082720("SCMemoriesQuickPostScopeExposerSubjectServiceProvider",0x35,2);
  puVar4 = puVar2;
  FUN_1024cd474();
  func_0x000100082720("SCDirectorModeScopeExposerObservableServiceProvider",0x33,2);
  pcVar5 = pcVar3;
  FUN_1024cd540();
  func_0x000100082720("SCMemoriesQuickPostScopeExposerObservableServiceProvider",0x38,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_1024cb4a4;
  func_0x0001000823a8(FUN_1024cb4a4,0);
  func_0x000100082720("SCCreatorsSpotlightSubmissionScopedServicesCleanupRelayServiceProvider",0x46,
                      2);
  puVar7 = puVar2;
  FUN_1024cd288(puVar2,pcVar3);
  func_0x000100082720("CreatorsSpotlightSubmissionScopeGraphBridgeServicesServiceProvider",0x42,2);
  func_0x0001000285a8(0x112ea02c8,&UNK_10dab1d60);
  puVar8 = &UNK_110515200;
  func_0x000107c613fc(&UNK_110515200,0x50,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 *)(puVar8 + 0x18) = uVar9;
  *(undefined8 *)(puVar8 + 0x20) = uVar11;
  *(undefined8 *)(puVar8 + 0x28) = uVar10;
  *(undefined8 *)(puVar8 + 0x30) = uVar12;
  *(undefined8 *)(puVar8 + 0x38) = uVar13;
  *(undefined8 **)(puVar8 + 0x40) = puVar4;
  *(char **)(puVar8 + 0x48) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(pcVar5);
  uVar9 = 0x1024cbd10;
  func_0x0001000823a8(0x1024cbd10,puVar8);
  func_0x000100082720("SCCreatorsSpotlightSubmissionEntryPointWrapperServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112ea02d0,&UNK_10dab1d50);
  puVar8 = &UNK_110515228;
  func_0x000107c613fc(&UNK_110515228,0x30,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 **)(puVar8 + 0x18) = puVar7;
  *(undefined8 *)(puVar8 + 0x20) = uVar9;
  *(code **)(puVar8 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar6);
  uVar10 = 0x1024cbd24;
  func_0x0001000823a8(0x1024cbd24,puVar8);
  func_0x000100082720("SCCreatorsSpotlightSubmissionScopeInitializationPluginRegistryServiceProvider"
                      ,0x4d,2);
  func_0x0001000285a8(0x112ea0250,&UNK_10dab1a80);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x1024cbd30;
  func_0x0001000823a8(0x1024cbd30,uVar10);
  func_0x000100082720("SCCreatorsSpotlightSubmissionScopeInitializationServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112ea0240,&UNK_10dab1a70);
  func_0x000107c6157c(uVar11);
  uVar12 = 0x1024cbd38;
  func_0x0001000823a8(0x1024cbd38,uVar11);
  func_0x000100082720("SCCreatorsSpotlightSubmissionScopedServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar8 = &UNK_110515250;
  func_0x000107c613fc(&UNK_110515250,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar12;
  *(code **)(puVar8 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar12 = 0x1024cbd40;
  func_0x0001000823a8(0x1024cbd40,puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000100082720("SCCreatorsSpotlightSubmissionScopeEntryPointProvider",0x34,2);
  *param_1 = uVar12;
  return;
}



/* Entry: 1024cbd48; end: 1024cc783;  */

void FUN_1024cbd48(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_1024cc904();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  func_0x0001000285a8(0x112e9cc68,&UNK_10daab360);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar8 = uStack_98;
  func_0x000107c6157c(uStack_98);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x18) = puVar6;
  func_0x0001000285a8(0x112ea02d8,&UNK_10dab1d70);
  func_0x000107c610f8();
  uVar8 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x20) = puVar6;
  puVar6 = PTR_PTR_1126aa938;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar6;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0a5560);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar6);
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0a5590);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar6);
  uVar8 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar6);
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f017660);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar6);
  uVar8 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef326c0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef32840);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0a55b0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c61170(uVar7);
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



/* Entry: 1024cc784; end: 1024cc7f7;  */

void FUN_1024cc784(void)

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



/* Entry: 1024cc7f8; end: 1024cc7ff;  */

undefined8 FUN_1024cc7f8(void)

{
  return 0x1b;
}



/* Entry: 1024cc800; end: 1024cc883;  */

void FUN_1024cc800(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1024cc944,param_2,FUN_1024cc948,param_2,FUN_1024cc970,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1024cc884; end: 1024cc8d3;  */

undefined8 FUN_1024cc884(void)

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



/* Entry: 1024cc8d4; end: 1024cc903;  */

void FUN_1024cc8d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110515268;
  return;
}



/* Entry: 1024cc904; end: 1024cc923;  */

void FUN_1024cc904(void)

{
  func_0x000107c61168(&PTR_PTR_112ea0348);
  return;
}



/* Entry: 1024cc924; end: 1024cc947;  */

undefined1  [16] FUN_1024cc924(void)

{
  return ZEXT816(0x1105152a8);
}



/* Entry: 1024cc948; end: 1024cc96f;  */

void FUN_1024cc948(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1024cc970; end: 1024cc977;  */

undefined8 FUN_1024cc970(void)

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



/* Entry: 1024cc978; end: 1024cc9b3;  */

void FUN_1024cc978(undefined8 *param_1,undefined8 param_2)

{
  FUN_1024cc9b4();
  func_0x0001000a7f38("SCCreatorsSpotlightSubmissionScopeInitializationPluginRegistryServiceProvider"
                      ,0x4d,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1024cc9b4; end: 1024ccb9f;  */

void FUN_1024cc9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d3c0;
  ppuVar4 = &PTR_DAT_113066a60;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1105152f8;
  func_0x000107c613fc(&UNK_1105152f8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112ea03e0;
  func_0x0001000285a8(0x112ea03e0,&UNK_10dab1ef0);
  func_0x0001000a6ee8(&UNK_1105155b0,
                      "CreatorsSpotlightSubmissionScopeGraphBridgeScopeInitializationPluginKey",0x47
                      ,2,FUN_1024ccba0,puVar2,uVar3,&UNK_1105155b0,&PTR_DAT_112ea0480);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105152a8,
                      "SCCreatorsSpotlightSubmissionEntryPointWrapperScopeInitializationPluginKey",
                      0x4a,2,FUN_1024ccc54,param_3,uVar3,&UNK_1105152a8,&PTR_DAT_112ea02e0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110515320;
  func_0x000107c613fc(&UNK_110515320,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105150c8,
                      "SCCreatorsSpotlightSubmissionScopedServicesScopeInitializationPluginKey",0x47
                      ,2,FUN_1024ccd04,puVar2,uVar3,&UNK_1105150c8,&PTR_DAT_112ea0258);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112ea03e8;
  func_0x0001000285a8(0x112ea03e8,&UNK_10dab1ef8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1024ccba0; end: 1024ccbdf;  */

void FUN_1024ccba0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001024cd5ac(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("CreatorsSpotlightSubmissionScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024ccbe0; end: 1024ccc53;  */

void FUN_1024ccbe0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1024ccd40;
  func_0x0001000823a8(0x1024ccd40,param_3);
  func_0x000100082720("SCCreatorsSpotlightSubmissionEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024ccc54; end: 1024ccc5b;  */

void FUN_1024ccc54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1024ccd40;
  func_0x0001000823a8();
  func_0x000100082720("SCCreatorsSpotlightSubmissionEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024ccc5c; end: 1024ccd03;  */

void FUN_1024ccc5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110515348;
  func_0x000107c613fc(&UNK_110515348,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1024ccd38;
  func_0x0001000823a8(FUN_1024ccd38,puVar1);
  func_0x000100082720("SCCreatorsSpotlightSubmissionScopedServicesScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1024ccd04; end: 1024ccd0b;  */

void FUN_1024ccd04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110515348;
  func_0x000107c613fc(&UNK_110515348,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1024ccd38;
  func_0x0001000823a8(FUN_1024ccd38,puVar3);
  func_0x000100082720("SCCreatorsSpotlightSubmissionScopedServicesScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1024ccd0c; end: 1024ccd37;  */

void FUN_1024ccd0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024ccd38; end: 1024ccd47;  */

void FUN_1024ccd38(undefined8 *param_1)

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
  puVar1 = &UNK_110515150;
  func_0x000107c613fc(&UNK_110515150,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1024cb6b8;
  func_0x00010058fa64(FUN_1024cb6b8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024ccd48; end: 1024cce5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1024ccd48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1024cd198();
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
    *(long *)(unaff_x20 + _DAT_112ea03f0) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112ea03f8) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024cce60);
  (*pcVar2)();
}



/* Entry: 1024cce60; end: 1024ccebf; -[_TtC43CreatorsSpotlightSubmissionScopeGraphBridge58CreatorsSpotlightSubmissionScopeGraphBridgeSaberEntryPoint init] */

void FUN_1024cce60(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsSpotlightSubmissionScopeGraphBridge.CreatorsSpotlightSubmissionScopeGraphBridgeSaberEntryPoint"
                      ,0x66,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024cce8c);
  (*pcVar1)();
}



/* Entry: 1024ccec0; end: 1024ccef7; -[_TtC43CreatorsSpotlightSubmissionScopeGraphBridge58CreatorsSpotlightSubmissionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024ccedc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024ccee0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ccec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea03f0));
  return;
}



/* Entry: 1024ccef8; end: 1024ccf1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ccef8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ea03f8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ea03f0));
  return;
}



/* Entry: 1024ccf20; end: 1024ccf3f;  */

void FUN_1024ccf20(void)

{
  func_0x000107c61168(&PTR_PTR_1128479e0);
  return;
}



/* Entry: 1024ccf40; end: 1024ccfc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024ccf40(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea0428) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ea0430);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024ccfc8);
  (*pcVar2)();
}



/* Entry: 1024ccfc8; end: 1024cd0af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1024ccfc8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea0428);
  *(undefined **)(unaff_x20 + _DAT_112ea0428) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea0430);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ea0430))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110515468;
  func_0x000107c613fc(&UNK_110515468,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1024cd0b4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1024cd0b0; end: 1024cd0bb;  */

void FUN_1024cd0b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1024cd0bc; end: 1024cd11b; -[_TtC43CreatorsSpotlightSubmissionScopeGraphBridge58SCCreatorsSpotlightSubmissionScopedServicesSaberEntryPoint init] */

void FUN_1024cd0bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsSpotlightSubmissionScopeGraphBridge.SCCreatorsSpotlightSubmissionScopedServicesSaberEntryPoint"
                      ,0x66,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024cd0e8);
  (*pcVar1)();
}



/* Entry: 1024cd11c; end: 1024cd153; -[_TtC43CreatorsSpotlightSubmissionScopeGraphBridge58SCCreatorsSpotlightSubmissionScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cd11c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea0430));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea0428));
  return;
}



/* Entry: 1024cd154; end: 1024cd157;  */

void FUN_1024cd154(void)

{
  return;
}



/* Entry: 1024cd158; end: 1024cd177;  */

void FUN_1024cd158(void)

{
  FUN_1024ccfc8();
  return;
}



/* Entry: 1024cd178; end: 1024cd197;  */

void FUN_1024cd178(void)

{
  func_0x000107c61168(&PTR_PTR_112847aa8);
  return;
}



/* Entry: 1024cd198; end: 1024cd267;  */

undefined8 FUN_1024cd198(void)

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
  
  func_0x000107c61428(0x112ea0460,&uStack_40,0x20,0);
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
    FUN_1024cd268();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1024cd268; end: 1024cd287;  */

void FUN_1024cd268(void)

{
  func_0x000107c61168(&PTR_PTR_112847b70);
  return;
}



/* Entry: 1024cd288; end: 1024cd2ab;  */

void FUN_1024cd288(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105154b0;
  func_0x0001000285a8(0x112ea0468,&UNK_10dab1fd8);
  func_0x000107c613fc(&UNK_1105154b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1024cd330,puVar1);
  return;
}



/* Entry: 1024cd2ac; end: 1024cd32f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cd2ac(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1024cd268();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ea0470) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ea0478) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1024cd330; end: 1024cd337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cd330(undefined8 *param_1)

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
  FUN_1024cd268();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112ea0470) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112ea0478) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1024cd338; end: 1024cd39b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cd338(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea0470) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea0478) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024cd39c; end: 1024cd3fb; -[_TtC43CreatorsSpotlightSubmissionScopeGraphBridge51CreatorsSpotlightSubmissionScopeGraphBridgeServices init] */

void FUN_1024cd39c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsSpotlightSubmissionScopeGraphBridge.CreatorsSpotlightSubmissionScopeGraphBridgeServices"
                      ,0x5f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024cd3c8);
  (*pcVar1)();
}



/* Entry: 1024cd3fc; end: 1024cd473; -[_TtC43CreatorsSpotlightSubmissionScopeGraphBridge51CreatorsSpotlightSubmissionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024cd418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024cd41c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cd3fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea0470));
  return;
}



/* Entry: 1024cd474; end: 1024cd47f;  */

void FUN_1024cd474(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1024cd480,param_1);
  return;
}



/* Entry: 1024cd480; end: 1024cd53f;  */

void FUN_1024cd480(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1024cd540; end: 1024cd54b;  */

void FUN_1024cd540(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1024cd870,param_1);
  return;
}



/* Entry: 1024cd54c; end: 1024cd5a3;  */

void FUN_1024cd54c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1024cd5a4; end: 1024cd5cf;  */

undefined8 FUN_1024cd5a4(void)

{
  return 0x1b;
}



/* Entry: 1024cd5d0; end: 1024cd64f;  */

void FUN_1024cd5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 1024cd650; end: 1024cd747;  */

void FUN_1024cd650(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112ea0460,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ea0460,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105155f0;
  func_0x000107c613fc(&UNK_1105155f0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1024cd868;
  func_0x00010058fa64(0x1024cd868,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024cd748; end: 1024cd773;  */

void FUN_1024cd748(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024cd774; end: 1024cd77b;  */

void FUN_1024cd774(undefined8 *param_1)

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
  func_0x000107c61428(0x112ea0460,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ea0460,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105155f0;
  func_0x000107c613fc(&UNK_1105155f0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1024cd868;
  func_0x00010058fa64(0x1024cd868,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024cd77c; end: 1024cd7d7;  */

void FUN_1024cd77c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ea0460,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ea0460,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1024cd7d8; end: 1024cd87b;  */

undefined ** FUN_1024cd7d8(void)

{
  return &PTR_DAT_113066a60;
}



/* Entry: 1024cd87c; end: 1024cd8c3; -[SCCreatorsSpotlightSubmissionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cd87c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea04d0;
  func_0x000107c61428(param_1 + _DAT_112ea04d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024cd8c4; end: 1024cd91b; -[SCCreatorsSpotlightSubmissionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cd8c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea04d0;
  func_0x000107c61428(param_1 + _DAT_112ea04d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024cd91c; end: 1024cd963; -[SCCreatorsSpotlightSubmissionScopeGraphBridgeSaberEntryPoint sCDirectorModeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cd91c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea04d8;
  func_0x000107c61428(param_1 + _DAT_112ea04d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024cd964; end: 1024cd96f; -[SCCreatorsSpotlightSubmissionScopeGraphBridgeSaberEntryPoint setSCDirectorModeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cd964(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea04d8;
  func_0x000107c61428(param_1 + _DAT_112ea04d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024cd970; end: 1024cd9b7; -[SCCreatorsSpotlightSubmissionScopeGraphBridgeSaberEntryPoint sCMemoriesQuickPostScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cd970(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea04e0;
  func_0x000107c61428(param_1 + _DAT_112ea04e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024cd9b8; end: 1024cd9c3; -[SCCreatorsSpotlightSubmissionScopeGraphBridgeSaberEntryPoint setSCMemoriesQuickPostScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cd9b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea04e0;
  func_0x000107c61428(param_1 + _DAT_112ea04e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024cd9c4; end: 1024cda0b; -[SCCreatorsSpotlightSubmissionScopeGraphBridgeSaberEntryPoint creatorsSpotlightSubmissionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cd9c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea04e8;
  func_0x000107c61428(param_1 + _DAT_112ea04e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024cda0c; end: 1024cda17; -[SCCreatorsSpotlightSubmissionScopeGraphBridgeSaberEntryPoint setCreatorsSpotlightSubmissionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cda0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea04e8;
  func_0x000107c61428(param_1 + _DAT_112ea04e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024cda18; end: 1024cda77;  */

void FUN_1024cda18(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1024cda78; end: 1024cdcaf;  */

/* WARNING: Possible PIC construction at 0x0001024cdbe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024cdbf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024cdc10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024cdc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024cdc3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024cdc84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024cdc24) */
/* WARNING: Removing unreachable block (ram,0x0001024cdc14) */
/* WARNING: Removing unreachable block (ram,0x0001024cdbf8) */
/* WARNING: Removing unreachable block (ram,0x0001024cdbe8) */
/* WARNING: Removing unreachable block (ram,0x0001024cdc88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024cda78(void)

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
  func_0x000107c50d1c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c51058();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c40d48();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_1024ccf20();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_1024cd198();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1024cdcb0);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112ea03f0) = lVar5;
        *(long *)(lVar4 + _DAT_112ea03f8) = unaff_x20;
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



/* Entry: 1024cdcb0; end: 1024cdcd7; -[SCCreatorsSpotlightSubmissionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1024cdcb0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024cda78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024cdcd8; end: 1024cdd1b; -[SCCreatorsSpotlightSubmissionScopeGraphBridgeSaberEntryPoint end] */

void FUN_1024cdcd8(undefined8 param_1)

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



/* Entry: 1024cdd1c; end: 1024cdf8b;  */

void FUN_1024cdd1c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef0f89ae0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001a,0x800000010f076520,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000001f;
        if (((param_2 == -0x2fffffffffffffe1) && (param_3 == -0x7ffffffef0f893e0)) ||
           (func_0x000107c605b8(0xd00000000000001f,0x800000010f076c20,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58600();
        }
        else {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffc6) || (param_3 != -0x7ffffffef0f5a710)) &&
             (func_0x000107c605b8(0xd00000000000003a,0x800000010f0a58f0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "CreatorsSpotlightSubmissionScopeGraphBridge/SCCreatorsSpotlightSubmissionScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x6e,2,0x39,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1024cdf8c);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53b38();
        }
        goto LAB_1024cdda8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c582c4();
  }
LAB_1024cdda8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1024cdf8c; end: 1024ce037; -[SCCreatorsSpotlightSubmissionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1024cdf8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1024cdd1c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1024ce038; end: 1024ce0bb; -[SCCreatorsSpotlightSubmissionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ce038(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ea04d0,0);
  *(undefined8 *)(param_1 + _DAT_112ea04d8) = 0;
  *(undefined8 *)(param_1 + _DAT_112ea04e0) = 0;
  *(undefined8 *)(param_1 + _DAT_112ea04e8) = 0;
  *(undefined8 *)(param_1 + _DAT_112ea04f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024ce0bc; end: 1024ce0ef;  */

void FUN_1024ce0bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024ce0f0; end: 1024ce157; -[SCCreatorsSpotlightSubmissionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024ce11c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024ce13c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024ce120) */
/* WARNING: Removing unreachable block (ram,0x0001024ce140) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ce0f0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ea04d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea04d8));
  return;
}



/* Entry: 1024ce158; end: 1024ce177;  */

void FUN_1024ce158(void)

{
  func_0x000107c61168(&PTR_PTR_112847c38);
  return;
}



/* Entry: 1024ce178; end: 1024ce1bf; -[SCSCCreatorsSpotlightSubmissionScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ce178(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea0520;
  func_0x000107c61428(param_1 + _DAT_112ea0520,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024ce1c0; end: 1024ce217; -[SCSCCreatorsSpotlightSubmissionScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ce1c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea0520;
  func_0x000107c61428(param_1 + _DAT_112ea0520,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024ce218; end: 1024ce2ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ce218(undefined8 param_1,long param_2)

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
    FUN_1024cd178();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ea0428) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024ce2f0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ea0430);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ea0528);
    *(long **)(unaff_x20 + _DAT_112ea0528) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1024ce2f0; end: 1024ce317; -[SCSCCreatorsSpotlightSubmissionScopedServicesSaberEntryPoint begin] */

void FUN_1024ce2f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024ce218();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024ce318; end: 1024ce48f;  */

/* WARNING: Possible PIC construction at 0x0001024ce380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024ce418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024ce384) */
/* WARNING: Removing unreachable block (ram,0x0001024ce41c) */
/* WARNING: Removing unreachable block (ram,0x0001024ce434) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ce318(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea0528);
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



/* Entry: 1024ce490; end: 1024ce497;  */

void FUN_1024ce490(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1024ce498; end: 1024ce4cb; -[SCSCCreatorsSpotlightSubmissionScopedServicesSaberEntryPoint end] */

void FUN_1024ce498(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1024ce318();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024ce4cc; end: 1024ce5eb;  */

void FUN_1024ce4cc(long param_1,long param_2,long param_3)

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
                        "CreatorsSpotlightSubmissionScopeGraphBridge/SCSCCreatorsSpotlightSubmissionScopedServicesSaberEntryPoint.swift"
                        ,0x6e,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024ce5ec);
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



/* Entry: 1024ce5ec; end: 1024ce697; -[SCSCCreatorsSpotlightSubmissionScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1024ce5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1024ce4cc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1024ce698; end: 1024ce6f7; -[SCSCCreatorsSpotlightSubmissionScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ce698(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ea0520,0);
  *(undefined8 *)(param_1 + _DAT_112ea0528) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024ce6f8; end: 1024ce72b;  */

void FUN_1024ce6f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024ce72c; end: 1024ce763; -[SCSCCreatorsSpotlightSubmissionScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ce72c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ea0520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea0528));
  return;
}


