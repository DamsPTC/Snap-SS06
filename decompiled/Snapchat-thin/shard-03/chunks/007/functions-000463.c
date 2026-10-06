/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b9d764; end: 102b9d7cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9d764(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105a7ce8;
  func_0x000107c613fc(&UNK_1105a7ce8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102b9daa8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102b9d7d0; end: 102b9d86b;  */

void FUN_102b9d7d0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105a7bf8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105a7bf8;
  return;
}



/* Entry: 102b9d86c; end: 102b9d8a3;  */

void FUN_102b9d86c(long *param_1)

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



/* Entry: 102b9d8a4; end: 102b9d8ab;  */

undefined8 FUN_102b9d8a4(void)

{
  return 0x1b;
}



/* Entry: 102b9d8ac; end: 102b9d9df;  */

void FUN_102b9d8ac(undefined8 *param_1)

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
  puVar1 = &UNK_1105a7d10;
  func_0x000107c613fc(&UNK_1105a7d10,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102b9da80;
  func_0x00010058fa64(FUN_102b9da80,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b9d9e0; end: 102b9da0f;  */

undefined ** FUN_102b9d9e0(void)

{
  return &PTR_DAT_113066970;
}



/* Entry: 102b9da10; end: 102b9da2f;  */

void FUN_102b9da10(void)

{
  func_0x000107c61168(&PTR_PTR_112891e80);
  return;
}



/* Entry: 102b9da30; end: 102b9da7f;  */

undefined1  [16] FUN_102b9da30(void)

{
  return ZEXT816(0x1105a7c48);
}



/* Entry: 102b9da80; end: 102b9daa7;  */

void FUN_102b9da80(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102b9daa8; end: 102b9daab;  */

void FUN_102b9daa8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102b9daac; end: 102b9dc4b;  */

void FUN_102b9daac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112efb428,&UNK_10db2b770);
  puVar1 = &UNK_1105a7d50;
  func_0x000107c613fc(&UNK_1105a7d50,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_102b9dc4c,puVar1);
  return;
}



/* Entry: 102b9dc4c; end: 102b9dc6b;  */

/* WARNING: Possible PIC construction at 0x000102b9dc14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9dc24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b9dc18) */
/* WARNING: Removing unreachable block (ram,0x000102b9dc28) */

void FUN_102b9dc4c(undefined8 *param_1)

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
  puVar4 = &UNK_1105a7d98;
  func_0x000107c613fc(&UNK_1105a7d98,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112efb430;
  func_0x0001000285a8(0x112efb430,&UNK_10db2b7b8);
  func_0x000107c613fc();
  pcVar6 = FUN_102b9dfe4;
  func_0x0001000841fc(FUN_102b9dfe4,puVar4,uVar5);
  func_0x000100084214(&UNK_10db2b780,0x34,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102b9dc6c; end: 102b9df9f;  */

void FUN_102b9dc6c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112efb438,&UNK_10db2b7c0);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112efb440,&UNK_10db2b7d0);
  puVar2 = &UNK_1105a7dc0;
  func_0x000107c613fc(&UNK_1105a7dc0,0x40,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  uVar8 = 0x102b9dff4;
  func_0x0001000823a8(0x102b9dff4,puVar2);
  pcVar3 = "ContextHeroContextMenuScopeEntryPointWrapperServiceProvider";
  func_0x000100082720("ContextHeroContextMenuScopeEntryPointWrapperServiceProvider",0x3b,2);
  FUN_102b9edbc();
  func_0x000100082720("ContextHeroContextMenuScopeGraphBridgeServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102b9d86c;
  func_0x0001000823a8(FUN_102b9d86c,0);
  func_0x000100082720("SCContextHeroContextMenuScopedServicesCleanupRelayServiceProvider",0x41,2);
  func_0x0001000285a8(0x112efb448,&UNK_10db2b7c8);
  puVar2 = &UNK_1105a7de8;
  func_0x000107c613fc(&UNK_1105a7de8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x102b9e004;
  func_0x0001000823a8(0x102b9e004,puVar2);
  func_0x000100082720("SCContextHeroContextMenuScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112efb3c8,&UNK_10db2b510);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x102b9e010;
  func_0x0001000823a8(0x102b9e010,uVar5);
  func_0x000100082720("SCContextHeroContextMenuScopeInitializationServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112efb3b8,&UNK_10db2b500);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x102b9e018;
  func_0x0001000823a8(0x102b9e018,uVar6);
  func_0x000100082720("SCContextHeroContextMenuScopedServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1105a7e10;
  func_0x000107c613fc(&UNK_1105a7e10,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x102b9e020;
  func_0x0001000823a8(0x102b9e020,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCContextHeroContextMenuScopeEntryPointProvider",0x2f,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 102b9dfa0; end: 102b9dfe3;  */

void FUN_102b9dfa0(void)

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



/* Entry: 102b9dfe4; end: 102b9e027;  */

void FUN_102b9dfe4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112efb438,&UNK_10db2b7c0);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112efb440,&UNK_10db2b7d0);
  puVar2 = &UNK_1105a7dc0;
  func_0x000107c613fc(&UNK_1105a7dc0,0x40,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x30) = uVar8;
  *(undefined8 *)(puVar2 + 0x38) = uVar9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  uVar3 = 0x102b9dff4;
  func_0x0001000823a8(0x102b9dff4,puVar2);
  pcVar4 = "ContextHeroContextMenuScopeEntryPointWrapperServiceProvider";
  func_0x000100082720("ContextHeroContextMenuScopeEntryPointWrapperServiceProvider",0x3b,2);
  FUN_102b9edbc();
  func_0x000100082720("ContextHeroContextMenuScopeGraphBridgeServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_102b9d86c;
  func_0x0001000823a8(FUN_102b9d86c,0);
  func_0x000100082720("SCContextHeroContextMenuScopedServicesCleanupRelayServiceProvider",0x41,2);
  func_0x0001000285a8(0x112efb448,&UNK_10db2b7c8);
  puVar2 = &UNK_1105a7de8;
  func_0x000107c613fc(&UNK_1105a7de8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar4;
  *(code **)(puVar2 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x102b9e004;
  func_0x0001000823a8(0x102b9e004,puVar2);
  func_0x000100082720("SCContextHeroContextMenuScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112efb3c8,&UNK_10db2b510);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x102b9e010;
  func_0x0001000823a8(0x102b9e010,uVar6);
  func_0x000100082720("SCContextHeroContextMenuScopeInitializationServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112efb3b8,&UNK_10db2b500);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x102b9e018;
  func_0x0001000823a8(0x102b9e018,uVar7);
  func_0x000100082720("SCContextHeroContextMenuScopedServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1105a7e10;
  func_0x000107c613fc(&UNK_1105a7e10,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x102b9e020;
  func_0x0001000823a8(0x102b9e020,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCContextHeroContextMenuScopeEntryPointProvider",0x2f,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 102b9e028; end: 102b9e377;  */

void FUN_102b9e028(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  FUN_102b9e4c8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  FUN_102bd8248(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  func_0x000102bd78ac();
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  func_0x000107c6157c();
  func_0x000102bd7ae8();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uVar7);
  *param_1 = param_2;
  return;
}



/* Entry: 102b9e378; end: 102b9e3c3;  */

void FUN_102b9e378(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b9e3c4; end: 102b9e3cb;  */

undefined8 FUN_102b9e3c4(void)

{
  return 0x1b;
}



/* Entry: 102b9e3cc; end: 102b9e44f;  */

void FUN_102b9e3cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102b9e508,param_2,FUN_102b9e50c,param_2,FUN_102b9e534,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102b9e450; end: 102b9e497;  */

undefined8 FUN_102b9e450(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102bd80b0();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 102b9e498; end: 102b9e4c7;  */

undefined ** FUN_102b9e498(void)

{
  return &PTR_DAT_113066970;
}



/* Entry: 102b9e4c8; end: 102b9e4e7;  */

void FUN_102b9e4c8(void)

{
  func_0x000107c61168(&PTR_PTR_112efb4b8);
  return;
}



/* Entry: 102b9e4e8; end: 102b9e50b;  */

undefined1  [16] FUN_102b9e4e8(void)

{
  return ZEXT816(0x1105a7e68);
}



/* Entry: 102b9e50c; end: 102b9e533;  */

void FUN_102b9e50c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102b9e534; end: 102b9e53b;  */

undefined8 FUN_102b9e534(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102bd80b0();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 102b9e53c; end: 102b9e577;  */

void FUN_102b9e53c(undefined8 *param_1,undefined8 param_2)

{
  FUN_102b9e578();
  func_0x0001000a7f38("SCContextHeroContextMenuScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102b9e578; end: 102b9e763;  */

void FUN_102b9e578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d230;
  ppuVar4 = &PTR_DAT_113066970;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112efb540;
  func_0x0001000285a8(0x112efb540,&UNK_10db2b940);
  func_0x0001000a6ee8(&UNK_1105a7e68,
                      "ContextHeroContextMenuScopeEntryPointWrapperScopeInitializationPluginKey",
                      0x48,2,FUN_102b9e7d8,param_1,uVar2,&UNK_1105a7e68,&PTR_DAT_112efb450);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1105a7eb8;
  func_0x000107c613fc(&UNK_1105a7eb8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105a80c8,
                      "ContextHeroContextMenuScopeGraphBridgeScopeInitializationPluginKey",0x42,2,
                      FUN_102b9e7e0,puVar3,uVar2,&UNK_1105a80c8,&PTR_DAT_112efb5d0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1105a7ee0;
  func_0x000107c613fc(&UNK_1105a7ee0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105a7c88,
                      "SCContextHeroContextMenuScopedServicesScopeInitializationPluginKey",0x42,2,
                      FUN_102b9e8c8,puVar3,uVar2,&UNK_1105a7c88,&PTR_DAT_112efb3d0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112efb548;
  func_0x0001000285a8(0x112efb548,&UNK_10db2b948);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 102b9e764; end: 102b9e7d7;  */

void FUN_102b9e764(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102b9e904;
  func_0x0001000823a8(0x102b9e904,param_3);
  func_0x000100082720("ContextHeroContextMenuScopeEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b9e7d8; end: 102b9e7df;  */

void FUN_102b9e7d8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102b9e904;
  func_0x0001000823a8();
  func_0x000100082720("ContextHeroContextMenuScopeEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b9e7e0; end: 102b9e81f;  */

void FUN_102b9e7e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102b9eea0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ContextHeroContextMenuScopeGraphBridgeScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b9e820; end: 102b9e8c7;  */

void FUN_102b9e820(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a7f08;
  func_0x000107c613fc(&UNK_1105a7f08,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102b9e8fc;
  func_0x0001000823a8(FUN_102b9e8fc,puVar1);
  func_0x000100082720("SCContextHeroContextMenuScopedServicesScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102b9e8c8; end: 102b9e8cf;  */

void FUN_102b9e8c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105a7f08;
  func_0x000107c613fc(&UNK_1105a7f08,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102b9e8fc;
  func_0x0001000823a8(FUN_102b9e8fc,puVar3);
  func_0x000100082720("SCContextHeroContextMenuScopedServicesScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102b9e8d0; end: 102b9e8fb;  */

void FUN_102b9e8d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b9e8fc; end: 102b9e90b;  */

void FUN_102b9e8fc(undefined8 *param_1)

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
  puVar1 = &UNK_1105a7d10;
  func_0x000107c613fc(&UNK_1105a7d10,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102b9da80;
  func_0x00010058fa64(FUN_102b9da80,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b9e90c; end: 102b9e993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b9e90c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_102b9eccc();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112efb550) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112efb558) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9e994);
  (*pcVar1)();
}



/* Entry: 102b9e994; end: 102b9e9f3; -[_TtC38ContextHeroContextMenuScopeGraphBridge53ContextHeroContextMenuScopeGraphBridgeSaberEntryPoint init] */

void FUN_102b9e994(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextHeroContextMenuScopeGraphBridge.ContextHeroContextMenuScopeGraphBridgeSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9e9c0);
  (*pcVar1)();
}



/* Entry: 102b9e9f4; end: 102b9ea2b; -[_TtC38ContextHeroContextMenuScopeGraphBridge53ContextHeroContextMenuScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b9ea10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b9ea14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9e9f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efb550));
  return;
}



/* Entry: 102b9ea2c; end: 102b9ea53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9ea2c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112efb558),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112efb550));
  return;
}



/* Entry: 102b9ea54; end: 102b9ea73;  */

void FUN_102b9ea54(void)

{
  func_0x000107c61168(&PTR_PTR_112891f40);
  return;
}



/* Entry: 102b9ea74; end: 102b9eafb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b9ea74(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efb588) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112efb590);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b9eafc);
  (*pcVar2)();
}



/* Entry: 102b9eafc; end: 102b9ebe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b9eafc(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efb588);
  *(undefined **)(unaff_x20 + _DAT_112efb588) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efb590);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112efb590))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105a8028;
  func_0x000107c613fc(&UNK_1105a8028,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102b9ebe8,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102b9ebe4; end: 102b9ebef;  */

void FUN_102b9ebe4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102b9ebf0; end: 102b9ec4f; -[_TtC38ContextHeroContextMenuScopeGraphBridge53SCContextHeroContextMenuScopedServicesSaberEntryPoint init] */

void FUN_102b9ebf0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextHeroContextMenuScopeGraphBridge.SCContextHeroContextMenuScopedServicesSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9ec1c);
  (*pcVar1)();
}



/* Entry: 102b9ec50; end: 102b9ec87; -[_TtC38ContextHeroContextMenuScopeGraphBridge53SCContextHeroContextMenuScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9ec50(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112efb590));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efb588));
  return;
}



/* Entry: 102b9ec88; end: 102b9ec8b;  */

void FUN_102b9ec88(void)

{
  return;
}



/* Entry: 102b9ec8c; end: 102b9ecab;  */

void FUN_102b9ec8c(void)

{
  FUN_102b9eafc();
  return;
}



/* Entry: 102b9ecac; end: 102b9eccb;  */

void FUN_102b9ecac(void)

{
  func_0x000107c61168(&PTR_PTR_112892008);
  return;
}



/* Entry: 102b9eccc; end: 102b9ed9b;  */

undefined8 FUN_102b9eccc(void)

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
  
  func_0x000107c61428(0x112efb5c0,&uStack_40,0x20,0);
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
    FUN_102b9ed9c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102b9ed9c; end: 102b9edbb;  */

void FUN_102b9ed9c(void)

{
  func_0x000107c61168(&PTR_PTR_1128920d0);
  return;
}



/* Entry: 102b9edbc; end: 102b9ee27;  */

void FUN_102b9edbc(void)

{
  func_0x0001000285a8(0x112efb5c8,&UNK_10db2ba18);
  func_0x0001000823a8(0x102b9edfc,0);
  return;
}



/* Entry: 102b9ee28; end: 102b9ee63; -[_TtC38ContextHeroContextMenuScopeGraphBridge46ContextHeroContextMenuScopeGraphBridgeServices init] */

void FUN_102b9ee28(undefined8 param_1)

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



/* Entry: 102b9ee64; end: 102b9ee97;  */

void FUN_102b9ee64(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b9ee98; end: 102b9ee9f;  */

undefined8 FUN_102b9ee98(void)

{
  return 0x1b;
}



/* Entry: 102b9eea0; end: 102b9f017;  */

void FUN_102b9eea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a8070;
  func_0x000107c613fc(&UNK_1105a8070,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102b9f018,puVar1);
  return;
}



/* Entry: 102b9f018; end: 102b9f01f;  */

void FUN_102b9f018(undefined8 *param_1)

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
  func_0x000107c61428(0x112efb5c0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112efb5c0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105a8108;
  func_0x000107c613fc(&UNK_1105a8108,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102b9f0cc;
  func_0x00010058fa64(0x102b9f0cc,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b9f020; end: 102b9f07b;  */

void FUN_102b9f020(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112efb5c0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112efb5c0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102b9f07c; end: 102b9f0d3;  */

undefined ** FUN_102b9f07c(void)

{
  return &PTR_DAT_113066970;
}



/* Entry: 102b9f0d4; end: 102b9f11b; -[SCContextHeroContextMenuScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9f0d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efb620;
  func_0x000107c61428(param_1 + _DAT_112efb620,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b9f11c; end: 102b9f173; -[SCContextHeroContextMenuScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9f11c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efb620;
  func_0x000107c61428(param_1 + _DAT_112efb620,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b9f174; end: 102b9f1bb; -[SCContextHeroContextMenuScopeGraphBridgeSaberEntryPoint contextHeroContextMenuScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9f174(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efb628;
  func_0x000107c61428(param_1 + _DAT_112efb628,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102b9f1bc; end: 102b9f21f; -[SCContextHeroContextMenuScopeGraphBridgeSaberEntryPoint setContextHeroContextMenuScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9f1bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efb628;
  func_0x000107c61428(param_1 + _DAT_112efb628,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102b9f220; end: 102b9f353;  */

/* WARNING: Possible PIC construction at 0x000102b9f2d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9f2f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9f310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b9f2dc) */
/* WARNING: Removing unreachable block (ram,0x000102b9f2f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9f220(void)

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
  func_0x000107c40588();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102b9ea54();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_102b9eccc();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9f354);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112efb550) = lVar5;
    *(long *)(lVar4 + _DAT_112efb558) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102b9f354; end: 102b9f37b; -[SCContextHeroContextMenuScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102b9f354(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b9f220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b9f37c; end: 102b9f3bf; -[SCContextHeroContextMenuScopeGraphBridgeSaberEntryPoint end] */

void FUN_102b9f37c(undefined8 param_1)

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



/* Entry: 102b9f3c0; end: 102b9f557;  */

void FUN_102b9f3c0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcb) || (param_3 != -0x7ffffffef0f06b80)) {
      uVar2 = 0xd000000000000035;
      func_0x000107c605b8(0xd000000000000035,0x800000010f0f9480,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ContextHeroContextMenuScopeGraphBridge/SCContextHeroContextMenuScopeGraphBridgeSaberEntryPoint.swift"
                            ,100,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9f558);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c538e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102b9f558; end: 102b9f603; -[SCContextHeroContextMenuScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102b9f558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b9f3c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b9f604; end: 102b9f66f; -[SCContextHeroContextMenuScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9f604(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efb620,0);
  *(undefined8 *)(param_1 + _DAT_112efb628) = 0;
  *(undefined8 *)(param_1 + _DAT_112efb630) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b9f670; end: 102b9f6a3;  */

void FUN_102b9f670(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b9f6a4; end: 102b9f6eb; -[SCContextHeroContextMenuScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b9f6d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b9f6d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9f6a4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efb620);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efb628));
  return;
}



/* Entry: 102b9f6ec; end: 102b9f70b;  */

void FUN_102b9f6ec(void)

{
  func_0x000107c61168(&PTR_PTR_112892180);
  return;
}



/* Entry: 102b9f70c; end: 102b9f753; -[SCSCContextHeroContextMenuScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9f70c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efb660;
  func_0x000107c61428(param_1 + _DAT_112efb660,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b9f754; end: 102b9f7ab; -[SCSCContextHeroContextMenuScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9f754(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efb660;
  func_0x000107c61428(param_1 + _DAT_112efb660,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b9f7ac; end: 102b9f883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9f7ac(undefined8 param_1,long param_2)

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
    FUN_102b9ecac();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112efb588) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b9f884);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112efb590);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efb668);
    *(long **)(unaff_x20 + _DAT_112efb668) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102b9f884; end: 102b9f8ab; -[SCSCContextHeroContextMenuScopedServicesSaberEntryPoint begin] */

void FUN_102b9f884(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b9f7ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b9f8ac; end: 102b9fa23;  */

/* WARNING: Possible PIC construction at 0x000102b9f914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9f9ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b9f918) */
/* WARNING: Removing unreachable block (ram,0x000102b9f9b0) */
/* WARNING: Removing unreachable block (ram,0x000102b9f9c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9f8ac(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112efb668);
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



/* Entry: 102b9fa24; end: 102b9fa2b;  */

void FUN_102b9fa24(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102b9fa2c; end: 102b9fa5f; -[SCSCContextHeroContextMenuScopedServicesSaberEntryPoint end] */

void FUN_102b9fa2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b9f8ac();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b9fa60; end: 102b9fb7f;  */

void FUN_102b9fa60(long param_1,long param_2,long param_3)

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
                        "ContextHeroContextMenuScopeGraphBridge/SCSCContextHeroContextMenuScopedServicesSaberEntryPoint.swift"
                        ,100,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9fb80);
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



/* Entry: 102b9fb80; end: 102b9fc2b; -[SCSCContextHeroContextMenuScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102b9fb80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b9fa60(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b9fc2c; end: 102b9fc8b; -[SCSCContextHeroContextMenuScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9fc2c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efb660,0);
  *(undefined8 *)(param_1 + _DAT_112efb668) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b9fc8c; end: 102b9fcbf;  */

void FUN_102b9fc8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b9fcc0; end: 102b9fcf7; -[SCSCContextHeroContextMenuScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9fcc0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efb660);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efb668));
  return;
}



/* Entry: 102b9fcf8; end: 102b9fd17;  */

void FUN_102b9fcf8(void)

{
  func_0x000107c61168(&PTR_PTR_112892248);
  return;
}



/* Entry: 102b9fd18; end: 102b9fd83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9fd18(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102ba010c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112efb6a0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102b9fd84; end: 102b9fdef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9fd84(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efb6a0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b9fdf0; end: 102b9fe4f; -[_TtC48ContextReactionsTrayScopedFactoryServiceProvider44SCContextTopLevelReactionsTrayScopedServices init] */

void FUN_102b9fdf0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextReactionsTrayScopedFactoryServiceProvider.SCContextTopLevelReactionsTrayScopedServices"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9fe1c);
  (*pcVar1)();
}



/* Entry: 102b9fe50; end: 102b9fe5f; -[_TtC48ContextReactionsTrayScopedFactoryServiceProvider44SCContextTopLevelReactionsTrayScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9fe50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112efb6a0));
  return;
}



/* Entry: 102b9fe60; end: 102b9fecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9fe60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105a8320;
  func_0x000107c613fc(&UNK_1105a8320,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102ba01a4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102b9fecc; end: 102b9ff67;  */

void FUN_102b9fecc(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105a8230;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105a8230;
  return;
}



/* Entry: 102b9ff68; end: 102b9ff9f;  */

void FUN_102b9ff68(long *param_1)

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



/* Entry: 102b9ffa0; end: 102b9ffa7;  */

undefined8 FUN_102b9ffa0(void)

{
  return 0x1b;
}



/* Entry: 102b9ffa8; end: 102ba00db;  */

void FUN_102b9ffa8(undefined8 *param_1)

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
  puVar1 = &UNK_1105a8348;
  func_0x000107c613fc(&UNK_1105a8348,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102ba017c;
  func_0x00010058fa64(FUN_102ba017c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102ba00dc; end: 102ba010b;  */

undefined ** FUN_102ba00dc(void)

{
  return &PTR_DAT_113066a30;
}



/* Entry: 102ba010c; end: 102ba012b;  */

void FUN_102ba010c(void)

{
  func_0x000107c61168(&PTR_PTR_112892308);
  return;
}



/* Entry: 102ba012c; end: 102ba017b;  */

undefined1  [16] FUN_102ba012c(void)

{
  return ZEXT816(0x1105a8280);
}



/* Entry: 102ba017c; end: 102ba01a3;  */

void FUN_102ba017c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102ba01a4; end: 102ba01a7;  */

void FUN_102ba01a4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102ba01a8; end: 102ba0317;  */

void FUN_102ba01a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112efb708,&UNK_10db2be60);
  puVar1 = &UNK_1105a8388;
  func_0x000107c613fc(&UNK_1105a8388,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_102ba0318,puVar1);
  return;
}



/* Entry: 102ba0318; end: 102ba0333;  */

/* WARNING: Possible PIC construction at 0x000102ba02ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba02fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba02f0) */
/* WARNING: Removing unreachable block (ram,0x000102ba0300) */

void FUN_102ba0318(undefined8 *param_1)

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
  puVar4 = &UNK_1105a83d0;
  func_0x000107c613fc(&UNK_1105a83d0,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112efb710;
  func_0x0001000285a8(0x112efb710,&UNK_10db2beb0);
  func_0x000107c613fc();
  pcVar6 = FUN_102ba065c;
  func_0x0001000841fc(FUN_102ba065c,puVar4,uVar5);
  func_0x000100084214(&UNK_10db2be70,0x3a,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102ba0334; end: 102ba065b;  */

void FUN_102ba0334(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112efb718,&UNK_10db2beb8);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102ba12f8();
  func_0x000100082720("ContextReactionsTrayScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_102b9ff68;
  func_0x0001000823a8(FUN_102b9ff68,0);
  func_0x000100082720("SCContextTopLevelReactionsTrayScopedServicesCleanupRelayServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112efb720,&UNK_10db2bed0);
  puVar4 = &UNK_1105a83f8;
  func_0x000107c613fc(&UNK_1105a83f8,0x38,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  *(undefined8 *)(puVar4 + 0x28) = param_5;
  *(undefined8 *)(puVar4 + 0x30) = param_6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  uVar8 = 0x102ba0668;
  func_0x0001000823a8(0x102ba0668,puVar4);
  func_0x000100082720("TopLevelReactionsTrayEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112efb728,&UNK_10db2bec0);
  puVar4 = &UNK_1105a8420;
  func_0x000107c613fc(&UNK_1105a8420,0x30,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(undefined8 **)(puVar4 + 0x18) = puVar2;
  *(code **)(puVar4 + 0x20) = pcVar3;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar8);
  pcVar5 = FUN_102ba06b4;
  func_0x0001000823a8(FUN_102ba06b4,puVar4);
  func_0x000100082720("SCContextTopLevelReactionsTrayScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  func_0x0001000285a8(0x112efb6a8,&UNK_10db2bbf0);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x102ba06c0;
  func_0x0001000823a8(0x102ba06c0,pcVar5);
  func_0x000100082720("SCContextTopLevelReactionsTrayScopeInitializationServiceProvider",0x40,2);
  func_0x0001000285a8(0x112efb698,&UNK_10db2bbe0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x102ba06c8;
  func_0x0001000823a8(0x102ba06c8,uVar6);
  func_0x000100082720("SCContextTopLevelReactionsTrayScopedServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_1105a8448;
  func_0x000107c613fc(&UNK_1105a8448,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar7;
  *(code **)(puVar4 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  uVar7 = 0x102ba06d0;
  func_0x0001000823a8(0x102ba06d0,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCContextTopLevelReactionsTrayScopeEntryPointProvider",0x35,2);
  *param_1 = uVar7;
  return;
}


