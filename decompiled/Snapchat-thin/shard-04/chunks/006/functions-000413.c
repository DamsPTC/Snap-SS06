/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036ebb94; end: 1036ebbb3;  */

void FUN_1036ebb94(void)

{
  func_0x000107c61168(&PTR_PTR_112f88af0);
  return;
}



/* Entry: 1036ebbb4; end: 1036ebbd7;  */

undefined1  [16] FUN_1036ebbb4(void)

{
  return ZEXT816(0x110683b48);
}



/* Entry: 1036ebbd8; end: 1036ebbff;  */

void FUN_1036ebbd8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1036ebc00; end: 1036ebc07;  */

undefined8 FUN_1036ebc00(void)

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



/* Entry: 1036ebc08; end: 1036ebcc7;  */

void FUN_1036ebc08(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_1036ebfc0();
  func_0x000107c613fc();
  FUN_1036ebcc8(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 1036ebcc8; end: 1036ebe2b;  */

void FUN_1036ebcc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126ad4b8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f15b000);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f066b30);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 1036ebe2c; end: 1036ebe5f;  */

void FUN_1036ebe2c(void)

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



/* Entry: 1036ebe60; end: 1036ebeb3;  */

void FUN_1036ebe60(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036ebeb4; end: 1036ebebb;  */

undefined8 FUN_1036ebeb4(void)

{
  return 0x1b;
}



/* Entry: 1036ebebc; end: 1036ebf3f;  */

void FUN_1036ebebc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1036ec010,param_2,FUN_1036ec014,param_2,FUN_1036ec03c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1036ebf40; end: 1036ebf8f;  */

undefined8 FUN_1036ebf40(void)

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



/* Entry: 1036ebf90; end: 1036ebfbf;  */

undefined ** FUN_1036ebf90(void)

{
  return &PTR_DAT_112f89288;
}



/* Entry: 1036ebfc0; end: 1036ebfdf;  */

void FUN_1036ebfc0(void)

{
  func_0x000107c61168(&PTR_PTR_112f88c08);
  return;
}



/* Entry: 1036ebfe0; end: 1036ec013;  */

undefined1  [16] FUN_1036ebfe0(void)

{
  return ZEXT816(0x110683bc8);
}



/* Entry: 1036ec014; end: 1036ec03b;  */

void FUN_1036ec014(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1036ec03c; end: 1036ec043;  */

undefined8 FUN_1036ec03c(void)

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



/* Entry: 1036ec044; end: 1036ec2ab;  */

void FUN_1036ec044(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110684700;
  ppuVar4 = &PTR_DAT_112f89288;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112f88c78;
  func_0x0001000285a8(0x112f88c78,&UNK_10dbfd148);
  func_0x0001000a6ee8(&UNK_110683b48,
                      "SCSpectaclesCustomExportEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,FUN_1036ec2ac,param_2,uVar2,&UNK_110683b48,&PTR_DAT_112f88a88);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110683be8,
                      "SCSpectaclesCustomExportScopedMemoriesActivityServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x60,2,FUN_1036ec35c,param_3,uVar2,&UNK_110683be8,&PTR_DAT_112f88ba0);
  func_0x000107c61574(param_3);
  puVar3 = &UNK_110683c38;
  func_0x000107c613fc(&UNK_110683c38,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_110683940,
                      "SCSpectaclesCustomExportScopedServicesScopeInitializationPluginKey",0x42,2,
                      FUN_1036ec430,puVar3,uVar2,&UNK_110683940,&PTR_DAT_112f889e8);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110683c60;
  func_0x000107c613fc(&UNK_110683c60,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_110683f08,
                      "SpectaclesCustomExportScopeGraphBridgeScopeInitializationPluginKey",0x42,2,
                      FUN_1036ec438,puVar3,uVar2,&UNK_110683f08,&PTR_DAT_112f88df0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f88c80;
  func_0x0001000285a8(0x112f88c80,&UNK_10dbfd150);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCSpectaclesCustomExportScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1036ec2ac; end: 1036ec2d7;  */

void FUN_1036ec2ac(void)

{
  FUN_1036ec2d8();
  return;
}



/* Entry: 1036ec2d8; end: 1036ec35b;  */

void FUN_1036ec2d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 1036ec35c; end: 1036ec387;  */

void FUN_1036ec35c(void)

{
  FUN_1036ec2d8();
  return;
}



/* Entry: 1036ec388; end: 1036ec42f;  */

void FUN_1036ec388(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110683c88;
  func_0x000107c613fc(&UNK_110683c88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1036ec4a4;
  func_0x0001000823a8(FUN_1036ec4a4,puVar1);
  func_0x000100082720("SCSpectaclesCustomExportScopedServicesScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1036ec430; end: 1036ec437;  */

void FUN_1036ec430(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110683c88;
  func_0x000107c613fc(&UNK_110683c88,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1036ec4a4;
  func_0x0001000823a8(FUN_1036ec4a4,puVar3);
  func_0x000100082720("SCSpectaclesCustomExportScopedServicesScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1036ec438; end: 1036ec477;  */

void FUN_1036ec438(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1036ecf04(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpectaclesCustomExportScopeGraphBridgeScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1036ec478; end: 1036ec4a3;  */

void FUN_1036ec478(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036ec4a4; end: 1036ec4bb;  */

void FUN_1036ec4a4(undefined8 *param_1)

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
  puVar1 = &UNK_1106839c8;
  func_0x000107c613fc(&UNK_1106839c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1036ea514;
  func_0x00010058fa64(FUN_1036ea514,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036ec4bc; end: 1036ec5d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1036ec4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1036eca38();
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
    *(long *)(unaff_x20 + _DAT_112f88c88) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112f88c90) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036ec5d4);
  (*pcVar2)();
}



/* Entry: 1036ec5d4; end: 1036ec633; -[_TtC38SpectaclesCustomExportScopeGraphBridge53SpectaclesCustomExportScopeGraphBridgeSaberEntryPoint init] */

void FUN_1036ec5d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesCustomExportScopeGraphBridge.SpectaclesCustomExportScopeGraphBridgeSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ec600);
  (*pcVar1)();
}



/* Entry: 1036ec634; end: 1036ec66b; -[_TtC38SpectaclesCustomExportScopeGraphBridge53SpectaclesCustomExportScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036ec650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036ec654) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ec634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f88c88));
  return;
}



/* Entry: 1036ec66c; end: 1036ec693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ec66c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f88c90),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f88c88));
  return;
}



/* Entry: 1036ec694; end: 1036ec6b3;  */

void FUN_1036ec694(void)

{
  func_0x000107c61168(&PTR_PTR_1128e3aa8);
  return;
}



/* Entry: 1036ec6b4; end: 1036ec717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036ec6b4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f88de0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1036ec718; end: 1036ec71f;  */

void FUN_1036ec718(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036ec720; end: 1036ec7bf;  */

void FUN_1036ec720(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036ec7c0; end: 1036ec7df;  */

void FUN_1036ec7c0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1036ec7e0; end: 1036ec867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036ec7e0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f88d90) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f88d98);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036ec868);
  (*pcVar2)();
}



/* Entry: 1036ec868; end: 1036ec94f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036ec868(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f88d90);
  *(undefined **)(unaff_x20 + _DAT_112f88d90) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f88d98);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f88d98))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110683dc0;
  func_0x000107c613fc(&UNK_110683dc0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1036ec954,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1036ec950; end: 1036ec95b;  */

void FUN_1036ec950(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1036ec95c; end: 1036ec9bb; -[_TtC38SpectaclesCustomExportScopeGraphBridge53SCSpectaclesCustomExportScopedServicesSaberEntryPoint init] */

void FUN_1036ec95c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesCustomExportScopeGraphBridge.SCSpectaclesCustomExportScopedServicesSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ec988);
  (*pcVar1)();
}



/* Entry: 1036ec9bc; end: 1036ec9f3; -[_TtC38SpectaclesCustomExportScopeGraphBridge53SCSpectaclesCustomExportScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ec9bc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f88d98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f88d90));
  return;
}



/* Entry: 1036ec9f4; end: 1036ec9f7;  */

void FUN_1036ec9f4(void)

{
  return;
}



/* Entry: 1036ec9f8; end: 1036eca17;  */

void FUN_1036ec9f8(void)

{
  FUN_1036ec868();
  return;
}



/* Entry: 1036eca18; end: 1036eca37;  */

void FUN_1036eca18(void)

{
  func_0x000107c61168(&PTR_PTR_1128e3b70);
  return;
}



/* Entry: 1036eca38; end: 1036ecb07;  */

undefined8 FUN_1036eca38(void)

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
  
  func_0x000107c61428(0x112f88dc8,&uStack_40,0x20,0);
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
    FUN_1036ecb08();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1036ecb08; end: 1036ecb27;  */

void FUN_1036ecb08(void)

{
  func_0x000107c61168(&PTR_PTR_1128e3c38);
  return;
}



/* Entry: 1036ecb28; end: 1036ecc63;  */

void FUN_1036ecb28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f88dd0,&UNK_10dbfd288);
  puVar1 = &UNK_110683e08;
  func_0x000107c613fc(&UNK_110683e08,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1036ecc64,puVar1);
  return;
}



/* Entry: 1036ecc64; end: 1036ecc6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ecc64(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_1036ecb08();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112f88dd8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112f88de0) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112f88de8) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1036ecc70; end: 1036ecce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ecc70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f88dd8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f88de0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f88de8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036ecce4; end: 1036ecd43; -[_TtC38SpectaclesCustomExportScopeGraphBridge46SpectaclesCustomExportScopeGraphBridgeServices init] */

void FUN_1036ecce4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesCustomExportScopeGraphBridge.SpectaclesCustomExportScopeGraphBridgeServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ecd10);
  (*pcVar1)();
}



/* Entry: 1036ecd44; end: 1036ecdcb; -[_TtC38SpectaclesCustomExportScopeGraphBridge46SpectaclesCustomExportScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036ecd60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036ecd64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ecd44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f88de0));
  return;
}



/* Entry: 1036ecdcc; end: 1036ecdd7;  */

void FUN_1036ecdcc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1036ed178,param_1);
  return;
}



/* Entry: 1036ecdd8; end: 1036ece63;  */

void FUN_1036ecdd8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1036ed180,0);
  return;
}



/* Entry: 1036ece64; end: 1036ece6f;  */

void FUN_1036ece64(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1036ecec8,param_1);
  return;
}



/* Entry: 1036ece70; end: 1036ecec7;  */

void FUN_1036ece70(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1036ecec8; end: 1036ecefb;  */

void FUN_1036ecec8(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1036ecefc; end: 1036ecf03;  */

undefined8 FUN_1036ecefc(void)

{
  return 0x1b;
}



/* Entry: 1036ecf04; end: 1036ed07b;  */

void FUN_1036ecf04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110683e30;
  func_0x000107c613fc(&UNK_110683e30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1036ed07c,puVar1);
  return;
}



/* Entry: 1036ed07c; end: 1036ed083;  */

void FUN_1036ed07c(undefined8 *param_1)

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
  func_0x000107c61428(0x112f88dc8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f88dc8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110683f48;
  func_0x000107c613fc(&UNK_110683f48,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1036ed170;
  func_0x00010058fa64(0x1036ed170,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1036ed084; end: 1036ed0df;  */

void FUN_1036ed084(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f88dc8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f88dc8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1036ed0e0; end: 1036ed183;  */

undefined ** FUN_1036ed0e0(void)

{
  return &PTR_DAT_112f89288;
}



/* Entry: 1036ed184; end: 1036ed1cb; -[SCSpectaclesCustomExportScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ed184(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f88e40;
  func_0x000107c61428(param_1 + _DAT_112f88e40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036ed1cc; end: 1036ed223; -[SCSpectaclesCustomExportScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ed1cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f88e40;
  func_0x000107c61428(param_1 + _DAT_112f88e40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036ed224; end: 1036ed26b; -[SCSpectaclesCustomExportScopeGraphBridgeSaberEntryPoint sCMemoriesSnapVideoFilterScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ed224(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f88e48;
  func_0x000107c61428(param_1 + _DAT_112f88e48,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1036ed26c; end: 1036ed277; -[SCSpectaclesCustomExportScopeGraphBridgeSaberEntryPoint setSCMemoriesSnapVideoFilterScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ed26c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f88e48;
  func_0x000107c61428(param_1 + _DAT_112f88e48,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1036ed278; end: 1036ed2bf; -[SCSpectaclesCustomExportScopeGraphBridgeSaberEntryPoint sCSpectaclesCustomExportUIScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ed278(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f88e50;
  func_0x000107c61428(param_1 + _DAT_112f88e50,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1036ed2c0; end: 1036ed2cb; -[SCSpectaclesCustomExportScopeGraphBridgeSaberEntryPoint setSCSpectaclesCustomExportUIScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ed2c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f88e50;
  func_0x000107c61428(param_1 + _DAT_112f88e50,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1036ed2cc; end: 1036ed313; -[SCSpectaclesCustomExportScopeGraphBridgeSaberEntryPoint spectaclesCustomExportScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ed2cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f88e58;
  func_0x000107c61428(param_1 + _DAT_112f88e58,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1036ed314; end: 1036ed31f; -[SCSpectaclesCustomExportScopeGraphBridgeSaberEntryPoint setSpectaclesCustomExportScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ed314(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f88e58;
  func_0x000107c61428(param_1 + _DAT_112f88e58,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1036ed320; end: 1036ed37f;  */

void FUN_1036ed320(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1036ed380; end: 1036ed5b7;  */

/* WARNING: Possible PIC construction at 0x0001036ed4ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036ed4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036ed518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036ed528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036ed544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036ed58c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036ed52c) */
/* WARNING: Removing unreachable block (ram,0x0001036ed51c) */
/* WARNING: Removing unreachable block (ram,0x0001036ed500) */
/* WARNING: Removing unreachable block (ram,0x0001036ed4f0) */
/* WARNING: Removing unreachable block (ram,0x0001036ed590) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ed380(void)

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
  func_0x000107c51074();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c5134c();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c5b6f0();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_1036ec694();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_1036eca38();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1036ed5b8);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112f88c88) = lVar5;
        *(long *)(lVar4 + _DAT_112f88c90) = unaff_x20;
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



/* Entry: 1036ed5b8; end: 1036ed5df; -[SCSpectaclesCustomExportScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1036ed5b8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036ed380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036ed5e0; end: 1036ed623; -[SCSpectaclesCustomExportScopeGraphBridgeSaberEntryPoint end] */

void FUN_1036ed5e0(undefined8 param_1)

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



/* Entry: 1036ed624; end: 1036ed893;  */

void FUN_1036ed624(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0f986c0)) {
      uVar2 = 0xd000000000000025;
      func_0x000107c605b8(0xd000000000000025,0x800000010f067940,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef0ea4b20)) ||
           (func_0x000107c605b8(0xd000000000000026,0x800000010f15b4e0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c588f4();
        }
        else {
          uVar2 = 0xd000000000000035;
          if (((param_2 != -0x2fffffffffffffcb) || (param_3 != -0x7ffffffef0ea4af0)) &&
             (func_0x000107c605b8(0xd000000000000035,0x800000010f15b510,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SpectaclesCustomExportScopeGraphBridge/SCSpectaclesCustomExportScopeGraphBridgeSaberEntryPoint.swift"
                                ,100,2,0x42,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ed894);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c595d0();
        }
        goto LAB_1036ed6b0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5861c();
  }
LAB_1036ed6b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1036ed894; end: 1036ed93f; -[SCSpectaclesCustomExportScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1036ed894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1036ed624(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1036ed940; end: 1036ed9c3; -[SCSpectaclesCustomExportScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ed940(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f88e40,0);
  *(undefined8 *)(param_1 + _DAT_112f88e48) = 0;
  *(undefined8 *)(param_1 + _DAT_112f88e50) = 0;
  *(undefined8 *)(param_1 + _DAT_112f88e58) = 0;
  *(undefined8 *)(param_1 + _DAT_112f88e60) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036ed9c4; end: 1036ed9f7;  */

void FUN_1036ed9c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036ed9f8; end: 1036eda5f; -[SCSpectaclesCustomExportScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036eda24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036eda44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036eda28) */
/* WARNING: Removing unreachable block (ram,0x0001036eda48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ed9f8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f88e40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f88e48));
  return;
}



/* Entry: 1036eda60; end: 1036eda7f;  */

void FUN_1036eda60(void)

{
  func_0x000107c61168(&PTR_PTR_1128e3d08);
  return;
}



/* Entry: 1036eda80; end: 1036eda8b; -[SCSCSpectaclesCustomExportScopedMemoriesActivityServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036eda80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f88e90;
  func_0x000107c61428(param_1 + _DAT_112f88e90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036eda8c; end: 1036eda97; -[SCSCSpectaclesCustomExportScopedMemoriesActivityServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036eda8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f88e90;
  func_0x000107c61428(param_1 + _DAT_112f88e90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036eda98; end: 1036edaa3; -[SCSCSpectaclesCustomExportScopedMemoriesActivityServicesSaberServiceProvider spectaclesCustomExportScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036eda98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f88e98;
  func_0x000107c61428(param_1 + _DAT_112f88e98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036edaa4; end: 1036edae7;  */

void FUN_1036edaa4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1036edae8; end: 1036edaf3; -[SCSCSpectaclesCustomExportScopedMemoriesActivityServicesSaberServiceProvider setSpectaclesCustomExportScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036edae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f88e98;
  func_0x000107c61428(param_1 + _DAT_112f88e98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036edaf4; end: 1036edb47;  */

void FUN_1036edaf4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036edb48; end: 1036edd5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036edb48(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5b6ec();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001036ec744();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f88de0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f88ea0);
      *(long *)(unaff_x20 + _DAT_112f88ea0) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "SpectaclesCustomExportScopeGraphBridge/SCSCSpectaclesCustomExportScopedMemoriesActivityServicesSaberServiceProvider.swift"
                      ,0x79,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036edc74);
  (*pcVar1)();
}



/* Entry: 1036edd5c; end: 1036edd8f; -[SCSCSpectaclesCustomExportScopedMemoriesActivityServicesSaberServiceProvider provide] */

void FUN_1036edd5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1036edb48();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036edd90; end: 1036eddc3; -[SCSCSpectaclesCustomExportScopedMemoriesActivityServicesSaberServiceProvider __safeProvide] */

void FUN_1036edd90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001036edc74();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036eddc4; end: 1036ede07; -[SCSCSpectaclesCustomExportScopedMemoriesActivityServicesSaberServiceProvider end] */

void FUN_1036eddc4(undefined8 param_1)

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



/* Entry: 1036ede08; end: 1036edf9f;  */

void FUN_1036ede08(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0ea49c0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f15b640,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpectaclesCustomExportScopeGraphBridge/SCSCSpectaclesCustomExportScopedMemoriesActivityServicesSaberServiceProvider.swift"
                            ,0x79,2,0x40,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036edfa0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595cc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1036edfa0; end: 1036ee04b; -[SCSCSpectaclesCustomExportScopedMemoriesActivityServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1036edfa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1036ede08(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1036ee04c; end: 1036ee0bf; -[SCSCSpectaclesCustomExportScopedMemoriesActivityServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ee04c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f88e90,0);
  func_0x000107c61614(param_1 + _DAT_112f88e98,0);
  *(undefined8 *)(param_1 + _DAT_112f88ea0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036ee0c0; end: 1036ee0f3;  */

void FUN_1036ee0c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036ee0f4; end: 1036ee13b; -[SCSCSpectaclesCustomExportScopedMemoriesActivityServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ee0f4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f88e90);
  func_0x000107c61610(param_1 + _DAT_112f88e98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f88ea0));
  return;
}



/* Entry: 1036ee13c; end: 1036ee15b;  */

void FUN_1036ee13c(void)

{
  func_0x000107c61168(&PTR_PTR_112f88ee8);
  return;
}



/* Entry: 1036ee15c; end: 1036ee1a3; -[SCSCSpectaclesCustomExportScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ee15c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f88f50;
  func_0x000107c61428(param_1 + _DAT_112f88f50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036ee1a4; end: 1036ee1fb; -[SCSCSpectaclesCustomExportScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ee1a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f88f50;
  func_0x000107c61428(param_1 + _DAT_112f88f50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1036ee1fc; end: 1036ee2d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ee1fc(undefined8 param_1,long param_2)

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
    FUN_1036eca18();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f88d90) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036ee2d4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f88d98);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f88f58);
    *(long **)(unaff_x20 + _DAT_112f88f58) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1036ee2d4; end: 1036ee2fb; -[SCSCSpectaclesCustomExportScopedServicesSaberEntryPoint begin] */

void FUN_1036ee2d4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1036ee1fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036ee2fc; end: 1036ee473;  */

/* WARNING: Possible PIC construction at 0x0001036ee364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036ee3fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036ee368) */
/* WARNING: Removing unreachable block (ram,0x0001036ee400) */
/* WARNING: Removing unreachable block (ram,0x0001036ee418) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ee2fc(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f88f58);
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



/* Entry: 1036ee474; end: 1036ee47b;  */

void FUN_1036ee474(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1036ee47c; end: 1036ee4af; -[SCSCSpectaclesCustomExportScopedServicesSaberEntryPoint end] */

void FUN_1036ee47c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1036ee2fc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


