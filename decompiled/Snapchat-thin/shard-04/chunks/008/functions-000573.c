/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10396cc24; end: 10396cc2b;  */

undefined8 FUN_10396cc24(void)

{
  return 0x1b;
}



/* Entry: 10396cc2c; end: 10396cd5f;  */

void FUN_10396cc2c(undefined8 *param_1)

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
  puVar1 = &UNK_1106b27a8;
  func_0x000107c613fc(&UNK_1106b27a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10396ce44;
  func_0x00010058fa64(FUN_10396ce44,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10396cd60; end: 10396cd8f;  */

undefined ** FUN_10396cd60(void)

{
  return &PTR_DAT_112fba298;
}



/* Entry: 10396cd90; end: 10396cdaf;  */

void FUN_10396cd90(void)

{
  func_0x000107c61168(&PTR_PTR_112907bb8);
  return;
}



/* Entry: 10396cdb0; end: 10396cdff;  */

undefined1  [16] FUN_10396cdb0(void)

{
  return ZEXT816(0x1106b26e0);
}



/* Entry: 10396ce00; end: 10396ce43;  */

void FUN_10396ce00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fba018 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ad810;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112fba018 = puVar1;
  return;
}



/* Entry: 10396ce44; end: 10396ce6b;  */

void FUN_10396ce44(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10396ce6c; end: 10396ce7f;  */

void FUN_10396ce6c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10396ce80; end: 10396d1e7;  */

void FUN_10396ce80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
  func_0x0001000285a8(0x112fba030,&UNK_10dc2ad60);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10396e0f8();
  func_0x000100082720("SCSearchBaseScopeExposerSubjectServiceProvider",0x2e,2);
  puVar3 = puVar2;
  FUN_10396e184();
  func_0x000100082720("SCSearchBaseScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10396cbec;
  func_0x0001000823a8(FUN_10396cbec,0);
  func_0x000100082720("SCSearchScopedServicesCleanupRelayServiceProvider",0x31,2);
  puVar5 = puVar2;
  FUN_10396dfac();
  func_0x000100082720("SearchScopeGraphBridgeServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112fba038,&UNK_10dc2ad70);
  puVar6 = &UNK_1106b2808;
  func_0x000107c613fc(&UNK_1106b2808,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 **)(puVar6 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x10396d1f0;
  func_0x0001000823a8(0x10396d1f0,puVar6);
  func_0x000100082720("SCSearchEntryPointWrapperServiceProvider",0x28,2);
  func_0x0001000285a8(0x112fba040,&UNK_10dc2ad78);
  puVar6 = &UNK_1106b2830;
  func_0x000107c613fc(&UNK_1106b2830,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  uVar7 = 0x10396d1fc;
  func_0x0001000823a8(0x10396d1fc,puVar6);
  func_0x000100082720("SCSearchScopeInitializationPluginRegistryServiceProvider",0x38,2);
  func_0x0001000285a8(0x112fb9fb8,&UNK_10dc2ab40);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x10396d208;
  func_0x0001000823a8(0x10396d208,uVar7);
  func_0x000100082720("SCSearchScopeInitializationServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112fb9fa8,&UNK_10dc2ab30);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10396d210;
  func_0x0001000823a8(0x10396d210,uVar8);
  func_0x000100082720("SCSearchScopedServicesServiceProvider",0x25,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1106b2858;
  func_0x000107c613fc(&UNK_1106b2858,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x10396d218;
  func_0x0001000823a8(0x10396d218,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCSearchScopeEntryPointProvider",0x1f,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10396d1e8; end: 10396d21f;  */

void FUN_10396d1e8(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 unaff_x20;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112fba030,&UNK_10dc2ad60);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10396e0f8();
  func_0x000100082720("SCSearchBaseScopeExposerSubjectServiceProvider",0x2e,2);
  puVar3 = puVar2;
  FUN_10396e184();
  func_0x000100082720("SCSearchBaseScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10396cbec;
  func_0x0001000823a8(FUN_10396cbec,0);
  func_0x000100082720("SCSearchScopedServicesCleanupRelayServiceProvider",0x31,2);
  puVar5 = puVar2;
  FUN_10396dfac();
  func_0x000100082720("SearchScopeGraphBridgeServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112fba038,&UNK_10dc2ad70);
  puVar6 = &UNK_1106b2808;
  func_0x000107c613fc(&UNK_1106b2808,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20;
  *(undefined8 **)(puVar6 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  func_0x000107c6157c(puVar3);
  uVar10 = 0x10396d1f0;
  func_0x0001000823a8(0x10396d1f0,puVar6);
  func_0x000100082720("SCSearchEntryPointWrapperServiceProvider",0x28,2);
  func_0x0001000285a8(0x112fba040,&UNK_10dc2ad78);
  puVar6 = &UNK_1106b2830;
  func_0x000107c613fc(&UNK_1106b2830,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  uVar7 = 0x10396d1fc;
  func_0x0001000823a8(0x10396d1fc,puVar6);
  func_0x000100082720("SCSearchScopeInitializationPluginRegistryServiceProvider",0x38,2);
  func_0x0001000285a8(0x112fb9fb8,&UNK_10dc2ab40);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x10396d208;
  func_0x0001000823a8(0x10396d208,uVar7);
  func_0x000100082720("SCSearchScopeInitializationServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112fb9fa8,&UNK_10dc2ab30);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10396d210;
  func_0x0001000823a8(0x10396d210,uVar8);
  func_0x000100082720("SCSearchScopedServicesServiceProvider",0x25,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1106b2858;
  func_0x000107c613fc(&UNK_1106b2858,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x10396d218;
  func_0x0001000823a8(0x10396d218,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCSearchScopeEntryPointProvider",0x1f,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10396d220; end: 10396d2cf;  */

void FUN_10396d220(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_10396d664();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10396d464(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10396d2d0; end: 10396d33f;  */

undefined8 FUN_10396d2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_10396d464(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 10396d340; end: 10396d373;  */

void FUN_10396d340(void)

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



/* Entry: 10396d374; end: 10396d37b;  */

undefined8 FUN_10396d374(void)

{
  return 0x1b;
}



/* Entry: 10396d37c; end: 10396d3ff;  */

void FUN_10396d37c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10396d6a4,param_2,FUN_10396d6a8,param_2,FUN_10396d6d0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10396d400; end: 10396d44f;  */

undefined8 FUN_10396d400(void)

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



/* Entry: 10396d450; end: 10396d463;  */

void FUN_10396d450(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1106b2870;
  return;
}



/* Entry: 10396d464; end: 10396d647;  */

void FUN_10396d464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112f5e9b8,&UNK_10dbb9210);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126ad818;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x6353686372616573;
  func_0x000107c5fadc(0x6353686372616573,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f143b30);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f143b50);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10396d648; end: 10396d663;  */

undefined ** FUN_10396d648(void)

{
  return &PTR_DAT_112fba298;
}



/* Entry: 10396d664; end: 10396d683;  */

void FUN_10396d664(void)

{
  func_0x000107c61168(&PTR_PTR_112fba0b0);
  return;
}



/* Entry: 10396d684; end: 10396d6a7;  */

undefined1  [16] FUN_10396d684(void)

{
  return ZEXT816(0x1106b28b0);
}



/* Entry: 10396d6a8; end: 10396d6cf;  */

void FUN_10396d6a8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10396d6d0; end: 10396d6d7;  */

undefined8 FUN_10396d6d0(void)

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



/* Entry: 10396d6d8; end: 10396d713;  */

void FUN_10396d6d8(undefined8 *param_1,undefined8 param_2)

{
  FUN_10396d714();
  func_0x0001000a7f38("SCSearchScopeInitializationPluginRegistryServiceProvider",0x38,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10396d714; end: 10396d8ff;  */

void FUN_10396d714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106b2c28;
  ppuVar4 = &PTR_DAT_112fba298;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112fba120;
  func_0x0001000285a8(0x112fba120,&UNK_10dc2ae90);
  func_0x0001000a6ee8(&UNK_1106b28b0,"SCSearchEntryPointWrapperScopeInitializationPluginKey",0x35,2,
                      FUN_10396d974,param_1,uVar2,&UNK_1106b28b0,&PTR_DAT_112fba048);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1106b2900;
  func_0x000107c613fc(&UNK_1106b2900,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106b2720,"SCSearchScopedServicesScopeInitializationPluginKey",0x32,2,
                      FUN_10396da24,puVar3,uVar2,&UNK_1106b2720,&PTR_DAT_112fb9fc0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1106b2928;
  func_0x000107c613fc(&UNK_1106b2928,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1106b2b00,"SearchScopeGraphBridgeScopeInitializationPluginKey",0x32,2,
                      FUN_10396da2c,puVar3,uVar2,&UNK_1106b2b00,&PTR_DAT_112fba1b8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112fba128;
  func_0x0001000285a8(0x112fba128,&UNK_10dc2ae98);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 10396d900; end: 10396d973;  */

void FUN_10396d900(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10396daa0;
  func_0x0001000823a8(0x10396daa0,param_3);
  func_0x000100082720("SCSearchEntryPointWrapperScopeInitializationPluginProvider",0x3a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10396d974; end: 10396d97b;  */

void FUN_10396d974(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10396daa0;
  func_0x0001000823a8();
  func_0x000100082720("SCSearchEntryPointWrapperScopeInitializationPluginProvider",0x3a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10396d97c; end: 10396da23;  */

void FUN_10396d97c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106b2950;
  func_0x000107c613fc(&UNK_1106b2950,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10396da98;
  func_0x0001000823a8(FUN_10396da98,puVar1);
  func_0x000100082720("SCSearchScopedServicesScopeInitializationPluginProvider",0x37,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10396da24; end: 10396da2b;  */

void FUN_10396da24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1106b2950;
  func_0x000107c613fc(&UNK_1106b2950,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10396da98;
  func_0x0001000823a8(FUN_10396da98,puVar3);
  func_0x000100082720("SCSearchScopedServicesScopeInitializationPluginProvider",0x37,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10396da2c; end: 10396da6b;  */

void FUN_10396da2c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10396e22c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SearchScopeGraphBridgeScopeInitializationPluginProvider",0x37,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10396da6c; end: 10396da97;  */

void FUN_10396da6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10396da98; end: 10396daa7;  */

void FUN_10396da98(undefined8 *param_1)

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
  puVar1 = &UNK_1106b27a8;
  func_0x000107c613fc(&UNK_1106b27a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10396ce44;
  func_0x00010058fa64(FUN_10396ce44,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10396daa8; end: 10396db83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10396daa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_10396debc();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112fba130) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fba138) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10396db84);
  (*pcVar1)();
}



/* Entry: 10396db84; end: 10396dbe3; -[_TtC22SearchScopeGraphBridge37SearchScopeGraphBridgeSaberEntryPoint init] */

void FUN_10396db84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SearchScopeGraphBridge.SearchScopeGraphBridgeSaberEntryPoint",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10396dbb0);
  (*pcVar1)();
}



/* Entry: 10396dbe4; end: 10396dc1b; -[_TtC22SearchScopeGraphBridge37SearchScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010396dc00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010396dc04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396dbe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fba130));
  return;
}



/* Entry: 10396dc1c; end: 10396dc43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396dc1c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fba138),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fba130));
  return;
}



/* Entry: 10396dc44; end: 10396dc63;  */

void FUN_10396dc44(void)

{
  func_0x000107c61168(&PTR_PTR_112907c78);
  return;
}



/* Entry: 10396dc64; end: 10396dceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10396dc64(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fba168) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112fba170);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10396dcec);
  (*pcVar2)();
}



/* Entry: 10396dcec; end: 10396ddd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10396dcec(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fba168);
  *(undefined **)(unaff_x20 + _DAT_112fba168) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fba170);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112fba170))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1106b2a20;
  func_0x000107c613fc(&UNK_1106b2a20,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10396ddd8,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10396ddd4; end: 10396dddf;  */

void FUN_10396ddd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10396dde0; end: 10396de3f; -[_TtC22SearchScopeGraphBridge37SCSearchScopedServicesSaberEntryPoint init] */

void FUN_10396dde0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SearchScopeGraphBridge.SCSearchScopedServicesSaberEntryPoint",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10396de0c);
  (*pcVar1)();
}



/* Entry: 10396de40; end: 10396de77; -[_TtC22SearchScopeGraphBridge37SCSearchScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396de40(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fba170));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fba168));
  return;
}



/* Entry: 10396de78; end: 10396de7b;  */

void FUN_10396de78(void)

{
  return;
}



/* Entry: 10396de7c; end: 10396de9b;  */

void FUN_10396de7c(void)

{
  FUN_10396dcec();
  return;
}



/* Entry: 10396de9c; end: 10396debb;  */

void FUN_10396de9c(void)

{
  func_0x000107c61168(&PTR_PTR_112907d40);
  return;
}



/* Entry: 10396debc; end: 10396df8b;  */

undefined8 FUN_10396debc(void)

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
  
  func_0x000107c61428(0x112fba1a0,&uStack_40,0x20,0);
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
    FUN_10396df8c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10396df8c; end: 10396dfab;  */

void FUN_10396df8c(void)

{
  func_0x000107c61168(&PTR_PTR_112907e08);
  return;
}



/* Entry: 10396dfac; end: 10396dfc7;  */

void FUN_10396dfac(undefined8 param_1)

{
  func_0x0001000285a8(0x112fba1a8,&UNK_10dc2af38);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10396e034,param_1);
  return;
}



/* Entry: 10396dfc8; end: 10396e033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396dfc8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10396df8c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fba1b0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10396e034; end: 10396e03b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396e034(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10396df8c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112fba1b0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10396e03c; end: 10396e087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396e03c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fba1b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10396e088; end: 10396e0e7; -[_TtC22SearchScopeGraphBridge30SearchScopeGraphBridgeServices init] */

void FUN_10396e088(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SearchScopeGraphBridge.SearchScopeGraphBridgeServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10396e0b4);
  (*pcVar1)();
}



/* Entry: 10396e0e8; end: 10396e0f7; -[_TtC22SearchScopeGraphBridge30SearchScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396e0e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fba1b0));
  return;
}



/* Entry: 10396e0f8; end: 10396e183;  */

void FUN_10396e0f8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10396e138,0);
  return;
}



/* Entry: 10396e184; end: 10396e19f;  */

void FUN_10396e184(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10396e1f0,param_1);
  return;
}



/* Entry: 10396e1a0; end: 10396e1ef;  */

void FUN_10396e1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 10396e1f0; end: 10396e223;  */

void FUN_10396e1f0(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10396e224; end: 10396e22b;  */

undefined8 FUN_10396e224(void)

{
  return 0x1b;
}



/* Entry: 10396e22c; end: 10396e3a3;  */

void FUN_10396e22c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106b2a68;
  func_0x000107c613fc(&UNK_1106b2a68,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10396e3a4,puVar1);
  return;
}



/* Entry: 10396e3a4; end: 10396e3ab;  */

void FUN_10396e3a4(undefined8 *param_1)

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
  func_0x000107c61428(0x112fba1a0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fba1a0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1106b2b40;
  func_0x000107c613fc(&UNK_1106b2b40,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10396e478;
  func_0x00010058fa64(0x10396e478,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10396e3ac; end: 10396e407;  */

void FUN_10396e3ac(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112fba1a0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112fba1a0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10396e408; end: 10396e47f;  */

undefined ** FUN_10396e408(void)

{
  return &PTR_DAT_112fba298;
}



/* Entry: 10396e480; end: 10396e4c7; -[SCSearchScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396e480(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fba208;
  func_0x000107c61428(param_1 + _DAT_112fba208,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10396e4c8; end: 10396e51f; -[SCSearchScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396e4c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fba208;
  func_0x000107c61428(param_1 + _DAT_112fba208,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10396e520; end: 10396e567; -[SCSearchScopeGraphBridgeSaberEntryPoint sCSearchBaseScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396e520(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fba210;
  func_0x000107c61428(param_1 + _DAT_112fba210,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10396e568; end: 10396e573; -[SCSearchScopeGraphBridgeSaberEntryPoint setSCSearchBaseScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396e568(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fba210;
  func_0x000107c61428(param_1 + _DAT_112fba210,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10396e574; end: 10396e5bb; -[SCSearchScopeGraphBridgeSaberEntryPoint searchScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396e574(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fba218;
  func_0x000107c61428(param_1 + _DAT_112fba218,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10396e5bc; end: 10396e5c7; -[SCSearchScopeGraphBridgeSaberEntryPoint setSearchScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396e5bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fba218;
  func_0x000107c61428(param_1 + _DAT_112fba218,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10396e5c8; end: 10396e627;  */

void FUN_10396e5c8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10396e628; end: 10396e7e3;  */

/* WARNING: Possible PIC construction at 0x00010396e740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010396e764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010396e774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010396e7b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010396e778) */
/* WARNING: Removing unreachable block (ram,0x00010396e768) */
/* WARNING: Removing unreachable block (ram,0x00010396e744) */
/* WARNING: Removing unreachable block (ram,0x00010396e7bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396e628(void)

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
  func_0x000107c51270();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c51ad8();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_10396dc44();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10396debc();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10396e7e4);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112fba130) = lVar5;
      *(long *)(lVar3 + _DAT_112fba138) = unaff_x20;
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



/* Entry: 10396e7e4; end: 10396e80b; -[SCSearchScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10396e7e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10396e628();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10396e80c; end: 10396e84f; -[SCSearchScopeGraphBridgeSaberEntryPoint end] */

void FUN_10396e80c(undefined8 param_1)

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



/* Entry: 10396e850; end: 10396ea53;  */

void FUN_10396e850(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef0ebc230)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000018,0x800000010f143dd0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000025;
        if (((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0e82810)) &&
           (func_0x000107c605b8(0xd000000000000025,0x800000010f17d7f0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SearchScopeGraphBridge/SCSearchScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x44,2,0x36,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10396ea54);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58d3c();
        goto LAB_10396e8dc;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58818();
  }
LAB_10396e8dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10396ea54; end: 10396eaff; -[SCSearchScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10396ea54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10396e850(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10396eb00; end: 10396eb77; -[SCSearchScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396eb00(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fba208,0);
  *(undefined8 *)(param_1 + _DAT_112fba210) = 0;
  *(undefined8 *)(param_1 + _DAT_112fba218) = 0;
  *(undefined8 *)(param_1 + _DAT_112fba220) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10396eb78; end: 10396ebab;  */

void FUN_10396eb78(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10396ebac; end: 10396ec03; -[SCSearchScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010396ebd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010396ebdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396ebac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fba208);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fba210));
  return;
}



/* Entry: 10396ec04; end: 10396ec23;  */

void FUN_10396ec04(void)

{
  func_0x000107c61168(&PTR_PTR_112907ec8);
  return;
}



/* Entry: 10396ec24; end: 10396ec6b; -[SCSCSearchScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396ec24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fba250;
  func_0x000107c61428(param_1 + _DAT_112fba250,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10396ec6c; end: 10396ecc3; -[SCSCSearchScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396ec6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fba250;
  func_0x000107c61428(param_1 + _DAT_112fba250,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10396ecc4; end: 10396ed9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396ecc4(undefined8 param_1,long param_2)

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
    FUN_10396de9c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112fba168) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10396ed9c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112fba170);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112fba258);
    *(long **)(unaff_x20 + _DAT_112fba258) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10396ed9c; end: 10396edc3; -[SCSCSearchScopedServicesSaberEntryPoint begin] */

void FUN_10396ed9c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10396ecc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10396edc4; end: 10396ef3b;  */

/* WARNING: Possible PIC construction at 0x00010396ee2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010396eec4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010396ee30) */
/* WARNING: Removing unreachable block (ram,0x00010396eec8) */
/* WARNING: Removing unreachable block (ram,0x00010396eee0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396edc4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112fba258);
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



/* Entry: 10396ef3c; end: 10396ef43;  */

void FUN_10396ef3c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10396ef44; end: 10396ef77; -[SCSCSearchScopedServicesSaberEntryPoint end] */

void FUN_10396ef44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10396edc4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10396ef78; end: 10396f097;  */

void FUN_10396ef78(long param_1,long param_2,long param_3)

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
                        "SearchScopeGraphBridge/SCSCSearchScopedServicesSaberEntryPoint.swift",0x44,
                        2,0x2e,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10396f098);
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



/* Entry: 10396f098; end: 10396f143; -[SCSCSearchScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10396f098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10396ef78(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10396f144; end: 10396f1a3; -[SCSCSearchScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396f144(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fba250,0);
  *(undefined8 *)(param_1 + _DAT_112fba258) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10396f1a4; end: 10396f1d7;  */

void FUN_10396f1a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10396f1d8; end: 10396f20f; -[SCSCSearchScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396f1d8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fba250);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fba258));
  return;
}



/* Entry: 10396f210; end: 10396f22f;  */

void FUN_10396f210(void)

{
  func_0x000107c61168(&PTR_PTR_112907f98);
  return;
}



/* Entry: 10396f230; end: 10396f27b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396f230(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fba290) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10396f27c; end: 10396f33b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10396f27c(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  long in_x4;
  undefined *apuStack_58 [2];
  undefined8 uStack_48;
  
  if (in_x4 == 0) {
    in_x3 = 0;
  }
  else {
    func_0x000107c5fadc(in_x3,in_x4);
  }
  puVar1 = PTR_PTR_1126ad810;
  func_0x000107c610f8();
  func_0x000107c48f70();
  func_0x000107c61170(in_x3);
  apuStack_58[0] = puVar1;
  func_0x00010008a7c8(&uStack_48,apuStack_58);
  func_0x000100083b20(apuStack_58);
  func_0x000107c61574(uStack_48);
  func_0x000107c615e8(apuStack_58[0]);
  return puVar1;
}



/* Entry: 10396f33c; end: 10396f3f3; -[_TtC18SCSearchScopeProxy21SCSearchScopeServices buildWithUIContainer:metricsContext:delegate:initialQuery:] */

void FUN_10396f33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10396f27c(param_3,param_4,param_5,param_6,param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10396f3f4; end: 10396f427;  */

void FUN_10396f3f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10396f428; end: 10396f457; -[_TtC18SCSearchScopeProxy21SCSearchScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396f428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fba290));
  return;
}



/* Entry: 10396f458; end: 10396f4bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396f458(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100342d00();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fba2e0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10396f4c0; end: 10396f50b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396f4c0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fba2e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10396f50c; end: 10396f5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10396f50c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 in_x5;
  long in_x6;
  undefined *apuStack_78 [2];
  undefined8 uStack_68;
  
  if (in_x6 == 0) {
    in_x5 = 0;
  }
  else {
    func_0x000107c5fadc(in_x5,in_x6);
  }
  puVar1 = PTR_PTR_1126ad808;
  func_0x000107c610f8();
  func_0x000107c48f44(param_1);
  func_0x000107c61170(in_x5);
  apuStack_78[0] = puVar1;
  func_0x00010008a7c8(&uStack_68,apuStack_78);
  func_0x000100083b20(apuStack_78);
  func_0x000107c61574(uStack_68);
  func_0x000107c615e8(apuStack_78[0]);
  return puVar1;
}



/* Entry: 10396f5fc; end: 10396f72b; -[_TtC22SCSearchBaseScopeProxy25SCSearchBaseScopeServices buildWithUIContainer:flavorContext:delegate:mapDestinationSubject:lensPickerDelegate:initialQuery:lensSearchLaunchConfig:presentationTimeMs:] */

void FUN_10396f5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_9 == 0) {
    param_9 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_9);
  }
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_6);
  uVar1 = param_7;
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  uVar2 = param_10;
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_2);
  uVar3 = param_4;
  FUN_10396f50c(param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_3,param_10);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}


