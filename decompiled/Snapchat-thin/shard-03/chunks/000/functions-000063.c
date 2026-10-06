/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10244c4e4; end: 10244c4f3; -[_TtC44SCAdOperaSessionScopedFactoryServiceProvider30SCAdOperaSessionScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244c4e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9abc8));
  return;
}



/* Entry: 10244c4f4; end: 10244c55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244c4f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11050a240;
  func_0x000107c613fc(&UNK_11050a240,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10244c838,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10244c560; end: 10244c5fb;  */

void FUN_10244c560(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11050a150;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11050a150;
  return;
}



/* Entry: 10244c5fc; end: 10244c633;  */

void FUN_10244c5fc(long *param_1)

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



/* Entry: 10244c634; end: 10244c63b;  */

undefined8 FUN_10244c634(void)

{
  return 0x1b;
}



/* Entry: 10244c63c; end: 10244c76f;  */

void FUN_10244c63c(undefined8 *param_1)

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
  puVar1 = &UNK_11050a268;
  func_0x000107c613fc(&UNK_11050a268,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10244c810;
  func_0x00010058fa64(FUN_10244c810,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10244c770; end: 10244c79f;  */

undefined ** FUN_10244c770(void)

{
  return &PTR_DAT_112f20cb0;
}



/* Entry: 10244c7a0; end: 10244c7bf;  */

void FUN_10244c7a0(void)

{
  func_0x000107c61168(&PTR_PTR_112840f38);
  return;
}



/* Entry: 10244c7c0; end: 10244c80f;  */

undefined1  [16] FUN_10244c7c0(void)

{
  return ZEXT816(0x11050a1a0);
}



/* Entry: 10244c810; end: 10244c837;  */

void FUN_10244c810(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10244c838; end: 10244c83b;  */

void FUN_10244c838(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10244c83c; end: 10244c907;  */

/* WARNING: Possible PIC construction at 0x00010244c8dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010244c8ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010244c8e0) */
/* WARNING: Removing unreachable block (ram,0x00010244c8f0) */

void FUN_10244c83c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11050a2f0;
  func_0x000107c613fc(&UNK_11050a2f0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uVar2 = 0x112e9ac38;
  func_0x0001000285a8(0x112e9ac38,&UNK_10daa8050);
  func_0x000107c613fc();
  pcVar3 = FUN_10244ccb4;
  func_0x0001000841fc(FUN_10244ccb4,puVar1,uVar2);
  func_0x000100084214(&UNK_10daa8020,0x2c,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10244c908; end: 10244c923;  */

/* WARNING: Possible PIC construction at 0x00010244c8dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010244c8ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010244c8e0) */
/* WARNING: Removing unreachable block (ram,0x00010244c8f0) */

void FUN_10244c908(undefined8 *param_1)

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
  puVar4 = &UNK_11050a2f0;
  func_0x000107c613fc(&UNK_11050a2f0,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112e9ac38;
  func_0x0001000285a8(0x112e9ac38,&UNK_10daa8050);
  func_0x000107c613fc();
  pcVar6 = FUN_10244ccb4;
  func_0x0001000841fc(FUN_10244ccb4,puVar4,uVar5);
  func_0x000100084214(&UNK_10daa8020,0x2c,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10244c924; end: 10244ccb3;  */

void FUN_10244c924(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e9ac40,&UNK_10daa8058);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10244e068();
  func_0x000100082720("SCOperaSessionScopeExposerSubjectServiceProvider",0x30,2);
  puVar3 = puVar2;
  FUN_10244df1c();
  func_0x000100082720("SCAdOperaSessionScopeGraphBridgeServicesServiceProvider",0x37,2);
  puVar4 = puVar2;
  FUN_10244e0f4();
  func_0x000100082720("SCOperaSessionScopeExposerObservableServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_10244c5fc;
  func_0x0001000823a8(FUN_10244c5fc,0);
  func_0x000100082720("SCAdOperaSessionScopedServicesCleanupRelayServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e9ac48,&UNK_10daa8070);
  puVar6 = &UNK_11050a318;
  func_0x000107c613fc(&UNK_11050a318,0x40,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 **)(puVar6 + 0x38) = puVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(puVar4);
  uVar10 = 0x10244ccc0;
  func_0x0001000823a8(0x10244ccc0,puVar6);
  func_0x000100082720("SCAdOperaSessionEntryPointWrapperServiceProvider",0x30,2);
  func_0x0001000285a8(0x112e9ac50,&UNK_10daa8060);
  puVar6 = &UNK_11050a340;
  func_0x000107c613fc(&UNK_11050a340,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(undefined8 **)(puVar6 + 0x20) = puVar3;
  *(code **)(puVar6 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(pcVar5);
  pcVar7 = FUN_10244cd0c;
  func_0x0001000823a8(FUN_10244cd0c,puVar6);
  func_0x000100082720("SCAdOperaSessionScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e9abd0,&UNK_10daa7e20);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x10244cd18;
  func_0x0001000823a8(0x10244cd18,pcVar7);
  func_0x000100082720("SCAdOperaSessionScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e9abc0,&UNK_10daa7e10);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10244cd20;
  func_0x0001000823a8(0x10244cd20,uVar8);
  func_0x000100082720("SCAdOperaSessionScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_11050a368;
  func_0x000107c613fc(&UNK_11050a368,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar9 = 0x10244cd28;
  func_0x0001000823a8(0x10244cd28,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCAdOperaSessionScopeEntryPointProvider",0x27,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10244ccb4; end: 10244cccf;  */

void FUN_10244ccb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *param_2;
  func_0x0001000285a8(0x112e9ac40,&UNK_10daa8058);
  puVar2 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  puVar3 = puVar2;
  FUN_10244e068();
  func_0x000100082720("SCOperaSessionScopeExposerSubjectServiceProvider",0x30,2);
  puVar4 = puVar3;
  FUN_10244df1c();
  func_0x000100082720("SCAdOperaSessionScopeGraphBridgeServicesServiceProvider",0x37,2);
  puVar5 = puVar3;
  FUN_10244e0f4();
  func_0x000100082720("SCOperaSessionScopeExposerObservableServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_10244c5fc;
  func_0x0001000823a8(FUN_10244c5fc,0);
  func_0x000100082720("SCAdOperaSessionScopedServicesCleanupRelayServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e9ac48,&UNK_10daa8070);
  puVar7 = &UNK_11050a318;
  func_0x000107c613fc(&UNK_11050a318,0x40,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar8;
  *(undefined8 *)(puVar7 + 0x20) = uVar11;
  *(undefined8 *)(puVar7 + 0x28) = uVar10;
  *(undefined8 *)(puVar7 + 0x30) = uVar1;
  *(undefined8 **)(puVar7 + 0x38) = puVar5;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(puVar5);
  uVar8 = 0x10244ccc0;
  func_0x0001000823a8(0x10244ccc0,puVar7);
  func_0x000100082720("SCAdOperaSessionEntryPointWrapperServiceProvider",0x30,2);
  func_0x0001000285a8(0x112e9ac50,&UNK_10daa8060);
  puVar7 = &UNK_11050a340;
  func_0x000107c613fc(&UNK_11050a340,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar8;
  *(undefined8 **)(puVar7 + 0x18) = puVar2;
  *(undefined8 **)(puVar7 + 0x20) = puVar4;
  *(code **)(puVar7 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(pcVar6);
  pcVar9 = FUN_10244cd0c;
  func_0x0001000823a8(FUN_10244cd0c,puVar7);
  func_0x000100082720("SCAdOperaSessionScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e9abd0,&UNK_10daa7e20);
  func_0x000107c6157c(pcVar9);
  uVar10 = 0x10244cd18;
  func_0x0001000823a8(0x10244cd18,pcVar9);
  func_0x000100082720("SCAdOperaSessionScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e9abc0,&UNK_10daa7e10);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x10244cd20;
  func_0x0001000823a8(0x10244cd20,uVar10);
  func_0x000100082720("SCAdOperaSessionScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar7 = &UNK_11050a368;
  func_0x000107c613fc(&UNK_11050a368,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar11;
  *(code **)(puVar7 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar11 = 0x10244cd28;
  func_0x0001000823a8(0x10244cd28,puVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(uVar10);
  func_0x000100082720("SCAdOperaSessionScopeEntryPointProvider",0x27,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 10244ccd0; end: 10244cd0b;  */

void FUN_10244ccd0(void)

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



/* Entry: 10244cd0c; end: 10244cd2f;  */

void FUN_10244cd0c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10244d684(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCAdOperaSessionScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10244cd30; end: 10244d47b;  */

void FUN_10244cd30(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_10244d5d4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  func_0x0001000285a8(0x112e4a000,&UNK_10da41b80);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar8 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x18) = puVar5;
  puVar6 = PTR_PTR_1126aa850;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar6;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f09dd90);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar6);
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f03f080);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar6);
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f09ddb0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar6);
  uVar8 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar6);
  uVar8 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f03f0a0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(puVar6);
  func_0x000107c61174(puVar5);
  uVar8 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03f140);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uStack_90);
  *param_1 = param_2;
  return;
}



/* Entry: 10244d47c; end: 10244d4c7;  */

void FUN_10244d47c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
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



/* Entry: 10244d4c8; end: 10244d4cf;  */

undefined8 FUN_10244d4c8(void)

{
  return 0x1b;
}



/* Entry: 10244d4d0; end: 10244d553;  */

void FUN_10244d4d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10244d614,param_2,FUN_10244d618,param_2,FUN_10244d640,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10244d554; end: 10244d5a3;  */

undefined8 FUN_10244d554(void)

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



/* Entry: 10244d5a4; end: 10244d5d3;  */

undefined ** FUN_10244d5a4(void)

{
  return &PTR_DAT_112f20cb0;
}



/* Entry: 10244d5d4; end: 10244d5f3;  */

void FUN_10244d5d4(void)

{
  func_0x000107c61168(&PTR_PTR_112e9acc0);
  return;
}



/* Entry: 10244d5f4; end: 10244d617;  */

undefined1  [16] FUN_10244d5f4(void)

{
  return ZEXT816(0x11050a3c0);
}



/* Entry: 10244d618; end: 10244d63f;  */

void FUN_10244d618(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10244d640; end: 10244d647;  */

undefined8 FUN_10244d640(void)

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



/* Entry: 10244d648; end: 10244d683;  */

void FUN_10244d648(undefined8 *param_1,undefined8 param_2)

{
  FUN_10244d684();
  func_0x0001000a7f38("SCAdOperaSessionScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10244d684; end: 10244d86f;  */

void FUN_10244d684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105dcdb8;
  ppuVar4 = &PTR_DAT_112f20cb0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e9ad48;
  func_0x0001000285a8(0x112e9ad48,&UNK_10daa81c8);
  func_0x0001000a6ee8(&UNK_11050a3c0,"SCAdOperaSessionEntryPointWrapperScopeInitializationPluginKey"
                      ,0x3d,2,FUN_10244d8e4,param_1,uVar2,&UNK_11050a3c0,&PTR_DAT_112e9ac58);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_11050a410;
  func_0x000107c613fc(&UNK_11050a410,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11050a630,"SCAdOperaSessionScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_10244d8ec,puVar3,uVar2,&UNK_11050a630,&PTR_DAT_112e9ade0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11050a438;
  func_0x000107c613fc(&UNK_11050a438,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11050a1e0,"SCAdOperaSessionScopedServicesScopeInitializationPluginKey",
                      0x3a,2,FUN_10244d9d4,puVar3,uVar2,&UNK_11050a1e0,&PTR_DAT_112e9abd8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e9ad50;
  func_0x0001000285a8(0x112e9ad50,&UNK_10daa81d0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 10244d870; end: 10244d8e3;  */

void FUN_10244d870(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10244da10;
  func_0x0001000823a8(0x10244da10,param_3);
  func_0x000100082720("SCAdOperaSessionEntryPointWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10244d8e4; end: 10244d8eb;  */

void FUN_10244d8e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10244da10;
  func_0x0001000823a8();
  func_0x000100082720("SCAdOperaSessionEntryPointWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10244d8ec; end: 10244d92b;  */

void FUN_10244d8ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10244e19c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SCAdOperaSessionScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10244d92c; end: 10244d9d3;  */

void FUN_10244d92c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11050a460;
  func_0x000107c613fc(&UNK_11050a460,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10244da08;
  func_0x0001000823a8(FUN_10244da08,puVar1);
  func_0x000100082720("SCAdOperaSessionScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10244d9d4; end: 10244d9db;  */

void FUN_10244d9d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11050a460;
  func_0x000107c613fc(&UNK_11050a460,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10244da08;
  func_0x0001000823a8(FUN_10244da08,puVar3);
  func_0x000100082720("SCAdOperaSessionScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10244d9dc; end: 10244da07;  */

void FUN_10244d9dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10244da08; end: 10244da17;  */

void FUN_10244da08(undefined8 *param_1)

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
  puVar1 = &UNK_11050a268;
  func_0x000107c613fc(&UNK_11050a268,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10244c810;
  func_0x00010058fa64(FUN_10244c810,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10244da18; end: 10244daf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10244da18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_10244de2c();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e9ad58) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e9ad60) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10244daf4);
  (*pcVar1)();
}



/* Entry: 10244daf4; end: 10244db53; -[_TtC32SCAdOperaSessionScopeGraphBridge47SCAdOperaSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_10244daf4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdOperaSessionScopeGraphBridge.SCAdOperaSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10244db20);
  (*pcVar1)();
}



/* Entry: 10244db54; end: 10244db8b; -[_TtC32SCAdOperaSessionScopeGraphBridge47SCAdOperaSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010244db70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010244db74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244db54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9ad58));
  return;
}



/* Entry: 10244db8c; end: 10244dbb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244db8c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e9ad60),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e9ad58));
  return;
}



/* Entry: 10244dbb4; end: 10244dbd3;  */

void FUN_10244dbb4(void)

{
  func_0x000107c61168(&PTR_PTR_112840ff8);
  return;
}



/* Entry: 10244dbd4; end: 10244dc5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10244dbd4(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9ad90) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e9ad98);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10244dc5c);
  (*pcVar2)();
}



/* Entry: 10244dc5c; end: 10244dd43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10244dc5c(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9ad90);
  *(undefined **)(unaff_x20 + _DAT_112e9ad90) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9ad98);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e9ad98))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11050a550;
  func_0x000107c613fc(&UNK_11050a550,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10244dd48,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10244dd44; end: 10244dd4f;  */

void FUN_10244dd44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10244dd50; end: 10244ddaf; -[_TtC32SCAdOperaSessionScopeGraphBridge45SCAdOperaSessionScopedServicesSaberEntryPoint init] */

void FUN_10244dd50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdOperaSessionScopeGraphBridge.SCAdOperaSessionScopedServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10244dd7c);
  (*pcVar1)();
}



/* Entry: 10244ddb0; end: 10244dde7; -[_TtC32SCAdOperaSessionScopeGraphBridge45SCAdOperaSessionScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244ddb0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9ad98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9ad90));
  return;
}



/* Entry: 10244dde8; end: 10244ddeb;  */

void FUN_10244dde8(void)

{
  return;
}



/* Entry: 10244ddec; end: 10244de0b;  */

void FUN_10244ddec(void)

{
  FUN_10244dc5c();
  return;
}



/* Entry: 10244de0c; end: 10244de2b;  */

void FUN_10244de0c(void)

{
  func_0x000107c61168(&PTR_PTR_1128410c0);
  return;
}



/* Entry: 10244de2c; end: 10244defb;  */

undefined8 FUN_10244de2c(void)

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
  
  func_0x000107c61428(0x112e9adc8,&uStack_40,0x20,0);
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
    FUN_10244defc();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10244defc; end: 10244df1b;  */

void FUN_10244defc(void)

{
  func_0x000107c61168(&PTR_PTR_112841188);
  return;
}



/* Entry: 10244df1c; end: 10244df37;  */

void FUN_10244df1c(undefined8 param_1)

{
  func_0x0001000285a8(0x112e9add0,&UNK_10daa8298);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10244dfa4,param_1);
  return;
}



/* Entry: 10244df38; end: 10244dfa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244df38(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10244defc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e9add8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10244dfa4; end: 10244dfab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244dfa4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10244defc();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e9add8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10244dfac; end: 10244dff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244dfac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9add8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10244dff8; end: 10244e057; -[_TtC32SCAdOperaSessionScopeGraphBridge40SCAdOperaSessionScopeGraphBridgeServices init] */

void FUN_10244dff8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdOperaSessionScopeGraphBridge.SCAdOperaSessionScopeGraphBridgeServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10244e024);
  (*pcVar1)();
}



/* Entry: 10244e058; end: 10244e067; -[_TtC32SCAdOperaSessionScopeGraphBridge40SCAdOperaSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244e058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9add8));
  return;
}



/* Entry: 10244e068; end: 10244e0f3;  */

void FUN_10244e068(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10244e0a8,0);
  return;
}



/* Entry: 10244e0f4; end: 10244e10f;  */

void FUN_10244e0f4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10244e160,param_1);
  return;
}



/* Entry: 10244e110; end: 10244e15f;  */

void FUN_10244e110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 10244e160; end: 10244e193;  */

void FUN_10244e160(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10244e194; end: 10244e19b;  */

undefined8 FUN_10244e194(void)

{
  return 0x1b;
}



/* Entry: 10244e19c; end: 10244e313;  */

void FUN_10244e19c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11050a598;
  func_0x000107c613fc(&UNK_11050a598,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10244e314,puVar1);
  return;
}



/* Entry: 10244e314; end: 10244e31b;  */

void FUN_10244e314(undefined8 *param_1)

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
  func_0x000107c61428(0x112e9adc8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e9adc8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11050a670;
  func_0x000107c613fc(&UNK_11050a670,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10244e3e8;
  func_0x00010058fa64(0x10244e3e8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10244e31c; end: 10244e377;  */

void FUN_10244e31c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e9adc8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e9adc8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10244e378; end: 10244e3ef;  */

undefined ** FUN_10244e378(void)

{
  return &PTR_DAT_112f20cb0;
}



/* Entry: 10244e3f0; end: 10244e437; -[SCSCAdOperaSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244e3f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9ae30;
  func_0x000107c61428(param_1 + _DAT_112e9ae30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10244e438; end: 10244e48f; -[SCSCAdOperaSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244e438(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9ae30;
  func_0x000107c61428(param_1 + _DAT_112e9ae30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10244e490; end: 10244e4d7; -[SCSCAdOperaSessionScopeGraphBridgeSaberEntryPoint sCOperaSessionScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244e490(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9ae38;
  func_0x000107c61428(param_1 + _DAT_112e9ae38,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10244e4d8; end: 10244e4e3; -[SCSCAdOperaSessionScopeGraphBridgeSaberEntryPoint setSCOperaSessionScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244e4d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9ae38;
  func_0x000107c61428(param_1 + _DAT_112e9ae38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10244e4e4; end: 10244e52b; -[SCSCAdOperaSessionScopeGraphBridgeSaberEntryPoint sCAdOperaSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244e4e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9ae40;
  func_0x000107c61428(param_1 + _DAT_112e9ae40,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10244e52c; end: 10244e537; -[SCSCAdOperaSessionScopeGraphBridgeSaberEntryPoint setSCAdOperaSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244e52c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9ae40;
  func_0x000107c61428(param_1 + _DAT_112e9ae40,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10244e538; end: 10244e597;  */

void FUN_10244e538(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10244e598; end: 10244e753;  */

/* WARNING: Possible PIC construction at 0x00010244e6b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010244e6d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010244e6e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010244e728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010244e6e8) */
/* WARNING: Removing unreachable block (ram,0x00010244e6d8) */
/* WARNING: Removing unreachable block (ram,0x00010244e6b4) */
/* WARNING: Removing unreachable block (ram,0x00010244e72c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244e598(void)

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
  func_0x000107c5113c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c509f0();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_10244dbb4();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10244de2c();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10244e754);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e9ad58) = lVar5;
      *(long *)(lVar3 + _DAT_112e9ad60) = unaff_x20;
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



/* Entry: 10244e754; end: 10244e77b; -[SCSCAdOperaSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10244e754(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10244e598();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10244e77c; end: 10244e7bf; -[SCSCAdOperaSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_10244e77c(undefined8 param_1)

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



/* Entry: 10244e7c0; end: 10244e9c3;  */

void FUN_10244e7c0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef0fae4b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001a,0x800000010f051b50,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002f;
        if (((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0f61f90)) &&
           (func_0x000107c605b8(0xd00000000000002f,0x800000010f09e070,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SCAdOperaSessionScopeGraphBridge/SCSCAdOperaSessionScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x58,2,0x37,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10244e9c4);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c57f98();
        goto LAB_10244e84c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c586e4();
  }
LAB_10244e84c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10244e9c4; end: 10244ea6f; -[SCSCAdOperaSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10244e9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10244e7c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10244ea70; end: 10244eae7; -[SCSCAdOperaSessionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244ea70(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9ae30,0);
  *(undefined8 *)(param_1 + _DAT_112e9ae38) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9ae40) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9ae48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10244eae8; end: 10244eb1b;  */

void FUN_10244eae8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10244eb1c; end: 10244eb73; -[SCSCAdOperaSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010244eb48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010244eb4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244eb1c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9ae30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9ae38));
  return;
}



/* Entry: 10244eb74; end: 10244eb93;  */

void FUN_10244eb74(void)

{
  func_0x000107c61168(&PTR_PTR_112841248);
  return;
}



/* Entry: 10244eb94; end: 10244ebdb; -[SCSCAdOperaSessionScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244eb94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9ae78;
  func_0x000107c61428(param_1 + _DAT_112e9ae78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10244ebdc; end: 10244ec33; -[SCSCAdOperaSessionScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244ebdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9ae78;
  func_0x000107c61428(param_1 + _DAT_112e9ae78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10244ec34; end: 10244ed0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244ec34(undefined8 param_1,long param_2)

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
    FUN_10244de0c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e9ad90) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10244ed0c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e9ad98);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e9ae80);
    *(long **)(unaff_x20 + _DAT_112e9ae80) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10244ed0c; end: 10244ed33; -[SCSCAdOperaSessionScopedServicesSaberEntryPoint begin] */

void FUN_10244ed0c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10244ec34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10244ed34; end: 10244eeab;  */

/* WARNING: Possible PIC construction at 0x00010244ed9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010244ee34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010244eda0) */
/* WARNING: Removing unreachable block (ram,0x00010244ee38) */
/* WARNING: Removing unreachable block (ram,0x00010244ee50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244ed34(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9ae80);
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



/* Entry: 10244eeac; end: 10244eeb3;  */

void FUN_10244eeac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10244eeb4; end: 10244eee7; -[SCSCAdOperaSessionScopedServicesSaberEntryPoint end] */

void FUN_10244eeb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10244ed34();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10244eee8; end: 10244f007;  */

void FUN_10244eee8(long param_1,long param_2,long param_3)

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
                        "SCAdOperaSessionScopeGraphBridge/SCSCAdOperaSessionScopedServicesSaberEntryPoint.swift"
                        ,0x56,2,0x2f,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10244f008);
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



/* Entry: 10244f008; end: 10244f0b3; -[SCSCAdOperaSessionScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10244f008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10244eee8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10244f0b4; end: 10244f113; -[SCSCAdOperaSessionScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244f0b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9ae78,0);
  *(undefined8 *)(param_1 + _DAT_112e9ae80) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10244f114; end: 10244f147;  */

void FUN_10244f114(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10244f148; end: 10244f17f; -[SCSCAdOperaSessionScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244f148(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9ae78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9ae80));
  return;
}



/* Entry: 10244f180; end: 10244f19f;  */

void FUN_10244f180(void)

{
  func_0x000107c61168(&PTR_PTR_112841318);
  return;
}



/* Entry: 10244f1a0; end: 10244f20b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244f1a0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10244f594();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e9aeb8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10244f20c; end: 10244f277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244f20c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9aeb8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10244f278; end: 10244f2d7; -[_TtC52AdPromotedTileAttachmentScopedFactoryServiceProvider38AdPromotedTileAttachmentScopedServices init] */

void FUN_10244f278(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPromotedTileAttachmentScopedFactoryServiceProvider.AdPromotedTileAttachmentScopedServices"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10244f2a4);
  (*pcVar1)();
}



/* Entry: 10244f2d8; end: 10244f2e7; -[_TtC52AdPromotedTileAttachmentScopedFactoryServiceProvider38AdPromotedTileAttachmentScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244f2d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9aeb8));
  return;
}



/* Entry: 10244f2e8; end: 10244f353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244f2e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11050a888;
  func_0x000107c613fc(&UNK_11050a888,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10244f62c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}


