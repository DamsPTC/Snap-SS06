/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f481d4; end: 101f481e3;  */

undefined1  [16] FUN_101f481d4(void)

{
  return ZEXT816(0x1104a5d58);
}



/* Entry: 101f481e4; end: 101f4822f;  */

void FUN_101f481e4(undefined8 param_1)

{
  func_0x0001000285a8(0x112e42e48,&UNK_10da34a10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101f48230,param_1);
  return;
}



/* Entry: 101f48230; end: 101f4827f;  */

void FUN_101f48230(long *param_1,long param_2)

{
  long lVar1;
  undefined8 unaff_x20;
  
  FUN_101f4856c();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_1104a5e38;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101f48280; end: 101f482af;  */

void FUN_101f48280(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101f482b0; end: 101f4844f;  */

void FUN_101f482b0(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x8_00;
  undefined8 unaff_x20;
  undefined1 *puVar10;
  code *pcVar11;
  long lVar12;
  undefined1 auStack_90 [8];
  long lStack_88;
  
  lVar3 = 0x112e02cd8;
  func_0x0001000285a8(0x112e02cd8,&UNK_10d9d5220);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_90 + -extraout_x8;
  lVar4 = 0;
  func_0x000107c5f4bc();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  lStack_88 = param_1;
  func_0x000107c5f4b8(lVar12);
  uVar7 = 0x800000010f01cbf0;
  uVar5 = 0xd000000000000011;
  func_0x000107c5f414(0xd000000000000011,0x800000010f01cbf0);
  puVar6 = &UNK_1104a5e20;
  func_0x000107c613fc(&UNK_1104a5e20,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,unaff_x20);
  func_0x000107c5f740(puVar10,uVar5,uVar7,param_3 & 1,param_4,FUN_101f48450,puVar6);
  pcVar11 = *(code **)(lVar2 + 8);
  FUN_101f484c8();
  (*pcVar11)(lVar12,puVar10,lVar3,uVar5,uVar1,lVar2);
  (**(code **)(lVar8 + 8))(puVar10,lVar3);
  (**(code **)(lVar9 + 8))(lVar12,lVar4);
  return;
}



/* Entry: 101f48450; end: 101f484c7;  */

void FUN_101f48450(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000100083b20(&uStack_48);
    func_0x000107c61574(lVar1);
    func_0x000107c614f0(uStack_48);
    (**(code **)(lStack_40 + 0x48))();
    func_0x000107c615e8(uStack_48);
  }
  return;
}



/* Entry: 101f484c8; end: 101f4853b;  */

void FUN_101f484c8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e02cf0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e02cd8;
  func_0x00010002969c(0x112e02cd8,&UNK_10d9d5220);
  puVar2 = PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850;
  func_0x000107c61520(PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850,uVar1);
  puRam0000000112e02cf0 = puVar2;
  return;
}



/* Entry: 101f4853c; end: 101f4855b;  */

void FUN_101f4853c(void)

{
  FUN_101f482b0();
  return;
}



/* Entry: 101f4855c; end: 101f4856b;  */

undefined1  [16] FUN_101f4855c(void)

{
  return ZEXT816(0x1104a5e58);
}



/* Entry: 101f4856c; end: 101f4858b;  */

void FUN_101f4856c(void)

{
  func_0x000107c61168(&PTR_PTR_112e42e90);
  return;
}



/* Entry: 101f4858c; end: 101f485e3;  */

undefined ** FUN_101f4858c(void)

{
  return &PTR_DAT_112ffc1c0;
}



/* Entry: 101f485e4; end: 101f4864f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f485e4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f489d8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e42f38) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101f48650; end: 101f486bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f48650(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e42f38) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f486bc; end: 101f4871b; -[_TtC54SpectaclesClientControllerScopedFactoryServiceProvider42SCSpectaclesClientControllerScopedServices init] */

void FUN_101f486bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesClientControllerScopedFactoryServiceProvider.SCSpectaclesClientControllerScopedServices"
                      ,0x61,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f486e8);
  (*pcVar1)();
}



/* Entry: 101f4871c; end: 101f4872b; -[_TtC54SpectaclesClientControllerScopedFactoryServiceProvider42SCSpectaclesClientControllerScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4871c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e42f38));
  return;
}



/* Entry: 101f4872c; end: 101f48797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4872c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104a6128;
  func_0x000107c613fc(&UNK_1104a6128,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101f48ab4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f48798; end: 101f48833;  */

void FUN_101f48798(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104a6038;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104a6038;
  return;
}



/* Entry: 101f48834; end: 101f4886b;  */

void FUN_101f48834(long *param_1)

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



/* Entry: 101f4886c; end: 101f48873;  */

undefined8 FUN_101f4886c(void)

{
  return 0x1b;
}



/* Entry: 101f48874; end: 101f489a7;  */

void FUN_101f48874(undefined8 *param_1)

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
  puVar1 = &UNK_1104a6150;
  func_0x000107c613fc(&UNK_1104a6150,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f48a8c;
  func_0x00010058fa64(FUN_101f48a8c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f489a8; end: 101f489d7;  */

undefined ** FUN_101f489a8(void)

{
  return &PTR_DAT_112fe92a8;
}



/* Entry: 101f489d8; end: 101f489f7;  */

void FUN_101f489d8(void)

{
  func_0x000107c61168(&PTR_PTR_11280a308);
  return;
}



/* Entry: 101f489f8; end: 101f48a47;  */

undefined1  [16] FUN_101f489f8(void)

{
  return ZEXT816(0x1104a6088);
}



/* Entry: 101f48a48; end: 101f48a8b;  */

void FUN_101f48a48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42fa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9a60;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e42fa0 = puVar1;
  return;
}



/* Entry: 101f48a8c; end: 101f48ab3;  */

void FUN_101f48a8c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101f48ab4; end: 101f48ac7;  */

void FUN_101f48ab4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f48ac8; end: 101f48dc3;  */

void FUN_101f48ac8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112e42fb8,&UNK_10da34e08);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e42fc0,&UNK_10da34e10);
  puVar2 = &UNK_1104a61b0;
  func_0x000107c613fc(&UNK_1104a61b0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar9 = 0x101f48dcc;
  func_0x0001000823a8(0x101f48dcc,puVar2);
  func_0x000100082720("SCSpectaclesClientControllerEntryPointWrapperServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_101f48834;
  func_0x0001000823a8(FUN_101f48834,0);
  pcVar4 = "SCSpectaclesClientControllerScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCSpectaclesClientControllerScopedServicesCleanupRelayServiceProvider",0x45,2
                     );
  FUN_101f49a64();
  func_0x000100082720("SpectaclesClientControllerScopeGraphBridgeServicesServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e42fc8,&UNK_10da34e20);
  puVar2 = &UNK_1104a61d8;
  func_0x000107c613fc(&UNK_1104a61d8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar3;
  *(char **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x101f48dd4;
  func_0x0001000823a8(0x101f48dd4,puVar2);
  func_0x000100082720("SCSpectaclesClientControllerScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112e42f40,&UNK_10da34b40);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x101f48de0;
  func_0x0001000823a8(0x101f48de0,uVar5);
  func_0x000100082720("SCSpectaclesClientControllerScopeInitializationServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e42f30,&UNK_10da34b30);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101f48de8;
  func_0x0001000823a8(0x101f48de8,uVar6);
  func_0x000100082720("SCSpectaclesClientControllerScopedServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104a6200;
  func_0x000107c613fc(&UNK_1104a6200,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  pcVar8 = FUN_101f48e1c;
  func_0x0001000823a8(FUN_101f48e1c,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCSpectaclesClientControllerScopeEntryPointProvider",0x33,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 101f48dc4; end: 101f48def;  */

void FUN_101f48dc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112e42fb8,&UNK_10da34e08);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e42fc0,&UNK_10da34e10);
  puVar2 = &UNK_1104a61b0;
  func_0x000107c613fc(&UNK_1104a61b0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  uVar9 = 0x101f48dcc;
  func_0x0001000823a8(0x101f48dcc,puVar2);
  func_0x000100082720("SCSpectaclesClientControllerEntryPointWrapperServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_101f48834;
  func_0x0001000823a8(FUN_101f48834,0);
  pcVar4 = "SCSpectaclesClientControllerScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCSpectaclesClientControllerScopedServicesCleanupRelayServiceProvider",0x45,2
                     );
  FUN_101f49a64();
  func_0x000100082720("SpectaclesClientControllerScopeGraphBridgeServicesServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e42fc8,&UNK_10da34e20);
  puVar2 = &UNK_1104a61d8;
  func_0x000107c613fc(&UNK_1104a61d8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar3;
  *(char **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x101f48dd4;
  func_0x0001000823a8(0x101f48dd4,puVar2);
  func_0x000100082720("SCSpectaclesClientControllerScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112e42f40,&UNK_10da34b40);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x101f48de0;
  func_0x0001000823a8(0x101f48de0,uVar5);
  func_0x000100082720("SCSpectaclesClientControllerScopeInitializationServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e42f30,&UNK_10da34b30);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101f48de8;
  func_0x0001000823a8(0x101f48de8,uVar6);
  func_0x000100082720("SCSpectaclesClientControllerScopedServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104a6200;
  func_0x000107c613fc(&UNK_1104a6200,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  pcVar8 = FUN_101f48e1c;
  func_0x0001000823a8(FUN_101f48e1c,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCSpectaclesClientControllerScopeEntryPointProvider",0x33,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 101f48df0; end: 101f48e1b;  */

void FUN_101f48df0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f48e1c; end: 101f48e23;  */

void FUN_101f48e1c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104a6038;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104a6038;
  return;
}



/* Entry: 101f48e24; end: 101f48f0b;  */

void FUN_101f48e24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_101f49170();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_101f49028(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f48f0c; end: 101f48f37;  */

void FUN_101f48f0c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f48f38; end: 101f48f3f;  */

undefined8 FUN_101f48f38(void)

{
  return 0x1b;
}



/* Entry: 101f48f40; end: 101f48fc3;  */

void FUN_101f48f40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f491b0,param_2,FUN_101f491b4,param_2,FUN_101f491dc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f48fc4; end: 101f49013;  */

undefined8 FUN_101f48fc4(void)

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



/* Entry: 101f49014; end: 101f49027;  */

void FUN_101f49014(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104a6218;
  return;
}



/* Entry: 101f49028; end: 101f49153;  */

void FUN_101f49028(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a9a68;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01ce70);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f01ce90);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101f49154; end: 101f4916f;  */

undefined ** FUN_101f49154(void)

{
  return &PTR_DAT_112fe92a8;
}



/* Entry: 101f49170; end: 101f4918f;  */

void FUN_101f49170(void)

{
  func_0x000107c61168(&PTR_PTR_112e43038);
  return;
}



/* Entry: 101f49190; end: 101f491b3;  */

undefined1  [16] FUN_101f49190(void)

{
  return ZEXT816(0x1104a6258);
}



/* Entry: 101f491b4; end: 101f491db;  */

void FUN_101f491b4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f491dc; end: 101f491e3;  */

undefined8 FUN_101f491dc(void)

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



/* Entry: 101f491e4; end: 101f4921f;  */

void FUN_101f491e4(undefined8 *param_1,undefined8 param_2)

{
  FUN_101f49220();
  func_0x0001000a7f38("SCSpectaclesClientControllerScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101f49220; end: 101f4940b;  */

void FUN_101f49220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106ce850;
  ppuVar4 = &PTR_DAT_112fe92a8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e430a0;
  func_0x0001000285a8(0x112e430a0,&UNK_10da34f70);
  func_0x0001000a6ee8(&UNK_1104a6258,
                      "SCSpectaclesClientControllerEntryPointWrapperScopeInitializationPluginKey",
                      0x49,2,FUN_101f49480,param_1,uVar2,&UNK_1104a6258,&PTR_DAT_112e42fd0);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104a62a8;
  func_0x000107c613fc(&UNK_1104a62a8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104a60c8,
                      "SCSpectaclesClientControllerScopedServicesScopeInitializationPluginKey",0x46,
                      2,FUN_101f49530,puVar3,uVar2,&UNK_1104a60c8,&PTR_DAT_112e42f48);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104a62d0;
  func_0x000107c613fc(&UNK_1104a62d0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104a6488,
                      "SpectaclesClientControllerScopeGraphBridgeScopeInitializationPluginKey",0x46,
                      2,FUN_101f49538,puVar3,uVar2,&UNK_1104a6488,&PTR_DAT_112e43130);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e430a8;
  func_0x0001000285a8(0x112e430a8,&UNK_10da34f78);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101f4940c; end: 101f4947f;  */

void FUN_101f4940c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101f495ac;
  func_0x0001000823a8(0x101f495ac,param_3);
  func_0x000100082720("SCSpectaclesClientControllerEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f49480; end: 101f49487;  */

void FUN_101f49480(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101f495ac;
  func_0x0001000823a8();
  func_0x000100082720("SCSpectaclesClientControllerEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f49488; end: 101f4952f;  */

void FUN_101f49488(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104a62f8;
  func_0x000107c613fc(&UNK_1104a62f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101f495a4;
  func_0x0001000823a8(FUN_101f495a4,puVar1);
  func_0x000100082720("SCSpectaclesClientControllerScopedServicesScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101f49530; end: 101f49537;  */

void FUN_101f49530(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104a62f8;
  func_0x000107c613fc(&UNK_1104a62f8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101f495a4;
  func_0x0001000823a8(FUN_101f495a4,puVar3);
  func_0x000100082720("SCSpectaclesClientControllerScopedServicesScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101f49538; end: 101f49577;  */

void FUN_101f49538(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f49b48(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpectaclesClientControllerScopeGraphBridgeScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f49578; end: 101f495a3;  */

void FUN_101f49578(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f495a4; end: 101f495b3;  */

void FUN_101f495a4(undefined8 *param_1)

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
  puVar1 = &UNK_1104a6150;
  func_0x000107c613fc(&UNK_1104a6150,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f48a8c;
  func_0x00010058fa64(FUN_101f48a8c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f495b4; end: 101f4963b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f495b4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101f49974();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e430b0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e430b8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f4963c);
  (*pcVar1)();
}



/* Entry: 101f4963c; end: 101f4969b; -[_TtC42SpectaclesClientControllerScopeGraphBridge57SpectaclesClientControllerScopeGraphBridgeSaberEntryPoint init] */

void FUN_101f4963c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesClientControllerScopeGraphBridge.SpectaclesClientControllerScopeGraphBridgeSaberEntryPoint"
                      ,100,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f49668);
  (*pcVar1)();
}



/* Entry: 101f4969c; end: 101f496d3; -[_TtC42SpectaclesClientControllerScopeGraphBridge57SpectaclesClientControllerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f496b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f496bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4969c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e430b0));
  return;
}



/* Entry: 101f496d4; end: 101f496fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f496d4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e430b8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e430b0));
  return;
}



/* Entry: 101f496fc; end: 101f4971b;  */

void FUN_101f496fc(void)

{
  func_0x000107c61168(&PTR_PTR_11280a3c8);
  return;
}



/* Entry: 101f4971c; end: 101f497a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f4971c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e430e8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e430f0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f497a4);
  (*pcVar2)();
}



/* Entry: 101f497a4; end: 101f4988b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f497a4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e430e8);
  *(undefined **)(unaff_x20 + _DAT_112e430e8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e430f0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e430f0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104a63e8;
  func_0x000107c613fc(&UNK_1104a63e8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101f49890,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101f4988c; end: 101f49897;  */

void FUN_101f4988c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f49898; end: 101f498f7; -[_TtC42SpectaclesClientControllerScopeGraphBridge57SCSpectaclesClientControllerScopedServicesSaberEntryPoint init] */

void FUN_101f49898(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesClientControllerScopeGraphBridge.SCSpectaclesClientControllerScopedServicesSaberEntryPoint"
                      ,100,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f498c4);
  (*pcVar1)();
}



/* Entry: 101f498f8; end: 101f4992f; -[_TtC42SpectaclesClientControllerScopeGraphBridge57SCSpectaclesClientControllerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f498f8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e430f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e430e8));
  return;
}



/* Entry: 101f49930; end: 101f49933;  */

void FUN_101f49930(void)

{
  return;
}



/* Entry: 101f49934; end: 101f49953;  */

void FUN_101f49934(void)

{
  FUN_101f497a4();
  return;
}



/* Entry: 101f49954; end: 101f49973;  */

void FUN_101f49954(void)

{
  func_0x000107c61168(&PTR_PTR_11280a490);
  return;
}



/* Entry: 101f49974; end: 101f49a43;  */

undefined8 FUN_101f49974(void)

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
  
  func_0x000107c61428(0x112e43120,&uStack_40,0x20,0);
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
    FUN_101f49a44();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101f49a44; end: 101f49a63;  */

void FUN_101f49a44(void)

{
  func_0x000107c61168(&PTR_PTR_11280a558);
  return;
}



/* Entry: 101f49a64; end: 101f49acf;  */

void FUN_101f49a64(void)

{
  func_0x0001000285a8(0x112e43128,&UNK_10da35058);
  func_0x0001000823a8(0x101f49aa4,0);
  return;
}



/* Entry: 101f49ad0; end: 101f49b0b; -[_TtC42SpectaclesClientControllerScopeGraphBridge50SpectaclesClientControllerScopeGraphBridgeServices init] */

void FUN_101f49ad0(undefined8 param_1)

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



/* Entry: 101f49b0c; end: 101f49b3f;  */

void FUN_101f49b0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f49b40; end: 101f49b47;  */

undefined8 FUN_101f49b40(void)

{
  return 0x1b;
}



/* Entry: 101f49b48; end: 101f49cbf;  */

void FUN_101f49b48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104a6430;
  func_0x000107c613fc(&UNK_1104a6430,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101f49cc0,puVar1);
  return;
}



/* Entry: 101f49cc0; end: 101f49cc7;  */

void FUN_101f49cc0(undefined8 *param_1)

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
  func_0x000107c61428(0x112e43120,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e43120,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104a64c8;
  func_0x000107c613fc(&UNK_1104a64c8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101f49d74;
  func_0x00010058fa64(0x101f49d74,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f49cc8; end: 101f49d23;  */

void FUN_101f49cc8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e43120,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e43120,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101f49d24; end: 101f49d7b;  */

undefined ** FUN_101f49d24(void)

{
  return &PTR_DAT_112fe92a8;
}



/* Entry: 101f49d7c; end: 101f49dc3; -[SCSpectaclesClientControllerScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f49d7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e43180;
  func_0x000107c61428(param_1 + _DAT_112e43180,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f49dc4; end: 101f49e1b; -[SCSpectaclesClientControllerScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f49dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e43180;
  func_0x000107c61428(param_1 + _DAT_112e43180,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f49e1c; end: 101f49e63; -[SCSpectaclesClientControllerScopeGraphBridgeSaberEntryPoint spectaclesClientControllerScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f49e1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e43188;
  func_0x000107c61428(param_1 + _DAT_112e43188,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f49e64; end: 101f49ec7; -[SCSpectaclesClientControllerScopeGraphBridgeSaberEntryPoint setSpectaclesClientControllerScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f49e64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e43188;
  func_0x000107c61428(param_1 + _DAT_112e43188,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f49ec8; end: 101f49ffb;  */

/* WARNING: Possible PIC construction at 0x000101f49f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f49f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f49fb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f49f84) */
/* WARNING: Removing unreachable block (ram,0x000101f49fa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f49ec8(void)

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
  func_0x000107c5b6e8();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101f496fc();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101f49974();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101f49ffc);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e430b0) = lVar5;
    *(long *)(lVar4 + _DAT_112e430b8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101f49ffc; end: 101f4a023; -[SCSpectaclesClientControllerScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101f49ffc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f49ec8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f4a024; end: 101f4a067; -[SCSpectaclesClientControllerScopeGraphBridgeSaberEntryPoint end] */

void FUN_101f4a024(undefined8 param_1)

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



/* Entry: 101f4a068; end: 101f4a1ff;  */

void FUN_101f4a068(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffc7) || (param_3 != -0x7ffffffef0fe2e90)) {
      uVar2 = 0xd000000000000039;
      func_0x000107c605b8(0xd000000000000039,0x800000010f01d170,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpectaclesClientControllerScopeGraphBridge/SCSpectaclesClientControllerScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x6c,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f4a200);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595c8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f4a200; end: 101f4a2ab; -[SCSpectaclesClientControllerScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101f4a200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f4a068(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f4a2ac; end: 101f4a317; -[SCSpectaclesClientControllerScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4a2ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e43180,0);
  *(undefined8 *)(param_1 + _DAT_112e43188) = 0;
  *(undefined8 *)(param_1 + _DAT_112e43190) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f4a318; end: 101f4a34b;  */

void FUN_101f4a318(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f4a34c; end: 101f4a393; -[SCSpectaclesClientControllerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f4a378: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f4a37c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4a34c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e43180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e43188));
  return;
}



/* Entry: 101f4a394; end: 101f4a3b3;  */

void FUN_101f4a394(void)

{
  func_0x000107c61168(&PTR_PTR_11280a608);
  return;
}



/* Entry: 101f4a3b4; end: 101f4a3fb; -[SCSCSpectaclesClientControllerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4a3b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e431c0;
  func_0x000107c61428(param_1 + _DAT_112e431c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f4a3fc; end: 101f4a453; -[SCSCSpectaclesClientControllerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4a3fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e431c0;
  func_0x000107c61428(param_1 + _DAT_112e431c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f4a454; end: 101f4a52b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4a454(undefined8 param_1,long param_2)

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
    FUN_101f49954();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e430e8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f4a52c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e430f0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e431c8);
    *(long **)(unaff_x20 + _DAT_112e431c8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101f4a52c; end: 101f4a553; -[SCSCSpectaclesClientControllerScopedServicesSaberEntryPoint begin] */

void FUN_101f4a52c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f4a454();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f4a554; end: 101f4a6cb;  */

/* WARNING: Possible PIC construction at 0x000101f4a5bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f4a654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f4a5c0) */
/* WARNING: Removing unreachable block (ram,0x000101f4a658) */
/* WARNING: Removing unreachable block (ram,0x000101f4a670) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4a554(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e431c8);
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



/* Entry: 101f4a6cc; end: 101f4a6d3;  */

void FUN_101f4a6cc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f4a6d4; end: 101f4a707; -[SCSCSpectaclesClientControllerScopedServicesSaberEntryPoint end] */

void FUN_101f4a6d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f4a554();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f4a708; end: 101f4a827;  */

void FUN_101f4a708(long param_1,long param_2,long param_3)

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
                        "SpectaclesClientControllerScopeGraphBridge/SCSCSpectaclesClientControllerScopedServicesSaberEntryPoint.swift"
                        ,0x6c,2,0x2f,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f4a828);
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



/* Entry: 101f4a828; end: 101f4a8d3; -[SCSCSpectaclesClientControllerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f4a828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f4a708(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f4a8d4; end: 101f4a933; -[SCSCSpectaclesClientControllerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4a8d4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e431c0,0);
  *(undefined8 *)(param_1 + _DAT_112e431c8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f4a934; end: 101f4a967;  */

void FUN_101f4a934(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f4a968; end: 101f4a99f; -[SCSCSpectaclesClientControllerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f4a968(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e431c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e431c8));
  return;
}



/* Entry: 101f4a9a0; end: 101f4a9bf;  */

void FUN_101f4a9a0(void)

{
  func_0x000107c61168(&PTR_PTR_11280a6d0);
  return;
}


