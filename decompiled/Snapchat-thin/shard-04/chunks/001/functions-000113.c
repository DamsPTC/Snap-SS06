/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103164334; end: 103164343; -[_TtC43OutOfAppPipCallScopedFactoryServiceProvider29OutOfAppPipCallScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103164334(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f45ff0));
  return;
}



/* Entry: 103164344; end: 1031643af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103164344(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110615980;
  func_0x000107c613fc(&UNK_110615980,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_103164688,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1031643b0; end: 10316444b;  */

void FUN_1031643b0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110615890;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110615890;
  return;
}



/* Entry: 10316444c; end: 103164483;  */

void FUN_10316444c(long *param_1)

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



/* Entry: 103164484; end: 10316448b;  */

undefined8 FUN_103164484(void)

{
  return 0x1b;
}



/* Entry: 10316448c; end: 1031645bf;  */

void FUN_10316448c(undefined8 *param_1)

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
  puVar1 = &UNK_1106159a8;
  func_0x000107c613fc(&UNK_1106159a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103164660;
  func_0x00010058fa64(FUN_103164660,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031645c0; end: 1031645ef;  */

undefined ** FUN_1031645c0(void)

{
  return &PTR_DAT_1130666e8;
}



/* Entry: 1031645f0; end: 10316460f;  */

void FUN_1031645f0(void)

{
  func_0x000107c61168(&PTR_PTR_1128bbf70);
  return;
}



/* Entry: 103164610; end: 10316465f;  */

undefined1  [16] FUN_103164610(void)

{
  return ZEXT816(0x1106158e0);
}



/* Entry: 103164660; end: 103164687;  */

void FUN_103164660(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 103164688; end: 10316468b;  */

void FUN_103164688(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10316468c; end: 10316482b;  */

void FUN_10316468c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f46058,&UNK_10db92df0);
  puVar1 = &UNK_1106159e8;
  func_0x000107c613fc(&UNK_1106159e8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10316482c,puVar1);
  return;
}



/* Entry: 10316482c; end: 10316484b;  */

/* WARNING: Possible PIC construction at 0x0001031647f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103164804: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031647f8) */
/* WARNING: Removing unreachable block (ram,0x000103164808) */

void FUN_10316482c(undefined8 *param_1)

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
  puVar4 = &UNK_110615a30;
  func_0x000107c613fc(&UNK_110615a30,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112f46060;
  func_0x0001000285a8(0x112f46060,&UNK_10db92e30);
  func_0x000107c613fc();
  pcVar6 = FUN_103164bc4;
  func_0x0001000841fc(FUN_103164bc4,puVar4,uVar5);
  func_0x000100084214(&UNK_10db92e00,0x2b,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10316484c; end: 103164b7f;  */

void FUN_10316484c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x0001000285a8(0x112f46068,&UNK_10db92e38);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f46070,&UNK_10db92e40);
  puVar2 = &UNK_110615a58;
  func_0x000107c613fc(&UNK_110615a58,0x40,7);
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
  uVar8 = 0x103164bd4;
  func_0x0001000823a8(0x103164bd4,puVar2);
  pcVar3 = "OutOfAppPipCallEntryPointWrapperServiceProvider";
  func_0x000100082720("OutOfAppPipCallEntryPointWrapperServiceProvider",0x2f,2);
  FUN_103165878();
  func_0x000100082720("OutOfAppPipCallScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10316444c;
  func_0x0001000823a8(FUN_10316444c,0);
  func_0x000100082720("OutOfAppPipCallScopedServicesCleanupRelayServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f46078,&UNK_10db92e50);
  puVar2 = &UNK_110615a80;
  func_0x000107c613fc(&UNK_110615a80,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x103164be4;
  func_0x0001000823a8(0x103164be4,puVar2);
  func_0x000100082720("OutOfAppPipCallScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112f45ff8,&UNK_10db92c00);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x103164bf0;
  func_0x0001000823a8(0x103164bf0,uVar5);
  func_0x000100082720("OutOfAppPipCallScopeInitializationServiceProvider",0x31,2);
  func_0x0001000285a8(0x112f45fe8,&UNK_10db92bf0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x103164bf8;
  func_0x0001000823a8(0x103164bf8,uVar6);
  func_0x000100082720("OutOfAppPipCallScopedServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110615aa8;
  func_0x000107c613fc(&UNK_110615aa8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x103164c00;
  func_0x0001000823a8(0x103164c00,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("OutOfAppPipCallScopeEntryPointProvider",0x26,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 103164b80; end: 103164bc3;  */

void FUN_103164b80(void)

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



/* Entry: 103164bc4; end: 103164c07;  */

void FUN_103164bc4(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001000285a8(0x112f46068,&UNK_10db92e38);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f46070,&UNK_10db92e40);
  puVar2 = &UNK_110615a58;
  func_0x000107c613fc(&UNK_110615a58,0x40,7);
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
  uVar3 = 0x103164bd4;
  func_0x0001000823a8(0x103164bd4,puVar2);
  pcVar4 = "OutOfAppPipCallEntryPointWrapperServiceProvider";
  func_0x000100082720("OutOfAppPipCallEntryPointWrapperServiceProvider",0x2f,2);
  FUN_103165878();
  func_0x000100082720("OutOfAppPipCallScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_10316444c;
  func_0x0001000823a8(FUN_10316444c,0);
  func_0x000100082720("OutOfAppPipCallScopedServicesCleanupRelayServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f46078,&UNK_10db92e50);
  puVar2 = &UNK_110615a80;
  func_0x000107c613fc(&UNK_110615a80,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar4;
  *(code **)(puVar2 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x103164be4;
  func_0x0001000823a8(0x103164be4,puVar2);
  func_0x000100082720("OutOfAppPipCallScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112f45ff8,&UNK_10db92c00);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x103164bf0;
  func_0x0001000823a8(0x103164bf0,uVar6);
  func_0x000100082720("OutOfAppPipCallScopeInitializationServiceProvider",0x31,2);
  func_0x0001000285a8(0x112f45fe8,&UNK_10db92bf0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x103164bf8;
  func_0x0001000823a8(0x103164bf8,uVar7);
  func_0x000100082720("OutOfAppPipCallScopedServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110615aa8;
  func_0x000107c613fc(&UNK_110615aa8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x103164c00;
  func_0x0001000823a8(0x103164c00,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("OutOfAppPipCallScopeEntryPointProvider",0x26,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 103164c08; end: 103164d57;  */

void FUN_103164c08(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  FUN_103164f84();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  FUN_103166d04(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uStack_90);
  func_0x000103166a3c(uStack_68,uVar1,uVar2,uVar3,uVar4,uStack_90);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 103164d58; end: 103164e33;  */

long FUN_103164d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  FUN_103166d04(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000103166a3c(param_1,param_2,param_3,param_4,param_5,param_6);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 103164e34; end: 103164e7f;  */

void FUN_103164e34(void)

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



/* Entry: 103164e80; end: 103164e87;  */

undefined8 FUN_103164e80(void)

{
  return 0x1b;
}



/* Entry: 103164e88; end: 103164f0b;  */

void FUN_103164e88(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103164fc4,param_2,FUN_103164fc8,param_2,FUN_103164ff0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103164f0c; end: 103164f53;  */

undefined8 FUN_103164f0c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_103166c90();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 103164f54; end: 103164f83;  */

undefined ** FUN_103164f54(void)

{
  return &PTR_DAT_1130666e8;
}



/* Entry: 103164f84; end: 103164fa3;  */

void FUN_103164f84(void)

{
  func_0x000107c61168(&PTR_PTR_112f460e8);
  return;
}



/* Entry: 103164fa4; end: 103164fc7;  */

undefined1  [16] FUN_103164fa4(void)

{
  return ZEXT816(0x110615b00);
}



/* Entry: 103164fc8; end: 103164fef;  */

void FUN_103164fc8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103164ff0; end: 103164ff7;  */

undefined8 FUN_103164ff0(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_103166c90();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 103164ff8; end: 103165033;  */

void FUN_103164ff8(undefined8 *param_1,undefined8 param_2)

{
  FUN_103165034();
  func_0x0001000a7f38("OutOfAppPipCallScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  *param_1 = param_2;
  return;
}



/* Entry: 103165034; end: 10316521f;  */

void FUN_103165034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cdf8;
  ppuVar4 = &PTR_DAT_1130666e8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f46170;
  func_0x0001000285a8(0x112f46170,&UNK_10db92f98);
  func_0x0001000a6ee8(&UNK_110615b00,"OutOfAppPipCallEntryPointWrapperScopeInitializationPluginKey",
                      0x3c,2,FUN_103165294,param_1,uVar2,&UNK_110615b00,&PTR_DAT_112f46080);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110615b50;
  func_0x000107c613fc(&UNK_110615b50,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110615d60,"OutOfAppPipCallScopeGraphBridgeScopeInitializationPluginKey",
                      0x3b,2,FUN_10316529c,puVar3,uVar2,&UNK_110615d60,&PTR_DAT_112f46200);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110615b78;
  func_0x000107c613fc(&UNK_110615b78,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110615920,"OutOfAppPipCallScopedServicesScopeInitializationPluginKey",
                      0x39,2,FUN_103165384,puVar3,uVar2,&UNK_110615920,&PTR_DAT_112f46000);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f46178;
  func_0x0001000285a8(0x112f46178,&UNK_10db92fa0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 103165220; end: 103165293;  */

void FUN_103165220(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1031653c0;
  func_0x0001000823a8(0x1031653c0,param_3);
  func_0x000100082720("OutOfAppPipCallEntryPointWrapperScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103165294; end: 10316529b;  */

void FUN_103165294(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1031653c0;
  func_0x0001000823a8();
  func_0x000100082720("OutOfAppPipCallEntryPointWrapperScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10316529c; end: 1031652db;  */

void FUN_10316529c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10316595c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("OutOfAppPipCallScopeGraphBridgeScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031652dc; end: 103165383;  */

void FUN_1031652dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110615ba0;
  func_0x000107c613fc(&UNK_110615ba0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1031653b8;
  func_0x0001000823a8(FUN_1031653b8,puVar1);
  func_0x000100082720("OutOfAppPipCallScopedServicesScopeInitializationPluginProvider",0x3e,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103165384; end: 10316538b;  */

void FUN_103165384(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110615ba0;
  func_0x000107c613fc(&UNK_110615ba0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1031653b8;
  func_0x0001000823a8(FUN_1031653b8,puVar3);
  func_0x000100082720("OutOfAppPipCallScopedServicesScopeInitializationPluginProvider",0x3e,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10316538c; end: 1031653b7;  */

void FUN_10316538c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031653b8; end: 1031653c7;  */

void FUN_1031653b8(undefined8 *param_1)

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
  puVar1 = &UNK_1106159a8;
  func_0x000107c613fc(&UNK_1106159a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103164660;
  func_0x00010058fa64(FUN_103164660,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031653c8; end: 10316544f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031653c8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_103165788();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f46180) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f46188) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103165450);
  (*pcVar1)();
}



/* Entry: 103165450; end: 1031654af; -[_TtC31OutOfAppPipCallScopeGraphBridge46OutOfAppPipCallScopeGraphBridgeSaberEntryPoint init] */

void FUN_103165450(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OutOfAppPipCallScopeGraphBridge.OutOfAppPipCallScopeGraphBridgeSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10316547c);
  (*pcVar1)();
}



/* Entry: 1031654b0; end: 1031654e7; -[_TtC31OutOfAppPipCallScopeGraphBridge46OutOfAppPipCallScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031654cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031654d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031654b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f46180));
  return;
}



/* Entry: 1031654e8; end: 10316550f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031654e8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f46188),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f46180));
  return;
}



/* Entry: 103165510; end: 10316552f;  */

void FUN_103165510(void)

{
  func_0x000107c61168(&PTR_PTR_1128bc030);
  return;
}



/* Entry: 103165530; end: 1031655b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103165530(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f461b8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f461c0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031655b8);
  (*pcVar2)();
}



/* Entry: 1031655b8; end: 10316569f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031655b8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f461b8);
  *(undefined **)(unaff_x20 + _DAT_112f461b8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f461c0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f461c0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110615cc0;
  func_0x000107c613fc(&UNK_110615cc0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1031656a4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1031656a0; end: 1031656ab;  */

void FUN_1031656a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031656ac; end: 10316570b; -[_TtC31OutOfAppPipCallScopeGraphBridge44OutOfAppPipCallScopedServicesSaberEntryPoint init] */

void FUN_1031656ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OutOfAppPipCallScopeGraphBridge.OutOfAppPipCallScopedServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031656d8);
  (*pcVar1)();
}



/* Entry: 10316570c; end: 103165743; -[_TtC31OutOfAppPipCallScopeGraphBridge44OutOfAppPipCallScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10316570c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f461c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f461b8));
  return;
}



/* Entry: 103165744; end: 103165747;  */

void FUN_103165744(void)

{
  return;
}



/* Entry: 103165748; end: 103165767;  */

void FUN_103165748(void)

{
  FUN_1031655b8();
  return;
}



/* Entry: 103165768; end: 103165787;  */

void FUN_103165768(void)

{
  func_0x000107c61168(&PTR_PTR_1128bc0f8);
  return;
}



/* Entry: 103165788; end: 103165857;  */

undefined8 FUN_103165788(void)

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
  
  func_0x000107c61428(0x112f461f0,&uStack_40,0x20,0);
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
    FUN_103165858();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 103165858; end: 103165877;  */

void FUN_103165858(void)

{
  func_0x000107c61168(&PTR_PTR_1128bc1c0);
  return;
}



/* Entry: 103165878; end: 1031658e3;  */

void FUN_103165878(void)

{
  func_0x0001000285a8(0x112f461f8,&UNK_10db93058);
  func_0x0001000823a8(0x1031658b8,0);
  return;
}



/* Entry: 1031658e4; end: 10316591f; -[_TtC31OutOfAppPipCallScopeGraphBridge39OutOfAppPipCallScopeGraphBridgeServices init] */

void FUN_1031658e4(undefined8 param_1)

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



/* Entry: 103165920; end: 103165953;  */

void FUN_103165920(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103165954; end: 10316595b;  */

undefined8 FUN_103165954(void)

{
  return 0x1b;
}



/* Entry: 10316595c; end: 103165ad3;  */

void FUN_10316595c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110615d08;
  func_0x000107c613fc(&UNK_110615d08,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103165ad4,puVar1);
  return;
}



/* Entry: 103165ad4; end: 103165adb;  */

void FUN_103165ad4(undefined8 *param_1)

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
  func_0x000107c61428(0x112f461f0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f461f0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110615da0;
  func_0x000107c613fc(&UNK_110615da0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x103165b88;
  func_0x00010058fa64(0x103165b88,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103165adc; end: 103165b37;  */

void FUN_103165adc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f461f0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f461f0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103165b38; end: 103165b8f;  */

undefined ** FUN_103165b38(void)

{
  return &PTR_DAT_1130666e8;
}



/* Entry: 103165b90; end: 103165bd7; -[SCOutOfAppPipCallScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103165b90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f46250;
  func_0x000107c61428(param_1 + _DAT_112f46250,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103165bd8; end: 103165c2f; -[SCOutOfAppPipCallScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103165bd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f46250;
  func_0x000107c61428(param_1 + _DAT_112f46250,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103165c30; end: 103165c77; -[SCOutOfAppPipCallScopeGraphBridgeSaberEntryPoint outOfAppPipCallScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103165c30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f46258;
  func_0x000107c61428(param_1 + _DAT_112f46258,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103165c78; end: 103165cdb; -[SCOutOfAppPipCallScopeGraphBridgeSaberEntryPoint setOutOfAppPipCallScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103165c78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f46258;
  func_0x000107c61428(param_1 + _DAT_112f46258,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103165cdc; end: 103165e0f;  */

/* WARNING: Possible PIC construction at 0x000103165d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103165db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103165dcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103165d98) */
/* WARNING: Removing unreachable block (ram,0x000103165db4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103165cdc(void)

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
  func_0x000107c4e108();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_103165510();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_103165788();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103165e10);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f46180) = lVar5;
    *(long *)(lVar4 + _DAT_112f46188) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 103165e10; end: 103165e37; -[SCOutOfAppPipCallScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103165e10(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103165cdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103165e38; end: 103165e7b; -[SCOutOfAppPipCallScopeGraphBridgeSaberEntryPoint end] */

void FUN_103165e38(undefined8 param_1)

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



/* Entry: 103165e7c; end: 103166013;  */

void FUN_103165e7c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0ed5920)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f12a6e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "OutOfAppPipCallScopeGraphBridge/SCOutOfAppPipCallScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x56,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103166014);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57108();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103166014; end: 1031660bf; -[SCOutOfAppPipCallScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_103166014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103165e7c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031660c0; end: 10316612b; -[SCOutOfAppPipCallScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031660c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f46250,0);
  *(undefined8 *)(param_1 + _DAT_112f46258) = 0;
  *(undefined8 *)(param_1 + _DAT_112f46260) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10316612c; end: 10316615f;  */

void FUN_10316612c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103166160; end: 1031661a7; -[SCOutOfAppPipCallScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010316618c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103166190) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103166160(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f46250);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f46258));
  return;
}



/* Entry: 1031661a8; end: 1031661c7;  */

void FUN_1031661a8(void)

{
  func_0x000107c61168(&PTR_PTR_1128bc270);
  return;
}



/* Entry: 1031661c8; end: 10316620f; -[SCOutOfAppPipCallScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031661c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f46290;
  func_0x000107c61428(param_1 + _DAT_112f46290,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103166210; end: 103166267; -[SCOutOfAppPipCallScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103166210(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f46290;
  func_0x000107c61428(param_1 + _DAT_112f46290,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103166268; end: 10316633f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103166268(undefined8 param_1,long param_2)

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
    FUN_103165768();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f461b8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103166340);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f461c0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f46298);
    *(long **)(unaff_x20 + _DAT_112f46298) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103166340; end: 103166367; -[SCOutOfAppPipCallScopedServicesSaberEntryPoint begin] */

void FUN_103166340(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103166268();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103166368; end: 1031664df;  */

/* WARNING: Possible PIC construction at 0x0001031663d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103166468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031663d4) */
/* WARNING: Removing unreachable block (ram,0x00010316646c) */
/* WARNING: Removing unreachable block (ram,0x000103166484) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103166368(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f46298);
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



/* Entry: 1031664e0; end: 1031664e7;  */

void FUN_1031664e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031664e8; end: 10316651b; -[SCOutOfAppPipCallScopedServicesSaberEntryPoint end] */

void FUN_1031664e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103166368();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10316651c; end: 10316663b;  */

void FUN_10316651c(long param_1,long param_2,long param_3)

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
                        "OutOfAppPipCallScopeGraphBridge/SCOutOfAppPipCallScopedServicesSaberEntryPoint.swift"
                        ,0x54,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10316663c);
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



/* Entry: 10316663c; end: 1031666e7; -[SCOutOfAppPipCallScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10316663c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10316651c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031666e8; end: 103166747; -[SCOutOfAppPipCallScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031666e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f46290,0);
  *(undefined8 *)(param_1 + _DAT_112f46298) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103166748; end: 10316677b;  */

void FUN_103166748(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10316677c; end: 1031667b3; -[SCOutOfAppPipCallScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10316677c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f46290);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f46298));
  return;
}



/* Entry: 1031667b4; end: 1031667d3;  */

void FUN_1031667b4(void)

{
  func_0x000107c61168(&PTR_PTR_1128bc338);
  return;
}



/* Entry: 1031667d4; end: 103166c8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031667d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112d3b7c0,&UNK_10d904cb0);
  uVar5 = param_4;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar1 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  uVar7 = *(undefined8 *)(param_6 + _DAT_112ff82c0);
  uVar5 = *(undefined8 *)(param_3 + _DAT_11307b888);
  uVar6 = *(undefined8 *)(param_5 + _DAT_112ff8ac0);
  lVar2 = 0;
  func_0x000103167610();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x38) = 0;
  func_0x000107c61614(lVar2 + 0x30,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *(undefined8 *)(lVar2 + 0x18) = uVar7;
  *(undefined8 *)(lVar2 + 0x20) = uVar5;
  *(undefined8 *)(lVar2 + 0x28) = uVar6;
  func_0x0001000285a8(0x112f3c7d8,&UNK_10db91820);
  func_0x000107c615f0(uVar7);
  func_0x000107c615f0(uVar5);
  func_0x000107c615f0(uVar6);
  func_0x000107c61174();
  uVar5 = param_2;
  func_0x000107c5c6e0();
  func_0x000107c61180();
  uVar1 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  lVar4 = _DAT_11307b898;
  lVar3 = 0;
  func_0x000103167f0c();
  func_0x000107c613fc();
  func_0x0001005f60b4(0);
  func_0x000107c613fc();
  uVar6 = ((undefined8 *)(param_3 + lVar4))[1];
  uVar5 = *(undefined8 *)(param_3 + lVar4);
  func_0x000107c615f0(uVar5);
  lVar4 = lVar2;
  func_0x000107c6157c();
  func_0x0001005f60d4();
  *(long *)(lVar3 + 0x40) = lVar4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined1 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x10) = param_1;
  *(undefined8 *)(lVar3 + 0x18) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar6;
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  *(long *)(lVar3 + 0x30) = lVar2;
  func_0x000107c40be0();
  func_0x000107c61180();
  *(undefined8 *)(lVar3 + 0x38) = uVar5;
  *(long *)(unaff_x20 + 0x10) = lVar3;
  *(undefined ***)(lVar2 + 0x38) = &PTR_DAT_110615fa0;
  func_0x000107c61604(lVar2 + 0x30,lVar3);
  func_0x000107c6157c(lVar3);
  FUN_1031676f4();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61574(lVar2);
  func_0x000107c61574(lVar3);
  return unaff_x20;
}



/* Entry: 103166c90; end: 103166cb3;  */

undefined8 FUN_103166c90(void)

{
  FUN_103167810();
  return 0;
}



/* Entry: 103166cb4; end: 103166cd7;  */

void FUN_103166cb4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103166cd8; end: 103166cdb;  */

void FUN_103166cd8(void)

{
  return;
}



/* Entry: 103166cdc; end: 103166d03;  */

undefined8 FUN_103166cdc(void)

{
  FUN_103167810();
  return 0;
}



/* Entry: 103166d04; end: 103166d23;  */

void FUN_103166d04(void)

{
  func_0x000107c61168(&PTR_PTR_112f46308);
  return;
}



/* Entry: 103166d24; end: 103166edb;  */

void FUN_103166d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  char *pcVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  uVar7 = *unaff_x20;
  iVar1 = (int)unaff_x20[5];
  func_0x000107c5ae0c();
  if (iVar1 == 0) {
    func_0x0001000d224c(&puStack_90);
    if (puStack_90 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puStack_90;
      func_0x000107c509b4(puStack_90);
      func_0x000107c61180();
      func_0x000107c615e8(puStack_90);
    }
    FUN_103166f84(param_1,param_2,param_3,puVar6,param_4,param_5);
    func_0x000107c615e8(puVar6);
  }
  else {
    uVar5 = unaff_x20[3];
    puVar6 = &UNK_110615ec0;
    func_0x000107c613fc(&UNK_110615ec0,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    puVar2 = &UNK_110615ee8;
    func_0x000107c613fc(&UNK_110615ee8,0x48,7);
    *(undefined **)(puVar2 + 0x10) = puVar6;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    *(undefined8 *)(puVar2 + 0x20) = param_5;
    *(undefined8 *)(puVar2 + 0x28) = param_1;
    *(undefined8 *)(puVar2 + 0x30) = param_2;
    *(undefined8 *)(puVar2 + 0x38) = param_3;
    *(undefined8 *)(puVar2 + 0x40) = uVar7;
    pcStack_70 = FUN_103167654;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100f0f800;
    puStack_78 = &UNK_110615f00;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000107c6157c(param_5);
    func_0x000107c61174(param_1);
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar6);
    pcVar4 = "createView(pipInfoObservable:onUserVideoStreamVisibilityChanged:completion:)";
    func_0x0001000c10c0(
                       "createView(pipInfoObservable:onUserVideoStreamVisibilityChanged:completion:)"
                       );
    func_0x000107c61180();
    func_0x000107c44288(uVar5);
    func_0x000107c615e8(pcVar4);
    func_0x000107c60bd0(ppuVar3);
  }
  return;
}



/* Entry: 103166edc; end: 103166f83;  */

void FUN_103166edc(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    (*param_3)();
  }
  else {
    FUN_103166f84(param_5,param_6,param_7,param_1,param_3,param_4);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103166f84; end: 10316737b;  */

void FUN_103166f84(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,
                  code *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *apuStack_c0 [3];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  if (param_4 == 0) {
    (*param_5)(0);
  }
  else {
    puVar1 = PTR_PTR_1126cf8c8;
    func_0x000107c610f8(PTR_PTR_1126cf8c8);
    func_0x000107c615f0(param_4);
    func_0x000107c453e4(puVar1);
    puVar2 = PTR_PTR_1126cf8d0;
    func_0x000107c61168(PTR_PTR_1126cf8d0);
    puVar3 = &UNK_110615ec0;
    func_0x000107c613fc(&UNK_110615ec0,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    func_0x0001000285a8(0x112f455e8,&UNK_10db91900);
    func_0x000107c613fc();
    func_0x000107c615f0(param_4);
    uVar6 = 0x103167684;
    func_0x0001000bdd8c(0x103167684,puVar3);
    uVar4 = uVar6;
    func_0x0001000bf56c();
    func_0x000107c61574(uVar6);
    func_0x000107c5decc(puVar2);
    func_0x000107c61180();
    func_0x000107c615e8(param_4);
    func_0x000107c61170(uVar4);
    func_0x000107c58cb0(puVar1);
    func_0x000107c615e8(puVar2);
    func_0x000107c5cb24(param_1);
    func_0x000107c61180();
    puVar2 = PTR_PTR_1126acca8;
    func_0x000107c610f8();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_103158b10;
    puStack_88 = &UNK_110615f28;
    ppuVar5 = &puStack_a0;
    uStack_80 = param_2;
    puStack_78 = param_3;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c6157c(param_3);
    func_0x000107c47ea8();
    func_0x000107c61170(param_1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puStack_78);
    func_0x000107c52f70(puVar2);
    uStack_98 = 0;
    puStack_a0 = (undefined *)0x0;
    puStack_88 = (undefined *)0x0;
    pcStack_90 = (code *)0x0;
    uVar6 = 0;
    FUN_10316769c(0,0x112f455f0,&PTR_PTR_1126acca8);
    apuStack_c0[0] = puVar2;
    uStack_a8 = uVar6;
    func_0x000107c610f8(PTR_PTR_1126accb0);
    func_0x000107c615f0(param_4);
    func_0x000107c61174(puVar2);
    ppuVar5 = &puStack_a0;
    FUN_103158be8(ppuVar5,apuStack_c0,param_4);
    func_0x000107c615e8(param_4);
    func_0x000107c61174();
    ppuVar7 = ppuVar5;
    func_0x000107c5dbc0();
    func_0x000107c61180();
    if (ppuVar7 != (undefined **)0x0) {
      puVar10 = &UNK_110615ec0;
      puVar8 = puVar10;
      func_0x000107c613fc(&UNK_110615ec0,0x18,7);
      func_0x000107c61644(puVar8 + 0x10);
      uStack_80 = 0x10316768c;
      puStack_a0 = puVar3;
      uStack_98 = 0x42000000;
      pcStack_90 = (code *)&UNK_100f11710;
      puStack_88 = &UNK_110615f50;
      ppuVar9 = &puStack_a0;
      puStack_78 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      func_0x000107c61574(puStack_78);
      FUN_10316769c(0,0x112f455f8,&PTR_PTR_1126cf890);
      func_0x000107c614e8();
      func_0x000107c4fcd8(ppuVar7);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c613fc(&UNK_110615ec0,0x18,7);
      func_0x000107c61644(puVar10 + 0x10);
      uStack_80 = 0x103167694;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      pcStack_90 = (code *)&UNK_100f11710;
      puStack_88 = &UNK_110615f78;
      ppuVar9 = &puStack_a0;
      puStack_78 = puVar10;
      func_0x000107c60bc4(ppuVar9);
      func_0x000107c61574(puStack_78);
      FUN_10316769c(0,0x112f45600,&PTR_PTR_1126cf898);
      func_0x000107c614e8();
      func_0x000107c4fcd8(ppuVar7);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c615e8(ppuVar7);
    }
    (*param_5)(ppuVar5);
    func_0x000107c615e8(param_4);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(ppuVar5);
    func_0x000107c61170(ppuVar5);
  }
  return;
}



/* Entry: 10316737c; end: 10316744b;  */

void FUN_10316737c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = param_2 + 0x30;
    func_0x000107c61618();
    if (lVar1 == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      lVar2 = *(long *)(lVar1 + 0x48);
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c615f0();
        func_0x000107c40c1c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        func_0x000107c61574(param_2);
        func_0x000107c615e8(lVar1);
        goto LAB_103167430;
      }
      func_0x000107c61574(param_2);
      func_0x000107c615e8(lVar1);
    }
  }
  lVar3 = 0;
LAB_103167430:
  *param_1 = lVar3;
  return;
}



/* Entry: 10316744c; end: 10316753b;  */

undefined * FUN_10316744c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + 0x30;
    func_0x000107c61618();
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar2 = *(long *)(lVar1 + 0x48);
      if (lVar2 == 0) {
        lVar1 = 0;
      }
      else {
        lVar1 = lVar2;
        func_0x000107c615f0(lVar2);
        func_0x000107c40c1c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
      }
      func_0x000107c615e8();
    }
    puVar3 = PTR_PTR_1126cf890;
    func_0x000107c610f8(PTR_PTR_1126cf890);
    func_0x000107c469e4(0,0,0,0);
    func_0x000107c61574(param_1);
    func_0x000107c615e8(lVar1);
  }
  return puVar3;
}



/* Entry: 10316753c; end: 1031675cb;  */

undefined * FUN_10316753c(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126cf898;
    func_0x000107c610f8(PTR_PTR_1126cf898);
    func_0x000107c469a8(0,0,0,0);
    func_0x000107c3e2a0();
    func_0x000107c61574(param_1);
  }
  return puVar1;
}



/* Entry: 1031675cc; end: 10316762f;  */

void FUN_1031675cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_103167630(unaff_x20 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103167630; end: 103167653;  */

undefined8 FUN_103167630(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103167654; end: 10316769b;  */

void FUN_103167654(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = *(code **)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar6 + 0x10,auStack_68,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar6 == 0) {
    (*pcVar3)();
  }
  else {
    FUN_103166f84(uVar4,uVar2,uVar5,param_1,pcVar3,uVar1);
    func_0x000107c61574(lVar6);
  }
  return;
}


