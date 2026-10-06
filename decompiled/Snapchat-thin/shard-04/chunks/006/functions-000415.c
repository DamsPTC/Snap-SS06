/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036f13b0; end: 1036f13e3;  */

void FUN_1036f13b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036f13e4; end: 1036f141b; -[SCSCSpectaclesMemoriesCustomExportScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f13e4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f89240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f89248));
  return;
}



/* Entry: 1036f141c; end: 1036f143b;  */

void FUN_1036f141c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e42c8);
  return;
}



/* Entry: 1036f143c; end: 1036f14a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f143c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010035ffb4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f89280) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1036f14a4; end: 1036f14ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f14a4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f89280) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036f14f0; end: 1036f1657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036f14f0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined *apuStack_78 [2];
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126ad4a8;
  func_0x000107c610f8();
  uVar2 = 0x112e06a58;
  func_0x0001000285a8(0x112e06a58,&UNK_10dd02010);
  func_0x000107c5fc48(in_x6,uVar2);
  uVar2 = 0x112d508c0;
  func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
  func_0x000107c5fc48(in_x7,uVar2);
  func_0x000107c5fc48(in_stack_00000000,uVar2);
  func_0x000107c48f4c();
  func_0x000107c61170(in_x6);
  func_0x000107c61170(in_x7);
  func_0x000107c61170(in_stack_00000000);
  apuStack_78[0] = puVar1;
  func_0x00010008a7c8(&uStack_68,apuStack_78);
  func_0x000100083b20(apuStack_78);
  func_0x000107c61574(uStack_68);
  func_0x000107c615e8(apuStack_78[0]);
  return puVar1;
}



/* Entry: 1036f1658; end: 1036f197f; -[_TtC34SCSpectaclesCustomExportScopeProxy37SCSpectaclesCustomExportScopeServices buildWithUIContainer:fromViewController:delegate:userContext:thumbnailLivePreview:magicMomentCache:selectedItems:selectedSnaps:allSnaps:editedVideoFilter:previewConfiguration:commonLoggingParamsBuilder:] */

void FUN_1036f1658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0x112e06a58;
  func_0x0001000285a8(0x112e06a58,&UNK_10dd02010);
  func_0x000107c5fc54(param_9,uVar1);
  uVar1 = 0x112d508c0;
  func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
  func_0x000107c5fc54(param_10,uVar1);
  func_0x000107c5fc54(param_11,uVar1);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  uVar1 = param_7;
  func_0x000107c61174();
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_12);
  uVar2 = param_13;
  func_0x000107c61174();
  uVar3 = param_14;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar4 = param_3;
  FUN_1036f14f0(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
                param_13,param_14);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_9);
  func_0x000107c6142c(param_10);
  func_0x000107c6142c(param_11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1036f1980; end: 1036f1b3f; -[_TtC34SCSpectaclesCustomExportScopeProxy37SCSpectaclesCustomExportScopeServices buildWithUIContainer:fromViewController:delegate:userContext:thumbnailLivePreview:magicMomentCache:selectedItems:selectedSnaps:allSnaps:editedImage:previewConfiguration:commonLoggingParamsBuilder:] */

void FUN_1036f1980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = 0x112e06a58;
  func_0x0001000285a8(0x112e06a58,&UNK_10dd02010);
  func_0x000107c5fc54(param_9,uVar1);
  uVar1 = 0x112d508c0;
  func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
  func_0x000107c5fc54(param_10,uVar1);
  func_0x000107c5fc54(param_11,uVar1);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  uVar1 = param_7;
  func_0x000107c61174();
  func_0x000107c615f0(param_8);
  uVar2 = param_12;
  func_0x000107c61174();
  uVar3 = param_13;
  func_0x000107c61174();
  uVar4 = param_14;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar5 = param_3;
  func_0x0001036f1818(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_14);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_9);
  func_0x000107c6142c(param_10);
  func_0x000107c6142c(param_11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1036f1b40; end: 1036f1b73;  */

void FUN_1036f1b40(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036f1b74; end: 1036f1ba3; -[_TtC34SCSpectaclesCustomExportScopeProxy37SCSpectaclesCustomExportScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f1b74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f89280));
  return;
}



/* Entry: 1036f1ba4; end: 1036f1c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f1ba4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1036f1f98();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f892d0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1036f1c10; end: 1036f1c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f1c10(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f892d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036f1c7c; end: 1036f1cdb; -[_TtC50SpotlightPostingCameraScopedFactoryServiceProvider36SpotlightPostingCameraScopedServices init] */

void FUN_1036f1c7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightPostingCameraScopedFactoryServiceProvider.SpotlightPostingCameraScopedServices"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f1ca8);
  (*pcVar1)();
}



/* Entry: 1036f1cdc; end: 1036f1ceb; -[_TtC50SpotlightPostingCameraScopedFactoryServiceProvider36SpotlightPostingCameraScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f1cdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f892d0));
  return;
}



/* Entry: 1036f1cec; end: 1036f1d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f1cec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110684908;
  func_0x000107c613fc(&UNK_110684908,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1036f2030,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1036f1d58; end: 1036f1df3;  */

void FUN_1036f1d58(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110684818;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110684818;
  return;
}



/* Entry: 1036f1df4; end: 1036f1e2b;  */

void FUN_1036f1df4(long *param_1)

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



/* Entry: 1036f1e2c; end: 1036f1e33;  */

undefined8 FUN_1036f1e2c(void)

{
  return 0x1b;
}



/* Entry: 1036f1e34; end: 1036f1f67;  */

void FUN_1036f1e34(undefined8 *param_1)

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
  puVar1 = &UNK_110684930;
  func_0x000107c613fc(&UNK_110684930,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1036f2008;
  func_0x00010058fa64(FUN_1036f2008,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036f1f68; end: 1036f1f97;  */

undefined ** FUN_1036f1f68(void)

{
  return &PTR_DAT_113067138;
}



/* Entry: 1036f1f98; end: 1036f1fb7;  */

void FUN_1036f1f98(void)

{
  func_0x000107c61168(&PTR_PTR_1128e4448);
  return;
}



/* Entry: 1036f1fb8; end: 1036f2007;  */

undefined1  [16] FUN_1036f1fb8(void)

{
  return ZEXT816(0x110684868);
}



/* Entry: 1036f2008; end: 1036f202f;  */

void FUN_1036f2008(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1036f2030; end: 1036f2033;  */

void FUN_1036f2030(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1036f2034; end: 1036f20db;  */

/* WARNING: Possible PIC construction at 0x0001036f20c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f20c8) */

void FUN_1036f2034(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1106849b8;
  func_0x000107c613fc(&UNK_1106849b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112f89340;
  func_0x0001000285a8(0x112f89340,&UNK_10dbfe158);
  func_0x000107c613fc();
  pcVar3 = FUN_1036f2400;
  func_0x0001000841fc(FUN_1036f2400,puVar1,uVar2);
  func_0x000100084214(&UNK_10dbfe120,0x32,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1036f20dc; end: 1036f20f3;  */

/* WARNING: Possible PIC construction at 0x0001036f20c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f20c8) */

void FUN_1036f20dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1106849b8;
  func_0x000107c613fc(&UNK_1106849b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112f89340;
  func_0x0001000285a8(0x112f89340,&UNK_10dbfe158);
  func_0x000107c613fc();
  pcVar4 = FUN_1036f2400;
  func_0x0001000841fc(FUN_1036f2400,puVar2,uVar3);
  func_0x000100084214(&UNK_10dbfe120,0x32,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1036f20f4; end: 1036f23ff;  */

void FUN_1036f20f4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f89348,&UNK_10dbfe160);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_1036f1df4;
  func_0x0001000823a8(FUN_1036f1df4,0);
  func_0x000100082720("SpotlightPostingCameraScopedServicesCleanupRelayServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112f89350,&UNK_10dbfe170);
  puVar3 = &UNK_1106849e0;
  func_0x000107c613fc(&UNK_1106849e0,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar9 = 0x1036f2408;
  func_0x0001000823a8(0x1036f2408,puVar3);
  pcVar4 = "SpotlightPostingCameraEntryPointWrapperServiceProvider";
  func_0x000100082720("SpotlightPostingCameraEntryPointWrapperServiceProvider",0x36,2);
  FUN_1036f3084();
  func_0x000100082720("SpotlightPostingCameraScopeGraphBridgeServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f89358,&UNK_10dbfe178);
  puVar3 = &UNK_110684a08;
  func_0x000107c613fc(&UNK_110684a08,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(undefined8 **)(puVar3 + 0x18) = puVar1;
  *(char **)(puVar3 + 0x20) = pcVar4;
  *(code **)(puVar3 + 0x28) = pcVar2;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar2);
  uVar5 = 0x1036f2414;
  func_0x0001000823a8(0x1036f2414,puVar3);
  func_0x000100082720("SpotlightPostingCameraScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112f892d8,&UNK_10dbfdec0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1036f2420;
  func_0x0001000823a8(0x1036f2420,uVar5);
  func_0x000100082720("SpotlightPostingCameraScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f892c8,&UNK_10dbfdeb0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1036f2428;
  func_0x0001000823a8(0x1036f2428,uVar6);
  func_0x000100082720("SpotlightPostingCameraScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110684a30;
  func_0x000107c613fc(&UNK_110684a30,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  pcVar8 = FUN_1036f245c;
  func_0x0001000823a8(FUN_1036f245c,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SpotlightPostingCameraScopeEntryPointProvider",0x2d,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1036f2400; end: 1036f242f;  */

void FUN_1036f2400(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f89348,&UNK_10dbfe160);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_1036f1df4;
  func_0x0001000823a8(FUN_1036f1df4,0);
  func_0x000100082720("SpotlightPostingCameraScopedServicesCleanupRelayServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112f89350,&UNK_10dbfe170);
  puVar3 = &UNK_1106849e0;
  func_0x000107c613fc(&UNK_1106849e0,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar6);
  uVar4 = 0x1036f2408;
  func_0x0001000823a8(0x1036f2408,puVar3);
  pcVar5 = "SpotlightPostingCameraEntryPointWrapperServiceProvider";
  func_0x000100082720("SpotlightPostingCameraEntryPointWrapperServiceProvider",0x36,2);
  FUN_1036f3084();
  func_0x000100082720("SpotlightPostingCameraScopeGraphBridgeServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f89358,&UNK_10dbfe178);
  puVar3 = &UNK_110684a08;
  func_0x000107c613fc(&UNK_110684a08,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 **)(puVar3 + 0x18) = puVar1;
  *(char **)(puVar3 + 0x20) = pcVar5;
  *(code **)(puVar3 + 0x28) = pcVar2;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(pcVar2);
  uVar6 = 0x1036f2414;
  func_0x0001000823a8(0x1036f2414,puVar3);
  func_0x000100082720("SpotlightPostingCameraScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112f892d8,&UNK_10dbfdec0);
  func_0x000107c6157c(uVar6);
  uVar9 = 0x1036f2420;
  func_0x0001000823a8(0x1036f2420,uVar6);
  func_0x000100082720("SpotlightPostingCameraScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f892c8,&UNK_10dbfdeb0);
  func_0x000107c6157c(uVar9);
  uVar7 = 0x1036f2428;
  func_0x0001000823a8(0x1036f2428,uVar9);
  func_0x000100082720("SpotlightPostingCameraScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110684a30;
  func_0x000107c613fc(&UNK_110684a30,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  pcVar8 = FUN_1036f245c;
  func_0x0001000823a8(FUN_1036f245c,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SpotlightPostingCameraScopeEntryPointProvider",0x2d,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1036f2430; end: 1036f245b;  */

void FUN_1036f2430(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036f245c; end: 1036f2463;  */

void FUN_1036f245c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110684818;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110684818;
  return;
}



/* Entry: 1036f2464; end: 1036f257f;  */

void FUN_1036f2464(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_1036f2790();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_1036f46b8(0);
  func_0x000107c610f8();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x0001036f4054();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c61174();
  FUN_1036f40c8();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 1036f2580; end: 1036f2657;  */

long FUN_1036f2580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_1036f46b8(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001036f4054();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174();
  FUN_1036f40c8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 1036f2658; end: 1036f268b;  */

void FUN_1036f2658(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036f268c; end: 1036f2693;  */

undefined8 FUN_1036f268c(void)

{
  return 0x1b;
}



/* Entry: 1036f2694; end: 1036f2717;  */

void FUN_1036f2694(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1036f27d0,param_2,FUN_1036f27d4,param_2,FUN_1036f27fc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1036f2718; end: 1036f275f;  */

undefined8 FUN_1036f2718(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1036f4274();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1036f2760; end: 1036f278f;  */

undefined ** FUN_1036f2760(void)

{
  return &PTR_DAT_113067138;
}



/* Entry: 1036f2790; end: 1036f27af;  */

void FUN_1036f2790(void)

{
  func_0x000107c61168(&PTR_PTR_112f893c8);
  return;
}



/* Entry: 1036f27b0; end: 1036f27d3;  */

undefined1  [16] FUN_1036f27b0(void)

{
  return ZEXT816(0x110684a88);
}



/* Entry: 1036f27d4; end: 1036f27fb;  */

void FUN_1036f27d4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1036f27fc; end: 1036f2803;  */

undefined8 FUN_1036f27fc(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1036f4274();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1036f2804; end: 1036f283f;  */

void FUN_1036f2804(undefined8 *param_1,undefined8 param_2)

{
  FUN_1036f2840();
  func_0x0001000a7f38("SpotlightPostingCameraScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = param_2;
  return;
}



/* Entry: 1036f2840; end: 1036f2a2b;  */

void FUN_1036f2840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074df28;
  ppuVar4 = &PTR_DAT_113067138;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f89438;
  func_0x0001000285a8(0x112f89438,&UNK_10dbfe2c0);
  func_0x0001000a6ee8(&UNK_110684a88,
                      "SpotlightPostingCameraEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      FUN_1036f2aa0,param_1,uVar2,&UNK_110684a88,&PTR_DAT_112f89360);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110684ad8;
  func_0x000107c613fc(&UNK_110684ad8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110684ce8,
                      "SpotlightPostingCameraScopeGraphBridgeScopeInitializationPluginKey",0x42,2,
                      FUN_1036f2aa8,puVar3,uVar2,&UNK_110684ce8,&PTR_DAT_112f894c8);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110684b00;
  func_0x000107c613fc(&UNK_110684b00,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1106848a8,
                      "SpotlightPostingCameraScopedServicesScopeInitializationPluginKey",0x40,2,
                      FUN_1036f2b90,puVar3,uVar2,&UNK_1106848a8,&PTR_DAT_112f892e0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f89440;
  func_0x0001000285a8(0x112f89440,&UNK_10dbfe2c8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1036f2a2c; end: 1036f2a9f;  */

void FUN_1036f2a2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1036f2bcc;
  func_0x0001000823a8(0x1036f2bcc,param_3);
  func_0x000100082720("SpotlightPostingCameraEntryPointWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036f2aa0; end: 1036f2aa7;  */

void FUN_1036f2aa0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1036f2bcc;
  func_0x0001000823a8();
  func_0x000100082720("SpotlightPostingCameraEntryPointWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036f2aa8; end: 1036f2ae7;  */

void FUN_1036f2aa8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1036f3168(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpotlightPostingCameraScopeGraphBridgeScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036f2ae8; end: 1036f2b8f;  */

void FUN_1036f2ae8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110684b28;
  func_0x000107c613fc(&UNK_110684b28,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1036f2bc4;
  func_0x0001000823a8(FUN_1036f2bc4,puVar1);
  func_0x000100082720("SpotlightPostingCameraScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar2;
  return;
}



/* Entry: 1036f2b90; end: 1036f2b97;  */

void FUN_1036f2b90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110684b28;
  func_0x000107c613fc(&UNK_110684b28,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1036f2bc4;
  func_0x0001000823a8(FUN_1036f2bc4,puVar3);
  func_0x000100082720("SpotlightPostingCameraScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar4;
  return;
}



/* Entry: 1036f2b98; end: 1036f2bc3;  */

void FUN_1036f2b98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036f2bc4; end: 1036f2bd3;  */

void FUN_1036f2bc4(undefined8 *param_1)

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
  puVar1 = &UNK_110684930;
  func_0x000107c613fc(&UNK_110684930,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1036f2008;
  func_0x00010058fa64(FUN_1036f2008,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036f2bd4; end: 1036f2c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036f2bd4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1036f2f94();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f89448) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f89450) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f2c5c);
  (*pcVar1)();
}



/* Entry: 1036f2c5c; end: 1036f2cbb; -[_TtC38SpotlightPostingCameraScopeGraphBridge53SpotlightPostingCameraScopeGraphBridgeSaberEntryPoint init] */

void FUN_1036f2c5c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightPostingCameraScopeGraphBridge.SpotlightPostingCameraScopeGraphBridgeSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f2c88);
  (*pcVar1)();
}



/* Entry: 1036f2cbc; end: 1036f2cf3; -[_TtC38SpotlightPostingCameraScopeGraphBridge53SpotlightPostingCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036f2cd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f2cdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f2cbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f89448));
  return;
}



/* Entry: 1036f2cf4; end: 1036f2d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f2cf4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f89450),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f89448));
  return;
}



/* Entry: 1036f2d1c; end: 1036f2d3b;  */

void FUN_1036f2d1c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e4508);
  return;
}



/* Entry: 1036f2d3c; end: 1036f2dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036f2d3c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f89480) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f89488);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036f2dc4);
  (*pcVar2)();
}



/* Entry: 1036f2dc4; end: 1036f2eab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036f2dc4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f89480);
  *(undefined **)(unaff_x20 + _DAT_112f89480) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f89488);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f89488))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110684c48;
  func_0x000107c613fc(&UNK_110684c48,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1036f2eb0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1036f2eac; end: 1036f2eb7;  */

void FUN_1036f2eac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1036f2eb8; end: 1036f2f17; -[_TtC38SpotlightPostingCameraScopeGraphBridge51SpotlightPostingCameraScopedServicesSaberEntryPoint init] */

void FUN_1036f2eb8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightPostingCameraScopeGraphBridge.SpotlightPostingCameraScopedServicesSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f2ee4);
  (*pcVar1)();
}



/* Entry: 1036f2f18; end: 1036f2f4f; -[_TtC38SpotlightPostingCameraScopeGraphBridge51SpotlightPostingCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f2f18(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f89488));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f89480));
  return;
}



/* Entry: 1036f2f50; end: 1036f2f53;  */

void FUN_1036f2f50(void)

{
  return;
}



/* Entry: 1036f2f54; end: 1036f2f73;  */

void FUN_1036f2f54(void)

{
  FUN_1036f2dc4();
  return;
}



/* Entry: 1036f2f74; end: 1036f2f93;  */

void FUN_1036f2f74(void)

{
  func_0x000107c61168(&PTR_PTR_1128e45d0);
  return;
}



/* Entry: 1036f2f94; end: 1036f3063;  */

undefined8 FUN_1036f2f94(void)

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
  
  func_0x000107c61428(0x112f894b8,&uStack_40,0x20,0);
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
    FUN_1036f3064();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1036f3064; end: 1036f3083;  */

void FUN_1036f3064(void)

{
  func_0x000107c61168(&PTR_PTR_1128e4698);
  return;
}



/* Entry: 1036f3084; end: 1036f30ef;  */

void FUN_1036f3084(void)

{
  func_0x0001000285a8(0x112f894c0,&UNK_10dbfe398);
  func_0x0001000823a8(0x1036f30c4,0);
  return;
}



/* Entry: 1036f30f0; end: 1036f312b; -[_TtC38SpotlightPostingCameraScopeGraphBridge46SpotlightPostingCameraScopeGraphBridgeServices init] */

void FUN_1036f30f0(undefined8 param_1)

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



/* Entry: 1036f312c; end: 1036f315f;  */

void FUN_1036f312c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036f3160; end: 1036f3167;  */

undefined8 FUN_1036f3160(void)

{
  return 0x1b;
}



/* Entry: 1036f3168; end: 1036f32df;  */

void FUN_1036f3168(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110684c90;
  func_0x000107c613fc(&UNK_110684c90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1036f32e0,puVar1);
  return;
}



/* Entry: 1036f32e0; end: 1036f32e7;  */

void FUN_1036f32e0(undefined8 *param_1)

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
  func_0x000107c61428(0x112f894b8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f894b8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110684d28;
  func_0x000107c613fc(&UNK_110684d28,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1036f3394;
  func_0x00010058fa64(0x1036f3394,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036f32e8; end: 1036f3343;  */

void FUN_1036f32e8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f894b8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f894b8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1036f3344; end: 1036f339b;  */

undefined ** FUN_1036f3344(void)

{
  return &PTR_DAT_113067138;
}



/* Entry: 1036f339c; end: 1036f33e3; -[SCSpotlightPostingCameraScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f339c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f89518;
  func_0x000107c61428(param_1 + _DAT_112f89518,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036f33e4; end: 1036f343b; -[SCSpotlightPostingCameraScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f33e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f89518;
  func_0x000107c61428(param_1 + _DAT_112f89518,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036f343c; end: 1036f3483; -[SCSpotlightPostingCameraScopeGraphBridgeSaberEntryPoint spotlightPostingCameraScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f343c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f89520;
  func_0x000107c61428(param_1 + _DAT_112f89520,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1036f3484; end: 1036f34e7; -[SCSpotlightPostingCameraScopeGraphBridgeSaberEntryPoint setSpotlightPostingCameraScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f3484(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f89520;
  func_0x000107c61428(param_1 + _DAT_112f89520,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1036f34e8; end: 1036f361b;  */

/* WARNING: Possible PIC construction at 0x0001036f35a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f35bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f35d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f35a4) */
/* WARNING: Removing unreachable block (ram,0x0001036f35c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f34e8(void)

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
  func_0x000107c5b928();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1036f2d1c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1036f2f94();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f361c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f89448) = lVar5;
    *(long *)(lVar4 + _DAT_112f89450) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1036f361c; end: 1036f3643; -[SCSpotlightPostingCameraScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1036f361c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036f34e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036f3644; end: 1036f3687; -[SCSpotlightPostingCameraScopeGraphBridgeSaberEntryPoint end] */

void FUN_1036f3644(undefined8 param_1)

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



/* Entry: 1036f3688; end: 1036f381f;  */

void FUN_1036f3688(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcb) || (param_3 != -0x7ffffffef0ea3c10)) {
      uVar2 = 0xd000000000000035;
      func_0x000107c605b8(0xd000000000000035,0x800000010f15c3f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpotlightPostingCameraScopeGraphBridge/SCSpotlightPostingCameraScopeGraphBridgeSaberEntryPoint.swift"
                            ,100,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f3820);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c596f8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1036f3820; end: 1036f38cb; -[SCSpotlightPostingCameraScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1036f3820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1036f3688(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1036f38cc; end: 1036f3937; -[SCSpotlightPostingCameraScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f38cc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f89518,0);
  *(undefined8 *)(param_1 + _DAT_112f89520) = 0;
  *(undefined8 *)(param_1 + _DAT_112f89528) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036f3938; end: 1036f396b;  */

void FUN_1036f3938(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036f396c; end: 1036f39b3; -[SCSpotlightPostingCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036f3998: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f399c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f396c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f89518);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f89520));
  return;
}



/* Entry: 1036f39b4; end: 1036f39d3;  */

void FUN_1036f39b4(void)

{
  func_0x000107c61168(&PTR_PTR_1128e4748);
  return;
}



/* Entry: 1036f39d4; end: 1036f3a1b; -[SCSpotlightPostingCameraScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f39d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f89558;
  func_0x000107c61428(param_1 + _DAT_112f89558,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036f3a1c; end: 1036f3a73; -[SCSpotlightPostingCameraScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f3a1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f89558;
  func_0x000107c61428(param_1 + _DAT_112f89558,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036f3a74; end: 1036f3b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f3a74(undefined8 param_1,long param_2)

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
    FUN_1036f2f74();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f89480) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036f3b4c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f89488);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f89560);
    *(long **)(unaff_x20 + _DAT_112f89560) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1036f3b4c; end: 1036f3b73; -[SCSpotlightPostingCameraScopedServicesSaberEntryPoint begin] */

void FUN_1036f3b4c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036f3a74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036f3b74; end: 1036f3ceb;  */

/* WARNING: Possible PIC construction at 0x0001036f3bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036f3c74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036f3be0) */
/* WARNING: Removing unreachable block (ram,0x0001036f3c78) */
/* WARNING: Removing unreachable block (ram,0x0001036f3c90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f3b74(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f89560);
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



/* Entry: 1036f3cec; end: 1036f3cf3;  */

void FUN_1036f3cec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1036f3cf4; end: 1036f3d27; -[SCSpotlightPostingCameraScopedServicesSaberEntryPoint end] */

void FUN_1036f3cf4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1036f3b74();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036f3d28; end: 1036f3e47;  */

void FUN_1036f3d28(long param_1,long param_2,long param_3)

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
                        "SpotlightPostingCameraScopeGraphBridge/SCSpotlightPostingCameraScopedServicesSaberEntryPoint.swift"
                        ,0x62,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036f3e48);
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



/* Entry: 1036f3e48; end: 1036f3ef3; -[SCSpotlightPostingCameraScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1036f3e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1036f3d28(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1036f3ef4; end: 1036f3f53; -[SCSpotlightPostingCameraScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f3ef4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f89558,0);
  *(undefined8 *)(param_1 + _DAT_112f89560) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036f3f54; end: 1036f3f87;  */

void FUN_1036f3f54(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036f3f88; end: 1036f3fbf; -[SCSpotlightPostingCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f3f88(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f89558);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f89560));
  return;
}



/* Entry: 1036f3fc0; end: 1036f3fdf;  */

void FUN_1036f3fc0(void)

{
  func_0x000107c61168(&PTR_PTR_1128e4810);
  return;
}



/* Entry: 1036f3fe0; end: 1036f40c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036f3fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f89590) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f89598) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f895a0) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}


