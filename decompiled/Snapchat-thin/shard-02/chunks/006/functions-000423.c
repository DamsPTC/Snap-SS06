/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f930c4; end: 101f9316f; -[SCSpectaclesOTAUpdatePageScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101f930c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f92f2c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f93170; end: 101f931db; -[SCSpectaclesOTAUpdatePageScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f93170(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e48298,0);
  *(undefined8 *)(param_1 + _DAT_112e482a0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e482a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f931dc; end: 101f9320f;  */

void FUN_101f931dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f93210; end: 101f93257; -[SCSpectaclesOTAUpdatePageScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f9323c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f93240) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f93210(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e48298);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e482a0));
  return;
}



/* Entry: 101f93258; end: 101f93277;  */

void FUN_101f93258(void)

{
  func_0x000107c61168(&PTR_PTR_112810280);
  return;
}



/* Entry: 101f93278; end: 101f932bf; -[SCSCSpectaclesOTAUpdatePageScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f93278(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e482d8;
  func_0x000107c61428(param_1 + _DAT_112e482d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f932c0; end: 101f93317; -[SCSCSpectaclesOTAUpdatePageScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f932c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e482d8;
  func_0x000107c61428(param_1 + _DAT_112e482d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f93318; end: 101f933ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f93318(undefined8 param_1,long param_2)

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
    FUN_101f92818();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e48200) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f933f0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e48208);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e482e0);
    *(long **)(unaff_x20 + _DAT_112e482e0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101f933f0; end: 101f93417; -[SCSCSpectaclesOTAUpdatePageScopedServicesSaberEntryPoint begin] */

void FUN_101f933f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f93318();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f93418; end: 101f9358f;  */

/* WARNING: Possible PIC construction at 0x000101f93480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f93518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f93484) */
/* WARNING: Removing unreachable block (ram,0x000101f9351c) */
/* WARNING: Removing unreachable block (ram,0x000101f93534) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f93418(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e482e0);
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



/* Entry: 101f93590; end: 101f93597;  */

void FUN_101f93590(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f93598; end: 101f935cb; -[SCSCSpectaclesOTAUpdatePageScopedServicesSaberEntryPoint end] */

void FUN_101f93598(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f93418();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f935cc; end: 101f936eb;  */

void FUN_101f935cc(long param_1,long param_2,long param_3)

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
                        "SpectaclesOTAUpdatePageScopeGraphBridge/SCSCSpectaclesOTAUpdatePageScopedServicesSaberEntryPoint.swift"
                        ,0x66,2,0x2f,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f936ec);
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



/* Entry: 101f936ec; end: 101f93797; -[SCSCSpectaclesOTAUpdatePageScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f936ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f935cc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f93798; end: 101f937f7; -[SCSCSpectaclesOTAUpdatePageScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f93798(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e482d8,0);
  *(undefined8 *)(param_1 + _DAT_112e482e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f937f8; end: 101f9382b;  */

void FUN_101f937f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f9382c; end: 101f93863; -[SCSCSpectaclesOTAUpdatePageScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f9382c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e482d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e482e0));
  return;
}



/* Entry: 101f93864; end: 101f93883;  */

void FUN_101f93864(void)

{
  func_0x000107c61168(&PTR_PTR_112810348);
  return;
}



/* Entry: 101f93884; end: 101f938ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f93884(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f93c78();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e48318) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101f938f0; end: 101f9395b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f938f0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e48318) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f9395c; end: 101f939bb; -[_TtC48SpectaclesOnboardingScopedFactoryServiceProvider36SCSpectaclesOnboardingScopedServices init] */

void FUN_101f9395c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesOnboardingScopedFactoryServiceProvider.SCSpectaclesOnboardingScopedServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f93988);
  (*pcVar1)();
}



/* Entry: 101f939bc; end: 101f939cb; -[_TtC48SpectaclesOnboardingScopedFactoryServiceProvider36SCSpectaclesOnboardingScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f939bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e48318));
  return;
}



/* Entry: 101f939cc; end: 101f93a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f939cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104ae290;
  func_0x000107c613fc(&UNK_1104ae290,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101f93d54,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f93a38; end: 101f93ad3;  */

void FUN_101f93a38(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104ae1a0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104ae1a0;
  return;
}



/* Entry: 101f93ad4; end: 101f93b0b;  */

void FUN_101f93ad4(long *param_1)

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



/* Entry: 101f93b0c; end: 101f93b13;  */

undefined8 FUN_101f93b0c(void)

{
  return 0x1b;
}



/* Entry: 101f93b14; end: 101f93c47;  */

void FUN_101f93b14(undefined8 *param_1)

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
  puVar1 = &UNK_1104ae2b8;
  func_0x000107c613fc(&UNK_1104ae2b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f93d2c;
  func_0x00010058fa64(FUN_101f93d2c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f93c48; end: 101f93c77;  */

undefined ** FUN_101f93c48(void)

{
  return &PTR_DAT_112fe9348;
}



/* Entry: 101f93c78; end: 101f93c97;  */

void FUN_101f93c78(void)

{
  func_0x000107c61168(&PTR_PTR_112810408);
  return;
}



/* Entry: 101f93c98; end: 101f93ce7;  */

undefined1  [16] FUN_101f93c98(void)

{
  return ZEXT816(0x1104ae1f0);
}



/* Entry: 101f93ce8; end: 101f93d2b;  */

void FUN_101f93ce8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e48380 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9bf8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e48380 = puVar1;
  return;
}



/* Entry: 101f93d2c; end: 101f93d53;  */

void FUN_101f93d2c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101f93d54; end: 101f93d57;  */

void FUN_101f93d54(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f93d58; end: 101f93e17;  */

/* WARNING: Possible PIC construction at 0x000101f93df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f93df8) */

void FUN_101f93d58(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104ae340;
  func_0x000107c613fc(&UNK_1104ae340,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112e48390;
  func_0x0001000285a8(0x112e48390,&UNK_10da3e7d8);
  func_0x000107c613fc();
  pcVar3 = FUN_101f94180;
  func_0x0001000841fc(FUN_101f94180,puVar1,uVar2);
  func_0x000100084214(&UNK_10da3e7a0,0x32,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101f93e18; end: 101f93e33;  */

/* WARNING: Possible PIC construction at 0x000101f93df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f93df8) */

void FUN_101f93e18(undefined8 *param_1)

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
  puVar2 = &UNK_1104ae340;
  func_0x000107c613fc(&UNK_1104ae340,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112e48390;
  func_0x0001000285a8(0x112e48390,&UNK_10da3e7d8);
  func_0x000107c613fc();
  pcVar4 = FUN_101f94180;
  func_0x0001000841fc(FUN_101f94180,puVar2,uVar3);
  func_0x000100084214(&UNK_10da3e7a0,0x32,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101f93e34; end: 101f9414b;  */

void FUN_101f93e34(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e48398,&UNK_10da3e7e0);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e483a0,&UNK_10da3e7f0);
  puVar2 = &UNK_1104ae368;
  func_0x000107c613fc(&UNK_1104ae368,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar8 = 0x101f9418c;
  func_0x0001000823a8(0x101f9418c,puVar2);
  func_0x000100082720("SCSpectaclesOnboardingEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_101f93ad4;
  func_0x0001000823a8(FUN_101f93ad4,0);
  pcVar4 = "SCSpectaclesOnboardingScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCSpectaclesOnboardingScopedServicesCleanupRelayServiceProvider",0x3f,2);
  FUN_101f95144();
  func_0x000100082720("SpectaclesOnboardingScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e483a8,&UNK_10da3e7e8);
  puVar2 = &UNK_1104ae390;
  func_0x000107c613fc(&UNK_1104ae390,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar3;
  *(char **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_101f941d4;
  func_0x0001000823a8(FUN_101f941d4,puVar2);
  func_0x000100082720("SCSpectaclesOnboardingScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112e48320,&UNK_10da3e540);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x101f941e0;
  func_0x0001000823a8(0x101f941e0,pcVar5);
  func_0x000100082720("SCSpectaclesOnboardingScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e48310,&UNK_10da3e530);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101f941e8;
  func_0x0001000823a8(0x101f941e8,uVar6);
  func_0x000100082720("SCSpectaclesOnboardingScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104ae3b8;
  func_0x000107c613fc(&UNK_1104ae3b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  uVar7 = 0x101f941f0;
  func_0x0001000823a8(0x101f941f0,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCSpectaclesOnboardingScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101f9414c; end: 101f9417f;  */

void FUN_101f9414c(void)

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



/* Entry: 101f94180; end: 101f94197;  */

void FUN_101f94180(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112e48398,&UNK_10da3e7e0);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e483a0,&UNK_10da3e7f0);
  puVar2 = &UNK_1104ae368;
  func_0x000107c613fc(&UNK_1104ae368,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  uVar3 = 0x101f9418c;
  func_0x0001000823a8(0x101f9418c,puVar2);
  func_0x000100082720("SCSpectaclesOnboardingEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101f93ad4;
  func_0x0001000823a8(FUN_101f93ad4,0);
  pcVar5 = "SCSpectaclesOnboardingScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCSpectaclesOnboardingScopedServicesCleanupRelayServiceProvider",0x3f,2);
  FUN_101f95144();
  func_0x000100082720("SpectaclesOnboardingScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e483a8,&UNK_10da3e7e8);
  puVar2 = &UNK_1104ae390;
  func_0x000107c613fc(&UNK_1104ae390,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar4;
  *(char **)(puVar2 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar5);
  pcVar6 = FUN_101f941d4;
  func_0x0001000823a8(FUN_101f941d4,puVar2);
  func_0x000100082720("SCSpectaclesOnboardingScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112e48320,&UNK_10da3e540);
  func_0x000107c6157c(pcVar6);
  uVar7 = 0x101f941e0;
  func_0x0001000823a8(0x101f941e0,pcVar6);
  func_0x000100082720("SCSpectaclesOnboardingScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e48310,&UNK_10da3e530);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x101f941e8;
  func_0x0001000823a8(0x101f941e8,uVar7);
  func_0x000100082720("SCSpectaclesOnboardingScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104ae3b8;
  func_0x000107c613fc(&UNK_1104ae3b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x101f941f0;
  func_0x0001000823a8(0x101f941f0,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCSpectaclesOnboardingScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 101f94198; end: 101f941d3;  */

void FUN_101f94198(void)

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



/* Entry: 101f941d4; end: 101f941f7;  */

void FUN_101f941d4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f94900(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCSpectaclesOnboardingScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f941f8; end: 101f94707;  */

void FUN_101f941f8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_101f94850();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a9c00;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0x696472616f626e6f;
  func_0x000107c5fadc(0x696472616f626e6f,0xef65706f6353676e);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar7);
  uVar6 = 0x6553726579616c70;
  func_0x000107c5fadc(0x6553726579616c70,0xee00736563697672);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f022250);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 101f94708; end: 101f94743;  */

void FUN_101f94708(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f94744; end: 101f9474b;  */

undefined8 FUN_101f94744(void)

{
  return 0x1b;
}



/* Entry: 101f9474c; end: 101f947cf;  */

void FUN_101f9474c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f94890,param_2,FUN_101f94894,param_2,FUN_101f948bc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f947d0; end: 101f9481f;  */

undefined8 FUN_101f947d0(void)

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



/* Entry: 101f94820; end: 101f9484f;  */

void FUN_101f94820(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104ae3d0;
  return;
}



/* Entry: 101f94850; end: 101f9486f;  */

void FUN_101f94850(void)

{
  func_0x000107c61168(&PTR_PTR_112e48418);
  return;
}



/* Entry: 101f94870; end: 101f94893;  */

undefined1  [16] FUN_101f94870(void)

{
  return ZEXT816(0x1104ae410);
}



/* Entry: 101f94894; end: 101f948bb;  */

void FUN_101f94894(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f948bc; end: 101f948c3;  */

undefined8 FUN_101f948bc(void)

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



/* Entry: 101f948c4; end: 101f948ff;  */

void FUN_101f948c4(undefined8 *param_1,undefined8 param_2)

{
  FUN_101f94900();
  func_0x0001000a7f38("SCSpectaclesOnboardingScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = param_2;
  return;
}



/* Entry: 101f94900; end: 101f94aeb;  */

void FUN_101f94900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106cea70;
  ppuVar4 = &PTR_DAT_112fe9348;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e48490;
  func_0x0001000285a8(0x112e48490,&UNK_10da3e950);
  func_0x0001000a6ee8(&UNK_1104ae410,
                      "SCSpectaclesOnboardingEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      FUN_101f94b60,param_1,uVar2,&UNK_1104ae410,&PTR_DAT_112e483b0);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104ae460;
  func_0x000107c613fc(&UNK_1104ae460,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104ae230,
                      "SCSpectaclesOnboardingScopedServicesScopeInitializationPluginKey",0x40,2,
                      FUN_101f94c10,puVar3,uVar2,&UNK_1104ae230,&PTR_DAT_112e48328);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104ae488;
  func_0x000107c613fc(&UNK_1104ae488,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104ae640,
                      "SpectaclesOnboardingScopeGraphBridgeScopeInitializationPluginKey",0x40,2,
                      FUN_101f94c18,puVar3,uVar2,&UNK_1104ae640,&PTR_DAT_112e48520);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e48498;
  func_0x0001000285a8(0x112e48498,&UNK_10da3e958);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101f94aec; end: 101f94b5f;  */

void FUN_101f94aec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101f94c8c;
  func_0x0001000823a8(0x101f94c8c,param_3);
  func_0x000100082720("SCSpectaclesOnboardingEntryPointWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f94b60; end: 101f94b67;  */

void FUN_101f94b60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101f94c8c;
  func_0x0001000823a8();
  func_0x000100082720("SCSpectaclesOnboardingEntryPointWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f94b68; end: 101f94c0f;  */

void FUN_101f94b68(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104ae4b0;
  func_0x000107c613fc(&UNK_1104ae4b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101f94c84;
  func_0x0001000823a8(FUN_101f94c84,puVar1);
  func_0x000100082720("SCSpectaclesOnboardingScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar2;
  return;
}



/* Entry: 101f94c10; end: 101f94c17;  */

void FUN_101f94c10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104ae4b0;
  func_0x000107c613fc(&UNK_1104ae4b0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101f94c84;
  func_0x0001000823a8(FUN_101f94c84,puVar3);
  func_0x000100082720("SCSpectaclesOnboardingScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar4;
  return;
}



/* Entry: 101f94c18; end: 101f94c57;  */

void FUN_101f94c18(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f95228(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpectaclesOnboardingScopeGraphBridgeScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 101f94c58; end: 101f94c83;  */

void FUN_101f94c58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f94c84; end: 101f94c93;  */

void FUN_101f94c84(undefined8 *param_1)

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
  puVar1 = &UNK_1104ae2b8;
  func_0x000107c613fc(&UNK_1104ae2b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f93d2c;
  func_0x00010058fa64(FUN_101f93d2c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f94c94; end: 101f94d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f94c94(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101f95054();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e484a0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e484a8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f94d1c);
  (*pcVar1)();
}



/* Entry: 101f94d1c; end: 101f94d7b; -[_TtC36SpectaclesOnboardingScopeGraphBridge51SpectaclesOnboardingScopeGraphBridgeSaberEntryPoint init] */

void FUN_101f94d1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesOnboardingScopeGraphBridge.SpectaclesOnboardingScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f94d48);
  (*pcVar1)();
}



/* Entry: 101f94d7c; end: 101f94db3; -[_TtC36SpectaclesOnboardingScopeGraphBridge51SpectaclesOnboardingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f94d98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f94d9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f94d7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e484a0));
  return;
}



/* Entry: 101f94db4; end: 101f94ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f94db4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e484a8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e484a0));
  return;
}



/* Entry: 101f94ddc; end: 101f94dfb;  */

void FUN_101f94ddc(void)

{
  func_0x000107c61168(&PTR_PTR_1128104c8);
  return;
}



/* Entry: 101f94dfc; end: 101f94e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f94dfc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e484d8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e484e0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f94e84);
  (*pcVar2)();
}



/* Entry: 101f94e84; end: 101f94f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f94e84(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e484d8);
  *(undefined **)(unaff_x20 + _DAT_112e484d8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e484e0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e484e0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104ae5a0;
  func_0x000107c613fc(&UNK_1104ae5a0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101f94f70,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101f94f6c; end: 101f94f77;  */

void FUN_101f94f6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f94f78; end: 101f94fd7; -[_TtC36SpectaclesOnboardingScopeGraphBridge51SCSpectaclesOnboardingScopedServicesSaberEntryPoint init] */

void FUN_101f94f78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesOnboardingScopeGraphBridge.SCSpectaclesOnboardingScopedServicesSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f94fa4);
  (*pcVar1)();
}



/* Entry: 101f94fd8; end: 101f9500f; -[_TtC36SpectaclesOnboardingScopeGraphBridge51SCSpectaclesOnboardingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f94fd8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e484e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e484d8));
  return;
}



/* Entry: 101f95010; end: 101f95013;  */

void FUN_101f95010(void)

{
  return;
}



/* Entry: 101f95014; end: 101f95033;  */

void FUN_101f95014(void)

{
  FUN_101f94e84();
  return;
}



/* Entry: 101f95034; end: 101f95053;  */

void FUN_101f95034(void)

{
  func_0x000107c61168(&PTR_PTR_112810590);
  return;
}



/* Entry: 101f95054; end: 101f95123;  */

undefined8 FUN_101f95054(void)

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
  
  func_0x000107c61428(0x112e48510,&uStack_40,0x20,0);
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
    FUN_101f95124();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101f95124; end: 101f95143;  */

void FUN_101f95124(void)

{
  func_0x000107c61168(&PTR_PTR_112810658);
  return;
}



/* Entry: 101f95144; end: 101f951af;  */

void FUN_101f95144(void)

{
  func_0x0001000285a8(0x112e48518,&UNK_10da3ea28);
  func_0x0001000823a8(0x101f95184,0);
  return;
}



/* Entry: 101f951b0; end: 101f951eb; -[_TtC36SpectaclesOnboardingScopeGraphBridge44SpectaclesOnboardingScopeGraphBridgeServices init] */

void FUN_101f951b0(undefined8 param_1)

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



/* Entry: 101f951ec; end: 101f9521f;  */

void FUN_101f951ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f95220; end: 101f95227;  */

undefined8 FUN_101f95220(void)

{
  return 0x1b;
}



/* Entry: 101f95228; end: 101f9539f;  */

void FUN_101f95228(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104ae5e8;
  func_0x000107c613fc(&UNK_1104ae5e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101f953a0,puVar1);
  return;
}



/* Entry: 101f953a0; end: 101f953a7;  */

void FUN_101f953a0(undefined8 *param_1)

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
  func_0x000107c61428(0x112e48510,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e48510,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104ae680;
  func_0x000107c613fc(&UNK_1104ae680,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101f95454;
  func_0x00010058fa64(0x101f95454,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f953a8; end: 101f95403;  */

void FUN_101f953a8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e48510,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e48510,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101f95404; end: 101f9545b;  */

undefined ** FUN_101f95404(void)

{
  return &PTR_DAT_112fe9348;
}



/* Entry: 101f9545c; end: 101f954a3; -[SCSpectaclesOnboardingScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f9545c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e48570;
  func_0x000107c61428(param_1 + _DAT_112e48570,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f954a4; end: 101f954fb; -[SCSpectaclesOnboardingScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f954a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e48570;
  func_0x000107c61428(param_1 + _DAT_112e48570,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f954fc; end: 101f95543; -[SCSpectaclesOnboardingScopeGraphBridgeSaberEntryPoint spectaclesOnboardingScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f954fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e48578;
  func_0x000107c61428(param_1 + _DAT_112e48578,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f95544; end: 101f955a7; -[SCSpectaclesOnboardingScopeGraphBridgeSaberEntryPoint setSpectaclesOnboardingScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f95544(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e48578;
  func_0x000107c61428(param_1 + _DAT_112e48578,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f955a8; end: 101f956db;  */

/* WARNING: Possible PIC construction at 0x000101f95660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f9567c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f95698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f95664) */
/* WARNING: Removing unreachable block (ram,0x000101f95680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f955a8(void)

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
  func_0x000107c5b750();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101f94ddc();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101f95054();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101f956dc);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e484a0) = lVar5;
    *(long *)(lVar4 + _DAT_112e484a8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101f956dc; end: 101f95703; -[SCSpectaclesOnboardingScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101f956dc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f955a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f95704; end: 101f95747; -[SCSpectaclesOnboardingScopeGraphBridgeSaberEntryPoint end] */

void FUN_101f95704(undefined8 param_1)

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



/* Entry: 101f95748; end: 101f958df;  */

void FUN_101f95748(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcd) || (param_3 != -0x7ffffffef0fd9eb0)) {
      uVar2 = 0xd000000000000033;
      func_0x000107c605b8(0xd000000000000033,0x800000010f026150,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpectaclesOnboardingScopeGraphBridge/SCSpectaclesOnboardingScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x60,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f958e0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59614();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f958e0; end: 101f9598b; -[SCSpectaclesOnboardingScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101f958e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f95748(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f9598c; end: 101f959f7; -[SCSpectaclesOnboardingScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f9598c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e48570,0);
  *(undefined8 *)(param_1 + _DAT_112e48578) = 0;
  *(undefined8 *)(param_1 + _DAT_112e48580) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f959f8; end: 101f95a2b;  */

void FUN_101f959f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f95a2c; end: 101f95a73; -[SCSpectaclesOnboardingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f95a58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f95a5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f95a2c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e48570);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e48578));
  return;
}



/* Entry: 101f95a74; end: 101f95a93;  */

void FUN_101f95a74(void)

{
  func_0x000107c61168(&PTR_PTR_112810708);
  return;
}



/* Entry: 101f95a94; end: 101f95adb; -[SCSCSpectaclesOnboardingScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f95a94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e485b0;
  func_0x000107c61428(param_1 + _DAT_112e485b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f95adc; end: 101f95b33; -[SCSCSpectaclesOnboardingScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f95adc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e485b0;
  func_0x000107c61428(param_1 + _DAT_112e485b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f95b34; end: 101f95c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f95b34(undefined8 param_1,long param_2)

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
    FUN_101f95034();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e484d8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f95c0c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e484e0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e485b8);
    *(long **)(unaff_x20 + _DAT_112e485b8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101f95c0c; end: 101f95c33; -[SCSCSpectaclesOnboardingScopedServicesSaberEntryPoint begin] */

void FUN_101f95c0c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f95b34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f95c34; end: 101f95dab;  */

/* WARNING: Possible PIC construction at 0x000101f95c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f95d34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f95ca0) */
/* WARNING: Removing unreachable block (ram,0x000101f95d38) */
/* WARNING: Removing unreachable block (ram,0x000101f95d50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f95c34(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e485b8);
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


