/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10344880c; end: 103448877;  */

void FUN_10344880c(void)

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



/* Entry: 103448878; end: 1034488cb;  */

void FUN_103448878(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1034488cc; end: 1034488d3;  */

undefined8 FUN_1034488cc(void)

{
  return 0x1b;
}



/* Entry: 1034488d4; end: 103448957;  */

void FUN_1034488d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1034489d8,param_2,FUN_1034489dc,param_2,0x103448a04,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103448958; end: 103448987;  */

undefined ** FUN_103448958(void)

{
  return &PTR_DAT_11302bca8;
}



/* Entry: 103448988; end: 1034489a7;  */

void FUN_103448988(void)

{
  func_0x000107c61168(&PTR_PTR_112f6a930);
  return;
}



/* Entry: 1034489a8; end: 1034489db;  */

undefined1  [16] FUN_1034489a8(void)

{
  return ZEXT816(0x110657768);
}



/* Entry: 1034489dc; end: 103448a2f;  */

void FUN_1034489dc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103448a30; end: 103449053;  */

void FUN_103448a30(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
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
  FUN_1034491f8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  func_0x0001000285a8(0x112e51d58,&UNK_10da97cc0);
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x18) = puVar11;
  puVar12 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar12;
  FUN_10348a048();
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = auStack_70[0];
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = uVar10;
  func_0x000103489484(uVar10,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,puVar12,puVar11);
  *(undefined8 *)(param_2 + 0x10) = uVar13;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar12 != (undefined *)0x0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61574(uStack_b8);
    *(undefined **)(param_2 + 0x68) = puVar12;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103448da8);
  (*pcVar1)();
}



/* Entry: 103449054; end: 1034490e7;  */

void FUN_103449054(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1034490e8; end: 10344913b;  */

void FUN_1034490e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10344913c; end: 103449143;  */

undefined8 FUN_10344913c(void)

{
  return 0x1b;
}



/* Entry: 103449144; end: 1034491c7;  */

void FUN_103449144(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103449248,param_2,FUN_10344924c,param_2,0x103449274,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1034491c8; end: 1034491f7;  */

undefined ** FUN_1034491c8(void)

{
  return &PTR_DAT_11302bca8;
}



/* Entry: 1034491f8; end: 103449217;  */

void FUN_1034491f8(void)

{
  func_0x000107c61168(&PTR_PTR_112f6aa28);
  return;
}



/* Entry: 103449218; end: 10344924b;  */

undefined1  [16] FUN_103449218(void)

{
  return ZEXT816(0x110657808);
}



/* Entry: 10344924c; end: 10344929f;  */

void FUN_10344924c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1034492a0; end: 103449d7f;  */

void FUN_1034492a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11071d3e8;
  ppuVar4 = &PTR_DAT_11302bca8;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112f6aae0;
  func_0x0001000285a8(0x112f6aae0,&UNK_10dbc9998);
  func_0x0001000a6ee8(&UNK_110656848,
                      "LensCarouselLayoutSnapEditorServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x4e,2,FUN_103449d80,param_2,uVar2,&UNK_110656848,&PTR_DAT_112f691d8);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106568e8,
                      "LensCarouselSnapEditorActivatorDependenciesServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x5d,2,0x103449dac,param_3,uVar2,&UNK_1106568e8,&PTR_DAT_112f692a8);
  func_0x000107c61574(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110656988,
                      "LensCarouselSnapEditorDataProviderControllingServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x5f,2,0x103449dd8,param_4,uVar2,&UNK_110656988,&PTR_DAT_112f69378);
  func_0x000107c61574(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_110656a28,
                      "LensCarouselSnapEditorLensFeaturesVisibilityControllerServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x68,2,0x103449e04,param_5,uVar2,&UNK_110656a28,&PTR_DAT_112f69460);
  func_0x000107c61574(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_110656ac8,
                      "LensCarouselSnapEditorServicesEntryPointWrapperScopeInitializationPluginKey",
                      0x4b,2,0x103449e30,param_6,uVar2,&UNK_110656ac8,&PTR_DAT_112f69530);
  func_0x000107c61574(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_110656b68,
                      "LensPreviewSnapEditorActionInterceptionServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x59,2,0x103449e5c,param_7,uVar2,&UNK_110656b68,&PTR_DAT_112f69658);
  func_0x000107c61574(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_110656c08,
                      "SCLensInSnapEditorScopeEntryPointWrapperScopeInitializationPluginKey",0x44,2,
                      0x103449e88,param_8,uVar2,&UNK_110656c08,&PTR_DAT_112f69740);
  func_0x000107c61574(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000a6ee8(&UNK_110656c88,
                      "SCLensProcessingSnapEditorIntegrationEntryPointWrapperScopeInitializationPluginKey"
                      ,0x52,2,0x103449eb4,param_9,uVar2,&UNK_110656c88,&PTR_DAT_112f69870);
  func_0x000107c61574(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000a6ee8(&UNK_110656d28,
                      "SCLensUIUpdateOnSnapEditorServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x4c,2,0x103449ee0,param_10,uVar2,&UNK_110656d28,&PTR_DAT_112f69960);
  func_0x000107c61574(param_10);
  func_0x000107c6157c(param_11);
  func_0x0001000a6ee8(&UNK_110656dc8,
                      "SCSnapEditorFilterDataServiceProviderWrapperScopeInitializationPluginKey",
                      0x48,2,0x103449f0c,param_11,uVar2,&UNK_110656dc8,&PTR_DAT_112f69a30);
  func_0x000107c61574(param_11);
  puVar3 = &UNK_110657878;
  func_0x000107c613fc(&UNK_110657878,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_12;
  *(undefined8 *)(puVar3 + 0x18) = param_13;
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x0001000a6ee8(&UNK_1106562d8,"SCSnapEditorScopedServicesScopeInitializationPluginKey",0x36,2
                      ,FUN_103449fe0,puVar3,uVar2,&UNK_1106562d8,&PTR_DAT_112f68fd0);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_14);
  func_0x0001000a6ee8(&UNK_110656e68,
                      "SCSnapEditorSwipeFiltersServicesProviderWrapperScopeInitializationPluginKey",
                      0x4b,2,FUN_103449fe8,param_14,uVar2,&UNK_110656e68,&PTR_DAT_112f69b28);
  func_0x000107c61574(param_14);
  func_0x000107c6157c(param_15);
  func_0x0001000a6ee8(&UNK_110656f08,
                      "SCSnapEditorUCOViewServiceProviderWrapperScopeInitializationPluginKey",0x45,2
                      ,0x10344a014,param_15,uVar2,&UNK_110656f08,&PTR_DAT_112f69c48);
  func_0x000107c61574(param_15);
  func_0x000107c6157c(param_16);
  func_0x0001000a6ee8(&UNK_110656fa8,
                      "SnapEditorCTLensToolSessionManagerServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x54,2,0x10344a040,param_16,uVar2,&UNK_110656fa8,&PTR_DAT_112f69d48);
  func_0x000107c61574(param_16);
  func_0x000107c6157c(param_17);
  func_0x0001000a6ee8(&UNK_110657028,
                      "SnapEditorCTLensToolSessionResetEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4d,2,0x10344a06c,param_17,uVar2,&UNK_110657028,&PTR_DAT_112f69e20);
  func_0x000107c61574(param_17);
  func_0x000107c6157c(param_18);
  func_0x0001000a6ee8(&UNK_1106570c8,
                      "SnapEditorFilterIconServiceProviderWrapperScopeInitializationPluginKey",0x46,
                      2,0x10344a098,param_18,uVar2,&UNK_1106570c8,&PTR_DAT_112f69ef0);
  func_0x000107c61574(param_18);
  func_0x000107c6157c(param_19);
  func_0x0001000a6ee8(&UNK_110657168,
                      "SnapEditorLensCarouselSchedulerServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x51,2,0x10344a0c4,param_19,uVar2,&UNK_110657168,&PTR_DAT_112f69fe8);
  func_0x000107c61574(param_19);
  func_0x000107c6157c(param_20);
  func_0x0001000a6ee8(&UNK_110657208,
                      "SnapEditorLensPlusPreviewServicesServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x53,2,0x10344a0f0,param_20,uVar2,&UNK_110657208,&PTR_DAT_112f6a0c0);
  func_0x000107c61574(param_20);
  func_0x000107c6157c(param_21);
  func_0x0001000a6ee8(&UNK_110657288,
                      "SnapEditorMemoriesLensWorkflowEntryPointWrapperScopeInitializationPluginKey",
                      0x4b,2,0x10344a11c,param_21,uVar2,&UNK_110657288,&PTR_DAT_112f6a1b0);
  func_0x000107c61574(param_21);
  puVar3 = &UNK_1106578a0;
  func_0x000107c613fc(&UNK_1106578a0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_12;
  *(undefined8 *)(puVar3 + 0x18) = param_22;
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_22);
  func_0x0001000a6ee8(&UNK_110657de8,"SnapEditorScopeGraphBridgeScopeInitializationPluginKey",0x36,2
                      ,FUN_10344a148,puVar3,uVar2,&UNK_110657de8,&PTR_DAT_112f6bab0);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_23);
  func_0x0001000a6ee8(&UNK_110657328,
                      "SnapEditorScopedLensCarouselEventsHandlingServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x5c,2,FUN_10344a188,param_23,uVar2,&UNK_110657328,&PTR_DAT_112f6a280);
  func_0x000107c61574(param_23);
  func_0x000107c6157c(param_24);
  func_0x0001000a6ee8(&UNK_1106573c8,
                      "SnapEditorScopedLensCarouselPerformanceLoggerServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x5f,2,0x10344a1b4,param_24,uVar2,&UNK_1106573c8,&PTR_DAT_112f6a358);
  func_0x000107c61574(param_24);
  func_0x000107c6157c(param_25);
  func_0x0001000a6ee8(&UNK_110657468,
                      "SnapEditorScopedLensCarouselPreviewDependencyServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x5f,2,0x10344a1e0,param_25,uVar2,&UNK_110657468,&PTR_DAT_112f6a438);
  func_0x000107c61574(param_25);
  func_0x000107c6157c(param_26);
  func_0x0001000a6ee8(&UNK_110657508,
                      "SnapEditorScopedLensCarouselSessionServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x55,2,0x10344a20c,param_26,uVar2,&UNK_110657508,&PTR_DAT_112f6a518);
  func_0x000107c61574(param_26);
  func_0x000107c6157c(param_27);
  func_0x0001000a6ee8(&UNK_1106575a8,
                      "SnapEditorScopedLensCarouselSettingsServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x56,2,0x10344a238,param_27,uVar2,&UNK_1106575a8,&PTR_DAT_112f6a5f8);
  func_0x000107c61574(param_27);
  func_0x000107c6157c(param_28);
  func_0x0001000a6ee8(&UNK_110657648,
                      "SnapEditorScopedLensPlusPaywallPresentationServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x5d,2,0x10344a264,param_28,uVar2,&UNK_110657648,&PTR_DAT_112f6a6d0);
  func_0x000107c61574(param_28);
  func_0x000107c6157c(param_29);
  func_0x0001000a6ee8(&UNK_1106576e8,
                      "SnapEditorScopedSponsoredLensCTAPresentingServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x5c,2,0x10344a290,param_29,uVar2,&UNK_1106576e8,&PTR_DAT_112f6a7e0);
  func_0x000107c61574(param_29);
  func_0x000107c6157c(param_30);
  func_0x0001000a6ee8(&UNK_110657788,
                      "SnapEditorScopedSponsoredLensInfoActionSheetNavigationServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x68,2,0x10344a2bc,param_30,uVar2,&UNK_110657788,&PTR_DAT_112f6a8c8);
  func_0x000107c61574(param_30);
  func_0x000107c6157c(param_31);
  func_0x0001000a6ee8(&UNK_110657828,
                      "SponsoredLensSnapEditorCTAImplEntryPointWrapperScopeInitializationPluginKey",
                      0x4b,2,FUN_10344a36c,param_31,uVar2,&UNK_110657828,&PTR_DAT_112f6a9c0);
  func_0x000107c61574(param_31);
  uVar2 = 0x112f6aae8;
  func_0x0001000285a8(0x112f6aae8,&UNK_10dbc99a0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCSnapEditorScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 103449d80; end: 103449f37;  */

void FUN_103449d80(void)

{
  FUN_10344a2e8();
  return;
}



/* Entry: 103449f38; end: 103449fdf;  */

void FUN_103449f38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106578c8;
  func_0x000107c613fc(&UNK_1106578c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10344a44c;
  func_0x0001000823a8(FUN_10344a44c,puVar1);
  func_0x000100082720("SCSnapEditorScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103449fe0; end: 103449fe7;  */

void FUN_103449fe0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1106578c8;
  func_0x000107c613fc(&UNK_1106578c8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10344a44c;
  func_0x0001000823a8(FUN_10344a44c,puVar3);
  func_0x000100082720("SCSnapEditorScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103449fe8; end: 10344a147;  */

void FUN_103449fe8(void)

{
  FUN_10344a2e8();
  return;
}



/* Entry: 10344a148; end: 10344a187;  */

void FUN_10344a148(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10344d09c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SnapEditorScopeGraphBridgeScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10344a188; end: 10344a2e7;  */

void FUN_10344a188(void)

{
  FUN_10344a2e8();
  return;
}



/* Entry: 10344a2e8; end: 10344a36b;  */

void FUN_10344a2e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 10344a36c; end: 10344a397;  */

void FUN_10344a36c(void)

{
  FUN_10344a2e8();
  return;
}



/* Entry: 10344a398; end: 10344a41f;  */

void FUN_10344a398(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x103449248);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10344a420; end: 10344a44b;  */

void FUN_10344a420(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10344a44c; end: 10344a4a3;  */

void FUN_10344a44c(undefined8 *param_1)

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
  puVar1 = &UNK_110656360;
  func_0x000107c613fc(&UNK_110656360,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10343ce2c;
  func_0x00010058fa64(FUN_10343ce2c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10344a4a4; end: 10344a67b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10344a4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_10344c2c8();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_5;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_6;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112f6aaf0) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112f6aaf8) = param_7;
    puVar4 = auStack_80;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10344a67c);
  (*pcVar2)();
}



/* Entry: 10344a67c; end: 10344a6db; -[_TtC26SnapEditorScopeGraphBridge41SnapEditorScopeGraphBridgeSaberEntryPoint init] */

void FUN_10344a67c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorScopeGraphBridge.SnapEditorScopeGraphBridgeSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10344a6a8);
  (*pcVar1)();
}



/* Entry: 10344a6dc; end: 10344a713; -[_TtC26SnapEditorScopeGraphBridge41SnapEditorScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010344a6f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010344a6fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10344a6dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f6aaf0));
  return;
}



/* Entry: 10344a714; end: 10344a73b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10344a714(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f6aaf8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f6aaf0));
  return;
}



/* Entry: 10344a73c; end: 10344a75b;  */

void FUN_10344a73c(void)

{
  func_0x000107c61168(&PTR_PTR_1128dae50);
  return;
}



/* Entry: 10344a75c; end: 10344a7f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10344a75c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f6ba18);
  *(undefined8 *)(unaff_x20 + _DAT_112f6ab28) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f6ab30) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10344a7f8; end: 10344a857; -[_TtC26SnapEditorScopeGraphBridge43SCSnapEditorCarouselServicesSaberEntryPoint init] */

void FUN_10344a7f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorScopeGraphBridge.SCSnapEditorCarouselServicesSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10344a824);
  (*pcVar1)();
}



/* Entry: 10344a858; end: 10344a8eb; -[_TtC26SnapEditorScopeGraphBridge43SCSnapEditorCarouselServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10344a858(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f6ab28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f6ab30));
  return;
}



/* Entry: 10344a8ec; end: 10344a8f3;  */

undefined8 FUN_10344a8ec(void)

{
  return 0;
}



/* Entry: 10344a8f4; end: 10344a913;  */

void FUN_10344a8f4(void)

{
  func_0x000107c61168(&PTR_PTR_1128daf18);
  return;
}



/* Entry: 10344a914; end: 10344a9af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10344a914(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f6ba30);
  *(undefined8 *)(unaff_x20 + _DAT_112f6ab60) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f6ab68) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10344a9b0; end: 10344aa0f; -[_TtC26SnapEditorScopeGraphBridge56SCSnapEditorScopedLensCTAHandlingServicesSaberEntryPoint init] */

void FUN_10344a9b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorScopeGraphBridge.SCSnapEditorScopedLensCTAHandlingServicesSaberEntryPoint"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10344a9dc);
  (*pcVar1)();
}



/* Entry: 10344aa10; end: 10344aaa3; -[_TtC26SnapEditorScopeGraphBridge56SCSnapEditorScopedLensCTAHandlingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10344aa10(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f6ab60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f6ab68));
  return;
}



/* Entry: 10344aaa4; end: 10344aaab;  */

undefined8 FUN_10344aaa4(void)

{
  return 0;
}



/* Entry: 10344aaac; end: 10344aacb;  */

void FUN_10344aaac(void)

{
  func_0x000107c61168(&PTR_PTR_1128dafe0);
  return;
}



/* Entry: 10344aacc; end: 10344ab67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10344aacc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f6ba58);
  *(undefined8 *)(unaff_x20 + _DAT_112f6ab98) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f6aba0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10344ab68; end: 10344abc7; -[_TtC26SnapEditorScopeGraphBridge63SCSnapEditorScopedLensCarouselManagementServicesSaberEntryPoint init] */

void FUN_10344ab68(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorScopeGraphBridge.SCSnapEditorScopedLensCarouselManagementServicesSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10344ab94);
  (*pcVar1)();
}



/* Entry: 10344abc8; end: 10344ac5b; -[_TtC26SnapEditorScopeGraphBridge63SCSnapEditorScopedLensCarouselManagementServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10344abc8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f6ab98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f6aba0));
  return;
}



/* Entry: 10344ac5c; end: 10344ac63;  */

undefined8 FUN_10344ac5c(void)

{
  return 0;
}



/* Entry: 10344ac64; end: 10344ac83;  */

void FUN_10344ac64(void)

{
  func_0x000107c61168(&PTR_PTR_1128db0a8);
  return;
}



/* Entry: 10344ac84; end: 10344ace7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10344ac84(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f6b9f0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10344ace8; end: 10344acef;  */

void FUN_10344ace8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10344acf0; end: 10344ad8f;  */

void FUN_10344acf0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10344ad90; end: 10344adaf;  */

void FUN_10344ad90(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10344adb0; end: 10344ae13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10344adb0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f6ba20);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10344ae14; end: 10344ae1b;  */

void FUN_10344ae14(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10344ae1c; end: 10344aebb;  */

void FUN_10344ae1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10344aebc; end: 10344aedb;  */

void FUN_10344aebc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10344aedc; end: 10344af3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10344aedc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f6ba28);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10344af40; end: 10344af47;  */

void FUN_10344af40(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10344af48; end: 10344afe7;  */

void FUN_10344af48(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10344afe8; end: 10344b007;  */

void FUN_10344afe8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10344b008; end: 10344b06b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10344b008(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f6ba38);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10344b06c; end: 10344b073;  */

void FUN_10344b06c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10344b074; end: 10344b113;  */

void FUN_10344b074(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10344b114; end: 10344b133;  */

void FUN_10344b114(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10344b134; end: 10344b197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10344b134(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f6ba40);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10344b198; end: 10344b19f;  */

void FUN_10344b198(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10344b1a0; end: 10344b23f;  */

void FUN_10344b1a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10344b240; end: 10344b25f;  */

void FUN_10344b240(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10344b260; end: 10344b2c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10344b260(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f6ba48);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10344b2c4; end: 10344b2cb;  */

void FUN_10344b2c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10344b2cc; end: 10344b36b;  */

void FUN_10344b2cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10344b36c; end: 10344b38b;  */

void FUN_10344b36c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10344b38c; end: 10344b3ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10344b38c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f6ba50);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10344b3f0; end: 10344b3f7;  */

void FUN_10344b3f0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10344b3f8; end: 10344b497;  */

void FUN_10344b3f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10344b498; end: 10344b4b7;  */

void FUN_10344b498(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10344b4b8; end: 10344b51b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10344b4b8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f6ba60);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10344b51c; end: 10344b523;  */

void FUN_10344b51c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10344b524; end: 10344b5c3;  */

void FUN_10344b524(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10344b5c4; end: 10344b5e3;  */

void FUN_10344b5c4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10344b5e4; end: 10344b647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10344b5e4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f6ba68);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10344b648; end: 10344b64f;  */

void FUN_10344b648(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10344b650; end: 10344b6ef;  */

void FUN_10344b650(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10344b6f0; end: 10344b70f;  */

void FUN_10344b6f0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10344b710; end: 10344b773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10344b710(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f6ba70);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10344b774; end: 10344b77b;  */

void FUN_10344b774(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10344b77c; end: 10344b81b;  */

void FUN_10344b77c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10344b81c; end: 10344b83b;  */

void FUN_10344b81c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10344b83c; end: 10344b89f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10344b83c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f6ba78);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10344b8a0; end: 10344b8a7;  */

void FUN_10344b8a0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10344b8a8; end: 10344b947;  */

void FUN_10344b8a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10344b948; end: 10344b967;  */

void FUN_10344b948(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10344b968; end: 10344b9cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10344b968(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f6ba80);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10344b9cc; end: 10344b9d3;  */

void FUN_10344b9cc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10344b9d4; end: 10344ba73;  */

void FUN_10344b9d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10344ba74; end: 10344ba93;  */

void FUN_10344ba74(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10344ba94; end: 10344baf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10344ba94(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f6ba88);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10344baf8; end: 10344baff;  */

void FUN_10344baf8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10344bb00; end: 10344bb9f;  */

void FUN_10344bb00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


