/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021f3ab4; end: 1021f3bd3;  */

void FUN_1021f3ab4(long param_1,long param_2,long param_3)

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
                        "ManageContactsSettingsScopeGraphBridge/SCSCManageContactsSettingsScopedServicesSaberEntryPoint.swift"
                        ,100,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021f3bd4);
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



/* Entry: 1021f3bd4; end: 1021f3c7f; -[SCSCManageContactsSettingsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1021f3bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1021f3ab4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1021f3c80; end: 1021f3cdf; -[SCSCManageContactsSettingsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f3c80(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e63d60,0);
  *(undefined8 *)(param_1 + _DAT_112e63d68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021f3ce0; end: 1021f3d13;  */

void FUN_1021f3ce0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021f3d14; end: 1021f3d4b; -[SCSCManageContactsSettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f3d14(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e63d60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e63d68));
  return;
}



/* Entry: 1021f3d4c; end: 1021f3d6b;  */

void FUN_1021f3d4c(void)

{
  func_0x000107c61168(&PTR_PTR_1128297f8);
  return;
}



/* Entry: 1021f3d6c; end: 1021f3dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f3d6c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1021f4160();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e63da0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1021f3dd8; end: 1021f3e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f3dd8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e63da0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021f3e44; end: 1021f3ea3; -[_TtC49WebBrowserLinkHistoryScopedFactoryServiceProvider35WebBrowserLinkHistoryScopedServices init] */

void FUN_1021f3e44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowserLinkHistoryScopedFactoryServiceProvider.WebBrowserLinkHistoryScopedServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021f3e70);
  (*pcVar1)();
}



/* Entry: 1021f3ea4; end: 1021f3eb3; -[_TtC49WebBrowserLinkHistoryScopedFactoryServiceProvider35WebBrowserLinkHistoryScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f3ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e63da0));
  return;
}



/* Entry: 1021f3eb4; end: 1021f3f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f3eb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104e19c8;
  func_0x000107c613fc(&UNK_1104e19c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1021f41f8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1021f3f20; end: 1021f3fbb;  */

void FUN_1021f3f20(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104e18d8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104e18d8;
  return;
}



/* Entry: 1021f3fbc; end: 1021f3ff3;  */

void FUN_1021f3fbc(long *param_1)

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



/* Entry: 1021f3ff4; end: 1021f3ffb;  */

undefined8 FUN_1021f3ff4(void)

{
  return 0x1b;
}



/* Entry: 1021f3ffc; end: 1021f412f;  */

void FUN_1021f3ffc(undefined8 *param_1)

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
  puVar1 = &UNK_1104e19f0;
  func_0x000107c613fc(&UNK_1104e19f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1021f41d0;
  func_0x00010058fa64(FUN_1021f41d0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1021f4130; end: 1021f415f;  */

undefined ** FUN_1021f4130(void)

{
  return &PTR_DAT_112e641f0;
}



/* Entry: 1021f4160; end: 1021f417f;  */

void FUN_1021f4160(void)

{
  func_0x000107c61168(&PTR_PTR_1128298b8);
  return;
}



/* Entry: 1021f4180; end: 1021f41cf;  */

undefined1  [16] FUN_1021f4180(void)

{
  return ZEXT816(0x1104e1928);
}



/* Entry: 1021f41d0; end: 1021f41f7;  */

void FUN_1021f41d0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1021f41f8; end: 1021f41fb;  */

void FUN_1021f41f8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1021f41fc; end: 1021f4323;  */

void FUN_1021f41fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e63e08,&UNK_10da6dd40);
  puVar1 = &UNK_1104e1a30;
  func_0x000107c613fc(&UNK_1104e1a30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1021f4324,puVar1);
  return;
}



/* Entry: 1021f4324; end: 1021f433b;  */

/* WARNING: Possible PIC construction at 0x0001021f430c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021f4310) */

void FUN_1021f4324(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1104e1a78;
  func_0x000107c613fc(&UNK_1104e1a78,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112e63e10;
  func_0x0001000285a8(0x112e63e10,&UNK_10da6dd88);
  func_0x000107c613fc();
  pcVar4 = FUN_1021f46b0;
  func_0x0001000841fc(FUN_1021f46b0,puVar2,uVar3);
  func_0x000100084214(&UNK_10da6dd50,0x31,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1021f433c; end: 1021f46af;  */

void FUN_1021f433c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

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
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  uVar11 = *param_2;
  func_0x0001000285a8(0x112e63e18,&UNK_10da6dd90);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1021f5614();
  func_0x000100082720("WebBrowserScopeExposerSubjectServiceProvider",0x2c,2);
  puVar3 = puVar2;
  FUN_1021f56a0();
  func_0x000100082720("WebBrowserScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1021f3fbc;
  func_0x0001000823a8(FUN_1021f3fbc,0);
  func_0x000100082720("WebBrowserLinkHistoryScopedServicesCleanupRelayServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e63e20,&UNK_10da6dda0);
  puVar5 = &UNK_1104e1aa0;
  func_0x000107c613fc(&UNK_1104e1aa0,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 **)(puVar5 + 0x28) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(puVar3);
  uVar11 = 0x1021f46b8;
  func_0x0001000823a8(0x1021f46b8,puVar5);
  func_0x000100082720("WebBrowserLinkHistoryEntryPointWrapperServiceProvider",0x35,2);
  puVar6 = puVar2;
  FUN_1021f54c8();
  func_0x000100082720("WebBrowserLinkHistoryScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e63e28,&UNK_10da6dda8);
  puVar5 = &UNK_1104e1ac8;
  func_0x000107c613fc(&UNK_1104e1ac8,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar11;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar4);
  pcVar7 = FUN_1021f4700;
  func_0x0001000823a8(FUN_1021f4700,puVar5);
  func_0x000100082720("WebBrowserLinkHistoryScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e63da8,&UNK_10da6db10);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x1021f470c;
  func_0x0001000823a8(0x1021f470c,pcVar7);
  func_0x000100082720("WebBrowserLinkHistoryScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e63d98,&UNK_10da6db00);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1021f4714;
  func_0x0001000823a8(0x1021f4714,uVar8);
  func_0x000100082720("WebBrowserLinkHistoryScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1104e1af0;
  func_0x000107c613fc(&UNK_1104e1af0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_1021f4748;
  func_0x0001000823a8(FUN_1021f4748,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("WebBrowserLinkHistoryScopeEntryPointProvider",0x2c,2);
  *param_1 = pcVar10;
  return;
}



/* Entry: 1021f46b0; end: 1021f46c3;  */

void FUN_1021f46b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112e63e18,&UNK_10da6dd90);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1021f5614();
  func_0x000100082720("WebBrowserScopeExposerSubjectServiceProvider",0x2c,2);
  puVar3 = puVar2;
  FUN_1021f56a0();
  func_0x000100082720("WebBrowserScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1021f3fbc;
  func_0x0001000823a8(FUN_1021f3fbc,0);
  func_0x000100082720("WebBrowserLinkHistoryScopedServicesCleanupRelayServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e63e20,&UNK_10da6dda0);
  puVar5 = &UNK_1104e1aa0;
  func_0x000107c613fc(&UNK_1104e1aa0,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + 0x20) = uVar9;
  *(undefined8 **)(puVar5 + 0x28) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(puVar3);
  uVar6 = 0x1021f46b8;
  func_0x0001000823a8(0x1021f46b8,puVar5);
  func_0x000100082720("WebBrowserLinkHistoryEntryPointWrapperServiceProvider",0x35,2);
  puVar7 = puVar2;
  FUN_1021f54c8();
  func_0x000100082720("WebBrowserLinkHistoryScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e63e28,&UNK_10da6dda8);
  puVar5 = &UNK_1104e1ac8;
  func_0x000107c613fc(&UNK_1104e1ac8,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar6;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar7;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1021f4700;
  func_0x0001000823a8(FUN_1021f4700,puVar5);
  func_0x000100082720("WebBrowserLinkHistoryScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e63da8,&UNK_10da6db10);
  func_0x000107c6157c(pcVar8);
  uVar9 = 0x1021f470c;
  func_0x0001000823a8(0x1021f470c,pcVar8);
  func_0x000100082720("WebBrowserLinkHistoryScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e63d98,&UNK_10da6db00);
  func_0x000107c6157c(uVar9);
  uVar11 = 0x1021f4714;
  func_0x0001000823a8(0x1021f4714,uVar9);
  func_0x000100082720("WebBrowserLinkHistoryScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1104e1af0;
  func_0x000107c613fc(&UNK_1104e1af0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar11;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_1021f4748;
  func_0x0001000823a8(FUN_1021f4748,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("WebBrowserLinkHistoryScopeEntryPointProvider",0x2c,2);
  *param_1 = pcVar10;
  return;
}



/* Entry: 1021f46c4; end: 1021f46ff;  */

void FUN_1021f46c4(void)

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



/* Entry: 1021f4700; end: 1021f471b;  */

void FUN_1021f4700(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1021f4c30(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("WebBrowserLinkHistoryScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 1021f471c; end: 1021f4747;  */

void FUN_1021f471c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021f4748; end: 1021f474f;  */

void FUN_1021f4748(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104e18d8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104e18d8;
  return;
}



/* Entry: 1021f4750; end: 1021f4a3f;  */

void FUN_1021f4750(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_1021f4b80();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_60;
  *(undefined8 *)(param_2 + 0x28) = uStack_68;
  func_0x0001000285a8(0x112e63e30,&UNK_10db83e80);
  func_0x000107c610f8();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c6157c(uStack_70);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(param_2 + 0x18) = puVar4;
  FUN_1021f6bd4(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar4);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar3;
  FUN_1021f67b0();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  func_0x000107c6157c();
  func_0x0001021f6b08();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uStack_70);
  func_0x000107c61574(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 1021f4a40; end: 1021f4a7b;  */

void FUN_1021f4a40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021f4a7c; end: 1021f4a83;  */

undefined8 FUN_1021f4a7c(void)

{
  return 0x1b;
}



/* Entry: 1021f4a84; end: 1021f4b07;  */

void FUN_1021f4a84(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1021f4bc0,param_2,FUN_1021f4bc4,param_2,FUN_1021f4bec,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1021f4b08; end: 1021f4b4f;  */

undefined8 FUN_1021f4b08(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1021f6b34();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1021f4b50; end: 1021f4b7f;  */

undefined ** FUN_1021f4b50(void)

{
  return &PTR_DAT_112e641f0;
}



/* Entry: 1021f4b80; end: 1021f4b9f;  */

void FUN_1021f4b80(void)

{
  func_0x000107c61168(&PTR_PTR_112e63ea0);
  return;
}



/* Entry: 1021f4ba0; end: 1021f4bc3;  */

undefined1  [16] FUN_1021f4ba0(void)

{
  return ZEXT816(0x1104e1b48);
}



/* Entry: 1021f4bc4; end: 1021f4beb;  */

void FUN_1021f4bc4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1021f4bec; end: 1021f4bf3;  */

undefined8 FUN_1021f4bec(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1021f6b34();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1021f4bf4; end: 1021f4c2f;  */

void FUN_1021f4bf4(undefined8 *param_1,undefined8 param_2)

{
  FUN_1021f4c30();
  func_0x0001000a7f38("WebBrowserLinkHistoryScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = param_2;
  return;
}



/* Entry: 1021f4c30; end: 1021f4e1b;  */

void FUN_1021f4c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1104e2120;
  ppuVar4 = &PTR_DAT_112e641f0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e63f18;
  func_0x0001000285a8(0x112e63f18,&UNK_10da6df08);
  func_0x0001000a6ee8(&UNK_1104e1b48,
                      "WebBrowserLinkHistoryEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      FUN_1021f4e90,param_1,uVar2,&UNK_1104e1b48,&PTR_DAT_112e63e38);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104e1b98;
  func_0x000107c613fc(&UNK_1104e1b98,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104e1d90,
                      "WebBrowserLinkHistoryScopeGraphBridgeScopeInitializationPluginKey",0x41,2,
                      FUN_1021f4e98,puVar3,uVar2,&UNK_1104e1d90,&PTR_DAT_112e63fb0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104e1bc0;
  func_0x000107c613fc(&UNK_1104e1bc0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104e1968,
                      "WebBrowserLinkHistoryScopedServicesScopeInitializationPluginKey",0x3f,2,
                      FUN_1021f4f80,puVar3,uVar2,&UNK_1104e1968,&PTR_DAT_112e63db0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e63f20;
  func_0x0001000285a8(0x112e63f20,&UNK_10da6df10);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1021f4e1c; end: 1021f4e8f;  */

void FUN_1021f4e1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1021f4fbc;
  func_0x0001000823a8(0x1021f4fbc,param_3);
  func_0x000100082720("WebBrowserLinkHistoryEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021f4e90; end: 1021f4e97;  */

void FUN_1021f4e90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1021f4fbc;
  func_0x0001000823a8();
  func_0x000100082720("WebBrowserLinkHistoryEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021f4e98; end: 1021f4ed7;  */

void FUN_1021f4e98(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1021f5748(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("WebBrowserLinkHistoryScopeGraphBridgeScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1021f4ed8; end: 1021f4f7f;  */

void FUN_1021f4ed8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104e1be8;
  func_0x000107c613fc(&UNK_1104e1be8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1021f4fb4;
  func_0x0001000823a8(FUN_1021f4fb4,puVar1);
  func_0x000100082720("WebBrowserLinkHistoryScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar2;
  return;
}



/* Entry: 1021f4f80; end: 1021f4f87;  */

void FUN_1021f4f80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104e1be8;
  func_0x000107c613fc(&UNK_1104e1be8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1021f4fb4;
  func_0x0001000823a8(FUN_1021f4fb4,puVar3);
  func_0x000100082720("WebBrowserLinkHistoryScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar4;
  return;
}



/* Entry: 1021f4f88; end: 1021f4fb3;  */

void FUN_1021f4f88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021f4fb4; end: 1021f4fc3;  */

void FUN_1021f4fb4(undefined8 *param_1)

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
  puVar1 = &UNK_1104e19f0;
  func_0x000107c613fc(&UNK_1104e19f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1021f41d0;
  func_0x00010058fa64(FUN_1021f41d0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1021f4fc4; end: 1021f509f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021f4fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1021f53d8();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e63f28) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e63f30) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021f50a0);
  (*pcVar1)();
}



/* Entry: 1021f50a0; end: 1021f50ff; -[_TtC37WebBrowserLinkHistoryScopeGraphBridge52WebBrowserLinkHistoryScopeGraphBridgeSaberEntryPoint init] */

void FUN_1021f50a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowserLinkHistoryScopeGraphBridge.WebBrowserLinkHistoryScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021f50cc);
  (*pcVar1)();
}



/* Entry: 1021f5100; end: 1021f5137; -[_TtC37WebBrowserLinkHistoryScopeGraphBridge52WebBrowserLinkHistoryScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021f511c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021f5120) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f5100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e63f28));
  return;
}



/* Entry: 1021f5138; end: 1021f515f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f5138(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e63f30),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e63f28));
  return;
}



/* Entry: 1021f5160; end: 1021f517f;  */

void FUN_1021f5160(void)

{
  func_0x000107c61168(&PTR_PTR_112829978);
  return;
}



/* Entry: 1021f5180; end: 1021f5207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021f5180(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e63f60) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e63f68);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021f5208);
  (*pcVar2)();
}



/* Entry: 1021f5208; end: 1021f52ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021f5208(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e63f60);
  *(undefined **)(unaff_x20 + _DAT_112e63f60) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e63f68);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e63f68))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104e1cb0;
  func_0x000107c613fc(&UNK_1104e1cb0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1021f52f4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1021f52f0; end: 1021f52fb;  */

void FUN_1021f52f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1021f52fc; end: 1021f535b; -[_TtC37WebBrowserLinkHistoryScopeGraphBridge50WebBrowserLinkHistoryScopedServicesSaberEntryPoint init] */

void FUN_1021f52fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowserLinkHistoryScopeGraphBridge.WebBrowserLinkHistoryScopedServicesSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021f5328);
  (*pcVar1)();
}



/* Entry: 1021f535c; end: 1021f5393; -[_TtC37WebBrowserLinkHistoryScopeGraphBridge50WebBrowserLinkHistoryScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f535c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e63f68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e63f60));
  return;
}



/* Entry: 1021f5394; end: 1021f5397;  */

void FUN_1021f5394(void)

{
  return;
}



/* Entry: 1021f5398; end: 1021f53b7;  */

void FUN_1021f5398(void)

{
  FUN_1021f5208();
  return;
}



/* Entry: 1021f53b8; end: 1021f53d7;  */

void FUN_1021f53b8(void)

{
  func_0x000107c61168(&PTR_PTR_112829a40);
  return;
}



/* Entry: 1021f53d8; end: 1021f54a7;  */

undefined8 FUN_1021f53d8(void)

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
  
  func_0x000107c61428(0x112e63f98,&uStack_40,0x20,0);
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
    FUN_1021f54a8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1021f54a8; end: 1021f54c7;  */

void FUN_1021f54a8(void)

{
  func_0x000107c61168(&PTR_PTR_112829b08);
  return;
}



/* Entry: 1021f54c8; end: 1021f54e3;  */

void FUN_1021f54c8(undefined8 param_1)

{
  func_0x0001000285a8(0x112e63fa0,&UNK_10da6dfe8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1021f5550,param_1);
  return;
}



/* Entry: 1021f54e4; end: 1021f554f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f54e4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1021f54a8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e63fa8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1021f5550; end: 1021f5557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f5550(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1021f54a8();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e63fa8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1021f5558; end: 1021f55a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f5558(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e63fa8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021f55a4; end: 1021f5603; -[_TtC37WebBrowserLinkHistoryScopeGraphBridge45WebBrowserLinkHistoryScopeGraphBridgeServices init] */

void FUN_1021f55a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowserLinkHistoryScopeGraphBridge.WebBrowserLinkHistoryScopeGraphBridgeServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021f55d0);
  (*pcVar1)();
}



/* Entry: 1021f5604; end: 1021f5613; -[_TtC37WebBrowserLinkHistoryScopeGraphBridge45WebBrowserLinkHistoryScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f5604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e63fa8));
  return;
}



/* Entry: 1021f5614; end: 1021f569f;  */

void FUN_1021f5614(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1021f5654,0);
  return;
}



/* Entry: 1021f56a0; end: 1021f56bb;  */

void FUN_1021f56a0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1021f570c,param_1);
  return;
}



/* Entry: 1021f56bc; end: 1021f570b;  */

void FUN_1021f56bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1021f570c; end: 1021f573f;  */

void FUN_1021f570c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1021f5740; end: 1021f5747;  */

undefined8 FUN_1021f5740(void)

{
  return 0x1b;
}



/* Entry: 1021f5748; end: 1021f58bf;  */

void FUN_1021f5748(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104e1cf8;
  func_0x000107c613fc(&UNK_1104e1cf8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1021f58c0,puVar1);
  return;
}



/* Entry: 1021f58c0; end: 1021f58c7;  */

void FUN_1021f58c0(undefined8 *param_1)

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
  func_0x000107c61428(0x112e63f98,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e63f98,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104e1dd0;
  func_0x000107c613fc(&UNK_1104e1dd0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1021f5994;
  func_0x00010058fa64(0x1021f5994,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1021f58c8; end: 1021f5923;  */

void FUN_1021f58c8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e63f98,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e63f98,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1021f5924; end: 1021f599b;  */

undefined ** FUN_1021f5924(void)

{
  return &PTR_DAT_112e641f0;
}



/* Entry: 1021f599c; end: 1021f59e3; -[SCWebBrowserLinkHistoryScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f599c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e64000;
  func_0x000107c61428(param_1 + _DAT_112e64000,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021f59e4; end: 1021f5a3b; -[SCWebBrowserLinkHistoryScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f59e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e64000;
  func_0x000107c61428(param_1 + _DAT_112e64000,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1021f5a3c; end: 1021f5a83; -[SCWebBrowserLinkHistoryScopeGraphBridgeSaberEntryPoint webBrowserScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f5a3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e64008;
  func_0x000107c61428(param_1 + _DAT_112e64008,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1021f5a84; end: 1021f5a8f; -[SCWebBrowserLinkHistoryScopeGraphBridgeSaberEntryPoint setWebBrowserScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f5a84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e64008;
  func_0x000107c61428(param_1 + _DAT_112e64008,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1021f5a90; end: 1021f5ad7; -[SCWebBrowserLinkHistoryScopeGraphBridgeSaberEntryPoint webBrowserLinkHistoryScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f5a90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e64010;
  func_0x000107c61428(param_1 + _DAT_112e64010,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1021f5ad8; end: 1021f5ae3; -[SCWebBrowserLinkHistoryScopeGraphBridgeSaberEntryPoint setWebBrowserLinkHistoryScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f5ad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e64010;
  func_0x000107c61428(param_1 + _DAT_112e64010,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1021f5ae4; end: 1021f5b43;  */

void FUN_1021f5ae4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1021f5b44; end: 1021f5cff;  */

/* WARNING: Possible PIC construction at 0x0001021f5c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021f5c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021f5c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021f5cd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021f5c94) */
/* WARNING: Removing unreachable block (ram,0x0001021f5c84) */
/* WARNING: Removing unreachable block (ram,0x0001021f5c60) */
/* WARNING: Removing unreachable block (ram,0x0001021f5cd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f5b44(void)

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
  func_0x000107c5e1b0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5e1a4();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1021f5160();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1021f53d8();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1021f5d00);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e63f28) = lVar5;
      *(long *)(lVar3 + _DAT_112e63f30) = unaff_x20;
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



/* Entry: 1021f5d00; end: 1021f5d27; -[SCWebBrowserLinkHistoryScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1021f5d00(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021f5b44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021f5d28; end: 1021f5d6b; -[SCWebBrowserLinkHistoryScopeGraphBridgeSaberEntryPoint end] */

void FUN_1021f5d28(undefined8 param_1)

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



/* Entry: 1021f5d6c; end: 1021f5f6f;  */

void FUN_1021f5d6c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10d5a60)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010ef2a5a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffcc) || (param_3 != -0x7ffffffef0f8f3d0)) &&
           (func_0x000107c605b8(0xd000000000000034,0x800000010f070c30,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "WebBrowserLinkHistoryScopeGraphBridge/SCWebBrowserLinkHistoryScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x62,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1021f5f70);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a670();
        goto LAB_1021f5df8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a674();
  }
LAB_1021f5df8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1021f5f70; end: 1021f601b; -[SCWebBrowserLinkHistoryScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1021f5f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1021f5d6c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1021f601c; end: 1021f6093; -[SCWebBrowserLinkHistoryScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f601c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e64000,0);
  *(undefined8 *)(param_1 + _DAT_112e64008) = 0;
  *(undefined8 *)(param_1 + _DAT_112e64010) = 0;
  *(undefined8 *)(param_1 + _DAT_112e64018) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021f6094; end: 1021f60c7;  */

void FUN_1021f6094(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021f60c8; end: 1021f611f; -[SCWebBrowserLinkHistoryScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021f60f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021f60f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f60c8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e64000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e64008));
  return;
}



/* Entry: 1021f6120; end: 1021f613f;  */

void FUN_1021f6120(void)

{
  func_0x000107c61168(&PTR_PTR_112829bc8);
  return;
}



/* Entry: 1021f6140; end: 1021f6187; -[SCWebBrowserLinkHistoryScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f6140(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e64048;
  func_0x000107c61428(param_1 + _DAT_112e64048,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021f6188; end: 1021f61df; -[SCWebBrowserLinkHistoryScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f6188(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e64048;
  func_0x000107c61428(param_1 + _DAT_112e64048,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1021f61e0; end: 1021f62b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f61e0(undefined8 param_1,long param_2)

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
    FUN_1021f53b8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e63f60) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1021f62b8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e63f68);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e64050);
    *(long **)(unaff_x20 + _DAT_112e64050) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1021f62b8; end: 1021f62df; -[SCWebBrowserLinkHistoryScopedServicesSaberEntryPoint begin] */

void FUN_1021f62b8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021f61e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021f62e0; end: 1021f6457;  */

/* WARNING: Possible PIC construction at 0x0001021f6348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021f63e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021f634c) */
/* WARNING: Removing unreachable block (ram,0x0001021f63e4) */
/* WARNING: Removing unreachable block (ram,0x0001021f63fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021f62e0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e64050);
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



/* Entry: 1021f6458; end: 1021f645f;  */

void FUN_1021f6458(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1021f6460; end: 1021f6493; -[SCWebBrowserLinkHistoryScopedServicesSaberEntryPoint end] */

void FUN_1021f6460(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021f62e0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


