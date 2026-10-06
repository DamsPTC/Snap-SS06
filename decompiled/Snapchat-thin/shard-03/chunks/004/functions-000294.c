/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028a4d90; end: 1028a4ec3;  */

void FUN_1028a4d90(undefined8 *param_1)

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
  puVar1 = &UNK_110560420;
  func_0x000107c613fc(&UNK_110560420,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1028a4fa8;
  func_0x00010058fa64(FUN_1028a4fa8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028a4ec4; end: 1028a4ef3;  */

undefined ** FUN_1028a4ec4(void)

{
  return &PTR_DAT_112f14d90;
}



/* Entry: 1028a4ef4; end: 1028a4f13;  */

void FUN_1028a4ef4(void)

{
  func_0x000107c61168(&PTR_PTR_112869b48);
  return;
}



/* Entry: 1028a4f14; end: 1028a4f63;  */

undefined1  [16] FUN_1028a4f14(void)

{
  return ZEXT816(0x110560358);
}



/* Entry: 1028a4f64; end: 1028a4fa7;  */

void FUN_1028a4f64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec7100 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ab658;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ec7100 = puVar1;
  return;
}



/* Entry: 1028a4fa8; end: 1028a4fcf;  */

void FUN_1028a4fa8(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1028a4fd0; end: 1028a4fd3;  */

void FUN_1028a4fd0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028a4fd4; end: 1028a507f;  */

void FUN_1028a4fd4(void)

{
  func_0x0001000285a8(0x112ec7108,&UNK_10dae9250);
  func_0x0001000823a8(0x1028a5014,0);
  return;
}



/* Entry: 1028a5080; end: 1028a508f;  */

undefined1  [16] FUN_1028a5080(void)

{
  return ZEXT816(0x110560460);
}



/* Entry: 1028a5090; end: 1028a5363;  */

void FUN_1028a5090(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112ec7118,&UNK_10dae92a8);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1028a5f4c();
  func_0x000100082720("LockedConversationAlertScopeGraphBridgeServicesServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112ec7120,&UNK_10dae92b0);
  func_0x000107c6157c(puVar1);
  pcVar3 = FUN_1028a5364;
  func_0x0001000823a8(FUN_1028a5364,puVar1);
  func_0x000100082720("SCChatLockedConversationAlertEntryPointWrapperServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1028a4d50;
  func_0x0001000823a8(FUN_1028a4d50,0);
  func_0x000100082720("SCChatLockedConversationAlertScopedServicesCleanupRelayServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112ec7128,&UNK_10dae92c0);
  puVar5 = &UNK_110560480;
  func_0x000107c613fc(&UNK_110560480,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 **)(puVar5 + 0x18) = puVar2;
  *(code **)(puVar5 + 0x20) = pcVar3;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x1028a536c;
  func_0x0001000823a8(0x1028a536c,puVar5);
  func_0x000100082720("SCChatLockedConversationAlertScopeInitializationPluginRegistryServiceProvider"
                      ,0x4d,2);
  func_0x0001000285a8(0x112ec70a0,&UNK_10dae8fe0);
  func_0x000107c6157c(uVar8);
  uVar6 = 0x1028a5378;
  func_0x0001000823a8(0x1028a5378,uVar8);
  func_0x000100082720("SCChatLockedConversationAlertScopeInitializationServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112ec7090,&UNK_10dae8fd0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1028a5380;
  func_0x0001000823a8(0x1028a5380,uVar6);
  func_0x000100082720("SCChatLockedConversationAlertScopedServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1105604a8;
  func_0x000107c613fc(&UNK_1105604a8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1028a5388;
  func_0x0001000823a8(0x1028a5388,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCChatLockedConversationAlertScopeEntryPointProvider",0x34,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1028a5364; end: 1028a538f;  */

void FUN_1028a5364(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_1028a5658();
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ab660;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174(uStack_48);
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0c60f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1028a5390; end: 1028a546b;  */

void FUN_1028a5390(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_1028a5658();
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ab660;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174(uStack_48);
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0c60f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar2);
  *param_1 = param_2;
  return;
}



/* Entry: 1028a546c; end: 1028a5527;  */

long FUN_1028a546c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ab660;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0c60f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 1028a5528; end: 1028a554b;  */

void FUN_1028a5528(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1028a554c; end: 1028a5553;  */

undefined8 FUN_1028a554c(void)

{
  return 0x1b;
}



/* Entry: 1028a5554; end: 1028a55d7;  */

void FUN_1028a5554(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1028a5698,param_2,FUN_1028a569c,param_2,FUN_1028a56c4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1028a55d8; end: 1028a5627;  */

undefined8 FUN_1028a55d8(void)

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



/* Entry: 1028a5628; end: 1028a5657;  */

void FUN_1028a5628(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1105604c0;
  return;
}



/* Entry: 1028a5658; end: 1028a5677;  */

void FUN_1028a5658(void)

{
  func_0x000107c61168(&PTR_PTR_112ec7198);
  return;
}



/* Entry: 1028a5678; end: 1028a569b;  */

undefined1  [16] FUN_1028a5678(void)

{
  return ZEXT816(0x110560500);
}



/* Entry: 1028a569c; end: 1028a56c3;  */

void FUN_1028a569c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1028a56c4; end: 1028a56cb;  */

undefined8 FUN_1028a56c4(void)

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



/* Entry: 1028a56cc; end: 1028a5707;  */

void FUN_1028a56cc(undefined8 *param_1,undefined8 param_2)

{
  FUN_1028a5708();
  func_0x0001000a7f38("SCChatLockedConversationAlertScopeInitializationPluginRegistryServiceProvider"
                      ,0x4d,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1028a5708; end: 1028a58f3;  */

void FUN_1028a5708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105cd648;
  ppuVar4 = &PTR_DAT_112f14d90;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110560550;
  func_0x000107c613fc(&UNK_110560550,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112ec71f8;
  func_0x0001000285a8(0x112ec71f8,&UNK_10dae9410);
  func_0x0001000a6ee8(&UNK_110560708,
                      "LockedConversationAlertScopeGraphBridgeScopeInitializationPluginKey",0x43,2,
                      FUN_1028a58f4,puVar2,uVar3,&UNK_110560708,&PTR_DAT_112ec7288);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110560500,
                      "SCChatLockedConversationAlertEntryPointWrapperScopeInitializationPluginKey",
                      0x4a,2,FUN_1028a59a8,param_3,uVar3,&UNK_110560500,&PTR_DAT_112ec7130);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110560578;
  func_0x000107c613fc(&UNK_110560578,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110560398,
                      "SCChatLockedConversationAlertScopedServicesScopeInitializationPluginKey",0x47
                      ,2,FUN_1028a5a58,puVar2,uVar3,&UNK_110560398,&PTR_DAT_112ec70a8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112ec7200;
  func_0x0001000285a8(0x112ec7200,&UNK_10dae9418);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1028a58f4; end: 1028a5933;  */

void FUN_1028a58f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1028a6030(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LockedConversationAlertScopeGraphBridgeScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028a5934; end: 1028a59a7;  */

void FUN_1028a5934(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1028a5a94;
  func_0x0001000823a8(0x1028a5a94,param_3);
  func_0x000100082720("SCChatLockedConversationAlertEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028a59a8; end: 1028a59af;  */

void FUN_1028a59a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1028a5a94;
  func_0x0001000823a8();
  func_0x000100082720("SCChatLockedConversationAlertEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028a59b0; end: 1028a5a57;  */

void FUN_1028a59b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105605a0;
  func_0x000107c613fc(&UNK_1105605a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1028a5a8c;
  func_0x0001000823a8(FUN_1028a5a8c,puVar1);
  func_0x000100082720("SCChatLockedConversationAlertScopedServicesScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1028a5a58; end: 1028a5a5f;  */

void FUN_1028a5a58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105605a0;
  func_0x000107c613fc(&UNK_1105605a0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1028a5a8c;
  func_0x0001000823a8(FUN_1028a5a8c,puVar3);
  func_0x000100082720("SCChatLockedConversationAlertScopedServicesScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1028a5a60; end: 1028a5a8b;  */

void FUN_1028a5a60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028a5a8c; end: 1028a5a9b;  */

void FUN_1028a5a8c(undefined8 *param_1)

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
  puVar1 = &UNK_110560420;
  func_0x000107c613fc(&UNK_110560420,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1028a4fa8;
  func_0x00010058fa64(FUN_1028a4fa8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028a5a9c; end: 1028a5b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028a5a9c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1028a5e5c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112ec7208) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ec7210) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a5b24);
  (*pcVar1)();
}



/* Entry: 1028a5b24; end: 1028a5b83; -[_TtC39LockedConversationAlertScopeGraphBridge54LockedConversationAlertScopeGraphBridgeSaberEntryPoint init] */

void FUN_1028a5b24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LockedConversationAlertScopeGraphBridge.LockedConversationAlertScopeGraphBridgeSaberEntryPoint"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a5b50);
  (*pcVar1)();
}



/* Entry: 1028a5b84; end: 1028a5bbb; -[_TtC39LockedConversationAlertScopeGraphBridge54LockedConversationAlertScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028a5ba0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a5ba4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a5b84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec7208));
  return;
}



/* Entry: 1028a5bbc; end: 1028a5be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a5bbc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ec7210),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ec7208));
  return;
}



/* Entry: 1028a5be4; end: 1028a5c03;  */

void FUN_1028a5be4(void)

{
  func_0x000107c61168(&PTR_PTR_112869c08);
  return;
}



/* Entry: 1028a5c04; end: 1028a5c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028a5c04(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec7240) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ec7248);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028a5c8c);
  (*pcVar2)();
}



/* Entry: 1028a5c8c; end: 1028a5d73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1028a5c8c(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec7240);
  *(undefined **)(unaff_x20 + _DAT_112ec7240) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec7248);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ec7248))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110560668;
  func_0x000107c613fc(&UNK_110560668,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1028a5d78,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1028a5d74; end: 1028a5d7f;  */

void FUN_1028a5d74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1028a5d80; end: 1028a5ddf; -[_TtC39LockedConversationAlertScopeGraphBridge58SCChatLockedConversationAlertScopedServicesSaberEntryPoint init] */

void FUN_1028a5d80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LockedConversationAlertScopeGraphBridge.SCChatLockedConversationAlertScopedServicesSaberEntryPoint"
                      ,0x62,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a5dac);
  (*pcVar1)();
}



/* Entry: 1028a5de0; end: 1028a5e17; -[_TtC39LockedConversationAlertScopeGraphBridge58SCChatLockedConversationAlertScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a5de0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec7248));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec7240));
  return;
}



/* Entry: 1028a5e18; end: 1028a5e1b;  */

void FUN_1028a5e18(void)

{
  return;
}



/* Entry: 1028a5e1c; end: 1028a5e3b;  */

void FUN_1028a5e1c(void)

{
  FUN_1028a5c8c();
  return;
}



/* Entry: 1028a5e3c; end: 1028a5e5b;  */

void FUN_1028a5e3c(void)

{
  func_0x000107c61168(&PTR_PTR_112869cd0);
  return;
}



/* Entry: 1028a5e5c; end: 1028a5f2b;  */

undefined8 FUN_1028a5e5c(void)

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
  
  func_0x000107c61428(0x112ec7278,&uStack_40,0x20,0);
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
    FUN_1028a5f2c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1028a5f2c; end: 1028a5f4b;  */

void FUN_1028a5f2c(void)

{
  func_0x000107c61168(&PTR_PTR_112869d98);
  return;
}



/* Entry: 1028a5f4c; end: 1028a5fb7;  */

void FUN_1028a5f4c(void)

{
  func_0x0001000285a8(0x112ec7280,&UNK_10dae94f8);
  func_0x0001000823a8(0x1028a5f8c,0);
  return;
}



/* Entry: 1028a5fb8; end: 1028a5ff3; -[_TtC39LockedConversationAlertScopeGraphBridge47LockedConversationAlertScopeGraphBridgeServices init] */

void FUN_1028a5fb8(undefined8 param_1)

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



/* Entry: 1028a5ff4; end: 1028a6027;  */

void FUN_1028a5ff4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028a6028; end: 1028a602f;  */

undefined8 FUN_1028a6028(void)

{
  return 0x1b;
}



/* Entry: 1028a6030; end: 1028a61a7;  */

void FUN_1028a6030(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105606b0;
  func_0x000107c613fc(&UNK_1105606b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1028a61a8,puVar1);
  return;
}



/* Entry: 1028a61a8; end: 1028a61af;  */

void FUN_1028a61a8(undefined8 *param_1)

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
  func_0x000107c61428(0x112ec7278,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ec7278,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110560748;
  func_0x000107c613fc(&UNK_110560748,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1028a625c;
  func_0x00010058fa64(0x1028a625c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028a61b0; end: 1028a620b;  */

void FUN_1028a61b0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ec7278,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ec7278,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1028a620c; end: 1028a6263;  */

undefined ** FUN_1028a620c(void)

{
  return &PTR_DAT_112f14d90;
}



/* Entry: 1028a6264; end: 1028a62ab; -[SCLockedConversationAlertScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a6264(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec72d8;
  func_0x000107c61428(param_1 + _DAT_112ec72d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028a62ac; end: 1028a6303; -[SCLockedConversationAlertScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a62ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec72d8;
  func_0x000107c61428(param_1 + _DAT_112ec72d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028a6304; end: 1028a634b; -[SCLockedConversationAlertScopeGraphBridgeSaberEntryPoint lockedConversationAlertScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a6304(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec72e0;
  func_0x000107c61428(param_1 + _DAT_112ec72e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1028a634c; end: 1028a63af; -[SCLockedConversationAlertScopeGraphBridgeSaberEntryPoint setLockedConversationAlertScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a634c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec72e0;
  func_0x000107c61428(param_1 + _DAT_112ec72e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1028a63b0; end: 1028a64e3;  */

/* WARNING: Possible PIC construction at 0x0001028a6468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028a6484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028a64a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a646c) */
/* WARNING: Removing unreachable block (ram,0x0001028a6488) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a63b0(void)

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
  func_0x000107c4b974();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1028a5be4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1028a5e5c();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a64e4);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112ec7208) = lVar5;
    *(long *)(lVar4 + _DAT_112ec7210) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1028a64e4; end: 1028a650b; -[SCLockedConversationAlertScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1028a64e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028a63b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028a650c; end: 1028a654f; -[SCLockedConversationAlertScopeGraphBridgeSaberEntryPoint end] */

void FUN_1028a650c(undefined8 param_1)

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



/* Entry: 1028a6550; end: 1028a66e7;  */

void FUN_1028a6550(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffca) || (param_3 != -0x7ffffffef0f39c30)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000036,0x800000010f0c63d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LockedConversationAlertScopeGraphBridge/SCLockedConversationAlertScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x66,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a66e8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56094();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1028a66e8; end: 1028a6793; -[SCLockedConversationAlertScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1028a66e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028a6550(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028a6794; end: 1028a67ff; -[SCLockedConversationAlertScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a6794(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec72d8,0);
  *(undefined8 *)(param_1 + _DAT_112ec72e0) = 0;
  *(undefined8 *)(param_1 + _DAT_112ec72e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028a6800; end: 1028a6833;  */

void FUN_1028a6800(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028a6834; end: 1028a687b; -[SCLockedConversationAlertScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028a6860: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a6864) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a6834(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec72d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec72e0));
  return;
}



/* Entry: 1028a687c; end: 1028a689b;  */

void FUN_1028a687c(void)

{
  func_0x000107c61168(&PTR_PTR_112869e48);
  return;
}



/* Entry: 1028a689c; end: 1028a68e3; -[SCSCChatLockedConversationAlertScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a689c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec7318;
  func_0x000107c61428(param_1 + _DAT_112ec7318,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028a68e4; end: 1028a693b; -[SCSCChatLockedConversationAlertScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a68e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec7318;
  func_0x000107c61428(param_1 + _DAT_112ec7318,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028a693c; end: 1028a6a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a693c(undefined8 param_1,long param_2)

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
    FUN_1028a5e3c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ec7240) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028a6a14);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ec7248);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ec7320);
    *(long **)(unaff_x20 + _DAT_112ec7320) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1028a6a14; end: 1028a6a3b; -[SCSCChatLockedConversationAlertScopedServicesSaberEntryPoint begin] */

void FUN_1028a6a14(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028a693c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028a6a3c; end: 1028a6bb3;  */

/* WARNING: Possible PIC construction at 0x0001028a6aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028a6b3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a6aa8) */
/* WARNING: Removing unreachable block (ram,0x0001028a6b40) */
/* WARNING: Removing unreachable block (ram,0x0001028a6b58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a6a3c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec7320);
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



/* Entry: 1028a6bb4; end: 1028a6bbb;  */

void FUN_1028a6bb4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1028a6bbc; end: 1028a6bef; -[SCSCChatLockedConversationAlertScopedServicesSaberEntryPoint end] */

void FUN_1028a6bbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1028a6a3c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028a6bf0; end: 1028a6d0f;  */

void FUN_1028a6bf0(long param_1,long param_2,long param_3)

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
                        "LockedConversationAlertScopeGraphBridge/SCSCChatLockedConversationAlertScopedServicesSaberEntryPoint.swift"
                        ,0x6a,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a6d10);
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



/* Entry: 1028a6d10; end: 1028a6dbb; -[SCSCChatLockedConversationAlertScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1028a6d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028a6bf0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028a6dbc; end: 1028a6e1b; -[SCSCChatLockedConversationAlertScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a6dbc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec7318,0);
  *(undefined8 *)(param_1 + _DAT_112ec7320) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028a6e1c; end: 1028a6e4f;  */

void FUN_1028a6e1c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028a6e50; end: 1028a6e87; -[SCSCChatLockedConversationAlertScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a6e50(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec7318);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec7320));
  return;
}



/* Entry: 1028a6e88; end: 1028a6ea7;  */

void FUN_1028a6e88(void)

{
  func_0x000107c61168(&PTR_PTR_112869f10);
  return;
}



/* Entry: 1028a6ea8; end: 1028a6f13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a6ea8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1028a729c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ec7358) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1028a6f14; end: 1028a6f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a6f14(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec7358) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028a6f80; end: 1028a6fdf; -[_TtC46UnreadMessageAlertScopedFactoryServiceProvider34SCUnreadMessageAlertScopedServices init] */

void FUN_1028a6f80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnreadMessageAlertScopedFactoryServiceProvider.SCUnreadMessageAlertScopedServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a6fac);
  (*pcVar1)();
}



/* Entry: 1028a6fe0; end: 1028a6fef; -[_TtC46UnreadMessageAlertScopedFactoryServiceProvider34SCUnreadMessageAlertScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a6fe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec7358));
  return;
}



/* Entry: 1028a6ff0; end: 1028a705b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a6ff0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110560960;
  func_0x000107c613fc(&UNK_110560960,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1028a7334,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1028a705c; end: 1028a70f7;  */

void FUN_1028a705c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110560870;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110560870;
  return;
}



/* Entry: 1028a70f8; end: 1028a712f;  */

void FUN_1028a70f8(long *param_1)

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



/* Entry: 1028a7130; end: 1028a7137;  */

undefined8 FUN_1028a7130(void)

{
  return 0x1b;
}



/* Entry: 1028a7138; end: 1028a726b;  */

void FUN_1028a7138(undefined8 *param_1)

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
  puVar1 = &UNK_110560988;
  func_0x000107c613fc(&UNK_110560988,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1028a730c;
  func_0x00010058fa64(FUN_1028a730c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028a726c; end: 1028a729b;  */

undefined ** FUN_1028a726c(void)

{
  return &PTR_DAT_113067078;
}



/* Entry: 1028a729c; end: 1028a72bb;  */

void FUN_1028a729c(void)

{
  func_0x000107c61168(&PTR_PTR_112869fd0);
  return;
}



/* Entry: 1028a72bc; end: 1028a730b;  */

undefined1  [16] FUN_1028a72bc(void)

{
  return ZEXT816(0x1105608c0);
}



/* Entry: 1028a730c; end: 1028a7333;  */

void FUN_1028a730c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1028a7334; end: 1028a7337;  */

void FUN_1028a7334(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028a7338; end: 1028a73e3;  */

void FUN_1028a7338(void)

{
  func_0x0001000285a8(0x112ec73c0,&UNK_10dae98f0);
  func_0x0001000823a8(0x1028a7378,0);
  return;
}



/* Entry: 1028a73e4; end: 1028a73f3;  */

undefined1  [16] FUN_1028a73e4(void)

{
  return ZEXT816(0x1105609c8);
}



/* Entry: 1028a73f4; end: 1028a76c7;  */

void FUN_1028a73f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112ec73d0,&UNK_10dae9940);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112ec73d8,&UNK_10dae9950);
  func_0x000107c6157c(puVar1);
  pcVar2 = FUN_1028a76c8;
  func_0x0001000823a8(FUN_1028a76c8,puVar1);
  func_0x000100082720("SCUnreadMessageAlertEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_1028a70f8;
  func_0x0001000823a8(FUN_1028a70f8,0);
  pcVar4 = "SCUnreadMessageAlertScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCUnreadMessageAlertScopedServicesCleanupRelayServiceProvider",0x3d,2);
  FUN_1028a82b0();
  func_0x000100082720("UnreadMessageAlertScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ec73e0,&UNK_10dae9948);
  puVar5 = &UNK_1105609e8;
  func_0x000107c613fc(&UNK_1105609e8,0x30,7);
  *(code **)(puVar5 + 0x10) = pcVar2;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(code **)(puVar5 + 0x20) = pcVar3;
  *(char **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x1028a76d0;
  func_0x0001000823a8(0x1028a76d0,puVar5);
  func_0x000100082720("SCUnreadMessageAlertScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112ec7360,&UNK_10dae96d0);
  func_0x000107c6157c(uVar8);
  uVar6 = 0x1028a76dc;
  func_0x0001000823a8(0x1028a76dc,uVar8);
  func_0x000100082720("SCUnreadMessageAlertScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ec7350,&UNK_10dae96c0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1028a76e4;
  func_0x0001000823a8(0x1028a76e4,uVar6);
  func_0x000100082720("SCUnreadMessageAlertScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_110560a10;
  func_0x000107c613fc(&UNK_110560a10,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  *(code **)(puVar5 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  uVar7 = 0x1028a76ec;
  func_0x0001000823a8(0x1028a76ec,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCUnreadMessageAlertScopeEntryPointProvider",0x2b,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1028a76c8; end: 1028a76f3;  */

void FUN_1028a76c8(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_1028a79bc();
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ab668;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174(uStack_48);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0c6710);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1028a76f4; end: 1028a77cf;  */

void FUN_1028a76f4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_1028a79bc();
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ab668;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174(uStack_48);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0c6710);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar2);
  *param_1 = param_2;
  return;
}



/* Entry: 1028a77d0; end: 1028a788b;  */

long FUN_1028a77d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ab668;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0c6710);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  return unaff_x20;
}


