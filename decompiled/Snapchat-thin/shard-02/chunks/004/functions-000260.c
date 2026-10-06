/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c61f0c; end: 101c61f67;  */

void FUN_101c61f0c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e0cfe0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e0cfe0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101c61f68; end: 101c61fbf;  */

undefined ** FUN_101c61f68(void)

{
  return &PTR_DAT_113067030;
}



/* Entry: 101c61fc0; end: 101c62007; -[SCUberAvatarScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c61fc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e0d040;
  func_0x000107c61428(param_1 + _DAT_112e0d040,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101c62008; end: 101c6205f; -[SCUberAvatarScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c62008(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e0d040;
  func_0x000107c61428(param_1 + _DAT_112e0d040,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101c62060; end: 101c620a7; -[SCUberAvatarScopeGraphBridgeSaberEntryPoint uberAvatarScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c62060(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e0d048;
  func_0x000107c61428(param_1 + _DAT_112e0d048,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101c620a8; end: 101c6210b; -[SCUberAvatarScopeGraphBridgeSaberEntryPoint setUberAvatarScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c620a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e0d048;
  func_0x000107c61428(param_1 + _DAT_112e0d048,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101c6210c; end: 101c6223f;  */

/* WARNING: Possible PIC construction at 0x000101c621c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c621e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c621fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c621c8) */
/* WARNING: Removing unreachable block (ram,0x000101c621e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c6210c(void)

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
  func_0x000107c5d134();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101c61940();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101c61bb8();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101c62240);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e0cf70) = lVar5;
    *(long *)(lVar4 + _DAT_112e0cf78) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101c62240; end: 101c62267; -[SCUberAvatarScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101c62240(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101c6210c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c62268; end: 101c622ab; -[SCUberAvatarScopeGraphBridgeSaberEntryPoint end] */

void FUN_101c62268(undefined8 param_1)

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



/* Entry: 101c622ac; end: 101c62443;  */

void FUN_101c622ac(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0ff9630)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f0069d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "UberAvatarScopeGraphBridge/SCUberAvatarScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4c,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c62444);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a12c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101c62444; end: 101c624ef; -[SCUberAvatarScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101c62444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101c622ac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101c624f0; end: 101c6255b; -[SCUberAvatarScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c624f0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e0d040,0);
  *(undefined8 *)(param_1 + _DAT_112e0d048) = 0;
  *(undefined8 *)(param_1 + _DAT_112e0d050) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c6255c; end: 101c6258f;  */

void FUN_101c6255c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c62590; end: 101c625d7; -[SCUberAvatarScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c625bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c625c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c62590(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e0d040);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0d048));
  return;
}



/* Entry: 101c625d8; end: 101c625f7;  */

void FUN_101c625d8(void)

{
  func_0x000107c61168(&PTR_PTR_1127fe000);
  return;
}



/* Entry: 101c625f8; end: 101c6263f; -[SCSCUberAvatarScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c625f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e0d080;
  func_0x000107c61428(param_1 + _DAT_112e0d080,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101c62640; end: 101c62697; -[SCSCUberAvatarScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c62640(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e0d080;
  func_0x000107c61428(param_1 + _DAT_112e0d080,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101c62698; end: 101c6276f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c62698(undefined8 param_1,long param_2)

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
    FUN_101c61b98();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e0cfa8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c62770);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e0cfb0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e0d088);
    *(long **)(unaff_x20 + _DAT_112e0d088) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101c62770; end: 101c62797; -[SCSCUberAvatarScopedServicesSaberEntryPoint begin] */

void FUN_101c62770(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101c62698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c62798; end: 101c6290f;  */

/* WARNING: Possible PIC construction at 0x000101c62800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c62898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c62804) */
/* WARNING: Removing unreachable block (ram,0x000101c6289c) */
/* WARNING: Removing unreachable block (ram,0x000101c628b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c62798(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e0d088);
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



/* Entry: 101c62910; end: 101c62917;  */

void FUN_101c62910(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101c62918; end: 101c6294b; -[SCSCUberAvatarScopedServicesSaberEntryPoint end] */

void FUN_101c62918(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101c62798();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c6294c; end: 101c62a6b;  */

void FUN_101c6294c(long param_1,long param_2,long param_3)

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
                        "UberAvatarScopeGraphBridge/SCSCUberAvatarScopedServicesSaberEntryPoint.swift"
                        ,0x4c,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c62a6c);
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



/* Entry: 101c62a6c; end: 101c62b17; -[SCSCUberAvatarScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101c62a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101c6294c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101c62b18; end: 101c62b77; -[SCSCUberAvatarScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c62b18(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e0d080,0);
  *(undefined8 *)(param_1 + _DAT_112e0d088) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c62b78; end: 101c62bab;  */

void FUN_101c62b78(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c62bac; end: 101c62be3; -[SCSCUberAvatarScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c62bac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e0d080);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0d088));
  return;
}



/* Entry: 101c62be4; end: 101c62c03;  */

void FUN_101c62be4(void)

{
  func_0x000107c61168(&PTR_PTR_1127fe0c8);
  return;
}



/* Entry: 101c62c04; end: 101c62c13;  */

undefined1  [16] FUN_101c62c04(void)

{
  return ZEXT816(0x11045f438);
}



/* Entry: 101c62c14; end: 101c62c37;  */

undefined8 FUN_101c62c14(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 101c62c38; end: 101c62c3f;  */

void FUN_101c62c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101c62c40; end: 101c62c7f;  */

void FUN_101c62c40(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c40bf0(*(undefined8 *)(unaff_x20 + 0x10),param_2,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101c62c80; end: 101c62cb7;  */

void FUN_101c62c80(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101c62cb8; end: 101c62cdb;  */

void FUN_101c62cb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101c62cdc; end: 101c62cf7;  */

void FUN_101c62cdc(void)

{
  FUN_101c63364(0);
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101c62cf8; end: 101c62d2f;  */

void FUN_101c62cf8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101c62d30; end: 101c62d37;  */

void FUN_101c62d30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101c62d38; end: 101c62e1b;  */

/* WARNING: Possible PIC construction at 0x000101c62d88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c62d8c) */

long FUN_101c62d38(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = *param_1;
  lVar6 = param_1[1];
  uVar5 = param_1[2];
  lVar2 = param_1[4];
  lVar9 = param_1[5];
  lVar7 = *param_2;
  lVar8 = param_2[1];
  lVar1 = param_2[4];
  lVar3 = param_2[5];
  if ((lVar4 == lVar7) && (lVar6 == lVar8)) {
    if (((uVar5 == param_2[2]) && (param_1[3] == param_2[3])) ||
       (func_0x000107c605b8(uVar5,param_1[3],param_2[2],param_2[3],0), (uVar5 & 1) != 0)) {
      lVar4 = lVar2;
      lVar6 = lVar9;
      lVar7 = lVar1;
      lVar8 = lVar3;
      if ((lVar2 != lVar1) || (lVar9 != lVar3)) goto code_r0x000107c605b8;
      lVar6 = 1;
    }
    else {
      lVar6 = 0;
    }
    return lVar6;
  }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar4,lVar6,lVar7,lVar8,0);
  return lVar4;
}



/* Entry: 101c62e1c; end: 101c63023;  */

/* WARNING: Possible PIC construction at 0x000101c62f08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c62f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c62f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c62fdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c62f9c) */
/* WARNING: Removing unreachable block (ram,0x000101c62f8c) */
/* WARNING: Removing unreachable block (ram,0x000101c62f0c) */
/* WARNING: Removing unreachable block (ram,0x000101c62fd8) */
/* WARNING: Removing unreachable block (ram,0x000101c62f20) */
/* WARNING: Removing unreachable block (ram,0x000101c62f30) */
/* WARNING: Removing unreachable block (ram,0x000101c62fe0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c62e1c(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [8];
  
  func_0x000107c614f0();
  if (param_5 == 0) {
LAB_101c62e7c:
    param_5 = param_3;
    param_4 = param_2;
    if (param_3 == 0) {
      param_4 = 0;
      param_5 = 0xe000000000000000;
      goto LAB_101c62e9c;
    }
  }
  else {
    uVar1 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar1 = param_5 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) goto LAB_101c62e7c;
  }
  func_0x000107c61434(param_5);
LAB_101c62e9c:
  uVar1 = param_4 & 0xffffffffffff;
  if ((param_5 & 0x2000000000000000) != 0) {
    uVar1 = param_5 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uStack_90 = param_4;
    uStack_88 = param_5;
    uStack_80 = param_1;
    uStack_78 = param_6;
    func_0x000107c6157c(*(undefined8 *)(unaff_x20 + _DAT_112e0d0d0));
    uVar2 = 0x112e0d110;
    func_0x0001000285a8(0x112e0d110,&UNK_10d9e76c8);
    func_0x000100075034(auStack_68,FUN_101c645ec,auStack_a0,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_5);
  return;
}



/* Entry: 101c63024; end: 101c63177;  */

void FUN_101c63024(undefined8 *param_1,long *param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = *param_2;
  if (*(long *)(lVar4 + 0x10) != 0) {
    func_0x000107c61434(lVar4);
    lVar3 = param_3;
    uVar2 = param_4;
    func_0x000100029284();
    if ((uVar2 & 1) != 0) {
      puVar5 = *(undefined **)(*(long *)(lVar4 + 0x38) + lVar3 * 8);
      func_0x000107c61434(puVar5);
      func_0x000107c6142c(lVar4);
      goto LAB_101c630b4;
    }
    func_0x000107c6142c(lVar4);
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101c6460c();
LAB_101c630b4:
  func_0x000107c61174(param_6);
  puVar1 = puVar5;
  func_0x000107c61558(puVar5);
  FUN_101c637f4(param_6,param_5,puVar1);
  func_0x000107c61434(param_4);
  func_0x000107c6157c(puVar5);
  lVar4 = *param_2;
  func_0x000107c61558(lVar4);
  lVar3 = *param_2;
  FUN_101c636a4(puVar5,param_3,param_4,lVar4);
  func_0x000107c6142c(param_4);
  *param_2 = lVar3;
  FUN_101c646f8(param_2,param_3,param_4);
  func_0x000101c650fc(param_5,puVar5);
  func_0x000107c61574(puVar5);
  *param_1 = param_5;
  return;
}



/* Entry: 101c63178; end: 101c63247; -[_TtC37SCEditContentDivergenceImplementation29StickerListDivergenceDetector recordStickerListsForEvent:captureSessionID:snapSessionID:snapshot:] */

/* WARNING: Possible PIC construction at 0x000101c63228: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c6322c) */

void FUN_101c63178(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar1 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  FUN_101c62e1c(param_3,param_4,uVar1,param_5,param_2,param_6);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c63248; end: 101c632f7; -[_TtC37SCEditContentDivergenceImplementation29StickerListDivergenceDetector init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c63248(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112e0d0c8;
  puVar3 = PTR_PTR_1126a8ce8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lVar1 = _DAT_112e0d0d0;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101c644f0();
  puStack_38 = puVar3;
  puStack_40 = puVar4;
  func_0x0001000285a8(0x112e0d100,&UNK_10d9e76b8);
  func_0x000107c613fc();
  ppuVar5 = &puStack_40;
  func_0x00010006c248();
  *(undefined ***)(param_1 + lVar1) = ppuVar5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c632f8; end: 101c6332b;  */

void FUN_101c632f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c6332c; end: 101c63363; -[_TtC37SCEditContentDivergenceImplementation29StickerListDivergenceDetector .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c6332c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e0d0c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e0d0d0));
  return;
}



/* Entry: 101c63364; end: 101c63383;  */

void FUN_101c63364(void)

{
  func_0x000107c61168(&PTR_PTR_1127fe188);
  return;
}



/* Entry: 101c63384; end: 101c633df;  */

/* WARNING: Possible PIC construction at 0x000101c63398: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c6339c) */

void FUN_101c63384(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 101c633e0; end: 101c6343b;  */

undefined8 * FUN_101c633e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101c6343c; end: 101c63477;  */

undefined8 * FUN_101c6343c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101c63478; end: 101c6350b;  */

int FUN_101c63478(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c6350c; end: 101c635d7;  */

void FUN_101c6350c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000103b865d4(param_1);
  func_0x000107c5fb58(auStack_78,uVar1,param_2);
  func_0x000107c6142c();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((uint)*(byte *)(*(long *)(unaff_x20 + 0x30) + param_2) == ((uint)param_1 & 0xff)) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 101c635d8; end: 101c636a3;  */

void FUN_101c635d8(char param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(char *)(*(long *)(unaff_x20 + 0x30) + param_2) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 101c636a4; end: 101c637f3;  */

void FUN_101c636a4(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c6377c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_101c63bf0(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c63744);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_101c63924();
    lVar6 = *unaff_x20;
    goto joined_r0x000101c63790;
  }
  lVar6 = *unaff_x20;
joined_r0x000101c63790:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c637f4);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 101c637f4; end: 101c63923;  */

void FUN_101c637f4(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x000101c63580();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c638b8);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    func_0x000101c63e8c(lVar5);
    uVar2 = param_2;
    func_0x000101c63580();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_1106dbd08);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101c63884);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000101c63a94();
    lVar5 = *unaff_x20;
    goto joined_r0x000101c638cc;
  }
  lVar5 = *unaff_x20;
joined_r0x000101c638cc:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c63924);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 101c63924; end: 101c63bef;  */

void FUN_101c63924(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112e0d108,&UNK_10d9e76c0);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_101c63a00;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61434(uVar12);
        if (uVar8 != 0) break;
LAB_101c63a00:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101c63a94);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101c63a6c;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_101c63a6c:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 101c63bf0; end: 101c642bf;  */

void FUN_101c63bf0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e0d108;
  func_0x0001000285a8(0x112e0d108,&UNK_10d9e76c0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101c63e58:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101c63e88);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_101c63e58;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101c63e8c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101c642c0; end: 101c643db;  */

undefined * FUN_101c642c0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101c643dc);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112e0d118;
    func_0x0001000285a8(0x112e0d118,&UNK_10d9e76d0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_11045f718);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101c643dc; end: 101c644ef;  */

undefined *
FUN_101c643dc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101c644f0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 101c644f0; end: 101c645eb;  */

undefined * FUN_101c644f0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e0d108,&UNK_10d9e76c0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101c645e8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101c645ec);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101c645ec; end: 101c6460b;  */

void FUN_101c645ec(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101c63024(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 101c6460c; end: 101c646f7;  */

undefined * FUN_101c6460c(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000285a8(0x112e0d120);
    puVar3 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar9[-1];
      uVar4 = *puVar9;
      func_0x000107c61174();
      uVar5 = uVar1;
      func_0x000101c63580();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101c646f4);
        (*pcVar2)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar5 * 8) = uVar1;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar5 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101c646f8);
        (*pcVar2)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 101c646f8; end: 101c654f7;  */

void FUN_101c646f8(long *param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  
  puVar17 = (ulong *)(param_1 + 1);
  uVar13 = *puVar17;
  uVar15 = *(ulong *)(uVar13 + 0x10);
  if (uVar15 == 0) {
    uVar12 = 0;
    uVar14 = 0;
  }
  else {
    lVar10 = 0;
    uVar12 = 0;
    do {
      uVar14 = *(ulong *)(uVar13 + lVar10 + 0x20);
      lVar11 = *(long *)(uVar13 + lVar10 + 0x28);
      if ((uVar14 == param_2 && lVar11 == param_3) ||
         (func_0x000107c605b8(uVar14,lVar11,param_2,param_3,0), (uVar14 & 1) != 0)) {
        uVar14 = uVar12 + 1;
        uVar15 = *(ulong *)(uVar13 + 0x10);
        if (uVar15 - 1 != uVar12) {
          do {
            if (uVar15 <= uVar14) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x101c64a1c);
              (*pcVar6)();
            }
            uVar16 = *(ulong *)(uVar13 + lVar10 + 0x30);
            lVar11 = *(long *)(uVar13 + lVar10 + 0x38);
            if ((uVar16 != param_2 || lVar11 != param_3) &&
               (uVar8 = uVar16, func_0x000107c605b8(uVar16,lVar11,param_2,param_3,0),
               (uVar8 & 1) == 0)) {
              if (uVar14 != uVar12) {
                if (uVar15 <= uVar12) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x101c64a70);
                  (*pcVar6)();
                }
                puVar1 = (undefined8 *)(uVar13 + 0x20 + uVar12 * 0x10);
                uVar3 = *puVar1;
                uVar4 = puVar1[1];
                func_0x000107c61434(uVar4);
                func_0x000107c61434(lVar11);
                uVar15 = uVar13;
                func_0x000107c61558();
                if ((uVar15 & 1) == 0) {
                  func_0x0001014c4f24();
                }
                lVar2 = uVar13 + uVar12 * 0x10;
                uVar9 = *(undefined8 *)(lVar2 + 0x28);
                *(ulong *)(lVar2 + 0x20) = uVar16;
                *(long *)(lVar2 + 0x28) = lVar11;
                func_0x000107c6142c(uVar9);
                if (*(ulong *)(uVar13 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x101c64a74);
                  (*pcVar6)();
                }
                lVar11 = uVar13 + lVar10;
                uVar9 = *(undefined8 *)(lVar11 + 0x38);
                *(undefined8 *)(lVar11 + 0x30) = uVar3;
                *(undefined8 *)(lVar11 + 0x38) = uVar4;
                func_0x000107c6142c(uVar9);
                *puVar17 = uVar13;
              }
              uVar12 = uVar12 + 1;
            }
            uVar14 = uVar14 + 1;
            uVar15 = *(ulong *)(uVar13 + 0x10);
            lVar10 = lVar10 + 0x10;
          } while (uVar14 != uVar15);
        }
        goto LAB_101c64798;
      }
      uVar12 = uVar12 + 1;
      lVar10 = lVar10 + 0x10;
    } while (uVar15 != uVar12);
    uVar14 = *(ulong *)(uVar13 + 0x10);
    uVar12 = uVar15;
LAB_101c64798:
    if ((long)uVar14 < (long)uVar12) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101c647a8);
      (*pcVar6)();
    }
  }
  func_0x000101755f94(uVar12,uVar14);
  uVar14 = *puVar17;
  func_0x000107c61434(param_3);
  uVar13 = uVar14;
  func_0x000107c61558();
  uVar15 = uVar14;
  if ((uVar13 & 1) == 0) {
    uVar15 = 0;
    FUN_101c643dc(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14,PTR__swift_bridgeObjectRelease_11034f258);
  }
  uVar13 = *(ulong *)(uVar15 + 0x10);
  uVar14 = uVar15;
  if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar13) {
    uVar14 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
    FUN_101c643dc(uVar14,uVar13 + 1,1,uVar15,PTR__swift_bridgeObjectRelease_11034f258);
  }
  *(ulong *)(uVar14 + 0x10) = uVar13 + 1;
  lVar10 = uVar14 + uVar13 * 0x10;
  *(ulong *)(lVar10 + 0x20) = param_2;
  *(long *)(lVar10 + 0x28) = param_3;
  *puVar17 = uVar14;
  puVar5 = PTR__swift_bridgeObjectRelease_11034f258;
  if (0x17 < uVar13) {
    uVar13 = *(ulong *)(uVar14 + 0x10);
    do {
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101c64a18);
        (*pcVar6)();
      }
      lVar10 = *(long *)(uVar14 + 0x20);
      uVar15 = *(ulong *)(uVar14 + 0x28);
      uVar16 = *(ulong *)(uVar14 + 0x18);
      func_0x000107c61434(uVar15);
      uVar12 = uVar14;
      if (uVar16 >> 1 < uVar13 - 1) {
        uVar12 = 1;
        FUN_101c643dc(1,uVar13,1,uVar14,puVar5);
      }
      func_0x000100bcb1dc(uVar12 + 0x20);
      lVar11 = *(long *)(uVar12 + 0x10);
      func_0x000107c610b8(uVar12 + 0x20,uVar12 + 0x30,lVar11 * 0x10 + -0x10);
      *(long *)(uVar12 + 0x10) = lVar11 + -1;
      lVar11 = *param_1;
      func_0x000107c61434(lVar11);
      uVar13 = uVar15;
      func_0x000100029284();
      func_0x000107c6142c(lVar11);
      if ((uVar13 & 1) == 0) {
        func_0x000107c6142c(uVar15);
      }
      else {
        iVar7 = (int)*param_1;
        func_0x000107c61558();
        lVar11 = *param_1;
        if (iVar7 == 0) {
          FUN_101c63924();
        }
        func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar11 + 0x30) + lVar10 * 0x10 + 8));
        func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar11 + 0x38) + lVar10 * 8));
        func_0x000101c64110(lVar10,lVar11);
        func_0x000107c6142c(uVar15);
        *param_1 = lVar11;
      }
      uVar13 = *(ulong *)(uVar12 + 0x10);
      uVar14 = uVar12;
    } while (0x18 < uVar13);
    *puVar17 = uVar12;
  }
  return;
}



/* Entry: 101c654f8; end: 101c654ff;  */

void FUN_101c654f8(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101c65500; end: 101c65553;  */

uint FUN_101c65500(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 101c65554; end: 101c655af;  */

long FUN_101c65554(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c655b0; end: 101c6568f;  */

undefined8 * FUN_101c655b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 101c65690; end: 101c656e3;  */

undefined8 * FUN_101c65690(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101c656e4; end: 101c6578f;  */

int FUN_101c656e4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c65790; end: 101c6581b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c65790(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar2 = &lStack_50;
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_101c668b4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e0d130) = uStack_38;
  *(undefined8 *)(lVar1 + _DAT_112e0d138) = uStack_40;
  lStack_50 = lVar1;
  lStack_48 = param_2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar2;
  return;
}



/* Entry: 101c6581c; end: 101c65823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c6581c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar3 = &lStack_50;
  func_0x000100083b20(&uStack_38,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  FUN_101c668b4();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e0d130) = uStack_38;
  *(undefined8 *)(lVar2 + _DAT_112e0d138) = uStack_40;
  lStack_50 = lVar2;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar3;
  return;
}



/* Entry: 101c65824; end: 101c65887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c65824(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0d130) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e0d138) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c65888; end: 101c65b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101c65888(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [80];
  
  ppuVar4 = &puStack_c0;
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e0d130);
  func_0x000107c411b0();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    lVar3 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar8 = auStack_90;
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    uVar5 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    puVar7 = PTR___sSSN_11034da80;
    *(undefined **)(lVar3 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar3 + 0x28) = puVar8;
    *(undefined8 *)(lVar3 + 0x30) = 0xd00000000000002b;
    *(undefined8 *)(lVar3 + 0x38) = 0x800000010f006af0;
    lVar2 = lVar3;
    func_0x000100214a84(lVar3);
    func_0x000107c61588(lVar3);
    func_0x000100f15a0c((undefined8 *)(lVar3 + 0x20));
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar5 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010f006ac0);
    lVar3 = lVar2;
    func_0x000107c5f9dc(lVar2,puVar7,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar2);
    func_0x000107c466bc(puVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar3);
    puVar7 = puVar6;
    func_0x000107c5ed2c(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c3fef8(puVar1);
    func_0x000107c61170(puVar7);
    puVar7 = puVar1;
    func_0x000107c43bf4(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
  }
  else {
    lVar2 = lVar3;
    func_0x000107c409c0(lVar3);
    func_0x000107c61180();
    puVar7 = &UNK_11045f808;
    func_0x000107c613fc(&UNK_11045f808,0x18,7);
    *(undefined **)(puVar7 + 0x10) = puVar1;
    pcStack_a0 = FUN_101c66874;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_100f152a0;
    puStack_a8 = &UNK_11045f820;
    puStack_98 = puVar7;
    func_0x000107c60bc4(&puStack_c0);
    puVar7 = puStack_98;
    func_0x000107c61174(puVar1);
    func_0x000107c61574(puVar7);
    func_0x000107c5c320(lVar2);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
    puVar7 = puVar1;
    func_0x000107c43bf4(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c615e8(lVar3);
  }
  return puVar7;
}



/* Entry: 101c65b44; end: 101c65d5f;  */

void FUN_101c65b44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puVar3 = &UNK_11045f958;
  func_0x000107c613fc(&UNK_11045f958,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  puVar4 = &UNK_11045f980;
  func_0x000107c613fc(&UNK_11045f980,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x101c66948;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_101c66950;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100f15b68;
  puStack_88 = &UNK_11045f998;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11045f9d0;
  func_0x000107c613fc(&UNK_11045f9d0,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  puVar7 = &UNK_11045f9f8;
  func_0x000107c613fc(&UNK_11045f9f8,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_101c66970;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = (code *)0x101c66998;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_11045fa10;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x68,0x30,0x21,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c65d5c);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x68,0x36,0x19,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c65d60);
  (*pcVar2)();
}



/* Entry: 101c65d60; end: 101c6608b;  */

void FUN_101c65d60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_a0 [80];
  
  puVar6 = auStack_a0;
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_completeWithValue__1125ae900,param_1);
    return;
  }
  lVar1 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar2 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  puVar5 = PTR___sSSN_11034da80;
  *(undefined **)(lVar1 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar1 + 0x28) = puVar6;
  *(undefined8 *)(lVar1 + 0x30) = 0xd000000000000021;
  *(undefined8 *)(lVar1 + 0x38) = 0x800000010f006b90;
  lVar3 = lVar1;
  func_0x000100214a84(lVar1);
  func_0x000107c61588(lVar1);
  func_0x000100f15a0c((undefined8 *)(lVar1 + 0x20));
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar2 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f006ac0);
  lVar1 = lVar3;
  func_0x000107c5f9dc(lVar3,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar3);
  func_0x000107c466bc(puVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar1);
  puVar5 = puVar4;
  func_0x000107c5ed2c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c3fef8(param_2);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 101c6608c; end: 101c660e7; -[_TtC24CTPCustomojiServicesImpl23CTPCustomojiServiceImpl createCustomoji:] */

void FUN_101c6608c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101c65888(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c660e8; end: 101c6639f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101c660e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [80];
  
  ppuVar4 = &puStack_d0;
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e0d138);
  func_0x000107c5d91c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    lVar3 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar8 = auStack_a0;
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    uVar5 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    puVar7 = PTR___sSSN_11034da80;
    *(undefined **)(lVar3 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar3 + 0x28) = puVar8;
    *(undefined8 *)(lVar3 + 0x30) = 0xd000000000000022;
    *(undefined8 *)(lVar3 + 0x38) = 0x800000010f006b20;
    lVar2 = lVar3;
    func_0x000100214a84(lVar3);
    func_0x000107c61588(lVar3);
    func_0x000100f15a0c((undefined8 *)(lVar3 + 0x20));
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar5 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010f006ac0);
    lVar3 = lVar2;
    func_0x000107c5f9dc(lVar2,puVar7,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar2);
    func_0x000107c466bc(puVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar3);
    puVar7 = puVar6;
    func_0x000107c5ed2c(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c3fef8(puVar1);
    func_0x000107c61170(puVar7);
    puVar7 = puVar1;
    func_0x000107c43bf4(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
  }
  else {
    FUN_101c65888(param_1);
    puVar7 = &UNK_11045f858;
    func_0x000107c613fc(&UNK_11045f858,0x30,7);
    *(undefined **)(puVar7 + 0x10) = puVar1;
    *(undefined8 *)(puVar7 + 0x18) = param_2;
    *(long *)(puVar7 + 0x20) = lVar3;
    *(undefined8 *)(puVar7 + 0x28) = param_3;
    uStack_b0 = 0x101c66898;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1010ffbc4;
    puStack_b8 = &UNK_11045f870;
    puStack_a8 = puVar7;
    func_0x000107c60bc4(&puStack_d0);
    puVar7 = puStack_a8;
    func_0x000107c61174(puVar1);
    func_0x000107c615f0(lVar3);
    func_0x000107c61574(puVar7);
    func_0x000107c5dc64(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_1);
    puVar7 = puVar1;
    func_0x000107c43bf4(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c615e8(lVar3);
  }
  return puVar7;
}



/* Entry: 101c663a0; end: 101c666df;  */

void FUN_101c663a0(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [80];
  
  puVar7 = param_2;
  if (param_1 == (undefined *)0x0) {
    if (param_2 == (undefined *)0x0) {
      lVar4 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      puVar9 = auStack_b0;
      func_0x000107c61534();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      uVar5 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      func_0x000107c5faec();
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      puVar1 = PTR___sSSN_11034da80;
      *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
      *(undefined1 **)(lVar4 + 0x28) = puVar9;
      *(undefined8 *)(lVar4 + 0x30) = 0xd000000000000021;
      *(undefined8 *)(lVar4 + 0x38) = 0x800000010f006b90;
      lVar6 = lVar4;
      func_0x000100214a84(lVar4);
      func_0x000107c61588(lVar4);
      func_0x000100f15a0c((undefined8 *)(lVar4 + 0x20));
      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      uVar5 = 0xd000000000000024;
      func_0x000107c5fadc(0xd000000000000024,0x800000010f006ac0);
      lVar4 = lVar6;
      func_0x000107c5f9dc(lVar6,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar6);
      func_0x000107c466bc(puVar7);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar4);
    }
  }
  else if (param_2 == (undefined *)0x0) {
    func_0x000107c61174();
    puVar7 = param_1;
    func_0x000107c3e684();
    func_0x000107c61180();
    puVar1 = puVar7;
    func_0x000107c5faec();
    func_0x000107c61170();
    uStack_c0 = 0x3d;
    uStack_b8 = 0xe100000000000000;
    uStack_d0 = 0;
    uStack_c8 = 0xe000000000000000;
    puStack_100 = puVar1;
    puStack_f8 = param_2;
    func_0x000100e8b654();
    puVar2 = &uStack_c0;
    puVar8 = &uStack_d0;
    func_0x000107c601fc(puVar2,puVar8,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                        PTR___sSSN_11034da80,puVar7,puVar7,puVar7);
    func_0x000107c6142c(param_2);
    puVar1 = PTR_PTR_1126be9e8;
    func_0x000107c610f8(PTR_PTR_1126be9e8);
    func_0x000107c5fadc(puVar2,puVar8);
    func_0x000107c6142c(puVar8);
    func_0x000107c46d4c(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c3d684(param_5);
    func_0x000107c61180();
    puVar7 = &UNK_11045f908;
    func_0x000107c613fc(&UNK_11045f908,0x18,7);
    *(undefined8 *)(puVar7 + 0x10) = param_3;
    pcStack_e0 = FUN_101c66940;
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f8 = (undefined *)0x42000000;
    puStack_f0 = &UNK_1011b0640;
    puStack_e8 = &UNK_11045f920;
    ppuVar3 = &puStack_100;
    puStack_d8 = puVar7;
    func_0x000107c60bc4(ppuVar3);
    puVar7 = puStack_d8;
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar7);
    func_0x000107c5dc64(param_5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar1);
    goto LAB_101c6659c;
  }
  func_0x000107c614b0(param_2);
  param_5 = puVar7;
  func_0x000107c5ed2c(puVar7);
  func_0x000107c614ac(puVar7);
  func_0x000107c3fef8(param_3);
LAB_101c6659c:
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 101c666e0; end: 101c6676b;  */

/* WARNING: Possible PIC construction at 0x000101c66720: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c66724) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */

void FUN_101c666e0(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNull_1126aef28);
    func_0x000107c453e4();
    func_0x000107c3fefc(param_3);
  }
  else {
    func_0x000107c614b0(param_2);
    func_0x000107c5ed2c(param_2);
    func_0x000107c3fef8(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101c6676c; end: 101c667db; -[_TtC24CTPCustomojiServicesImpl23CTPCustomojiServiceImpl addFavorite:origin:context:] */

void FUN_101c6676c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101c660e8(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c667dc; end: 101c6683b; -[_TtC24CTPCustomojiServicesImpl23CTPCustomojiServiceImpl init] */

void FUN_101c667dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CTPCustomojiServicesImpl.CTPCustomojiServiceImpl",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c66808);
  (*pcVar1)();
}



/* Entry: 101c6683c; end: 101c66873; -[_TtC24CTPCustomojiServicesImpl23CTPCustomojiServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c66858: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c6685c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c6683c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0d130));
  return;
}



/* Entry: 101c66874; end: 101c668b3;  */

void FUN_101c66874(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puVar3 = &UNK_11045f958;
  func_0x000107c613fc(&UNK_11045f958,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  puVar4 = &UNK_11045f980;
  func_0x000107c613fc(&UNK_11045f980,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x101c66948;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_101c66950;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100f15b68;
  puStack_88 = &UNK_11045f998;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11045f9d0;
  func_0x000107c613fc(&UNK_11045f9d0,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  puVar7 = &UNK_11045f9f8;
  func_0x000107c613fc(&UNK_11045f9f8,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_101c66970;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = (code *)0x101c66998;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_11045fa10;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x68,0x30,0x21,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c65d5c);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x68,0x36,0x19,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c65d60);
  (*pcVar2)();
}



/* Entry: 101c668b4; end: 101c668d3;  */

void FUN_101c668b4(void)

{
  func_0x000107c61168(&PTR_PTR_1127fe248);
  return;
}



/* Entry: 101c668d4; end: 101c668fb;  */

void FUN_101c668d4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11045f8c8;
  if (lRam0000000112e0d168 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e0d168 = param_1;
  }
  return;
}



/* Entry: 101c668fc; end: 101c6693f;  */

void FUN_101c668fc(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101c66940; end: 101c6694f;  */

/* WARNING: Possible PIC construction at 0x000101c66720: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c66724) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */

void FUN_101c66940(undefined8 param_1,undefined *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNull_1126aef28);
    func_0x000107c453e4();
    func_0x000107c3fefc(uVar1);
  }
  else {
    func_0x000107c614b0(param_2);
    func_0x000107c5ed2c(param_2);
    func_0x000107c3fef8(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101c66950; end: 101c6696f;  */

void FUN_101c66950(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101c66970; end: 101c669ab;  */

void FUN_101c66970(undefined *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_a0 [80];
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar6 = auStack_a0;
  puVar4 = param_1;
  if (param_1 == (undefined *)0x0) {
    lVar1 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    uVar2 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    puVar5 = PTR___sSSN_11034da80;
    *(undefined **)(lVar1 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar1 + 0x28) = puVar6;
    *(undefined8 *)(lVar1 + 0x30) = 0xd000000000000029;
    *(undefined8 *)(lVar1 + 0x38) = 0x800000010f006bc0;
    lVar3 = lVar1;
    func_0x000100214a84(lVar1);
    func_0x000107c61588(lVar1);
    func_0x000100f15a0c((undefined8 *)(lVar1 + 0x20));
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar2 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010f006ac0);
    lVar1 = lVar3;
    func_0x000107c5f9dc(lVar3,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar3);
    func_0x000107c466bc(puVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c614b0(param_1);
  puVar5 = puVar4;
  func_0x000107c5ed2c(puVar4);
  func_0x000107c614ac(puVar4);
  func_0x000107c3fef8(uVar7);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 101c669ac; end: 101c66a0b; -[_TtC24PayoutsBillboardProvider24PayoutsBillboardProvider init] */

void FUN_101c669ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PayoutsBillboardProvider.PayoutsBillboardProvider",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c669d8);
  (*pcVar1)();
}



/* Entry: 101c66a0c; end: 101c66a43; -[_TtC24PayoutsBillboardProvider24PayoutsBillboardProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c66a28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c66a2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c66a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0d180));
  return;
}



/* Entry: 101c66a44; end: 101c66a63;  */

void FUN_101c66a44(void)

{
  func_0x000107c61168(&PTR_PTR_1127fe310);
  return;
}



/* Entry: 101c66a64; end: 101c66a6b; -[_TtC24PayoutsBillboardProvider24PayoutsBillboardProvider preCheckSource] */

undefined8 FUN_101c66a64(void)

{
  return 0x24;
}



/* Entry: 101c66a6c; end: 101c66ac7;  */

void FUN_101c66a6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c49ca4();
  }
  uVar1 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c6010c(param_1,uVar1);
  func_0x000107c3fefc(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c66ac8; end: 101c66b17;  */

void FUN_101c66ac8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101c66b18; end: 101c66b4b; -[_TtC24PayoutsBillboardProvider24PayoutsBillboardProvider eligibleWithRequestor:campaignName:] */

void FUN_101c66b18(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101c66b4c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c66b4c; end: 101c66dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101c66b4c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar8 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112e0d188);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar1 == 0) {
LAB_101c66c88:
    puVar6 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c451b0(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    return puVar6;
  }
  uVar2 = 0xd000000000000031;
  func_0x000107c5fadc(0xd000000000000031,0x800000010f006bf0);
  lVar3 = lVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  if ((int)lVar3 == 0) {
    func_0x000107c615e8(lVar1);
    goto LAB_101c66c88;
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112e0d180);
  func_0x000107c42474();
  func_0x000107c61180();
  lVar3 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c42464();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c49ca4();
      if ((int)lVar5 != 0) {
        puVar7 = PTR_PTR_1126ae558;
        func_0x000107c61168(PTR_PTR_1126ae558);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c451b0(puVar7);
        func_0x000107c61180();
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(lVar4);
        goto LAB_101c66db4;
      }
      func_0x000107c61170(lVar4);
    }
  }
  puVar6 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (lVar3 != 0) {
    puVar7 = &UNK_11045fae8;
    func_0x000107c613fc(&UNK_11045fae8,0x18,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    pcStack_50 = FUN_101c66dd4;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_101c66ac8;
    puStack_58 = &UNK_11045fb00;
    puStack_48 = puVar7;
    func_0x000107c60bc4(&puStack_70);
    puVar7 = puStack_48;
    func_0x000107c615f0(lVar3);
    func_0x000107c61174(puVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c3f974(lVar3);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(lVar3);
  }
  puVar7 = puVar6;
  func_0x000107c43bf4(puVar6);
  func_0x000107c61180();
  func_0x000107c615e8(lVar1);
  func_0x000107c615e8(lVar3);
LAB_101c66db4:
  func_0x000107c61170(puVar6);
  return puVar7;
}



/* Entry: 101c66dd4; end: 101c66df7;  */

void FUN_101c66dd4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c49ca4();
  }
  uVar1 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c6010c(param_1,uVar1);
  func_0x000107c3fefc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c66df8; end: 101c66f07;  */

void FUN_101c66df8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112df8910,&UNK_10d9c8e80);
  puVar1 = &UNK_11045fb38;
  func_0x000107c613fc(&UNK_11045fb38,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101c66f08,puVar1);
  return;
}



/* Entry: 101c66f08; end: 101c66f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c66f08(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar3 = &lStack_50;
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_40);
  lVar1 = 0;
  FUN_101c66a44();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e0d180) = uStack_38;
  *(undefined8 *)(lVar2 + _DAT_112e0d188) = uStack_40;
  lStack_50 = lVar2;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar3;
  return;
}



/* Entry: 101c66f50; end: 101c6704b;  */

void FUN_101c66f50(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f006c70);
  uVar2 = uStack_38;
  func_0x000107c3ebd4();
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  *param_1 = (char)uVar2;
  return;
}



/* Entry: 101c6704c; end: 101c67097;  */

void FUN_101c6704c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


