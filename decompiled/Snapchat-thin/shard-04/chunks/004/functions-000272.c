/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1034396e4; end: 1034396eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034396e4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037a414();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f68c58) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1034396ec; end: 103439737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034396ec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f68c58) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103439738; end: 103439817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103439738(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x00010037a33c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x0001043353e8();
  lStack_48 = param_1;
  func_0x00010008a7c8(&uStack_38,&lStack_48);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61574(uStack_38);
  lVar1 = lStack_48;
  lVar2 = lStack_48;
  func_0x000107c614f0(lStack_48);
  (**(code **)(lStack_40 + 0x10))();
  func_0x000100083b20(&lStack_48);
  func_0x000107c61574(lVar2);
  func_0x000107c615e8(lVar1);
  func_0x000107c61170(param_1);
  lVar1 = lStack_48;
  uVar3 = *(undefined8 *)(lStack_48 + 0x10);
  func_0x000107c61434(uVar3);
  func_0x000107c61574(lVar1);
  return uVar3;
}



/* Entry: 103439818; end: 10343989f; -[_TtC44SharedStoryProfileSectionSaberPluginRegistry49SharedStoryProfileSectionSaberPluginScopeServices buildWithCustomStory:] */

void FUN_103439818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103439738(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  uVar2 = 0x112f68c40;
  func_0x0001000285a8(0x112f68c40,&UNK_10dbc5950);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1034398a0; end: 1034398ff; -[_TtC44SharedStoryProfileSectionSaberPluginRegistry49SharedStoryProfileSectionSaberPluginScopeServices init] */

void FUN_1034398a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SharedStoryProfileSectionSaberPluginRegistry.SharedStoryProfileSectionSaberPluginScopeServices"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034398cc);
  (*pcVar1)();
}



/* Entry: 103439900; end: 103439933; -[_TtC44SharedStoryProfileSectionSaberPluginRegistry49SharedStoryProfileSectionSaberPluginScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103439900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f68c58));
  return;
}



/* Entry: 103439934; end: 103439a0b;  */

void FUN_103439934(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103439a0c; end: 103439a2b;  */

void FUN_103439a0c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103439a2c; end: 103439a6b;  */

void FUN_103439a2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f68c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc5a40;
  func_0x000107c61520(&UNK_10dbc5a40,&UNK_110655a40);
  puRam0000000112f68c88 = puVar1;
  return;
}



/* Entry: 103439a6c; end: 103439a7b;  */

undefined1  [16] FUN_103439a6c(void)

{
  return ZEXT816(0x110655a40);
}



/* Entry: 103439a7c; end: 103439bb7;  */

void FUN_103439a7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103439bb8; end: 103439bc7; -[SCSharedStoryProfileSectionOrderedConfig order] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103439bb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f68c90);
}



/* Entry: 103439bc8; end: 103439be7; -[SCSharedStoryProfileSectionOrderedConfig configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103439bc8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f68c98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103439be8; end: 103439beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103439be8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f68c90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f68c98) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103439bec; end: 103439cbf; -[SCSharedStoryProfileSectionOrderedConfig initWithOrder:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103439bec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f68c90) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f68c98) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103439cc0; end: 103439cc3; -[SCSharedStoryProfileSectionOrderedConfig copyWithZone:] */

void FUN_103439cc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103439cc4; end: 103439cdf; -[SCSharedStoryProfileSectionOrderedConfig description] */

void FUN_103439cc4(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103439ce0; end: 103439d5b; -[SCSharedStoryProfileSectionOrderedConfig init] */

void FUN_103439ce0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCSharedStoryProfileSectionScope/SCSharedStoryProfileSectionOrderedConfigWrapper.swift"
                      ,0x56,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103439d28);
  (*pcVar1)();
}



/* Entry: 103439d5c; end: 103439d6b; -[SCSharedStoryProfileSectionOrderedConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103439d5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f68c98));
  return;
}



/* Entry: 103439d6c; end: 103439d8b;  */

void FUN_103439d6c(void)

{
  func_0x000107c61168(&PTR_PTR_1128da820);
  return;
}



/* Entry: 103439d8c; end: 103439d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103439d8c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f68c90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f68c98) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103439d90; end: 103439dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103439d90(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10343a184();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f68cd0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103439dfc; end: 103439e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103439dfc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f68cd0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103439e68; end: 103439ec7; -[_TtC48ShoppingLensLauncherScopedFactoryServiceProvider36SCShoppingLensLauncherScopedServices init] */

void FUN_103439e68(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingLensLauncherScopedFactoryServiceProvider.SCShoppingLensLauncherScopedServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103439e94);
  (*pcVar1)();
}



/* Entry: 103439ec8; end: 103439ed7; -[_TtC48ShoppingLensLauncherScopedFactoryServiceProvider36SCShoppingLensLauncherScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103439ec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f68cd0));
  return;
}



/* Entry: 103439ed8; end: 103439f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103439ed8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110655cf0;
  func_0x000107c613fc(&UNK_110655cf0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10343a260,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103439f44; end: 103439fdf;  */

void FUN_103439f44(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110655c00;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110655c00;
  return;
}



/* Entry: 103439fe0; end: 10343a017;  */

void FUN_103439fe0(long *param_1)

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



/* Entry: 10343a018; end: 10343a01f;  */

undefined8 FUN_10343a018(void)

{
  return 0x1b;
}



/* Entry: 10343a020; end: 10343a153;  */

void FUN_10343a020(undefined8 *param_1)

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
  puVar1 = &UNK_110655d18;
  func_0x000107c613fc(&UNK_110655d18,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10343a238;
  func_0x00010058fa64(FUN_10343a238,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10343a154; end: 10343a183;  */

undefined ** FUN_10343a154(void)

{
  return &PTR_DAT_112f983c0;
}



/* Entry: 10343a184; end: 10343a1a3;  */

void FUN_10343a184(void)

{
  func_0x000107c61168(&PTR_PTR_1128da8f0);
  return;
}



/* Entry: 10343a1a4; end: 10343a1f3;  */

undefined1  [16] FUN_10343a1a4(void)

{
  return ZEXT816(0x110655c50);
}



/* Entry: 10343a1f4; end: 10343a237;  */

void FUN_10343a1f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f68d38 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ad280;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f68d38 = puVar1;
  return;
}



/* Entry: 10343a238; end: 10343a25f;  */

void FUN_10343a238(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10343a260; end: 10343a273;  */

void FUN_10343a260(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10343a274; end: 10343a5f7;  */

void FUN_10343a274(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f68d50,&UNK_10dbc5e40);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10343b890();
  func_0x000100082720("SCLensesModularCameraScopeExposerSubjectServiceProvider",0x37,2);
  puVar3 = puVar2;
  FUN_10343b91c();
  func_0x000100082720("SCLensesModularCameraScopeExposerObservableServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_103439fe0;
  func_0x0001000823a8(FUN_103439fe0,0);
  func_0x000100082720("SCShoppingLensLauncherScopedServicesCleanupRelayServiceProvider",0x3f,2);
  puVar5 = puVar2;
  FUN_10343b744();
  func_0x000100082720("ShoppingLensLauncherScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f68d58,&UNK_10dbc5e50);
  puVar6 = &UNK_110655dc8;
  func_0x000107c613fc(&UNK_110655dc8,0x38,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 **)(puVar6 + 0x30) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x10343a604;
  func_0x0001000823a8(0x10343a604,puVar6);
  func_0x000100082720("SCShoppingLensLauncherEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112f68d60,&UNK_10dbc5e58);
  puVar6 = &UNK_110655df0;
  func_0x000107c613fc(&UNK_110655df0,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  uVar7 = 0x10343a614;
  func_0x0001000823a8(0x10343a614,puVar6);
  func_0x000100082720("SCShoppingLensLauncherScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112f68cd8,&UNK_10dbc5ba0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x10343a620;
  func_0x0001000823a8(0x10343a620,uVar7);
  func_0x000100082720("SCShoppingLensLauncherScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f68cc8,&UNK_10dbc5b90);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10343a628;
  func_0x0001000823a8(0x10343a628,uVar8);
  func_0x000100082720("SCShoppingLensLauncherScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110655e18;
  func_0x000107c613fc(&UNK_110655e18,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x10343a630;
  func_0x0001000823a8(0x10343a630,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCShoppingLensLauncherScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10343a5f8; end: 10343a637;  */

void FUN_10343a5f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f68d50,&UNK_10dbc5e40);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10343b890();
  func_0x000100082720("SCLensesModularCameraScopeExposerSubjectServiceProvider",0x37,2);
  puVar3 = puVar2;
  FUN_10343b91c();
  func_0x000100082720("SCLensesModularCameraScopeExposerObservableServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_103439fe0;
  func_0x0001000823a8(FUN_103439fe0,0);
  func_0x000100082720("SCShoppingLensLauncherScopedServicesCleanupRelayServiceProvider",0x3f,2);
  puVar5 = puVar2;
  FUN_10343b744();
  func_0x000100082720("ShoppingLensLauncherScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f68d58,&UNK_10dbc5e50);
  puVar6 = &UNK_110655dc8;
  func_0x000107c613fc(&UNK_110655dc8,0x38,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar7;
  *(undefined8 *)(puVar6 + 0x20) = uVar8;
  *(undefined8 *)(puVar6 + 0x28) = uVar9;
  *(undefined8 **)(puVar6 + 0x30) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(puVar3);
  uVar7 = 0x10343a604;
  func_0x0001000823a8(0x10343a604,puVar6);
  func_0x000100082720("SCShoppingLensLauncherEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112f68d60,&UNK_10dbc5e58);
  puVar6 = &UNK_110655df0;
  func_0x000107c613fc(&UNK_110655df0,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar7;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  uVar8 = 0x10343a614;
  func_0x0001000823a8(0x10343a614,puVar6);
  func_0x000100082720("SCShoppingLensLauncherScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112f68cd8,&UNK_10dbc5ba0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10343a620;
  func_0x0001000823a8(0x10343a620,uVar8);
  func_0x000100082720("SCShoppingLensLauncherScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f68cc8,&UNK_10dbc5b90);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x10343a628;
  func_0x0001000823a8(0x10343a628,uVar9);
  func_0x000100082720("SCShoppingLensLauncherScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110655e18;
  func_0x000107c613fc(&UNK_110655e18,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar10 = 0x10343a630;
  func_0x0001000823a8(0x10343a630,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCShoppingLensLauncherScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 10343a638; end: 10343acab;  */

void FUN_10343a638(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_10343adfc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  func_0x0001000285a8(0x112e48e78,&UNK_10da3fdf0);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar6);
  *(undefined **)(param_2 + 0x18) = puVar4;
  puVar4 = PTR_PTR_1126ad288;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar4;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0x654c68636e75616c;
  func_0x000107c5fadc(0x654c68636e75616c,0xef65706f6353736e);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0e57b0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f14dba0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f03ecc0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  uVar6 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f03ecf0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uStack_88);
  *param_1 = param_2;
  return;
}



/* Entry: 10343acac; end: 10343acef;  */

void FUN_10343acac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10343acf0; end: 10343acf7;  */

undefined8 FUN_10343acf0(void)

{
  return 0x1b;
}



/* Entry: 10343acf8; end: 10343ad7b;  */

void FUN_10343acf8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10343ae3c,param_2,FUN_10343ae40,param_2,FUN_10343ae68,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10343ad7c; end: 10343adcb;  */

undefined8 FUN_10343ad7c(void)

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



/* Entry: 10343adcc; end: 10343adfb;  */

void FUN_10343adcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110655e30;
  return;
}



/* Entry: 10343adfc; end: 10343ae1b;  */

void FUN_10343adfc(void)

{
  func_0x000107c61168(&PTR_PTR_112f68dd0);
  return;
}



/* Entry: 10343ae1c; end: 10343ae3f;  */

undefined1  [16] FUN_10343ae1c(void)

{
  return ZEXT816(0x110655e70);
}



/* Entry: 10343ae40; end: 10343ae67;  */

void FUN_10343ae40(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10343ae68; end: 10343ae6f;  */

undefined8 FUN_10343ae68(void)

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



/* Entry: 10343ae70; end: 10343aeab;  */

void FUN_10343ae70(undefined8 *param_1,undefined8 param_2)

{
  FUN_10343aeac();
  func_0x0001000a7f38("SCShoppingLensLauncherScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = param_2;
  return;
}



/* Entry: 10343aeac; end: 10343b097;  */

void FUN_10343aeac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110697538;
  ppuVar4 = &PTR_DAT_112f983c0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f68e50;
  func_0x0001000285a8(0x112f68e50,&UNK_10dbc5fc0);
  func_0x0001000a6ee8(&UNK_110655e70,
                      "SCShoppingLensLauncherEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      FUN_10343b10c,param_1,uVar2,&UNK_110655e70,&PTR_DAT_112f68d68);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110655ec0;
  func_0x000107c613fc(&UNK_110655ec0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110655c90,
                      "SCShoppingLensLauncherScopedServicesScopeInitializationPluginKey",0x40,2,
                      FUN_10343b1bc,puVar3,uVar2,&UNK_110655c90,&PTR_DAT_112f68ce0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110655ee8;
  func_0x000107c613fc(&UNK_110655ee8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1106560e0,
                      "ShoppingLensLauncherScopeGraphBridgeScopeInitializationPluginKey",0x40,2,
                      FUN_10343b1c4,puVar3,uVar2,&UNK_1106560e0,&PTR_DAT_112f68ee8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f68e58;
  func_0x0001000285a8(0x112f68e58,&UNK_10dbc5fc8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 10343b098; end: 10343b10b;  */

void FUN_10343b098(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10343b238;
  func_0x0001000823a8(0x10343b238,param_3);
  func_0x000100082720("SCShoppingLensLauncherEntryPointWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10343b10c; end: 10343b113;  */

void FUN_10343b10c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10343b238;
  func_0x0001000823a8();
  func_0x000100082720("SCShoppingLensLauncherEntryPointWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10343b114; end: 10343b1bb;  */

void FUN_10343b114(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110655f10;
  func_0x000107c613fc(&UNK_110655f10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10343b230;
  func_0x0001000823a8(FUN_10343b230,puVar1);
  func_0x000100082720("SCShoppingLensLauncherScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar2;
  return;
}



/* Entry: 10343b1bc; end: 10343b1c3;  */

void FUN_10343b1bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110655f10;
  func_0x000107c613fc(&UNK_110655f10,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10343b230;
  func_0x0001000823a8(FUN_10343b230,puVar3);
  func_0x000100082720("SCShoppingLensLauncherScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar4;
  return;
}



/* Entry: 10343b1c4; end: 10343b203;  */

void FUN_10343b1c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10343b9c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ShoppingLensLauncherScopeGraphBridgeScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 10343b204; end: 10343b22f;  */

void FUN_10343b204(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10343b230; end: 10343b23f;  */

void FUN_10343b230(undefined8 *param_1)

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
  puVar1 = &UNK_110655d18;
  func_0x000107c613fc(&UNK_110655d18,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10343a238;
  func_0x00010058fa64(FUN_10343a238,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10343b240; end: 10343b31b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10343b240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_10343b654();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f68e60) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f68e68) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10343b31c);
  (*pcVar1)();
}



/* Entry: 10343b31c; end: 10343b37b; -[_TtC36ShoppingLensLauncherScopeGraphBridge51ShoppingLensLauncherScopeGraphBridgeSaberEntryPoint init] */

void FUN_10343b31c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingLensLauncherScopeGraphBridge.ShoppingLensLauncherScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10343b348);
  (*pcVar1)();
}



/* Entry: 10343b37c; end: 10343b3b3; -[_TtC36ShoppingLensLauncherScopeGraphBridge51ShoppingLensLauncherScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010343b398: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010343b39c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343b37c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f68e60));
  return;
}



/* Entry: 10343b3b4; end: 10343b3db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343b3b4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f68e68),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f68e60));
  return;
}



/* Entry: 10343b3dc; end: 10343b3fb;  */

void FUN_10343b3dc(void)

{
  func_0x000107c61168(&PTR_PTR_1128da9b0);
  return;
}



/* Entry: 10343b3fc; end: 10343b483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10343b3fc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f68e98) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f68ea0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10343b484);
  (*pcVar2)();
}



/* Entry: 10343b484; end: 10343b56b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10343b484(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f68e98);
  *(undefined **)(unaff_x20 + _DAT_112f68e98) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f68ea0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f68ea0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110656000;
  func_0x000107c613fc(&UNK_110656000,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10343b570,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10343b56c; end: 10343b577;  */

void FUN_10343b56c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10343b578; end: 10343b5d7; -[_TtC36ShoppingLensLauncherScopeGraphBridge51SCShoppingLensLauncherScopedServicesSaberEntryPoint init] */

void FUN_10343b578(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingLensLauncherScopeGraphBridge.SCShoppingLensLauncherScopedServicesSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10343b5a4);
  (*pcVar1)();
}



/* Entry: 10343b5d8; end: 10343b60f; -[_TtC36ShoppingLensLauncherScopeGraphBridge51SCShoppingLensLauncherScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343b5d8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f68ea0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f68e98));
  return;
}



/* Entry: 10343b610; end: 10343b613;  */

void FUN_10343b610(void)

{
  return;
}



/* Entry: 10343b614; end: 10343b633;  */

void FUN_10343b614(void)

{
  FUN_10343b484();
  return;
}



/* Entry: 10343b634; end: 10343b653;  */

void FUN_10343b634(void)

{
  func_0x000107c61168(&PTR_PTR_1128daa78);
  return;
}



/* Entry: 10343b654; end: 10343b723;  */

undefined8 FUN_10343b654(void)

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
  
  func_0x000107c61428(0x112f68ed0,&uStack_40,0x20,0);
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
    FUN_10343b724();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10343b724; end: 10343b743;  */

void FUN_10343b724(void)

{
  func_0x000107c61168(&PTR_PTR_1128dab40);
  return;
}



/* Entry: 10343b744; end: 10343b75f;  */

void FUN_10343b744(undefined8 param_1)

{
  func_0x0001000285a8(0x112f68ed8,&UNK_10dbc6098);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10343b7cc,param_1);
  return;
}



/* Entry: 10343b760; end: 10343b7cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343b760(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10343b724();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f68ee0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10343b7cc; end: 10343b7d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343b7cc(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10343b724();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f68ee0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10343b7d4; end: 10343b81f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343b7d4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f68ee0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10343b820; end: 10343b87f; -[_TtC36ShoppingLensLauncherScopeGraphBridge44ShoppingLensLauncherScopeGraphBridgeServices init] */

void FUN_10343b820(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingLensLauncherScopeGraphBridge.ShoppingLensLauncherScopeGraphBridgeServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10343b84c);
  (*pcVar1)();
}



/* Entry: 10343b880; end: 10343b88f; -[_TtC36ShoppingLensLauncherScopeGraphBridge44ShoppingLensLauncherScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343b880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f68ee0));
  return;
}



/* Entry: 10343b890; end: 10343b91b;  */

void FUN_10343b890(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10343b8d0,0);
  return;
}



/* Entry: 10343b91c; end: 10343b937;  */

void FUN_10343b91c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10343b988,param_1);
  return;
}



/* Entry: 10343b938; end: 10343b987;  */

void FUN_10343b938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 10343b988; end: 10343b9bb;  */

void FUN_10343b988(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10343b9bc; end: 10343b9c3;  */

undefined8 FUN_10343b9bc(void)

{
  return 0x1b;
}



/* Entry: 10343b9c4; end: 10343bb3b;  */

void FUN_10343b9c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110656048;
  func_0x000107c613fc(&UNK_110656048,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10343bb3c,puVar1);
  return;
}



/* Entry: 10343bb3c; end: 10343bb43;  */

void FUN_10343bb3c(undefined8 *param_1)

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
  func_0x000107c61428(0x112f68ed0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f68ed0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110656120;
  func_0x000107c613fc(&UNK_110656120,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10343bc10;
  func_0x00010058fa64(0x10343bc10,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10343bb44; end: 10343bb9f;  */

void FUN_10343bb44(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f68ed0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f68ed0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10343bba0; end: 10343bc17;  */

undefined ** FUN_10343bba0(void)

{
  return &PTR_DAT_112f983c0;
}



/* Entry: 10343bc18; end: 10343bc5f; -[SCShoppingLensLauncherScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343bc18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f68f38;
  func_0x000107c61428(param_1 + _DAT_112f68f38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10343bc60; end: 10343bcb7; -[SCShoppingLensLauncherScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343bc60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f68f38;
  func_0x000107c61428(param_1 + _DAT_112f68f38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10343bcb8; end: 10343bcff; -[SCShoppingLensLauncherScopeGraphBridgeSaberEntryPoint sCLensesModularCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343bcb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f68f40;
  func_0x000107c61428(param_1 + _DAT_112f68f40,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10343bd00; end: 10343bd0b; -[SCShoppingLensLauncherScopeGraphBridgeSaberEntryPoint setSCLensesModularCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343bd00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f68f40;
  func_0x000107c61428(param_1 + _DAT_112f68f40,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10343bd0c; end: 10343bd53; -[SCShoppingLensLauncherScopeGraphBridgeSaberEntryPoint shoppingLensLauncherScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343bd0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f68f48;
  func_0x000107c61428(param_1 + _DAT_112f68f48,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10343bd54; end: 10343bd5f; -[SCShoppingLensLauncherScopeGraphBridgeSaberEntryPoint setShoppingLensLauncherScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343bd54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f68f48;
  func_0x000107c61428(param_1 + _DAT_112f68f48,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10343bd60; end: 10343bdbf;  */

void FUN_10343bd60(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10343bdc0; end: 10343bf7b;  */

/* WARNING: Possible PIC construction at 0x00010343bed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343befc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343bf0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343bf50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010343bf10) */
/* WARNING: Removing unreachable block (ram,0x00010343bf00) */
/* WARNING: Removing unreachable block (ram,0x00010343bedc) */
/* WARNING: Removing unreachable block (ram,0x00010343bf54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343bdc0(void)

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
  func_0x000107c50f70();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5aa9c();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_10343b3dc();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10343b654();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10343bf7c);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f68e60) = lVar5;
      *(long *)(lVar3 + _DAT_112f68e68) = unaff_x20;
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



/* Entry: 10343bf7c; end: 10343bfa3; -[SCShoppingLensLauncherScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10343bf7c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10343bdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10343bfa4; end: 10343bfe7; -[SCShoppingLensLauncherScopeGraphBridgeSaberEntryPoint end] */

void FUN_10343bfa4(undefined8 param_1)

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



/* Entry: 10343bfe8; end: 10343c1eb;  */

void FUN_10343bfe8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0f89650)) {
      uVar2 = 0xd000000000000021;
      func_0x000107c605b8(0xd000000000000021,0x800000010f0769b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000033;
        if (((param_2 != -0x2fffffffffffffcd) || (param_3 != -0x7ffffffef0eb2140)) &&
           (func_0x000107c605b8(0xd000000000000033,0x800000010f14dec0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ShoppingLensLauncherScopeGraphBridge/SCShoppingLensLauncherScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x60,2,0x37,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10343c1ec);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c590e8();
        goto LAB_10343c074;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58518();
  }
LAB_10343c074:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10343c1ec; end: 10343c297; -[SCShoppingLensLauncherScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10343c1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10343bfe8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10343c298; end: 10343c30f; -[SCShoppingLensLauncherScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343c298(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f68f38,0);
  *(undefined8 *)(param_1 + _DAT_112f68f40) = 0;
  *(undefined8 *)(param_1 + _DAT_112f68f48) = 0;
  *(undefined8 *)(param_1 + _DAT_112f68f50) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}


