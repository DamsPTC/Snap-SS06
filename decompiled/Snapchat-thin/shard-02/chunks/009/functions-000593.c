/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10229cc0c; end: 10229cc4f; -[SCMemoriesSelectionFooterBarControllerFactorySaberServiceProvider end] */

void FUN_10229cc0c(undefined8 param_1)

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



/* Entry: 10229cc50; end: 10229cde7;  */

void FUN_10229cc50(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef0f80c00)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000020,0x800000010f07f400,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MemoriesScopeGraphBridge/SCMemoriesSelectionFooterBarControllerFactorySaberServiceProvider.swift"
                            ,0x60,2,0x5a,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10229cde8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c565c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10229cde8; end: 10229ce93; -[SCMemoriesSelectionFooterBarControllerFactorySaberServiceProvider setValue:forIvarName:] */

void FUN_10229cde8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10229cc50(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10229ce94; end: 10229cf07; -[SCMemoriesSelectionFooterBarControllerFactorySaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229ce94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e79ef8,0);
  func_0x000107c61614(param_1 + _DAT_112e79f00,0);
  *(undefined8 *)(param_1 + _DAT_112e79f08) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10229cf08; end: 10229cf3b;  */

void FUN_10229cf08(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10229cf3c; end: 10229cf83; -[SCMemoriesSelectionFooterBarControllerFactorySaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229cf3c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e79ef8);
  func_0x000107c61610(param_1 + _DAT_112e79f00);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e79f08));
  return;
}



/* Entry: 10229cf84; end: 10229cfa3;  */

void FUN_10229cf84(void)

{
  func_0x000107c61168(&PTR_PTR_112e79f50);
  return;
}



/* Entry: 10229cfa4; end: 10229cfaf; -[SCSCGenAIDreamsScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229cfa4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e79fb8;
  func_0x000107c61428(param_1 + _DAT_112e79fb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10229cfb0; end: 10229cfbb; -[SCSCGenAIDreamsScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229cfb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e79fb8;
  func_0x000107c61428(param_1 + _DAT_112e79fb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10229cfbc; end: 10229cfc7; -[SCSCGenAIDreamsScopeServicesSaberServiceProvider memoriesScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229cfbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e79fc0;
  func_0x000107c61428(param_1 + _DAT_112e79fc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10229cfc8; end: 10229d00b;  */

void FUN_10229cfc8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10229d00c; end: 10229d017; -[SCSCGenAIDreamsScopeServicesSaberServiceProvider setMemoriesScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229d00c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e79fc0;
  func_0x000107c61428(param_1 + _DAT_112e79fc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10229d018; end: 10229d06b;  */

void FUN_10229d018(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10229d06c; end: 10229d27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10229d06c(void)

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
    func_0x000107c4cc6c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102293250();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e798c8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e79fc8);
      *(long *)(unaff_x20 + _DAT_112e79fc8) = lVar4;
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
                      "MemoriesScopeGraphBridge/SCSCGenAIDreamsScopeServicesSaberServiceProvider.swift"
                      ,0x4f,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10229d198);
  (*pcVar1)();
}



/* Entry: 10229d280; end: 10229d2b3; -[SCSCGenAIDreamsScopeServicesSaberServiceProvider provide] */

void FUN_10229d280(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10229d06c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10229d2b4; end: 10229d2e7; -[SCSCGenAIDreamsScopeServicesSaberServiceProvider __safeProvide] */

void FUN_10229d2b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010229d198();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10229d2e8; end: 10229d32b; -[SCSCGenAIDreamsScopeServicesSaberServiceProvider end] */

void FUN_10229d2e8(undefined8 param_1)

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



/* Entry: 10229d32c; end: 10229d4c3;  */

void FUN_10229d32c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef0f80c00)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000020,0x800000010f07f400,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MemoriesScopeGraphBridge/SCSCGenAIDreamsScopeServicesSaberServiceProvider.swift"
                            ,0x4f,2,0x5a,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10229d4c4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c565c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10229d4c4; end: 10229d56f; -[SCSCGenAIDreamsScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10229d4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10229d32c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10229d570; end: 10229d5e3; -[SCSCGenAIDreamsScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229d570(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e79fb8,0);
  func_0x000107c61614(param_1 + _DAT_112e79fc0,0);
  *(undefined8 *)(param_1 + _DAT_112e79fc8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10229d5e4; end: 10229d617;  */

void FUN_10229d5e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10229d618; end: 10229d65f; -[SCSCGenAIDreamsScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229d618(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e79fb8);
  func_0x000107c61610(param_1 + _DAT_112e79fc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e79fc8));
  return;
}



/* Entry: 10229d660; end: 10229d67f;  */

void FUN_10229d660(void)

{
  func_0x000107c61168(&PTR_PTR_112e7a010);
  return;
}



/* Entry: 10229d680; end: 10229d68b; -[SCSCMemoriesPrivateLockedTabServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229d680(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7a078;
  func_0x000107c61428(param_1 + _DAT_112e7a078,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10229d68c; end: 10229d697; -[SCSCMemoriesPrivateLockedTabServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229d68c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7a078;
  func_0x000107c61428(param_1 + _DAT_112e7a078,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10229d698; end: 10229d6a3; -[SCSCMemoriesPrivateLockedTabServicesSaberServiceProvider memoriesScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229d698(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7a080;
  func_0x000107c61428(param_1 + _DAT_112e7a080,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10229d6a4; end: 10229d6e7;  */

void FUN_10229d6a4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10229d6e8; end: 10229d6f3; -[SCSCMemoriesPrivateLockedTabServicesSaberServiceProvider setMemoriesScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229d6e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7a080;
  func_0x000107c61428(param_1 + _DAT_112e7a080,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10229d6f4; end: 10229d747;  */

void FUN_10229d6f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10229d748; end: 10229d95b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10229d748(void)

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
    func_0x000107c4cc6c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010229337c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e79920);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e7a088);
      *(long *)(unaff_x20 + _DAT_112e7a088) = lVar4;
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
                      "MemoriesScopeGraphBridge/SCSCMemoriesPrivateLockedTabServicesSaberServiceProvider.swift"
                      ,0x57,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10229d874);
  (*pcVar1)();
}



/* Entry: 10229d95c; end: 10229d98f; -[SCSCMemoriesPrivateLockedTabServicesSaberServiceProvider provide] */

void FUN_10229d95c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10229d748();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10229d990; end: 10229d9c3; -[SCSCMemoriesPrivateLockedTabServicesSaberServiceProvider __safeProvide] */

void FUN_10229d990(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010229d874();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10229d9c4; end: 10229da07; -[SCSCMemoriesPrivateLockedTabServicesSaberServiceProvider end] */

void FUN_10229d9c4(undefined8 param_1)

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



/* Entry: 10229da08; end: 10229db9f;  */

void FUN_10229da08(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef0f80c00)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000020,0x800000010f07f400,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MemoriesScopeGraphBridge/SCSCMemoriesPrivateLockedTabServicesSaberServiceProvider.swift"
                            ,0x57,2,0x5a,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10229dba0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c565c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10229dba0; end: 10229dc4b; -[SCSCMemoriesPrivateLockedTabServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10229dba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10229da08(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10229dc4c; end: 10229dcbf; -[SCSCMemoriesPrivateLockedTabServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229dc4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e7a078,0);
  func_0x000107c61614(param_1 + _DAT_112e7a080,0);
  *(undefined8 *)(param_1 + _DAT_112e7a088) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10229dcc0; end: 10229dcf3;  */

void FUN_10229dcc0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10229dcf4; end: 10229dd3b; -[SCSCMemoriesPrivateLockedTabServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229dcf4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e7a078);
  func_0x000107c61610(param_1 + _DAT_112e7a080);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e7a088));
  return;
}



/* Entry: 10229dd3c; end: 10229dd5b;  */

void FUN_10229dd3c(void)

{
  func_0x000107c61168(&PTR_PTR_112e7a0d0);
  return;
}



/* Entry: 10229dd5c; end: 10229dd67; -[SCSCMemoriesScopedMemoriesActivityServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229dd5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7a138;
  func_0x000107c61428(param_1 + _DAT_112e7a138,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10229dd68; end: 10229dd73; -[SCSCMemoriesScopedMemoriesActivityServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229dd68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7a138;
  func_0x000107c61428(param_1 + _DAT_112e7a138,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10229dd74; end: 10229dd7f; -[SCSCMemoriesScopedMemoriesActivityServicesSaberServiceProvider memoriesScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229dd74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7a140;
  func_0x000107c61428(param_1 + _DAT_112e7a140,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10229dd80; end: 10229ddc3;  */

void FUN_10229dd80(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10229ddc4; end: 10229ddcf; -[SCSCMemoriesScopedMemoriesActivityServicesSaberServiceProvider setMemoriesScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229ddc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7a140;
  func_0x000107c61428(param_1 + _DAT_112e7a140,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10229ddd0; end: 10229de23;  */

void FUN_10229ddd0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10229de24; end: 10229e037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10229de24(void)

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
    func_0x000107c4cc6c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001022934a8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e79928);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e7a148);
      *(long *)(unaff_x20 + _DAT_112e7a148) = lVar4;
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
                      "MemoriesScopeGraphBridge/SCSCMemoriesScopedMemoriesActivityServicesSaberServiceProvider.swift"
                      ,0x5d,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10229df50);
  (*pcVar1)();
}



/* Entry: 10229e038; end: 10229e06b; -[SCSCMemoriesScopedMemoriesActivityServicesSaberServiceProvider provide] */

void FUN_10229e038(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10229de24();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10229e06c; end: 10229e09f; -[SCSCMemoriesScopedMemoriesActivityServicesSaberServiceProvider __safeProvide] */

void FUN_10229e06c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010229df50();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10229e0a0; end: 10229e0e3; -[SCSCMemoriesScopedMemoriesActivityServicesSaberServiceProvider end] */

void FUN_10229e0a0(undefined8 param_1)

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



/* Entry: 10229e0e4; end: 10229e27b;  */

void FUN_10229e0e4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef0f80c00)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000020,0x800000010f07f400,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MemoriesScopeGraphBridge/SCSCMemoriesScopedMemoriesActivityServicesSaberServiceProvider.swift"
                            ,0x5d,2,0x5a,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10229e27c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c565c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10229e27c; end: 10229e327; -[SCSCMemoriesScopedMemoriesActivityServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10229e27c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10229e0e4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10229e328; end: 10229e39b; -[SCSCMemoriesScopedMemoriesActivityServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229e328(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e7a138,0);
  func_0x000107c61614(param_1 + _DAT_112e7a140,0);
  *(undefined8 *)(param_1 + _DAT_112e7a148) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10229e39c; end: 10229e3cf;  */

void FUN_10229e39c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10229e3d0; end: 10229e417; -[SCSCMemoriesScopedMemoriesActivityServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229e3d0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e7a138);
  func_0x000107c61610(param_1 + _DAT_112e7a140);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e7a148));
  return;
}



/* Entry: 10229e418; end: 10229e437;  */

void FUN_10229e418(void)

{
  func_0x000107c61168(&PTR_PTR_112e7a190);
  return;
}



/* Entry: 10229e438; end: 10229e443; -[SCSCMemoriesScopedMemoriesSendServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229e438(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7a1f8;
  func_0x000107c61428(param_1 + _DAT_112e7a1f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10229e444; end: 10229e44f; -[SCSCMemoriesScopedMemoriesSendServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229e444(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7a1f8;
  func_0x000107c61428(param_1 + _DAT_112e7a1f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10229e450; end: 10229e45b; -[SCSCMemoriesScopedMemoriesSendServicesSaberServiceProvider memoriesScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229e450(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7a200;
  func_0x000107c61428(param_1 + _DAT_112e7a200,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10229e45c; end: 10229e49f;  */

void FUN_10229e45c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10229e4a0; end: 10229e4ab; -[SCSCMemoriesScopedMemoriesSendServicesSaberServiceProvider setMemoriesScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229e4a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7a200;
  func_0x000107c61428(param_1 + _DAT_112e7a200,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10229e4ac; end: 10229e4ff;  */

void FUN_10229e4ac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10229e500; end: 10229e713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10229e500(void)

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
    func_0x000107c4cc6c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001022935d4();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e79930);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e7a208);
      *(long *)(unaff_x20 + _DAT_112e7a208) = lVar4;
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
                      "MemoriesScopeGraphBridge/SCSCMemoriesScopedMemoriesSendServicesSaberServiceProvider.swift"
                      ,0x59,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10229e62c);
  (*pcVar1)();
}



/* Entry: 10229e714; end: 10229e747; -[SCSCMemoriesScopedMemoriesSendServicesSaberServiceProvider provide] */

void FUN_10229e714(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10229e500();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10229e748; end: 10229e77b; -[SCSCMemoriesScopedMemoriesSendServicesSaberServiceProvider __safeProvide] */

void FUN_10229e748(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010229e62c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10229e77c; end: 10229e7bf; -[SCSCMemoriesScopedMemoriesSendServicesSaberServiceProvider end] */

void FUN_10229e77c(undefined8 param_1)

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



/* Entry: 10229e7c0; end: 10229e957;  */

void FUN_10229e7c0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef0f80c00)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000020,0x800000010f07f400,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MemoriesScopeGraphBridge/SCSCMemoriesScopedMemoriesSendServicesSaberServiceProvider.swift"
                            ,0x59,2,0x5a,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10229e958);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c565c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10229e958; end: 10229ea03; -[SCSCMemoriesScopedMemoriesSendServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10229e958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10229e7c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10229ea04; end: 10229ea77; -[SCSCMemoriesScopedMemoriesSendServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229ea04(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e7a1f8,0);
  func_0x000107c61614(param_1 + _DAT_112e7a200,0);
  *(undefined8 *)(param_1 + _DAT_112e7a208) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10229ea78; end: 10229eaab;  */

void FUN_10229ea78(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10229eaac; end: 10229eaf3; -[SCSCMemoriesScopedMemoriesSendServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229eaac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e7a1f8);
  func_0x000107c61610(param_1 + _DAT_112e7a200);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e7a208));
  return;
}



/* Entry: 10229eaf4; end: 10229eb13;  */

void FUN_10229eaf4(void)

{
  func_0x000107c61168(&PTR_PTR_112e7a250);
  return;
}



/* Entry: 10229eb14; end: 10229eb5b; -[SCSCMemoriesScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229eb14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7a2b8;
  func_0x000107c61428(param_1 + _DAT_112e7a2b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10229eb5c; end: 10229ebb3; -[SCSCMemoriesScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229eb5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7a2b8;
  func_0x000107c61428(param_1 + _DAT_112e7a2b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10229ebb4; end: 10229ec8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229ebb4(undefined8 param_1,long param_2)

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
    FUN_1022938a8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e79830) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10229ec8c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e79838);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e7a2c0);
    *(long **)(unaff_x20 + _DAT_112e7a2c0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10229ec8c; end: 10229ecb3; -[SCSCMemoriesScopedServicesSaberEntryPoint begin] */

void FUN_10229ec8c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10229ebb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10229ecb4; end: 10229ee2b;  */

/* WARNING: Possible PIC construction at 0x00010229ed1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010229edb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010229ed20) */
/* WARNING: Removing unreachable block (ram,0x00010229edb8) */
/* WARNING: Removing unreachable block (ram,0x00010229edd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229ecb4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e7a2c0);
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



/* Entry: 10229ee2c; end: 10229ee33;  */

void FUN_10229ee2c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10229ee34; end: 10229ee67; -[SCSCMemoriesScopedServicesSaberEntryPoint end] */

void FUN_10229ee34(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10229ecb4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10229ee68; end: 10229ef87;  */

void FUN_10229ee68(long param_1,long param_2,long param_3)

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
                        "MemoriesScopeGraphBridge/SCSCMemoriesScopedServicesSaberEntryPoint.swift",
                        0x48,2,0x50,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10229ef88);
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



/* Entry: 10229ef88; end: 10229f033; -[SCSCMemoriesScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10229ef88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10229ee68(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10229f034; end: 10229f093; -[SCSCMemoriesScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229f034(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e7a2b8,0);
  *(undefined8 *)(param_1 + _DAT_112e7a2c0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10229f094; end: 10229f0c7;  */

void FUN_10229f094(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10229f0c8; end: 10229f0ff; -[SCSCMemoriesScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10229f0c8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e7a2b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7a2c0));
  return;
}



/* Entry: 10229f100; end: 10229f11f;  */

void FUN_10229f100(void)

{
  func_0x000107c61168(&PTR_PTR_1128319f0);
  return;
}



/* Entry: 10229f120; end: 10229f9f3;  */

void FUN_10229f120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e7a2f0,&UNK_10da84550);
  puVar1 = &UNK_1104ee528;
  func_0x000107c613fc(&UNK_1104ee528,0x1d8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_32;
  *(undefined8 *)(puVar1 + 0x20) = param_41;
  *(undefined8 *)(puVar1 + 0x28) = param_48;
  *(undefined8 *)(puVar1 + 0x30) = param_39;
  *(undefined8 *)(puVar1 + 0x38) = param_13;
  *(undefined8 *)(puVar1 + 0x40) = param_49;
  *(undefined8 *)(puVar1 + 0x48) = param_10;
  *(undefined8 *)(puVar1 + 0x50) = param_27;
  *(undefined8 *)(puVar1 + 0x58) = param_18;
  *(undefined8 *)(puVar1 + 0x60) = param_21;
  *(undefined8 *)(puVar1 + 0x68) = param_25;
  *(undefined8 *)(puVar1 + 0x70) = param_20;
  *(undefined8 *)(puVar1 + 0x78) = param_31;
  *(undefined8 *)(puVar1 + 0x80) = param_29;
  *(undefined8 *)(puVar1 + 0x88) = param_11;
  *(undefined8 *)(puVar1 + 0x90) = param_6;
  *(undefined8 *)(puVar1 + 0x98) = param_37;
  *(undefined8 *)(puVar1 + 0xa0) = param_24;
  *(undefined8 *)(puVar1 + 0xa8) = param_30;
  *(undefined8 *)(puVar1 + 0xb0) = param_23;
  *(undefined8 *)(puVar1 + 0xb8) = param_36;
  *(undefined8 *)(puVar1 + 0xc0) = param_17;
  *(undefined8 *)(puVar1 + 200) = param_22;
  *(undefined8 *)(puVar1 + 0xd0) = param_5;
  *(undefined8 *)(puVar1 + 0xd8) = param_14;
  *(undefined8 *)(puVar1 + 0xe0) = param_12;
  *(undefined8 *)(puVar1 + 0xe8) = param_34;
  *(undefined8 *)(puVar1 + 0xf0) = param_2;
  *(undefined8 *)(puVar1 + 0xf8) = param_46;
  *(undefined8 *)(puVar1 + 0x100) = param_26;
  *(undefined8 *)(puVar1 + 0x108) = param_16;
  *(undefined8 *)(puVar1 + 0x110) = param_7;
  *(undefined8 *)(puVar1 + 0x118) = param_43;
  *(undefined8 *)(puVar1 + 0x120) = param_4;
  *(undefined8 *)(puVar1 + 0x128) = param_8;
  *(undefined8 *)(puVar1 + 0x130) = param_40;
  *(undefined8 *)(puVar1 + 0x138) = param_42;
  *(undefined8 *)(puVar1 + 0x140) = param_9;
  *(undefined8 *)(puVar1 + 0x148) = param_19;
  *(undefined8 *)(puVar1 + 0x150) = param_15;
  *(undefined8 *)(puVar1 + 0x158) = param_35;
  *(undefined8 *)(puVar1 + 0x160) = param_50;
  *(undefined8 *)(puVar1 + 0x168) = param_33;
  *(undefined8 *)(puVar1 + 0x170) = param_38;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_56;
  *(undefined8 *)(puVar1 + 0x188) = param_44;
  *(undefined8 *)(puVar1 + 400) = param_57;
  *(undefined8 *)(puVar1 + 0x198) = param_45;
  *(undefined8 *)(puVar1 + 0x1a0) = param_53;
  *(undefined8 *)(puVar1 + 0x1a8) = param_55;
  *(undefined8 *)(puVar1 + 0x1b0) = param_52;
  *(undefined8 *)(puVar1 + 0x1b8) = param_54;
  *(undefined8 *)(puVar1 + 0x1c0) = param_28;
  *(undefined8 *)(puVar1 + 0x1c8) = param_51;
  *(undefined8 *)(puVar1 + 0x1d0) = param_1;
  func_0x000107c6157c();
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10229f5d0,puVar1);
  return;
}



/* Entry: 10229f9f4; end: 10229fa03;  */

undefined1  [16] FUN_10229f9f4(void)

{
  return ZEXT816(0x1104ee550);
}



/* Entry: 10229fa04; end: 10229fbe7;  */

void FUN_10229fa04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10229fbe8; end: 1022a18c3;  */

void FUN_10229fbe8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112e7a300,&UNK_10da845b0);
  func_0x0001000838ec();
  uVar1 = param_2;
  func_0x00010229fe08();
  func_0x000107c61574(param_2);
  func_0x000100082720("MemoriesSelectionFooterBarControllerEntryPointProvider",0x36,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022a18c4; end: 1022a195f;  */

void FUN_1022a18c4(void)

{
  long unaff_x20;
  
  func_0x0001022a02b8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                      *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                      *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                      *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                      *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                      *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                      *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                      *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                      *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                      *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                      *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                      *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                      *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                      *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                      *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                      *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                      *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8));
  return;
}



/* Entry: 1022a1960; end: 1022a196f;  */

undefined1  [16] FUN_1022a1960(void)

{
  return ZEXT816(0x1104ee698);
}



/* Entry: 1022a1970; end: 1022a19a3;  */

undefined8 FUN_1022a1970(undefined8 param_1)

{
  (*(code *)&DAT_10391ab5c)();
  return param_1;
}



/* Entry: 1022a19a4; end: 1022a1a2f; -[SCMemoriesMultiSelectActionBar delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a19a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7a320;
  func_0x000107c61428(param_1 + _DAT_112e7a320,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022a1a30; end: 1022a1bd3; -[SCMemoriesMultiSelectActionBar setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a1a30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7a320;
  func_0x000107c61428(param_1 + _DAT_112e7a320,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1022a1bd4; end: 1022a1c33;  */

void FUN_1022a1bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c610f8();
  FUN_1022a1c34(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 1022a1c34; end: 1022a1e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1022a1c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffff90;
  func_0x000107c61614(unaff_x20 + _DAT_112e7a320,0);
  *(undefined1 *)(unaff_x20 + _DAT_112e7a328) = 0;
  lVar1 = _DAT_112e7a330;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4020000000000000,puVar2);
  func_0x000107c61174();
  func_0x000107c54280();
  func_0x000107c5a050(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e7a338;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c52b2c();
  func_0x000107c61174();
  func_0x000107c59594(0xc020000000000000);
  func_0x000107c5a050(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e7a340;
  puVar2 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c52b54();
  puVar3 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  func_0x000107c45110(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c55260(puVar2);
  func_0x000107c552c8(puVar2);
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e7a348;
  FUN_1022a2130();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112e7a350;
  func_0x0001022a222c();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112e7a358;
  FUN_1022a2490();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112e7a360;
  func_0x0001022a2570();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112e7a368;
  func_0x0001022a2740();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a370) = 0;
  FUN_1022a28f8();
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_initWithFrame__1125e2948);
  puVar4[_DAT_112e7a328] = param_5;
  func_0x000107c61174();
  FUN_1022a2d8c();
  func_0x000107c61170(puVar4);
  return puVar4;
}



/* Entry: 1022a1e9c; end: 1022a1ebf; -[SCMemoriesMultiSelectActionBar initWithFrame:shouldUseNewSendButton:] */

void FUN_1022a1e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1022a1c34(param_3);
  return;
}



/* Entry: 1022a1ec0; end: 1022a2107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1022a1ec0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffb0;
  func_0x000107c61614(unaff_x20 + _DAT_112e7a320,0);
  *(undefined1 *)(unaff_x20 + _DAT_112e7a328) = 0;
  lVar1 = _DAT_112e7a330;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4020000000000000,puVar2);
  func_0x000107c61174();
  func_0x000107c54280();
  func_0x000107c5a050(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e7a338;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c52b2c();
  func_0x000107c61174();
  func_0x000107c59594(0xc020000000000000);
  func_0x000107c5a050(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e7a340;
  puVar2 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c52b54();
  puVar3 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  func_0x000107c45110(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c55260(puVar2);
  func_0x000107c552c8(puVar2);
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e7a348;
  FUN_1022a2130();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112e7a350;
  func_0x0001022a222c();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112e7a358;
  FUN_1022a2490();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112e7a360;
  func_0x0001022a2570();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112e7a368;
  func_0x0001022a2740();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a370) = 0;
  FUN_1022a28f8();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithCoder__1125dd730,param_1);
  if (puVar4 != (undefined1 *)0x0) {
    puVar5 = puVar4;
    func_0x000107c61174(puVar4);
    FUN_1022a2d8c();
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(param_1);
  return puVar4;
}



/* Entry: 1022a2108; end: 1022a212f; -[SCMemoriesMultiSelectActionBar initWithCoder:] */

void FUN_1022a2108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1022a1ec0();
  return;
}



/* Entry: 1022a2130; end: 1022a244f;  */

undefined * FUN_1022a2130(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c59a2c();
  func_0x000107c61174(puVar1);
  uVar2 = 0x7475625f646e6573;
  func_0x000107c5fadc(0x7475625f646e6573,0xeb000000006e6f74);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  func_0x000107c45110(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar3;
    func_0x000107c4507c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
  }
  func_0x000107c55260(puVar1);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 1022a2450; end: 1022a2457;  */

void FUN_1022a2450(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTypeStyle__112664568,5);
  return;
}


