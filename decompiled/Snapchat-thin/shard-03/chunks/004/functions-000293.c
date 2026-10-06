/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028a1fd0; end: 1028a20f7;  */

void FUN_1028a1fd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec6d48,&UNK_10dae8ae0);
  puVar1 = &UNK_11055fbf8;
  func_0x000107c613fc(&UNK_11055fbf8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1028a20f8,puVar1);
  return;
}



/* Entry: 1028a20f8; end: 1028a210f;  */

/* WARNING: Possible PIC construction at 0x0001028a20e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a20e4) */

void FUN_1028a20f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_11055fc40;
  func_0x000107c613fc(&UNK_11055fc40,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112ec6d50;
  func_0x0001000285a8(0x112ec6d50,&UNK_10dae8b28);
  func_0x000107c613fc();
  pcVar4 = FUN_1028a241c;
  func_0x0001000841fc(FUN_1028a241c,puVar2,uVar3);
  func_0x000100084214(&UNK_10dae8af0,0x31,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1028a2110; end: 1028a241b;  */

void FUN_1028a2110(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112ec6d58,&UNK_10dae8b30);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112ec6d60,&UNK_10dae8b40);
  puVar2 = &UNK_11055fc68;
  func_0x000107c613fc(&UNK_11055fc68,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar9 = 0x1028a2424;
  func_0x0001000823a8(0x1028a2424,puVar2);
  pcVar3 = "KeepSnapsInChatUpsellScopeEntryPointWrapperServiceProvider";
  func_0x000100082720("KeepSnapsInChatUpsellScopeEntryPointWrapperServiceProvider",0x3a,2);
  FUN_1028a2fe4();
  func_0x000100082720("KeepSnapsInChatUpsellScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1028a1d90;
  func_0x0001000823a8(FUN_1028a1d90,0);
  func_0x000100082720("KeepSnapsInChatUpsellScopedServicesCleanupRelayServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112ec6d68,&UNK_10dae8b38);
  puVar2 = &UNK_11055fc90;
  func_0x000107c613fc(&UNK_11055fc90,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1028a2430;
  func_0x0001000823a8(0x1028a2430,puVar2);
  func_0x000100082720("KeepSnapsInChatUpsellScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112ec6ce8,&UNK_10dae88b0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1028a243c;
  func_0x0001000823a8(0x1028a243c,uVar5);
  func_0x000100082720("KeepSnapsInChatUpsellScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112ec6cd8,&UNK_10dae88a0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1028a2444;
  func_0x0001000823a8(0x1028a2444,uVar6);
  func_0x000100082720("KeepSnapsInChatUpsellScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_11055fcb8;
  func_0x000107c613fc(&UNK_11055fcb8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1028a2478;
  func_0x0001000823a8(FUN_1028a2478,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("KeepSnapsInChatUpsellScopeEntryPointProvider",0x2c,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1028a241c; end: 1028a244b;  */

void FUN_1028a241c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112ec6d58,&UNK_10dae8b30);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112ec6d60,&UNK_10dae8b40);
  puVar2 = &UNK_11055fc68;
  func_0x000107c613fc(&UNK_11055fc68,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  uVar3 = 0x1028a2424;
  func_0x0001000823a8(0x1028a2424,puVar2);
  pcVar4 = "KeepSnapsInChatUpsellScopeEntryPointWrapperServiceProvider";
  func_0x000100082720("KeepSnapsInChatUpsellScopeEntryPointWrapperServiceProvider",0x3a,2);
  FUN_1028a2fe4();
  func_0x000100082720("KeepSnapsInChatUpsellScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_1028a1d90;
  func_0x0001000823a8(FUN_1028a1d90,0);
  func_0x000100082720("KeepSnapsInChatUpsellScopedServicesCleanupRelayServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112ec6d68,&UNK_10dae8b38);
  puVar2 = &UNK_11055fc90;
  func_0x000107c613fc(&UNK_11055fc90,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar4;
  *(code **)(puVar2 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1028a2430;
  func_0x0001000823a8(0x1028a2430,puVar2);
  func_0x000100082720("KeepSnapsInChatUpsellScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112ec6ce8,&UNK_10dae88b0);
  func_0x000107c6157c(uVar6);
  uVar9 = 0x1028a243c;
  func_0x0001000823a8(0x1028a243c,uVar6);
  func_0x000100082720("KeepSnapsInChatUpsellScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112ec6cd8,&UNK_10dae88a0);
  func_0x000107c6157c(uVar9);
  uVar7 = 0x1028a2444;
  func_0x0001000823a8(0x1028a2444,uVar9);
  func_0x000100082720("KeepSnapsInChatUpsellScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_11055fcb8;
  func_0x000107c613fc(&UNK_11055fcb8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  pcVar8 = FUN_1028a2478;
  func_0x0001000823a8(FUN_1028a2478,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar9);
  func_0x000100082720("KeepSnapsInChatUpsellScopeEntryPointProvider",0x2c,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1028a244c; end: 1028a2477;  */

void FUN_1028a244c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028a2478; end: 1028a247f;  */

void FUN_1028a2478(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11055faa0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11055faa0;
  return;
}



/* Entry: 1028a2480; end: 1028a25db;  */

void FUN_1028a2480(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1028a26cc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  FUN_1028a4788(0);
  func_0x000107c613fc();
  uVar1 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  FUN_1028a3f94(uStack_48,uVar1,uStack_58);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 1028a25dc; end: 1028a260f;  */

void FUN_1028a25dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028a2610; end: 1028a2617;  */

undefined8 FUN_1028a2610(void)

{
  return 0x1b;
}



/* Entry: 1028a2618; end: 1028a269b;  */

void FUN_1028a2618(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1028a270c,param_2,FUN_1028a2710,param_2,0x1028a2738,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1028a269c; end: 1028a26cb;  */

undefined ** FUN_1028a269c(void)

{
  return &PTR_DAT_113066688;
}



/* Entry: 1028a26cc; end: 1028a26eb;  */

void FUN_1028a26cc(void)

{
  func_0x000107c61168(&PTR_PTR_112ec6dd8);
  return;
}



/* Entry: 1028a26ec; end: 1028a270f;  */

undefined1  [16] FUN_1028a26ec(void)

{
  return ZEXT816(0x11055fd10);
}



/* Entry: 1028a2710; end: 1028a2763;  */

void FUN_1028a2710(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1028a2764; end: 1028a279f;  */

void FUN_1028a2764(undefined8 *param_1,undefined8 param_2)

{
  FUN_1028a27a0();
  func_0x0001000a7f38("KeepSnapsInChatUpsellScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = param_2;
  return;
}



/* Entry: 1028a27a0; end: 1028a298b;  */

void FUN_1028a27a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cd58;
  ppuVar4 = &PTR_DAT_113066688;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ec6e48;
  func_0x0001000285a8(0x112ec6e48,&UNK_10dae8ca0);
  func_0x0001000a6ee8(&UNK_11055fd10,
                      "KeepSnapsInChatUpsellScopeEntryPointWrapperScopeInitializationPluginKey",0x47
                      ,2,FUN_1028a2a00,param_1,uVar2,&UNK_11055fd10,&PTR_DAT_112ec6d70);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_11055fd60;
  func_0x000107c613fc(&UNK_11055fd60,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11055ff70,
                      "KeepSnapsInChatUpsellScopeGraphBridgeScopeInitializationPluginKey",0x41,2,
                      FUN_1028a2a08,puVar3,uVar2,&UNK_11055ff70,&PTR_DAT_112ec6ed8);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11055fd88;
  func_0x000107c613fc(&UNK_11055fd88,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11055fb30,
                      "KeepSnapsInChatUpsellScopedServicesScopeInitializationPluginKey",0x3f,2,
                      FUN_1028a2af0,puVar3,uVar2,&UNK_11055fb30,&PTR_DAT_112ec6cf0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ec6e50;
  func_0x0001000285a8(0x112ec6e50,&UNK_10dae8ca8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1028a298c; end: 1028a29ff;  */

void FUN_1028a298c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1028a2b2c;
  func_0x0001000823a8(0x1028a2b2c,param_3);
  func_0x000100082720("KeepSnapsInChatUpsellScopeEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028a2a00; end: 1028a2a07;  */

void FUN_1028a2a00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1028a2b2c;
  func_0x0001000823a8();
  func_0x000100082720("KeepSnapsInChatUpsellScopeEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028a2a08; end: 1028a2a47;  */

void FUN_1028a2a08(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1028a30c8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("KeepSnapsInChatUpsellScopeGraphBridgeScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028a2a48; end: 1028a2aef;  */

void FUN_1028a2a48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11055fdb0;
  func_0x000107c613fc(&UNK_11055fdb0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1028a2b24;
  func_0x0001000823a8(FUN_1028a2b24,puVar1);
  func_0x000100082720("KeepSnapsInChatUpsellScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar2;
  return;
}



/* Entry: 1028a2af0; end: 1028a2af7;  */

void FUN_1028a2af0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11055fdb0;
  func_0x000107c613fc(&UNK_11055fdb0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1028a2b24;
  func_0x0001000823a8(FUN_1028a2b24,puVar3);
  func_0x000100082720("KeepSnapsInChatUpsellScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar4;
  return;
}



/* Entry: 1028a2af8; end: 1028a2b23;  */

void FUN_1028a2af8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028a2b24; end: 1028a2b33;  */

void FUN_1028a2b24(undefined8 *param_1)

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
  puVar1 = &UNK_11055fbb8;
  func_0x000107c613fc(&UNK_11055fbb8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1028a1fa4;
  func_0x00010058fa64(FUN_1028a1fa4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028a2b34; end: 1028a2bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028a2b34(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1028a2ef4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112ec6e58) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ec6e60) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a2bbc);
  (*pcVar1)();
}



/* Entry: 1028a2bbc; end: 1028a2c1b; -[_TtC37KeepSnapsInChatUpsellScopeGraphBridge52KeepSnapsInChatUpsellScopeGraphBridgeSaberEntryPoint init] */

void FUN_1028a2bbc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("KeepSnapsInChatUpsellScopeGraphBridge.KeepSnapsInChatUpsellScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a2be8);
  (*pcVar1)();
}



/* Entry: 1028a2c1c; end: 1028a2c53; -[_TtC37KeepSnapsInChatUpsellScopeGraphBridge52KeepSnapsInChatUpsellScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028a2c38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a2c3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a2c1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec6e58));
  return;
}



/* Entry: 1028a2c54; end: 1028a2c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a2c54(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ec6e60),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ec6e58));
  return;
}



/* Entry: 1028a2c7c; end: 1028a2c9b;  */

void FUN_1028a2c7c(void)

{
  func_0x000107c61168(&PTR_PTR_1128696b0);
  return;
}



/* Entry: 1028a2c9c; end: 1028a2d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028a2c9c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec6e90) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ec6e98);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028a2d24);
  (*pcVar2)();
}



/* Entry: 1028a2d24; end: 1028a2e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1028a2d24(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec6e90);
  *(undefined **)(unaff_x20 + _DAT_112ec6e90) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec6e98);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ec6e98))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11055fed0;
  func_0x000107c613fc(&UNK_11055fed0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1028a2e10,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1028a2e0c; end: 1028a2e17;  */

void FUN_1028a2e0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1028a2e18; end: 1028a2e77; -[_TtC37KeepSnapsInChatUpsellScopeGraphBridge50KeepSnapsInChatUpsellScopedServicesSaberEntryPoint init] */

void FUN_1028a2e18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("KeepSnapsInChatUpsellScopeGraphBridge.KeepSnapsInChatUpsellScopedServicesSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a2e44);
  (*pcVar1)();
}



/* Entry: 1028a2e78; end: 1028a2eaf; -[_TtC37KeepSnapsInChatUpsellScopeGraphBridge50KeepSnapsInChatUpsellScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a2e78(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec6e98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec6e90));
  return;
}



/* Entry: 1028a2eb0; end: 1028a2eb3;  */

void FUN_1028a2eb0(void)

{
  return;
}



/* Entry: 1028a2eb4; end: 1028a2ed3;  */

void FUN_1028a2eb4(void)

{
  FUN_1028a2d24();
  return;
}



/* Entry: 1028a2ed4; end: 1028a2ef3;  */

void FUN_1028a2ed4(void)

{
  func_0x000107c61168(&PTR_PTR_112869778);
  return;
}



/* Entry: 1028a2ef4; end: 1028a2fc3;  */

undefined8 FUN_1028a2ef4(void)

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
  
  func_0x000107c61428(0x112ec6ec8,&uStack_40,0x20,0);
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
    FUN_1028a2fc4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1028a2fc4; end: 1028a2fe3;  */

void FUN_1028a2fc4(void)

{
  func_0x000107c61168(&PTR_PTR_112869840);
  return;
}



/* Entry: 1028a2fe4; end: 1028a304f;  */

void FUN_1028a2fe4(void)

{
  func_0x0001000285a8(0x112ec6ed0,&UNK_10dae8d78);
  func_0x0001000823a8(0x1028a3024,0);
  return;
}



/* Entry: 1028a3050; end: 1028a308b; -[_TtC37KeepSnapsInChatUpsellScopeGraphBridge45KeepSnapsInChatUpsellScopeGraphBridgeServices init] */

void FUN_1028a3050(undefined8 param_1)

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



/* Entry: 1028a308c; end: 1028a30bf;  */

void FUN_1028a308c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028a30c0; end: 1028a30c7;  */

undefined8 FUN_1028a30c0(void)

{
  return 0x1b;
}



/* Entry: 1028a30c8; end: 1028a323f;  */

void FUN_1028a30c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11055ff18;
  func_0x000107c613fc(&UNK_11055ff18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1028a3240,puVar1);
  return;
}



/* Entry: 1028a3240; end: 1028a3247;  */

void FUN_1028a3240(undefined8 *param_1)

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
  func_0x000107c61428(0x112ec6ec8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ec6ec8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11055ffb0;
  func_0x000107c613fc(&UNK_11055ffb0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1028a32f4;
  func_0x00010058fa64(0x1028a32f4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028a3248; end: 1028a32a3;  */

void FUN_1028a3248(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ec6ec8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ec6ec8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1028a32a4; end: 1028a32fb;  */

undefined ** FUN_1028a32a4(void)

{
  return &PTR_DAT_113066688;
}



/* Entry: 1028a32fc; end: 1028a3343; -[SCKeepSnapsInChatUpsellScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a32fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec6f28;
  func_0x000107c61428(param_1 + _DAT_112ec6f28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028a3344; end: 1028a339b; -[SCKeepSnapsInChatUpsellScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a3344(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec6f28;
  func_0x000107c61428(param_1 + _DAT_112ec6f28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028a339c; end: 1028a33e3; -[SCKeepSnapsInChatUpsellScopeGraphBridgeSaberEntryPoint keepSnapsInChatUpsellScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a339c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec6f30;
  func_0x000107c61428(param_1 + _DAT_112ec6f30,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1028a33e4; end: 1028a3447; -[SCKeepSnapsInChatUpsellScopeGraphBridgeSaberEntryPoint setKeepSnapsInChatUpsellScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a33e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec6f30;
  func_0x000107c61428(param_1 + _DAT_112ec6f30,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1028a3448; end: 1028a357b;  */

/* WARNING: Possible PIC construction at 0x0001028a3500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028a351c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028a3538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a3504) */
/* WARNING: Removing unreachable block (ram,0x0001028a3520) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a3448(void)

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
  func_0x000107c4a8c0();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1028a2c7c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1028a2ef4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a357c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112ec6e58) = lVar5;
    *(long *)(lVar4 + _DAT_112ec6e60) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1028a357c; end: 1028a35a3; -[SCKeepSnapsInChatUpsellScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1028a357c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028a3448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028a35a4; end: 1028a35e7; -[SCKeepSnapsInChatUpsellScopeGraphBridgeSaberEntryPoint end] */

void FUN_1028a35a4(undefined8 param_1)

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



/* Entry: 1028a35e8; end: 1028a377f;  */

void FUN_1028a35e8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcc) || (param_3 != -0x7ffffffef0f3a350)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000034,0x800000010f0c5cb0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "KeepSnapsInChatUpsellScopeGraphBridge/SCKeepSnapsInChatUpsellScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x62,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a3780);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c559a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1028a3780; end: 1028a382b; -[SCKeepSnapsInChatUpsellScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1028a3780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028a35e8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028a382c; end: 1028a3897; -[SCKeepSnapsInChatUpsellScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a382c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec6f28,0);
  *(undefined8 *)(param_1 + _DAT_112ec6f30) = 0;
  *(undefined8 *)(param_1 + _DAT_112ec6f38) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028a3898; end: 1028a38cb;  */

void FUN_1028a3898(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028a38cc; end: 1028a3913; -[SCKeepSnapsInChatUpsellScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028a38f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a38fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a38cc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec6f28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec6f30));
  return;
}



/* Entry: 1028a3914; end: 1028a3933;  */

void FUN_1028a3914(void)

{
  func_0x000107c61168(&PTR_PTR_1128698f0);
  return;
}



/* Entry: 1028a3934; end: 1028a397b; -[SCKeepSnapsInChatUpsellScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a3934(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec6f68;
  func_0x000107c61428(param_1 + _DAT_112ec6f68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028a397c; end: 1028a39d3; -[SCKeepSnapsInChatUpsellScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a397c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec6f68;
  func_0x000107c61428(param_1 + _DAT_112ec6f68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028a39d4; end: 1028a3aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a39d4(undefined8 param_1,long param_2)

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
    FUN_1028a2ed4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ec6e90) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028a3aac);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ec6e98);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ec6f70);
    *(long **)(unaff_x20 + _DAT_112ec6f70) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1028a3aac; end: 1028a3ad3; -[SCKeepSnapsInChatUpsellScopedServicesSaberEntryPoint begin] */

void FUN_1028a3aac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028a39d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028a3ad4; end: 1028a3c4b;  */

/* WARNING: Possible PIC construction at 0x0001028a3b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028a3bd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a3b40) */
/* WARNING: Removing unreachable block (ram,0x0001028a3bd8) */
/* WARNING: Removing unreachable block (ram,0x0001028a3bf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a3ad4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec6f70);
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



/* Entry: 1028a3c4c; end: 1028a3c53;  */

void FUN_1028a3c4c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1028a3c54; end: 1028a3c87; -[SCKeepSnapsInChatUpsellScopedServicesSaberEntryPoint end] */

void FUN_1028a3c54(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1028a3ad4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028a3c88; end: 1028a3da7;  */

void FUN_1028a3c88(long param_1,long param_2,long param_3)

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
                        "KeepSnapsInChatUpsellScopeGraphBridge/SCKeepSnapsInChatUpsellScopedServicesSaberEntryPoint.swift"
                        ,0x60,2,0x2e,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a3da8);
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



/* Entry: 1028a3da8; end: 1028a3e53; -[SCKeepSnapsInChatUpsellScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1028a3da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028a3c88(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028a3e54; end: 1028a3eb3; -[SCKeepSnapsInChatUpsellScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a3e54(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec6f68,0);
  *(undefined8 *)(param_1 + _DAT_112ec6f70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028a3eb4; end: 1028a3ee7;  */

void FUN_1028a3eb4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028a3ee8; end: 1028a3f1f; -[SCKeepSnapsInChatUpsellScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a3ee8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec6f68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec6f70));
  return;
}



/* Entry: 1028a3f20; end: 1028a3f3f;  */

void FUN_1028a3f20(void)

{
  func_0x000107c61168(&PTR_PTR_1128699b8);
  return;
}



/* Entry: 1028a3f40; end: 1028a3f93;  */

undefined8 FUN_1028a3f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1028a3f94(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1028a3f94; end: 1028a444b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a3f94(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  lVar4 = param_2;
  func_0x000107c406a0();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1028a444c);
    (*pcVar2)();
  }
  *(long *)(unaff_x20 + 0x10) = lVar4;
  *(undefined1 *)(unaff_x20 + 0x20) = *(undefined1 *)(param_1 + _DAT_1130737d0);
  puVar5 = PTR_PTR_1126ab638;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c556a4(puVar5);
  func_0x000107c61170(puVar6);
  puVar6 = &UNK_110560090;
  puVar7 = puVar6;
  func_0x000107c613fc(&UNK_110560090,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  puVar8 = &UNK_1105600b8;
  func_0x000107c613fc(&UNK_1105600b8,0x20,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(long *)(puVar8 + 0x18) = param_1;
  func_0x000107c613fc(&UNK_110560090,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar9 = PTR_PTR_1126ab640;
  func_0x000107c610f8();
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1028a455c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1105600d0;
  ppuVar10 = &puStack_a0;
  puStack_78 = puVar8;
  func_0x000107c60bc4(ppuVar10);
  pcStack_b0 = FUN_1028a46f4;
  puStack_d0 = puVar13;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_1000f6b44;
  puStack_b8 = &UNK_1105600f8;
  ppuVar11 = &puStack_d0;
  puStack_a8 = puVar6;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c6157c(puVar7);
  func_0x000107c61174();
  func_0x000107c6157c(puVar6);
  func_0x000107c47bd8();
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61574(puStack_a8);
  puVar8 = puStack_78;
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar8);
  lVar4 = param_3;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar12 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar12 != 0) {
    lVar4 = lVar12;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar12);
    if (lVar4 != 0) {
      FUN_1028a4ae0(0);
      func_0x000107c610f8();
      func_0x000107c615f0(lVar4);
      func_0x000107c61174();
      func_0x000107c61174();
      lVar12 = lVar4;
      FUN_1028a4814(lVar4,puVar5,puVar9);
      uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
      *(long *)(unaff_x20 + 0x18) = lVar12;
      func_0x000107c61174();
      func_0x000107c61170(uVar14);
      bVar3 = *(char *)(unaff_x20 + 0x20) == '\0';
      uVar14 = 0x70756f7267;
      if (bVar3) {
        uVar14 = 0x6f5f6e6f5f656e6f;
      }
      uVar1 = 0xe500000000000000;
      if (bVar3) {
        uVar1 = 0xea0000000000656e;
      }
      puVar6 = PTR_PTR_1126ab648;
      func_0x000107c610f8(PTR_PTR_1126ab648);
      func_0x000107c453e4();
      func_0x000107c5fadc(uVar14,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000105fc9998(puVar6,uVar14,1);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar14);
      puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar6 = &UNK_110560130;
      func_0x000107c613fc(&UNK_110560130,0x20,7);
      *(long *)(puVar6 + 0x10) = param_1;
      *(long *)(puVar6 + 0x18) = lVar12;
      puVar8 = &UNK_110560158;
      func_0x000107c613fc(&UNK_110560158,0x20,7);
      *(undefined8 *)(puVar8 + 0x10) = 0x1028a4750;
      *(undefined **)(puVar8 + 0x18) = puVar6;
      pcStack_80 = FUN_1028a4768;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_10006eb60;
      puStack_88 = &UNK_110560170;
      ppuVar10 = &puStack_a0;
      puStack_78 = puVar8;
      func_0x000107c60bc4(ppuVar10);
      puVar13 = puStack_78;
      func_0x000107c61174(param_1);
      func_0x000107c61174(lVar12);
      func_0x000107c6157c(puVar8);
      func_0x000107c61574(puVar13);
      func_0x000107c4e5fc(puVar7);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar12);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar9);
      func_0x000107c60bd0(ppuVar10);
      puVar13 = puVar8;
      func_0x000107c61544(puVar8,"",0x76,0x33,0x2c,1);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar6);
      if (((ulong)puVar13 & 1) == 0) {
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028a43f8);
      (*pcVar2)();
    }
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1028a444c; end: 1028a455b;  */

void FUN_1028a444c(long param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    pcVar1 = "init(beginIn:conversationServices:composerServices:)";
    func_0x0001000c10c0("init(beginIn:conversationServices:composerServices:)");
    func_0x000107c61180();
    puVar2 = &UNK_1105601e8;
    func_0x000107c613fc(&UNK_1105601e8,0x20,7);
    *(long *)(puVar2 + 0x10) = param_1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    pcStack_68 = FUN_1028a47ec;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_110560200;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    func_0x000107c6157c(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(param_1);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 1028a455c; end: 1028a4563;  */

void FUN_1028a455c(void)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    pcVar3 = "init(beginIn:conversationServices:composerServices:)";
    func_0x0001000c10c0("init(beginIn:conversationServices:composerServices:)");
    func_0x000107c61180();
    puVar4 = &UNK_1105601e8;
    func_0x000107c613fc(&UNK_1105601e8,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(undefined8 *)(puVar4 + 0x18) = uVar1;
    pcStack_68 = FUN_1028a47ec;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_110560200;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_60;
    func_0x000107c6157c(lVar2);
    func_0x000107c61174(uVar1);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(pcVar3);
  }
  return;
}



/* Entry: 1028a4564; end: 1028a46f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a4564(long param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + _DAT_1130737c8);
  uVar1 = ((undefined8 *)(param_2 + _DAT_1130737c8))[1];
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x000107c3cfbc();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1028a4610);
    (*pcVar2)();
  }
  func_0x000107c5fadc(uVar4,uVar1);
  func_0x000107c5d444(lVar3);
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(uVar4);
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x18),PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
    return;
  }
  return;
}



/* Entry: 1028a46f4; end: 1028a4717;  */

void FUN_1028a46f4(void)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    pcVar3 = "init(beginIn:conversationServices:composerServices:)";
    func_0x0001000c10c0("init(beginIn:conversationServices:composerServices:)");
    func_0x000107c61180();
    pcStack_58 = FUN_1028a47a8;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105601b0;
    ppuVar4 = &puStack_78;
    lStack_50 = lVar2;
    func_0x000107c60bc4(ppuVar4);
    lVar1 = lStack_50;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(pcVar3);
  }
  return;
}



/* Entry: 1028a4718; end: 1028a4743;  */

void FUN_1028a4718(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028a4744; end: 1028a4767;  */

void FUN_1028a4744(void)

{
  return;
}



/* Entry: 1028a4768; end: 1028a4787;  */

void FUN_1028a4768(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028a4788; end: 1028a47a7;  */

void FUN_1028a4788(void)

{
  func_0x000107c61168(&PTR_PTR_112ec6fe0);
  return;
}



/* Entry: 1028a47a8; end: 1028a47bf;  */

void FUN_1028a47a8(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + 0x18),PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
    return;
  }
  return;
}



/* Entry: 1028a47c0; end: 1028a47eb;  */

void FUN_1028a47c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028a47ec; end: 1028a4813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a47ec(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_1130737c8);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  lVar4 = *(long *)(lVar6 + 0x10);
  func_0x000107c3cfbc();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1028a4610);
    (*pcVar3)();
  }
  func_0x000107c5fadc(uVar5,uVar2);
  func_0x000107c5d444(lVar4);
  func_0x000107c615e8(lVar4);
  func_0x000107c61170(uVar5);
  lVar6 = *(long *)(lVar6 + 0x18);
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (lVar6,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
    return;
  }
  return;
}



/* Entry: 1028a4814; end: 1028a48eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028a4814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ec7050) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7058) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec7060) = param_3;
  puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61154(&stack0xffffffffffffffc0,puVar1,0,0);
  func_0x000107c61180();
  func_0x000107c5677c();
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 1028a48ec; end: 1028a4943; -[_TtC36KeepSnapsInChatUpsellScopeEntryPoint35KeepSnapsInChatUpsellViewController initWithCoder:] */

void FUN_1028a48ec(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "KeepSnapsInChatUpsellScopeEntryPoint/KeepSnapsInChatUpsellViewController.swift"
                      ,0x4e,2,0x1a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a4944);
  (*pcVar1)();
}



/* Entry: 1028a4944; end: 1028a4a0f;  */

/* WARNING: Possible PIC construction at 0x0001028a49a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028a49f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a49ac) */
/* WARNING: Removing unreachable block (ram,0x0001028a4a0c) */
/* WARNING: Removing unreachable block (ram,0x0001028a49c0) */
/* WARNING: Removing unreachable block (ram,0x0001028a49f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a4944(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ab650;
  func_0x000107c610f8(PTR_PTR_1126ab650);
  func_0x000107c49520();
  func_0x000107c5a568();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1028a4a10; end: 1028a4a37; -[_TtC36KeepSnapsInChatUpsellScopeEntryPoint35KeepSnapsInChatUpsellViewController loadView] */

void FUN_1028a4a10(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028a4944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028a4a38; end: 1028a4a97; -[_TtC36KeepSnapsInChatUpsellScopeEntryPoint35KeepSnapsInChatUpsellViewController initWithNibName:bundle:] */

void FUN_1028a4a38(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("KeepSnapsInChatUpsellScopeEntryPoint.KeepSnapsInChatUpsellViewController",
                      0x48,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a4a64);
  (*pcVar1)();
}



/* Entry: 1028a4a98; end: 1028a4adf; -[_TtC36KeepSnapsInChatUpsellScopeEntryPoint35KeepSnapsInChatUpsellViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028a4ac4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a4ac8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a4a98(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec7050));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec7058));
  return;
}



/* Entry: 1028a4ae0; end: 1028a4aff;  */

void FUN_1028a4ae0(void)

{
  func_0x000107c61168(&PTR_PTR_112869a78);
  return;
}



/* Entry: 1028a4b00; end: 1028a4b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a4b00(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1028a4ef4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ec7098) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1028a4b6c; end: 1028a4bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a4b6c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec7098) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028a4bd8; end: 1028a4c37; -[_TtC51LockedConversationAlertScopedFactoryServiceProvider43SCChatLockedConversationAlertScopedServices init] */

void FUN_1028a4bd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LockedConversationAlertScopedFactoryServiceProvider.SCChatLockedConversationAlertScopedServices"
                      ,0x5f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a4c04);
  (*pcVar1)();
}



/* Entry: 1028a4c38; end: 1028a4c47; -[_TtC51LockedConversationAlertScopedFactoryServiceProvider43SCChatLockedConversationAlertScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a4c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec7098));
  return;
}



/* Entry: 1028a4c48; end: 1028a4cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a4c48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105603f8;
  func_0x000107c613fc(&UNK_1105603f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1028a4fd0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1028a4cb4; end: 1028a4d4f;  */

void FUN_1028a4cb4(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110560308;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110560308;
  return;
}



/* Entry: 1028a4d50; end: 1028a4d87;  */

void FUN_1028a4d50(long *param_1)

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



/* Entry: 1028a4d88; end: 1028a4d8f;  */

undefined8 FUN_1028a4d88(void)

{
  return 0x1b;
}


