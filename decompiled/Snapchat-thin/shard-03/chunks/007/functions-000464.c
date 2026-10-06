/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ba065c; end: 102ba0677;  */

void FUN_102ba065c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112efb718,&UNK_10db2beb8);
  puVar2 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar3 = puVar2;
  FUN_102ba12f8();
  func_0x000100082720("ContextReactionsTrayScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102b9ff68;
  func_0x0001000823a8(FUN_102b9ff68,0);
  func_0x000100082720("SCContextTopLevelReactionsTrayScopedServicesCleanupRelayServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112efb720,&UNK_10db2bed0);
  puVar5 = &UNK_1105a83f8;
  func_0x000107c613fc(&UNK_1105a83f8,0x38,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar2;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + 0x20) = uVar9;
  *(undefined8 *)(puVar5 + 0x28) = uVar8;
  *(undefined8 *)(puVar5 + 0x30) = uVar1;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  uVar6 = 0x102ba0668;
  func_0x0001000823a8(0x102ba0668,puVar5);
  func_0x000100082720("TopLevelReactionsTrayEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112efb728,&UNK_10db2bec0);
  puVar5 = &UNK_1105a8420;
  func_0x000107c613fc(&UNK_1105a8420,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar2;
  *(undefined8 **)(puVar5 + 0x18) = puVar3;
  *(code **)(puVar5 + 0x20) = pcVar4;
  *(undefined8 *)(puVar5 + 0x28) = uVar6;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar6);
  pcVar7 = FUN_102ba06b4;
  func_0x0001000823a8(FUN_102ba06b4,puVar5);
  func_0x000100082720("SCContextTopLevelReactionsTrayScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  func_0x0001000285a8(0x112efb6a8,&UNK_10db2bbf0);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x102ba06c0;
  func_0x0001000823a8(0x102ba06c0,pcVar7);
  func_0x000100082720("SCContextTopLevelReactionsTrayScopeInitializationServiceProvider",0x40,2);
  func_0x0001000285a8(0x112efb698,&UNK_10db2bbe0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x102ba06c8;
  func_0x0001000823a8(0x102ba06c8,uVar8);
  func_0x000100082720("SCContextTopLevelReactionsTrayScopedServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_1105a8448;
  func_0x000107c613fc(&UNK_1105a8448,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x102ba06d0;
  func_0x0001000823a8(0x102ba06d0,puVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCContextTopLevelReactionsTrayScopeEntryPointProvider",0x35,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 102ba0678; end: 102ba06b3;  */

void FUN_102ba0678(void)

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



/* Entry: 102ba06b4; end: 102ba06d7;  */

void FUN_102ba06b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102ba0ab4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCContextTopLevelReactionsTrayScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ba06d8; end: 102ba08bb;  */

void FUN_102ba06d8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  FUN_102ba0a04();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  func_0x0001031bc6ac(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uStack_78);
  func_0x0001031bc0d4(uStack_58,uVar1,uVar2,uVar3,uStack_78);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 102ba08bc; end: 102ba08ff;  */

void FUN_102ba08bc(void)

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



/* Entry: 102ba0900; end: 102ba0907;  */

undefined8 FUN_102ba0900(void)

{
  return 0x1b;
}



/* Entry: 102ba0908; end: 102ba098b;  */

void FUN_102ba0908(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102ba0a44,param_2,FUN_102ba0a48,param_2,FUN_102ba0a70,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102ba098c; end: 102ba09d3;  */

undefined8 FUN_102ba098c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x0001031bc620();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 102ba09d4; end: 102ba0a03;  */

undefined ** FUN_102ba09d4(void)

{
  return &PTR_DAT_113066a30;
}



/* Entry: 102ba0a04; end: 102ba0a23;  */

void FUN_102ba0a04(void)

{
  func_0x000107c61168(&PTR_PTR_112efb798);
  return;
}



/* Entry: 102ba0a24; end: 102ba0a47;  */

undefined1  [16] FUN_102ba0a24(void)

{
  return ZEXT816(0x1105a84a0);
}



/* Entry: 102ba0a48; end: 102ba0a6f;  */

void FUN_102ba0a48(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ba0a70; end: 102ba0a77;  */

undefined8 FUN_102ba0a70(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x0001031bc620();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 102ba0a78; end: 102ba0ab3;  */

void FUN_102ba0a78(undefined8 *param_1,undefined8 param_2)

{
  FUN_102ba0ab4();
  func_0x0001000a7f38("SCContextTopLevelReactionsTrayScopeInitializationPluginRegistryServiceProvider"
                      ,0x4e,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102ba0ab4; end: 102ba0c9f;  */

void FUN_102ba0ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d370;
  ppuVar4 = &PTR_DAT_113066a30;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1105a84f0;
  func_0x000107c613fc(&UNK_1105a84f0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112efb818;
  func_0x0001000285a8(0x112efb818,&UNK_10db2c028);
  func_0x0001000a6ee8(&UNK_1105a8700,
                      "ContextReactionsTrayScopeGraphBridgeScopeInitializationPluginKey",0x40,2,
                      FUN_102ba0ca0,puVar2,uVar3,&UNK_1105a8700,&PTR_DAT_112efb8a8);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1105a8518;
  func_0x000107c613fc(&UNK_1105a8518,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105a82c0,
                      "SCContextTopLevelReactionsTrayScopedServicesScopeInitializationPluginKey",
                      0x48,2,FUN_102ba0d88,puVar2,uVar3,&UNK_1105a82c0,&PTR_DAT_112efb6b0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105a84a0,
                      "TopLevelReactionsTrayEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      FUN_102ba0e04,param_4,uVar3,&UNK_1105a84a0,&PTR_DAT_112efb730);
  func_0x000107c61574(param_4);
  uVar3 = 0x112efb820;
  func_0x0001000285a8(0x112efb820,&UNK_10db2c030);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102ba0ca0; end: 102ba0cdf;  */

void FUN_102ba0ca0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102ba13dc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ContextReactionsTrayScopeGraphBridgeScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 102ba0ce0; end: 102ba0d87;  */

void FUN_102ba0ce0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a8540;
  func_0x000107c613fc(&UNK_1105a8540,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102ba0e40;
  func_0x0001000823a8(FUN_102ba0e40,puVar1);
  func_0x000100082720("SCContextTopLevelReactionsTrayScopedServicesScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102ba0d88; end: 102ba0d8f;  */

void FUN_102ba0d88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105a8540;
  func_0x000107c613fc(&UNK_1105a8540,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102ba0e40;
  func_0x0001000823a8(FUN_102ba0e40,puVar3);
  func_0x000100082720("SCContextTopLevelReactionsTrayScopedServicesScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102ba0d90; end: 102ba0e03;  */

void FUN_102ba0d90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102ba0e0c;
  func_0x0001000823a8(0x102ba0e0c,param_3);
  func_0x000100082720("TopLevelReactionsTrayEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ba0e04; end: 102ba0e13;  */

void FUN_102ba0e04(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102ba0e0c;
  func_0x0001000823a8();
  func_0x000100082720("TopLevelReactionsTrayEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ba0e14; end: 102ba0e3f;  */

void FUN_102ba0e14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102ba0e40; end: 102ba0e47;  */

void FUN_102ba0e40(undefined8 *param_1)

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



/* Entry: 102ba0e48; end: 102ba0ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ba0e48(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_102ba1208();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112efb828) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112efb830) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba0ed0);
  (*pcVar1)();
}



/* Entry: 102ba0ed0; end: 102ba0f2f; -[_TtC36ContextReactionsTrayScopeGraphBridge51ContextReactionsTrayScopeGraphBridgeSaberEntryPoint init] */

void FUN_102ba0ed0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextReactionsTrayScopeGraphBridge.ContextReactionsTrayScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba0efc);
  (*pcVar1)();
}



/* Entry: 102ba0f30; end: 102ba0f67; -[_TtC36ContextReactionsTrayScopeGraphBridge51ContextReactionsTrayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ba0f4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba0f50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba0f30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efb828));
  return;
}



/* Entry: 102ba0f68; end: 102ba0f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba0f68(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112efb830),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112efb828));
  return;
}



/* Entry: 102ba0f90; end: 102ba0faf;  */

void FUN_102ba0f90(void)

{
  func_0x000107c61168(&PTR_PTR_1128923c8);
  return;
}



/* Entry: 102ba0fb0; end: 102ba1037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ba0fb0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efb860) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112efb868);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102ba1038);
  (*pcVar2)();
}



/* Entry: 102ba1038; end: 102ba111f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102ba1038(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efb860);
  *(undefined **)(unaff_x20 + _DAT_112efb860) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efb868);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112efb868))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105a8660;
  func_0x000107c613fc(&UNK_1105a8660,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102ba1124,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102ba1120; end: 102ba112b;  */

void FUN_102ba1120(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102ba112c; end: 102ba118b; -[_TtC36ContextReactionsTrayScopeGraphBridge59SCContextTopLevelReactionsTrayScopedServicesSaberEntryPoint init] */

void FUN_102ba112c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextReactionsTrayScopeGraphBridge.SCContextTopLevelReactionsTrayScopedServicesSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba1158);
  (*pcVar1)();
}



/* Entry: 102ba118c; end: 102ba11c3; -[_TtC36ContextReactionsTrayScopeGraphBridge59SCContextTopLevelReactionsTrayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba118c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112efb868));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efb860));
  return;
}



/* Entry: 102ba11c4; end: 102ba11c7;  */

void FUN_102ba11c4(void)

{
  return;
}



/* Entry: 102ba11c8; end: 102ba11e7;  */

void FUN_102ba11c8(void)

{
  FUN_102ba1038();
  return;
}



/* Entry: 102ba11e8; end: 102ba1207;  */

void FUN_102ba11e8(void)

{
  func_0x000107c61168(&PTR_PTR_112892490);
  return;
}



/* Entry: 102ba1208; end: 102ba12d7;  */

undefined8 FUN_102ba1208(void)

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
  
  func_0x000107c61428(0x112efb898,&uStack_40,0x20,0);
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
    FUN_102ba12d8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102ba12d8; end: 102ba12f7;  */

void FUN_102ba12d8(void)

{
  func_0x000107c61168(&PTR_PTR_112892558);
  return;
}



/* Entry: 102ba12f8; end: 102ba1363;  */

void FUN_102ba12f8(void)

{
  func_0x0001000285a8(0x112efb8a0,&UNK_10db2c118);
  func_0x0001000823a8(0x102ba1338,0);
  return;
}



/* Entry: 102ba1364; end: 102ba139f; -[_TtC36ContextReactionsTrayScopeGraphBridge44ContextReactionsTrayScopeGraphBridgeServices init] */

void FUN_102ba1364(undefined8 param_1)

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



/* Entry: 102ba13a0; end: 102ba13d3;  */

void FUN_102ba13a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ba13d4; end: 102ba13db;  */

undefined8 FUN_102ba13d4(void)

{
  return 0x1b;
}



/* Entry: 102ba13dc; end: 102ba1553;  */

void FUN_102ba13dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a86a8;
  func_0x000107c613fc(&UNK_1105a86a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102ba1554,puVar1);
  return;
}



/* Entry: 102ba1554; end: 102ba155b;  */

void FUN_102ba1554(undefined8 *param_1)

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
  func_0x000107c61428(0x112efb898,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112efb898,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105a8740;
  func_0x000107c613fc(&UNK_1105a8740,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102ba1608;
  func_0x00010058fa64(0x102ba1608,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102ba155c; end: 102ba15b7;  */

void FUN_102ba155c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112efb898,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112efb898,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102ba15b8; end: 102ba160f;  */

undefined ** FUN_102ba15b8(void)

{
  return &PTR_DAT_113066a30;
}



/* Entry: 102ba1610; end: 102ba1657; -[SCContextReactionsTrayScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba1610(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efb8f8;
  func_0x000107c61428(param_1 + _DAT_112efb8f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ba1658; end: 102ba16af; -[SCContextReactionsTrayScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba1658(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efb8f8;
  func_0x000107c61428(param_1 + _DAT_112efb8f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ba16b0; end: 102ba16f7; -[SCContextReactionsTrayScopeGraphBridgeSaberEntryPoint contextReactionsTrayScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba16b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efb900;
  func_0x000107c61428(param_1 + _DAT_112efb900,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102ba16f8; end: 102ba175b; -[SCContextReactionsTrayScopeGraphBridgeSaberEntryPoint setContextReactionsTrayScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba16f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efb900;
  func_0x000107c61428(param_1 + _DAT_112efb900,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102ba175c; end: 102ba188f;  */

/* WARNING: Possible PIC construction at 0x000102ba1814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba1830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba184c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba1818) */
/* WARNING: Removing unreachable block (ram,0x000102ba1834) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba175c(void)

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
  func_0x000107c405d0();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102ba0f90();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_102ba1208();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba1890);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112efb828) = lVar5;
    *(long *)(lVar4 + _DAT_112efb830) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102ba1890; end: 102ba18b7; -[SCContextReactionsTrayScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102ba1890(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ba175c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ba18b8; end: 102ba18fb; -[SCContextReactionsTrayScopeGraphBridgeSaberEntryPoint end] */

void FUN_102ba18b8(undefined8 param_1)

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



/* Entry: 102ba18fc; end: 102ba1a93;  */

void FUN_102ba18fc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcd) || (param_3 != -0x7ffffffef0f06560)) {
      uVar2 = 0xd000000000000033;
      func_0x000107c605b8(0xd000000000000033,0x800000010f0f9aa0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ContextReactionsTrayScopeGraphBridge/SCContextReactionsTrayScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x60,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba1a94);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53908();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102ba1a94; end: 102ba1b3f; -[SCContextReactionsTrayScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102ba1a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102ba18fc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ba1b40; end: 102ba1bab; -[SCContextReactionsTrayScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba1b40(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efb8f8,0);
  *(undefined8 *)(param_1 + _DAT_112efb900) = 0;
  *(undefined8 *)(param_1 + _DAT_112efb908) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ba1bac; end: 102ba1bdf;  */

void FUN_102ba1bac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ba1be0; end: 102ba1c27; -[SCContextReactionsTrayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ba1c0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba1c10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba1be0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efb8f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efb900));
  return;
}



/* Entry: 102ba1c28; end: 102ba1c47;  */

void FUN_102ba1c28(void)

{
  func_0x000107c61168(&PTR_PTR_112892608);
  return;
}



/* Entry: 102ba1c48; end: 102ba1c8f; -[SCSCContextTopLevelReactionsTrayScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba1c48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efb938;
  func_0x000107c61428(param_1 + _DAT_112efb938,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ba1c90; end: 102ba1ce7; -[SCSCContextTopLevelReactionsTrayScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba1c90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efb938;
  func_0x000107c61428(param_1 + _DAT_112efb938,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ba1ce8; end: 102ba1dbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba1ce8(undefined8 param_1,long param_2)

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
    FUN_102ba11e8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112efb860) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ba1dc0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112efb868);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efb940);
    *(long **)(unaff_x20 + _DAT_112efb940) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102ba1dc0; end: 102ba1de7; -[SCSCContextTopLevelReactionsTrayScopedServicesSaberEntryPoint begin] */

void FUN_102ba1dc0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ba1ce8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ba1de8; end: 102ba1f5f;  */

/* WARNING: Possible PIC construction at 0x000102ba1e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba1ee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba1e54) */
/* WARNING: Removing unreachable block (ram,0x000102ba1eec) */
/* WARNING: Removing unreachable block (ram,0x000102ba1f04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba1de8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112efb940);
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



/* Entry: 102ba1f60; end: 102ba1f67;  */

void FUN_102ba1f60(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102ba1f68; end: 102ba1f9b; -[SCSCContextTopLevelReactionsTrayScopedServicesSaberEntryPoint end] */

void FUN_102ba1f68(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102ba1de8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ba1f9c; end: 102ba20bb;  */

void FUN_102ba1f9c(long param_1,long param_2,long param_3)

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
                        "ContextReactionsTrayScopeGraphBridge/SCSCContextTopLevelReactionsTrayScopedServicesSaberEntryPoint.swift"
                        ,0x68,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba20bc);
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



/* Entry: 102ba20bc; end: 102ba2167; -[SCSCContextTopLevelReactionsTrayScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102ba20bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102ba1f9c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ba2168; end: 102ba21c7; -[SCSCContextTopLevelReactionsTrayScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba2168(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efb938,0);
  *(undefined8 *)(param_1 + _DAT_112efb940) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ba21c8; end: 102ba21fb;  */

void FUN_102ba21c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ba21fc; end: 102ba2233; -[SCSCContextTopLevelReactionsTrayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba21fc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efb938);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efb940));
  return;
}



/* Entry: 102ba2234; end: 102ba2253;  */

void FUN_102ba2234(void)

{
  func_0x000107c61168(&PTR_PTR_1128926d0);
  return;
}



/* Entry: 102ba2254; end: 102ba2363;  */

void FUN_102ba2254(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  pcVar1 = "performReactionAnimation(for:in:)";
  func_0x0001000c10c0("performReactionAnimation(for:in:)");
  func_0x000107c61180();
  puVar2 = &UNK_1105a8848;
  func_0x000107c613fc(&UNK_1105a8848,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1105a8870;
  func_0x000107c613fc(&UNK_1105a8870,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  pcStack_50 = FUN_102ba23d8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105a8888;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102ba2364; end: 102ba23d7;  */

void FUN_102ba2364(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102ba2618(param_2,param_3);
    FUN_102ba23e4();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102ba23d8; end: 102ba23e3;  */

void FUN_102ba23d8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_102ba2618(uVar1,uVar3);
    FUN_102ba23e4();
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102ba23e4; end: 102ba24ff;  */

void FUN_102ba23e4(void)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  ulong uVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  func_0x000107c614f0();
  pcVar2 = "performHapticFeedback()";
  func_0x0001000c10c0("performHapticFeedback()");
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar5 = 0;
  do {
    puVar3 = &UNK_1105a88c0;
    func_0x000107c613fc(&UNK_1105a88c0,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
    pcStack_90 = FUN_102ba2a1c;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_1105a88d8;
    ppuVar4 = &puStack_b0;
    puStack_88 = puVar3;
    func_0x000107c60bc4(&puStack_b0);
    func_0x000107c61574(puStack_88);
    func_0x000107c4e528((double)uVar5 * 0.15789473684210525,pcVar2);
    func_0x000107c60bd0(ppuVar4);
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x14);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 102ba2500; end: 102ba251b;  */

void FUN_102ba2500(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102ba251c; end: 102ba2587; -[SCContextTopLevelReactionsAnimationProviding performReactionAnimationFor:in:] */

/* WARNING: Possible PIC construction at 0x000102ba2568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba256c) */

void FUN_102ba251c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102ba2254(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102ba2588; end: 102ba25c3; -[SCContextTopLevelReactionsAnimationProviding init] */

void FUN_102ba2588(undefined8 param_1)

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



/* Entry: 102ba25c4; end: 102ba2617;  */

void FUN_102ba25c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ba2618; end: 102ba2a1b;  */

void FUN_102ba2618(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  unkuint9 Var2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  double dVar15;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  
  func_0x000107c438d4(param_6);
  puVar6 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  func_0x000107c61168();
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168();
  uVar13 = 1;
  do {
    puVar8 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c46db4();
    func_0x000107c3d89c(param_6);
    do {
      puStack_d0 = (undefined *)0x0;
      func_0x000107c61598(&puStack_d0,8);
    } while (((long)puStack_d0 * 0x29 & 0xfffffffffffffff0U) == 0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = puStack_d0;
    Var2 = (unkuint9)(SUB168(auVar1 * ZEXT816(0x29),8) + 0x28);
    dVar15 = (double)(unkint9)Var2;
    fVar14 = (float)param_3 - (float)(unkint9)Var2;
    if (fVar14 < 0.0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102ba2a18);
      (*pcVar4)();
    }
    if (0x7f7fffff < (uint)ABS(fVar14)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102ba2a1c);
      (*pcVar4)();
    }
    do {
      puStack_d0 = (undefined *)0x0;
      func_0x000107c61598(&puStack_d0,8);
      uVar12 = ((ulong)puStack_d0 & 0xffffffff) * 0x1000001;
    } while ((uint)uVar12 < 0xffff01);
    uVar12 = uVar12 >> 0x20;
    if (uVar12 != 0x1000000) {
      fVar14 = fVar14 * ((float)uVar12 / 16777216.0) + 0.0;
    }
    func_0x000107c54b80((double)fVar14,param_4 + 100.0,dVar15,dVar15,puVar8);
    func_0x000107c3e740(puVar6);
    puVar9 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x000107c610f8(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    func_0x000107c46154(0x3e3851ec,0x3f4a3d71,0x3ef5c28f,0x3f733333);
    func_0x000107c52720(puVar6);
    func_0x000107c61170(puVar9);
    puVar9 = &UNK_1105a8910;
    func_0x000107c613fc(&UNK_1105a8910,0x28,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(float *)(puVar9 + 0x18) = fVar14;
    *(double *)(puVar9 + 0x20) = dVar15;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_b0 = FUN_102ba2af8;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000f6b44;
    puStack_b8 = &UNK_1105a8928;
    ppuVar10 = &puStack_d0;
    puStack_a8 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar9 = puStack_a8;
    func_0x000107c61174();
    func_0x000107c61574(puVar9);
    func_0x000107c3dcd4(0x4000000000000000,(double)uVar13 * 0.1,puVar7);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c3fe58(puVar6);
    func_0x000107c3e740(puVar6);
    puVar9 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x000107c610f8(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    func_0x000107c46154(0x3f800000,0x3f28f5c3,0x3f800000,0x3f51eb85);
    func_0x000107c52720(puVar6);
    func_0x000107c61170(puVar9);
    puVar9 = &UNK_1105a8960;
    func_0x000107c613fc(&UNK_1105a8960,0x18,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    pcStack_b0 = (code *)0x102ba2b18;
    puStack_d0 = puVar3;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000f6b44;
    puStack_b8 = &UNK_1105a8978;
    ppuVar10 = &puStack_d0;
    puStack_a8 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar9 = puStack_a8;
    func_0x000107c61174();
    func_0x000107c61574(puVar9);
    puVar9 = &UNK_1105a89b0;
    func_0x000107c613fc(&UNK_1105a89b0,0x18,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    pcStack_b0 = (code *)0x102ba2b24;
    puStack_d0 = puVar3;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_100288f10;
    puStack_b8 = &UNK_1105a89c8;
    ppuVar11 = &puStack_d0;
    puStack_a8 = puVar9;
    func_0x000107c60bc4(ppuVar11);
    puVar9 = puStack_a8;
    func_0x000107c61174(puVar8);
    func_0x000107c61574(puVar9);
    func_0x000107c3dcd4(0x4000000000000000,(double)uVar13 * 0.1,puVar7);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c3fe58(puVar6);
    func_0x000107c61170(puVar8);
    bVar5 = uVar13 != 0x1e;
    uVar13 = uVar13 + 1;
  } while (bVar5);
  return;
}



/* Entry: 102ba2a1c; end: 102ba2a1f;  */

void FUN_102ba2a1c(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar2 = 10;
  func_0x0001016e7c78();
  puVar3 = PTR_PTR_1126affa8;
  if (uVar2 < 4) {
    func_0x000107c61168();
    func_0x000107c5aa04();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba2af0);
      (*pcVar1)();
    }
  }
  else if (uVar2 - 4 < 3) {
    func_0x000107c61168();
    func_0x000107c5aa04();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba2af4);
      (*pcVar1)();
    }
  }
  else {
    func_0x000107c61168();
    func_0x000107c5aa04();
    func_0x000107c61180();
    if (uVar2 - 7 < 4) {
      if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba2af8);
        (*pcVar1)();
      }
    }
    else if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba2aec);
      (*pcVar1)();
    }
  }
  func_0x000107c4e57c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 102ba2a20; end: 102ba2af7;  */

void FUN_102ba2a20(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar2 = 10;
  func_0x0001016e7c78();
  puVar3 = PTR_PTR_1126affa8;
  if (uVar2 < 4) {
    func_0x000107c61168();
    func_0x000107c5aa04();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba2af0);
      (*pcVar1)();
    }
  }
  else if (uVar2 - 4 < 3) {
    func_0x000107c61168();
    func_0x000107c5aa04();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba2af4);
      (*pcVar1)();
    }
  }
  else {
    func_0x000107c61168();
    func_0x000107c5aa04();
    func_0x000107c61180();
    if (uVar2 - 7 < 4) {
      if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba2af8);
        (*pcVar1)();
      }
    }
    else if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba2aec);
      (*pcVar1)();
    }
  }
  func_0x000107c4e57c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 102ba2af8; end: 102ba2b4b;  */

void FUN_102ba2af8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)*(float *)(unaff_x20 + 0x18),0xc054000000000000,
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x10),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 102ba2b4c; end: 102ba2bb3;  */

void FUN_102ba2b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xf8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x100) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x108) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x110) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ba2bb4,0,0);
  return;
}



/* Entry: 102ba2bb4; end: 102ba2dbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba2bb4(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar7 = *(long *)(unaff_x22 + 0xd8);
  if (lVar7 != 0) {
    lVar3 = *(long *)(unaff_x22 + 0xd0);
    func_0x000107c5fb5c(lVar3,lVar7);
    if (0 < lVar3) {
      uVar8 = *(undefined8 *)(*(long *)(unaff_x22 + 0xf8) + _DAT_112efb9a8);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
      puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0xf8) + _DAT_112efb9b0);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      puVar4 = &UNK_1105a8a00;
      func_0x000107c613fc(&UNK_1105a8a00,0x30,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar10;
      *(undefined8 *)(puVar4 + 0x18) = uVar11;
      *(undefined8 *)(puVar4 + 0x20) = uVar9;
      *(long *)(puVar4 + 0x28) = lVar7;
      puVar5 = &UNK_1105a8a28;
      func_0x000107c613fc(&UNK_1105a8a28,0x20,7);
      *(code **)(puVar5 + 0x10) = FUN_102ba3be4;
      *(undefined **)(puVar5 + 0x18) = puVar4;
      *(code **)(unaff_x22 + 0xb0) = FUN_102ba3bf0;
      *(undefined **)(unaff_x22 + 0xb8) = puVar5;
      *(undefined **)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
      *(undefined **)(unaff_x22 + 0xa0) = &UNK_100f9148c;
      *(undefined **)(unaff_x22 + 0xa8) = &UNK_1105a8a40;
      lVar3 = unaff_x22 + 0x90;
      func_0x000107c60bc4(lVar3);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
      func_0x000107c61434(lVar7);
      func_0x000107c6157c(puVar5);
      func_0x000107c61574(uVar9);
      func_0x000107c45138(uVar8);
      func_0x000107c61180();
      func_0x000107c60bd0(lVar3);
      puVar6 = puVar5;
      func_0x000107c61544(puVar5,"",0x7a,0x6a,0x24,1);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar4);
      if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ba2d14);
        (*pcVar2)();
      }
      goto LAB_102ba2d94;
    }
  }
  if (0 < *(long *)(unaff_x22 + 0xe0)) {
    lVar7 = *(long *)(*(long *)(unaff_x22 + 0xf8) + _DAT_112efb998);
    *(long *)(unaff_x22 + 0x118) = lVar7;
    if (lVar7 != 0) {
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xc0;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_102ba2dc0;
      func_0x000107c615f0(lVar7);
      func_0x000107c61448(unaff_x22 + 0x10,0);
      FUN_102ba3350();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
  }
  uVar8 = 0;
LAB_102ba2d94:
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x000102ba2dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar8);
  return;
}



/* Entry: 102ba2dc0; end: 102ba2dff;  */

void FUN_102ba2dc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ba2e00,0,0);
  return;
}



/* Entry: 102ba2e00; end: 102ba2feb;  */

/* WARNING: Removing unreachable block (ram,0x000102ba2f20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba2e00(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x118));
  lVar7 = *(long *)(unaff_x22 + 0xc0);
  *(long *)(unaff_x22 + 0x120) = lVar7;
  if (lVar7 == 0) {
    puVar6 = (undefined *)0x0;
    goto LAB_102ba2fa4;
  }
  if (*(long *)(unaff_x22 + 0xf0) == 0) {
LAB_102ba2ee0:
    lVar2 = lVar7;
    func_0x000107c4d6f4();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba2fec);
      (*pcVar1)();
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
    func_0x000107c5edb4(uVar5);
    func_0x000107c61170(lVar2);
    uVar4 = 0;
    func_0x000107c5ede8(uVar5,0);
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    uVar3 = uVar5;
    func_0x000107c5ee20(uVar5,uVar4);
    func_0x000107c4635c();
    func_0x000107c61170(uVar3);
    func_0x00010006c090(uVar5,uVar4);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    (**(code **)(*(long *)(unaff_x22 + 0x108) + 8))
              (*(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0x100));
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0xe8);
    func_0x000107c5fb5c(lVar2,*(long *)(unaff_x22 + 0xf0));
    if (lVar2 < 1) goto LAB_102ba2ee0;
    lVar2 = lVar7;
    func_0x000107c4d6f0();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x128) = lVar2;
    if (lVar2 == 0) goto LAB_102ba2ee0;
    lVar7 = *(long *)(unaff_x22 + 0xf8);
    FUN_102ba3ad0();
    *(long *)(unaff_x22 + 0x130) = lVar2;
    lVar7 = *(long *)(lVar7 + _DAT_112efb9a0);
    *(long *)(unaff_x22 + 0x138) = lVar7;
    if (lVar7 != 0) {
      *(long *)(unaff_x22 + 0x78) = unaff_x22 + 200;
      *(long *)(unaff_x22 + 0x50) = unaff_x22;
      *(code **)(unaff_x22 + 0x58) = FUN_102ba2fec;
      func_0x000107c615f0(lVar7);
      func_0x000107c61448(unaff_x22 + 0x50,0);
      FUN_102ba362c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
      return;
    }
    lVar7 = *(long *)(unaff_x22 + 0x120);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
    puVar6 = (undefined *)0x0;
  }
  func_0x000107c61170(lVar7);
LAB_102ba2fa4:
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x000102ba2fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar6);
  return;
}



/* Entry: 102ba2fec; end: 102ba302b;  */

void FUN_102ba2fec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ba302c,0,0);
  return;
}



/* Entry: 102ba302c; end: 102ba308f;  */

void FUN_102ba302c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x138));
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x130));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x000102ba308c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 102ba3090; end: 102ba31ef; -[SCContextTopLevelReactionsImageRenderer fetchReactionImageFor:bitmojiIntentId:avatarId:completionHandler:] */

void FUN_102ba3090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1105a8a78;
  func_0x000107c613fc(&UNK_1105a8a78,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffb0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1105a8aa0;
  func_0x000107c613fc(&UNK_1105a8aa0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10db2c390;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1105a8ac8;
  func_0x000107c613fc(&UNK_1105a8ac8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10db2c3a0;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffb0 + -extraout_x8,&UNK_10db2c3b0,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 102ba31f0; end: 102ba32c7;  */

void FUN_102ba31f0(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  long lVar3;
  long *plVar4;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  *(long *)(unaff_x22 + 0x18) = param_5;
  if (param_1 == 0) {
    param_1 = 0;
    lVar1 = 0;
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
    lVar3 = param_2;
  }
  else {
    lVar1 = param_2;
    func_0x000107c5faec();
    *(long *)(unaff_x22 + 0x20) = lVar1;
    lVar3 = lVar1;
  }
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  *(long *)(unaff_x22 + 0x28) = lVar3;
  plVar4 = (long *)0x140;
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ba32c8;
  plVar4[0x1e] = lVar3;
  plVar4[0x1f] = param_5;
  plVar4[0x1c] = param_2;
  plVar4[0x1d] = param_3;
  plVar4[0x1a] = param_1;
  plVar4[0x1b] = lVar1;
  lVar1 = 0;
  func_0x000107c5ede0();
  plVar4[0x20] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x21] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x22] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ba2bb4,0,0);
  return;
}



/* Entry: 102ba32c8; end: 102ba334f;  */

void FUN_102ba32c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  uVar3 = *(undefined8 *)(lVar4 + 0x20);
  lVar6 = *(long *)(lVar4 + 0x10);
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x30));
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar3);
  (**(code **)(lVar6 + 0x10))(lVar6,param_1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x000102ba334c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Entry: 102ba3350; end: 102ba351b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba3350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar2 = puVar1;
  func_0x000100673624();
  func_0x000107c61534();
  *(undefined8 *)(puVar2 + 0x18) = 3;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  puVar7 = (undefined8 *)(puVar2 + 0x20);
  *puVar7 = puVar1;
  func_0x000107c61174(puVar1);
  puVar3 = puVar2;
  FUN_10254afb4(puVar2);
  func_0x000107c61588(puVar2);
  uVar6 = *(undefined8 *)(puVar2 + 0x10);
  uVar4 = 0;
  func_0x000102ba3ea8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61408(puVar7,uVar6,uVar4);
  func_0x000100120cb0();
  puVar2 = puVar3;
  func_0x000107c5fe08(puVar3,uVar4,puVar7);
  func_0x000107c6142c(puVar3);
  func_0x000107c4f970(param_3);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_1105a8b40;
  func_0x000107c613fc(&UNK_1105a8b40,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  pcStack_98 = FUN_102ba3e60;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_10104e6fc;
  puStack_a0 = &UNK_1105a8b58;
  ppuVar5 = &puStack_b8;
  puStack_90 = puVar2;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_90);
  uVar4 = param_3;
  func_0x000107c5c320(param_3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(param_3);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102ba351c; end: 102ba362b;  */

void FUN_102ba351c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = &uStack_70;
  uStack_70 = param_2;
  func_0x000107c6061c(puVar1,PTR___sSiN_11034deb0);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar1);
  if (param_1 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70,param_1);
    func_0x000107c615e8(param_1);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x000102ba3e68(&uStack_50,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar2 = 0;
    func_0x000102ba3ea8(0,0x112ea4a00,&PTR_PTR_1126bea48);
    puVar1 = &uStack_78;
    func_0x000107c6147c(puVar1,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)puVar1 & 1) != 0) goto LAB_102ba3604;
  }
  uStack_78 = 0;
LAB_102ba3604:
  **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = uStack_78;
  func_0x000107c6144c(param_3);
  return;
}



/* Entry: 102ba362c; end: 102ba3797;  */

void FUN_102ba362c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000102ba3ea8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar6 + 0x68))
            (lVar5,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1)
  ;
  lVar2 = lVar5;
  func_0x000107c5fff0(lVar5);
  (**(code **)(lVar6 + 8))(lVar5,lVar1);
  puVar3 = &UNK_1105a8af0;
  func_0x000107c613fc(&UNK_1105a8af0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  pcStack_60 = FUN_102ba3e30;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1010866ac;
  puStack_68 = &UNK_1105a8b08;
  ppuVar4 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_58);
  func_0x000107c42fec(param_2);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102ba3798; end: 102ba37f7; -[SCContextTopLevelReactionsImageRenderer init] */

void FUN_102ba3798(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextTopLevelReactionsServiceProvider.TopLevelReactionsImageRenderer",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba37c4);
  (*pcVar1)();
}



/* Entry: 102ba37f8; end: 102ba384f; -[SCContextTopLevelReactionsImageRenderer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ba3834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba3838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba37f8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112efb998));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112efb9a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efb9a8));
  return;
}



/* Entry: 102ba3850; end: 102ba3a53;  */

void FUN_102ba3850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c549b0();
  func_0x000107c61170(puVar1);
  func_0x000107c4348c(0,0,param_1,param_2,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52610();
  lVar2 = 0x112ea49e8;
  func_0x0001000285a8(0x112ea49e8,&UNK_10db2c3c0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  uVar6 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar2 + 0x20) = uVar6;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  func_0x000107c61174(uVar6);
  func_0x000107c5c5fc(param_1);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  *(undefined **)(lVar2 + 0x28) = puVar3;
  *(undefined8 *)(lVar2 + 0x30) = uVar6;
  *(undefined **)(lVar2 + 0x38) = puVar1;
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  lVar4 = lVar2;
  func_0x00010254d530(lVar2);
  func_0x000107c61588(lVar2);
  uVar6 = 0x112ea49f0;
  func_0x0001000285a8(0x112ea49f0,&UNK_10dab7b80);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),2,uVar6);
  func_0x000107c5fadc(param_4,param_5);
  lVar2 = lVar4;
  FUN_10254a080(lVar4);
  func_0x000107c6142c(lVar4);
  uVar5 = 0;
  func_0x000100eca28c(0);
  uVar6 = uVar5;
  func_0x000100ecbdec();
  lVar4 = lVar2;
  func_0x000107c5f9dc(lVar2,uVar5,PTR___sypN_11034f1a8 + 8,uVar6);
  func_0x000107c6142c(lVar2);
  func_0x000107c422b8(0x4010000000000000,0x4010000000000000,param_4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 102ba3a54; end: 102ba3acf;  */

void FUN_102ba3a54(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ba3a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ba3ad0; end: 102ba3be3;  */

undefined * FUN_102ba3ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b58e0;
  func_0x000107c610f8(PTR_PTR_1126b58e0);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_2,param_3);
  puVar2 = puVar1;
  func_0x000107c5e458(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar2);
  uVar3 = param_1;
  func_0x000107c5c7d8(param_1);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5e820(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c51820(param_1);
  func_0x000107c5e770(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c45120(param_1);
  func_0x000107c5e5a4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  puVar2 = puVar1;
  func_0x000107c3ecc8(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar2;
}


