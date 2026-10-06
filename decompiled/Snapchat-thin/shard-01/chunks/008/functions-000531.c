/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014eb08c; end: 1014eb0d3; -[SCNGOCodeVerificationScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014eb08c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daaae0;
  func_0x000107c61428(param_1 + _DAT_112daaae0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014eb0d4; end: 1014eb12b; -[SCNGOCodeVerificationScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014eb0d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daaae0;
  func_0x000107c61428(param_1 + _DAT_112daaae0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1014eb12c; end: 1014eb173; -[SCNGOCodeVerificationScopeGraphBridgeSaberEntryPoint nGOCodeVerificationScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014eb12c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daaae8;
  func_0x000107c61428(param_1 + _DAT_112daaae8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1014eb174; end: 1014eb1d7; -[SCNGOCodeVerificationScopeGraphBridgeSaberEntryPoint setNGOCodeVerificationScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014eb174(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daaae8;
  func_0x000107c61428(param_1 + _DAT_112daaae8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1014eb1d8; end: 1014eb30b;  */

/* WARNING: Possible PIC construction at 0x0001014eb290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014eb2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014eb2c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014eb294) */
/* WARNING: Removing unreachable block (ram,0x0001014eb2b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014eb1d8(void)

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
  func_0x000107c4d3e0();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1014eaa0c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1014eac84();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014eb30c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112daaa10) = lVar5;
    *(long *)(lVar4 + _DAT_112daaa18) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1014eb30c; end: 1014eb333; -[SCNGOCodeVerificationScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1014eb30c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1014eb1d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014eb334; end: 1014eb377; -[SCNGOCodeVerificationScopeGraphBridgeSaberEntryPoint end] */

void FUN_1014eb334(undefined8 param_1)

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



/* Entry: 1014eb378; end: 1014eb50f;  */

void FUN_1014eb378(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef10781d0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000032,0x800000010ef87e30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "NGOCodeVerificationScopeGraphBridge/SCNGOCodeVerificationScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5e,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014eb510);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56948();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1014eb510; end: 1014eb5bb; -[SCNGOCodeVerificationScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1014eb510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1014eb378(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1014eb5bc; end: 1014eb627; -[SCNGOCodeVerificationScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014eb5bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112daaae0,0);
  *(undefined8 *)(param_1 + _DAT_112daaae8) = 0;
  *(undefined8 *)(param_1 + _DAT_112daaaf0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014eb628; end: 1014eb65b;  */

void FUN_1014eb628(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014eb65c; end: 1014eb6a3; -[SCNGOCodeVerificationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014eb688: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014eb68c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014eb65c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112daaae0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daaae8));
  return;
}



/* Entry: 1014eb6a4; end: 1014eb6c3;  */

void FUN_1014eb6a4(void)

{
  func_0x000107c61168(&PTR_PTR_1127dc8b8);
  return;
}



/* Entry: 1014eb6c4; end: 1014eb70b; -[SCSCNGOCodeVerificationScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014eb6c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daab20;
  func_0x000107c61428(param_1 + _DAT_112daab20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014eb70c; end: 1014eb763; -[SCSCNGOCodeVerificationScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014eb70c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daab20;
  func_0x000107c61428(param_1 + _DAT_112daab20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1014eb764; end: 1014eb83b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014eb764(undefined8 param_1,long param_2)

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
    FUN_1014eac64();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112daaa48) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014eb83c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112daaa50);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112daab28);
    *(long **)(unaff_x20 + _DAT_112daab28) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1014eb83c; end: 1014eb863; -[SCSCNGOCodeVerificationScopedServicesSaberEntryPoint begin] */

void FUN_1014eb83c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1014eb764();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014eb864; end: 1014eb9db;  */

/* WARNING: Possible PIC construction at 0x0001014eb8cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014eb964: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014eb8d0) */
/* WARNING: Removing unreachable block (ram,0x0001014eb968) */
/* WARNING: Removing unreachable block (ram,0x0001014eb980) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014eb864(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112daab28);
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



/* Entry: 1014eb9dc; end: 1014eb9e3;  */

void FUN_1014eb9dc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1014eb9e4; end: 1014eba17; -[SCSCNGOCodeVerificationScopedServicesSaberEntryPoint end] */

void FUN_1014eb9e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1014eb864();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1014eba18; end: 1014ebb37;  */

void FUN_1014eba18(long param_1,long param_2,long param_3)

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
                        "NGOCodeVerificationScopeGraphBridge/SCSCNGOCodeVerificationScopedServicesSaberEntryPoint.swift"
                        ,0x5e,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014ebb38);
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



/* Entry: 1014ebb38; end: 1014ebbe3; -[SCSCNGOCodeVerificationScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1014ebb38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1014eba18(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1014ebbe4; end: 1014ebc43; -[SCSCNGOCodeVerificationScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ebbe4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112daab20,0);
  *(undefined8 *)(param_1 + _DAT_112daab28) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014ebc44; end: 1014ebc77;  */

void FUN_1014ebc44(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014ebc78; end: 1014ebcaf; -[SCSCNGOCodeVerificationScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ebc78(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112daab20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daab28));
  return;
}



/* Entry: 1014ebcb0; end: 1014ebccf;  */

void FUN_1014ebcb0(void)

{
  func_0x000107c61168(&PTR_PTR_1127dc980);
  return;
}



/* Entry: 1014ebcd0; end: 1014ebd3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ebcd0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1014ec0c4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112daab60) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1014ebd3c; end: 1014ebda7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ebd3c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112daab60) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014ebda8; end: 1014ebe07; -[_TtC41ShakeToReportScopedFactoryServiceProvider29SCShakeToReportScopedServices init] */

void FUN_1014ebda8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShakeToReportScopedFactoryServiceProvider.SCShakeToReportScopedServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014ebdd4);
  (*pcVar1)();
}



/* Entry: 1014ebe08; end: 1014ebe17; -[_TtC41ShakeToReportScopedFactoryServiceProvider29SCShakeToReportScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ebe08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112daab60));
  return;
}



/* Entry: 1014ebe18; end: 1014ebe83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ebe18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103d3258;
  func_0x000107c613fc(&UNK_1103d3258,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1014ec15c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1014ebe84; end: 1014ebf1f;  */

void FUN_1014ebe84(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103d3168;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103d3168;
  return;
}



/* Entry: 1014ebf20; end: 1014ebf57;  */

void FUN_1014ebf20(long *param_1)

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



/* Entry: 1014ebf58; end: 1014ebf5f;  */

undefined8 FUN_1014ebf58(void)

{
  return 0x1b;
}



/* Entry: 1014ebf60; end: 1014ec093;  */

void FUN_1014ebf60(undefined8 *param_1)

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
  puVar1 = &UNK_1103d3280;
  func_0x000107c613fc(&UNK_1103d3280,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1014ec134;
  func_0x00010058fa64(FUN_1014ec134,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1014ec094; end: 1014ec0c3;  */

undefined ** FUN_1014ec094(void)

{
  return &PTR_DAT_113066ee0;
}



/* Entry: 1014ec0c4; end: 1014ec0e3;  */

void FUN_1014ec0c4(void)

{
  func_0x000107c61168(&PTR_PTR_1127dca40);
  return;
}



/* Entry: 1014ec0e4; end: 1014ec133;  */

undefined1  [16] FUN_1014ec0e4(void)

{
  return ZEXT816(0x1103d31b8);
}



/* Entry: 1014ec134; end: 1014ec15b;  */

void FUN_1014ec134(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1014ec15c; end: 1014ec16f;  */

void FUN_1014ec15c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1014ec170; end: 1014ec4c7;  */

void FUN_1014ec170(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112daabd8,&UNK_10d9534a8);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112daabe0,&UNK_10d9534b0);
  puVar2 = &UNK_1103d32e0;
  func_0x000107c613fc(&UNK_1103d32e0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar10 = 0x1014ec4d0;
  func_0x0001000823a8(0x1014ec4d0,puVar2);
  func_0x000100082720("SIGCodematizerEntryPointWrapperServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daabe8,&UNK_10d9534b8);
  func_0x000107c6157c(uVar10);
  uVar3 = 0x1014ec4d8;
  func_0x0001000823a8(0x1014ec4d8,uVar10);
  func_0x000100082720("SIGCodematizerServicesServiceProvider",0x25,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1014ebf20;
  func_0x0001000823a8(FUN_1014ebf20,0);
  func_0x000100082720("SCShakeToReportScopedServicesCleanupRelayServiceProvider",0x38,2);
  uVar5 = uVar3;
  FUN_1014ed328();
  func_0x000100082720("ShakeToReportScopeGraphBridgeServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daabf0,&UNK_10d9534c8);
  puVar2 = &UNK_1103d3308;
  func_0x000107c613fc(&UNK_1103d3308,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(code **)(puVar2 + 0x18) = pcVar4;
  *(undefined8 *)(puVar2 + 0x20) = uVar10;
  *(undefined8 *)(puVar2 + 0x28) = uVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1014ec4e0;
  func_0x0001000823a8(0x1014ec4e0,puVar2);
  func_0x000100082720("SCShakeToReportScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112daab68,&UNK_10d953270);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1014ec4ec;
  func_0x0001000823a8(0x1014ec4ec,uVar6);
  func_0x000100082720("SCShakeToReportScopeInitializationServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daab58,&UNK_10d953260);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1014ec4f4;
  func_0x0001000823a8(0x1014ec4f4,uVar7);
  func_0x000100082720("SCShakeToReportScopedServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1103d3330;
  func_0x000107c613fc(&UNK_1103d3330,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar9 = FUN_1014ec528;
  func_0x0001000823a8(FUN_1014ec528,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCShakeToReportScopeEntryPointProvider",0x26,2);
  *param_1 = pcVar9;
  return;
}



/* Entry: 1014ec4c8; end: 1014ec4fb;  */

void FUN_1014ec4c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112daabd8,&UNK_10d9534a8);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112daabe0,&UNK_10d9534b0);
  puVar2 = &UNK_1103d32e0;
  func_0x000107c613fc(&UNK_1103d32e0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  uVar10 = 0x1014ec4d0;
  func_0x0001000823a8(0x1014ec4d0,puVar2);
  func_0x000100082720("SIGCodematizerEntryPointWrapperServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daabe8,&UNK_10d9534b8);
  func_0x000107c6157c(uVar10);
  uVar3 = 0x1014ec4d8;
  func_0x0001000823a8(0x1014ec4d8,uVar10);
  func_0x000100082720("SIGCodematizerServicesServiceProvider",0x25,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1014ebf20;
  func_0x0001000823a8(FUN_1014ebf20,0);
  func_0x000100082720("SCShakeToReportScopedServicesCleanupRelayServiceProvider",0x38,2);
  uVar5 = uVar3;
  FUN_1014ed328();
  func_0x000100082720("ShakeToReportScopeGraphBridgeServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daabf0,&UNK_10d9534c8);
  puVar2 = &UNK_1103d3308;
  func_0x000107c613fc(&UNK_1103d3308,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(code **)(puVar2 + 0x18) = pcVar4;
  *(undefined8 *)(puVar2 + 0x20) = uVar10;
  *(undefined8 *)(puVar2 + 0x28) = uVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1014ec4e0;
  func_0x0001000823a8(0x1014ec4e0,puVar2);
  func_0x000100082720("SCShakeToReportScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112daab68,&UNK_10d953270);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1014ec4ec;
  func_0x0001000823a8(0x1014ec4ec,uVar6);
  func_0x000100082720("SCShakeToReportScopeInitializationServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daab58,&UNK_10d953260);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1014ec4f4;
  func_0x0001000823a8(0x1014ec4f4,uVar7);
  func_0x000100082720("SCShakeToReportScopedServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1103d3330;
  func_0x000107c613fc(&UNK_1103d3330,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar9 = FUN_1014ec528;
  func_0x0001000823a8(FUN_1014ec528,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCShakeToReportScopeEntryPointProvider",0x26,2);
  *param_1 = pcVar9;
  return;
}



/* Entry: 1014ec4fc; end: 1014ec527;  */

void FUN_1014ec4fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014ec528; end: 1014ec52f;  */

void FUN_1014ec528(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103d3168;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103d3168;
  return;
}



/* Entry: 1014ec530; end: 1014ec617;  */

void FUN_1014ec530(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_1014ec848();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1014ec748(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014ec618; end: 1014ec653;  */

void FUN_1014ec618(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014ec654; end: 1014ec6a7;  */

void FUN_1014ec654(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014ec6a8; end: 1014ec6af;  */

undefined8 FUN_1014ec6a8(void)

{
  return 0x1b;
}



/* Entry: 1014ec6b0; end: 1014ec733;  */

void FUN_1014ec6b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1014ec898,param_2,FUN_1014ec89c,param_2,0x1014ec8c4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1014ec734; end: 1014ec747;  */

void FUN_1014ec734(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1103d3348;
  return;
}



/* Entry: 1014ec748; end: 1014ec82b;  */

void FUN_1014ec748(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_1014f9c5c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  func_0x0001014f9a70();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c6157c();
  func_0x0001014f9aa4();
  func_0x000107c61574(param_1);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar3 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014ec82c);
  (*pcVar1)();
}



/* Entry: 1014ec82c; end: 1014ec847;  */

undefined ** FUN_1014ec82c(void)

{
  return &PTR_DAT_113066ee0;
}



/* Entry: 1014ec848; end: 1014ec867;  */

void FUN_1014ec848(void)

{
  func_0x000107c61168(&PTR_PTR_112daac60);
  return;
}



/* Entry: 1014ec868; end: 1014ec89b;  */

undefined1  [16] FUN_1014ec868(void)

{
  return ZEXT816(0x1103d3388);
}



/* Entry: 1014ec89c; end: 1014ec8ef;  */

void FUN_1014ec89c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014ec8f0; end: 1014ec92b;  */

void FUN_1014ec8f0(undefined8 *param_1,undefined8 param_2)

{
  FUN_1014ec92c();
  func_0x0001000a7f38("SCShakeToReportScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1014ec92c; end: 1014ecbbf;  */

void FUN_1014ec92c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074db40;
  ppuVar4 = &PTR_DAT_113066ee0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1103d33f8;
  func_0x000107c613fc(&UNK_1103d33f8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112daacd8;
  func_0x0001000285a8(0x112daacd8,&UNK_10d953628);
  func_0x0001000a6ee8(&UNK_1103d31f8,"SCShakeToReportScopedServicesScopeInitializationPluginKey",
                      0x39,2,FUN_1014ecbc0,puVar2,uVar3,&UNK_1103d31f8,&PTR_DAT_112daab70);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1103d33a8,"SIGCodematizerEntryPointWrapperScopeInitializationPluginKey",
                      0x3b,2,FUN_1014ecc3c,param_3,uVar3,&UNK_1103d33a8,&PTR_DAT_112daabf8);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1103d3420;
  func_0x000107c613fc(&UNK_1103d3420,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1103d3628,"ShakeToReportScopeGraphBridgeScopeInitializationPluginKey",
                      0x39,2,FUN_1014ecc44,puVar2,uVar3,&UNK_1103d3628,&PTR_DAT_112daada8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112daace0;
  func_0x0001000285a8(0x112daace0,&UNK_10d953630);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1014ecbc0; end: 1014ecbc7;  */

void FUN_1014ecbc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1103d3448;
  func_0x000107c613fc(&UNK_1103d3448,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1014eccb8;
  func_0x0001000823a8(FUN_1014eccb8,puVar3);
  func_0x000100082720("SCShakeToReportScopedServicesScopeInitializationPluginProvider",0x3e,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1014ecbc8; end: 1014ecc3b;  */

void FUN_1014ecbc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  pcVar1 = FUN_1014ecc84;
  func_0x0001000823a8(FUN_1014ecc84,param_3);
  func_0x000100082720("SIGCodematizerEntryPointWrapperScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 1014ecc3c; end: 1014ecc43;  */

void FUN_1014ecc3c(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  pcVar1 = FUN_1014ecc84;
  func_0x0001000823a8();
  func_0x000100082720("SIGCodematizerEntryPointWrapperScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 1014ecc44; end: 1014ecc83;  */

void FUN_1014ecc44(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1014ed4ac(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ShakeToReportScopeGraphBridgeScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014ecc84; end: 1014ecc8b;  */

void FUN_1014ecc84(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x1014ec898);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1014ecc8c; end: 1014eccb7;  */

void FUN_1014ecc8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014eccb8; end: 1014eccbf;  */

void FUN_1014eccb8(undefined8 *param_1)

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
  puVar1 = &UNK_1103d3280;
  func_0x000107c613fc(&UNK_1103d3280,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1014ec134;
  func_0x00010058fa64(FUN_1014ec134,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1014eccc0; end: 1014ecd47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1014eccc0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1014ed238();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112daace8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112daacf0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014ecd48);
  (*pcVar1)();
}



/* Entry: 1014ecd48; end: 1014ecda7; -[_TtC29ShakeToReportScopeGraphBridge44ShakeToReportScopeGraphBridgeSaberEntryPoint init] */

void FUN_1014ecd48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShakeToReportScopeGraphBridge.ShakeToReportScopeGraphBridgeSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014ecd74);
  (*pcVar1)();
}



/* Entry: 1014ecda8; end: 1014ecddf; -[_TtC29ShakeToReportScopeGraphBridge44ShakeToReportScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014ecdc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014ecdc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ecda8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daace8));
  return;
}



/* Entry: 1014ecde0; end: 1014ece07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ecde0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112daacf0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112daace8));
  return;
}



/* Entry: 1014ece08; end: 1014ece27;  */

void FUN_1014ece08(void)

{
  func_0x000107c61168(&PTR_PTR_1127dcb00);
  return;
}



/* Entry: 1014ece28; end: 1014ecec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1014ece28(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112daada0);
  *(undefined8 *)(unaff_x20 + _DAT_112daad20) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112daad28) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1014ecec4; end: 1014ecf23; -[_TtC29ShakeToReportScopeGraphBridge37SIGCodematizerServicesSaberEntryPoint init] */

void FUN_1014ecec4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShakeToReportScopeGraphBridge.SIGCodematizerServicesSaberEntryPoint",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014ecef0);
  (*pcVar1)();
}



/* Entry: 1014ecf24; end: 1014ecfb7; -[_TtC29ShakeToReportScopeGraphBridge37SIGCodematizerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ecf24(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112daad20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daad28));
  return;
}



/* Entry: 1014ecfb8; end: 1014ecfbf;  */

undefined8 FUN_1014ecfb8(void)

{
  return 0;
}



/* Entry: 1014ecfc0; end: 1014ecfdf;  */

void FUN_1014ecfc0(void)

{
  func_0x000107c61168(&PTR_PTR_1127dcbc8);
  return;
}



/* Entry: 1014ecfe0; end: 1014ed067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1014ecfe0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112daad58) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112daad60);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014ed068);
  (*pcVar2)();
}



/* Entry: 1014ed068; end: 1014ed14f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1014ed068(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112daad58);
  *(undefined **)(unaff_x20 + _DAT_112daad58) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112daad60);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112daad60))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1103d3588;
  func_0x000107c613fc(&UNK_1103d3588,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1014ed154,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1014ed150; end: 1014ed15b;  */

void FUN_1014ed150(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1014ed15c; end: 1014ed1bb; -[_TtC29ShakeToReportScopeGraphBridge44SCShakeToReportScopedServicesSaberEntryPoint init] */

void FUN_1014ed15c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShakeToReportScopeGraphBridge.SCShakeToReportScopedServicesSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014ed188);
  (*pcVar1)();
}



/* Entry: 1014ed1bc; end: 1014ed1f3; -[_TtC29ShakeToReportScopeGraphBridge44SCShakeToReportScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ed1bc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112daad60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daad58));
  return;
}



/* Entry: 1014ed1f4; end: 1014ed1f7;  */

void FUN_1014ed1f4(void)

{
  return;
}



/* Entry: 1014ed1f8; end: 1014ed217;  */

void FUN_1014ed1f8(void)

{
  FUN_1014ed068();
  return;
}



/* Entry: 1014ed218; end: 1014ed237;  */

void FUN_1014ed218(void)

{
  func_0x000107c61168(&PTR_PTR_1127dcc90);
  return;
}



/* Entry: 1014ed238; end: 1014ed307;  */

undefined8 FUN_1014ed238(void)

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
  
  func_0x000107c61428(0x112daad90,&uStack_40,0x20,0);
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
    FUN_1014ed308();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1014ed308; end: 1014ed327;  */

void FUN_1014ed308(void)

{
  func_0x000107c61168(&PTR_PTR_1127dcd58);
  return;
}



/* Entry: 1014ed328; end: 1014ed373;  */

void FUN_1014ed328(undefined8 param_1)

{
  func_0x0001000285a8(0x112daad98,&UNK_10d953728);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1014ed3e0,param_1);
  return;
}



/* Entry: 1014ed374; end: 1014ed3df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ed374(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1014ed308();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112daada0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1014ed3e0; end: 1014ed3e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ed3e0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1014ed308();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112daada0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1014ed3e8; end: 1014ed433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ed3e8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112daada0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014ed434; end: 1014ed493; -[_TtC29ShakeToReportScopeGraphBridge37ShakeToReportScopeGraphBridgeServices init] */

void FUN_1014ed434(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShakeToReportScopeGraphBridge.ShakeToReportScopeGraphBridgeServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014ed460);
  (*pcVar1)();
}



/* Entry: 1014ed494; end: 1014ed4ab; -[_TtC29ShakeToReportScopeGraphBridge37ShakeToReportScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ed494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112daada0));
  return;
}



/* Entry: 1014ed4ac; end: 1014ed623;  */

void FUN_1014ed4ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103d35d0;
  func_0x000107c613fc(&UNK_1103d35d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1014ed624,puVar1);
  return;
}



/* Entry: 1014ed624; end: 1014ed62b;  */

void FUN_1014ed624(undefined8 *param_1)

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
  func_0x000107c61428(0x112daad90,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112daad90,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1103d3668;
  func_0x000107c613fc(&UNK_1103d3668,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1014ed6d8;
  func_0x00010058fa64(0x1014ed6d8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1014ed62c; end: 1014ed687;  */

void FUN_1014ed62c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112daad90,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112daad90,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1014ed688; end: 1014ed6df;  */

undefined ** FUN_1014ed688(void)

{
  return &PTR_DAT_113066ee0;
}



/* Entry: 1014ed6e0; end: 1014ed727; -[SCShakeToReportScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ed6e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daadf8;
  func_0x000107c61428(param_1 + _DAT_112daadf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014ed728; end: 1014ed77f; -[SCShakeToReportScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ed728(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daadf8;
  func_0x000107c61428(param_1 + _DAT_112daadf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1014ed780; end: 1014ed7c7; -[SCShakeToReportScopeGraphBridgeSaberEntryPoint shakeToReportScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ed780(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daae00;
  func_0x000107c61428(param_1 + _DAT_112daae00,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1014ed7c8; end: 1014ed82b; -[SCShakeToReportScopeGraphBridgeSaberEntryPoint setShakeToReportScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ed7c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daae00;
  func_0x000107c61428(param_1 + _DAT_112daae00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1014ed82c; end: 1014ed95f;  */

/* WARNING: Possible PIC construction at 0x0001014ed8e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014ed900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014ed91c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014ed8e8) */
/* WARNING: Removing unreachable block (ram,0x0001014ed904) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ed82c(void)

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
  func_0x000107c5a924();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1014ece08();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1014ed238();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014ed960);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112daace8) = lVar5;
    *(long *)(lVar4 + _DAT_112daacf0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1014ed960; end: 1014ed987; -[SCShakeToReportScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1014ed960(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1014ed82c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


