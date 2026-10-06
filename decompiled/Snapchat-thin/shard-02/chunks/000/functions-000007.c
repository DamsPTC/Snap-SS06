/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101695eb0; end: 101695f1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101695eb0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1016962a4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112dbee30) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101695f1c; end: 101695f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101695f1c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dbee30) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101695f88; end: 101695fe7; -[_TtC52BitmojiAvatarBuilderLensScopedFactoryServiceProvider40SCBitmojiAvatarBuilderLensScopedServices init] */

void FUN_101695f88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiAvatarBuilderLensScopedFactoryServiceProvider.SCBitmojiAvatarBuilderLensScopedServices"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101695fb4);
  (*pcVar1)();
}



/* Entry: 101695fe8; end: 101695ff7; -[_TtC52BitmojiAvatarBuilderLensScopedFactoryServiceProvider40SCBitmojiAvatarBuilderLensScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101695fe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbee30));
  return;
}



/* Entry: 101695ff8; end: 101696063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101695ff8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103f3e20;
  func_0x000107c613fc(&UNK_1103f3e20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10169633c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101696064; end: 1016960ff;  */

void FUN_101696064(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103f3d30;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103f3d30;
  return;
}



/* Entry: 101696100; end: 101696137;  */

void FUN_101696100(long *param_1)

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



/* Entry: 101696138; end: 10169613f;  */

undefined8 FUN_101696138(void)

{
  return 0x1b;
}



/* Entry: 101696140; end: 101696273;  */

void FUN_101696140(undefined8 *param_1)

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
  puVar1 = &UNK_1103f3e48;
  func_0x000107c613fc(&UNK_1103f3e48,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101696314;
  func_0x00010058fa64(FUN_101696314,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101696274; end: 1016962a3;  */

undefined ** FUN_101696274(void)

{
  return &PTR_DAT_1130667c0;
}



/* Entry: 1016962a4; end: 1016962c3;  */

void FUN_1016962a4(void)

{
  func_0x000107c61168(&PTR_PTR_1127e43d8);
  return;
}



/* Entry: 1016962c4; end: 101696313;  */

undefined1  [16] FUN_1016962c4(void)

{
  return ZEXT816(0x1103f3d80);
}



/* Entry: 101696314; end: 10169633b;  */

void FUN_101696314(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10169633c; end: 10169633f;  */

void FUN_10169633c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101696340; end: 1016963ff;  */

/* WARNING: Possible PIC construction at 0x0001016963dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016963e0) */

void FUN_101696340(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1103f3ed0;
  func_0x000107c613fc(&UNK_1103f3ed0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112dbeea0;
  func_0x0001000285a8(0x112dbeea0,&UNK_10d97a558);
  func_0x000107c613fc();
  pcVar3 = FUN_1016967d4;
  func_0x0001000841fc(FUN_1016967d4,puVar1,uVar2);
  func_0x000100084214(&UNK_10d97a520,0x36,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101696400; end: 10169641b;  */

/* WARNING: Possible PIC construction at 0x0001016963dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016963e0) */

void FUN_101696400(undefined8 *param_1)

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
  puVar2 = &UNK_1103f3ed0;
  func_0x000107c613fc(&UNK_1103f3ed0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112dbeea0;
  func_0x0001000285a8(0x112dbeea0,&UNK_10d97a558);
  func_0x000107c613fc();
  pcVar4 = FUN_1016967d4;
  func_0x0001000841fc(FUN_1016967d4,puVar2,uVar3);
  func_0x000100084214(&UNK_10d97a520,0x36,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10169641c; end: 10169679f;  */

void FUN_10169641c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112dbeea8,&UNK_10d97a560);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101697734();
  func_0x000100082720("SCViewfinderScopeExposerSubjectServiceProvider",0x2e,2);
  puVar3 = puVar2;
  FUN_1016977c0();
  func_0x000100082720("SCViewfinderScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101696100;
  func_0x0001000823a8(FUN_101696100,0);
  func_0x000100082720("SCBitmojiAvatarBuilderLensScopedServicesCleanupRelayServiceProvider",0x43,2);
  func_0x0001000285a8(0x112dbeeb0,&UNK_10d97a570);
  puVar5 = &UNK_1103f3ef8;
  func_0x000107c613fc(&UNK_1103f3ef8,0x38,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 *)(puVar5 + 0x28) = param_5;
  *(undefined8 **)(puVar5 + 0x30) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x1016967e0;
  func_0x0001000823a8(0x1016967e0,puVar5);
  func_0x000100082720("BitmojiAvatarBuilderLensEntryPointWrapperServiceProvider",0x38,2);
  puVar6 = puVar2;
  FUN_1016975e8();
  func_0x000100082720("BitmojiAvatarBuilderLensScopeGraphBridgeServicesServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112dbeeb8,&UNK_10d97a578);
  puVar5 = &UNK_1103f3f20;
  func_0x000107c613fc(&UNK_1103f3f20,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1016967f0;
  func_0x0001000823a8(0x1016967f0,puVar5);
  func_0x000100082720("SCBitmojiAvatarBuilderLensScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112dbee38,&UNK_10d97a2a0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1016967fc;
  func_0x0001000823a8(0x1016967fc,uVar7);
  func_0x000100082720("SCBitmojiAvatarBuilderLensScopeInitializationServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112dbee28,&UNK_10d97a290);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x101696804;
  func_0x0001000823a8(0x101696804,uVar8);
  func_0x000100082720("SCBitmojiAvatarBuilderLensScopedServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1103f3f48;
  func_0x000107c613fc(&UNK_1103f3f48,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x10169680c;
  func_0x0001000823a8(0x10169680c,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCBitmojiAvatarBuilderLensScopeEntryPointProvider",0x31,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1016967a0; end: 1016967d3;  */

void FUN_1016967a0(void)

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



/* Entry: 1016967d4; end: 101696813;  */

void FUN_1016967d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112dbeea8,&UNK_10d97a560);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101697734();
  func_0x000100082720("SCViewfinderScopeExposerSubjectServiceProvider",0x2e,2);
  puVar3 = puVar2;
  FUN_1016977c0();
  func_0x000100082720("SCViewfinderScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101696100;
  func_0x0001000823a8(FUN_101696100,0);
  func_0x000100082720("SCBitmojiAvatarBuilderLensScopedServicesCleanupRelayServiceProvider",0x43,2);
  func_0x0001000285a8(0x112dbeeb0,&UNK_10d97a570);
  puVar5 = &UNK_1103f3ef8;
  func_0x000107c613fc(&UNK_1103f3ef8,0x38,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  *(undefined8 *)(puVar5 + 0x28) = uVar9;
  *(undefined8 **)(puVar5 + 0x30) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(puVar3);
  uVar6 = 0x1016967e0;
  func_0x0001000823a8(0x1016967e0,puVar5);
  func_0x000100082720("BitmojiAvatarBuilderLensEntryPointWrapperServiceProvider",0x38,2);
  puVar7 = puVar2;
  FUN_1016975e8();
  func_0x000100082720("BitmojiAvatarBuilderLensScopeGraphBridgeServicesServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112dbeeb8,&UNK_10d97a578);
  puVar5 = &UNK_1103f3f20;
  func_0x000107c613fc(&UNK_1103f3f20,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar6;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar7;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x1016967f0;
  func_0x0001000823a8(0x1016967f0,puVar5);
  func_0x000100082720("SCBitmojiAvatarBuilderLensScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112dbee38,&UNK_10d97a2a0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1016967fc;
  func_0x0001000823a8(0x1016967fc,uVar8);
  func_0x000100082720("SCBitmojiAvatarBuilderLensScopeInitializationServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112dbee28,&UNK_10d97a290);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x101696804;
  func_0x0001000823a8(0x101696804,uVar9);
  func_0x000100082720("SCBitmojiAvatarBuilderLensScopedServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1103f3f48;
  func_0x000107c613fc(&UNK_1103f3f48,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar10 = 0x10169680c;
  func_0x0001000823a8(0x10169680c,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCBitmojiAvatarBuilderLensScopeEntryPointProvider",0x31,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 101696814; end: 1016969f7;  */

void FUN_101696814(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
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
  FUN_101696c7c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  func_0x0001000285a8(0x112dbeec0,&UNK_10db88e60);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x18) = puVar5;
  func_0x00010169a66c(0);
  func_0x000107c613fc();
  uVar4 = uStack_68;
  FUN_10169a0e0(uStack_68,uVar1,uVar2,uVar3,puVar5);
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar5);
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c6157c(uVar4);
  FUN_10169a0f4();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uStack_88);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 1016969f8; end: 101696b7b;  */

long FUN_1016969f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  func_0x0001000285a8(0x112dbeec0,&UNK_10db88e60);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_5;
  func_0x000107c6157c(param_5);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x00010169a66c(0);
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_10169a0e0(param_1,param_2,param_3,param_4,puVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  FUN_10169a0f4();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 101696b7c; end: 101696bbf;  */

void FUN_101696b7c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101696bc0; end: 101696bc7;  */

undefined8 FUN_101696bc0(void)

{
  return 0x1b;
}



/* Entry: 101696bc8; end: 101696c4b;  */

void FUN_101696bc8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101696cbc,param_2,FUN_101696cc0,param_2,0x101696ce8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101696c4c; end: 101696c7b;  */

undefined ** FUN_101696c4c(void)

{
  return &PTR_DAT_1130667c0;
}



/* Entry: 101696c7c; end: 101696c9b;  */

void FUN_101696c7c(void)

{
  func_0x000107c61168(&PTR_PTR_112dbef30);
  return;
}



/* Entry: 101696c9c; end: 101696cbf;  */

undefined1  [16] FUN_101696c9c(void)

{
  return ZEXT816(0x1103f3fa0);
}



/* Entry: 101696cc0; end: 101696d13;  */

void FUN_101696cc0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101696d14; end: 101696d4f;  */

void FUN_101696d14(undefined8 *param_1,undefined8 param_2)

{
  FUN_101696d50();
  func_0x0001000a7f38("SCBitmojiAvatarBuilderLensScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101696d50; end: 101696f3b;  */

void FUN_101696d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cf60;
  ppuVar4 = &PTR_DAT_1130667c0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112dbefb0;
  func_0x0001000285a8(0x112dbefb0,&UNK_10d97a6f0);
  func_0x0001000a6ee8(&UNK_1103f3fa0,
                      "BitmojiAvatarBuilderLensEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,FUN_101696fb0,param_1,uVar2,&UNK_1103f3fa0,&PTR_DAT_112dbeec8);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1103f3ff0;
  func_0x000107c613fc(&UNK_1103f3ff0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1103f4240,
                      "BitmojiAvatarBuilderLensScopeGraphBridgeScopeInitializationPluginKey",0x44,2,
                      FUN_101696fb8,puVar3,uVar2,&UNK_1103f4240,&PTR_DAT_112dbf048);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1103f4018;
  func_0x000107c613fc(&UNK_1103f4018,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1103f3dc0,
                      "SCBitmojiAvatarBuilderLensScopedServicesScopeInitializationPluginKey",0x44,2,
                      FUN_1016970a0,puVar3,uVar2,&UNK_1103f3dc0,&PTR_DAT_112dbee40);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112dbefb8;
  func_0x0001000285a8(0x112dbefb8,&UNK_10d97a6f8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101696f3c; end: 101696faf;  */

void FUN_101696f3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1016970dc;
  func_0x0001000823a8(0x1016970dc,param_3);
  func_0x000100082720("BitmojiAvatarBuilderLensEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101696fb0; end: 101696fb7;  */

void FUN_101696fb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1016970dc;
  func_0x0001000823a8();
  func_0x000100082720("BitmojiAvatarBuilderLensEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101696fb8; end: 101696ff7;  */

void FUN_101696fb8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101697868(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("BitmojiAvatarBuilderLensScopeGraphBridgeScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101696ff8; end: 10169709f;  */

void FUN_101696ff8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103f4040;
  func_0x000107c613fc(&UNK_1103f4040,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1016970d4;
  func_0x0001000823a8(FUN_1016970d4,puVar1);
  func_0x000100082720("SCBitmojiAvatarBuilderLensScopedServicesScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1016970a0; end: 1016970a7;  */

void FUN_1016970a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1103f4040;
  func_0x000107c613fc(&UNK_1103f4040,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1016970d4;
  func_0x0001000823a8(FUN_1016970d4,puVar3);
  func_0x000100082720("SCBitmojiAvatarBuilderLensScopedServicesScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1016970a8; end: 1016970d3;  */

void FUN_1016970a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016970d4; end: 1016970e3;  */

void FUN_1016970d4(undefined8 *param_1)

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
  puVar1 = &UNK_1103f3e48;
  func_0x000107c613fc(&UNK_1103f3e48,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101696314;
  func_0x00010058fa64(FUN_101696314,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1016970e4; end: 1016971bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1016970e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1016974f8();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112dbefc0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112dbefc8) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016971c0);
  (*pcVar1)();
}



/* Entry: 1016971c0; end: 10169721f; -[_TtC40BitmojiAvatarBuilderLensScopeGraphBridge55BitmojiAvatarBuilderLensScopeGraphBridgeSaberEntryPoint init] */

void FUN_1016971c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiAvatarBuilderLensScopeGraphBridge.BitmojiAvatarBuilderLensScopeGraphBridgeSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016971ec);
  (*pcVar1)();
}



/* Entry: 101697220; end: 101697257; -[_TtC40BitmojiAvatarBuilderLensScopeGraphBridge55BitmojiAvatarBuilderLensScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010169723c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101697240) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101697220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dbefc0));
  return;
}



/* Entry: 101697258; end: 10169727f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101697258(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112dbefc8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112dbefc0));
  return;
}



/* Entry: 101697280; end: 10169729f;  */

void FUN_101697280(void)

{
  func_0x000107c61168(&PTR_PTR_1127e4498);
  return;
}



/* Entry: 1016972a0; end: 101697327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1016972a0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dbeff8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112dbf000);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101697328);
  (*pcVar2)();
}



/* Entry: 101697328; end: 10169740f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101697328(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dbeff8);
  *(undefined **)(unaff_x20 + _DAT_112dbeff8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dbf000);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112dbf000))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1103f4160;
  func_0x000107c613fc(&UNK_1103f4160,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101697414,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101697410; end: 10169741b;  */

void FUN_101697410(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10169741c; end: 10169747b; -[_TtC40BitmojiAvatarBuilderLensScopeGraphBridge55SCBitmojiAvatarBuilderLensScopedServicesSaberEntryPoint init] */

void FUN_10169741c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiAvatarBuilderLensScopeGraphBridge.SCBitmojiAvatarBuilderLensScopedServicesSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101697448);
  (*pcVar1)();
}



/* Entry: 10169747c; end: 1016974b3; -[_TtC40BitmojiAvatarBuilderLensScopeGraphBridge55SCBitmojiAvatarBuilderLensScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169747c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dbf000));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dbeff8));
  return;
}



/* Entry: 1016974b4; end: 1016974b7;  */

void FUN_1016974b4(void)

{
  return;
}



/* Entry: 1016974b8; end: 1016974d7;  */

void FUN_1016974b8(void)

{
  FUN_101697328();
  return;
}



/* Entry: 1016974d8; end: 1016974f7;  */

void FUN_1016974d8(void)

{
  func_0x000107c61168(&PTR_PTR_1127e4560);
  return;
}



/* Entry: 1016974f8; end: 1016975c7;  */

undefined8 FUN_1016974f8(void)

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
  
  func_0x000107c61428(0x112dbf030,&uStack_40,0x20,0);
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
    FUN_1016975c8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1016975c8; end: 1016975e7;  */

void FUN_1016975c8(void)

{
  func_0x000107c61168(&PTR_PTR_1127e4628);
  return;
}



/* Entry: 1016975e8; end: 101697603;  */

void FUN_1016975e8(undefined8 param_1)

{
  func_0x0001000285a8(0x112dbf038,&UNK_10d97a7c8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101697670,param_1);
  return;
}



/* Entry: 101697604; end: 10169766f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101697604(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1016975c8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112dbf040) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101697670; end: 101697677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101697670(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1016975c8();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112dbf040) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 101697678; end: 1016976c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101697678(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dbf040) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016976c4; end: 101697723; -[_TtC40BitmojiAvatarBuilderLensScopeGraphBridge48BitmojiAvatarBuilderLensScopeGraphBridgeServices init] */

void FUN_1016976c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiAvatarBuilderLensScopeGraphBridge.BitmojiAvatarBuilderLensScopeGraphBridgeServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016976f0);
  (*pcVar1)();
}



/* Entry: 101697724; end: 101697733; -[_TtC40BitmojiAvatarBuilderLensScopeGraphBridge48BitmojiAvatarBuilderLensScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101697724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbf040));
  return;
}



/* Entry: 101697734; end: 1016977bf;  */

void FUN_101697734(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101697774,0);
  return;
}



/* Entry: 1016977c0; end: 1016977db;  */

void FUN_1016977c0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10169782c,param_1);
  return;
}



/* Entry: 1016977dc; end: 10169782b;  */

void FUN_1016977dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 10169782c; end: 10169785f;  */

void FUN_10169782c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101697860; end: 101697867;  */

undefined8 FUN_101697860(void)

{
  return 0x1b;
}



/* Entry: 101697868; end: 1016979df;  */

void FUN_101697868(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103f41a8;
  func_0x000107c613fc(&UNK_1103f41a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1016979e0,puVar1);
  return;
}



/* Entry: 1016979e0; end: 1016979e7;  */

void FUN_1016979e0(undefined8 *param_1)

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
  func_0x000107c61428(0x112dbf030,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112dbf030,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1103f4280;
  func_0x000107c613fc(&UNK_1103f4280,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101697ab4;
  func_0x00010058fa64(0x101697ab4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1016979e8; end: 101697a43;  */

void FUN_1016979e8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112dbf030,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112dbf030,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101697a44; end: 101697abb;  */

undefined ** FUN_101697a44(void)

{
  return &PTR_DAT_1130667c0;
}



/* Entry: 101697abc; end: 101697b03; -[SCBitmojiAvatarBuilderLensScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101697abc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dbf098;
  func_0x000107c61428(param_1 + _DAT_112dbf098,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101697b04; end: 101697b5b; -[SCBitmojiAvatarBuilderLensScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101697b04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dbf098;
  func_0x000107c61428(param_1 + _DAT_112dbf098,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101697b5c; end: 101697ba3; -[SCBitmojiAvatarBuilderLensScopeGraphBridgeSaberEntryPoint sCViewfinderScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101697b5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dbf0a0;
  func_0x000107c61428(param_1 + _DAT_112dbf0a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101697ba4; end: 101697baf; -[SCBitmojiAvatarBuilderLensScopeGraphBridgeSaberEntryPoint setSCViewfinderScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101697ba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dbf0a0;
  func_0x000107c61428(param_1 + _DAT_112dbf0a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101697bb0; end: 101697bf7; -[SCBitmojiAvatarBuilderLensScopeGraphBridgeSaberEntryPoint bitmojiAvatarBuilderLensScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101697bb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dbf0a8;
  func_0x000107c61428(param_1 + _DAT_112dbf0a8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101697bf8; end: 101697c03; -[SCBitmojiAvatarBuilderLensScopeGraphBridgeSaberEntryPoint setBitmojiAvatarBuilderLensScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101697bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dbf0a8;
  func_0x000107c61428(param_1 + _DAT_112dbf0a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101697c04; end: 101697c63;  */

void FUN_101697c04(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 101697c64; end: 101697e1f;  */

/* WARNING: Possible PIC construction at 0x000101697d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101697da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101697db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101697df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101697db4) */
/* WARNING: Removing unreachable block (ram,0x000101697da4) */
/* WARNING: Removing unreachable block (ram,0x000101697d80) */
/* WARNING: Removing unreachable block (ram,0x000101697df8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101697c64(void)

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
  func_0x000107c5157c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3e968();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_101697280();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1016974f8();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101697e20);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112dbefc0) = lVar5;
      *(long *)(lVar3 + _DAT_112dbefc8) = unaff_x20;
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



/* Entry: 101697e20; end: 101697e47; -[SCBitmojiAvatarBuilderLensScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101697e20(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101697c64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101697e48; end: 101697e8b; -[SCBitmojiAvatarBuilderLensScopeGraphBridgeSaberEntryPoint end] */

void FUN_101697e48(undefined8 param_1)

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



/* Entry: 101697e8c; end: 10169808f;  */

void FUN_101697e8c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef104a5f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000018,0x800000010efb5a10,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000037;
        if (((param_2 != -0x2fffffffffffffc9) || (param_3 != -0x7ffffffef104a5d0)) &&
           (func_0x000107c605b8(0xd000000000000037,0x800000010efb5a30,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "BitmojiAvatarBuilderLensScopeGraphBridge/SCBitmojiAvatarBuilderLensScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x68,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101698090);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52ca4();
        goto LAB_101697f18;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58b24();
  }
LAB_101697f18:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101698090; end: 10169813b; -[SCBitmojiAvatarBuilderLensScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101698090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101697e8c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10169813c; end: 1016981b3; -[SCBitmojiAvatarBuilderLensScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169813c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dbf098,0);
  *(undefined8 *)(param_1 + _DAT_112dbf0a0) = 0;
  *(undefined8 *)(param_1 + _DAT_112dbf0a8) = 0;
  *(undefined8 *)(param_1 + _DAT_112dbf0b0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016981b4; end: 1016981e7;  */

void FUN_1016981b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016981e8; end: 10169823f; -[SCBitmojiAvatarBuilderLensScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101698214: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101698218) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016981e8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dbf098);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dbf0a0));
  return;
}



/* Entry: 101698240; end: 10169825f;  */

void FUN_101698240(void)

{
  func_0x000107c61168(&PTR_PTR_1127e46e8);
  return;
}



/* Entry: 101698260; end: 1016982a7; -[SCSCBitmojiAvatarBuilderLensScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101698260(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dbf0e0;
  func_0x000107c61428(param_1 + _DAT_112dbf0e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016982a8; end: 1016982ff; -[SCSCBitmojiAvatarBuilderLensScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016982a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dbf0e0;
  func_0x000107c61428(param_1 + _DAT_112dbf0e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101698300; end: 1016983d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101698300(undefined8 param_1,long param_2)

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
    FUN_1016974d8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112dbeff8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016983d8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112dbf000);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dbf0e8);
    *(long **)(unaff_x20 + _DAT_112dbf0e8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1016983d8; end: 1016983ff; -[SCSCBitmojiAvatarBuilderLensScopedServicesSaberEntryPoint begin] */

void FUN_1016983d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101698300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101698400; end: 101698577;  */

/* WARNING: Possible PIC construction at 0x000101698468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101698500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010169846c) */
/* WARNING: Removing unreachable block (ram,0x000101698504) */
/* WARNING: Removing unreachable block (ram,0x00010169851c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101698400(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112dbf0e8);
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



/* Entry: 101698578; end: 10169857f;  */

void FUN_101698578(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101698580; end: 1016985b3; -[SCSCBitmojiAvatarBuilderLensScopedServicesSaberEntryPoint end] */

void FUN_101698580(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101698400();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016985b4; end: 1016986d3;  */

void FUN_1016985b4(long param_1,long param_2,long param_3)

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
                        "BitmojiAvatarBuilderLensScopeGraphBridge/SCSCBitmojiAvatarBuilderLensScopedServicesSaberEntryPoint.swift"
                        ,0x68,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016986d4);
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



/* Entry: 1016986d4; end: 10169877f; -[SCSCBitmojiAvatarBuilderLensScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1016986d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1016985b4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101698780; end: 1016987df; -[SCSCBitmojiAvatarBuilderLensScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101698780(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dbf0e0,0);
  *(undefined8 *)(param_1 + _DAT_112dbf0e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016987e0; end: 101698813;  */

void FUN_1016987e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101698814; end: 10169884b; -[SCSCBitmojiAvatarBuilderLensScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101698814(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dbf0e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dbf0e8));
  return;
}



/* Entry: 10169884c; end: 10169886b;  */

void FUN_10169884c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e47b8);
  return;
}



/* Entry: 10169886c; end: 1016988a3;  */

void FUN_10169886c(void)

{
  undefined8 uVar1;
  
  func_0x0001044e4d64(0);
  func_0x000107c610f8();
  uVar1 = 0x17;
  func_0x0001044e4b78();
  uRam0000000113802c08 = uVar1;
  return;
}



/* Entry: 1016988a4; end: 101698d4b;  */

void FUN_1016988a4(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  func_0x000100f0c488();
  func_0x000107c61534();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  if (lRam0000000112dbf118 != -1) {
    func_0x000107c61568(0x112dbf118,FUN_10169886c);
  }
  uVar4 = uRam0000000113802c08;
  *(undefined8 *)(param_1 + 0x20) = uRam0000000113802c08;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar3 = 1;
  func_0x000107c602e8();
  func_0x000107c61174(uVar4);
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101698a7c);
      (*pcVar2)();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar4 = 0;
    func_0x000100f060ac(0,param_1);
  }
  lVar1 = lVar3 + 0x38;
  uVar5 = *(ulong *)(lVar3 + 0x28);
  func_0x000107c60114();
  uVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
  uVar6 = uVar5 >> 6;
  uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
  uVar8 = 1L << (uVar5 & 0x3f);
  if ((uVar8 & uVar7) != 0) {
    func_0x0001044e4d64(0);
    do {
      uVar7 = *(ulong *)(*(long *)(lVar3 + 0x30) + uVar5 * 8);
      func_0x000107c61174();
      uVar6 = uVar7;
      func_0x000107c60118();
      func_0x000107c61170(uVar7);
      if ((uVar6 & 1) != 0) {
        func_0x000107c61170(uVar4);
        goto LAB_101698a10;
      }
      uVar5 = uVar5 + 1 & ~uVar9;
      uVar6 = uVar5 >> 6;
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
      uVar8 = 1L << (uVar5 & 0x3f);
    } while ((uVar8 & uVar7) != 0);
  }
  *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
  *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar5 * 8) = uVar4;
  if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101698a78);
    (*pcVar2)();
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_101698a10:
  func_0x000107c61588(param_1);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c61408(param_1 + 0x20,uVar10,uVar4);
  lRam0000000113802c10 = lVar3;
  return;
}



/* Entry: 101698d4c; end: 101698dcb;  */

void FUN_101698d4c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_3 != 0) {
    uVar2 = 0;
    FUN_101699e44(0);
    lVar3 = param_3;
    func_0x000107c614f0(param_3);
    FUN_101699dec(param_2,param_3,uVar2,lVar3);
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101698dcc);
  (*pcVar1)();
}



/* Entry: 101698dcc; end: 101698dfb;  */

void FUN_101698dcc(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = 0;
    FUN_101699e44(0);
    lVar5 = lVar3;
    func_0x000107c614f0(lVar3);
    FUN_101699dec(uVar2,lVar3,uVar4,lVar5);
    *param_1 = uVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101698dcc);
  (*pcVar1)();
}


