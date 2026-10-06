/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028f240c; end: 1028f242b;  */

void FUN_1028f240c(void)

{
  func_0x000107c61168(&PTR_PTR_11286dc28);
  return;
}



/* Entry: 1028f242c; end: 1028f2477;  */

void FUN_1028f242c(undefined8 param_1)

{
  func_0x0001000285a8(0x112ea2c88,&UNK_10dab50b0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1028f2478,param_1);
  return;
}



/* Entry: 1028f2478; end: 1028f24ef;  */

void FUN_1028f2478(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c40430(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  puVar2 = PTR_PTR_1126ab848;
  func_0x000107c610f8();
  func_0x000107c46094();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1028f24f0; end: 1028f252f;  */

undefined ** FUN_1028f24f0(void)

{
  return &PTR_DAT_112ecc758;
}



/* Entry: 1028f2530; end: 1028f257b;  */

void FUN_1028f2530(undefined8 param_1)

{
  func_0x0001000285a8(0x112ea2c88,&UNK_10dab50b0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1028f257c,param_1);
  return;
}



/* Entry: 1028f257c; end: 1028f25f3;  */

void FUN_1028f257c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c40430(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  puVar2 = PTR_PTR_1126ab850;
  func_0x000107c610f8();
  func_0x000107c46094();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1028f25f4; end: 1028f2633;  */

undefined ** FUN_1028f25f4(void)

{
  return &PTR_DAT_112ecc758;
}



/* Entry: 1028f2634; end: 1028f269f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f2634(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1028f2a28();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ecb570) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1028f26a0; end: 1028f270b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f26a0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecb570) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028f270c; end: 1028f276b; -[_TtC53ScanResultsNotificationUIScopedFactoryServiceProvider41SCScanResultsNotificationUIScopedServices init] */

void FUN_1028f270c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ScanResultsNotificationUIScopedFactoryServiceProvider.SCScanResultsNotificationUIScopedServices"
                      ,0x5f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f2738);
  (*pcVar1)();
}



/* Entry: 1028f276c; end: 1028f277b; -[_TtC53ScanResultsNotificationUIScopedFactoryServiceProvider41SCScanResultsNotificationUIScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f276c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ecb570));
  return;
}



/* Entry: 1028f277c; end: 1028f27e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f277c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105688c0;
  func_0x000107c613fc(&UNK_1105688c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1028f2b04,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1028f27e8; end: 1028f2883;  */

void FUN_1028f27e8(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105687d0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105687d0;
  return;
}



/* Entry: 1028f2884; end: 1028f28bb;  */

void FUN_1028f2884(long *param_1)

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



/* Entry: 1028f28bc; end: 1028f28c3;  */

undefined8 FUN_1028f28bc(void)

{
  return 0x1b;
}



/* Entry: 1028f28c4; end: 1028f29f7;  */

void FUN_1028f28c4(undefined8 *param_1)

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
  puVar1 = &UNK_1105688e8;
  func_0x000107c613fc(&UNK_1105688e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1028f2adc;
  func_0x00010058fa64(FUN_1028f2adc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028f29f8; end: 1028f2a27;  */

undefined ** FUN_1028f29f8(void)

{
  return &PTR_DAT_112ef6d58;
}



/* Entry: 1028f2a28; end: 1028f2a47;  */

void FUN_1028f2a28(void)

{
  func_0x000107c61168(&PTR_PTR_11286dce8);
  return;
}



/* Entry: 1028f2a48; end: 1028f2a97;  */

undefined1  [16] FUN_1028f2a48(void)

{
  return ZEXT816(0x110568820);
}



/* Entry: 1028f2a98; end: 1028f2adb;  */

void FUN_1028f2a98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ecb5d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ab858;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ecb5d8 = puVar1;
  return;
}



/* Entry: 1028f2adc; end: 1028f2b03;  */

void FUN_1028f2adc(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1028f2b04; end: 1028f2b07;  */

void FUN_1028f2b04(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028f2b08; end: 1028f2bc7;  */

/* WARNING: Possible PIC construction at 0x0001028f2ba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028f2ba8) */

void FUN_1028f2b08(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110568970;
  func_0x000107c613fc(&UNK_110568970,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112ecb5e8;
  func_0x0001000285a8(0x112ecb5e8,&UNK_10daeec78);
  func_0x000107c613fc();
  pcVar3 = FUN_1028f2f30;
  func_0x0001000841fc(FUN_1028f2f30,puVar1,uVar2);
  func_0x000100084214(&UNK_10daeec40,0x37,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1028f2bc8; end: 1028f2be3;  */

/* WARNING: Possible PIC construction at 0x0001028f2ba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028f2ba8) */

void FUN_1028f2bc8(undefined8 *param_1)

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
  puVar2 = &UNK_110568970;
  func_0x000107c613fc(&UNK_110568970,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112ecb5e8;
  func_0x0001000285a8(0x112ecb5e8,&UNK_10daeec78);
  func_0x000107c613fc();
  pcVar4 = FUN_1028f2f30;
  func_0x0001000841fc(FUN_1028f2f30,puVar2,uVar3);
  func_0x000100084214(&UNK_10daeec40,0x37,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1028f2be4; end: 1028f2efb;  */

void FUN_1028f2be4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112ecb5f0,&UNK_10daeec80);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112ecb5f8,&UNK_10daeec90);
  puVar2 = &UNK_110568998;
  func_0x000107c613fc(&UNK_110568998,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar8 = 0x1028f2f3c;
  func_0x0001000823a8(0x1028f2f3c,puVar2);
  pcVar3 = "SCScanResultsNotificationUIEntryPointWrapperServiceProvider";
  func_0x000100082720("SCScanResultsNotificationUIEntryPointWrapperServiceProvider",0x3b,2);
  FUN_1028f3f24();
  func_0x000100082720("ScanResultsNotificationUIScopeGraphBridgeServicesServiceProvider",0x40,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1028f2884;
  func_0x0001000823a8(FUN_1028f2884,0);
  func_0x000100082720("SCScanResultsNotificationUIScopedServicesCleanupRelayServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112ecb600,&UNK_10daeec88);
  puVar2 = &UNK_1105689c0;
  func_0x000107c613fc(&UNK_1105689c0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar4;
  *(char **)(puVar2 + 0x28) = pcVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar3);
  pcVar5 = FUN_1028f2f84;
  func_0x0001000823a8(FUN_1028f2f84,puVar2);
  func_0x000100082720("SCScanResultsNotificationUIScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  func_0x0001000285a8(0x112ecb578,&UNK_10daee9c0);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1028f2f90;
  func_0x0001000823a8(0x1028f2f90,pcVar5);
  func_0x000100082720("SCScanResultsNotificationUIScopeInitializationServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112ecb568,&UNK_10daee9b0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1028f2f98;
  func_0x0001000823a8(0x1028f2f98,uVar6);
  func_0x000100082720("SCScanResultsNotificationUIScopedServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1105689e8;
  func_0x000107c613fc(&UNK_1105689e8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1028f2fa0;
  func_0x0001000823a8(0x1028f2fa0,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCScanResultsNotificationUIScopeEntryPointProvider",0x32,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1028f2efc; end: 1028f2f2f;  */

void FUN_1028f2efc(void)

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



/* Entry: 1028f2f30; end: 1028f2f47;  */

void FUN_1028f2f30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112ecb5f0,&UNK_10daeec80);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112ecb5f8,&UNK_10daeec90);
  puVar2 = &UNK_110568998;
  func_0x000107c613fc(&UNK_110568998,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  uVar3 = 0x1028f2f3c;
  func_0x0001000823a8(0x1028f2f3c,puVar2);
  pcVar4 = "SCScanResultsNotificationUIEntryPointWrapperServiceProvider";
  func_0x000100082720("SCScanResultsNotificationUIEntryPointWrapperServiceProvider",0x3b,2);
  FUN_1028f3f24();
  func_0x000100082720("ScanResultsNotificationUIScopeGraphBridgeServicesServiceProvider",0x40,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_1028f2884;
  func_0x0001000823a8(FUN_1028f2884,0);
  func_0x000100082720("SCScanResultsNotificationUIScopedServicesCleanupRelayServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112ecb600,&UNK_10daeec88);
  puVar2 = &UNK_1105689c0;
  func_0x000107c613fc(&UNK_1105689c0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar5;
  *(char **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(pcVar4);
  pcVar6 = FUN_1028f2f84;
  func_0x0001000823a8(FUN_1028f2f84,puVar2);
  func_0x000100082720("SCScanResultsNotificationUIScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  func_0x0001000285a8(0x112ecb578,&UNK_10daee9c0);
  func_0x000107c6157c(pcVar6);
  uVar7 = 0x1028f2f90;
  func_0x0001000823a8(0x1028f2f90,pcVar6);
  func_0x000100082720("SCScanResultsNotificationUIScopeInitializationServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112ecb568,&UNK_10daee9b0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1028f2f98;
  func_0x0001000823a8(0x1028f2f98,uVar7);
  func_0x000100082720("SCScanResultsNotificationUIScopedServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1105689e8;
  func_0x000107c613fc(&UNK_1105689e8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x1028f2fa0;
  func_0x0001000823a8(0x1028f2fa0,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCScanResultsNotificationUIScopeEntryPointProvider",0x32,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 1028f2f48; end: 1028f2f83;  */

void FUN_1028f2f48(void)

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



/* Entry: 1028f2f84; end: 1028f2fa7;  */

void FUN_1028f2f84(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1028f36e0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCScanResultsNotificationUIScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028f2fa8; end: 1028f323f;  */

void FUN_1028f2fa8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_1028f3630();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126ab860;
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
  uVar6 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0c9ac0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef19df0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc7130);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 1028f3240; end: 1028f32c7;  */

undefined8
FUN_1028f3240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1028f33f4(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 1028f32c8; end: 1028f3303;  */

void FUN_1028f32c8(void)

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



/* Entry: 1028f3304; end: 1028f330b;  */

undefined8 FUN_1028f3304(void)

{
  return 0x1b;
}



/* Entry: 1028f330c; end: 1028f338f;  */

void FUN_1028f330c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1028f3670,param_2,FUN_1028f3674,param_2,FUN_1028f369c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1028f3390; end: 1028f33df;  */

undefined8 FUN_1028f3390(void)

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



/* Entry: 1028f33e0; end: 1028f33f3;  */

void FUN_1028f33e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110568a00;
  return;
}



/* Entry: 1028f33f4; end: 1028f3613;  */

void FUN_1028f33f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126ab860;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0c9ac0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef19df0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc7130);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1028f3614; end: 1028f362f;  */

undefined ** FUN_1028f3614(void)

{
  return &PTR_DAT_112ef6d58;
}



/* Entry: 1028f3630; end: 1028f364f;  */

void FUN_1028f3630(void)

{
  func_0x000107c61168(&PTR_PTR_112ecb670);
  return;
}



/* Entry: 1028f3650; end: 1028f3673;  */

undefined1  [16] FUN_1028f3650(void)

{
  return ZEXT816(0x110568a40);
}



/* Entry: 1028f3674; end: 1028f369b;  */

void FUN_1028f3674(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1028f369c; end: 1028f36a3;  */

undefined8 FUN_1028f369c(void)

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



/* Entry: 1028f36a4; end: 1028f36df;  */

void FUN_1028f36a4(undefined8 *param_1,undefined8 param_2)

{
  FUN_1028f36e0();
  func_0x0001000a7f38("SCScanResultsNotificationUIScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1028f36e0; end: 1028f38cb;  */

void FUN_1028f36e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105a2050;
  ppuVar4 = &PTR_DAT_112ef6d58;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ecb6e8;
  func_0x0001000285a8(0x112ecb6e8,&UNK_10daeedf0);
  func_0x0001000a6ee8(&UNK_110568a40,
                      "SCScanResultsNotificationUIEntryPointWrapperScopeInitializationPluginKey",
                      0x48,2,FUN_1028f3940,param_1,uVar2,&UNK_110568a40,&PTR_DAT_112ecb608);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110568a90;
  func_0x000107c613fc(&UNK_110568a90,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110568860,
                      "SCScanResultsNotificationUIScopedServicesScopeInitializationPluginKey",0x45,2
                      ,FUN_1028f39f0,puVar3,uVar2,&UNK_110568860,&PTR_DAT_112ecb580);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110568ab8;
  func_0x000107c613fc(&UNK_110568ab8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110568c48,
                      "ScanResultsNotificationUIScopeGraphBridgeScopeInitializationPluginKey",0x45,2
                      ,FUN_1028f39f8,puVar3,uVar2,&UNK_110568c48,&PTR_DAT_112ecb778);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ecb6f0;
  func_0x0001000285a8(0x112ecb6f0,&UNK_10daeedf8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1028f38cc; end: 1028f393f;  */

void FUN_1028f38cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1028f3a6c;
  func_0x0001000823a8(0x1028f3a6c,param_3);
  func_0x000100082720("SCScanResultsNotificationUIEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028f3940; end: 1028f3947;  */

void FUN_1028f3940(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1028f3a6c;
  func_0x0001000823a8();
  func_0x000100082720("SCScanResultsNotificationUIEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028f3948; end: 1028f39ef;  */

void FUN_1028f3948(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110568ae0;
  func_0x000107c613fc(&UNK_110568ae0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1028f3a64;
  func_0x0001000823a8(FUN_1028f3a64,puVar1);
  func_0x000100082720("SCScanResultsNotificationUIScopedServicesScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1028f39f0; end: 1028f39f7;  */

void FUN_1028f39f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110568ae0;
  func_0x000107c613fc(&UNK_110568ae0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1028f3a64;
  func_0x0001000823a8(FUN_1028f3a64,puVar3);
  func_0x000100082720("SCScanResultsNotificationUIScopedServicesScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1028f39f8; end: 1028f3a37;  */

void FUN_1028f39f8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1028f4008(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ScanResultsNotificationUIScopeGraphBridgeScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028f3a38; end: 1028f3a63;  */

void FUN_1028f3a38(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028f3a64; end: 1028f3a73;  */

void FUN_1028f3a64(undefined8 *param_1)

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
  puVar1 = &UNK_1105688e8;
  func_0x000107c613fc(&UNK_1105688e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1028f2adc;
  func_0x00010058fa64(FUN_1028f2adc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028f3a74; end: 1028f3afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028f3a74(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1028f3e34();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112ecb6f8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ecb700) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f3afc);
  (*pcVar1)();
}



/* Entry: 1028f3afc; end: 1028f3b5b; -[_TtC41ScanResultsNotificationUIScopeGraphBridge56ScanResultsNotificationUIScopeGraphBridgeSaberEntryPoint init] */

void FUN_1028f3afc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ScanResultsNotificationUIScopeGraphBridge.ScanResultsNotificationUIScopeGraphBridgeSaberEntryPoint"
                      ,0x62,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f3b28);
  (*pcVar1)();
}



/* Entry: 1028f3b5c; end: 1028f3b93; -[_TtC41ScanResultsNotificationUIScopeGraphBridge56ScanResultsNotificationUIScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028f3b78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028f3b7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f3b5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecb6f8));
  return;
}



/* Entry: 1028f3b94; end: 1028f3bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f3b94(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ecb700),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ecb6f8));
  return;
}



/* Entry: 1028f3bbc; end: 1028f3bdb;  */

void FUN_1028f3bbc(void)

{
  func_0x000107c61168(&PTR_PTR_11286dda8);
  return;
}



/* Entry: 1028f3bdc; end: 1028f3c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028f3bdc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecb730) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ecb738);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028f3c64);
  (*pcVar2)();
}



/* Entry: 1028f3c64; end: 1028f3d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1028f3c64(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ecb730);
  *(undefined **)(unaff_x20 + _DAT_112ecb730) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ecb738);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ecb738))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110568ba8;
  func_0x000107c613fc(&UNK_110568ba8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1028f3d50,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1028f3d4c; end: 1028f3d57;  */

void FUN_1028f3d4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1028f3d58; end: 1028f3db7; -[_TtC41ScanResultsNotificationUIScopeGraphBridge56SCScanResultsNotificationUIScopedServicesSaberEntryPoint init] */

void FUN_1028f3d58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ScanResultsNotificationUIScopeGraphBridge.SCScanResultsNotificationUIScopedServicesSaberEntryPoint"
                      ,0x62,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f3d84);
  (*pcVar1)();
}



/* Entry: 1028f3db8; end: 1028f3def; -[_TtC41ScanResultsNotificationUIScopeGraphBridge56SCScanResultsNotificationUIScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f3db8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecb738));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecb730));
  return;
}



/* Entry: 1028f3df0; end: 1028f3df3;  */

void FUN_1028f3df0(void)

{
  return;
}



/* Entry: 1028f3df4; end: 1028f3e13;  */

void FUN_1028f3df4(void)

{
  FUN_1028f3c64();
  return;
}



/* Entry: 1028f3e14; end: 1028f3e33;  */

void FUN_1028f3e14(void)

{
  func_0x000107c61168(&PTR_PTR_11286de70);
  return;
}



/* Entry: 1028f3e34; end: 1028f3f03;  */

undefined8 FUN_1028f3e34(void)

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
  
  func_0x000107c61428(0x112ecb768,&uStack_40,0x20,0);
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
    FUN_1028f3f04();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1028f3f04; end: 1028f3f23;  */

void FUN_1028f3f04(void)

{
  func_0x000107c61168(&PTR_PTR_11286df38);
  return;
}



/* Entry: 1028f3f24; end: 1028f3f8f;  */

void FUN_1028f3f24(void)

{
  func_0x0001000285a8(0x112ecb770,&UNK_10daeeed8);
  func_0x0001000823a8(0x1028f3f64,0);
  return;
}



/* Entry: 1028f3f90; end: 1028f3fcb; -[_TtC41ScanResultsNotificationUIScopeGraphBridge49ScanResultsNotificationUIScopeGraphBridgeServices init] */

void FUN_1028f3f90(undefined8 param_1)

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



/* Entry: 1028f3fcc; end: 1028f3fff;  */

void FUN_1028f3fcc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028f4000; end: 1028f4007;  */

undefined8 FUN_1028f4000(void)

{
  return 0x1b;
}



/* Entry: 1028f4008; end: 1028f417f;  */

void FUN_1028f4008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110568bf0;
  func_0x000107c613fc(&UNK_110568bf0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1028f4180,puVar1);
  return;
}



/* Entry: 1028f4180; end: 1028f4187;  */

void FUN_1028f4180(undefined8 *param_1)

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
  func_0x000107c61428(0x112ecb768,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ecb768,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110568c88;
  func_0x000107c613fc(&UNK_110568c88,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1028f4234;
  func_0x00010058fa64(0x1028f4234,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028f4188; end: 1028f41e3;  */

void FUN_1028f4188(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ecb768,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ecb768,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1028f41e4; end: 1028f423b;  */

undefined ** FUN_1028f41e4(void)

{
  return &PTR_DAT_112ef6d58;
}



/* Entry: 1028f423c; end: 1028f4283; -[SCScanResultsNotificationUIScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f423c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecb7c8;
  func_0x000107c61428(param_1 + _DAT_112ecb7c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028f4284; end: 1028f42db; -[SCScanResultsNotificationUIScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f4284(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecb7c8;
  func_0x000107c61428(param_1 + _DAT_112ecb7c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028f42dc; end: 1028f4323; -[SCScanResultsNotificationUIScopeGraphBridgeSaberEntryPoint scanResultsNotificationUIScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f42dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecb7d0;
  func_0x000107c61428(param_1 + _DAT_112ecb7d0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1028f4324; end: 1028f4387; -[SCScanResultsNotificationUIScopeGraphBridgeSaberEntryPoint setScanResultsNotificationUIScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f4324(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecb7d0;
  func_0x000107c61428(param_1 + _DAT_112ecb7d0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1028f4388; end: 1028f44bb;  */

/* WARNING: Possible PIC construction at 0x0001028f4440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028f445c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028f4478: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028f4444) */
/* WARNING: Removing unreachable block (ram,0x0001028f4460) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f4388(void)

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
  func_0x000107c51880();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1028f3bbc();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1028f3e34();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f44bc);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112ecb6f8) = lVar5;
    *(long *)(lVar4 + _DAT_112ecb700) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1028f44bc; end: 1028f44e3; -[SCScanResultsNotificationUIScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1028f44bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028f4388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028f44e4; end: 1028f4527; -[SCScanResultsNotificationUIScopeGraphBridgeSaberEntryPoint end] */

void FUN_1028f44e4(undefined8 param_1)

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



/* Entry: 1028f4528; end: 1028f46bf;  */

void FUN_1028f4528(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffc8) || (param_3 != -0x7ffffffef0f36260)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000038,0x800000010f0c9da0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ScanResultsNotificationUIScopeGraphBridge/SCScanResultsNotificationUIScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x6a,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f46c0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58c14();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1028f46c0; end: 1028f476b; -[SCScanResultsNotificationUIScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1028f46c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028f4528(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028f476c; end: 1028f47d7; -[SCScanResultsNotificationUIScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f476c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ecb7c8,0);
  *(undefined8 *)(param_1 + _DAT_112ecb7d0) = 0;
  *(undefined8 *)(param_1 + _DAT_112ecb7d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028f47d8; end: 1028f480b;  */

void FUN_1028f47d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028f480c; end: 1028f4853; -[SCScanResultsNotificationUIScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028f4838: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028f483c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f480c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ecb7c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecb7d0));
  return;
}



/* Entry: 1028f4854; end: 1028f4873;  */

void FUN_1028f4854(void)

{
  func_0x000107c61168(&PTR_PTR_11286dfe8);
  return;
}



/* Entry: 1028f4874; end: 1028f48bb; -[SCSCScanResultsNotificationUIScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f4874(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecb808;
  func_0x000107c61428(param_1 + _DAT_112ecb808,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028f48bc; end: 1028f4913; -[SCSCScanResultsNotificationUIScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f48bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecb808;
  func_0x000107c61428(param_1 + _DAT_112ecb808,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028f4914; end: 1028f49eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f4914(undefined8 param_1,long param_2)

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
    FUN_1028f3e14();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ecb730) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028f49ec);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ecb738);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ecb810);
    *(long **)(unaff_x20 + _DAT_112ecb810) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1028f49ec; end: 1028f4a13; -[SCSCScanResultsNotificationUIScopedServicesSaberEntryPoint begin] */

void FUN_1028f49ec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028f4914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028f4a14; end: 1028f4b8b;  */

/* WARNING: Possible PIC construction at 0x0001028f4a7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028f4b14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028f4a80) */
/* WARNING: Removing unreachable block (ram,0x0001028f4b18) */
/* WARNING: Removing unreachable block (ram,0x0001028f4b30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f4a14(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecb810);
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



/* Entry: 1028f4b8c; end: 1028f4b93;  */

void FUN_1028f4b8c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1028f4b94; end: 1028f4bc7; -[SCSCScanResultsNotificationUIScopedServicesSaberEntryPoint end] */

void FUN_1028f4b94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1028f4a14();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028f4bc8; end: 1028f4ce7;  */

void FUN_1028f4bc8(long param_1,long param_2,long param_3)

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
                        "ScanResultsNotificationUIScopeGraphBridge/SCSCScanResultsNotificationUIScopedServicesSaberEntryPoint.swift"
                        ,0x6a,2,0x2f,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028f4ce8);
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



/* Entry: 1028f4ce8; end: 1028f4d93; -[SCSCScanResultsNotificationUIScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1028f4ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028f4bc8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028f4d94; end: 1028f4df3; -[SCSCScanResultsNotificationUIScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f4d94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ecb808,0);
  *(undefined8 *)(param_1 + _DAT_112ecb810) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028f4df4; end: 1028f4e27;  */

void FUN_1028f4df4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028f4e28; end: 1028f4e5f; -[SCSCScanResultsNotificationUIScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028f4e28(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ecb808);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecb810));
  return;
}



/* Entry: 1028f4e60; end: 1028f4e7f;  */

void FUN_1028f4e60(void)

{
  func_0x000107c61168(&PTR_PTR_11286e0b0);
  return;
}


