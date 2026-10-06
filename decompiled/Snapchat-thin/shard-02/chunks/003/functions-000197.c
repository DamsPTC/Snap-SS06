/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b337d0; end: 101b33947;  */

/* WARNING: Possible PIC construction at 0x000101b33838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b338d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b3383c) */
/* WARNING: Removing unreachable block (ram,0x000101b338d4) */
/* WARNING: Removing unreachable block (ram,0x000101b338ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b337d0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e027e0);
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



/* Entry: 101b33948; end: 101b3394f;  */

void FUN_101b33948(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101b33950; end: 101b33983; -[SCSCBitmojiSelfiePickerScopedServicesSaberEntryPoint end] */

void FUN_101b33950(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101b337d0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b33984; end: 101b33aa3;  */

void FUN_101b33984(long param_1,long param_2,long param_3)

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
                        "BitmojiSelfiePickerScopeGraphBridge/SCSCBitmojiSelfiePickerScopedServicesSaberEntryPoint.swift"
                        ,0x5e,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b33aa4);
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



/* Entry: 101b33aa4; end: 101b33b4f; -[SCSCBitmojiSelfiePickerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101b33aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101b33984(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101b33b50; end: 101b33baf; -[SCSCBitmojiSelfiePickerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b33b50(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e027d8,0);
  *(undefined8 *)(param_1 + _DAT_112e027e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b33bb0; end: 101b33be3;  */

void FUN_101b33bb0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b33be4; end: 101b33c1b; -[SCSCBitmojiSelfiePickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b33be4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e027d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e027e0));
  return;
}



/* Entry: 101b33c1c; end: 101b33c3b;  */

void FUN_101b33c1c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f8960);
  return;
}



/* Entry: 101b33c3c; end: 101b33ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b33c3c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101b34030();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e02818) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101b33ca8; end: 101b33d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b33ca8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e02818) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b33d14; end: 101b33d73; -[_TtC43BitmojiSettingsScopedFactoryServiceProvider31SCBitmojiSettingsScopedServices init] */

void FUN_101b33d14(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiSettingsScopedFactoryServiceProvider.SCBitmojiSettingsScopedServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b33d40);
  (*pcVar1)();
}



/* Entry: 101b33d74; end: 101b33d83; -[_TtC43BitmojiSettingsScopedFactoryServiceProvider31SCBitmojiSettingsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b33d74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e02818));
  return;
}



/* Entry: 101b33d84; end: 101b33def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b33d84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110447050;
  func_0x000107c613fc(&UNK_110447050,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101b340c8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101b33df0; end: 101b33e8b;  */

void FUN_101b33df0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110446f60;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110446f60;
  return;
}



/* Entry: 101b33e8c; end: 101b33ec3;  */

void FUN_101b33e8c(long *param_1)

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



/* Entry: 101b33ec4; end: 101b33ecb;  */

undefined8 FUN_101b33ec4(void)

{
  return 0x1b;
}



/* Entry: 101b33ecc; end: 101b33fff;  */

void FUN_101b33ecc(undefined8 *param_1)

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
  puVar1 = &UNK_110447078;
  func_0x000107c613fc(&UNK_110447078,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101b340a0;
  func_0x00010058fa64(FUN_101b340a0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101b34000; end: 101b3402f;  */

undefined ** FUN_101b34000(void)

{
  return &PTR_DAT_112f20d58;
}



/* Entry: 101b34030; end: 101b3404f;  */

void FUN_101b34030(void)

{
  func_0x000107c61168(&PTR_PTR_1127f8a20);
  return;
}



/* Entry: 101b34050; end: 101b3409f;  */

undefined1  [16] FUN_101b34050(void)

{
  return ZEXT816(0x110446fb0);
}



/* Entry: 101b340a0; end: 101b340c7;  */

void FUN_101b340a0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101b340c8; end: 101b340db;  */

void FUN_101b340c8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101b340dc; end: 101b345cf;  */

void FUN_101b340dc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 auStack_70 [2];
  
  uVar14 = *param_2;
  func_0x0001000285a8(0x112e02890,&UNK_10d9d4ad8);
  puVar1 = auStack_70;
  auStack_70[0] = uVar14;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000101b36648();
  pcVar3 = "SCBitmojiCreateFlowScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCBitmojiCreateFlowScopeExposerSubjectServiceProvider",0x35,2);
  func_0x000101b366c8();
  pcVar4 = "SCBitmojiEditAvatarBuilderScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCBitmojiEditAvatarBuilderScopeExposerSubjectServiceProvider",0x3c,2);
  FUN_101b36714();
  func_0x000100082720("SCBitmojiSelfiePickerScopeExposerSubjectServiceProvider",0x37,2);
  puVar5 = puVar2;
  FUN_101b36688();
  func_0x000100082720("SCBitmojiCreateFlowScopeExposerObservableServiceProvider",0x38,2);
  pcVar6 = pcVar3;
  FUN_101b36708();
  func_0x000100082720("SCBitmojiEditAvatarBuilderScopeExposerObservableServiceProvider",0x3f,2);
  pcVar7 = pcVar4;
  FUN_101b367a0();
  func_0x000100082720("SCBitmojiSelfiePickerScopeExposerObservableServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar8 = FUN_101b33e8c;
  func_0x0001000823a8(FUN_101b33e8c,0);
  func_0x000100082720("SCBitmojiSettingsScopedServicesCleanupRelayServiceProvider",0x3a,2);
  puVar9 = puVar2;
  FUN_101b363e4(puVar2,pcVar3,pcVar4);
  func_0x000100082720("BitmojiSettingsScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e02898,&UNK_10d9d4af0);
  puVar10 = &UNK_110447128;
  func_0x000107c613fc(&UNK_110447128,0x88,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar1;
  *(undefined8 *)(puVar10 + 0x18) = param_3;
  *(undefined8 *)(puVar10 + 0x20) = param_4;
  *(undefined8 *)(puVar10 + 0x28) = param_5;
  *(undefined8 *)(puVar10 + 0x30) = param_6;
  *(undefined8 *)(puVar10 + 0x38) = param_7;
  *(undefined8 *)(puVar10 + 0x40) = param_8;
  *(undefined8 *)(puVar10 + 0x48) = param_9;
  *(undefined8 *)(puVar10 + 0x50) = param_10;
  *(undefined8 *)(puVar10 + 0x58) = param_11;
  *(undefined8 *)(puVar10 + 0x60) = param_12;
  *(undefined8 *)(puVar10 + 0x68) = param_13;
  *(char **)(puVar10 + 0x70) = pcVar7;
  *(undefined8 **)(puVar10 + 0x78) = puVar5;
  *(char **)(puVar10 + 0x80) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar6);
  uVar14 = 0x101b3460c;
  func_0x0001000823a8(0x101b3460c,puVar10);
  func_0x000100082720("SCBitmojiSettingsEntryPointWrapperServiceProvider",0x31,2);
  func_0x0001000285a8(0x112e028a0,&UNK_10d9d4ae0);
  puVar10 = &UNK_110447150;
  func_0x000107c613fc(&UNK_110447150,0x30,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar1;
  *(undefined8 **)(puVar10 + 0x18) = puVar9;
  *(undefined8 *)(puVar10 + 0x20) = uVar14;
  *(code **)(puVar10 + 0x28) = pcVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(pcVar8);
  pcVar11 = FUN_101b34650;
  func_0x0001000823a8(FUN_101b34650,puVar10);
  func_0x000100082720("SCBitmojiSettingsScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e02820,&UNK_10d9d4890);
  func_0x000107c6157c(pcVar11);
  uVar12 = 0x101b3465c;
  func_0x0001000823a8(0x101b3465c,pcVar11);
  func_0x000100082720("SCBitmojiSettingsScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e02810,&UNK_10d9d4880);
  func_0x000107c6157c(uVar12);
  uVar13 = 0x101b34664;
  func_0x0001000823a8(0x101b34664,uVar12);
  func_0x000100082720("SCBitmojiSettingsScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar10 = &UNK_110447178;
  func_0x000107c613fc(&UNK_110447178,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar13;
  *(code **)(puVar10 + 0x18) = pcVar8;
  func_0x000107c6157c(pcVar8);
  uVar13 = 0x101b3466c;
  func_0x0001000823a8(0x101b3466c,puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(uVar12);
  func_0x000100082720("SCBitmojiSettingsScopeEntryPointProvider",0x28,2);
  *param_1 = uVar13;
  return;
}



/* Entry: 101b345d0; end: 101b3464f;  */

void FUN_101b345d0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101b340dc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101b34650; end: 101b34673;  */

void FUN_101b34650(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101b35acc(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCBitmojiSettingsScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b34674; end: 101b35863;  */

void FUN_101b34674(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  FUN_101b35a1c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  func_0x0001000285a8(0x112e028a8,&UNK_10db59580);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174(uStack_c0);
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar14 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x18) = puVar12;
  func_0x0001000285a8(0x112dafb90,&UNK_10d958cf0);
  func_0x000107c610f8();
  uVar14 = uStack_d8;
  func_0x000107c6157c(uStack_d8);
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x20) = puVar12;
  func_0x0001000285a8(0x112e028b0,&UNK_10d9ecc00);
  func_0x000107c610f8();
  uVar14 = uStack_e0;
  func_0x000107c6157c(uStack_e0);
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x28) = puVar12;
  puVar12 = PTR_PTR_1126a8a58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar12;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010effe2c0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010effe2e0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19d20);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19d60);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef1a2d0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef19df0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010effe300);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  uVar14 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010effe330);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010effe360);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef2ada0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010effe380);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c3e740(uVar16);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61574(uStack_d0);
  func_0x000107c61574(uStack_d8);
  func_0x000107c61574(uStack_e0);
  *param_1 = param_2;
  return;
}



/* Entry: 101b35864; end: 101b3590f;  */

void FUN_101b35864(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 101b35910; end: 101b35917;  */

undefined8 FUN_101b35910(void)

{
  return 0x1b;
}



/* Entry: 101b35918; end: 101b3599b;  */

void FUN_101b35918(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101b35a5c,param_2,FUN_101b35a60,param_2,FUN_101b35a88,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101b3599c; end: 101b359eb;  */

undefined8 FUN_101b3599c(void)

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



/* Entry: 101b359ec; end: 101b35a1b;  */

undefined ** FUN_101b359ec(void)

{
  return &PTR_DAT_112f20d58;
}



/* Entry: 101b35a1c; end: 101b35a3b;  */

void FUN_101b35a1c(void)

{
  func_0x000107c61168(&PTR_PTR_112e02920);
  return;
}



/* Entry: 101b35a3c; end: 101b35a5f;  */

undefined1  [16] FUN_101b35a3c(void)

{
  return ZEXT816(0x1104471d0);
}



/* Entry: 101b35a60; end: 101b35a87;  */

void FUN_101b35a60(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101b35a88; end: 101b35a8f;  */

undefined8 FUN_101b35a88(void)

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



/* Entry: 101b35a90; end: 101b35acb;  */

void FUN_101b35a90(undefined8 *param_1,undefined8 param_2)

{
  FUN_101b35acc();
  func_0x0001000a7f38("SCBitmojiSettingsScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101b35acc; end: 101b35cb7;  */

void FUN_101b35acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105dcf08;
  ppuVar4 = &PTR_DAT_112f20d58;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110447220;
  func_0x000107c613fc(&UNK_110447220,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e029f0;
  func_0x0001000285a8(0x112e029f0,&UNK_10d9d4c88);
  func_0x0001000a6ee8(&UNK_1104474c0,"BitmojiSettingsScopeGraphBridgeScopeInitializationPluginKey",
                      0x3b,2,FUN_101b35cb8,puVar2,uVar3,&UNK_1104474c0,&PTR_DAT_112e02a98);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104471d0,
                      "SCBitmojiSettingsEntryPointWrapperScopeInitializationPluginKey",0x3e,2,
                      FUN_101b35d6c,param_3,uVar3,&UNK_1104471d0,&PTR_DAT_112e028b8);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110447248;
  func_0x000107c613fc(&UNK_110447248,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110446ff0,"SCBitmojiSettingsScopedServicesScopeInitializationPluginKey",
                      0x3b,2,FUN_101b35e1c,puVar2,uVar3,&UNK_110446ff0,&PTR_DAT_112e02828);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e029f8;
  func_0x0001000285a8(0x112e029f8,&UNK_10d9d4c90);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 101b35cb8; end: 101b35cf7;  */

void FUN_101b35cb8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101b3680c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("BitmojiSettingsScopeGraphBridgeScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b35cf8; end: 101b35d6b;  */

void FUN_101b35cf8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101b35e58;
  func_0x0001000823a8(0x101b35e58,param_3);
  func_0x000100082720("SCBitmojiSettingsEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b35d6c; end: 101b35d73;  */

void FUN_101b35d6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101b35e58;
  func_0x0001000823a8();
  func_0x000100082720("SCBitmojiSettingsEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b35d74; end: 101b35e1b;  */

void FUN_101b35d74(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110447270;
  func_0x000107c613fc(&UNK_110447270,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101b35e50;
  func_0x0001000823a8(FUN_101b35e50,puVar1);
  func_0x000100082720("SCBitmojiSettingsScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101b35e1c; end: 101b35e23;  */

void FUN_101b35e1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110447270;
  func_0x000107c613fc(&UNK_110447270,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101b35e50;
  func_0x0001000823a8(FUN_101b35e50,puVar3);
  func_0x000100082720("SCBitmojiSettingsScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101b35e24; end: 101b35e4f;  */

void FUN_101b35e24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b35e50; end: 101b35e5f;  */

void FUN_101b35e50(undefined8 *param_1)

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
  puVar1 = &UNK_110447078;
  func_0x000107c613fc(&UNK_110447078,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101b340a0;
  func_0x00010058fa64(FUN_101b340a0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101b35e60; end: 101b35fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101b35e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = auStack_80;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_101b362f4();
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
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112e02a00) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e02a08) = param_5;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b35fbc);
  (*pcVar2)();
}



/* Entry: 101b35fbc; end: 101b3601b; -[_TtC31BitmojiSettingsScopeGraphBridge46BitmojiSettingsScopeGraphBridgeSaberEntryPoint init] */

void FUN_101b35fbc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiSettingsScopeGraphBridge.BitmojiSettingsScopeGraphBridgeSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b35fe8);
  (*pcVar1)();
}



/* Entry: 101b3601c; end: 101b36053; -[_TtC31BitmojiSettingsScopeGraphBridge46BitmojiSettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b36038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b3603c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3601c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e02a00));
  return;
}



/* Entry: 101b36054; end: 101b3607b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b36054(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e02a08),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e02a00));
  return;
}



/* Entry: 101b3607c; end: 101b3609b;  */

void FUN_101b3607c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f8ae0);
  return;
}



/* Entry: 101b3609c; end: 101b36123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101b3609c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e02a38) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e02a40);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b36124);
  (*pcVar2)();
}



/* Entry: 101b36124; end: 101b3620b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b36124(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e02a38);
  *(undefined **)(unaff_x20 + _DAT_112e02a38) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e02a40);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e02a40))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110447338;
  func_0x000107c613fc(&UNK_110447338,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101b36210,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101b3620c; end: 101b36217;  */

void FUN_101b3620c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101b36218; end: 101b36277; -[_TtC31BitmojiSettingsScopeGraphBridge46SCBitmojiSettingsScopedServicesSaberEntryPoint init] */

void FUN_101b36218(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiSettingsScopeGraphBridge.SCBitmojiSettingsScopedServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b36244);
  (*pcVar1)();
}



/* Entry: 101b36278; end: 101b362af; -[_TtC31BitmojiSettingsScopeGraphBridge46SCBitmojiSettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b36278(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e02a40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e02a38));
  return;
}



/* Entry: 101b362b0; end: 101b362b3;  */

void FUN_101b362b0(void)

{
  return;
}



/* Entry: 101b362b4; end: 101b362d3;  */

void FUN_101b362b4(void)

{
  FUN_101b36124();
  return;
}



/* Entry: 101b362d4; end: 101b362f3;  */

void FUN_101b362d4(void)

{
  func_0x000107c61168(&PTR_PTR_1127f8ba8);
  return;
}



/* Entry: 101b362f4; end: 101b363c3;  */

undefined8 FUN_101b362f4(void)

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
  
  func_0x000107c61428(0x112e02a70,&uStack_40,0x20,0);
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
    FUN_101b363c4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101b363c4; end: 101b363e3;  */

void FUN_101b363c4(void)

{
  func_0x000107c61168(&PTR_PTR_1127f8c70);
  return;
}



/* Entry: 101b363e4; end: 101b3651f;  */

void FUN_101b363e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e02a78,&UNK_10d9d4d48);
  puVar1 = &UNK_110447380;
  func_0x000107c613fc(&UNK_110447380,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_101b36520,puVar1);
  return;
}



/* Entry: 101b36520; end: 101b3652b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b36520(undefined8 *param_1)

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
  FUN_101b363c4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112e02a80) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e02a88) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112e02a90) = uVar7;
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



/* Entry: 101b3652c; end: 101b3659f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b3652c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e02a80) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e02a88) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e02a90) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b365a0; end: 101b365ff; -[_TtC31BitmojiSettingsScopeGraphBridge39BitmojiSettingsScopeGraphBridgeServices init] */

void FUN_101b365a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiSettingsScopeGraphBridge.BitmojiSettingsScopeGraphBridgeServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b365cc);
  (*pcVar1)();
}



/* Entry: 101b36600; end: 101b36687; -[_TtC31BitmojiSettingsScopeGraphBridge39BitmojiSettingsScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b3661c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b36620) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b36600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e02a80));
  return;
}



/* Entry: 101b36688; end: 101b36693;  */

void FUN_101b36688(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101b36694,param_1);
  return;
}



/* Entry: 101b36694; end: 101b36707;  */

void FUN_101b36694(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101b36708; end: 101b36713;  */

void FUN_101b36708(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101b36aa0,param_1);
  return;
}



/* Entry: 101b36714; end: 101b3679f;  */

void FUN_101b36714(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101b36ab0,0);
  return;
}



/* Entry: 101b367a0; end: 101b367ab;  */

void FUN_101b367a0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101b36aa4,param_1);
  return;
}



/* Entry: 101b367ac; end: 101b36803;  */

void FUN_101b367ac(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 101b36804; end: 101b3680b;  */

undefined8 FUN_101b36804(void)

{
  return 0x1b;
}



/* Entry: 101b3680c; end: 101b36983;  */

void FUN_101b3680c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104473a8;
  func_0x000107c613fc(&UNK_1104473a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101b36984,puVar1);
  return;
}



/* Entry: 101b36984; end: 101b3698b;  */

void FUN_101b36984(undefined8 *param_1)

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
  func_0x000107c61428(0x112e02a70,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e02a70,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110447500;
  func_0x000107c613fc(&UNK_110447500,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101b36a98;
  func_0x00010058fa64(0x101b36a98,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101b3698c; end: 101b369e7;  */

void FUN_101b3698c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e02a70,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e02a70,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101b369e8; end: 101b36ab3;  */

undefined ** FUN_101b369e8(void)

{
  return &PTR_DAT_112f20d58;
}



/* Entry: 101b36ab4; end: 101b36afb; -[SCBitmojiSettingsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b36ab4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e02ae8;
  func_0x000107c61428(param_1 + _DAT_112e02ae8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b36afc; end: 101b36b53; -[SCBitmojiSettingsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b36afc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e02ae8;
  func_0x000107c61428(param_1 + _DAT_112e02ae8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b36b54; end: 101b36b9b; -[SCBitmojiSettingsScopeGraphBridgeSaberEntryPoint sCBitmojiCreateFlowScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b36b54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e02af0;
  func_0x000107c61428(param_1 + _DAT_112e02af0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101b36b9c; end: 101b36ba7; -[SCBitmojiSettingsScopeGraphBridgeSaberEntryPoint setSCBitmojiCreateFlowScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b36b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e02af0;
  func_0x000107c61428(param_1 + _DAT_112e02af0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101b36ba8; end: 101b36bef; -[SCBitmojiSettingsScopeGraphBridgeSaberEntryPoint sCBitmojiEditAvatarBuilderScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b36ba8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e02af8;
  func_0x000107c61428(param_1 + _DAT_112e02af8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101b36bf0; end: 101b36bfb; -[SCBitmojiSettingsScopeGraphBridgeSaberEntryPoint setSCBitmojiEditAvatarBuilderScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b36bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e02af8;
  func_0x000107c61428(param_1 + _DAT_112e02af8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101b36bfc; end: 101b36c43; -[SCBitmojiSettingsScopeGraphBridgeSaberEntryPoint sCBitmojiSelfiePickerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b36bfc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e02b00;
  func_0x000107c61428(param_1 + _DAT_112e02b00,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101b36c44; end: 101b36c4f; -[SCBitmojiSettingsScopeGraphBridgeSaberEntryPoint setSCBitmojiSelfiePickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b36c44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e02b00;
  func_0x000107c61428(param_1 + _DAT_112e02b00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101b36c50; end: 101b36c97; -[SCBitmojiSettingsScopeGraphBridgeSaberEntryPoint bitmojiSettingsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b36c50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e02b08;
  func_0x000107c61428(param_1 + _DAT_112e02b08,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101b36c98; end: 101b36ca3; -[SCBitmojiSettingsScopeGraphBridgeSaberEntryPoint setBitmojiSettingsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b36c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e02b08;
  func_0x000107c61428(param_1 + _DAT_112e02b08,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101b36ca4; end: 101b36d03;  */

void FUN_101b36ca4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 101b36d04; end: 101b36fc7;  */

/* WARNING: Possible PIC construction at 0x000101b36ecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b36edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b36f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b36f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b36f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b36f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b36f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b36f7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b36fa0) */
/* WARNING: Removing unreachable block (ram,0x000101b36f90) */
/* WARNING: Removing unreachable block (ram,0x000101b36f24) */
/* WARNING: Removing unreachable block (ram,0x000101b36f14) */
/* WARNING: Removing unreachable block (ram,0x000101b36f04) */
/* WARNING: Removing unreachable block (ram,0x000101b36ee0) */
/* WARNING: Removing unreachable block (ram,0x000101b36ed0) */
/* WARNING: Removing unreachable block (ram,0x000101b36f80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b36d04(void)

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
  func_0x000107c50a9c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50aa4();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c50ad4();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        func_0x000107c3ea40();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          lVar6 = 0;
          FUN_101b3607c();
          lVar4 = lVar6;
          func_0x000107c610f8();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          lVar5 = lVar3;
          FUN_101b362f4();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101b36fc8);
            (*pcVar2)();
          }
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uStack_68);
          *(long *)(lVar4 + _DAT_112e02a00) = lVar5;
          *(long *)(lVar4 + _DAT_112e02a08) = unaff_x20;
          lStack_80 = lVar4;
          lStack_78 = lVar6;
          func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 101b36fc8; end: 101b36fef; -[SCBitmojiSettingsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101b36fc8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101b36d04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b36ff0; end: 101b37033; -[SCBitmojiSettingsScopeGraphBridgeSaberEntryPoint end] */

void FUN_101b36ff0(undefined8 param_1)

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



/* Entry: 101b37034; end: 101b3730f;  */

void FUN_101b37034(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef104eb00)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010efb1500,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef10061e0)) ||
           (func_0x000107c605b8(0xd000000000000026,0x800000010eff9e20,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5804c();
        }
        else {
          uVar2 = 0xd000000000000021;
          if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef10061b0)) ||
             (func_0x000107c605b8(0xd000000000000021,0x800000010eff9e50,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5807c();
          }
          else {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef10019b0)) &&
               (func_0x000107c605b8(0xd00000000000002e,0x800000010effe650,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "BitmojiSettingsScopeGraphBridge/SCBitmojiSettingsScopeGraphBridgeSaberEntryPoint.swift"
                                  ,0x56,2,0x3d,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101b37310);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c52d3c();
          }
        }
        goto LAB_101b370c0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58044();
  }
LAB_101b370c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101b37310; end: 101b373bb; -[SCBitmojiSettingsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101b37310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101b37034(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101b373bc; end: 101b3744b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b373bc(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e02ae8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e02af0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e02af8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e02b00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e02b08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e02b10) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b3744c; end: 101b3746b; -[SCBitmojiSettingsScopeGraphBridgeSaberEntryPoint init] */

void FUN_101b3744c(void)

{
  FUN_101b373bc();
  return;
}



/* Entry: 101b3746c; end: 101b3749f;  */

void FUN_101b3746c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b374a0; end: 101b37517; -[SCBitmojiSettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b374cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b374ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b374d0) */
/* WARNING: Removing unreachable block (ram,0x000101b374f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b374a0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e02ae8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e02af0));
  return;
}



/* Entry: 101b37518; end: 101b37537;  */

void FUN_101b37518(void)

{
  func_0x000107c61168(&PTR_PTR_1127f8d40);
  return;
}



/* Entry: 101b37538; end: 101b3757f; -[SCSCBitmojiSettingsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b37538(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e02b40;
  func_0x000107c61428(param_1 + _DAT_112e02b40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b37580; end: 101b375d7; -[SCSCBitmojiSettingsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b37580(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e02b40;
  func_0x000107c61428(param_1 + _DAT_112e02b40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b375d8; end: 101b376af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b375d8(undefined8 param_1,long param_2)

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
    FUN_101b362d4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e02a38) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b376b0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e02a40);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e02b48);
    *(long **)(unaff_x20 + _DAT_112e02b48) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}


