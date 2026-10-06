/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101fc0d04; end: 101fc0d1f;  */

undefined ** FUN_101fc0d04(void)

{
  return &PTR_DAT_11302c760;
}



/* Entry: 101fc0d20; end: 101fc0d3f;  */

void FUN_101fc0d20(void)

{
  func_0x000107c61168(&PTR_PTR_112e4bab0);
  return;
}



/* Entry: 101fc0d40; end: 101fc0d73;  */

undefined1  [16] FUN_101fc0d40(void)

{
  return ZEXT816(0x1104b3980);
}



/* Entry: 101fc0d74; end: 101fc0dc7;  */

void FUN_101fc0d74(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101fc0dc8; end: 101fc1137;  */

void FUN_101fc0dc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11071e5b0;
  ppuVar4 = &PTR_DAT_11302c760;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112e4bb38;
  func_0x0001000285a8(0x112e4bb38,&UNK_10da45178);
  func_0x0001000a6ee8(&UNK_1104b3740,
                      "ARBarCaaSCameraAdapterEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      FUN_101fc1138,param_2,uVar2,&UNK_1104b3740,&PTR_DAT_112e4b618);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104b3800,
                      "ARBarCaaSCameraIntegrationEntryPointWrapperScopeInitializationPluginKey",0x47
                      ,2,0x101fc1164,param_3,uVar2,&UNK_1104b3800,&PTR_DAT_112e4b710);
  func_0x000107c61574(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104b3880,
                      "ARBarCaaSCameraLoggingEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      0x101fc1190,param_4,uVar2,&UNK_1104b3880,&PTR_DAT_112e4b840);
  func_0x000107c61574(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1104b3900,
                      "ARBarCaaSMiniCameraLensIconEntryPointWrapperScopeInitializationPluginKey",
                      0x48,2,0x101fc11bc,param_5,uVar2,&UNK_1104b3900,&PTR_DAT_112e4b950);
  func_0x000107c61574(param_5);
  puVar3 = &UNK_1104b39f0;
  func_0x000107c613fc(&UNK_1104b39f0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_6;
  *(undefined8 *)(puVar3 + 0x18) = param_7;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_1104b3d70,"CaaSCameraScopeGraphBridgeScopeInitializationPluginKey",0x36,2
                      ,FUN_101fc11e8,puVar3,uVar2,&UNK_1104b3d70,&PTR_DAT_112e4bf60);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_1104b39a0,"CaaSCameraUIEntryPointWrapperScopeInitializationPluginKey",
                      0x39,2,FUN_101fc12ac,param_8,uVar2,&UNK_1104b39a0,&PTR_DAT_112e4ba48);
  func_0x000107c61574(param_8);
  puVar3 = &UNK_1104b3a18;
  func_0x000107c613fc(&UNK_1104b3a18,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_6;
  *(undefined8 *)(puVar3 + 0x18) = param_9;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_9);
  func_0x0001000a6ee8(&UNK_1104b34a0,"SCCaaSCameraScopedServicesScopeInitializationPluginKey",0x36,2
                      ,FUN_101fc1380,puVar3,uVar2,&UNK_1104b34a0,&PTR_DAT_112e4b550);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e4bb40;
  func_0x0001000285a8(0x112e4bb40,&UNK_10da45180);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCCaaSCameraScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 101fc1138; end: 101fc11e7;  */

void FUN_101fc1138(void)

{
  FUN_101fc1228();
  return;
}



/* Entry: 101fc11e8; end: 101fc1227;  */

void FUN_101fc11e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101fc29a4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("CaaSCameraScopeGraphBridgeScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fc1228; end: 101fc12ab;  */

void FUN_101fc1228(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 101fc12ac; end: 101fc12d7;  */

void FUN_101fc12ac(void)

{
  FUN_101fc1228();
  return;
}



/* Entry: 101fc12d8; end: 101fc137f;  */

void FUN_101fc12d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b3a40;
  func_0x000107c613fc(&UNK_1104b3a40,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101fc13b4;
  func_0x0001000823a8(FUN_101fc13b4,puVar1);
  func_0x000100082720("SCCaaSCameraScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101fc1380; end: 101fc1387;  */

void FUN_101fc1380(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104b3a40;
  func_0x000107c613fc(&UNK_1104b3a40,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101fc13b4;
  func_0x0001000823a8(FUN_101fc13b4,puVar3);
  func_0x000100082720("SCCaaSCameraScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101fc1388; end: 101fc13b3;  */

void FUN_101fc1388(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fc13b4; end: 101fc13e3;  */

void FUN_101fc13b4(undefined8 *param_1)

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
  puVar1 = &UNK_1104b3528;
  func_0x000107c613fc(&UNK_1104b3528,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101fbe260;
  func_0x00010058fa64(FUN_101fbe260,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fc13e4; end: 101fc14fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101fc13e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_101fc2298();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e4bb48) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e4bb50) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101fc14fc);
  (*pcVar2)();
}



/* Entry: 101fc14fc; end: 101fc155b; -[_TtC26CaaSCameraScopeGraphBridge41CaaSCameraScopeGraphBridgeSaberEntryPoint init] */

void FUN_101fc14fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaaSCameraScopeGraphBridge.CaaSCameraScopeGraphBridgeSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc1528);
  (*pcVar1)();
}



/* Entry: 101fc155c; end: 101fc1593; -[_TtC26CaaSCameraScopeGraphBridge41CaaSCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fc1578: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc157c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc155c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4bb48));
  return;
}



/* Entry: 101fc1594; end: 101fc15bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc1594(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e4bb50),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e4bb48));
  return;
}



/* Entry: 101fc15bc; end: 101fc15db;  */

void FUN_101fc15bc(void)

{
  func_0x000107c61168(&PTR_PTR_112811f10);
  return;
}



/* Entry: 101fc15dc; end: 101fc1677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fc15dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e4bf18);
  *(undefined8 *)(unaff_x20 + _DAT_112e4bb80) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e4bb88) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 101fc1678; end: 101fc16d7; -[_TtC26CaaSCameraScopeGraphBridge40CaaSCameraCameraUIServiceSaberEntryPoint init] */

void FUN_101fc1678(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaaSCameraScopeGraphBridge.CaaSCameraCameraUIServiceSaberEntryPoint",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc16a4);
  (*pcVar1)();
}



/* Entry: 101fc16d8; end: 101fc176b; -[_TtC26CaaSCameraScopeGraphBridge40CaaSCameraCameraUIServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc16d8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e4bb80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4bb88));
  return;
}



/* Entry: 101fc176c; end: 101fc1773;  */

undefined8 FUN_101fc176c(void)

{
  return 0;
}



/* Entry: 101fc1774; end: 101fc1793;  */

void FUN_101fc1774(void)

{
  func_0x000107c61168(&PTR_PTR_112811fd8);
  return;
}



/* Entry: 101fc1794; end: 101fc182f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fc1794(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e4bf28);
  *(undefined8 *)(unaff_x20 + _DAT_112e4bbb8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e4bbc0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 101fc1830; end: 101fc188f; -[_TtC26CaaSCameraScopeGraphBridge58SCCaaSCameraScopedARBarReplyAdapterServicesSaberEntryPoint init] */

void FUN_101fc1830(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaaSCameraScopeGraphBridge.SCCaaSCameraScopedARBarReplyAdapterServicesSaberEntryPoint"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc185c);
  (*pcVar1)();
}



/* Entry: 101fc1890; end: 101fc1923; -[_TtC26CaaSCameraScopeGraphBridge58SCCaaSCameraScopedARBarReplyAdapterServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc1890(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e4bbb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4bbc0));
  return;
}



/* Entry: 101fc1924; end: 101fc192b;  */

undefined8 FUN_101fc1924(void)

{
  return 0;
}



/* Entry: 101fc192c; end: 101fc194b;  */

void FUN_101fc192c(void)

{
  func_0x000107c61168(&PTR_PTR_1128120a0);
  return;
}



/* Entry: 101fc194c; end: 101fc19e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fc194c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e4bf30);
  *(undefined8 *)(unaff_x20 + _DAT_112e4bbf0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e4bbf8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 101fc19e8; end: 101fc1a47; -[_TtC26CaaSCameraScopeGraphBridge62SCCaaSCameraScopedARBarReplyIntegrationServicesSaberEntryPoint init] */

void FUN_101fc19e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaaSCameraScopeGraphBridge.SCCaaSCameraScopedARBarReplyIntegrationServicesSaberEntryPoint"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc1a14);
  (*pcVar1)();
}



/* Entry: 101fc1a48; end: 101fc1adb; -[_TtC26CaaSCameraScopeGraphBridge62SCCaaSCameraScopedARBarReplyIntegrationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc1a48(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e4bbf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4bbf8));
  return;
}



/* Entry: 101fc1adc; end: 101fc1ae3;  */

undefined8 FUN_101fc1adc(void)

{
  return 0;
}



/* Entry: 101fc1ae4; end: 101fc1b03;  */

void FUN_101fc1ae4(void)

{
  func_0x000107c61168(&PTR_PTR_112812168);
  return;
}



/* Entry: 101fc1b04; end: 101fc1b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fc1b04(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e4bf38);
  *(undefined8 *)(unaff_x20 + _DAT_112e4bc28) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e4bc30) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 101fc1ba0; end: 101fc1bff; -[_TtC26CaaSCameraScopeGraphBridge51SCCaaSCameraScopedARBarReplyServicesSaberEntryPoint init] */

void FUN_101fc1ba0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaaSCameraScopeGraphBridge.SCCaaSCameraScopedARBarReplyServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc1bcc);
  (*pcVar1)();
}



/* Entry: 101fc1c00; end: 101fc1c93; -[_TtC26CaaSCameraScopeGraphBridge51SCCaaSCameraScopedARBarReplyServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc1c00(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e4bc28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4bc30));
  return;
}



/* Entry: 101fc1c94; end: 101fc1c9b;  */

undefined8 FUN_101fc1c94(void)

{
  return 0;
}



/* Entry: 101fc1c9c; end: 101fc1cbb;  */

void FUN_101fc1c9c(void)

{
  func_0x000107c61168(&PTR_PTR_112812230);
  return;
}



/* Entry: 101fc1cbc; end: 101fc1d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101fc1cbc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e4bf40);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 101fc1d20; end: 101fc1d27;  */

void FUN_101fc1d20(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101fc1d28; end: 101fc1dc7;  */

void FUN_101fc1d28(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101fc1dc8; end: 101fc1de7;  */

void FUN_101fc1dc8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 101fc1de8; end: 101fc1e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101fc1de8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e4bf48);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 101fc1e4c; end: 101fc1e53;  */

void FUN_101fc1e4c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101fc1e54; end: 101fc1ef3;  */

void FUN_101fc1e54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101fc1ef4; end: 101fc1f13;  */

void FUN_101fc1ef4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 101fc1f14; end: 101fc1f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101fc1f14(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e4bf50);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 101fc1f78; end: 101fc1f7f;  */

void FUN_101fc1f78(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101fc1f80; end: 101fc201f;  */

void FUN_101fc1f80(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101fc2020; end: 101fc203f;  */

void FUN_101fc2020(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 101fc2040; end: 101fc20c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fc2040(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4bed0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e4bed8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101fc20c8);
  (*pcVar2)();
}



/* Entry: 101fc20c8; end: 101fc21af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101fc20c8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4bed0);
  *(undefined **)(unaff_x20 + _DAT_112e4bed0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4bed8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e4bed8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104b3c28;
  func_0x000107c613fc(&UNK_1104b3c28,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101fc21b4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101fc21b0; end: 101fc21bb;  */

void FUN_101fc21b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101fc21bc; end: 101fc221b; -[_TtC26CaaSCameraScopeGraphBridge41SCCaaSCameraScopedServicesSaberEntryPoint init] */

void FUN_101fc21bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaaSCameraScopeGraphBridge.SCCaaSCameraScopedServicesSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc21e8);
  (*pcVar1)();
}



/* Entry: 101fc221c; end: 101fc2253; -[_TtC26CaaSCameraScopeGraphBridge41SCCaaSCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc221c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4bed8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4bed0));
  return;
}



/* Entry: 101fc2254; end: 101fc2257;  */

void FUN_101fc2254(void)

{
  return;
}



/* Entry: 101fc2258; end: 101fc2277;  */

void FUN_101fc2258(void)

{
  FUN_101fc20c8();
  return;
}



/* Entry: 101fc2278; end: 101fc2297;  */

void FUN_101fc2278(void)

{
  func_0x000107c61168(&PTR_PTR_1128122f8);
  return;
}



/* Entry: 101fc2298; end: 101fc2367;  */

undefined8 FUN_101fc2298(void)

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
  
  func_0x000107c61428(0x112e4bf08,&uStack_40,0x20,0);
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
    FUN_101fc2368();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101fc2368; end: 101fc2387;  */

void FUN_101fc2368(void)

{
  func_0x000107c61168(&PTR_PTR_1128123c0);
  return;
}



/* Entry: 101fc2388; end: 101fc25d3;  */

void FUN_101fc2388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4bf10,&UNK_10da45488);
  puVar1 = &UNK_1104b3c70;
  func_0x000107c613fc(&UNK_1104b3c70,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(FUN_101fc25d4,puVar1);
  return;
}



/* Entry: 101fc25d4; end: 101fc2607;  */

void FUN_101fc25d4(void)

{
  long unaff_x20;
  
  func_0x000101fc248c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101fc2608; end: 101fc26f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc2608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4bf18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e4bf20) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e4bf28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e4bf30) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e4bf38) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e4bf40) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e4bf48) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e4bf50) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e4bf58) = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fc26f4; end: 101fc2753; -[_TtC26CaaSCameraScopeGraphBridge34CaaSCameraScopeGraphBridgeServices init] */

void FUN_101fc26f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CaaSCameraScopeGraphBridge.CaaSCameraScopeGraphBridgeServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc2720);
  (*pcVar1)();
}



/* Entry: 101fc2754; end: 101fc283b; -[_TtC26CaaSCameraScopeGraphBridge34CaaSCameraScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fc2770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc2790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc27b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc27d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc27b4) */
/* WARNING: Removing unreachable block (ram,0x000101fc2794) */
/* WARNING: Removing unreachable block (ram,0x000101fc2774) */
/* WARNING: Removing unreachable block (ram,0x000101fc27d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc2754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4bf18));
  return;
}



/* Entry: 101fc283c; end: 101fc286b;  */

void FUN_101fc283c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 101fc286c; end: 101fc28ab;  */

void FUN_101fc286c(void)

{
  func_0x0001000285a8(0x112d9e908,&UNK_10d93ef80);
  func_0x0001000823a8(FUN_101fc28ac,0);
  return;
}



/* Entry: 101fc28ac; end: 101fc28bf;  */

void FUN_101fc28ac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9e968,&UNK_10d95d330);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 101fc28c0; end: 101fc28fb;  */

void FUN_101fc28c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8();
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 101fc28fc; end: 101fc2917;  */

void FUN_101fc28fc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101fc2968,param_1);
  return;
}



/* Entry: 101fc2918; end: 101fc2967;  */

void FUN_101fc2918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 101fc2968; end: 101fc299b;  */

void FUN_101fc2968(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101fc299c; end: 101fc29a3;  */

undefined8 FUN_101fc299c(void)

{
  return 0x1b;
}



/* Entry: 101fc29a4; end: 101fc2b1b;  */

void FUN_101fc29a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b3c98;
  func_0x000107c613fc(&UNK_1104b3c98,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101fc2b1c,puVar1);
  return;
}



/* Entry: 101fc2b1c; end: 101fc2b23;  */

void FUN_101fc2b1c(undefined8 *param_1)

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
  func_0x000107c61428(0x112e4bf08,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4bf08,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104b3db0;
  func_0x000107c613fc(&UNK_1104b3db0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101fc2c10;
  func_0x00010058fa64(0x101fc2c10,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fc2b24; end: 101fc2b7f;  */

void FUN_101fc2b24(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e4bf08,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e4bf08,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101fc2b80; end: 101fc2c1b;  */

undefined ** FUN_101fc2b80(void)

{
  return &PTR_DAT_11302c760;
}



/* Entry: 101fc2c1c; end: 101fc2c63; -[SCCaaSCameraScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc2c1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4bfb0;
  func_0x000107c61428(param_1 + _DAT_112e4bfb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc2c64; end: 101fc2cbb; -[SCCaaSCameraScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc2c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4bfb0;
  func_0x000107c61428(param_1 + _DAT_112e4bfb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc2cbc; end: 101fc2d03; -[SCCaaSCameraScopeGraphBridgeSaberEntryPoint sCCameraUIScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc2cbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4bfb8;
  func_0x000107c61428(param_1 + _DAT_112e4bfb8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fc2d04; end: 101fc2d0f; -[SCCaaSCameraScopeGraphBridgeSaberEntryPoint setSCCameraUIScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc2d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4bfb8;
  func_0x000107c61428(param_1 + _DAT_112e4bfb8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fc2d10; end: 101fc2d57; -[SCCaaSCameraScopeGraphBridgeSaberEntryPoint sCARBarPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc2d10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4bfc0;
  func_0x000107c61428(param_1 + _DAT_112e4bfc0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fc2d58; end: 101fc2d63; -[SCCaaSCameraScopeGraphBridgeSaberEntryPoint setSCARBarPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc2d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4bfc0;
  func_0x000107c61428(param_1 + _DAT_112e4bfc0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fc2d64; end: 101fc2dab; -[SCCaaSCameraScopeGraphBridgeSaberEntryPoint caaSCameraScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc2d64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4bfc8;
  func_0x000107c61428(param_1 + _DAT_112e4bfc8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fc2dac; end: 101fc2db7; -[SCCaaSCameraScopeGraphBridgeSaberEntryPoint setCaaSCameraScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc2dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4bfc8;
  func_0x000107c61428(param_1 + _DAT_112e4bfc8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fc2db8; end: 101fc2e17;  */

void FUN_101fc2db8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 101fc2e18; end: 101fc304f;  */

/* WARNING: Possible PIC construction at 0x000101fc2f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc2f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc2fb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc2fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc2fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc3024: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc2fc4) */
/* WARNING: Removing unreachable block (ram,0x000101fc2fb4) */
/* WARNING: Removing unreachable block (ram,0x000101fc2f98) */
/* WARNING: Removing unreachable block (ram,0x000101fc2f88) */
/* WARNING: Removing unreachable block (ram,0x000101fc3028) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc2e18(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c50b40();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c509d8();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c3eed0();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_101fc15bc();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_101fc2298();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101fc3050);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112e4bb48) = lVar5;
        *(long *)(lVar4 + _DAT_112e4bb50) = unaff_x20;
        lStack_80 = lVar4;
        lStack_78 = lVar6;
        func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 101fc3050; end: 101fc3077; -[SCCaaSCameraScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101fc3050(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fc2e18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fc3078; end: 101fc30bb; -[SCCaaSCameraScopeGraphBridgeSaberEntryPoint end] */

void FUN_101fc3078(undefined8 param_1)

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



/* Entry: 101fc30bc; end: 101fc332b;  */

void FUN_101fc30bc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0faf8f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010f050710,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000019;
        if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef0faf8d0)) ||
           (func_0x000107c605b8(0xd000000000000019,0x800000010f050730,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c57f80();
        }
        else {
          uVar2 = 0xd000000000000029;
          if (((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0faf8b0)) &&
             (func_0x000107c605b8(0xd000000000000029,0x800000010f050750,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "CaaSCameraScopeGraphBridge/SCCaaSCameraScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x4c,2,0x40,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc332c);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52ef8();
        }
        goto LAB_101fc3148;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c580e8();
  }
LAB_101fc3148:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101fc332c; end: 101fc33d7; -[SCCaaSCameraScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101fc332c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101fc30bc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fc33d8; end: 101fc345b; -[SCCaaSCameraScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc33d8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4bfb0,0);
  *(undefined8 *)(param_1 + _DAT_112e4bfb8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4bfc0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4bfc8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4bfd0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fc345c; end: 101fc348f;  */

void FUN_101fc345c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fc3490; end: 101fc34f7; -[SCCaaSCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fc34bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc34dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc34c0) */
/* WARNING: Removing unreachable block (ram,0x000101fc34e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc3490(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4bfb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4bfb8));
  return;
}



/* Entry: 101fc34f8; end: 101fc3517;  */

void FUN_101fc34f8(void)

{
  func_0x000107c61168(&PTR_PTR_1128124c0);
  return;
}



/* Entry: 101fc3518; end: 101fc3523; -[SCCaaSCameraCameraUIServiceSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc3518(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c000;
  func_0x000107c61428(param_1 + _DAT_112e4c000,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc3524; end: 101fc352f; -[SCCaaSCameraCameraUIServiceSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc3524(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c000;
  func_0x000107c61428(param_1 + _DAT_112e4c000,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc3530; end: 101fc353b; -[SCCaaSCameraCameraUIServiceSaberEntryPoint caaSCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc3530(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c008;
  func_0x000107c61428(param_1 + _DAT_112e4c008,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc353c; end: 101fc357f;  */

void FUN_101fc353c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc3580; end: 101fc358b; -[SCCaaSCameraCameraUIServiceSaberEntryPoint setCaaSCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc3580(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c008;
  func_0x000107c61428(param_1 + _DAT_112e4c008,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


