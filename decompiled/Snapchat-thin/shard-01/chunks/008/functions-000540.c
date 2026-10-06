/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101512938; end: 10151298b;  */

void FUN_101512938(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10151298c; end: 101512b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10151298c(void)

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
    func_0x000107c5d1e0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010150a358();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112dad980);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dae2c8);
      *(long *)(unaff_x20 + _DAT_112dae2c8) = lVar4;
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
                      "UnauthenticatedScopeGraphBridge/SCSCUnauthenticatedContactPermissionInfoServicesSaberServiceProvider.swift"
                      ,0x6a,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101512ab8);
  (*pcVar1)();
}



/* Entry: 101512ba0; end: 101512bd3; -[SCSCUnauthenticatedContactPermissionInfoServicesSaberServiceProvider provide] */

void FUN_101512ba0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10151298c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101512bd4; end: 101512c07; -[SCSCUnauthenticatedContactPermissionInfoServicesSaberServiceProvider __safeProvide] */

void FUN_101512bd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101512ab8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101512c08; end: 101512c4b; -[SCSCUnauthenticatedContactPermissionInfoServicesSaberServiceProvider end] */

void FUN_101512c08(undefined8 param_1)

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



/* Entry: 101512c4c; end: 101512de3;  */

void FUN_101512c4c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef1074440)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010ef8bbc0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "UnauthenticatedScopeGraphBridge/SCSCUnauthenticatedContactPermissionInfoServicesSaberServiceProvider.swift"
                            ,0x6a,2,0x4d,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101512de4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a154();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101512de4; end: 101512e8f; -[SCSCUnauthenticatedContactPermissionInfoServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_101512de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101512c4c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101512e90; end: 101512f03; -[SCSCUnauthenticatedContactPermissionInfoServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101512e90(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dae2b8,0);
  func_0x000107c61614(param_1 + _DAT_112dae2c0,0);
  *(undefined8 *)(param_1 + _DAT_112dae2c8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101512f04; end: 101512f37;  */

void FUN_101512f04(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101512f38; end: 101512f7f; -[SCSCUnauthenticatedContactPermissionInfoServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101512f38(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dae2b8);
  func_0x000107c61610(param_1 + _DAT_112dae2c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dae2c8));
  return;
}



/* Entry: 101512f80; end: 101512f9f;  */

void FUN_101512f80(void)

{
  func_0x000107c61168(&PTR_PTR_112dae310);
  return;
}



/* Entry: 101512fa0; end: 101512fab; -[SCSCUserVerificationScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101512fa0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dae378;
  func_0x000107c61428(param_1 + _DAT_112dae378,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101512fac; end: 101512fb7; -[SCSCUserVerificationScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101512fac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dae378;
  func_0x000107c61428(param_1 + _DAT_112dae378,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101512fb8; end: 101512fc3; -[SCSCUserVerificationScopeServicesSaberServiceProvider unauthenticatedScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101512fb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dae380;
  func_0x000107c61428(param_1 + _DAT_112dae380,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101512fc4; end: 101513007;  */

void FUN_101512fc4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101513008; end: 101513013; -[SCSCUserVerificationScopeServicesSaberServiceProvider setUnauthenticatedScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101513008(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dae380;
  func_0x000107c61428(param_1 + _DAT_112dae380,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101513014; end: 101513067;  */

void FUN_101513014(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101513068; end: 10151327b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101513068(void)

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
    func_0x000107c5d1e0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010150a484();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112dad998);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dae388);
      *(long *)(unaff_x20 + _DAT_112dae388) = lVar4;
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
                      "UnauthenticatedScopeGraphBridge/SCSCUserVerificationScopeServicesSaberServiceProvider.swift"
                      ,0x5b,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101513194);
  (*pcVar1)();
}



/* Entry: 10151327c; end: 1015132af; -[SCSCUserVerificationScopeServicesSaberServiceProvider provide] */

void FUN_10151327c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101513068();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1015132b0; end: 1015132e3; -[SCSCUserVerificationScopeServicesSaberServiceProvider __safeProvide] */

void FUN_1015132b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101513194();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1015132e4; end: 101513327; -[SCSCUserVerificationScopeServicesSaberServiceProvider end] */

void FUN_1015132e4(undefined8 param_1)

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



/* Entry: 101513328; end: 1015134bf;  */

void FUN_101513328(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef1074440)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010ef8bbc0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "UnauthenticatedScopeGraphBridge/SCSCUserVerificationScopeServicesSaberServiceProvider.swift"
                            ,0x5b,2,0x4d,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1015134c0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a154();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1015134c0; end: 10151356b; -[SCSCUserVerificationScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1015134c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101513328(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10151356c; end: 1015135df; -[SCSCUserVerificationScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151356c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dae378,0);
  func_0x000107c61614(param_1 + _DAT_112dae380,0);
  *(undefined8 *)(param_1 + _DAT_112dae388) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1015135e0; end: 101513613;  */

void FUN_1015135e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101513614; end: 10151365b; -[SCSCUserVerificationScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101513614(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dae378);
  func_0x000107c61610(param_1 + _DAT_112dae380);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dae388));
  return;
}



/* Entry: 10151365c; end: 10151367b;  */

void FUN_10151365c(void)

{
  func_0x000107c61168(&PTR_PTR_112dae3d0);
  return;
}



/* Entry: 10151367c; end: 1015136c3; -[SCSCUnauthenticatedScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151367c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dae438;
  func_0x000107c61428(param_1 + _DAT_112dae438,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1015136c4; end: 10151371b; -[SCSCUnauthenticatedScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015136c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dae438;
  func_0x000107c61428(param_1 + _DAT_112dae438,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10151371c; end: 1015137f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151371c(undefined8 param_1,long param_2)

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
    FUN_10150a758();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112dad8b8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1015137f4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112dad8c0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dae440);
    *(long **)(unaff_x20 + _DAT_112dae440) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1015137f4; end: 10151381b; -[SCSCUnauthenticatedScopedServicesSaberEntryPoint begin] */

void FUN_1015137f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10151371c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10151381c; end: 101513993;  */

/* WARNING: Possible PIC construction at 0x000101513884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010151391c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101513888) */
/* WARNING: Removing unreachable block (ram,0x000101513920) */
/* WARNING: Removing unreachable block (ram,0x000101513938) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151381c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112dae440);
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



/* Entry: 101513994; end: 10151399b;  */

void FUN_101513994(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10151399c; end: 1015139cf; -[SCSCUnauthenticatedScopedServicesSaberEntryPoint end] */

void FUN_10151399c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10151381c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1015139d0; end: 101513aef;  */

void FUN_1015139d0(long param_1,long param_2,long param_3)

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
                        "UnauthenticatedScopeGraphBridge/SCSCUnauthenticatedScopedServicesSaberEntryPoint.swift"
                        ,0x56,2,0x43,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101513af0);
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



/* Entry: 101513af0; end: 101513b9b; -[SCSCUnauthenticatedScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101513af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1015139d0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101513b9c; end: 101513bfb; -[SCSCUnauthenticatedScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101513b9c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dae438,0);
  *(undefined8 *)(param_1 + _DAT_112dae440) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101513bfc; end: 101513c2f;  */

void FUN_101513bfc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101513c30; end: 101513c67; -[SCSCUnauthenticatedScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101513c30(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dae438);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dae440));
  return;
}



/* Entry: 101513c68; end: 101513c87;  */

void FUN_101513c68(void)

{
  func_0x000107c61168(&PTR_PTR_1127de360);
  return;
}



/* Entry: 101513c88; end: 101513cdb;  */

undefined8 FUN_101513c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101513cdc(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101513cdc; end: 101513e47;  */

void FUN_101513cdc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  
  lVar1 = param_2;
  func_0x000107c3e270();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c4f800();
    func_0x000107c61180();
    puVar3 = &UNK_1103d5388;
    func_0x000107c613fc(&UNK_1103d5388,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar1;
    func_0x0001000285a8(0x112dae470,&UNK_10d956a40);
    func_0x000107c613fc();
    func_0x000107c61174(lVar1);
    pcVar4 = FUN_101513e94;
    func_0x0001000bdd8c(FUN_101513e94,puVar3);
    pcVar5 = pcVar4;
    func_0x0001003a5b88();
    func_0x000107c61574(pcVar4);
    puVar3 = PTR_PTR_1126a7620;
    func_0x000107c610f8(PTR_PTR_1126a7620);
    func_0x000107c47ca4();
    func_0x000107c42c20(param_3);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(pcVar5);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 101513e48; end: 101513e93;  */

void FUN_101513e48(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001015142e4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 101513e94; end: 101513eb7;  */

void FUN_101513e94(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x0001015142e4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 101513eb8; end: 101513f27;  */

void FUN_101513eb8(void)

{
  func_0x000107c61168(&PTR_PTR_112dae4b8);
  return;
}



/* Entry: 101513f28; end: 101513f57;  */

bool FUN_101513f28(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101513f58; end: 10151401b;  */

void FUN_101513f58(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    *(long *)(param_1 + 0x30) = param_2;
    uVar2 = 1;
  }
  else {
    if (param_2 == 1) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x18) = 1;
      *(code **)(param_1 + 0x20) = param_3;
      *(undefined8 *)(param_1 + 0x28) = param_4;
      func_0x000107c6157c(param_4);
      func_0x00010151442c(uVar2,uVar1,uVar3);
      goto LAB_101513ffc;
    }
    uVar2 = 0;
  }
  (*param_3)(uVar2);
LAB_101513ffc:
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 10151401c; end: 101514123; -[_TtC41SCAuthenticationOrchestrationServicesImpl30AuthenticationOrchestratorImpl launchAuthenticationWithType:block:] */

/* WARNING: Possible PIC construction at 0x0001015140f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101514104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015140f8) */
/* WARNING: Removing unreachable block (ram,0x000101514108) */

void FUN_10151401c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1103d54f8;
  func_0x000107c613fc(&UNK_1103d54f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c614f0(uVar4);
  puVar2 = &UNK_1103d54a8;
  func_0x000107c613fc(&UNK_1103d54a8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,param_1);
  puVar3 = &UNK_1103d5520;
  func_0x000107c613fc(&UNK_1103d5520,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = 0x10151443c;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x101514450,puVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101514124; end: 1015141e7;  */

void FUN_101514124(long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x30) == param_2) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      pcVar3 = *(code **)(param_1 + 0x20);
      if (pcVar3 != (code *)0x0) {
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x30) = uVar4;
        func_0x000107c6157c(uVar2);
        (*pcVar3)((param_3 ^ 0xffffffff) & 1);
        func_0x00010151442c(uVar4,pcVar3,uVar2);
        uVar2 = *(undefined8 *)(param_1 + 0x18);
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        func_0x00010151442c(uVar2,uVar4,uVar1);
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1015141e8; end: 1015142b3; -[_TtC41SCAuthenticationOrchestrationServicesImpl30AuthenticationOrchestratorImpl authenticationFinishedWithType:success:] */

/* WARNING: Possible PIC construction at 0x00010151428c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101514290) */

void FUN_1015141e8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_1103d54a8;
  func_0x000107c613fc(&UNK_1103d54a8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1103d54d0;
  func_0x000107c613fc(&UNK_1103d54d0,0x21,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  puVar2[0x20] = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x101514420,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1015142b4; end: 101514303;  */

void FUN_1015142b4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x00010151442c(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101514304; end: 10151430b;  */

void FUN_101514304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10151430c; end: 101514387;  */

undefined8 * FUN_10151430c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = param_1[2];
  uVar1 = param_2[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 101514388; end: 101514463;  */

int FUN_101514388(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101514464; end: 101514473; -[_TtC20SCOdlvLoggerServices18OdlvLoggerServices odlvEventLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101514464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dae5c8));
  return;
}



/* Entry: 101514474; end: 1015144bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101514474(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dae5c8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1015144c0; end: 101514517; -[_TtC20SCOdlvLoggerServices18OdlvLoggerServices initWithOdlvEventLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015144c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112dae5c8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 101514518; end: 101514577; -[_TtC20SCOdlvLoggerServices18OdlvLoggerServices init] */

void FUN_101514518(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCOdlvLoggerServices.OdlvLoggerServices",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101514544);
  (*pcVar1)();
}



/* Entry: 101514578; end: 101514587; -[_TtC20SCOdlvLoggerServices18OdlvLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101514578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dae5c8));
  return;
}



/* Entry: 101514588; end: 1015145a7;  */

void FUN_101514588(void)

{
  func_0x000107c61168(&PTR_PTR_1127de420);
  return;
}



/* Entry: 1015145a8; end: 1015145af; -[_TtC43AuthFlowTreatmentInfoServicesImplementation32AuthFlowTreatmentInfoServiceImpl authFlowTreatment] */

undefined8 FUN_1015145a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1015145b0; end: 1015145c7; -[_TtC43AuthFlowTreatmentInfoServicesImplementation32AuthFlowTreatmentInfoServiceImpl setAuthFlowTreatment:] */

void FUN_1015145b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1015145c8; end: 101514607;  */

void FUN_1015145c8(void)

{
  func_0x000107c61168(&PTR_PTR_112dae638);
  return;
}



/* Entry: 101514608; end: 1015146b3;  */

void FUN_101514608(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  
  ppuVar2 = &puStack_50;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_30 = FUN_1015146b4;
  uStack_28 = 0;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  pcStack_40 = FUN_1015146dc;
  puStack_38 = &UNK_1103d5638;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c3e4fc(puVar1,param_2,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  FUN_101514960(0);
  func_0x000107c610f8();
  func_0x0001015148d0(puVar1);
  return;
}



/* Entry: 1015146b4; end: 1015146db;  */

void FUN_1015146b4(void)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1015145c8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  return;
}



/* Entry: 1015146dc; end: 101514713;  */

void FUN_1015146dc(long param_1)

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



/* Entry: 101514714; end: 10151473f;  */

void FUN_101514714(long param_1,long param_2)

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



/* Entry: 101514740; end: 1015147ab;  */

void FUN_101514740(undefined8 param_1)

{
  if (lRam0000000112dae6c0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6437d8);
  return;
}



/* Entry: 1015147ac; end: 10151486b;  */

void FUN_1015147ac(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_40 = FUN_1015146b4;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1015146dc;
  puStack_48 = &UNK_1103d5660;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  FUN_101514960(0);
  func_0x000107c610f8();
  func_0x0001015148d0(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 10151486c; end: 101514873;  */

void FUN_10151486c(long param_1,long param_2)

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



/* Entry: 101514874; end: 101514883; -[AuthFlowTreatmentInfoServices authFlowTreatmentInfoService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101514874(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dae760));
  return;
}



/* Entry: 101514884; end: 10151491b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101514884(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dae760) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10151491c; end: 10151494f;  */

void FUN_10151491c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101514950; end: 10151495f; -[AuthFlowTreatmentInfoServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101514950(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dae760));
  return;
}



/* Entry: 101514960; end: 10151497f;  */

void FUN_101514960(void)

{
  func_0x000107c61168(&PTR_PTR_1127de4e0);
  return;
}



/* Entry: 101514980; end: 1015149c3;  */

void FUN_101514980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1015149c4; end: 1015149d3;  */

void FUN_1015149c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1015149d4; end: 101514af7;  */

void FUN_1015149d4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c40430();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar3 = &UNK_1103d57b0;
  func_0x000107c613fc(&UNK_1103d57b0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  pcStack_50 = FUN_101514b30;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101514b38;
  puStack_58 = &UNK_1103d57c8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar3 = PTR_PTR_1126a7628;
  func_0x000107c610f8(PTR_PTR_1126a7628);
  func_0x000107c460cc();
  func_0x000107c42c20(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 101514af8; end: 101514b2f;  */

void FUN_101514af8(undefined8 param_1)

{
  FUN_101514dc8(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  FUN_101514c08();
  return;
}



/* Entry: 101514b30; end: 101514b37;  */

void FUN_101514b30(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101514dc8(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  FUN_101514c08();
  return;
}



/* Entry: 101514b38; end: 101514b6f;  */

void FUN_101514b38(long param_1)

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



/* Entry: 101514b70; end: 101514b8b;  */

void FUN_101514b70(long param_1,long param_2)

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



/* Entry: 101514b8c; end: 101514bbf;  */

void FUN_101514b8c(void)

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



/* Entry: 101514bc0; end: 101514bdf;  */

void FUN_101514bc0(void)

{
  FUN_1015149d4();
  return;
}



/* Entry: 101514be0; end: 101514be7;  */

undefined8 FUN_101514be0(void)

{
  return 0;
}



/* Entry: 101514be8; end: 101514c07;  */

void FUN_101514be8(void)

{
  func_0x000107c61168(&PTR_PTR_112dae7d0);
  return;
}



/* Entry: 101514c08; end: 101514d33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101514c08(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar1 = _DAT_112dae848;
  (**(code **)(lVar5 + 0x68))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
             lVar2);
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010d956d30);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112dae840) = param_1;
  FUN_101514dc8();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101514d34; end: 101514d8f; -[_TtC51SCBitmojiUnauthenticatedContentManagerFetchServices21ContentManagerFetcher init] */

void FUN_101514d34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBitmojiUnauthenticatedContentManagerFetchServices.ContentManagerFetcher",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101514d60);
  (*pcVar1)();
}



/* Entry: 101514d90; end: 101514dc7; -[_TtC51SCBitmojiUnauthenticatedContentManagerFetchServices21ContentManagerFetcher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101514d90(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dae840));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dae848));
  return;
}



/* Entry: 101514dc8; end: 101514de7;  */

void FUN_101514dc8(void)

{
  func_0x000107c61168(&PTR_PTR_1127de5a0);
  return;
}



/* Entry: 101514de8; end: 1015153af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101514de8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  ulong uVar11;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar1 + -8);
  lVar15 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)&puStack_b0 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar14 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = lVar10 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = PTR_PTR_1126b9600;
  func_0x000107c61168();
  func_0x000107c402c8();
  func_0x000107c61180();
  func_0x000107c5edb4(lVar12);
  func_0x000107c61170();
  func_0x000107c5ed70();
  (**(code **)(lVar13 + 8))(lVar12,lVar2);
  puVar4 = PTR_PTR_1126b08b8;
  func_0x000107c610f8();
  puVar5 = puVar3;
  func_0x000107c5fadc(puVar3,param_2);
  func_0x000107c4766c();
  func_0x000107c61170(puVar5);
  lVar2 = param_1;
  func_0x000107c42e38(param_1);
  uVar16 = param_2;
  FUN_101515750(puVar3,param_2,lVar2);
  puStack_a8 = puVar3;
  func_0x000107c6142c(param_2);
  func_0x000107c42e38();
  func_0x00010900605c();
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar16 = 0;
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    *(long *)(puVar3 + 0x20) = lVar2;
    *(undefined8 *)(puVar3 + 0x28) = uVar16;
  }
  puVar6 = PTR_PTR_1126b1060;
  func_0x000107c610f8();
  func_0x000107c61434(uVar16);
  puVar5 = puVar3;
  func_0x000107c5fc48(puVar3,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar3);
  func_0x000107c47d08();
  func_0x000107c6142c(uVar16);
  func_0x000107c61170(puVar5);
  func_0x000107c5ee80(lVar10,0x40f5180000000000);
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x000107c61168();
  puStack_b0 = puVar3;
  (**(code **)(lVar9 + 0x10))(lVar14,lVar10,lVar1);
  uVar11 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar17 = uVar11 + 0x30 & (uVar11 ^ 0xffffffffffffffff);
  puVar3 = &UNK_1103d5820;
  func_0x000107c613fc(&UNK_1103d5820,uVar17 + lVar15,uVar11 | 7);
  puVar5 = puStack_a8;
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined **)(puVar3 + 0x18) = puVar4;
  *(undefined **)(puVar3 + 0x20) = puStack_a8;
  *(undefined **)(puVar3 + 0x28) = puVar6;
  (**(code **)(lVar9 + 0x20))(puVar3 + uVar17,lVar14,lVar1);
  pcStack_70 = FUN_101515948;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1011ea2b4;
  puStack_78 = &UNK_1103d5838;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar7);
  puVar3 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  func_0x000107c615f0(puVar5);
  func_0x000107c61174(puVar6);
  func_0x000107c61574(puVar3);
  puVar3 = puStack_b0;
  func_0x000107c41654(puStack_b0);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar8 = puVar3;
  func_0x000107c5c328(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar3);
  (**(code **)(lVar9 + 8))(lVar10,lVar1);
  return puVar8;
}



/* Entry: 1015153b0; end: 10151558b;  */

undefined * FUN_1015153b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar2 = param_1;
  func_0x000107c5ee70();
  puVar3 = &UNK_1103d58c0;
  func_0x000107c613fc(&UNK_1103d58c0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_1103d58e8;
  func_0x000107c613fc(&UNK_1103d58e8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1015159dc;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1015159e4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_10137d3d0;
  puStack_88 = &UNK_1103d5900;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4();
  puVar3 = puStack_78;
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c4fc28();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar2);
  puVar4 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  puVar3 = &UNK_1103d5938;
  func_0x000107c613fc(&UNK_1103d5938,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  pcStack_80 = FUN_101515a04;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_1103d5950;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar5);
  puVar3 = puStack_78;
  func_0x000107c615f0(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c408f0(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(param_2);
  return puVar4;
}



/* Entry: 10151558c; end: 1015156f3;  */

/* WARNING: Possible PIC construction at 0x000101515618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015156c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101515690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015156a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101515694) */
/* WARNING: Removing unreachable block (ram,0x0001015156c8) */
/* WARNING: Removing unreachable block (ram,0x00010151561c) */
/* WARNING: Removing unreachable block (ram,0x0001015156a8) */
/* WARNING: Removing unreachable block (ram,0x0001015156c0) */

void FUN_10151558c(undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  
  func_0x000107c61168(PTR_PTR_1126af5d0);
  if (((param_3 & 1) == 0) || (0xe < param_2 >> 0x3c)) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    param_1 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010d956d30);
    func_0x000107c466bc(puVar1);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010006c00c(param_1,param_2);
    func_0x000107c5ee20(param_1,param_2);
    func_0x000107c51770(puVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1015156f4; end: 10151574f; -[_TtC51SCBitmojiUnauthenticatedContentManagerFetchServices21ContentManagerFetcher fetchSelfieWithRequest:] */

void FUN_1015156f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101514de8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101515750; end: 101515947;  */

undefined * FUN_101515750(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_90 [64];
  
  puVar2 = PTR_PTR_1126b1058;
  func_0x000107c610f8();
  uVar3 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  uVar4 = 0x6567616d49;
  func_0x000107c5fadc(0x6567616d49,0xe500000000000000);
  func_0x000107c46d48();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  lVar5 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  puVar8 = auStack_90;
  func_0x000107c61534();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  *(undefined8 *)(lVar5 + 0x20) = 0x7275746165462d58;
  *(undefined8 *)(lVar5 + 0x28) = 0xe900000000000065;
  func_0x00010900605c();
  func_0x000107c61180();
  if (param_3 != 0) {
    lVar6 = param_3;
    func_0x000107c5faec();
    func_0x000107c61170(param_3);
    *(long *)(lVar5 + 0x30) = lVar6;
    *(undefined1 **)(lVar5 + 0x38) = puVar8;
    lVar6 = lVar5;
    func_0x0001001830b8(lVar5);
    func_0x000107c61588(lVar5);
    func_0x000100ab5dc4((undefined8 *)(lVar5 + 0x20));
    puVar7 = PTR_PTR_1126b1050;
    func_0x000107c610f8(PTR_PTR_1126b1050);
    uVar3 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    lVar5 = lVar6;
    func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar6);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c4915c(puVar7);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(param_1);
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101515948);
  (*pcVar1)();
}



/* Entry: 101515948; end: 10151597b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101515948(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar8 = 0;
  func_0x000107c5eea4();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar4 + -8);
  lVar11 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = *(long *)(lVar8 + _DAT_112dae840);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x000107c61168();
  if (lVar8 == 0) {
    puVar7 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c42d78();
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
  }
  else {
    (**(code **)(lVar12 + 0x10))
              (auStack_a0 + -(lVar11 + 0xfU & 0xfffffffffffffff0),
               unaff_x20 + (uVar9 + 0x30 & (uVar9 ^ 0xffffffffffffffff)),lVar4);
    uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar10 = uVar9 + 0x30 & (uVar9 ^ 0xffffffffffffffff);
    puVar7 = &UNK_1103d5870;
    puStack_98 = puVar5;
    func_0x000107c613fc(&UNK_1103d5870,uVar10 + lVar11,uVar9 | 7);
    *(long *)(puVar7 + 0x10) = lVar8;
    *(undefined8 *)(puVar7 + 0x18) = uVar2;
    *(undefined8 *)(puVar7 + 0x20) = uVar1;
    *(undefined8 *)(puVar7 + 0x28) = uVar3;
    (**(code **)(lVar12 + 0x20))
              (puVar7 + uVar10,auStack_a0 + -(lVar11 + 0xfU & 0xfffffffffffffff0),lVar4);
    pcStack_70 = FUN_101515998;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1004725e8;
    puStack_78 = &UNK_1103d5888;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar7;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_68;
    func_0x000107c615f0(lVar8);
    func_0x000107c61174(uVar2);
    func_0x000107c615f0(uVar1);
    func_0x000107c61174(uVar3);
    func_0x000107c61574(puVar5);
    puVar5 = puStack_98;
    func_0x000107c408f0(puStack_98);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar8);
  }
  return puVar5;
}



/* Entry: 10151597c; end: 101515997;  */

void FUN_10151597c(long param_1,long param_2)

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



/* Entry: 101515998; end: 1015159db;  */

undefined * FUN_101515998(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  func_0x000107c5eea4();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = param_1;
  func_0x000107c5ee70();
  puVar3 = &UNK_1103d58c0;
  func_0x000107c613fc(&UNK_1103d58c0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_1103d58e8;
  func_0x000107c613fc(&UNK_1103d58e8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1015159dc;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1015159e4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_10137d3d0;
  puStack_88 = &UNK_1103d5900;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4();
  puVar3 = puStack_78;
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c4fc28();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar2);
  puVar4 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  puVar3 = &UNK_1103d5938;
  func_0x000107c613fc(&UNK_1103d5938,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  pcStack_80 = FUN_101515a04;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_1103d5950;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar5);
  puVar3 = puStack_78;
  func_0x000107c615f0(uVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c408f0(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(uVar6);
  return puVar4;
}



/* Entry: 1015159dc; end: 1015159e3;  */

/* WARNING: Possible PIC construction at 0x000101515618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015156c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101515690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015156a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101515694) */
/* WARNING: Removing unreachable block (ram,0x0001015156c8) */
/* WARNING: Removing unreachable block (ram,0x00010151561c) */
/* WARNING: Removing unreachable block (ram,0x0001015156a8) */
/* WARNING: Removing unreachable block (ram,0x0001015156c0) */

void FUN_1015159dc(undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  
  func_0x000107c61168(PTR_PTR_1126af5d0);
  if (((param_3 & 1) == 0) || (0xe < param_2 >> 0x3c)) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    param_1 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010d956d30);
    func_0x000107c466bc(puVar1);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010006c00c(param_1,param_2);
    func_0x000107c5ee20(param_1,param_2);
    func_0x000107c51770(puVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1015159e4; end: 101515a03;  */

void FUN_1015159e4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}


