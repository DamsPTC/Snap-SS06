/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10289f2c4; end: 10289f323; -[_TtC44ChatReplyComposeScopedFactoryServiceProvider32SCChatReplyComposeScopedServices init] */

void FUN_10289f2c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatReplyComposeScopedFactoryServiceProvider.SCChatReplyComposeScopedServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10289f2f0);
  (*pcVar1)();
}



/* Entry: 10289f324; end: 10289f333; -[_TtC44ChatReplyComposeScopedFactoryServiceProvider32SCChatReplyComposeScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289f324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec6a08));
  return;
}



/* Entry: 10289f334; end: 10289f39f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10289f334(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11055f558;
  func_0x000107c613fc(&UNK_11055f558,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10289f678,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10289f3a0; end: 10289f43b;  */

void FUN_10289f3a0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11055f468;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11055f468;
  return;
}



/* Entry: 10289f43c; end: 10289f473;  */

void FUN_10289f43c(long *param_1)

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



/* Entry: 10289f474; end: 10289f47b;  */

undefined8 FUN_10289f474(void)

{
  return 0x1b;
}



/* Entry: 10289f47c; end: 10289f5af;  */

void FUN_10289f47c(undefined8 *param_1)

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
  puVar1 = &UNK_11055f580;
  func_0x000107c613fc(&UNK_11055f580,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10289f650;
  func_0x00010058fa64(FUN_10289f650,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10289f5b0; end: 10289f5df;  */

undefined ** FUN_10289f5b0(void)

{
  return &PTR_DAT_1130668c8;
}



/* Entry: 10289f5e0; end: 10289f5ff;  */

void FUN_10289f5e0(void)

{
  func_0x000107c61168(&PTR_PTR_112869168);
  return;
}



/* Entry: 10289f600; end: 10289f64f;  */

undefined1  [16] FUN_10289f600(void)

{
  return ZEXT816(0x11055f4b8);
}



/* Entry: 10289f650; end: 10289f677;  */

void FUN_10289f650(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10289f678; end: 10289f67b;  */

void FUN_10289f678(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10289f67c; end: 10289f7eb;  */

void FUN_10289f67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec6a70,&UNK_10dae8460);
  puVar1 = &UNK_11055f5c0;
  func_0x000107c613fc(&UNK_11055f5c0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10289f7ec,puVar1);
  return;
}



/* Entry: 10289f7ec; end: 10289f807;  */

/* WARNING: Possible PIC construction at 0x00010289f7c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010289f7d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010289f7c4) */
/* WARNING: Removing unreachable block (ram,0x00010289f7d4) */

void FUN_10289f7ec(undefined8 *param_1)

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
  puVar4 = &UNK_11055f608;
  func_0x000107c613fc(&UNK_11055f608,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112ec6a78;
  func_0x0001000285a8(0x112ec6a78,&UNK_10dae84a0);
  func_0x000107c613fc();
  pcVar6 = FUN_10289fb30;
  func_0x0001000841fc(FUN_10289fb30,puVar4,uVar5);
  func_0x000100084214(&UNK_10dae8470,0x2e,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10289f808; end: 10289fb2f;  */

void FUN_10289f808(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112ec6a80,&UNK_10dae84a8);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1028a0be4();
  func_0x000100082720("ChatReplyComposeScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112ec6a88,&UNK_10dae84b0);
  puVar3 = &UNK_11055f630;
  func_0x000107c613fc(&UNK_11055f630,0x38,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  uVar8 = 0x10289fb3c;
  func_0x0001000823a8(0x10289fb3c,puVar3);
  func_0x000100082720("SCChatReplyComposeScopeEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10289f43c;
  func_0x0001000823a8(FUN_10289f43c,0);
  func_0x000100082720("SCChatReplyComposeScopedServicesCleanupRelayServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112ec6a90,&UNK_10dae84c0);
  puVar3 = &UNK_11055f658;
  func_0x000107c613fc(&UNK_11055f658,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_10289fb88;
  func_0x0001000823a8(FUN_10289fb88,puVar3);
  func_0x000100082720("SCChatReplyComposeScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112ec6a10,&UNK_10dae8250);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x10289fb94;
  func_0x0001000823a8(0x10289fb94,pcVar5);
  func_0x000100082720("SCChatReplyComposeScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112ec6a00,&UNK_10dae8240);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x10289fb9c;
  func_0x0001000823a8(0x10289fb9c,uVar6);
  func_0x000100082720("SCChatReplyComposeScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11055f680;
  func_0x000107c613fc(&UNK_11055f680,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x10289fba4;
  func_0x0001000823a8(0x10289fba4,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCChatReplyComposeScopeEntryPointProvider",0x29,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 10289fb30; end: 10289fb4b;  */

void FUN_10289fb30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112ec6a80,&UNK_10dae84a8);
  puVar2 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar3 = puVar2;
  FUN_1028a0be4();
  func_0x000100082720("ChatReplyComposeScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112ec6a88,&UNK_10dae84b0);
  puVar4 = &UNK_11055f630;
  func_0x000107c613fc(&UNK_11055f630,0x38,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  *(undefined8 *)(puVar4 + 0x20) = uVar9;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  *(undefined8 *)(puVar4 + 0x30) = uVar1;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  uVar5 = 0x10289fb3c;
  func_0x0001000823a8(0x10289fb3c,puVar4);
  func_0x000100082720("SCChatReplyComposeScopeEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_10289f43c;
  func_0x0001000823a8(FUN_10289f43c,0);
  func_0x000100082720("SCChatReplyComposeScopedServicesCleanupRelayServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112ec6a90,&UNK_10dae84c0);
  puVar4 = &UNK_11055f658;
  func_0x000107c613fc(&UNK_11055f658,0x30,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar2;
  *(undefined8 **)(puVar4 + 0x18) = puVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(code **)(puVar4 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(pcVar6);
  pcVar7 = FUN_10289fb88;
  func_0x0001000823a8(FUN_10289fb88,puVar4);
  func_0x000100082720("SCChatReplyComposeScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112ec6a10,&UNK_10dae8250);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x10289fb94;
  func_0x0001000823a8(0x10289fb94,pcVar7);
  func_0x000100082720("SCChatReplyComposeScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112ec6a00,&UNK_10dae8240);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10289fb9c;
  func_0x0001000823a8(0x10289fb9c,uVar8);
  func_0x000100082720("SCChatReplyComposeScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_11055f680;
  func_0x000107c613fc(&UNK_11055f680,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar9;
  *(code **)(puVar4 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar9 = 0x10289fba4;
  func_0x0001000823a8(0x10289fba4,puVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCChatReplyComposeScopeEntryPointProvider",0x29,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10289fb4c; end: 10289fb87;  */

void FUN_10289fb4c(void)

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



/* Entry: 10289fb88; end: 10289fbab;  */

void FUN_10289fb88(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1028a03a0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCChatReplyComposeScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10289fbac; end: 1028a019f;  */

void FUN_10289fbac(long *param_1,long param_2)

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
  FUN_1028a02f0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126ab630;
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
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0c5470);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef2aa20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar7 = 0x72655370756f7267;
  func_0x000107c5fadc(0x72655370756f7267,0xed00007365636976);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar7);
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
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



/* Entry: 1028a01a0; end: 1028a01e3;  */

void FUN_1028a01a0(void)

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



/* Entry: 1028a01e4; end: 1028a01eb;  */

undefined8 FUN_1028a01e4(void)

{
  return 0x1b;
}



/* Entry: 1028a01ec; end: 1028a026f;  */

void FUN_1028a01ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1028a0330,param_2,FUN_1028a0334,param_2,FUN_1028a035c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1028a0270; end: 1028a02bf;  */

undefined8 FUN_1028a0270(void)

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



/* Entry: 1028a02c0; end: 1028a02ef;  */

void FUN_1028a02c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11055f698;
  return;
}



/* Entry: 1028a02f0; end: 1028a030f;  */

void FUN_1028a02f0(void)

{
  func_0x000107c61168(&PTR_PTR_112ec6b00);
  return;
}



/* Entry: 1028a0310; end: 1028a0333;  */

undefined1  [16] FUN_1028a0310(void)

{
  return ZEXT816(0x11055f6d8);
}



/* Entry: 1028a0334; end: 1028a035b;  */

void FUN_1028a0334(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1028a035c; end: 1028a0363;  */

undefined8 FUN_1028a035c(void)

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



/* Entry: 1028a0364; end: 1028a039f;  */

void FUN_1028a0364(undefined8 *param_1,undefined8 param_2)

{
  FUN_1028a03a0();
  func_0x0001000a7f38("SCChatReplyComposeScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1028a03a0; end: 1028a058b;  */

void FUN_1028a03a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d118;
  ppuVar4 = &PTR_DAT_1130668c8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11055f728;
  func_0x000107c613fc(&UNK_11055f728,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112ec6b80;
  func_0x0001000285a8(0x112ec6b80,&UNK_10dae8620);
  func_0x0001000a6ee8(&UNK_11055f938,"ChatReplyComposeScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_1028a058c,puVar2,uVar3,&UNK_11055f938,&PTR_DAT_112ec6c10);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11055f6d8,
                      "SCChatReplyComposeScopeEntryPointWrapperScopeInitializationPluginKey",0x44,2,
                      FUN_1028a0640,param_3,uVar3,&UNK_11055f6d8,&PTR_DAT_112ec6a98);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11055f750;
  func_0x000107c613fc(&UNK_11055f750,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11055f4f8,"SCChatReplyComposeScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_1028a06f0,puVar2,uVar3,&UNK_11055f4f8,&PTR_DAT_112ec6a18);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112ec6b88;
  func_0x0001000285a8(0x112ec6b88,&UNK_10dae8628);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1028a058c; end: 1028a05cb;  */

void FUN_1028a058c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1028a0cc8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ChatReplyComposeScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028a05cc; end: 1028a063f;  */

void FUN_1028a05cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1028a072c;
  func_0x0001000823a8(0x1028a072c,param_3);
  func_0x000100082720("SCChatReplyComposeScopeEntryPointWrapperScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028a0640; end: 1028a0647;  */

void FUN_1028a0640(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1028a072c;
  func_0x0001000823a8();
  func_0x000100082720("SCChatReplyComposeScopeEntryPointWrapperScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028a0648; end: 1028a06ef;  */

void FUN_1028a0648(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11055f778;
  func_0x000107c613fc(&UNK_11055f778,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1028a0724;
  func_0x0001000823a8(FUN_1028a0724,puVar1);
  func_0x000100082720("SCChatReplyComposeScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1028a06f0; end: 1028a06f7;  */

void FUN_1028a06f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11055f778;
  func_0x000107c613fc(&UNK_11055f778,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1028a0724;
  func_0x0001000823a8(FUN_1028a0724,puVar3);
  func_0x000100082720("SCChatReplyComposeScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1028a06f8; end: 1028a0723;  */

void FUN_1028a06f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028a0724; end: 1028a0733;  */

void FUN_1028a0724(undefined8 *param_1)

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
  puVar1 = &UNK_11055f580;
  func_0x000107c613fc(&UNK_11055f580,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10289f650;
  func_0x00010058fa64(FUN_10289f650,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028a0734; end: 1028a07bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028a0734(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1028a0af4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112ec6b90) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ec6b98) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a07bc);
  (*pcVar1)();
}



/* Entry: 1028a07bc; end: 1028a081b; -[_TtC32ChatReplyComposeScopeGraphBridge47ChatReplyComposeScopeGraphBridgeSaberEntryPoint init] */

void FUN_1028a07bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatReplyComposeScopeGraphBridge.ChatReplyComposeScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a07e8);
  (*pcVar1)();
}



/* Entry: 1028a081c; end: 1028a0853; -[_TtC32ChatReplyComposeScopeGraphBridge47ChatReplyComposeScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028a0838: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a083c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a081c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec6b90));
  return;
}



/* Entry: 1028a0854; end: 1028a087b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a0854(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ec6b98),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ec6b90));
  return;
}



/* Entry: 1028a087c; end: 1028a089b;  */

void FUN_1028a087c(void)

{
  func_0x000107c61168(&PTR_PTR_112869228);
  return;
}



/* Entry: 1028a089c; end: 1028a0923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028a089c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec6bc8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ec6bd0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028a0924);
  (*pcVar2)();
}



/* Entry: 1028a0924; end: 1028a0a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1028a0924(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec6bc8);
  *(undefined **)(unaff_x20 + _DAT_112ec6bc8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec6bd0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ec6bd0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11055f898;
  func_0x000107c613fc(&UNK_11055f898,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1028a0a10,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1028a0a0c; end: 1028a0a17;  */

void FUN_1028a0a0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1028a0a18; end: 1028a0a77; -[_TtC32ChatReplyComposeScopeGraphBridge47SCChatReplyComposeScopedServicesSaberEntryPoint init] */

void FUN_1028a0a18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatReplyComposeScopeGraphBridge.SCChatReplyComposeScopedServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a0a44);
  (*pcVar1)();
}



/* Entry: 1028a0a78; end: 1028a0aaf; -[_TtC32ChatReplyComposeScopeGraphBridge47SCChatReplyComposeScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a0a78(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec6bd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec6bc8));
  return;
}



/* Entry: 1028a0ab0; end: 1028a0ab3;  */

void FUN_1028a0ab0(void)

{
  return;
}



/* Entry: 1028a0ab4; end: 1028a0ad3;  */

void FUN_1028a0ab4(void)

{
  FUN_1028a0924();
  return;
}



/* Entry: 1028a0ad4; end: 1028a0af3;  */

void FUN_1028a0ad4(void)

{
  func_0x000107c61168(&PTR_PTR_1128692f0);
  return;
}



/* Entry: 1028a0af4; end: 1028a0bc3;  */

undefined8 FUN_1028a0af4(void)

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
  
  func_0x000107c61428(0x112ec6c00,&uStack_40,0x20,0);
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
    FUN_1028a0bc4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1028a0bc4; end: 1028a0be3;  */

void FUN_1028a0bc4(void)

{
  func_0x000107c61168(&PTR_PTR_1128693b8);
  return;
}



/* Entry: 1028a0be4; end: 1028a0c4f;  */

void FUN_1028a0be4(void)

{
  func_0x0001000285a8(0x112ec6c08,&UNK_10dae86e8);
  func_0x0001000823a8(0x1028a0c24,0);
  return;
}



/* Entry: 1028a0c50; end: 1028a0c8b; -[_TtC32ChatReplyComposeScopeGraphBridge40ChatReplyComposeScopeGraphBridgeServices init] */

void FUN_1028a0c50(undefined8 param_1)

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



/* Entry: 1028a0c8c; end: 1028a0cbf;  */

void FUN_1028a0c8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028a0cc0; end: 1028a0cc7;  */

undefined8 FUN_1028a0cc0(void)

{
  return 0x1b;
}



/* Entry: 1028a0cc8; end: 1028a0e3f;  */

void FUN_1028a0cc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11055f8e0;
  func_0x000107c613fc(&UNK_11055f8e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1028a0e40,puVar1);
  return;
}



/* Entry: 1028a0e40; end: 1028a0e47;  */

void FUN_1028a0e40(undefined8 *param_1)

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
  func_0x000107c61428(0x112ec6c00,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ec6c00,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11055f978;
  func_0x000107c613fc(&UNK_11055f978,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1028a0ef4;
  func_0x00010058fa64(0x1028a0ef4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028a0e48; end: 1028a0ea3;  */

void FUN_1028a0e48(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ec6c00,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ec6c00,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1028a0ea4; end: 1028a0efb;  */

undefined ** FUN_1028a0ea4(void)

{
  return &PTR_DAT_1130668c8;
}



/* Entry: 1028a0efc; end: 1028a0f43; -[SCChatReplyComposeScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a0efc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec6c60;
  func_0x000107c61428(param_1 + _DAT_112ec6c60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028a0f44; end: 1028a0f9b; -[SCChatReplyComposeScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a0f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec6c60;
  func_0x000107c61428(param_1 + _DAT_112ec6c60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028a0f9c; end: 1028a0fe3; -[SCChatReplyComposeScopeGraphBridgeSaberEntryPoint chatReplyComposeScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a0f9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec6c68;
  func_0x000107c61428(param_1 + _DAT_112ec6c68,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1028a0fe4; end: 1028a1047; -[SCChatReplyComposeScopeGraphBridgeSaberEntryPoint setChatReplyComposeScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a0fe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec6c68;
  func_0x000107c61428(param_1 + _DAT_112ec6c68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1028a1048; end: 1028a117b;  */

/* WARNING: Possible PIC construction at 0x0001028a1100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028a111c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028a1138: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a1104) */
/* WARNING: Removing unreachable block (ram,0x0001028a1120) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a1048(void)

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
  func_0x000107c3f904();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1028a087c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1028a0af4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a117c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112ec6b90) = lVar5;
    *(long *)(lVar4 + _DAT_112ec6b98) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1028a117c; end: 1028a11a3; -[SCChatReplyComposeScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1028a117c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028a1048();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028a11a4; end: 1028a11e7; -[SCChatReplyComposeScopeGraphBridgeSaberEntryPoint end] */

void FUN_1028a11a4(undefined8 param_1)

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



/* Entry: 1028a11e8; end: 1028a137f;  */

void FUN_1028a11e8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0f3a8f0)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f0c5710,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ChatReplyComposeScopeGraphBridge/SCChatReplyComposeScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x58,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a1380);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c533b4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1028a1380; end: 1028a142b; -[SCChatReplyComposeScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1028a1380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028a11e8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028a142c; end: 1028a1497; -[SCChatReplyComposeScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a142c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec6c60,0);
  *(undefined8 *)(param_1 + _DAT_112ec6c68) = 0;
  *(undefined8 *)(param_1 + _DAT_112ec6c70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028a1498; end: 1028a14cb;  */

void FUN_1028a1498(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028a14cc; end: 1028a1513; -[SCChatReplyComposeScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028a14f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a14fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a14cc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec6c60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec6c68));
  return;
}



/* Entry: 1028a1514; end: 1028a1533;  */

void FUN_1028a1514(void)

{
  func_0x000107c61168(&PTR_PTR_112869468);
  return;
}



/* Entry: 1028a1534; end: 1028a157b; -[SCSCChatReplyComposeScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a1534(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec6ca0;
  func_0x000107c61428(param_1 + _DAT_112ec6ca0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028a157c; end: 1028a15d3; -[SCSCChatReplyComposeScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a157c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec6ca0;
  func_0x000107c61428(param_1 + _DAT_112ec6ca0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028a15d4; end: 1028a16ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a15d4(undefined8 param_1,long param_2)

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
    FUN_1028a0ad4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ec6bc8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028a16ac);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ec6bd0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ec6ca8);
    *(long **)(unaff_x20 + _DAT_112ec6ca8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1028a16ac; end: 1028a16d3; -[SCSCChatReplyComposeScopedServicesSaberEntryPoint begin] */

void FUN_1028a16ac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028a15d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028a16d4; end: 1028a184b;  */

/* WARNING: Possible PIC construction at 0x0001028a173c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028a17d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028a1740) */
/* WARNING: Removing unreachable block (ram,0x0001028a17d8) */
/* WARNING: Removing unreachable block (ram,0x0001028a17f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a16d4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec6ca8);
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



/* Entry: 1028a184c; end: 1028a1853;  */

void FUN_1028a184c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1028a1854; end: 1028a1887; -[SCSCChatReplyComposeScopedServicesSaberEntryPoint end] */

void FUN_1028a1854(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1028a16d4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028a1888; end: 1028a19a7;  */

void FUN_1028a1888(long param_1,long param_2,long param_3)

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
                        "ChatReplyComposeScopeGraphBridge/SCSCChatReplyComposeScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a19a8);
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



/* Entry: 1028a19a8; end: 1028a1a53; -[SCSCChatReplyComposeScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1028a19a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028a1888(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028a1a54; end: 1028a1ab3; -[SCSCChatReplyComposeScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a1a54(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec6ca0,0);
  *(undefined8 *)(param_1 + _DAT_112ec6ca8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028a1ab4; end: 1028a1ae7;  */

void FUN_1028a1ab4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028a1ae8; end: 1028a1b1f; -[SCSCChatReplyComposeScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a1ae8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec6ca0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec6ca8));
  return;
}



/* Entry: 1028a1b20; end: 1028a1b3f;  */

void FUN_1028a1b20(void)

{
  func_0x000107c61168(&PTR_PTR_112869530);
  return;
}



/* Entry: 1028a1b40; end: 1028a1bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a1b40(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1028a1f34();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ec6ce0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1028a1bac; end: 1028a1c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a1bac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec6ce0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028a1c18; end: 1028a1c77; -[_TtC49KeepSnapsInChatUpsellScopedFactoryServiceProvider35KeepSnapsInChatUpsellScopedServices init] */

void FUN_1028a1c18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("KeepSnapsInChatUpsellScopedFactoryServiceProvider.KeepSnapsInChatUpsellScopedServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028a1c44);
  (*pcVar1)();
}



/* Entry: 1028a1c78; end: 1028a1c87; -[_TtC49KeepSnapsInChatUpsellScopedFactoryServiceProvider35KeepSnapsInChatUpsellScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a1c78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec6ce0));
  return;
}



/* Entry: 1028a1c88; end: 1028a1cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028a1c88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11055fb90;
  func_0x000107c613fc(&UNK_11055fb90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1028a1fcc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1028a1cf4; end: 1028a1d8f;  */

void FUN_1028a1cf4(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11055faa0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11055faa0;
  return;
}



/* Entry: 1028a1d90; end: 1028a1dc7;  */

void FUN_1028a1d90(long *param_1)

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



/* Entry: 1028a1dc8; end: 1028a1dcf;  */

undefined8 FUN_1028a1dc8(void)

{
  return 0x1b;
}



/* Entry: 1028a1dd0; end: 1028a1f03;  */

void FUN_1028a1dd0(undefined8 *param_1)

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



/* Entry: 1028a1f04; end: 1028a1f33;  */

undefined ** FUN_1028a1f04(void)

{
  return &PTR_DAT_113066688;
}



/* Entry: 1028a1f34; end: 1028a1f53;  */

void FUN_1028a1f34(void)

{
  func_0x000107c61168(&PTR_PTR_1128695f0);
  return;
}



/* Entry: 1028a1f54; end: 1028a1fa3;  */

undefined1  [16] FUN_1028a1f54(void)

{
  return ZEXT816(0x11055faf0);
}



/* Entry: 1028a1fa4; end: 1028a1fcb;  */

void FUN_1028a1fa4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1028a1fcc; end: 1028a1fcf;  */

void FUN_1028a1fcc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}


