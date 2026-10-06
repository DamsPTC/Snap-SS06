/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f905dc; end: 101f90653;  */

undefined ** FUN_101f905dc(void)

{
  return &PTR_DAT_112fe9438;
}



/* Entry: 101f90654; end: 101f9069b; -[SCSpectaclesLensManagementScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f90654(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e47fc0;
  func_0x000107c61428(param_1 + _DAT_112e47fc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f9069c; end: 101f906f3; -[SCSpectaclesLensManagementScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f9069c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e47fc0;
  func_0x000107c61428(param_1 + _DAT_112e47fc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f906f4; end: 101f9073b; -[SCSpectaclesLensManagementScopeGraphBridgeSaberEntryPoint sCLensCreatorProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f906f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e47fc8;
  func_0x000107c61428(param_1 + _DAT_112e47fc8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f9073c; end: 101f90747; -[SCSpectaclesLensManagementScopeGraphBridgeSaberEntryPoint setSCLensCreatorProfileScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f9073c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e47fc8;
  func_0x000107c61428(param_1 + _DAT_112e47fc8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f90748; end: 101f9078f; -[SCSpectaclesLensManagementScopeGraphBridgeSaberEntryPoint spectaclesLensManagementScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f90748(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e47fd0;
  func_0x000107c61428(param_1 + _DAT_112e47fd0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f90790; end: 101f9079b; -[SCSpectaclesLensManagementScopeGraphBridgeSaberEntryPoint setSpectaclesLensManagementScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f90790(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e47fd0;
  func_0x000107c61428(param_1 + _DAT_112e47fd0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f9079c; end: 101f907fb;  */

void FUN_101f9079c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 101f907fc; end: 101f909b7;  */

/* WARNING: Possible PIC construction at 0x000101f90914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f90938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f90948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f9098c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f9094c) */
/* WARNING: Removing unreachable block (ram,0x000101f9093c) */
/* WARNING: Removing unreachable block (ram,0x000101f90918) */
/* WARNING: Removing unreachable block (ram,0x000101f90990) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f907fc(void)

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
  func_0x000107c50ea8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5b738();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_101f8fe18();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_101f90090();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f909b8);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e47ee8) = lVar5;
      *(long *)(lVar3 + _DAT_112e47ef0) = unaff_x20;
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



/* Entry: 101f909b8; end: 101f909df; -[SCSpectaclesLensManagementScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101f909b8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f907fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f909e0; end: 101f90a23; -[SCSpectaclesLensManagementScopeGraphBridgeSaberEntryPoint end] */

void FUN_101f909e0(undefined8 param_1)

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



/* Entry: 101f90a24; end: 101f90c27;  */

void FUN_101f90a24(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef0fdaae0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000020,0x800000010f025520,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000037;
        if (((param_2 != -0x2fffffffffffffc9) || (param_3 != -0x7ffffffef0fdaab0)) &&
           (func_0x000107c605b8(0xd000000000000037,0x800000010f025550,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SpectaclesLensManagementScopeGraphBridge/SCSpectaclesLensManagementScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x68,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101f90c28);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59604();
        goto LAB_101f90ab0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58450();
  }
LAB_101f90ab0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f90c28; end: 101f90cd3; -[SCSpectaclesLensManagementScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101f90c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f90a24(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f90cd4; end: 101f90d4b; -[SCSpectaclesLensManagementScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f90cd4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e47fc0,0);
  *(undefined8 *)(param_1 + _DAT_112e47fc8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e47fd0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e47fd8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f90d4c; end: 101f90d7f;  */

void FUN_101f90d4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f90d80; end: 101f90dd7; -[SCSpectaclesLensManagementScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f90dac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f90db0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f90d80(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e47fc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47fc8));
  return;
}



/* Entry: 101f90dd8; end: 101f90df7;  */

void FUN_101f90dd8(void)

{
  func_0x000107c61168(&PTR_PTR_11280fdf0);
  return;
}



/* Entry: 101f90df8; end: 101f90e3f; -[SCSCSpectaclesLensManagementScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f90df8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e48008;
  func_0x000107c61428(param_1 + _DAT_112e48008,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f90e40; end: 101f90e97; -[SCSCSpectaclesLensManagementScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f90e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e48008;
  func_0x000107c61428(param_1 + _DAT_112e48008,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f90e98; end: 101f90f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f90e98(undefined8 param_1,long param_2)

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
    FUN_101f90070();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e47f20) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f90f70);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e47f28);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e48010);
    *(long **)(unaff_x20 + _DAT_112e48010) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101f90f70; end: 101f90f97; -[SCSCSpectaclesLensManagementScopedServicesSaberEntryPoint begin] */

void FUN_101f90f70(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f90e98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f90f98; end: 101f9110f;  */

/* WARNING: Possible PIC construction at 0x000101f91000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f91098: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f91004) */
/* WARNING: Removing unreachable block (ram,0x000101f9109c) */
/* WARNING: Removing unreachable block (ram,0x000101f910b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f90f98(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e48010);
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



/* Entry: 101f91110; end: 101f91117;  */

void FUN_101f91110(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f91118; end: 101f9114b; -[SCSCSpectaclesLensManagementScopedServicesSaberEntryPoint end] */

void FUN_101f91118(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f90f98();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f9114c; end: 101f9126b;  */

void FUN_101f9114c(long param_1,long param_2,long param_3)

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
                        "SpectaclesLensManagementScopeGraphBridge/SCSCSpectaclesLensManagementScopedServicesSaberEntryPoint.swift"
                        ,0x68,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f9126c);
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



/* Entry: 101f9126c; end: 101f91317; -[SCSCSpectaclesLensManagementScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f9126c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f9114c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f91318; end: 101f91377; -[SCSCSpectaclesLensManagementScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f91318(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e48008,0);
  *(undefined8 *)(param_1 + _DAT_112e48010) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f91378; end: 101f913ab;  */

void FUN_101f91378(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f913ac; end: 101f913e3; -[SCSCSpectaclesLensManagementScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f913ac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e48008);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e48010));
  return;
}



/* Entry: 101f913e4; end: 101f91403;  */

void FUN_101f913e4(void)

{
  func_0x000107c61168(&PTR_PTR_11280fec0);
  return;
}



/* Entry: 101f91404; end: 101f9146f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f91404(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f917f8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e48048) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101f91470; end: 101f914db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f91470(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e48048) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f914dc; end: 101f9153b; -[_TtC51SpectaclesOTAUpdatePageScopedFactoryServiceProvider39SCSpectaclesOTAUpdatePageScopedServices init] */

void FUN_101f914dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesOTAUpdatePageScopedFactoryServiceProvider.SCSpectaclesOTAUpdatePageScopedServices"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f91508);
  (*pcVar1)();
}



/* Entry: 101f9153c; end: 101f9154b; -[_TtC51SpectaclesOTAUpdatePageScopedFactoryServiceProvider39SCSpectaclesOTAUpdatePageScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f9153c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e48048));
  return;
}



/* Entry: 101f9154c; end: 101f915b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f9154c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104adc88;
  func_0x000107c613fc(&UNK_1104adc88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101f918d4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f915b8; end: 101f91653;  */

void FUN_101f915b8(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104adb98;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104adb98;
  return;
}



/* Entry: 101f91654; end: 101f9168b;  */

void FUN_101f91654(long *param_1)

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



/* Entry: 101f9168c; end: 101f91693;  */

undefined8 FUN_101f9168c(void)

{
  return 0x1b;
}



/* Entry: 101f91694; end: 101f917c7;  */

void FUN_101f91694(undefined8 *param_1)

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
  puVar1 = &UNK_1104adcb0;
  func_0x000107c613fc(&UNK_1104adcb0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f918ac;
  func_0x00010058fa64(FUN_101f918ac,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f917c8; end: 101f917f7;  */

undefined ** FUN_101f917c8(void)

{
  return &PTR_DAT_112fe92f8;
}



/* Entry: 101f917f8; end: 101f91817;  */

void FUN_101f917f8(void)

{
  func_0x000107c61168(&PTR_PTR_11280ff80);
  return;
}



/* Entry: 101f91818; end: 101f91867;  */

undefined1  [16] FUN_101f91818(void)

{
  return ZEXT816(0x1104adbe8);
}



/* Entry: 101f91868; end: 101f918ab;  */

void FUN_101f91868(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e480b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9be8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e480b0 = puVar1;
  return;
}



/* Entry: 101f918ac; end: 101f918d3;  */

void FUN_101f918ac(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101f918d4; end: 101f918e7;  */

void FUN_101f918d4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f918e8; end: 101f91bf3;  */

void FUN_101f918e8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e480c8,&UNK_10da3e120);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e480d0,&UNK_10da3e130);
  puVar2 = &UNK_1104add60;
  func_0x000107c613fc(&UNK_1104add60,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar8 = 0x101f91bfc;
  func_0x0001000823a8(0x101f91bfc,puVar2);
  func_0x000100082720("SCSpectaclesOTAUpdatePageEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_101f91654;
  func_0x0001000823a8(FUN_101f91654,0);
  pcVar4 = "SCSpectaclesOTAUpdatePageScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCSpectaclesOTAUpdatePageScopedServicesCleanupRelayServiceProvider",0x42,2);
  FUN_101f92928();
  func_0x000100082720("SpectaclesOTAUpdatePageScopeGraphBridgeServicesServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e480d8,&UNK_10da3e128);
  puVar2 = &UNK_1104add88;
  func_0x000107c613fc(&UNK_1104add88,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar3;
  *(char **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x101f91c08;
  func_0x0001000823a8(0x101f91c08,puVar2);
  func_0x000100082720("SCSpectaclesOTAUpdatePageScopeInitializationPluginRegistryServiceProvider",
                      0x49,2);
  func_0x0001000285a8(0x112e48050,&UNK_10da3de60);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x101f91c14;
  func_0x0001000823a8(0x101f91c14,uVar5);
  func_0x000100082720("SCSpectaclesOTAUpdatePageScopeInitializationServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e48040,&UNK_10da3de50);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101f91c1c;
  func_0x0001000823a8(0x101f91c1c,uVar6);
  func_0x000100082720("SCSpectaclesOTAUpdatePageScopedServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104addb0;
  func_0x000107c613fc(&UNK_1104addb0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  uVar7 = 0x101f91c24;
  func_0x0001000823a8(0x101f91c24,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCSpectaclesOTAUpdatePageScopeEntryPointProvider",0x30,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101f91bf4; end: 101f91c2b;  */

void FUN_101f91bf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e480c8,&UNK_10da3e120);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e480d0,&UNK_10da3e130);
  puVar2 = &UNK_1104add60;
  func_0x000107c613fc(&UNK_1104add60,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  uVar3 = 0x101f91bfc;
  func_0x0001000823a8(0x101f91bfc,puVar2);
  func_0x000100082720("SCSpectaclesOTAUpdatePageEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101f91654;
  func_0x0001000823a8(FUN_101f91654,0);
  pcVar5 = "SCSpectaclesOTAUpdatePageScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCSpectaclesOTAUpdatePageScopedServicesCleanupRelayServiceProvider",0x42,2);
  FUN_101f92928();
  func_0x000100082720("SpectaclesOTAUpdatePageScopeGraphBridgeServicesServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e480d8,&UNK_10da3e128);
  puVar2 = &UNK_1104add88;
  func_0x000107c613fc(&UNK_1104add88,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar4;
  *(char **)(puVar2 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x101f91c08;
  func_0x0001000823a8(0x101f91c08,puVar2);
  func_0x000100082720("SCSpectaclesOTAUpdatePageScopeInitializationPluginRegistryServiceProvider",
                      0x49,2);
  func_0x0001000285a8(0x112e48050,&UNK_10da3de60);
  func_0x000107c6157c(uVar6);
  uVar8 = 0x101f91c14;
  func_0x0001000823a8(0x101f91c14,uVar6);
  func_0x000100082720("SCSpectaclesOTAUpdatePageScopeInitializationServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e48040,&UNK_10da3de50);
  func_0x000107c6157c(uVar8);
  uVar7 = 0x101f91c1c;
  func_0x0001000823a8(0x101f91c1c,uVar8);
  func_0x000100082720("SCSpectaclesOTAUpdatePageScopedServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104addb0;
  func_0x000107c613fc(&UNK_1104addb0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x101f91c24;
  func_0x0001000823a8(0x101f91c24,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCSpectaclesOTAUpdatePageScopeEntryPointProvider",0x30,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101f91c2c; end: 101f91cdb;  */

void FUN_101f91c2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_101f92034();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101f91e70(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f91cdc; end: 101f91d4b;  */

undefined8 FUN_101f91cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101f91e70(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101f91d4c; end: 101f91d7f;  */

void FUN_101f91d4c(void)

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



/* Entry: 101f91d80; end: 101f91d87;  */

undefined8 FUN_101f91d80(void)

{
  return 0x1b;
}



/* Entry: 101f91d88; end: 101f91e0b;  */

void FUN_101f91d88(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f92074,param_2,FUN_101f92078,param_2,FUN_101f920a0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f91e0c; end: 101f91e5b;  */

undefined8 FUN_101f91e0c(void)

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



/* Entry: 101f91e5c; end: 101f91e6f;  */

void FUN_101f91e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104addc8;
  return;
}



/* Entry: 101f91e70; end: 101f92017;  */

void FUN_101f91e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a9bf0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0258b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f019ff0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101f92018; end: 101f92033;  */

undefined ** FUN_101f92018(void)

{
  return &PTR_DAT_112fe92f8;
}



/* Entry: 101f92034; end: 101f92053;  */

void FUN_101f92034(void)

{
  func_0x000107c61168(&PTR_PTR_112e48148);
  return;
}



/* Entry: 101f92054; end: 101f92077;  */

undefined1  [16] FUN_101f92054(void)

{
  return ZEXT816(0x1104ade08);
}



/* Entry: 101f92078; end: 101f9209f;  */

void FUN_101f92078(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f920a0; end: 101f920a7;  */

undefined8 FUN_101f920a0(void)

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



/* Entry: 101f920a8; end: 101f920e3;  */

void FUN_101f920a8(undefined8 *param_1,undefined8 param_2)

{
  FUN_101f920e4();
  func_0x0001000a7f38("SCSpectaclesOTAUpdatePageScopeInitializationPluginRegistryServiceProvider",
                      0x49,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101f920e4; end: 101f922cf;  */

void FUN_101f920e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106ce970;
  ppuVar4 = &PTR_DAT_112fe92f8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e481b8;
  func_0x0001000285a8(0x112e481b8,&UNK_10da3e290);
  func_0x0001000a6ee8(&UNK_1104ade08,
                      "SCSpectaclesOTAUpdatePageEntryPointWrapperScopeInitializationPluginKey",0x46,
                      2,FUN_101f92344,param_1,uVar2,&UNK_1104ade08,&PTR_DAT_112e480e0);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104ade58;
  func_0x000107c613fc(&UNK_1104ade58,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104adc28,
                      "SCSpectaclesOTAUpdatePageScopedServicesScopeInitializationPluginKey",0x43,2,
                      FUN_101f923f4,puVar3,uVar2,&UNK_1104adc28,&PTR_DAT_112e48058);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104ade80;
  func_0x000107c613fc(&UNK_1104ade80,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104ae038,
                      "SpectaclesOTAUpdatePageScopeGraphBridgeScopeInitializationPluginKey",0x43,2,
                      FUN_101f923fc,puVar3,uVar2,&UNK_1104ae038,&PTR_DAT_112e48248);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e481c0;
  func_0x0001000285a8(0x112e481c0,&UNK_10da3e298);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101f922d0; end: 101f92343;  */

void FUN_101f922d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101f92470;
  func_0x0001000823a8(0x101f92470,param_3);
  func_0x000100082720("SCSpectaclesOTAUpdatePageEntryPointWrapperScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f92344; end: 101f9234b;  */

void FUN_101f92344(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101f92470;
  func_0x0001000823a8();
  func_0x000100082720("SCSpectaclesOTAUpdatePageEntryPointWrapperScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f9234c; end: 101f923f3;  */

void FUN_101f9234c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104adea8;
  func_0x000107c613fc(&UNK_1104adea8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101f92468;
  func_0x0001000823a8(FUN_101f92468,puVar1);
  func_0x000100082720("SCSpectaclesOTAUpdatePageScopedServicesScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101f923f4; end: 101f923fb;  */

void FUN_101f923f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104adea8;
  func_0x000107c613fc(&UNK_1104adea8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101f92468;
  func_0x0001000823a8(FUN_101f92468,puVar3);
  func_0x000100082720("SCSpectaclesOTAUpdatePageScopedServicesScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101f923fc; end: 101f9243b;  */

void FUN_101f923fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f92a0c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpectaclesOTAUpdatePageScopeGraphBridgeScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f9243c; end: 101f92467;  */

void FUN_101f9243c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f92468; end: 101f92477;  */

void FUN_101f92468(undefined8 *param_1)

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
  puVar1 = &UNK_1104adcb0;
  func_0x000107c613fc(&UNK_1104adcb0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f918ac;
  func_0x00010058fa64(FUN_101f918ac,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f92478; end: 101f924ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f92478(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101f92838();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e481c8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e481d0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f92500);
  (*pcVar1)();
}



/* Entry: 101f92500; end: 101f9255f; -[_TtC39SpectaclesOTAUpdatePageScopeGraphBridge54SpectaclesOTAUpdatePageScopeGraphBridgeSaberEntryPoint init] */

void FUN_101f92500(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesOTAUpdatePageScopeGraphBridge.SpectaclesOTAUpdatePageScopeGraphBridgeSaberEntryPoint"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f9252c);
  (*pcVar1)();
}



/* Entry: 101f92560; end: 101f92597; -[_TtC39SpectaclesOTAUpdatePageScopeGraphBridge54SpectaclesOTAUpdatePageScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f9257c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f92580) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f92560(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e481c8));
  return;
}



/* Entry: 101f92598; end: 101f925bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f92598(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e481d0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e481c8));
  return;
}



/* Entry: 101f925c0; end: 101f925df;  */

void FUN_101f925c0(void)

{
  func_0x000107c61168(&PTR_PTR_112810040);
  return;
}



/* Entry: 101f925e0; end: 101f92667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f925e0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e48200) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e48208);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f92668);
  (*pcVar2)();
}



/* Entry: 101f92668; end: 101f9274f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f92668(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e48200);
  *(undefined **)(unaff_x20 + _DAT_112e48200) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e48208);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e48208))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104adf98;
  func_0x000107c613fc(&UNK_1104adf98,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101f92754,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101f92750; end: 101f9275b;  */

void FUN_101f92750(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f9275c; end: 101f927bb; -[_TtC39SpectaclesOTAUpdatePageScopeGraphBridge54SCSpectaclesOTAUpdatePageScopedServicesSaberEntryPoint init] */

void FUN_101f9275c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesOTAUpdatePageScopeGraphBridge.SCSpectaclesOTAUpdatePageScopedServicesSaberEntryPoint"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f92788);
  (*pcVar1)();
}



/* Entry: 101f927bc; end: 101f927f3; -[_TtC39SpectaclesOTAUpdatePageScopeGraphBridge54SCSpectaclesOTAUpdatePageScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f927bc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e48208));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e48200));
  return;
}



/* Entry: 101f927f4; end: 101f927f7;  */

void FUN_101f927f4(void)

{
  return;
}



/* Entry: 101f927f8; end: 101f92817;  */

void FUN_101f927f8(void)

{
  FUN_101f92668();
  return;
}



/* Entry: 101f92818; end: 101f92837;  */

void FUN_101f92818(void)

{
  func_0x000107c61168(&PTR_PTR_112810108);
  return;
}



/* Entry: 101f92838; end: 101f92907;  */

undefined8 FUN_101f92838(void)

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
  
  func_0x000107c61428(0x112e48238,&uStack_40,0x20,0);
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
    FUN_101f92908();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101f92908; end: 101f92927;  */

void FUN_101f92908(void)

{
  func_0x000107c61168(&PTR_PTR_1128101d0);
  return;
}



/* Entry: 101f92928; end: 101f92993;  */

void FUN_101f92928(void)

{
  func_0x0001000285a8(0x112e48240,&UNK_10da3e368);
  func_0x0001000823a8(0x101f92968,0);
  return;
}



/* Entry: 101f92994; end: 101f929cf; -[_TtC39SpectaclesOTAUpdatePageScopeGraphBridge47SpectaclesOTAUpdatePageScopeGraphBridgeServices init] */

void FUN_101f92994(undefined8 param_1)

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



/* Entry: 101f929d0; end: 101f92a03;  */

void FUN_101f929d0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f92a04; end: 101f92a0b;  */

undefined8 FUN_101f92a04(void)

{
  return 0x1b;
}



/* Entry: 101f92a0c; end: 101f92b83;  */

void FUN_101f92a0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104adfe0;
  func_0x000107c613fc(&UNK_1104adfe0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101f92b84,puVar1);
  return;
}



/* Entry: 101f92b84; end: 101f92b8b;  */

void FUN_101f92b84(undefined8 *param_1)

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
  func_0x000107c61428(0x112e48238,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e48238,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104ae078;
  func_0x000107c613fc(&UNK_1104ae078,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101f92c38;
  func_0x00010058fa64(0x101f92c38,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f92b8c; end: 101f92be7;  */

void FUN_101f92b8c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e48238,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e48238,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101f92be8; end: 101f92c3f;  */

undefined ** FUN_101f92be8(void)

{
  return &PTR_DAT_112fe92f8;
}



/* Entry: 101f92c40; end: 101f92c87; -[SCSpectaclesOTAUpdatePageScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f92c40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e48298;
  func_0x000107c61428(param_1 + _DAT_112e48298,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f92c88; end: 101f92cdf; -[SCSpectaclesOTAUpdatePageScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f92c88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e48298;
  func_0x000107c61428(param_1 + _DAT_112e48298,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f92ce0; end: 101f92d27; -[SCSpectaclesOTAUpdatePageScopeGraphBridgeSaberEntryPoint spectaclesOTAUpdatePageScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f92ce0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e482a0;
  func_0x000107c61428(param_1 + _DAT_112e482a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f92d28; end: 101f92d8b; -[SCSpectaclesOTAUpdatePageScopeGraphBridgeSaberEntryPoint setSpectaclesOTAUpdatePageScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f92d28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e482a0;
  func_0x000107c61428(param_1 + _DAT_112e482a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f92d8c; end: 101f92ebf;  */

/* WARNING: Possible PIC construction at 0x000101f92e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f92e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f92e7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f92e48) */
/* WARNING: Removing unreachable block (ram,0x000101f92e64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f92d8c(void)

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
  func_0x000107c5b74c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101f925c0();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101f92838();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101f92ec0);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e481c8) = lVar5;
    *(long *)(lVar4 + _DAT_112e481d0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101f92ec0; end: 101f92ee7; -[SCSpectaclesOTAUpdatePageScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101f92ec0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f92d8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f92ee8; end: 101f92f2b; -[SCSpectaclesOTAUpdatePageScopeGraphBridgeSaberEntryPoint end] */

void FUN_101f92ee8(undefined8 param_1)

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



/* Entry: 101f92f2c; end: 101f930c3;  */

void FUN_101f92f2c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffca) || (param_3 != -0x7ffffffef0fda490)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000036,0x800000010f025b70,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpectaclesOTAUpdatePageScopeGraphBridge/SCSpectaclesOTAUpdatePageScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x66,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f930c4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59610();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}


