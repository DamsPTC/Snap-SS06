/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031547e4; end: 10315480b;  */

void FUN_1031547e4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10315480c; end: 10315480f;  */

void FUN_10315480c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103154810; end: 1031549c7;  */

void FUN_103154810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f45218,&UNK_10db91440);
  puVar1 = &UNK_110613d78;
  func_0x000107c613fc(&UNK_110613d78,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1031549c8,puVar1);
  return;
}



/* Entry: 1031549c8; end: 1031549e7;  */

/* WARNING: Possible PIC construction at 0x000103154988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103154998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031549a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010315499c) */
/* WARNING: Removing unreachable block (ram,0x00010315498c) */
/* WARNING: Removing unreachable block (ram,0x0001031549ac) */

void FUN_1031549c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_110613dc0;
  func_0x000107c613fc(&UNK_110613dc0,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  uVar7 = 0x112f45220;
  func_0x0001000285a8(0x112f45220,&UNK_10db91480);
  func_0x000107c613fc();
  pcVar8 = FUN_103154d78;
  func_0x0001000841fc(FUN_103154d78,puVar6,uVar7);
  func_0x000100084214(&UNK_10db91450,0x28,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1031549e8; end: 103154d2b;  */

void FUN_1031549e8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  func_0x0001000285a8(0x112f45228,&UNK_10db91488);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f45230,&UNK_10db91490);
  puVar2 = &UNK_110613de8;
  func_0x000107c613fc(&UNK_110613de8,0x48,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  uVar8 = 0x103154d88;
  func_0x0001000823a8(0x103154d88,puVar2);
  pcVar3 = "InAppPipCallEntryPointWrapperServiceProvider";
  func_0x000100082720("InAppPipCallEntryPointWrapperServiceProvider",0x2c,2);
  FUN_103155a98();
  func_0x000100082720("InAppPipCallScopeGraphBridgeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1031545d0;
  func_0x0001000823a8(FUN_1031545d0,0);
  func_0x000100082720("InAppPipCallScopedServicesCleanupRelayServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f45238,&UNK_10db914a0);
  puVar2 = &UNK_110613e10;
  func_0x000107c613fc(&UNK_110613e10,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x103154d9c;
  func_0x0001000823a8(0x103154d9c,puVar2);
  func_0x000100082720("InAppPipCallScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f451b8,&UNK_10db91250);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x103154da8;
  func_0x0001000823a8(0x103154da8,uVar5);
  func_0x000100082720("InAppPipCallScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112f451a8,&UNK_10db91240);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x103154db0;
  func_0x0001000823a8(0x103154db0,uVar6);
  func_0x000100082720("InAppPipCallScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110613e38;
  func_0x000107c613fc(&UNK_110613e38,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x103154db8;
  func_0x0001000823a8(0x103154db8,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("InAppPipCallScopeEntryPointProvider",0x23,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 103154d2c; end: 103154d77;  */

void FUN_103154d2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103154d78; end: 103154dbf;  */

void FUN_103154d78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112f45228,&UNK_10db91488);
  puVar3 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f45230,&UNK_10db91490);
  puVar4 = &UNK_110613de8;
  func_0x000107c613fc(&UNK_110613de8,0x48,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  *(undefined8 *)(puVar4 + 0x20) = uVar10;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  *(undefined8 *)(puVar4 + 0x30) = uVar1;
  *(undefined8 *)(puVar4 + 0x38) = uVar9;
  *(undefined8 *)(puVar4 + 0x40) = uVar2;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar2);
  uVar5 = 0x103154d88;
  func_0x0001000823a8(0x103154d88,puVar4);
  pcVar6 = "InAppPipCallEntryPointWrapperServiceProvider";
  func_0x000100082720("InAppPipCallEntryPointWrapperServiceProvider",0x2c,2);
  FUN_103155a98();
  func_0x000100082720("InAppPipCallScopeGraphBridgeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar7 = FUN_1031545d0;
  func_0x0001000823a8(FUN_1031545d0,0);
  func_0x000100082720("InAppPipCallScopedServicesCleanupRelayServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f45238,&UNK_10db914a0);
  puVar4 = &UNK_110613e10;
  func_0x000107c613fc(&UNK_110613e10,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 **)(puVar4 + 0x18) = puVar3;
  *(char **)(puVar4 + 0x20) = pcVar6;
  *(code **)(puVar4 + 0x28) = pcVar7;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x103154d9c;
  func_0x0001000823a8(0x103154d9c,puVar4);
  func_0x000100082720("InAppPipCallScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f451b8,&UNK_10db91250);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x103154da8;
  func_0x0001000823a8(0x103154da8,uVar8);
  func_0x000100082720("InAppPipCallScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112f451a8,&UNK_10db91240);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x103154db0;
  func_0x0001000823a8(0x103154db0,uVar9);
  func_0x000100082720("InAppPipCallScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_110613e38;
  func_0x000107c613fc(&UNK_110613e38,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  *(code **)(puVar4 + 0x18) = pcVar7;
  func_0x000107c6157c(pcVar7);
  uVar10 = 0x103154db8;
  func_0x0001000823a8(0x103154db8,puVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("InAppPipCallScopeEntryPointProvider",0x23,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 103154dc0; end: 103155033;  */

void FUN_103154dc0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_98;
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
  func_0x000100083b20(&uStack_98);
  FUN_1031551a4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  FUN_1031571a8(0);
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
  func_0x000107c61174(uStack_98);
  func_0x000103156d9c(uStack_68,uVar1,uVar2,uVar3,uVar4,uVar5,uStack_98);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 103155034; end: 10315509f;  */

void FUN_103155034(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1031550a0; end: 1031550a7;  */

undefined8 FUN_1031550a0(void)

{
  return 0x1b;
}



/* Entry: 1031550a8; end: 10315512b;  */

void FUN_1031550a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1031551e4,param_2,FUN_1031551e8,param_2,FUN_103155210,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10315512c; end: 103155173;  */

undefined8 FUN_10315512c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_103157134();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 103155174; end: 1031551a3;  */

undefined ** FUN_103155174(void)

{
  return &PTR_DAT_113066670;
}



/* Entry: 1031551a4; end: 1031551c3;  */

void FUN_1031551a4(void)

{
  func_0x000107c61168(&PTR_PTR_112f452a8);
  return;
}



/* Entry: 1031551c4; end: 1031551e7;  */

undefined1  [16] FUN_1031551c4(void)

{
  return ZEXT816(0x110613e90);
}



/* Entry: 1031551e8; end: 10315520f;  */

void FUN_1031551e8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103155210; end: 103155217;  */

undefined8 FUN_103155210(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_103157134();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 103155218; end: 103155253;  */

void FUN_103155218(undefined8 *param_1,undefined8 param_2)

{
  FUN_103155254();
  func_0x0001000a7f38("InAppPipCallScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = param_2;
  return;
}



/* Entry: 103155254; end: 10315543f;  */

void FUN_103155254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cd30;
  ppuVar4 = &PTR_DAT_113066670;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f45338;
  func_0x0001000285a8(0x112f45338,&UNK_10db915e0);
  func_0x0001000a6ee8(&UNK_110613e90,"InAppPipCallEntryPointWrapperScopeInitializationPluginKey",
                      0x39,2,FUN_1031554b4,param_1,uVar2,&UNK_110613e90,&PTR_DAT_112f45240);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110613ee0;
  func_0x000107c613fc(&UNK_110613ee0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106140f0,"InAppPipCallScopeGraphBridgeScopeInitializationPluginKey",0x38
                      ,2,FUN_1031554bc,puVar3,uVar2,&UNK_1106140f0,&PTR_DAT_112f453c8);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110613f08;
  func_0x000107c613fc(&UNK_110613f08,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110613cb0,"InAppPipCallScopedServicesScopeInitializationPluginKey",0x36,2
                      ,FUN_1031555a4,puVar3,uVar2,&UNK_110613cb0,&PTR_DAT_112f451c0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f45340;
  func_0x0001000285a8(0x112f45340,&UNK_10db915e8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 103155440; end: 1031554b3;  */

void FUN_103155440(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1031555e0;
  func_0x0001000823a8(0x1031555e0,param_3);
  func_0x000100082720("InAppPipCallEntryPointWrapperScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031554b4; end: 1031554bb;  */

void FUN_1031554b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1031555e0;
  func_0x0001000823a8();
  func_0x000100082720("InAppPipCallEntryPointWrapperScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031554bc; end: 1031554fb;  */

void FUN_1031554bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103155b7c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("InAppPipCallScopeGraphBridgeScopeInitializationPluginProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031554fc; end: 1031555a3;  */

void FUN_1031554fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110613f30;
  func_0x000107c613fc(&UNK_110613f30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1031555d8;
  func_0x0001000823a8(FUN_1031555d8,puVar1);
  func_0x000100082720("InAppPipCallScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1031555a4; end: 1031555ab;  */

void FUN_1031555a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110613f30;
  func_0x000107c613fc(&UNK_110613f30,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1031555d8;
  func_0x0001000823a8(FUN_1031555d8,puVar3);
  func_0x000100082720("InAppPipCallScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1031555ac; end: 1031555d7;  */

void FUN_1031555ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031555d8; end: 1031555e7;  */

void FUN_1031555d8(undefined8 *param_1)

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
  puVar1 = &UNK_110613d38;
  func_0x000107c613fc(&UNK_110613d38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1031547e4;
  func_0x00010058fa64(FUN_1031547e4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031555e8; end: 10315566f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031555e8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1031559a8();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f45348) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f45350) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103155670);
  (*pcVar1)();
}



/* Entry: 103155670; end: 1031556cf; -[_TtC28InAppPipCallScopeGraphBridge43InAppPipCallScopeGraphBridgeSaberEntryPoint init] */

void FUN_103155670(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("InAppPipCallScopeGraphBridge.InAppPipCallScopeGraphBridgeSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10315569c);
  (*pcVar1)();
}



/* Entry: 1031556d0; end: 103155707; -[_TtC28InAppPipCallScopeGraphBridge43InAppPipCallScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031556ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031556f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031556d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f45348));
  return;
}



/* Entry: 103155708; end: 10315572f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103155708(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f45350),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f45348));
  return;
}



/* Entry: 103155730; end: 10315574f;  */

void FUN_103155730(void)

{
  func_0x000107c61168(&PTR_PTR_1128babe0);
  return;
}



/* Entry: 103155750; end: 1031557d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103155750(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f45380) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f45388);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031557d8);
  (*pcVar2)();
}



/* Entry: 1031557d8; end: 1031558bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031557d8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f45380);
  *(undefined **)(unaff_x20 + _DAT_112f45380) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f45388);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f45388))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110614050;
  func_0x000107c613fc(&UNK_110614050,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1031558c4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1031558c0; end: 1031558cb;  */

void FUN_1031558c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031558cc; end: 10315592b; -[_TtC28InAppPipCallScopeGraphBridge41InAppPipCallScopedServicesSaberEntryPoint init] */

void FUN_1031558cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("InAppPipCallScopeGraphBridge.InAppPipCallScopedServicesSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031558f8);
  (*pcVar1)();
}



/* Entry: 10315592c; end: 103155963; -[_TtC28InAppPipCallScopeGraphBridge41InAppPipCallScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315592c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f45388));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f45380));
  return;
}



/* Entry: 103155964; end: 103155967;  */

void FUN_103155964(void)

{
  return;
}



/* Entry: 103155968; end: 103155987;  */

void FUN_103155968(void)

{
  FUN_1031557d8();
  return;
}



/* Entry: 103155988; end: 1031559a7;  */

void FUN_103155988(void)

{
  func_0x000107c61168(&PTR_PTR_1128baca8);
  return;
}



/* Entry: 1031559a8; end: 103155a77;  */

undefined8 FUN_1031559a8(void)

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
  
  func_0x000107c61428(0x112f453b8,&uStack_40,0x20,0);
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
    FUN_103155a78();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 103155a78; end: 103155a97;  */

void FUN_103155a78(void)

{
  func_0x000107c61168(&PTR_PTR_1128bad70);
  return;
}



/* Entry: 103155a98; end: 103155b03;  */

void FUN_103155a98(void)

{
  func_0x0001000285a8(0x112f453c0,&UNK_10db91698);
  func_0x0001000823a8(0x103155ad8,0);
  return;
}



/* Entry: 103155b04; end: 103155b3f; -[_TtC28InAppPipCallScopeGraphBridge36InAppPipCallScopeGraphBridgeServices init] */

void FUN_103155b04(undefined8 param_1)

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



/* Entry: 103155b40; end: 103155b73;  */

void FUN_103155b40(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103155b74; end: 103155b7b;  */

undefined8 FUN_103155b74(void)

{
  return 0x1b;
}



/* Entry: 103155b7c; end: 103155cf3;  */

void FUN_103155b7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110614098;
  func_0x000107c613fc(&UNK_110614098,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103155cf4,puVar1);
  return;
}



/* Entry: 103155cf4; end: 103155cfb;  */

void FUN_103155cf4(undefined8 *param_1)

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
  func_0x000107c61428(0x112f453b8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f453b8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110614130;
  func_0x000107c613fc(&UNK_110614130,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x103155da8;
  func_0x00010058fa64(0x103155da8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103155cfc; end: 103155d57;  */

void FUN_103155cfc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f453b8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f453b8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103155d58; end: 103155daf;  */

undefined ** FUN_103155d58(void)

{
  return &PTR_DAT_113066670;
}



/* Entry: 103155db0; end: 103155df7; -[SCInAppPipCallScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103155db0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f45418;
  func_0x000107c61428(param_1 + _DAT_112f45418,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103155df8; end: 103155e4f; -[SCInAppPipCallScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103155df8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f45418;
  func_0x000107c61428(param_1 + _DAT_112f45418,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103155e50; end: 103155e97; -[SCInAppPipCallScopeGraphBridgeSaberEntryPoint inAppPipCallScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103155e50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f45420;
  func_0x000107c61428(param_1 + _DAT_112f45420,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103155e98; end: 103155efb; -[SCInAppPipCallScopeGraphBridgeSaberEntryPoint setInAppPipCallScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103155e98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f45420;
  func_0x000107c61428(param_1 + _DAT_112f45420,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103155efc; end: 10315602f;  */

/* WARNING: Possible PIC construction at 0x000103155fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103155fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103155fec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103155fb8) */
/* WARNING: Removing unreachable block (ram,0x000103155fd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103155efc(void)

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
  func_0x000107c45264();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_103155730();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1031559a8();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103156030);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f45348) = lVar5;
    *(long *)(lVar4 + _DAT_112f45350) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 103156030; end: 103156057; -[SCInAppPipCallScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103156030(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103155efc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103156058; end: 10315609b; -[SCInAppPipCallScopeGraphBridgeSaberEntryPoint end] */

void FUN_103156058(undefined8 param_1)

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



/* Entry: 10315609c; end: 103156233;  */

void FUN_10315609c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0ed6cb0)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f129350,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "InAppPipCallScopeGraphBridge/SCInAppPipCallScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x50,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103156234);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55324();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103156234; end: 1031562df; -[SCInAppPipCallScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_103156234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10315609c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031562e0; end: 10315634b; -[SCInAppPipCallScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031562e0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f45418,0);
  *(undefined8 *)(param_1 + _DAT_112f45420) = 0;
  *(undefined8 *)(param_1 + _DAT_112f45428) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10315634c; end: 10315637f;  */

void FUN_10315634c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103156380; end: 1031563c7; -[SCInAppPipCallScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031563ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031563b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103156380(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f45418);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f45420));
  return;
}



/* Entry: 1031563c8; end: 1031563e7;  */

void FUN_1031563c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128bae20);
  return;
}



/* Entry: 1031563e8; end: 10315642f; -[SCInAppPipCallScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031563e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f45458;
  func_0x000107c61428(param_1 + _DAT_112f45458,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103156430; end: 103156487; -[SCInAppPipCallScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103156430(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f45458;
  func_0x000107c61428(param_1 + _DAT_112f45458,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103156488; end: 10315655f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103156488(undefined8 param_1,long param_2)

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
    FUN_103155988();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f45380) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103156560);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f45388);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f45460);
    *(long **)(unaff_x20 + _DAT_112f45460) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103156560; end: 103156587; -[SCInAppPipCallScopedServicesSaberEntryPoint begin] */

void FUN_103156560(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103156488();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103156588; end: 1031566ff;  */

/* WARNING: Possible PIC construction at 0x0001031565f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103156688: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031565f4) */
/* WARNING: Removing unreachable block (ram,0x00010315668c) */
/* WARNING: Removing unreachable block (ram,0x0001031566a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103156588(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f45460);
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



/* Entry: 103156700; end: 103156707;  */

void FUN_103156700(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103156708; end: 10315673b; -[SCInAppPipCallScopedServicesSaberEntryPoint end] */

void FUN_103156708(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103156588();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10315673c; end: 10315685b;  */

void FUN_10315673c(long param_1,long param_2,long param_3)

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
                        "InAppPipCallScopeGraphBridge/SCInAppPipCallScopedServicesSaberEntryPoint.swift"
                        ,0x4e,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10315685c);
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



/* Entry: 10315685c; end: 103156907; -[SCInAppPipCallScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10315685c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10315673c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103156908; end: 103156967; -[SCInAppPipCallScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103156908(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f45458,0);
  *(undefined8 *)(param_1 + _DAT_112f45460) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103156968; end: 10315699b;  */

void FUN_103156968(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10315699c; end: 1031569d3; -[SCInAppPipCallScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315699c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f45458);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f45460));
  return;
}



/* Entry: 1031569d4; end: 1031569f3;  */

void FUN_1031569d4(void)

{
  func_0x000107c61168(&PTR_PTR_1128baee8);
  return;
}



/* Entry: 1031569f4; end: 103157133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031569f4(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_88;
  undefined8 auStack_80 [2];
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112f3c7d8,&UNK_10db91820);
  func_0x000107c61174();
  uVar8 = param_3;
  func_0x000107c5c6e0();
  func_0x000107c61180();
  uVar19 = uVar8;
  func_0x0001000bda74();
  func_0x000107c61170(uVar8);
  func_0x0001000285a8(0x112d3b7c0,&UNK_10d904cb0);
  uVar8 = param_5;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar4 = uVar8;
  func_0x0001000bda74();
  func_0x000107c61170(uVar8);
  lVar3 = _DAT_11307b898;
  uVar13 = *(undefined8 *)(param_7 + _DAT_112ff82c0);
  uVar16 = *(undefined8 *)(param_4 + _DAT_11307b888);
  uVar12 = *(undefined8 *)(param_4 + _DAT_11307b8b0);
  uVar14 = *(undefined8 *)(param_2 + _DAT_113091b70);
  uVar9 = *(undefined8 *)(param_2 + _DAT_113091b78);
  uVar10 = *(undefined8 *)(param_4 + _DAT_11307b8d8);
  uVar11 = *(undefined8 *)(param_4 + _DAT_11307b8b8);
  uVar15 = *(undefined8 *)(param_6 + _DAT_112ff8ac0);
  lVar5 = 0;
  func_0x00010315a0d0();
  func_0x000107c613fc();
  uVar6 = 0;
  func_0x00010058ec44(0);
  uStack_88 = 0x3ff0000000000000;
  uVar8 = 0x112e5e398;
  FUN_1031571c8(0x112e5e398,
                PTR___sSo13UIWindowLevela5UIKit01_C23NumericRawRepresentableACMc_110351628);
  func_0x000107c615f0(uVar13);
  func_0x000107c615f0(uVar16);
  uVar18 = ((undefined8 *)(param_4 + lVar3))[1];
  uVar17 = *(undefined8 *)(param_4 + lVar3);
  func_0x000107c615f0(uVar17);
  func_0x000107c615f0(uVar12);
  func_0x000107c615f0(uVar14);
  func_0x000107c615f0(uVar9);
  func_0x000107c615f0(uVar10);
  func_0x000107c6157c(uVar11);
  func_0x000107c615f0(uVar15);
  func_0x000107c5f170(auStack_80,PTR__UIWindowLevelStatusBar_110345e90,&uStack_88,uVar6,uVar8);
  puVar7 = PTR_PTR_1126b1c10;
  func_0x000107c610f8();
  func_0x000107c495dc(auStack_80[0]);
  *(undefined **)(lVar5 + 0x70) = puVar7;
  uVar8 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar5 + 0x78) = uVar8;
  *(undefined8 *)(lVar5 + 0x98) = 0;
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(undefined2 *)(lVar5 + 0xa8) = 1;
  func_0x000107c61614(lVar5 + 0xb0,0);
  *(long *)(lVar5 + 0x10) = param_1;
  *(undefined8 *)(lVar5 + 0x18) = uVar19;
  *(undefined8 *)(lVar5 + 0x20) = uVar4;
  *(undefined8 *)(lVar5 + 0x28) = uVar13;
  *(undefined8 *)(lVar5 + 0x30) = uVar16;
  *(undefined8 *)(lVar5 + 0x40) = uVar18;
  *(undefined8 *)(lVar5 + 0x38) = uVar17;
  *(undefined8 *)(lVar5 + 0x48) = uVar12;
  *(undefined8 *)(lVar5 + 0x50) = uVar14;
  *(undefined8 *)(lVar5 + 0x58) = uVar9;
  *(undefined8 *)(lVar5 + 0x60) = uVar10;
  *(undefined8 *)(lVar5 + 0x68) = uVar11;
  func_0x000107c61174();
  func_0x000107c40be0();
  func_0x000107c61180();
  *(undefined8 *)(lVar5 + 0x80) = uVar17;
  puVar1 = (undefined8 *)(param_1 + _DAT_11307b6a0);
  uVar2 = *(undefined1 *)(puVar1 + 2);
  uVar19 = puVar1[1];
  uVar8 = *puVar1;
  func_0x000107c61170(param_1);
  *(undefined8 *)(lVar5 + 0xa0) = uVar19;
  *(undefined8 *)(lVar5 + 0x98) = uVar8;
  *(undefined1 *)(lVar5 + 0xa8) = uVar2;
  *(undefined8 *)(lVar5 + 0x88) = uVar15;
  *(long *)(unaff_x20 + 0x10) = lVar5;
  func_0x000107c6157c(lVar5);
  FUN_10315902c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61574(lVar5);
  return unaff_x20;
}



/* Entry: 103157134; end: 103157157;  */

undefined8 FUN_103157134(void)

{
  FUN_103159148();
  return 0;
}



/* Entry: 103157158; end: 10315717b;  */

void FUN_103157158(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10315717c; end: 10315717f;  */

void FUN_10315717c(void)

{
  return;
}



/* Entry: 103157180; end: 1031571a7;  */

undefined8 FUN_103157180(void)

{
  FUN_103159148();
  return 0;
}



/* Entry: 1031571a8; end: 1031571c7;  */

void FUN_1031571a8(void)

{
  func_0x000107c61168(&PTR_PTR_112f454d0);
  return;
}



/* Entry: 1031571c8; end: 103157207;  */

void FUN_1031571c8(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x00010058ec44(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 103157208; end: 1031573e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103157208(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar4 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  lVar2 = _DAT_112f45568;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f45570) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f45578) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f45588) = 0x3fd3333333333333;
  *(undefined8 *)(unaff_x20 + _DAT_112f45590) = 0x3fc999999999999a;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f45598);
  func_0x000107c6088c(&uStack_60,0x3fe0000000000000,0x3fe0000000000000);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  puVar1[3] = uStack_48;
  puVar1[2] = uStack_50;
  puVar1[5] = uStack_38;
  puVar1[4] = uStack_40;
  lVar2 = _DAT_112f455a0;
  puVar3 = PTR_PTR_1126cf870;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f455a8);
  *puVar1 = 0xd00000000000001a;
  puVar1[1] = 0x800000010db918a0;
  lVar2 = unaff_x20 + _DAT_112f455b0;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f45530) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f45538) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f45540) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f45548) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f45550) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f45558) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f45580);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f45560);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_initWithCoder__1125dd730,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar4 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar4);
  }
  return puVar4;
}



/* Entry: 1031573e4; end: 10315740b; -[_TtC16InAppPipCallImpl26InAppPipCallViewController initWithCoder:] */

void FUN_1031573e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103157208();
  return;
}



/* Entry: 10315740c; end: 1031578e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315740c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  long unaff_x20;
  undefined1 *puVar14;
  
  puVar5 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_viewDidLoad_112684cd8);
  FUN_1031578e8();
  if (puVar5 != (undefined1 *)0x0) {
    puVar14 = *(undefined1 **)(unaff_x20 + _DAT_112f45568);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c3d89c(puVar14);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3ea80();
    func_0x000107c61180();
    func_0x000107c52b50(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    puVar7 = puVar5;
    func_0x000107c4aba4(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c539d4(0x4034000000000000,puVar7);
    func_0x000107c61170(puVar7);
    puVar7 = puVar5;
    func_0x000107c4aba4(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c562fc(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c5a050(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c5a378(puVar5);
    func_0x000107c61170(puVar5);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar8 = 0x112d360b8;
    FUN_103158b70(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 9;
    *(undefined8 *)(lVar8 + 0x10) = 4;
    puVar7 = puVar5;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar13 = puVar14;
    func_0x000107c4ace0(puVar14);
    func_0x000107c61180();
    puVar9 = puVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar13);
    *(undefined1 **)(lVar8 + 0x20) = puVar9;
    puVar7 = puVar5;
    func_0x000107c50890();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar13 = puVar14;
    func_0x000107c50890(puVar14);
    func_0x000107c61180();
    puVar9 = puVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar13);
    *(undefined1 **)(lVar8 + 0x28) = puVar9;
    puVar7 = puVar5;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar13 = puVar14;
    func_0x000107c5cbe4(puVar14);
    func_0x000107c61180();
    puVar9 = puVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar13);
    *(undefined1 **)(lVar8 + 0x30) = puVar9;
    puVar7 = puVar5;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar13 = puVar14;
    func_0x000107c3ec1c(puVar14);
    func_0x000107c61180();
    puVar9 = puVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar13);
    *(undefined1 **)(lVar8 + 0x38) = puVar9;
    uVar10 = 0;
    FUN_103158f2c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar11 = lVar8;
    func_0x000107c5fc48(lVar8,uVar10);
    func_0x000107c61574(lVar8);
    func_0x000107c3d048(puVar6);
    func_0x000107c61170(lVar11);
    lVar8 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1031578e0);
      (*pcVar4)();
    }
    func_0x000107c3d89c();
    func_0x000107c61170(lVar8);
    func_0x000107c61174();
    lVar8 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1031578e4);
      (*pcVar4)();
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f45580);
    uVar10 = *puVar1;
    uVar2 = puVar1[1];
    uVar3 = *(undefined1 *)(puVar1 + 2);
    uVar12 = 0;
    FUN_10315c0e0(0);
    func_0x000107c610f8();
    FUN_10315a52c(puVar14,lVar8,uVar10,uVar2,uVar3,uVar12);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f45578);
    *(undefined1 **)(unaff_x20 + _DAT_112f45578) = puVar14;
    func_0x000107c61174();
    func_0x000107c61170(uVar10);
    *(undefined ***)(puVar14 + _DAT_112f457c8 + 8) = &PTR_DAT_110614240;
    func_0x000107c61604();
    lVar8 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1031578e8);
      (*pcVar4)();
    }
    puVar6 = PTR__OBJC_CLASS___UIDynamicAnimator_1126dbf40;
    func_0x000107c610f8();
    func_0x000107c482b4();
    func_0x000107c61170(lVar8);
    lVar8 = _DAT_112f45570;
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f45570);
    *(undefined **)(unaff_x20 + _DAT_112f45570) = puVar6;
    func_0x000107c61170(uVar10);
    puVar13 = *(undefined1 **)(unaff_x20 + lVar8);
    puVar7 = puVar5;
    if (puVar13 != (undefined1 *)0x0) {
      func_0x000107c61174();
      func_0x000107c3d5dc();
      func_0x000107c61170(puVar14);
      puVar7 = puVar13;
      puVar14 = puVar5;
    }
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar14);
  }
  return;
}



/* Entry: 1031578e8; end: 103157df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_1031578e8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  undefined *puVar16;
  undefined *apuStack_c0 [3];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar15 = *(long *)(unaff_x20 + _DAT_112f45530);
  if ((lVar15 == 0) || (lVar14 = *(long *)(unaff_x20 + _DAT_112f45538), lVar14 == 0)) {
    ppuVar8 = (undefined **)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126cf8c8;
    func_0x000107c610f8(PTR_PTR_1126cf8c8);
    func_0x000107c615f0(lVar14);
    func_0x000107c61174();
    func_0x000107c453e4(puVar3);
    puVar4 = PTR_PTR_1126cf8d0;
    func_0x000107c61168(PTR_PTR_1126cf8d0);
    puVar16 = &UNK_110614360;
    func_0x000107c613fc(&UNK_110614360,0x18,7);
    func_0x000107c61614(puVar16 + 0x10);
    func_0x0001000285a8(0x112f455e8,&UNK_10db91900);
    func_0x000107c613fc();
    func_0x000107c615f0(lVar14);
    pcVar5 = FUN_103158ecc;
    func_0x0001000bdd8c(FUN_103158ecc,puVar16);
    pcVar6 = pcVar5;
    func_0x0001000bf56c();
    func_0x000107c61574(pcVar5);
    func_0x000107c5decc(puVar4);
    func_0x000107c61180();
    func_0x000107c615e8(lVar14);
    func_0x000107c61170(pcVar6);
    func_0x000107c58cb0(puVar3);
    func_0x000107c615e8(puVar4);
    lVar7 = lVar15;
    func_0x000107c5cb24(lVar15);
    func_0x000107c61180();
    lVar1 = *(long *)(unaff_x20 + _DAT_112f45560);
    lVar2 = ((long *)(unaff_x20 + _DAT_112f45560))[1];
    if (lVar1 == 0) {
      puVar16 = (undefined *)0x0;
      pcVar5 = FUN_103158680;
    }
    else {
      puVar16 = &UNK_110614450;
      func_0x000107c613fc(&UNK_110614450,0x20,7);
      *(long *)(puVar16 + 0x10) = lVar1;
      *(long *)(puVar16 + 0x18) = lVar2;
      pcVar5 = (code *)0x103158f6c;
    }
    puVar4 = &UNK_110614388;
    func_0x000107c613fc(&UNK_110614388,0x20,7);
    *(code **)(puVar4 + 0x10) = pcVar5;
    *(undefined **)(puVar4 + 0x18) = puVar16;
    puVar9 = PTR_PTR_1126acca8;
    func_0x000107c610f8();
    puVar16 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_103158ed4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_103158b10;
    puStack_88 = &UNK_1106143a0;
    ppuVar8 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar8);
    FUN_103158f04(lVar1,lVar2);
    func_0x000107c47ea8();
    func_0x000107c61170(lVar7);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(puStack_78);
    func_0x000107c52f70(puVar9);
    uStack_98 = 0;
    puStack_a0 = (undefined *)0x0;
    puStack_88 = (undefined *)0x0;
    pcStack_90 = (code *)0x0;
    uVar10 = 0;
    FUN_103158f2c(0,0x112f455f0,&PTR_PTR_1126acca8);
    apuStack_c0[0] = puVar9;
    uStack_a8 = uVar10;
    func_0x000107c610f8(PTR_PTR_1126accb0);
    func_0x000107c615f0(lVar14);
    func_0x000107c61174(puVar9);
    ppuVar8 = &puStack_a0;
    FUN_103158be8(ppuVar8,apuStack_c0,lVar14);
    func_0x000107c615e8(lVar14);
    ppuVar11 = ppuVar8;
    func_0x000107c5dbc0();
    func_0x000107c61180();
    if (ppuVar11 == (undefined **)0x0) {
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(lVar14);
      func_0x000107c61170(lVar15);
    }
    else {
      puVar4 = &UNK_110614360;
      puVar12 = puVar4;
      func_0x000107c613fc(&UNK_110614360,0x18,7);
      func_0x000107c61614(puVar12 + 0x10);
      pcStack_80 = (code *)0x103158f14;
      puStack_a0 = puVar16;
      uStack_98 = 0x42000000;
      pcStack_90 = (code *)&UNK_100f11710;
      puStack_88 = &UNK_1106143c8;
      ppuVar13 = &puStack_a0;
      puStack_78 = puVar12;
      func_0x000107c60bc4(ppuVar13);
      func_0x000107c61574(puStack_78);
      FUN_103158f2c(0,0x112f455f8,&PTR_PTR_1126cf890);
      func_0x000107c614e8();
      func_0x000107c4fcd8(ppuVar11);
      func_0x000107c60bd0(ppuVar13);
      puVar12 = puVar4;
      func_0x000107c613fc(&UNK_110614360,0x18,7);
      func_0x000107c61614(puVar12 + 0x10);
      pcStack_80 = (code *)0x103158f1c;
      puStack_a0 = puVar16;
      uStack_98 = 0x42000000;
      pcStack_90 = (code *)&UNK_100f11710;
      puStack_88 = &UNK_1106143f0;
      ppuVar13 = &puStack_a0;
      puStack_78 = puVar12;
      func_0x000107c60bc4(ppuVar13);
      func_0x000107c61574(puStack_78);
      FUN_103158f2c(0,0x112f45600,&PTR_PTR_1126cf898);
      func_0x000107c614e8();
      func_0x000107c4fcd8(ppuVar11);
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c613fc(&UNK_110614360,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      pcStack_80 = (code *)0x103158f24;
      puStack_a0 = puVar16;
      uStack_98 = 0x42000000;
      pcStack_90 = (code *)&UNK_100f11710;
      puStack_88 = &UNK_110614418;
      ppuVar13 = &puStack_a0;
      puStack_78 = puVar4;
      func_0x000107c60bc4(ppuVar13);
      func_0x000107c61574(puStack_78);
      FUN_103158f2c(0,0x112f45608,&PTR_PTR_1126cf8a0);
      func_0x000107c614e8();
      func_0x000107c4fcd8(ppuVar11);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(lVar14);
      func_0x000107c61170(lVar15);
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c615e8(ppuVar11);
    }
  }
  return ppuVar8;
}



/* Entry: 103157df4; end: 103157e1b; -[_TtC16InAppPipCallImpl26InAppPipCallViewController viewDidLoad] */

void FUN_103157df4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10315740c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103157e1c; end: 103157ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103157e1c(uint param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_78 [24];
  
  ppuVar7 = &puStack_b0;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewWillAppear__1126853f0,param_1 & 1);
  lVar2 = unaff_x20 + _DAT_112f455b0;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f45568);
    FUN_103159924(1);
    lVar8 = *(long *)(lVar2 + 0x10);
    lVar4 = lVar8 + _DAT_11307b6a8;
    func_0x000107c61428(lVar4,auStack_78,0,0);
    lVar3 = lVar4;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar10 = *(long *)(lVar4 + 8);
      lVar4 = lVar3;
      func_0x000107c614f0();
      (**(code **)(lVar10 + 8))(lVar8,uVar9,lVar4,lVar10);
      func_0x000107c615e8(lVar2);
      lVar2 = lVar3;
    }
    func_0x000107c615e8(lVar2);
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f45568);
  func_0x000107c526c0(0,uVar9);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f45598);
  uStack_a8 = puVar1[1];
  puStack_b0 = (undefined *)*puVar1;
  puStack_98 = (undefined *)puVar1[3];
  puStack_a0 = (undefined *)puVar1[2];
  puStack_88 = (undefined *)puVar1[5];
  uStack_90 = puVar1[4];
  func_0x000107c5a03c(uVar9);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar6 = &UNK_110614310;
  func_0x000107c613fc(&UNK_110614310,0x18,7);
  *(long *)(puVar6 + 0x10) = unaff_x20;
  uStack_90 = 0x103158e74;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_110614328;
  puStack_88 = puVar6;
  func_0x000107c60bc4(&puStack_b0);
  puVar6 = puStack_88;
  func_0x000107c61174();
  func_0x000107c61574(puVar6);
  func_0x000107c3dccc(0x3fd3333333333333,puVar5);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 103157ff8; end: 103158027; -[_TtC16InAppPipCallImpl26InAppPipCallViewController viewWillAppear:] */

void FUN_103157ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_103157e1c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103158028; end: 1031580b3; -[_TtC16InAppPipCallImpl26InAppPipCallViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103158028(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidDisappear__112684c48;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  lVar2 = param_1 + _DAT_112f455b0;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_103159924(0);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1031580b4; end: 103158273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031580b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  func_0x000107c614f0();
  func_0x000107c61154(param_1,param_2,&stack0xffffffffffffff90,
                      PTR_s_viewWillTransitionToSize_withTra_112685490,param_3);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f45578);
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + _DAT_112f457d8) = 0;
    func_0x000107c61174();
    FUN_10315a444();
    puVar1 = (undefined8 *)(lVar3 + _DAT_112f45798);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = param_1;
    puVar1[3] = param_2;
    FUN_10315b050();
    FUN_10315b1d0();
    puVar4 = &UNK_110614270;
    func_0x000107c613fc(&UNK_110614270,0x20,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    *(long *)(puVar4 + 0x18) = lVar3;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_103158dec;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1013c1f34;
    puStack_88 = &UNK_110614288;
    puStack_78 = puVar4;
    func_0x000107c60bc4(&puStack_a0);
    puVar4 = puStack_78;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_1106142c0;
    func_0x000107c613fc(&UNK_1106142c0,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar3;
    pcStack_80 = FUN_103158e40;
    puStack_a0 = puVar2;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1013c1f34;
    puStack_88 = &UNK_1106142d8;
    puStack_78 = puVar4;
    func_0x000107c60bc4(&puStack_a0);
    puVar4 = puStack_78;
    func_0x000107c61174(lVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c3dcb8(param_3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 103158274; end: 1031582d3; -[_TtC16InAppPipCallImpl26InAppPipCallViewController viewWillTransitionToSize:withTransitionCoordinator:] */

void FUN_103158274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_3);
  FUN_1031580b4(param_1,param_2,param_5);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1031582d4; end: 103158397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031582d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewSafeAreaInsetsDidChange_11252f568);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f45578);
  if (lVar3 != 0) {
    func_0x000107c61174();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103158398);
      (*pcVar2)();
    }
    func_0x000107c515a0();
    func_0x000107c61170(unaff_x20);
    puVar1 = (undefined8 *)(lVar3 + _DAT_112f45790);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    FUN_10315b050();
    FUN_10315b1d0();
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 103158398; end: 1031583bf; -[_TtC16InAppPipCallImpl26InAppPipCallViewController viewSafeAreaInsetsDidChange] */

void FUN_103158398(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031582d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031583c0; end: 103158547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031583c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar6 = &puStack_90;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f45578);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112f457d8) = 0;
    func_0x000107c61174();
    FUN_10315a444();
    func_0x000107c61170(lVar2);
  }
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar4 = &UNK_110614478;
  func_0x000107c613fc(&UNK_110614478,0x18,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_103158fc4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_110614490;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_1106144c8;
  func_0x000107c613fc(&UNK_1106144c8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  pcStack_70 = FUN_103158fcc;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100288f10;
  puStack_78 = &UNK_1106144e0;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar4);
  func_0x000107c3dcd0(0x3fc999999999999a,puVar3);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 103158548; end: 1031585a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103158548(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f45568);
  puVar1 = (undefined8 *)(param_1 + _DAT_112f45598);
  uStack_48 = puVar1[1];
  uStack_50 = *puVar1;
  uStack_38 = puVar1[3];
  uStack_40 = puVar1[2];
  uStack_28 = puVar1[5];
  uStack_30 = puVar1[4];
  func_0x000107c5a03c(uVar2,param_2,&uStack_50);
  func_0x000107c526c0(0,uVar2);
  return;
}



/* Entry: 1031585a8; end: 10315867f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031585a8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2 + _DAT_112f455b0;
    func_0x000107c61618();
    if (lVar1 == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      lVar2 = *(long *)(lVar1 + 0x90);
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c615f0();
        func_0x000107c40c1c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(param_2);
        func_0x000107c615e8(lVar1);
        goto LAB_103158664;
      }
      func_0x000107c61170(param_2);
      func_0x000107c615e8(lVar1);
    }
  }
  lVar3 = 0;
LAB_103158664:
  *param_1 = lVar3;
  return;
}



/* Entry: 103158680; end: 103158683;  */

void FUN_103158680(void)

{
  return;
}



/* Entry: 103158684; end: 10315899f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103158684(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar2 = param_1 + _DAT_112f455b0;
    func_0x000107c61618();
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar3 = *(long *)(lVar2 + 0x90);
      if (lVar3 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = lVar3;
        func_0x000107c615f0(lVar3);
        func_0x000107c40c1c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar3);
      }
      func_0x000107c615e8();
    }
    puVar4 = PTR_PTR_1126cf890;
    func_0x000107c610f8(PTR_PTR_1126cf890);
    func_0x000107c469e4(0,0,0,0);
    func_0x000107c615e8(lVar2);
    lVar2 = *(long *)(param_1 + _DAT_112f45548);
    if (lVar2 != 0) {
      func_0x000107c615f0(lVar2);
      puVar1 = puVar4;
      func_0x000107c61174(puVar4);
      func_0x000107c4fc9c(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar1);
    }
    func_0x000107c61170(param_1);
  }
  return puVar4;
}



/* Entry: 1031589a0; end: 1031589ff; -[_TtC16InAppPipCallImpl26InAppPipCallViewController initWithNibName:bundle:] */

void FUN_1031589a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("InAppPipCallImpl.InAppPipCallViewController",0x2b,"init(nibName:bundle:)",
                      0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031589cc);
  (*pcVar1)();
}


