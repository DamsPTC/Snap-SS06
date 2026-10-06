/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f95dac; end: 101f95db3;  */

void FUN_101f95dac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f95db4; end: 101f95de7; -[SCSCSpectaclesOnboardingScopedServicesSaberEntryPoint end] */

void FUN_101f95db4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f95c34();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f95de8; end: 101f95f07;  */

void FUN_101f95de8(long param_1,long param_2,long param_3)

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
                        "SpectaclesOnboardingScopeGraphBridge/SCSCSpectaclesOnboardingScopedServicesSaberEntryPoint.swift"
                        ,0x60,2,0x2f,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f95f08);
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



/* Entry: 101f95f08; end: 101f95fb3; -[SCSCSpectaclesOnboardingScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f95f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f95de8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f95fb4; end: 101f96013; -[SCSCSpectaclesOnboardingScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f95fb4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e485b0,0);
  *(undefined8 *)(param_1 + _DAT_112e485b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f96014; end: 101f96047;  */

void FUN_101f96014(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f96048; end: 101f9607f; -[SCSCSpectaclesOnboardingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f96048(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e485b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e485b8));
  return;
}



/* Entry: 101f96080; end: 101f9609f;  */

void FUN_101f96080(void)

{
  func_0x000107c61168(&PTR_PTR_1128107d0);
  return;
}



/* Entry: 101f960a0; end: 101f9610b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f960a0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f96494();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e485f0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101f9610c; end: 101f96177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f9610c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e485f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f96178; end: 101f961d7; -[_TtC49SpectaclesPostPairingScopedFactoryServiceProvider37SCSpectaclesPostPairingScopedServices init] */

void FUN_101f96178(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesPostPairingScopedFactoryServiceProvider.SCSpectaclesPostPairingScopedServices"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f961a4);
  (*pcVar1)();
}



/* Entry: 101f961d8; end: 101f961e7; -[_TtC49SpectaclesPostPairingScopedFactoryServiceProvider37SCSpectaclesPostPairingScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f961d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e485f0));
  return;
}



/* Entry: 101f961e8; end: 101f96253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f961e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104ae898;
  func_0x000107c613fc(&UNK_1104ae898,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101f96570,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f96254; end: 101f962ef;  */

void FUN_101f96254(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104ae7a8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104ae7a8;
  return;
}



/* Entry: 101f962f0; end: 101f96327;  */

void FUN_101f962f0(long *param_1)

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



/* Entry: 101f96328; end: 101f9632f;  */

undefined8 FUN_101f96328(void)

{
  return 0x1b;
}



/* Entry: 101f96330; end: 101f96463;  */

void FUN_101f96330(undefined8 *param_1)

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
  puVar1 = &UNK_1104ae8c0;
  func_0x000107c613fc(&UNK_1104ae8c0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f96548;
  func_0x00010058fa64(FUN_101f96548,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f96464; end: 101f96493;  */

undefined ** FUN_101f96464(void)

{
  return &PTR_DAT_112e48908;
}



/* Entry: 101f96494; end: 101f964b3;  */

void FUN_101f96494(void)

{
  func_0x000107c61168(&PTR_PTR_112810890);
  return;
}



/* Entry: 101f964b4; end: 101f96503;  */

undefined1  [16] FUN_101f964b4(void)

{
  return ZEXT816(0x1104ae7f8);
}



/* Entry: 101f96504; end: 101f96547;  */

void FUN_101f96504(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e48658 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9c08;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e48658 = puVar1;
  return;
}



/* Entry: 101f96548; end: 101f9656f;  */

void FUN_101f96548(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101f96570; end: 101f96573;  */

void FUN_101f96570(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f96574; end: 101f96663;  */

/* WARNING: Possible PIC construction at 0x000101f96624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f96634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f96644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f96638) */
/* WARNING: Removing unreachable block (ram,0x000101f96628) */
/* WARNING: Removing unreachable block (ram,0x000101f96648) */

void FUN_101f96574(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104ae948;
  func_0x000107c613fc(&UNK_1104ae948,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  uVar2 = 0x112e48668;
  func_0x0001000285a8(0x112e48668,&UNK_10da3eea8);
  func_0x000107c613fc();
  pcVar3 = FUN_101f96a88;
  func_0x0001000841fc(FUN_101f96a88,puVar1,uVar2);
  func_0x000100084214(&UNK_10da3ee70,0x33,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101f96664; end: 101f96683;  */

/* WARNING: Possible PIC construction at 0x000101f96624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f96634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f96644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f96638) */
/* WARNING: Removing unreachable block (ram,0x000101f96628) */
/* WARNING: Removing unreachable block (ram,0x000101f96648) */

void FUN_101f96664(undefined8 *param_1)

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
  puVar6 = &UNK_1104ae948;
  func_0x000107c613fc(&UNK_1104ae948,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  uVar7 = 0x112e48668;
  func_0x0001000285a8(0x112e48668,&UNK_10da3eea8);
  func_0x000107c613fc();
  pcVar8 = FUN_101f96a88;
  func_0x0001000841fc(FUN_101f96a88,puVar6,uVar7);
  func_0x000100084214(&UNK_10da3ee70,0x33,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101f96684; end: 101f96a3b;  */

void FUN_101f96684(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  func_0x0001000285a8(0x112e48670,&UNK_10da3eeb0);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101f98090();
  func_0x000100082720("SCSpectaclesPairingScopeV2ExposerSubjectServiceProvider",0x37,2);
  puVar3 = puVar2;
  FUN_101f9811c();
  func_0x000100082720("SCSpectaclesPairingScopeV2ExposerObservableServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101f962f0;
  func_0x0001000823a8(FUN_101f962f0,0);
  func_0x000100082720("SCSpectaclesPostPairingScopedServicesCleanupRelayServiceProvider",0x40,2);
  puVar5 = puVar2;
  FUN_101f97f44();
  func_0x000100082720("SpectaclesPostPairingScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e48678,&UNK_10da3eec0);
  puVar6 = &UNK_1104ae970;
  func_0x000107c613fc(&UNK_1104ae970,0x50,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 *)(puVar6 + 0x38) = param_7;
  *(undefined8 *)(puVar6 + 0x40) = param_8;
  *(undefined8 **)(puVar6 + 0x48) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x101f96a98;
  func_0x0001000823a8(0x101f96a98,puVar6);
  func_0x000100082720("SCSpectaclesPostPairingEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e48680,&UNK_10da3eec8);
  puVar6 = &UNK_1104ae998;
  func_0x000107c613fc(&UNK_1104ae998,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  uVar7 = 0x101f96aac;
  func_0x0001000823a8(0x101f96aac,puVar6);
  func_0x000100082720("SCSpectaclesPostPairingScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112e485f8,&UNK_10da3ec00);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x101f96ab8;
  func_0x0001000823a8(0x101f96ab8,uVar7);
  func_0x000100082720("SCSpectaclesPostPairingScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e485e8,&UNK_10da3ebf0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x101f96ac0;
  func_0x0001000823a8(0x101f96ac0,uVar8);
  func_0x000100082720("SCSpectaclesPostPairingScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1104ae9c0;
  func_0x000107c613fc(&UNK_1104ae9c0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x101f96ac8;
  func_0x0001000823a8(0x101f96ac8,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCSpectaclesPostPairingScopeEntryPointProvider",0x2e,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 101f96a3c; end: 101f96a87;  */

void FUN_101f96a3c(void)

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



/* Entry: 101f96a88; end: 101f96acf;  */

void FUN_101f96a88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar13 = *param_2;
  func_0x0001000285a8(0x112e48670,&UNK_10da3eeb0);
  puVar3 = &uStack_68;
  uStack_68 = uVar13;
  func_0x0001000838ec();
  puVar4 = puVar3;
  FUN_101f98090();
  func_0x000100082720("SCSpectaclesPairingScopeV2ExposerSubjectServiceProvider",0x37,2);
  puVar5 = puVar4;
  FUN_101f9811c();
  func_0x000100082720("SCSpectaclesPairingScopeV2ExposerObservableServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_101f962f0;
  func_0x0001000823a8(FUN_101f962f0,0);
  func_0x000100082720("SCSpectaclesPostPairingScopedServicesCleanupRelayServiceProvider",0x40,2);
  puVar7 = puVar4;
  FUN_101f97f44();
  func_0x000100082720("SpectaclesPostPairingScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e48678,&UNK_10da3eec0);
  puVar8 = &UNK_1104ae970;
  func_0x000107c613fc(&UNK_1104ae970,0x50,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar3;
  *(undefined8 *)(puVar8 + 0x18) = uVar9;
  *(undefined8 *)(puVar8 + 0x20) = uVar12;
  *(undefined8 *)(puVar8 + 0x28) = uVar10;
  *(undefined8 *)(puVar8 + 0x30) = uVar1;
  *(undefined8 *)(puVar8 + 0x38) = uVar11;
  *(undefined8 *)(puVar8 + 0x40) = uVar2;
  *(undefined8 **)(puVar8 + 0x48) = puVar5;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(puVar5);
  uVar9 = 0x101f96a98;
  func_0x0001000823a8(0x101f96a98,puVar8);
  func_0x000100082720("SCSpectaclesPostPairingEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e48680,&UNK_10da3eec8);
  puVar8 = &UNK_1104ae998;
  func_0x000107c613fc(&UNK_1104ae998,0x30,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar9;
  *(undefined8 **)(puVar8 + 0x18) = puVar3;
  *(code **)(puVar8 + 0x20) = pcVar6;
  *(undefined8 **)(puVar8 + 0x28) = puVar7;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(puVar7);
  uVar10 = 0x101f96aac;
  func_0x0001000823a8(0x101f96aac,puVar8);
  func_0x000100082720("SCSpectaclesPostPairingScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112e485f8,&UNK_10da3ec00);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x101f96ab8;
  func_0x0001000823a8(0x101f96ab8,uVar10);
  func_0x000100082720("SCSpectaclesPostPairingScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e485e8,&UNK_10da3ebf0);
  func_0x000107c6157c(uVar11);
  uVar12 = 0x101f96ac0;
  func_0x0001000823a8(0x101f96ac0,uVar11);
  func_0x000100082720("SCSpectaclesPostPairingScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar8 = &UNK_1104ae9c0;
  func_0x000107c613fc(&UNK_1104ae9c0,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar12;
  *(code **)(puVar8 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar12 = 0x101f96ac8;
  func_0x0001000823a8(0x101f96ac8,puVar8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000100082720("SCSpectaclesPostPairingScopeEntryPointProvider",0x2e,2);
  *param_1 = uVar12;
  return;
}



/* Entry: 101f96ad0; end: 101f9747b;  */

void FUN_101f96ad0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_a0;
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
  func_0x000100083b20(&uStack_a0);
  FUN_101f975fc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  func_0x0001000285a8(0x112e48688,&UNK_10da3eed8);
  func_0x000107c610f8();
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
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x18) = puVar7;
  puVar7 = PTR_PTR_1126a9c10;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar7;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f026520);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f022250);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar7);
  uVar9 = 0x6553726579616c70;
  func_0x000107c5fadc(0x6553726579616c70,0xee00736563697672);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f026540);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uStack_a0);
  *param_1 = param_2;
  return;
}



/* Entry: 101f9747c; end: 101f974ef;  */

void FUN_101f9747c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101f974f0; end: 101f974f7;  */

undefined8 FUN_101f974f0(void)

{
  return 0x1b;
}



/* Entry: 101f974f8; end: 101f9757b;  */

void FUN_101f974f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f9763c,param_2,FUN_101f97640,param_2,FUN_101f97668,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f9757c; end: 101f975cb;  */

undefined8 FUN_101f9757c(void)

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



/* Entry: 101f975cc; end: 101f975fb;  */

void FUN_101f975cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104ae9d8;
  return;
}



/* Entry: 101f975fc; end: 101f9761b;  */

void FUN_101f975fc(void)

{
  func_0x000107c61168(&PTR_PTR_112e486f8);
  return;
}



/* Entry: 101f9761c; end: 101f9763f;  */

undefined1  [16] FUN_101f9761c(void)

{
  return ZEXT816(0x1104aea18);
}



/* Entry: 101f97640; end: 101f97667;  */

void FUN_101f97640(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f97668; end: 101f9766f;  */

undefined8 FUN_101f97668(void)

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



/* Entry: 101f97670; end: 101f976ab;  */

void FUN_101f97670(undefined8 *param_1,undefined8 param_2)

{
  FUN_101f976ac();
  func_0x0001000a7f38("SCSpectaclesPostPairingScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101f976ac; end: 101f97897;  */

void FUN_101f976ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1104aedd8;
  ppuVar4 = &PTR_DAT_112e48908;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e48790;
  func_0x0001000285a8(0x112e48790,&UNK_10da3f060);
  func_0x0001000a6ee8(&UNK_1104aea18,
                      "SCSpectaclesPostPairingEntryPointWrapperScopeInitializationPluginKey",0x44,2,
                      FUN_101f9790c,param_1,uVar2,&UNK_1104aea18,&PTR_DAT_112e48690);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104aea68;
  func_0x000107c613fc(&UNK_1104aea68,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104ae838,
                      "SCSpectaclesPostPairingScopedServicesScopeInitializationPluginKey",0x41,2,
                      FUN_101f979bc,puVar3,uVar2,&UNK_1104ae838,&PTR_DAT_112e48600);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104aea90;
  func_0x000107c613fc(&UNK_1104aea90,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104aec88,
                      "SpectaclesPostPairingScopeGraphBridgeScopeInitializationPluginKey",0x41,2,
                      FUN_101f979c4,puVar3,uVar2,&UNK_1104aec88,&PTR_DAT_112e48828);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e48798;
  func_0x0001000285a8(0x112e48798,&UNK_10da3f068);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101f97898; end: 101f9790b;  */

void FUN_101f97898(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101f97a38;
  func_0x0001000823a8(0x101f97a38,param_3);
  func_0x000100082720("SCSpectaclesPostPairingEntryPointWrapperScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f9790c; end: 101f97913;  */

void FUN_101f9790c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101f97a38;
  func_0x0001000823a8();
  func_0x000100082720("SCSpectaclesPostPairingEntryPointWrapperScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f97914; end: 101f979bb;  */

void FUN_101f97914(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104aeab8;
  func_0x000107c613fc(&UNK_1104aeab8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101f97a30;
  func_0x0001000823a8(FUN_101f97a30,puVar1);
  func_0x000100082720("SCSpectaclesPostPairingScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101f979bc; end: 101f979c3;  */

void FUN_101f979bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104aeab8;
  func_0x000107c613fc(&UNK_1104aeab8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101f97a30;
  func_0x0001000823a8(FUN_101f97a30,puVar3);
  func_0x000100082720("SCSpectaclesPostPairingScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101f979c4; end: 101f97a03;  */

void FUN_101f979c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f981c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpectaclesPostPairingScopeGraphBridgeScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f97a04; end: 101f97a2f;  */

void FUN_101f97a04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f97a30; end: 101f97a3f;  */

void FUN_101f97a30(undefined8 *param_1)

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
  puVar1 = &UNK_1104ae8c0;
  func_0x000107c613fc(&UNK_1104ae8c0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f96548;
  func_0x00010058fa64(FUN_101f96548,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f97a40; end: 101f97b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f97a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_101f97e54();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e487a0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e487a8) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f97b1c);
  (*pcVar1)();
}



/* Entry: 101f97b1c; end: 101f97b7b; -[_TtC37SpectaclesPostPairingScopeGraphBridge52SpectaclesPostPairingScopeGraphBridgeSaberEntryPoint init] */

void FUN_101f97b1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesPostPairingScopeGraphBridge.SpectaclesPostPairingScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f97b48);
  (*pcVar1)();
}



/* Entry: 101f97b7c; end: 101f97bb3; -[_TtC37SpectaclesPostPairingScopeGraphBridge52SpectaclesPostPairingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f97b98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f97b9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f97b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e487a0));
  return;
}



/* Entry: 101f97bb4; end: 101f97bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f97bb4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e487a8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e487a0));
  return;
}



/* Entry: 101f97bdc; end: 101f97bfb;  */

void FUN_101f97bdc(void)

{
  func_0x000107c61168(&PTR_PTR_112810950);
  return;
}



/* Entry: 101f97bfc; end: 101f97c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f97bfc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e487d8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e487e0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f97c84);
  (*pcVar2)();
}



/* Entry: 101f97c84; end: 101f97d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f97c84(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e487d8);
  *(undefined **)(unaff_x20 + _DAT_112e487d8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e487e0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e487e0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104aeba8;
  func_0x000107c613fc(&UNK_1104aeba8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101f97d70,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101f97d6c; end: 101f97d77;  */

void FUN_101f97d6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f97d78; end: 101f97dd7; -[_TtC37SpectaclesPostPairingScopeGraphBridge52SCSpectaclesPostPairingScopedServicesSaberEntryPoint init] */

void FUN_101f97d78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesPostPairingScopeGraphBridge.SCSpectaclesPostPairingScopedServicesSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f97da4);
  (*pcVar1)();
}



/* Entry: 101f97dd8; end: 101f97e0f; -[_TtC37SpectaclesPostPairingScopeGraphBridge52SCSpectaclesPostPairingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f97dd8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e487e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e487d8));
  return;
}



/* Entry: 101f97e10; end: 101f97e13;  */

void FUN_101f97e10(void)

{
  return;
}



/* Entry: 101f97e14; end: 101f97e33;  */

void FUN_101f97e14(void)

{
  FUN_101f97c84();
  return;
}



/* Entry: 101f97e34; end: 101f97e53;  */

void FUN_101f97e34(void)

{
  func_0x000107c61168(&PTR_PTR_112810a18);
  return;
}



/* Entry: 101f97e54; end: 101f97f23;  */

undefined8 FUN_101f97e54(void)

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
  
  func_0x000107c61428(0x112e48810,&uStack_40,0x20,0);
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
    FUN_101f97f24();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101f97f24; end: 101f97f43;  */

void FUN_101f97f24(void)

{
  func_0x000107c61168(&PTR_PTR_112810ae0);
  return;
}



/* Entry: 101f97f44; end: 101f97f5f;  */

void FUN_101f97f44(undefined8 param_1)

{
  func_0x0001000285a8(0x112e48818,&UNK_10da3f138);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101f97fcc,param_1);
  return;
}



/* Entry: 101f97f60; end: 101f97fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f97f60(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_101f97f24();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e48820) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101f97fcc; end: 101f97fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f97fcc(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_101f97f24();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e48820) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 101f97fd4; end: 101f9801f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f97fd4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e48820) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f98020; end: 101f9807f; -[_TtC37SpectaclesPostPairingScopeGraphBridge45SpectaclesPostPairingScopeGraphBridgeServices init] */

void FUN_101f98020(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesPostPairingScopeGraphBridge.SpectaclesPostPairingScopeGraphBridgeServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f9804c);
  (*pcVar1)();
}



/* Entry: 101f98080; end: 101f9808f; -[_TtC37SpectaclesPostPairingScopeGraphBridge45SpectaclesPostPairingScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f98080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e48820));
  return;
}



/* Entry: 101f98090; end: 101f9811b;  */

void FUN_101f98090(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101f980d0,0);
  return;
}



/* Entry: 101f9811c; end: 101f98137;  */

void FUN_101f9811c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101f98188,param_1);
  return;
}



/* Entry: 101f98138; end: 101f98187;  */

void FUN_101f98138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 101f98188; end: 101f981bb;  */

void FUN_101f98188(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101f981bc; end: 101f981c3;  */

undefined8 FUN_101f981bc(void)

{
  return 0x1b;
}



/* Entry: 101f981c4; end: 101f9833b;  */

void FUN_101f981c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104aebf0;
  func_0x000107c613fc(&UNK_1104aebf0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101f9833c,puVar1);
  return;
}



/* Entry: 101f9833c; end: 101f98343;  */

void FUN_101f9833c(undefined8 *param_1)

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
  func_0x000107c61428(0x112e48810,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e48810,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104aecc8;
  func_0x000107c613fc(&UNK_1104aecc8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101f98410;
  func_0x00010058fa64(0x101f98410,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f98344; end: 101f9839f;  */

void FUN_101f98344(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e48810,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e48810,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101f983a0; end: 101f98417;  */

undefined ** FUN_101f983a0(void)

{
  return &PTR_DAT_112e48908;
}



/* Entry: 101f98418; end: 101f9845f; -[SCSpectaclesPostPairingScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f98418(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e48878;
  func_0x000107c61428(param_1 + _DAT_112e48878,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f98460; end: 101f984b7; -[SCSpectaclesPostPairingScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f98460(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e48878;
  func_0x000107c61428(param_1 + _DAT_112e48878,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f984b8; end: 101f984ff; -[SCSpectaclesPostPairingScopeGraphBridgeSaberEntryPoint sCSpectaclesPairingScopeV2Exposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f984b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e48880;
  func_0x000107c61428(param_1 + _DAT_112e48880,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f98500; end: 101f9850b; -[SCSpectaclesPostPairingScopeGraphBridgeSaberEntryPoint setSCSpectaclesPairingScopeV2Exposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f98500(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e48880;
  func_0x000107c61428(param_1 + _DAT_112e48880,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f9850c; end: 101f98553; -[SCSpectaclesPostPairingScopeGraphBridgeSaberEntryPoint spectaclesPostPairingScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f9850c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e48888;
  func_0x000107c61428(param_1 + _DAT_112e48888,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f98554; end: 101f9855f; -[SCSpectaclesPostPairingScopeGraphBridgeSaberEntryPoint setSpectaclesPostPairingScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f98554(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e48888;
  func_0x000107c61428(param_1 + _DAT_112e48888,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f98560; end: 101f985bf;  */

void FUN_101f98560(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 101f985c0; end: 101f9877b;  */

/* WARNING: Possible PIC construction at 0x000101f986d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f986fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f9870c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f98750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f98710) */
/* WARNING: Removing unreachable block (ram,0x000101f98700) */
/* WARNING: Removing unreachable block (ram,0x000101f986dc) */
/* WARNING: Removing unreachable block (ram,0x000101f98754) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f985c0(void)

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
  func_0x000107c513c0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5b754();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_101f97bdc();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_101f97e54();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f9877c);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e487a0) = lVar5;
      *(long *)(lVar3 + _DAT_112e487a8) = unaff_x20;
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



/* Entry: 101f9877c; end: 101f987a3; -[SCSpectaclesPostPairingScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101f9877c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f985c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f987a4; end: 101f987e7; -[SCSpectaclesPostPairingScopeGraphBridgeSaberEntryPoint end] */

void FUN_101f987a4(undefined8 param_1)

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



/* Entry: 101f987e8; end: 101f989eb;  */

void FUN_101f987e8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0fd97a0)) {
      uVar2 = 0xd000000000000021;
      func_0x000107c605b8(0xd000000000000021,0x800000010f026860,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffcc) || (param_3 != -0x7ffffffef0fd9770)) &&
           (func_0x000107c605b8(0xd000000000000034,0x800000010f026890,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SpectaclesPostPairingScopeGraphBridge/SCSpectaclesPostPairingScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x62,2,0x3b,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101f989ec);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59618();
        goto LAB_101f98874;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58968();
  }
LAB_101f98874:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f989ec; end: 101f98a97; -[SCSpectaclesPostPairingScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101f989ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f987e8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f98a98; end: 101f98b0f; -[SCSpectaclesPostPairingScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f98a98(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e48878,0);
  *(undefined8 *)(param_1 + _DAT_112e48880) = 0;
  *(undefined8 *)(param_1 + _DAT_112e48888) = 0;
  *(undefined8 *)(param_1 + _DAT_112e48890) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f98b10; end: 101f98b43;  */

void FUN_101f98b10(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f98b44; end: 101f98b9b; -[SCSpectaclesPostPairingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f98b70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f98b74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f98b44(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e48878);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e48880));
  return;
}



/* Entry: 101f98b9c; end: 101f98bbb;  */

void FUN_101f98b9c(void)

{
  func_0x000107c61168(&PTR_PTR_112810ba0);
  return;
}



/* Entry: 101f98bbc; end: 101f98c03; -[SCSCSpectaclesPostPairingScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f98bbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e488c0;
  func_0x000107c61428(param_1 + _DAT_112e488c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f98c04; end: 101f98c5b; -[SCSCSpectaclesPostPairingScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f98c04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e488c0;
  func_0x000107c61428(param_1 + _DAT_112e488c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f98c5c; end: 101f98d33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f98c5c(undefined8 param_1,long param_2)

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
    FUN_101f97e34();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e487d8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f98d34);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e487e0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e488c8);
    *(long **)(unaff_x20 + _DAT_112e488c8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101f98d34; end: 101f98d5b; -[SCSCSpectaclesPostPairingScopedServicesSaberEntryPoint begin] */

void FUN_101f98d34(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f98c5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f98d5c; end: 101f98ed3;  */

/* WARNING: Possible PIC construction at 0x000101f98dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f98e5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f98dc8) */
/* WARNING: Removing unreachable block (ram,0x000101f98e60) */
/* WARNING: Removing unreachable block (ram,0x000101f98e78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f98d5c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e488c8);
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



/* Entry: 101f98ed4; end: 101f98edb;  */

void FUN_101f98ed4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f98edc; end: 101f98f0f; -[SCSCSpectaclesPostPairingScopedServicesSaberEntryPoint end] */

void FUN_101f98edc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f98d5c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


