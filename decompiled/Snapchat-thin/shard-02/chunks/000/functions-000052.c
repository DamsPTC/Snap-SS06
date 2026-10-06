/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1017579d4; end: 101757a17;  */

void FUN_1017579d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc68f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a7b10;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dc68f8 = puVar1;
  return;
}



/* Entry: 101757a18; end: 101757a3f;  */

void FUN_101757a18(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101757a40; end: 101757a53;  */

void FUN_101757a40(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101757a54; end: 101757d6b;  */

void FUN_101757a54(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  func_0x0001000285a8(0x112dc6910,&UNK_10d986c38);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101758d14();
  func_0x000100082720("CameraBIPAScopeGraphBridgeServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112dc6918,&UNK_10d986c40);
  puVar3 = &UNK_1104037a0;
  func_0x000107c613fc(&UNK_1104037a0,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar8 = 0x101757d78;
  func_0x0001000823a8(0x101757d78,puVar3);
  func_0x000100082720("SCCameraBIPAFeatureEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1017577c0;
  func_0x0001000823a8(FUN_1017577c0,0);
  func_0x000100082720("SCCameraBIPAScopedServicesCleanupRelayServiceProvider",0x35,2);
  func_0x0001000285a8(0x112dc6920,&UNK_10d986c50);
  puVar3 = &UNK_1104037c8;
  func_0x000107c613fc(&UNK_1104037c8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_101757dc0;
  func_0x0001000823a8(FUN_101757dc0,puVar3);
  func_0x000100082720("SCCameraBIPAScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112dc6898,&UNK_10d986a00);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x101757dcc;
  func_0x0001000823a8(0x101757dcc,pcVar5);
  func_0x000100082720("SCCameraBIPAScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112dc6888,&UNK_10d9869f0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101757dd4;
  func_0x0001000823a8(0x101757dd4,uVar6);
  func_0x000100082720("SCCameraBIPAScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1104037f0;
  func_0x000107c613fc(&UNK_1104037f0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x101757ddc;
  func_0x0001000823a8(0x101757ddc,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCCameraBIPAScopeEntryPointProvider",0x23,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101757d6c; end: 101757d83;  */

void FUN_101757d6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112dc6910,&UNK_10d986c38);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101758d14();
  func_0x000100082720("CameraBIPAScopeGraphBridgeServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112dc6918,&UNK_10d986c40);
  puVar3 = &UNK_1104037a0;
  func_0x000107c613fc(&UNK_1104037a0,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  uVar4 = 0x101757d78;
  func_0x0001000823a8(0x101757d78,puVar3);
  func_0x000100082720("SCCameraBIPAFeatureEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_1017577c0;
  func_0x0001000823a8(FUN_1017577c0,0);
  func_0x000100082720("SCCameraBIPAScopedServicesCleanupRelayServiceProvider",0x35,2);
  func_0x0001000285a8(0x112dc6920,&UNK_10d986c50);
  puVar3 = &UNK_1104037c8;
  func_0x000107c613fc(&UNK_1104037c8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(code **)(puVar3 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  pcVar6 = FUN_101757dc0;
  func_0x0001000823a8(FUN_101757dc0,puVar3);
  func_0x000100082720("SCCameraBIPAScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112dc6898,&UNK_10d986a00);
  func_0x000107c6157c(pcVar6);
  uVar7 = 0x101757dcc;
  func_0x0001000823a8(0x101757dcc,pcVar6);
  func_0x000100082720("SCCameraBIPAScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112dc6888,&UNK_10d9869f0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x101757dd4;
  func_0x0001000823a8(0x101757dd4,uVar7);
  func_0x000100082720("SCCameraBIPAScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1104037f0;
  func_0x000107c613fc(&UNK_1104037f0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(code **)(puVar3 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x101757ddc;
  func_0x0001000823a8(0x101757ddc,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCCameraBIPAScopeEntryPointProvider",0x23,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 101757d84; end: 101757dbf;  */

void FUN_101757d84(void)

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



/* Entry: 101757dc0; end: 101757de3;  */

void FUN_101757dc0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1017584d0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCCameraBIPAScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101757de4; end: 1017582d7;  */

void FUN_101757de4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_101758420();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a7b18;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0x49426172656d6163;
  func_0x000107c5fadc(0x49426172656d6163,0xef65706f63534150);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efbaa40);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
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



/* Entry: 1017582d8; end: 101758313;  */

void FUN_1017582d8(void)

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



/* Entry: 101758314; end: 10175831b;  */

undefined8 FUN_101758314(void)

{
  return 0x1b;
}



/* Entry: 10175831c; end: 10175839f;  */

void FUN_10175831c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101758460,param_2,FUN_101758464,param_2,FUN_10175848c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1017583a0; end: 1017583ef;  */

undefined8 FUN_1017583a0(void)

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



/* Entry: 1017583f0; end: 10175841f;  */

void FUN_1017583f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110403808;
  return;
}



/* Entry: 101758420; end: 10175843f;  */

void FUN_101758420(void)

{
  func_0x000107c61168(&PTR_PTR_112dc6990);
  return;
}



/* Entry: 101758440; end: 101758463;  */

undefined1  [16] FUN_101758440(void)

{
  return ZEXT816(0x110403848);
}



/* Entry: 101758464; end: 10175848b;  */

void FUN_101758464(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10175848c; end: 101758493;  */

undefined8 FUN_10175848c(void)

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



/* Entry: 101758494; end: 1017584cf;  */

void FUN_101758494(undefined8 *param_1,undefined8 param_2)

{
  FUN_1017584d0();
  func_0x0001000a7f38("SCCameraBIPAScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1017584d0; end: 1017586bb;  */

void FUN_1017584d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110712018;
  ppuVar4 = &PTR_DAT_11300bec8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110403898;
  func_0x000107c613fc(&UNK_110403898,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112dc6a08;
  func_0x0001000285a8(0x112dc6a08,&UNK_10d986da8);
  func_0x0001000a6ee8(&UNK_110403aa8,"CameraBIPAScopeGraphBridgeScopeInitializationPluginKey",0x36,2
                      ,FUN_1017586bc,puVar2,uVar3,&UNK_110403aa8,&PTR_DAT_112dc6a98);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110403848,
                      "SCCameraBIPAFeatureEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_101758770,param_3,uVar3,&UNK_110403848,&PTR_DAT_112dc6928);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104038c0;
  func_0x000107c613fc(&UNK_1104038c0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110403668,"SCCameraBIPAScopedServicesScopeInitializationPluginKey",0x36,2
                      ,FUN_101758820,puVar2,uVar3,&UNK_110403668,&PTR_DAT_112dc68a0);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112dc6a10;
  func_0x0001000285a8(0x112dc6a10,&UNK_10d986db0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1017586bc; end: 1017586fb;  */

void FUN_1017586bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101758df8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("CameraBIPAScopeGraphBridgeScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1017586fc; end: 10175876f;  */

void FUN_1017586fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10175885c;
  func_0x0001000823a8(0x10175885c,param_3);
  func_0x000100082720("SCCameraBIPAFeatureEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 101758770; end: 101758777;  */

void FUN_101758770(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10175885c;
  func_0x0001000823a8();
  func_0x000100082720("SCCameraBIPAFeatureEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 101758778; end: 10175881f;  */

void FUN_101758778(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104038e8;
  func_0x000107c613fc(&UNK_1104038e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101758854;
  func_0x0001000823a8(FUN_101758854,puVar1);
  func_0x000100082720("SCCameraBIPAScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101758820; end: 101758827;  */

void FUN_101758820(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104038e8;
  func_0x000107c613fc(&UNK_1104038e8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101758854;
  func_0x0001000823a8(FUN_101758854,puVar3);
  func_0x000100082720("SCCameraBIPAScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101758828; end: 101758853;  */

void FUN_101758828(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101758854; end: 101758863;  */

void FUN_101758854(undefined8 *param_1)

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
  puVar1 = &UNK_1104036f0;
  func_0x000107c613fc(&UNK_1104036f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101757a18;
  func_0x00010058fa64(FUN_101757a18,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101758864; end: 1017588eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101758864(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101758c24();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112dc6a18) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112dc6a20) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1017588ec);
  (*pcVar1)();
}



/* Entry: 1017588ec; end: 10175894b; -[_TtC26CameraBIPAScopeGraphBridge41CameraBIPAScopeGraphBridgeSaberEntryPoint init] */

void FUN_1017588ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraBIPAScopeGraphBridge.CameraBIPAScopeGraphBridgeSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101758918);
  (*pcVar1)();
}



/* Entry: 10175894c; end: 101758983; -[_TtC26CameraBIPAScopeGraphBridge41CameraBIPAScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101758968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010175896c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175894c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc6a18));
  return;
}



/* Entry: 101758984; end: 1017589ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101758984(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112dc6a20),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112dc6a18));
  return;
}



/* Entry: 1017589ac; end: 1017589cb;  */

void FUN_1017589ac(void)

{
  func_0x000107c61168(&PTR_PTR_1127e8f70);
  return;
}



/* Entry: 1017589cc; end: 101758a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1017589cc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc6a50) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112dc6a58);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101758a54);
  (*pcVar2)();
}



/* Entry: 101758a54; end: 101758b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101758a54(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dc6a50);
  *(undefined **)(unaff_x20 + _DAT_112dc6a50) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dc6a58);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112dc6a58))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110403a08;
  func_0x000107c613fc(&UNK_110403a08,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101758b40,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101758b3c; end: 101758b47;  */

void FUN_101758b3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101758b48; end: 101758ba7; -[_TtC26CameraBIPAScopeGraphBridge41SCCameraBIPAScopedServicesSaberEntryPoint init] */

void FUN_101758b48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraBIPAScopeGraphBridge.SCCameraBIPAScopedServicesSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101758b74);
  (*pcVar1)();
}



/* Entry: 101758ba8; end: 101758bdf; -[_TtC26CameraBIPAScopeGraphBridge41SCCameraBIPAScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101758ba8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dc6a58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc6a50));
  return;
}



/* Entry: 101758be0; end: 101758be3;  */

void FUN_101758be0(void)

{
  return;
}



/* Entry: 101758be4; end: 101758c03;  */

void FUN_101758be4(void)

{
  FUN_101758a54();
  return;
}



/* Entry: 101758c04; end: 101758c23;  */

void FUN_101758c04(void)

{
  func_0x000107c61168(&PTR_PTR_1127e9038);
  return;
}



/* Entry: 101758c24; end: 101758cf3;  */

undefined8 FUN_101758c24(void)

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
  
  func_0x000107c61428(0x112dc6a88,&uStack_40,0x20,0);
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
    FUN_101758cf4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101758cf4; end: 101758d13;  */

void FUN_101758cf4(void)

{
  func_0x000107c61168(&PTR_PTR_1127e9100);
  return;
}



/* Entry: 101758d14; end: 101758d7f;  */

void FUN_101758d14(void)

{
  func_0x0001000285a8(0x112dc6a90,&UNK_10d986e68);
  func_0x0001000823a8(0x101758d54,0);
  return;
}



/* Entry: 101758d80; end: 101758dbb; -[_TtC26CameraBIPAScopeGraphBridge34CameraBIPAScopeGraphBridgeServices init] */

void FUN_101758d80(undefined8 param_1)

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



/* Entry: 101758dbc; end: 101758def;  */

void FUN_101758dbc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101758df0; end: 101758df7;  */

undefined8 FUN_101758df0(void)

{
  return 0x1b;
}



/* Entry: 101758df8; end: 101758f6f;  */

void FUN_101758df8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110403a50;
  func_0x000107c613fc(&UNK_110403a50,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101758f70,puVar1);
  return;
}



/* Entry: 101758f70; end: 101758f77;  */

void FUN_101758f70(undefined8 *param_1)

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
  func_0x000107c61428(0x112dc6a88,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112dc6a88,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110403ae8;
  func_0x000107c613fc(&UNK_110403ae8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101759024;
  func_0x00010058fa64(0x101759024,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101758f78; end: 101758fd3;  */

void FUN_101758f78(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112dc6a88,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112dc6a88,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101758fd4; end: 10175902b;  */

undefined ** FUN_101758fd4(void)

{
  return &PTR_DAT_11300bec8;
}



/* Entry: 10175902c; end: 101759073; -[SCCameraBIPAScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175902c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dc6ae8;
  func_0x000107c61428(param_1 + _DAT_112dc6ae8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101759074; end: 1017590cb; -[SCCameraBIPAScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101759074(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dc6ae8;
  func_0x000107c61428(param_1 + _DAT_112dc6ae8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1017590cc; end: 101759113; -[SCCameraBIPAScopeGraphBridgeSaberEntryPoint cameraBIPAScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017590cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dc6af0;
  func_0x000107c61428(param_1 + _DAT_112dc6af0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101759114; end: 101759177; -[SCCameraBIPAScopeGraphBridgeSaberEntryPoint setCameraBIPAScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101759114(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dc6af0;
  func_0x000107c61428(param_1 + _DAT_112dc6af0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101759178; end: 1017592ab;  */

/* WARNING: Possible PIC construction at 0x000101759230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010175924c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101759268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101759234) */
/* WARNING: Removing unreachable block (ram,0x000101759250) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101759178(void)

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
  func_0x000107c3f064();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1017589ac();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101758c24();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1017592ac);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112dc6a18) = lVar5;
    *(long *)(lVar4 + _DAT_112dc6a20) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1017592ac; end: 1017592d3; -[SCCameraBIPAScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1017592ac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101759178();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1017592d4; end: 101759317; -[SCCameraBIPAScopeGraphBridgeSaberEntryPoint end] */

void FUN_1017592d4(undefined8 param_1)

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



/* Entry: 101759318; end: 1017594af;  */

void FUN_101759318(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef1045360)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010efbaca0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CameraBIPAScopeGraphBridge/SCCameraBIPAScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4c,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1017594b0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52fc4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1017594b0; end: 10175955b; -[SCCameraBIPAScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1017594b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101759318(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10175955c; end: 1017595c7; -[SCCameraBIPAScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10175955c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dc6ae8,0);
  *(undefined8 *)(param_1 + _DAT_112dc6af0) = 0;
  *(undefined8 *)(param_1 + _DAT_112dc6af8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1017595c8; end: 1017595fb;  */

void FUN_1017595c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1017595fc; end: 101759643; -[SCCameraBIPAScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101759628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010175962c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017595fc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dc6ae8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc6af0));
  return;
}



/* Entry: 101759644; end: 101759663;  */

void FUN_101759644(void)

{
  func_0x000107c61168(&PTR_PTR_1127e91b0);
  return;
}



/* Entry: 101759664; end: 1017596ab; -[SCSCCameraBIPAScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101759664(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dc6b28;
  func_0x000107c61428(param_1 + _DAT_112dc6b28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1017596ac; end: 101759703; -[SCSCCameraBIPAScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017596ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dc6b28;
  func_0x000107c61428(param_1 + _DAT_112dc6b28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101759704; end: 1017597db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101759704(undefined8 param_1,long param_2)

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
    FUN_101758c04();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112dc6a50) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1017597dc);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112dc6a58);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dc6b30);
    *(long **)(unaff_x20 + _DAT_112dc6b30) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1017597dc; end: 101759803; -[SCSCCameraBIPAScopedServicesSaberEntryPoint begin] */

void FUN_1017597dc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101759704();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101759804; end: 10175997b;  */

/* WARNING: Possible PIC construction at 0x00010175986c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101759904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101759870) */
/* WARNING: Removing unreachable block (ram,0x000101759908) */
/* WARNING: Removing unreachable block (ram,0x000101759920) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101759804(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112dc6b30);
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



/* Entry: 10175997c; end: 101759983;  */

void FUN_10175997c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101759984; end: 1017599b7; -[SCSCCameraBIPAScopedServicesSaberEntryPoint end] */

void FUN_101759984(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101759804();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1017599b8; end: 101759ad7;  */

void FUN_1017599b8(long param_1,long param_2,long param_3)

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
                        "CameraBIPAScopeGraphBridge/SCSCCameraBIPAScopedServicesSaberEntryPoint.swift"
                        ,0x4c,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101759ad8);
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



/* Entry: 101759ad8; end: 101759b83; -[SCSCCameraBIPAScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101759ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1017599b8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101759b84; end: 101759be3; -[SCSCCameraBIPAScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101759b84(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dc6b28,0);
  *(undefined8 *)(param_1 + _DAT_112dc6b30) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101759be4; end: 101759c17;  */

void FUN_101759be4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101759c18; end: 101759c4f; -[SCSCCameraBIPAScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101759c18(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dc6b28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc6b30));
  return;
}



/* Entry: 101759c50; end: 101759c6f;  */

void FUN_101759c50(void)

{
  func_0x000107c61168(&PTR_PTR_1127e9278);
  return;
}



/* Entry: 101759c70; end: 101759c83;  */

bool FUN_101759c70(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101759c84; end: 101759d2f;  */

void FUN_101759c84(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101759d30; end: 101759d6f;  */

undefined1  [16] FUN_101759d30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6974617269707865;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x61746164;
  }
  uVar2 = 0xee00657461446e6f;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe400000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 101759d70; end: 101759e4f;  */

void FUN_101759d70(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x61746164 || param_3 != -0x1c00000000000000) {
    uVar1 = 0;
    func_0x000107c605b8(0x61746164,0xe400000000000000,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x6974617269707865;
      if ((param_2 == 0x6974617269707865) && (param_3 == -0x11ff9a8b9ebb9191)) {
        func_0x000107c6142c(0xee00657461446e6f);
        uVar2 = 1;
      }
      else {
        func_0x000107c605b8(0x6974617269707865,0xee00657461446e6f,param_2,param_3,0);
        func_0x000107c6142c(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_101759dd0;
    }
  }
  func_0x000107c6142c(param_3);
  uVar2 = 0;
LAB_101759dd0:
  *param_1 = uVar2;
  return;
}



/* Entry: 101759e50; end: 101759e67;  */

undefined1  [16] FUN_101759e50(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101759e68; end: 101759eb7;  */

void FUN_101759e68(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10175c864();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101759eb8; end: 10175a01f;  */

void FUN_101759eb8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [14];
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x112dc6d08;
  func_0x0001000285a8(0x112dc6d08,&UNK_10d9871b0);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar5);
  FUN_10175c864();
  func_0x000107c606ec(auStack_60 + -extraout_x8,&UNK_110403d60,&UNK_110403d60,param_1,uVar5,uVar4);
  uStack_51 = 0;
  func_0x000101480d6c();
  func_0x000107c60554();
  if (unaff_x21 == 0) {
    lVar3 = 0;
    FUN_10175c268();
    iVar1 = *(int *)(lVar3 + 0x14);
    uStack_52 = 1;
    uVar4 = 0;
    func_0x000107c5eea4(0);
    uVar5 = 0x112d5e200;
    FUN_10175c8a4(0x112d5e200,0xff,PTR___s10Foundation4DateVMa_110350bb8,
                  PTR___s10Foundation4DateVSEAAMc_110350bc8);
    func_0x000107c60554(unaff_x20 + iVar1,&uStack_52,lVar2,uVar4,uVar5);
  }
  (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,lVar2);
  return;
}



/* Entry: 10175a020; end: 10175a293;  */

/* WARNING: Removing unreachable block (ram,0x00010175a244) */
/* WARNING: Removing unreachable block (ram,0x00010175a194) */

void FUN_10175a020(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar8;
  long unaff_x21;
  long lVar9;
  long lVar10;
  long alStack_c0 [5];
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  lVar4 = 0;
  uStack_98 = param_1;
  func_0x000107c5eea4();
  lStack_88 = *(long *)(lVar4 + -8);
  lStack_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  lVar9 = (long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112dc6d18;
  lStack_90 = lVar9;
  func_0x0001000285a8(0x112dc6d18,&UNK_10d9871b8);
  lVar10 = *(long *)(lVar4 + -8);
  lStack_78 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_00;
  lVar5 = 0;
  FUN_10175c268();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar8 = (undefined8 *)(lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar7);
  FUN_10175c864();
  puVar6 = &UNK_110403d60;
  func_0x000107c606e0(lVar9,&UNK_110403d60,&UNK_110403d60,lVar4,uVar7,uVar1);
  lVar3 = lStack_80;
  lVar2 = lStack_88;
  lVar4 = lStack_90;
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    alStack_c0[3] = lVar5;
    alStack_c0[4] = param_2;
    func_0x0001006e2f9c();
    lVar5 = lStack_78;
    func_0x000107c60508(&uStack_70,PTR___s10Foundation4DataVN_110350ae0,&uStack_51,lStack_78,
                        PTR___s10Foundation4DataVN_110350ae0,puVar6);
    alStack_c0[1] = uStack_68;
    *puVar8 = CONCAT71(uStack_6f,uStack_70);
    puVar8[1] = uStack_68;
    uStack_70 = 1;
    uVar7 = 0x112d5e180;
    FUN_10175c8a4(0x112d5e180,0xff,PTR___s10Foundation4DateVMa_110350bb8,
                  PTR___s10Foundation4DateVSeAAMc_110350be8);
    func_0x000107c60508(lVar4,lVar3,&uStack_70,lVar5,lVar3,uVar7);
    (**(code **)(lVar10 + 8))(lVar9,lVar5);
    (**(code **)(lVar2 + 0x20))((long)puVar8 + (long)*(int *)(alStack_c0[3] + 0x14),lVar4,lVar3);
    func_0x00010175c8e4(puVar8,uStack_98);
    func_0x0001000834e4(alStack_c0[4]);
    func_0x00010175c2e0(puVar8);
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 10175a294; end: 10175a2bb;  */

void FUN_10175a294(void)

{
  FUN_10175a020();
  return;
}



/* Entry: 10175a2bc; end: 10175a32b;  */

/* WARNING: Possible PIC construction at 0x00010175a310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010175a314) */

void FUN_10175a2bc(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_10175bd10();
  lVar2 = lVar1;
  func_0x000107c613fc();
  func_0x000107c61474();
  *(long *)(lVar2 + 0x70) = param_2;
  *(undefined8 *)(lVar2 + 0x78) = param_3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110403c30;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10175a32c; end: 10175a333;  */

/* WARNING: Possible PIC construction at 0x00010175a310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010175a314) */

void FUN_10175a32c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = lVar1;
  FUN_10175bd10();
  lVar4 = lVar3;
  func_0x000107c613fc();
  func_0x000107c61474();
  *(long *)(lVar4 + 0x70) = lVar1;
  *(undefined8 *)(lVar4 + 0x78) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_110403c30;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 10175a334; end: 10175a37b;  */

long FUN_10175a334(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c61474();
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  return unaff_x20;
}



/* Entry: 10175a37c; end: 10175a397;  */

void FUN_10175a37c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175a398);
  return;
}



/* Entry: 10175a398; end: 10175a427;  */

void FUN_10175a398(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10175a428;
                    /* WARNING: Could not recover jumptable at 0x00010175a424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58),uVar2,lVar3);
  return;
}



/* Entry: 10175a428; end: 10175a4ff;  */

void FUN_10175a428(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x38) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x40) = param_1;
  *(undefined8 *)(lVar2 + 0x48) = param_2;
  uVar1 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x70) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10175a47c,uVar1,0);
  return;
}



/* Entry: 10175a500; end: 10175a523;  */

void FUN_10175a500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x180) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x178) = param_1;
  *(undefined8 *)(unaff_x22 + 0x168) = param_4;
  *(undefined8 *)(unaff_x22 + 0x170) = param_5;
  *(undefined8 *)(unaff_x22 + 0x158) = param_2;
  *(undefined8 *)(unaff_x22 + 0x160) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175a524);
  return;
}



/* Entry: 10175a524; end: 10175a65f;  */

void FUN_10175a524(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar7 = 0x112dc6b68;
  FUN_10175c8a4(0x112dc6b68,param_2,FUN_10175bd10,&UNK_10d987050);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x148) = uVar10;
  iVar5 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  lVar9 = *(long *)(unaff_x22 + 0x180);
  if (iVar5 != 0) {
    plVar6 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x188) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10175a660;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )();
    return;
  }
  if (lVar9 == 0) {
    lVar9 = 0;
    uVar7 = 0;
  }
  else {
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 400) = lVar9;
  *(undefined8 *)(unaff_x22 + 0x198) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175a6a8,lVar9);
  return;
}



/* Entry: 10175a660; end: 10175a6a7;  */

void FUN_10175a660(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x188));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175a998,*(undefined8 *)(lVar1 + 0x180),0);
  return;
}



/* Entry: 10175a6a8; end: 10175a6fb;  */

void FUN_10175a6a8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  func_0x000107c615ac(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  *(long *)(unaff_x22 + 0x150) = unaff_x22 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175a6fc,uVar1,0);
  return;
}



/* Entry: 10175a6fc; end: 10175a917;  */

void FUN_10175a6fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  code *pcVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
  lVar6 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar8 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
  uVar5 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  lVar6 = 0;
  func_0x000107c5fd0c();
  pcVar10 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  (*pcVar10)(uVar5,1,1,lVar6);
  puVar7 = &UNK_110403bf0;
  func_0x000107c613fc(&UNK_110403bf0,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(undefined8 *)(puVar7 + 0x20) = uVar11;
  *(undefined8 *)(puVar7 + 0x28) = uVar2;
  *(undefined8 *)(puVar7 + 0x30) = uVar4;
  *(undefined8 *)(puVar7 + 0x38) = uVar1;
  *(undefined8 *)(puVar7 + 0x40) = uVar3;
  *(undefined8 *)(puVar7 + 0x48) = uVar12;
  func_0x000107c6157c(uVar11);
  func_0x00010006c00c(uVar2,uVar4);
  func_0x000107c61434(uVar3);
  FUN_10175ad14(uVar5,&UNK_10d987030,puVar7);
  FUN_10175c2a0(uVar5,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar5);
  uVar8 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar8);
  (*pcVar10)();
  puVar7 = &UNK_110403c18;
  func_0x000107c613fc(&UNK_110403c18,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(undefined8 *)(puVar7 + 0x20) = uVar11;
  *(undefined8 *)(puVar7 + 0x28) = uVar2;
  *(undefined8 *)(puVar7 + 0x30) = uVar4;
  *(undefined8 *)(puVar7 + 0x38) = uVar1;
  *(undefined8 *)(puVar7 + 0x40) = uVar3;
  *(undefined8 *)(puVar7 + 0x48) = uVar12;
  func_0x000107c6157c(uVar11);
  func_0x00010006c00c(uVar2,uVar4);
  func_0x000107c61434(uVar3);
  FUN_10175ad14(uVar8,&UNK_10d987040,puVar7);
  FUN_10175c2a0(uVar8,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar8);
  plVar9 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1a0) = plVar9;
  func_0x0001000285a8(0x112dc6b70,&UNK_10da1df30);
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_10175a918;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 10175a918; end: 10175a997;  */

void FUN_10175a918(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10175a95c,*(undefined8 *)(lVar1 + 400),*(undefined8 *)(lVar1 + 0x198));
  return;
}



/* Entry: 10175a998; end: 10175a99f;  */

void FUN_10175a998(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010175a99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10175a9a0; end: 10175aa13;  */

void FUN_10175a9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_8;
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175aa14,param_4,0);
  return;
}



/* Entry: 10175aa14; end: 10175abab;  */

void FUN_10175aa14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar6 = 0;
  func_0x000107c5fd0c();
  pcVar8 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  (*pcVar8)(uVar9,1,1,lVar6);
  puVar7 = &UNK_110403ca0;
  func_0x000107c613fc(&UNK_110403ca0,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(undefined8 *)(puVar7 + 0x20) = uVar5;
  *(undefined8 *)(puVar7 + 0x28) = uVar2;
  *(undefined8 *)(puVar7 + 0x30) = uVar4;
  *(undefined8 *)(puVar7 + 0x38) = uVar1;
  *(undefined8 *)(puVar7 + 0x40) = uVar3;
  *(undefined8 *)(puVar7 + 0x48) = uVar10;
  func_0x000107c6157c(uVar5);
  func_0x00010006c00c(uVar2,uVar4);
  func_0x000107c61434(uVar3);
  FUN_10175ad14(uVar9,&UNK_10d987128,puVar7);
  FUN_10175c2a0(uVar9,0x112d453c8,&UNK_10d90ac60);
  (*pcVar8)(uVar9,1,1,lVar6);
  puVar7 = &UNK_110403cc8;
  func_0x000107c613fc(&UNK_110403cc8,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(undefined8 *)(puVar7 + 0x20) = uVar5;
  *(undefined8 *)(puVar7 + 0x28) = uVar2;
  *(undefined8 *)(puVar7 + 0x30) = uVar4;
  *(undefined8 *)(puVar7 + 0x38) = uVar1;
  *(undefined8 *)(puVar7 + 0x40) = uVar3;
  *(undefined8 *)(puVar7 + 0x48) = uVar10;
  func_0x000107c6157c(uVar5);
  func_0x00010006c00c(uVar2,uVar4);
  func_0x000107c61434(uVar3);
  FUN_10175ad14(uVar9,&UNK_10d987130,puVar7);
  FUN_10175c2a0(uVar9,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010175aba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10175abac; end: 10175abcf;  */

void FUN_10175abac(undefined8 param_1)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x40) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x38) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10175abd0,in_x3,0);
  return;
}


