/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10338d6ec; end: 10338d6ef;  */

void FUN_10338d6ec(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10338d6f0; end: 10338d81f;  */

/* WARNING: Possible PIC construction at 0x00010338d7c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010338d7d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010338d7e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010338d7f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010338d7e4) */
/* WARNING: Removing unreachable block (ram,0x00010338d7d4) */
/* WARNING: Removing unreachable block (ram,0x00010338d7c4) */
/* WARNING: Removing unreachable block (ram,0x00010338d7f4) */

void FUN_10338d6f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110648b18;
  func_0x000107c613fc(&UNK_110648b18,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  uVar2 = 0x112f5f9c8;
  func_0x0001000285a8(0x112f5f9c8,&UNK_10dbbb1a0);
  func_0x000107c613fc();
  uVar3 = 0x10338dcc0;
  func_0x0001000841fc(0x10338dcc0,puVar1,uVar2);
  func_0x000100084214(&UNK_10dbbb170,0x2d,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10338d820; end: 10338d853;  */

void FUN_10338d820(void)

{
  long unaff_x20;
  
  FUN_10338d6f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10338d854; end: 10338d863;  */

undefined1  [16] FUN_10338d854(void)

{
  return ZEXT816(0x110648af8);
}



/* Entry: 10338d864; end: 10338dc5b;  */

void FUN_10338d864(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f5f9d0,&UNK_10dbbb1a8);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10338f01c();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar3 = puVar2;
  FUN_10338f0a8();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10338d4b0;
  func_0x0001000823a8(FUN_10338d4b0,0);
  func_0x000100082720("MutualFriendsPageScopedServicesCleanupRelayServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112f5f9d8,&UNK_10dbbb1c0);
  puVar5 = &UNK_110648b40;
  func_0x000107c613fc(&UNK_110648b40,0x68,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 *)(puVar5 + 0x28) = param_5;
  *(undefined8 *)(puVar5 + 0x30) = param_6;
  *(undefined8 *)(puVar5 + 0x38) = param_7;
  *(undefined8 *)(puVar5 + 0x40) = param_8;
  *(undefined8 *)(puVar5 + 0x48) = param_9;
  *(undefined8 *)(puVar5 + 0x50) = param_10;
  *(undefined8 *)(puVar5 + 0x58) = param_11;
  *(undefined8 **)(puVar5 + 0x60) = puVar3;
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
  func_0x000107c6157c(puVar3);
  uVar10 = 0x10338dcf4;
  func_0x0001000823a8(0x10338dcf4,puVar5);
  func_0x000100082720("MutualFriendsPageEntryPointWrapperServiceProvider",0x31,2);
  puVar6 = puVar2;
  FUN_10338ee10();
  func_0x000100082720("MutualFriendsPageScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f5f9e0,&UNK_10dbbb1b0);
  puVar5 = &UNK_110648b68;
  func_0x000107c613fc(&UNK_110648b68,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar4);
  pcVar7 = FUN_10338dd30;
  func_0x0001000823a8(FUN_10338dd30,puVar5);
  func_0x000100082720("MutualFriendsPageScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f5f960,&UNK_10dbbaf60);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x10338dd3c;
  func_0x0001000823a8(0x10338dd3c,pcVar7);
  func_0x000100082720("MutualFriendsPageScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112f5f950,&UNK_10dbbaf50);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10338dd44;
  func_0x0001000823a8(0x10338dd44,uVar8);
  func_0x000100082720("MutualFriendsPageScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_110648b90;
  func_0x000107c613fc(&UNK_110648b90,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x10338dd4c;
  func_0x0001000823a8(0x10338dd4c,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("MutualFriendsPageScopeEntryPointProvider",0x28,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10338dc5c; end: 10338dd2f;  */

void FUN_10338dc5c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10338dd30; end: 10338dd53;  */

void FUN_10338dd30(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10338e578(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("MutualFriendsPageScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10338dd54; end: 10338e35b;  */

void FUN_10338dd54(long *param_1,long param_2)

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
  undefined *puVar11;
  undefined8 uVar12;
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
  FUN_10338e4a4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174(uStack_78);
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
  func_0x000107c6157c(uStack_c0);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x18) = puVar11;
  FUN_103391b78();
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = auStack_70[0];
  func_0x000107c61174();
  uVar12 = uVar10;
  func_0x0001033903fc();
  *(undefined8 *)(param_2 + 0x10) = uVar12;
  func_0x000107c61174();
  FUN_103390620();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61574(uStack_c0);
  func_0x000107c61170(uVar12);
  *param_1 = param_2;
  return;
}



/* Entry: 10338e35c; end: 10338e3e7;  */

void FUN_10338e35c(void)

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
  return;
}



/* Entry: 10338e3e8; end: 10338e3ef;  */

undefined8 FUN_10338e3e8(void)

{
  return 0x1b;
}



/* Entry: 10338e3f0; end: 10338e473;  */

void FUN_10338e3f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10338e4e4,param_2,FUN_10338e4e8,param_2,0x10338e510,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10338e474; end: 10338e4a3;  */

undefined ** FUN_10338e474(void)

{
  return &PTR_DAT_1130666b8;
}



/* Entry: 10338e4a4; end: 10338e4c3;  */

void FUN_10338e4a4(void)

{
  func_0x000107c61168(&PTR_PTR_112f5fa50);
  return;
}



/* Entry: 10338e4c4; end: 10338e4e7;  */

undefined1  [16] FUN_10338e4c4(void)

{
  return ZEXT816(0x110648be8);
}



/* Entry: 10338e4e8; end: 10338e53b;  */

void FUN_10338e4e8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10338e53c; end: 10338e577;  */

void FUN_10338e53c(undefined8 *param_1,undefined8 param_2)

{
  FUN_10338e578();
  func_0x0001000a7f38("MutualFriendsPageScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10338e578; end: 10338e763;  */

void FUN_10338e578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cda8;
  ppuVar4 = &PTR_DAT_1130666b8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f5fb00;
  func_0x0001000285a8(0x112f5fb00,&UNK_10dbbb338);
  func_0x0001000a6ee8(&UNK_110648be8,
                      "MutualFriendsPageEntryPointWrapperScopeInitializationPluginKey",0x3e,2,
                      FUN_10338e7d8,param_1,uVar2,&UNK_110648be8,&PTR_DAT_112f5f9e8);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110648c38;
  func_0x000107c613fc(&UNK_110648c38,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110648e88,"MutualFriendsPageScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x3d,2,FUN_10338e7e0,puVar3,uVar2,&UNK_110648e88,&PTR_DAT_112f5fb98);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110648c60;
  func_0x000107c613fc(&UNK_110648c60,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110648a08,"MutualFriendsPageScopedServicesScopeInitializationPluginKey",
                      0x3b,2,FUN_10338e8c8,puVar3,uVar2,&UNK_110648a08,&PTR_DAT_112f5f968);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f5fb08;
  func_0x0001000285a8(0x112f5fb08,&UNK_10dbbb340);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 10338e764; end: 10338e7d7;  */

void FUN_10338e764(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10338e904;
  func_0x0001000823a8(0x10338e904,param_3);
  func_0x000100082720("MutualFriendsPageEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10338e7d8; end: 10338e7df;  */

void FUN_10338e7d8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10338e904;
  func_0x0001000823a8();
  func_0x000100082720("MutualFriendsPageEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10338e7e0; end: 10338e81f;  */

void FUN_10338e7e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10338f150(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("MutualFriendsPageScopeGraphBridgeScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10338e820; end: 10338e8c7;  */

void FUN_10338e820(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110648c88;
  func_0x000107c613fc(&UNK_110648c88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10338e8fc;
  func_0x0001000823a8(FUN_10338e8fc,puVar1);
  func_0x000100082720("MutualFriendsPageScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10338e8c8; end: 10338e8cf;  */

void FUN_10338e8c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110648c88;
  func_0x000107c613fc(&UNK_110648c88,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10338e8fc;
  func_0x0001000823a8(FUN_10338e8fc,puVar3);
  func_0x000100082720("MutualFriendsPageScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10338e8d0; end: 10338e8fb;  */

void FUN_10338e8d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10338e8fc; end: 10338e90b;  */

void FUN_10338e8fc(undefined8 *param_1)

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
  puVar1 = &UNK_110648a90;
  func_0x000107c613fc(&UNK_110648a90,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10338d6c4;
  func_0x00010058fa64(FUN_10338d6c4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10338e90c; end: 10338e9e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10338e90c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_10338ed20();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f5fb10) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f5fb18) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10338e9e8);
  (*pcVar1)();
}



/* Entry: 10338e9e8; end: 10338ea47; -[_TtC33MutualFriendsPageScopeGraphBridge48MutualFriendsPageScopeGraphBridgeSaberEntryPoint init] */

void FUN_10338e9e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsPageScopeGraphBridge.MutualFriendsPageScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10338ea14);
  (*pcVar1)();
}



/* Entry: 10338ea48; end: 10338ea7f; -[_TtC33MutualFriendsPageScopeGraphBridge48MutualFriendsPageScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010338ea64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010338ea68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338ea48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5fb10));
  return;
}



/* Entry: 10338ea80; end: 10338eaa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338ea80(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f5fb18),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f5fb10));
  return;
}



/* Entry: 10338eaa8; end: 10338eac7;  */

void FUN_10338eaa8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d38a0);
  return;
}



/* Entry: 10338eac8; end: 10338eb4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10338eac8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5fb48) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f5fb50);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10338eb50);
  (*pcVar2)();
}



/* Entry: 10338eb50; end: 10338ec37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10338eb50(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5fb48);
  *(undefined **)(unaff_x20 + _DAT_112f5fb48) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f5fb50);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f5fb50))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110648da8;
  func_0x000107c613fc(&UNK_110648da8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10338ec3c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10338ec38; end: 10338ec43;  */

void FUN_10338ec38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10338ec44; end: 10338eca3; -[_TtC33MutualFriendsPageScopeGraphBridge46MutualFriendsPageScopedServicesSaberEntryPoint init] */

void FUN_10338ec44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsPageScopeGraphBridge.MutualFriendsPageScopedServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10338ec70);
  (*pcVar1)();
}



/* Entry: 10338eca4; end: 10338ecdb; -[_TtC33MutualFriendsPageScopeGraphBridge46MutualFriendsPageScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338eca4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f5fb50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5fb48));
  return;
}



/* Entry: 10338ecdc; end: 10338ecdf;  */

void FUN_10338ecdc(void)

{
  return;
}



/* Entry: 10338ece0; end: 10338ecff;  */

void FUN_10338ece0(void)

{
  FUN_10338eb50();
  return;
}



/* Entry: 10338ed00; end: 10338ed1f;  */

void FUN_10338ed00(void)

{
  func_0x000107c61168(&PTR_PTR_1128d3968);
  return;
}



/* Entry: 10338ed20; end: 10338edef;  */

undefined8 FUN_10338ed20(void)

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
  
  func_0x000107c61428(0x112f5fb80,&uStack_40,0x20,0);
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
    FUN_10338edf0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10338edf0; end: 10338ee0f;  */

void FUN_10338edf0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d3a30);
  return;
}



/* Entry: 10338ee10; end: 10338ee2b;  */

void FUN_10338ee10(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5fb88,&UNK_10dbbb418);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10338ee98,param_1);
  return;
}



/* Entry: 10338ee2c; end: 10338ee97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338ee2c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10338edf0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f5fb90) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10338ee98; end: 10338ee9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338ee98(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10338edf0();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f5fb90) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10338eea0; end: 10338eeeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338eea0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5fb90) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10338eeec; end: 10338ef4b; -[_TtC33MutualFriendsPageScopeGraphBridge41MutualFriendsPageScopeGraphBridgeServices init] */

void FUN_10338eeec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MutualFriendsPageScopeGraphBridge.MutualFriendsPageScopeGraphBridgeServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10338ef18);
  (*pcVar1)();
}



/* Entry: 10338ef4c; end: 10338ef5b; -[_TtC33MutualFriendsPageScopeGraphBridge41MutualFriendsPageScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338ef4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5fb90));
  return;
}



/* Entry: 10338ef5c; end: 10338ef8f; -[_TtC22MutualFriendsPageScope22MutualFriendsPageScope mutualFriendsPageScopeGraphBridgeServices] */

void FUN_10338ef5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10338ed20();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10338ef90; end: 10338f01b; -[_TtC22MutualFriendsPageScope22MutualFriendsPageScope setMutualFriendsPageScopeGraphBridgeServices:] */

void FUN_10338ef90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112f5fb80,auStack_48,0x20,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61188();
  func_0x000107c614a8(auStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10338f01c; end: 10338f0a7;  */

void FUN_10338f01c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10338f05c,0);
  return;
}



/* Entry: 10338f0a8; end: 10338f0c3;  */

void FUN_10338f0a8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10338f114,param_1);
  return;
}



/* Entry: 10338f0c4; end: 10338f113;  */

void FUN_10338f0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 10338f114; end: 10338f147;  */

void FUN_10338f114(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10338f148; end: 10338f14f;  */

undefined8 FUN_10338f148(void)

{
  return 0x1b;
}



/* Entry: 10338f150; end: 10338f2c7;  */

void FUN_10338f150(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110648df0;
  func_0x000107c613fc(&UNK_110648df0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10338f2c8,puVar1);
  return;
}



/* Entry: 10338f2c8; end: 10338f2cf;  */

void FUN_10338f2c8(undefined8 *param_1)

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
  func_0x000107c61428(0x112f5fb80,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f5fb80,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110648ec8;
  func_0x000107c613fc(&UNK_110648ec8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10338f39c;
  func_0x00010058fa64(0x10338f39c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10338f2d0; end: 10338f32b;  */

void FUN_10338f2d0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f5fb80,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f5fb80,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10338f32c; end: 10338f3a3;  */

undefined ** FUN_10338f32c(void)

{
  return &PTR_DAT_1130666b8;
}



/* Entry: 10338f3a4; end: 10338f3eb; -[SCMutualFriendsPageScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338f3a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5fbe8;
  func_0x000107c61428(param_1 + _DAT_112f5fbe8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10338f3ec; end: 10338f443; -[SCMutualFriendsPageScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338f3ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5fbe8;
  func_0x000107c61428(param_1 + _DAT_112f5fbe8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10338f444; end: 10338f48b; -[SCMutualFriendsPageScopeGraphBridgeSaberEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338f444(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5fbf0;
  func_0x000107c61428(param_1 + _DAT_112f5fbf0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10338f48c; end: 10338f497; -[SCMutualFriendsPageScopeGraphBridgeSaberEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338f48c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5fbf0;
  func_0x000107c61428(param_1 + _DAT_112f5fbf0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10338f498; end: 10338f4df; -[SCMutualFriendsPageScopeGraphBridgeSaberEntryPoint mutualFriendsPageScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338f498(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5fbf8;
  func_0x000107c61428(param_1 + _DAT_112f5fbf8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10338f4e0; end: 10338f4eb; -[SCMutualFriendsPageScopeGraphBridgeSaberEntryPoint setMutualFriendsPageScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338f4e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5fbf8;
  func_0x000107c61428(param_1 + _DAT_112f5fbf8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10338f4ec; end: 10338f54b;  */

void FUN_10338f4ec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10338f54c; end: 10338f707;  */

/* WARNING: Possible PIC construction at 0x00010338f664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010338f688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010338f698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010338f6dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010338f69c) */
/* WARNING: Removing unreachable block (ram,0x00010338f68c) */
/* WARNING: Removing unreachable block (ram,0x00010338f668) */
/* WARNING: Removing unreachable block (ram,0x00010338f6e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338f54c(void)

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
  func_0x000107c5e1d0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4d338();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_10338eaa8();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10338ed20();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10338f708);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f5fb10) = lVar5;
      *(long *)(lVar3 + _DAT_112f5fb18) = unaff_x20;
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



/* Entry: 10338f708; end: 10338f72f; -[SCMutualFriendsPageScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10338f708(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10338f54c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10338f730; end: 10338f773; -[SCMutualFriendsPageScopeGraphBridgeSaberEntryPoint end] */

void FUN_10338f730(undefined8 param_1)

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



/* Entry: 10338f774; end: 10338f977;  */

void FUN_10338f774(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) {
      uVar2 = 0xd000000000000017;
      func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0eba750)) &&
           (func_0x000107c605b8(0xd000000000000030,0x800000010f1458b0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MutualFriendsPageScopeGraphBridge/SCMutualFriendsPageScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x5a,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10338f978);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c568d8();
        goto LAB_10338f800;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a68c();
  }
LAB_10338f800:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10338f978; end: 10338fa23; -[SCMutualFriendsPageScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10338f978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10338f774(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10338fa24; end: 10338fa9b; -[SCMutualFriendsPageScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338fa24(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f5fbe8,0);
  *(undefined8 *)(param_1 + _DAT_112f5fbf0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f5fbf8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f5fc00) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10338fa9c; end: 10338facf;  */

void FUN_10338fa9c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10338fad0; end: 10338fb27; -[SCMutualFriendsPageScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010338fafc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010338fb00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338fad0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5fbe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5fbf0));
  return;
}



/* Entry: 10338fb28; end: 10338fb47;  */

void FUN_10338fb28(void)

{
  func_0x000107c61168(&PTR_PTR_1128d3af0);
  return;
}



/* Entry: 10338fb48; end: 10338fb8f; -[SCMutualFriendsPageScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338fb48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5fc30;
  func_0x000107c61428(param_1 + _DAT_112f5fc30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10338fb90; end: 10338fbe7; -[SCMutualFriendsPageScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338fb90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5fc30;
  func_0x000107c61428(param_1 + _DAT_112f5fc30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10338fbe8; end: 10338fcbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338fbe8(undefined8 param_1,long param_2)

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
    FUN_10338ed00();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f5fb48) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10338fcc0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f5fb50);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f5fc38);
    *(long **)(unaff_x20 + _DAT_112f5fc38) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10338fcc0; end: 10338fce7; -[SCMutualFriendsPageScopedServicesSaberEntryPoint begin] */

void FUN_10338fcc0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10338fbe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10338fce8; end: 10338fe5f;  */

/* WARNING: Possible PIC construction at 0x00010338fd50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010338fde8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010338fd54) */
/* WARNING: Removing unreachable block (ram,0x00010338fdec) */
/* WARNING: Removing unreachable block (ram,0x00010338fe04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10338fce8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f5fc38);
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



/* Entry: 10338fe60; end: 10338fe67;  */

void FUN_10338fe60(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10338fe68; end: 10338fe9b; -[SCMutualFriendsPageScopedServicesSaberEntryPoint end] */

void FUN_10338fe68(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10338fce8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10338fe9c; end: 10338ffbb;  */

void FUN_10338fe9c(long param_1,long param_2,long param_3)

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
                        "MutualFriendsPageScopeGraphBridge/SCMutualFriendsPageScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10338ffbc);
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



/* Entry: 10338ffbc; end: 103390067; -[SCMutualFriendsPageScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10338ffbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10338fe9c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103390068; end: 1033900c7; -[SCMutualFriendsPageScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103390068(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f5fc30,0);
  *(undefined8 *)(param_1 + _DAT_112f5fc38) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033900c8; end: 1033900fb;  */

void FUN_1033900c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033900fc; end: 103390133; -[SCMutualFriendsPageScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033900fc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5fc30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5fc38));
  return;
}



/* Entry: 103390134; end: 103390153;  */

void FUN_103390134(void)

{
  func_0x000107c61168(&PTR_PTR_1128d3bc0);
  return;
}



/* Entry: 103390154; end: 1033901db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103390154(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f5fc68;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f5fc68);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112f5fcd0);
    FUN_1033939d0();
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000103393490();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1033901dc; end: 10339061f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1033901dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5fc68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fc70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fc78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fc80) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fc88) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fc90) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fc98) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fca0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fca8) = param_6;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  uVar2 = param_7;
  func_0x000107c3f934();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112f5fcb0) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fcb8) = param_10;
  func_0x000107c61174(param_10);
  uVar2 = param_8;
  func_0x000107c439c8();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112f5fcc0) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fcc8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f5fcd0) = param_11;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_9);
  puVar3 = auStack_70;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  return puVar3;
}



/* Entry: 103390620; end: 10339074b;  */

/* WARNING: Possible PIC construction at 0x00010339071c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103390620(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112f5fca0) + _DAT_113021f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar2;
  func_0x000107c4415c();
  func_0x000107c61180();
  cVar1 = *(char *)(lVar3 + _DAT_113021bc0);
  func_0x000107c61170();
  if (cVar1 == '\x01') {
    uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f5fc88) + _DAT_112fc7240);
    func_0x000107c6157c(uVar5);
    func_0x0001000d224c(&uStack_38);
    func_0x000107c61574(uVar5);
    puVar4 = &UNK_110648fb0;
    func_0x000107c613fc(&UNK_110648fb0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    func_0x00010075a04c(0,1,FUN_103390858,puVar4);
    func_0x000107c61574(uStack_38);
    func_0x000107c61574(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 10339074c; end: 103390857;  */

void FUN_10339074c(long *param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar5 = *param_1;
  cVar1 = (char)param_1[1];
  if (cVar1 != '\x01' && lVar5 != 0) {
    func_0x000107c615f0(lVar5);
    pcVar2 = "begin()";
    func_0x0001000c10c0("begin()");
    func_0x000107c61180();
    puVar3 = &UNK_110649000;
    func_0x000107c613fc(&UNK_110649000,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    *(long *)(puVar3 + 0x18) = lVar5;
    uStack_50 = 0x103391bb0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110649018;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x00010296ab14(lVar5,cVar1);
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(pcVar2);
    func_0x00010296ab34(lVar5,cVar1);
  }
  return;
}



/* Entry: 103390858; end: 10339085f;  */

void FUN_103390858(long *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar5 = *param_1;
  cVar1 = (char)param_1[1];
  if (cVar1 != '\x01' && lVar5 != 0) {
    func_0x000107c615f0(lVar5);
    pcVar2 = "begin()";
    func_0x0001000c10c0("begin()");
    func_0x000107c61180();
    puVar3 = &UNK_110649000;
    func_0x000107c613fc(&UNK_110649000,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
    *(long *)(puVar3 + 0x18) = lVar5;
    uStack_50 = 0x103391bb0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110649018;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x00010296ab14(lVar5,cVar1);
    func_0x000107c6157c();
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(pcVar2);
    func_0x00010296ab34(lVar5,cVar1);
  }
  return;
}



/* Entry: 103390860; end: 10339092b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103390860(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + _DAT_112f5fca8);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10339092c);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c5aeb4();
    func_0x000107c61170(lVar3);
    if (lVar2 == 1) {
      FUN_10339092c(param_2);
      goto LAB_10339090c;
    }
  }
  FUN_103390d14(param_2);
LAB_10339090c:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10339092c; end: 103390d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10339092c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112f5fc90);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar15 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar15 != 0) {
    lVar4 = lVar15;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar15);
    if (lVar4 != 0) {
      lVar16 = *(long *)(unaff_x20 + _DAT_112f5fc80);
      puVar1 = (undefined8 *)(lVar16 + _DAT_11306f698);
      uVar17 = *puVar1;
      uVar2 = puVar1[1];
      puVar5 = PTR_PTR_1126ad1b8;
      func_0x000107c610f8();
      func_0x000107c61434(uVar2);
      func_0x000107c5fadc(uVar17,uVar2);
      func_0x000107c6142c(uVar2);
      func_0x000107c45cd0();
      func_0x000107c61170(uVar17);
      puVar9 = &UNK_110648fb0;
      puVar6 = puVar9;
      func_0x000107c613fc(&UNK_110648fb0,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar7 = puVar9;
      func_0x000107c613fc(&UNK_110648fb0,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar8 = puVar9;
      func_0x000107c613fc(&UNK_110648fb0,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      func_0x000107c613fc(&UNK_110648fb0,0x18,7);
      func_0x000107c61614(puVar9 + 0x10);
      puVar10 = PTR_PTR_1126ad1c0;
      func_0x000107c610f8();
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x103391bd4;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_110649040;
      ppuVar11 = &puStack_a8;
      puStack_80 = puVar6;
      func_0x000107c60bc4(ppuVar11);
      uStack_b8 = 0x103391bdc;
      puStack_d8 = puVar3;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_100c75f50;
      puStack_c0 = &UNK_110649068;
      ppuVar12 = &puStack_d8;
      puStack_b0 = puVar7;
      func_0x000107c60bc4(ppuVar12);
      uStack_e8 = 0x103391be4;
      puStack_108 = puVar3;
      uStack_100 = 0x42000000;
      puStack_f8 = &UNK_100c75f50;
      puStack_f0 = &UNK_110649090;
      ppuVar13 = &puStack_108;
      puStack_e0 = puVar8;
      func_0x000107c60bc4(ppuVar13);
      uStack_118 = 0x103391bec;
      puStack_138 = puVar3;
      uStack_130 = 0x42000000;
      puStack_128 = &UNK_100c75f50;
      puStack_120 = &UNK_1106490b8;
      ppuVar14 = &puStack_138;
      puStack_110 = puVar9;
      func_0x000107c60bc4(ppuVar14);
      func_0x000107c6157c(puVar6);
      func_0x000107c6157c(puVar7);
      func_0x000107c6157c(puVar8);
      func_0x000107c6157c(puVar9);
      func_0x000107c4639c(puVar10);
      func_0x000107c60bd0(ppuVar14);
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61574(puStack_110);
      func_0x000107c61574(puStack_e0);
      func_0x000107c61574(puStack_b0);
      puVar3 = puStack_80;
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar9);
      func_0x000107c61574(puVar3);
      puVar9 = PTR_PTR_1126ad1c8;
      func_0x000107c610f8(PTR_PTR_1126ad1c8);
      func_0x000107c49520();
      lVar15 = 0;
      FUN_103391e18();
      func_0x000107c610f8();
      func_0x000107c49460();
      *(undefined ***)(lVar15 + _DAT_112f5fd00 + 8) = &PTR_DAT_110648fe0;
      func_0x000107c61604();
      uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f5fc70);
      *(long *)(unaff_x20 + _DAT_112f5fc70) = lVar15;
      func_0x000107c61174(lVar15);
      func_0x000107c61170(uVar17);
      func_0x000107c3e2c0(*(undefined8 *)(lVar16 + _DAT_11306f6a0));
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(lVar15);
    }
  }
  return;
}



/* Entry: 103390d14; end: 103390f13;  */

/* WARNING: Possible PIC construction at 0x000103390d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103390ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033910cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103391160: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033910d0) */
/* WARNING: Removing unreachable block (ram,0x000103391150) */
/* WARNING: Removing unreachable block (ram,0x00010339115c) */
/* WARNING: Removing unreachable block (ram,0x000103390ecc) */
/* WARNING: Removing unreachable block (ram,0x000103390d68) */
/* WARNING: Removing unreachable block (ram,0x000103390eec) */
/* WARNING: Removing unreachable block (ram,0x000103390f14) */
/* WARNING: Removing unreachable block (ram,0x000103390f94) */
/* WARNING: Removing unreachable block (ram,0x000103390f74) */
/* WARNING: Removing unreachable block (ram,0x000103390fd0) */
/* WARNING: Removing unreachable block (ram,0x000103390d6c) */
/* WARNING: Removing unreachable block (ram,0x000103391164) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103390d14(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f5fcc8);
  func_0x000107c5b484();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103390f14);
  (*pcVar1)();
}



/* Entry: 103390f14; end: 103391187;  */

/* WARNING: Possible PIC construction at 0x0001033910cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103391160: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033910d0) */
/* WARNING: Removing unreachable block (ram,0x000103391150) */
/* WARNING: Removing unreachable block (ram,0x00010339115c) */
/* WARNING: Removing unreachable block (ram,0x000103391164) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103390f14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong in_stack_ffffffffffffff70;
  
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112f5fca0) + _DAT_113021f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000103e6de98();
    func_0x000107c610f8();
    lVar4 = 0;
    func_0x000103e6ddd8(0,0,0,0,0,0,0,0,in_stack_ffffffffffffff70 & 0xffffffffff000000);
  }
  else {
    lVar4 = lVar3;
    func_0x000107c4415c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f5fc90);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f5fc98);
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f5fc80) + _DAT_11306f6a0);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112f5fc80) + _DAT_11306f698);
  uVar8 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(param_3);
  func_0x000107c61434(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar10);
  uVar5 = uVar10;
  FUN_103390154();
  puVar6 = PTR_PTR_1133bb458;
  FUN_103393194(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x0001033920cc(uVar7,uVar9,uVar10,param_2,param_3,uVar8,uVar2,uVar5,lVar4,puVar6);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f5fc78);
  *(undefined8 *)(unaff_x20 + _DAT_112f5fc78) = uVar7;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 103391188; end: 1033912a7;  */

void FUN_103391188(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_58 [24];
  
  puVar5 = auStack_58;
  func_0x000107c61428(param_3 + 0x10,puVar5,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    return;
  }
  if (param_1 == (undefined1 *)0x0) {
    lVar3 = 0;
  }
  else {
    puVar6 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((ulong)param_1 >> 0x3e == 0) {
      puVar2 = *(undefined1 **)(puVar6 + 0x10);
    }
    else {
      puVar2 = param_1;
      if (-1 < (long)param_1) {
        puVar2 = puVar6;
      }
      func_0x000107c60480();
    }
    if (puVar2 != (undefined1 *)0x0) {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(puVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1033912a8);
          (*pcVar1)();
        }
        lVar3 = *(long *)(param_1 + 0x20);
        func_0x000107c61174();
        param_1 = puVar5;
      }
      else {
        lVar3 = 0;
        func_0x00010103193c(0,param_1);
      }
      lVar4 = lVar3;
      func_0x000107c42120();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        lVar3 = lVar4;
        func_0x000107c5faec(lVar4);
        func_0x000107c61170(lVar4);
        goto LAB_103391260;
      }
    }
    lVar3 = 0;
    param_1 = (undefined1 *)0x0;
  }
LAB_103391260:
  FUN_103390f14(param_4,lVar3,param_1);
  func_0x000107c61170(param_3);
  func_0x000107c6142c(param_1);
  return;
}



/* Entry: 1033912a8; end: 103391303;  */

void FUN_1033912a8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_103391304(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103391304; end: 10339141b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103391304(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long unaff_x20;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f5fc78);
  *(undefined8 *)(unaff_x20 + _DAT_112f5fc78) = 0;
  func_0x000107c61170(uVar17);
  lVar18 = *(long *)(unaff_x20 + _DAT_112f5fca8);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10339141c);
    (*pcVar4)();
  }
  lVar5 = lVar18;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar18);
  if (lVar5 != 0) {
    lVar18 = lVar5;
    func_0x000107c5aeb4();
    func_0x000107c61170(lVar5);
    if (lVar18 == 1) {
      lVar5 = *(long *)(unaff_x20 + _DAT_112f5fc90);
      func_0x000107c5dbd4();
      func_0x000107c61180();
      lVar18 = lVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar18 != 0) {
        lVar5 = lVar18;
        func_0x000107c509b4();
        func_0x000107c61180();
        func_0x000107c615e8(lVar18);
        if (lVar5 != 0) {
          lVar19 = *(long *)(unaff_x20 + _DAT_112f5fc80);
          puVar1 = (undefined8 *)(lVar19 + _DAT_11306f698);
          uVar17 = *puVar1;
          uVar2 = puVar1[1];
          puVar6 = PTR_PTR_1126ad1b8;
          func_0x000107c610f8();
          func_0x000107c61434(uVar2);
          func_0x000107c5fadc(uVar17,uVar2);
          func_0x000107c6142c(uVar2);
          func_0x000107c45cd0();
          func_0x000107c61170(uVar17);
          puVar10 = &UNK_110648fb0;
          puVar7 = puVar10;
          func_0x000107c613fc(&UNK_110648fb0,0x18,7);
          func_0x000107c61614(puVar7 + 0x10,unaff_x20);
          puVar8 = puVar10;
          func_0x000107c613fc(&UNK_110648fb0,0x18,7);
          func_0x000107c61614(puVar8 + 0x10,unaff_x20);
          puVar9 = puVar10;
          func_0x000107c613fc(&UNK_110648fb0,0x18,7);
          func_0x000107c61614(puVar9 + 0x10,unaff_x20);
          func_0x000107c613fc(&UNK_110648fb0,0x18,7);
          func_0x000107c61614(puVar10 + 0x10,unaff_x20);
          puVar11 = PTR_PTR_1126ad1c0;
          func_0x000107c610f8();
          puVar3 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x103391bd4;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000f6b44;
          puStack_90 = &UNK_110649040;
          ppuVar12 = &puStack_a8;
          puStack_80 = puVar7;
          func_0x000107c60bc4(ppuVar12);
          uStack_b8 = 0x103391bdc;
          puStack_d8 = puVar3;
          uStack_d0 = 0x42000000;
          puStack_c8 = &UNK_100c75f50;
          puStack_c0 = &UNK_110649068;
          ppuVar13 = &puStack_d8;
          puStack_b0 = puVar8;
          func_0x000107c60bc4(ppuVar13);
          uStack_e8 = 0x103391be4;
          puStack_108 = puVar3;
          uStack_100 = 0x42000000;
          puStack_f8 = &UNK_100c75f50;
          puStack_f0 = &UNK_110649090;
          ppuVar14 = &puStack_108;
          puStack_e0 = puVar9;
          func_0x000107c60bc4(ppuVar14);
          uStack_118 = 0x103391bec;
          puStack_138 = puVar3;
          uStack_130 = 0x42000000;
          puStack_128 = &UNK_100c75f50;
          puStack_120 = &UNK_1106490b8;
          ppuVar15 = &puStack_138;
          puStack_110 = puVar10;
          func_0x000107c60bc4(ppuVar15);
          func_0x000107c6157c(puVar7);
          func_0x000107c6157c(puVar8);
          func_0x000107c6157c(puVar9);
          func_0x000107c6157c(puVar10);
          func_0x000107c4639c(puVar11);
          func_0x000107c60bd0(ppuVar15);
          func_0x000107c60bd0(ppuVar14);
          func_0x000107c60bd0(ppuVar13);
          func_0x000107c60bd0(ppuVar12);
          func_0x000107c61574(puStack_110);
          func_0x000107c61574(puStack_e0);
          func_0x000107c61574(puStack_b0);
          puVar3 = puStack_80;
          func_0x000107c61574(puVar7);
          func_0x000107c61574(puVar8);
          func_0x000107c61574(puVar9);
          func_0x000107c61574(puVar10);
          func_0x000107c61574(puVar3);
          puVar10 = PTR_PTR_1126ad1c8;
          func_0x000107c610f8(PTR_PTR_1126ad1c8);
          func_0x000107c49520();
          lVar16 = 0;
          FUN_103391e18();
          func_0x000107c610f8();
          func_0x000107c49460();
          lVar18 = lVar16 + _DAT_112f5fd00;
          *(undefined ***)(lVar18 + 8) = &PTR_DAT_110648fe0;
          func_0x000107c61604(lVar18,unaff_x20);
          uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f5fc70);
          *(long *)(unaff_x20 + _DAT_112f5fc70) = lVar16;
          func_0x000107c61174(lVar16);
          func_0x000107c61170(uVar17);
          func_0x000107c3e2c0(*(undefined8 *)(lVar19 + _DAT_11306f6a0));
          func_0x000107c615e8(lVar5);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(lVar16);
        }
      }
      return;
    }
  }
  lVar18 = *(long *)(unaff_x20 + _DAT_112f5fc80);
  func_0x000107c41864(*(undefined8 *)(lVar18 + _DAT_11306f6a0));
  lVar5 = _DAT_11306f6a8;
  func_0x000107c61428(lVar18 + _DAT_11306f6a8,&stack0xffffffffffffffb8,0,0);
  lVar18 = lVar18 + lVar5;
  func_0x000107c61618();
  if (lVar18 != 0) {
    func_0x000107c4d330();
    func_0x000107c615e8(lVar18);
  }
  return;
}



/* Entry: 10339141c; end: 10339149f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10339141c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f5fc80);
  func_0x000107c41864(*(undefined8 *)(lVar2 + _DAT_11306f6a0),param_2,0);
  lVar1 = _DAT_11306f6a8;
  func_0x000107c61428(lVar2 + _DAT_11306f6a8,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4d330();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1033914a0; end: 103391567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033914a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112f5fc80);
    func_0x000107c41864(*(undefined8 *)(lVar2 + _DAT_11306f6a0));
    lVar1 = _DAT_11306f6a8;
    func_0x000107c61428(lVar2 + _DAT_11306f6a8,auStack_60,0,0);
    lVar2 = lVar2 + lVar1;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c4d330();
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 103391568; end: 10339171f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103391568(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar5 = *(long *)(param_3 + _DAT_112f5fc70);
    if (lVar5 != 0) {
      puVar1 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c61174(lVar5);
      func_0x000107c4807c(puVar1);
      puVar2 = PTR_PTR_1126dcbd0;
      func_0x000107c610f8(PTR_PTR_1126dcbd0);
      func_0x000107c488e0();
      puVar3 = PTR_PTR_1126b3fa0;
      func_0x000107c610f8(PTR_PTR_1126b3fa0);
      func_0x000107c61174(puVar2);
      func_0x000107c61174(puVar1);
      func_0x000107c61434(param_2);
      lVar4 = param_3;
      func_0x000107c61174();
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c6142c(param_2);
      func_0x000107c47ca0(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(param_1);
      func_0x000107c4ab34(*(undefined8 *)(lVar4 + _DAT_112f5fcc0));
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61170(param_3);
  }
  return;
}


