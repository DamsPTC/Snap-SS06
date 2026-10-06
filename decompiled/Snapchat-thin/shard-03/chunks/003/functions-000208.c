/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027121c8; end: 1027121cb;  */

void FUN_1027121c8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1027121cc; end: 10271228b;  */

/* WARNING: Possible PIC construction at 0x000102712268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271226c) */

void FUN_1027121cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11053f500;
  func_0x000107c613fc(&UNK_11053f500,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112eba490;
  func_0x0001000285a8(0x112eba490,&UNK_10dad22d8);
  func_0x000107c613fc();
  pcVar3 = FUN_1027125f4;
  func_0x0001000841fc(FUN_1027125f4,puVar1,uVar2);
  func_0x000100084214(&UNK_10dad22a0,0x30,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10271228c; end: 1027122a7;  */

/* WARNING: Possible PIC construction at 0x000102712268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271226c) */

void FUN_10271228c(undefined8 *param_1)

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
  puVar2 = &UNK_11053f500;
  func_0x000107c613fc(&UNK_11053f500,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112eba490;
  func_0x0001000285a8(0x112eba490,&UNK_10dad22d8);
  func_0x000107c613fc();
  pcVar4 = FUN_1027125f4;
  func_0x0001000841fc(FUN_1027125f4,puVar2,uVar3);
  func_0x000100084214(&UNK_10dad22a0,0x30,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1027122a8; end: 1027125bf;  */

void FUN_1027122a8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x0001000285a8(0x112eba498,&UNK_10dad22e0);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1027135e0();
  func_0x000100082720("MapDirectionsSheetScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112eba4a0,&UNK_10dad22f0);
  puVar3 = &UNK_11053f528;
  func_0x000107c613fc(&UNK_11053f528,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar8 = 0x102712600;
  func_0x0001000823a8(0x102712600,puVar3);
  func_0x000100082720("SCMapDirectionsSheetEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102711f8c;
  func_0x0001000823a8(FUN_102711f8c,0);
  func_0x000100082720("SCMapDirectionsSheetScopedServicesCleanupRelayServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112eba4a8,&UNK_10dad22e8);
  puVar3 = &UNK_11053f550;
  func_0x000107c613fc(&UNK_11053f550,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_102712648;
  func_0x0001000823a8(FUN_102712648,puVar3);
  func_0x000100082720("SCMapDirectionsSheetScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112eba428,&UNK_10dad2070);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x102712654;
  func_0x0001000823a8(0x102712654,pcVar5);
  func_0x000100082720("SCMapDirectionsSheetScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112eba418,&UNK_10dad2060);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x10271265c;
  func_0x0001000823a8(0x10271265c,uVar6);
  func_0x000100082720("SCMapDirectionsSheetScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11053f578;
  func_0x000107c613fc(&UNK_11053f578,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x102712664;
  func_0x0001000823a8(0x102712664,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCMapDirectionsSheetScopeEntryPointProvider",0x2b,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1027125c0; end: 1027125f3;  */

void FUN_1027125c0(void)

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



/* Entry: 1027125f4; end: 10271260b;  */

void FUN_1027125f4(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001000285a8(0x112eba498,&UNK_10dad22e0);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1027135e0();
  func_0x000100082720("MapDirectionsSheetScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112eba4a0,&UNK_10dad22f0);
  puVar3 = &UNK_11053f528;
  func_0x000107c613fc(&UNK_11053f528,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  uVar4 = 0x102712600;
  func_0x0001000823a8(0x102712600,puVar3);
  func_0x000100082720("SCMapDirectionsSheetEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_102711f8c;
  func_0x0001000823a8(FUN_102711f8c,0);
  func_0x000100082720("SCMapDirectionsSheetScopedServicesCleanupRelayServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112eba4a8,&UNK_10dad22e8);
  puVar3 = &UNK_11053f550;
  func_0x000107c613fc(&UNK_11053f550,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(code **)(puVar3 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  pcVar6 = FUN_102712648;
  func_0x0001000823a8(FUN_102712648,puVar3);
  func_0x000100082720("SCMapDirectionsSheetScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112eba428,&UNK_10dad2070);
  func_0x000107c6157c(pcVar6);
  uVar7 = 0x102712654;
  func_0x0001000823a8(0x102712654,pcVar6);
  func_0x000100082720("SCMapDirectionsSheetScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112eba418,&UNK_10dad2060);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x10271265c;
  func_0x0001000823a8(0x10271265c,uVar7);
  func_0x000100082720("SCMapDirectionsSheetScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11053f578;
  func_0x000107c613fc(&UNK_11053f578,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(code **)(puVar3 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x102712664;
  func_0x0001000823a8(0x102712664,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCMapDirectionsSheetScopeEntryPointProvider",0x2b,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 10271260c; end: 102712647;  */

void FUN_10271260c(void)

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



/* Entry: 102712648; end: 10271266b;  */

void FUN_102712648(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102712d9c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCMapDirectionsSheetScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 10271266c; end: 1027128ff;  */

void FUN_10271266c(long *param_1,long param_2)

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
  FUN_102712cec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126aade8;
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
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0b7ca0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
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
  uVar6 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
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



/* Entry: 102712900; end: 102712987;  */

undefined8
FUN_102712900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102712ab4(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 102712988; end: 1027129c3;  */

void FUN_102712988(void)

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



/* Entry: 1027129c4; end: 1027129cb;  */

undefined8 FUN_1027129c4(void)

{
  return 0x1b;
}



/* Entry: 1027129cc; end: 102712a4f;  */

void FUN_1027129cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102712d2c,param_2,FUN_102712d30,param_2,FUN_102712d58,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102712a50; end: 102712a9f;  */

undefined8 FUN_102712a50(void)

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



/* Entry: 102712aa0; end: 102712ab3;  */

void FUN_102712aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11053f590;
  return;
}



/* Entry: 102712ab4; end: 102712ccf;  */

void FUN_102712ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126aade8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0b7ca0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102712cd0; end: 102712ceb;  */

undefined ** FUN_102712cd0(void)

{
  return &PTR_DAT_113066d00;
}



/* Entry: 102712cec; end: 102712d0b;  */

void FUN_102712cec(void)

{
  func_0x000107c61168(&PTR_PTR_112eba518);
  return;
}



/* Entry: 102712d0c; end: 102712d2f;  */

undefined1  [16] FUN_102712d0c(void)

{
  return ZEXT816(0x11053f5d0);
}



/* Entry: 102712d30; end: 102712d57;  */

void FUN_102712d30(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102712d58; end: 102712d5f;  */

undefined8 FUN_102712d58(void)

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



/* Entry: 102712d60; end: 102712d9b;  */

void FUN_102712d60(undefined8 *param_1,undefined8 param_2)

{
  FUN_102712d9c();
  func_0x0001000a7f38("SCMapDirectionsSheetScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = param_2;
  return;
}



/* Entry: 102712d9c; end: 102712f87;  */

void FUN_102712d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d820;
  ppuVar4 = &PTR_DAT_113066d00;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11053f620;
  func_0x000107c613fc(&UNK_11053f620,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112eba590;
  func_0x0001000285a8(0x112eba590,&UNK_10dad2448);
  func_0x0001000a6ee8(&UNK_11053f830,
                      "MapDirectionsSheetScopeGraphBridgeScopeInitializationPluginKey",0x3e,2,
                      FUN_102712f88,puVar2,uVar3,&UNK_11053f830,&PTR_DAT_112eba620);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11053f5d0,
                      "SCMapDirectionsSheetEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_10271303c,param_3,uVar3,&UNK_11053f5d0,&PTR_DAT_112eba4b0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11053f648;
  func_0x000107c613fc(&UNK_11053f648,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11053f3f0,
                      "SCMapDirectionsSheetScopedServicesScopeInitializationPluginKey",0x3e,2,
                      FUN_1027130ec,puVar2,uVar3,&UNK_11053f3f0,&PTR_DAT_112eba430);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112eba598;
  func_0x0001000285a8(0x112eba598,&UNK_10dad2450);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102712f88; end: 102712fc7;  */

void FUN_102712f88(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1027136c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("MapDirectionsSheetScopeGraphBridgeScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102712fc8; end: 10271303b;  */

void FUN_102712fc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102713128;
  func_0x0001000823a8(0x102713128,param_3);
  func_0x000100082720("SCMapDirectionsSheetEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10271303c; end: 102713043;  */

void FUN_10271303c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102713128;
  func_0x0001000823a8();
  func_0x000100082720("SCMapDirectionsSheetEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102713044; end: 1027130eb;  */

void FUN_102713044(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11053f670;
  func_0x000107c613fc(&UNK_11053f670,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102713120;
  func_0x0001000823a8(FUN_102713120,puVar1);
  func_0x000100082720("SCMapDirectionsSheetScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1027130ec; end: 1027130f3;  */

void FUN_1027130ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11053f670;
  func_0x000107c613fc(&UNK_11053f670,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102713120;
  func_0x0001000823a8(FUN_102713120,puVar3);
  func_0x000100082720("SCMapDirectionsSheetScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1027130f4; end: 10271311f;  */

void FUN_1027130f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102713120; end: 10271312f;  */

void FUN_102713120(undefined8 *param_1)

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
  puVar1 = &UNK_11053f478;
  func_0x000107c613fc(&UNK_11053f478,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1027121a0;
  func_0x00010058fa64(FUN_1027121a0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102713130; end: 1027131b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102713130(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1027134f0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112eba5a0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112eba5a8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027131b8);
  (*pcVar1)();
}



/* Entry: 1027131b8; end: 102713217; -[_TtC34MapDirectionsSheetScopeGraphBridge49MapDirectionsSheetScopeGraphBridgeSaberEntryPoint init] */

void FUN_1027131b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapDirectionsSheetScopeGraphBridge.MapDirectionsSheetScopeGraphBridgeSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027131e4);
  (*pcVar1)();
}



/* Entry: 102713218; end: 10271324f; -[_TtC34MapDirectionsSheetScopeGraphBridge49MapDirectionsSheetScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102713234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102713238) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102713218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eba5a0));
  return;
}



/* Entry: 102713250; end: 102713277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102713250(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112eba5a8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112eba5a0));
  return;
}



/* Entry: 102713278; end: 102713297;  */

void FUN_102713278(void)

{
  func_0x000107c61168(&PTR_PTR_11285ceb8);
  return;
}



/* Entry: 102713298; end: 10271331f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102713298(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eba5d8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112eba5e0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102713320);
  (*pcVar2)();
}



/* Entry: 102713320; end: 102713407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102713320(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eba5d8);
  *(undefined **)(unaff_x20 + _DAT_112eba5d8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eba5e0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112eba5e0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11053f790;
  func_0x000107c613fc(&UNK_11053f790,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10271340c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102713408; end: 102713413;  */

void FUN_102713408(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102713414; end: 102713473; -[_TtC34MapDirectionsSheetScopeGraphBridge49SCMapDirectionsSheetScopedServicesSaberEntryPoint init] */

void FUN_102713414(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapDirectionsSheetScopeGraphBridge.SCMapDirectionsSheetScopedServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102713440);
  (*pcVar1)();
}



/* Entry: 102713474; end: 1027134ab; -[_TtC34MapDirectionsSheetScopeGraphBridge49SCMapDirectionsSheetScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102713474(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eba5e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eba5d8));
  return;
}



/* Entry: 1027134ac; end: 1027134af;  */

void FUN_1027134ac(void)

{
  return;
}



/* Entry: 1027134b0; end: 1027134cf;  */

void FUN_1027134b0(void)

{
  FUN_102713320();
  return;
}



/* Entry: 1027134d0; end: 1027134ef;  */

void FUN_1027134d0(void)

{
  func_0x000107c61168(&PTR_PTR_11285cf80);
  return;
}



/* Entry: 1027134f0; end: 1027135bf;  */

undefined8 FUN_1027134f0(void)

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
  
  func_0x000107c61428(0x112eba610,&uStack_40,0x20,0);
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
    FUN_1027135c0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1027135c0; end: 1027135df;  */

void FUN_1027135c0(void)

{
  func_0x000107c61168(&PTR_PTR_11285d048);
  return;
}



/* Entry: 1027135e0; end: 10271364b;  */

void FUN_1027135e0(void)

{
  func_0x0001000285a8(0x112eba618,&UNK_10dad2528);
  func_0x0001000823a8(0x102713620,0);
  return;
}



/* Entry: 10271364c; end: 102713687; -[_TtC34MapDirectionsSheetScopeGraphBridge42MapDirectionsSheetScopeGraphBridgeServices init] */

void FUN_10271364c(undefined8 param_1)

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



/* Entry: 102713688; end: 1027136bb;  */

void FUN_102713688(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027136bc; end: 1027136c3;  */

undefined8 FUN_1027136bc(void)

{
  return 0x1b;
}



/* Entry: 1027136c4; end: 10271383b;  */

void FUN_1027136c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11053f7d8;
  func_0x000107c613fc(&UNK_11053f7d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10271383c,puVar1);
  return;
}



/* Entry: 10271383c; end: 102713843;  */

void FUN_10271383c(undefined8 *param_1)

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
  func_0x000107c61428(0x112eba610,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112eba610,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11053f870;
  func_0x000107c613fc(&UNK_11053f870,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1027138f0;
  func_0x00010058fa64(0x1027138f0,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102713844; end: 10271389f;  */

void FUN_102713844(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112eba610,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112eba610,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1027138a0; end: 1027138f7;  */

undefined ** FUN_1027138a0(void)

{
  return &PTR_DAT_113066d00;
}



/* Entry: 1027138f8; end: 10271393f; -[SCMapDirectionsSheetScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027138f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eba670;
  func_0x000107c61428(param_1 + _DAT_112eba670,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102713940; end: 102713997; -[SCMapDirectionsSheetScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102713940(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eba670;
  func_0x000107c61428(param_1 + _DAT_112eba670,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102713998; end: 1027139df; -[SCMapDirectionsSheetScopeGraphBridgeSaberEntryPoint mapDirectionsSheetScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102713998(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eba678;
  func_0x000107c61428(param_1 + _DAT_112eba678,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027139e0; end: 102713a43; -[SCMapDirectionsSheetScopeGraphBridgeSaberEntryPoint setMapDirectionsSheetScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027139e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eba678;
  func_0x000107c61428(param_1 + _DAT_112eba678,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102713a44; end: 102713b77;  */

/* WARNING: Possible PIC construction at 0x000102713afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102713b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102713b34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102713b00) */
/* WARNING: Removing unreachable block (ram,0x000102713b1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102713a44(void)

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
  func_0x000107c4c308();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102713278();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1027134f0();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102713b78);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112eba5a0) = lVar5;
    *(long *)(lVar4 + _DAT_112eba5a8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102713b78; end: 102713b9f; -[SCMapDirectionsSheetScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102713b78(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102713a44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102713ba0; end: 102713be3; -[SCMapDirectionsSheetScopeGraphBridgeSaberEntryPoint end] */

void FUN_102713ba0(undefined8 param_1)

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



/* Entry: 102713be4; end: 102713d7b;  */

void FUN_102713be4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0f480c0)) {
      uVar2 = 0xd000000000000031;
      func_0x000107c605b8(0xd000000000000031,0x800000010f0b7f40,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MapDirectionsSheetScopeGraphBridge/SCMapDirectionsSheetScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5c,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102713d7c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5620c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102713d7c; end: 102713e27; -[SCMapDirectionsSheetScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102713d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102713be4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102713e28; end: 102713e93; -[SCMapDirectionsSheetScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102713e28(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eba670,0);
  *(undefined8 *)(param_1 + _DAT_112eba678) = 0;
  *(undefined8 *)(param_1 + _DAT_112eba680) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102713e94; end: 102713ec7;  */

void FUN_102713e94(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102713ec8; end: 102713f0f; -[SCMapDirectionsSheetScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102713ef4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102713ef8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102713ec8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eba670);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eba678));
  return;
}



/* Entry: 102713f10; end: 102713f2f;  */

void FUN_102713f10(void)

{
  func_0x000107c61168(&PTR_PTR_11285d0f8);
  return;
}



/* Entry: 102713f30; end: 102713f77; -[SCSCMapDirectionsSheetScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102713f30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eba6b0;
  func_0x000107c61428(param_1 + _DAT_112eba6b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102713f78; end: 102713fcf; -[SCSCMapDirectionsSheetScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102713f78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eba6b0;
  func_0x000107c61428(param_1 + _DAT_112eba6b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102713fd0; end: 1027140a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102713fd0(undefined8 param_1,long param_2)

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
    FUN_1027134d0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112eba5d8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027140a8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112eba5e0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112eba6b8);
    *(long **)(unaff_x20 + _DAT_112eba6b8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1027140a8; end: 1027140cf; -[SCSCMapDirectionsSheetScopedServicesSaberEntryPoint begin] */

void FUN_1027140a8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102713fd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027140d0; end: 102714247;  */

/* WARNING: Possible PIC construction at 0x000102714138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027141d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010271413c) */
/* WARNING: Removing unreachable block (ram,0x0001027141d4) */
/* WARNING: Removing unreachable block (ram,0x0001027141ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027140d0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112eba6b8);
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



/* Entry: 102714248; end: 10271424f;  */

void FUN_102714248(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102714250; end: 102714283; -[SCSCMapDirectionsSheetScopedServicesSaberEntryPoint end] */

void FUN_102714250(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1027140d0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102714284; end: 1027143a3;  */

void FUN_102714284(long param_1,long param_2,long param_3)

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
                        "MapDirectionsSheetScopeGraphBridge/SCSCMapDirectionsSheetScopedServicesSaberEntryPoint.swift"
                        ,0x5c,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027143a4);
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



/* Entry: 1027143a4; end: 10271444f; -[SCSCMapDirectionsSheetScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1027143a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102714284(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102714450; end: 1027144af; -[SCSCMapDirectionsSheetScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102714450(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eba6b0,0);
  *(undefined8 *)(param_1 + _DAT_112eba6b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027144b0; end: 1027144e3;  */

void FUN_1027144b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027144e4; end: 10271451b; -[SCSCMapDirectionsSheetScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027144e4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eba6b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eba6b8));
  return;
}



/* Entry: 10271451c; end: 10271453b;  */

void FUN_10271451c(void)

{
  func_0x000107c61168(&PTR_PTR_11285d1c0);
  return;
}



/* Entry: 10271453c; end: 1027145a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271453c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102714930();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112eba6f0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1027145a8; end: 102714613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027145a8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eba6f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102714614; end: 102714673; -[_TtC43MapSnapshotViewScopedFactoryServiceProvider31SCMapSnapshotViewScopedServices init] */

void FUN_102714614(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapSnapshotViewScopedFactoryServiceProvider.SCMapSnapshotViewScopedServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102714640);
  (*pcVar1)();
}



/* Entry: 102714674; end: 102714683; -[_TtC43MapSnapshotViewScopedFactoryServiceProvider31SCMapSnapshotViewScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102714674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eba6f0));
  return;
}



/* Entry: 102714684; end: 1027146ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102714684(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11053fa88;
  func_0x000107c613fc(&UNK_11053fa88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1027149c8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1027146f0; end: 10271478b;  */

void FUN_1027146f0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11053f998;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11053f998;
  return;
}



/* Entry: 10271478c; end: 1027147c3;  */

void FUN_10271478c(long *param_1)

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



/* Entry: 1027147c4; end: 1027147cb;  */

undefined8 FUN_1027147c4(void)

{
  return 0x1b;
}



/* Entry: 1027147cc; end: 1027148ff;  */

void FUN_1027147cc(undefined8 *param_1)

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
  puVar1 = &UNK_11053fab0;
  func_0x000107c613fc(&UNK_11053fab0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1027149a0;
  func_0x00010058fa64(FUN_1027149a0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102714900; end: 10271492f;  */

undefined ** FUN_102714900(void)

{
  return &PTR_DAT_113066d60;
}



/* Entry: 102714930; end: 10271494f;  */

void FUN_102714930(void)

{
  func_0x000107c61168(&PTR_PTR_11285d280);
  return;
}



/* Entry: 102714950; end: 10271499f;  */

undefined1  [16] FUN_102714950(void)

{
  return ZEXT816(0x11053f9e8);
}



/* Entry: 1027149a0; end: 1027149c7;  */

void FUN_1027149a0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1027149c8; end: 1027149cb;  */

void FUN_1027149c8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1027149cc; end: 102714b1b;  */

/* WARNING: Possible PIC construction at 0x000102714aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102714ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102714ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102714ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102714ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102714af4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102714ae8) */
/* WARNING: Removing unreachable block (ram,0x000102714ad8) */
/* WARNING: Removing unreachable block (ram,0x000102714ac8) */
/* WARNING: Removing unreachable block (ram,0x000102714ab8) */
/* WARNING: Removing unreachable block (ram,0x000102714aa8) */
/* WARNING: Removing unreachable block (ram,0x000102714af8) */

void FUN_1027149cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11053fb38;
  func_0x000107c613fc(&UNK_11053fb38,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  uVar2 = 0x112eba760;
  func_0x0001000285a8(0x112eba760,&UNK_10dad2930);
  func_0x000107c613fc();
  uVar3 = 0x102714fac;
  func_0x0001000841fc(0x102714fac,puVar1,uVar2);
  func_0x000100084214(&UNK_10dad2900,0x2d,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102714b1c; end: 102714b57;  */

void FUN_102714b1c(void)

{
  long unaff_x20;
  
  FUN_1027149cc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 102714b58; end: 102714b67;  */

undefined1  [16] FUN_102714b58(void)

{
  return ZEXT816(0x11053fb18);
}



/* Entry: 102714b68; end: 102714f2f;  */

void FUN_102714b68(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

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
  func_0x0001000285a8(0x112eba768,&UNK_10dad2938);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1027169a4();
  func_0x000100082720("MapSnapshotViewScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112eba770,&UNK_10dad2940);
  puVar3 = &UNK_11053fb60;
  func_0x000107c613fc(&UNK_11053fb60,0x78,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = param_8;
  *(undefined8 *)(puVar3 + 0x48) = param_9;
  *(undefined8 *)(puVar3 + 0x50) = param_10;
  *(undefined8 *)(puVar3 + 0x58) = param_11;
  *(undefined8 *)(puVar3 + 0x60) = param_12;
  *(undefined8 *)(puVar3 + 0x68) = param_13;
  *(undefined8 *)(puVar3 + 0x70) = param_14;
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
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  uVar8 = 0x102714fec;
  func_0x0001000823a8(0x102714fec,puVar3);
  func_0x000100082720("SCMapSnapshotViewEntryPointWrapperServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10271478c;
  func_0x0001000823a8(FUN_10271478c,0);
  func_0x000100082720("SCMapSnapshotViewScopedServicesCleanupRelayServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112eba778,&UNK_10dad2950);
  puVar3 = &UNK_11053fb88;
  func_0x000107c613fc(&UNK_11053fb88,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_102715028;
  func_0x0001000823a8(FUN_102715028,puVar3);
  func_0x000100082720("SCMapSnapshotViewScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112eba6f8,&UNK_10dad26f0);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x102715034;
  func_0x0001000823a8(0x102715034,pcVar5);
  func_0x000100082720("SCMapSnapshotViewScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112eba6e8,&UNK_10dad26e0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x10271503c;
  func_0x0001000823a8(0x10271503c,uVar6);
  func_0x000100082720("SCMapSnapshotViewScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11053fbb0;
  func_0x000107c613fc(&UNK_11053fbb0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x102715044;
  func_0x0001000823a8(0x102715044,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCMapSnapshotViewScopeEntryPointProvider",0x28,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 102714f30; end: 102715027;  */

void FUN_102714f30(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102715028; end: 10271504b;  */

void FUN_102715028(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102716160(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCMapSnapshotViewScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10271504c; end: 102715f07;  */

void FUN_10271504c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  FUN_1027160b0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  puVar1 = PTR_PTR_1126aadf0;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0b8240);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar17 = 0xd000000000000010;
  uVar15 = uVar17;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar15 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef27dc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar15 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = 0xd000000000000013;
  uVar15 = uVar16;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef27fe0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f00c470);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f01a190);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef252d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2e280);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar15);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar17);
  uVar15 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0b8260);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  func_0x000107c3e740(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  *param_1 = param_2;
  return;
}


