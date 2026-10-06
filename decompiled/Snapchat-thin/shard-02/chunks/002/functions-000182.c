/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ae97e4; end: 101ae97ef; -[SCSCFriendingMetricsLoggerServicesSaberServiceProvider setActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ae97e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfe4c8;
  func_0x000107c61428(param_1 + _DAT_112dfe4c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101ae97f0; end: 101ae9843;  */

void FUN_101ae97f0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101ae9844; end: 101ae9a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101ae9844(void)

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
    func_0x000107c3d1c8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000101addfbc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112dfd3c0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dfe4d0);
      *(long *)(unaff_x20 + _DAT_112dfe4d0) = lVar4;
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
                      "ActiveUserSessionScopeGraphBridge/SCSCFriendingMetricsLoggerServicesSaberServiceProvider.swift"
                      ,0x5e,2,0x82,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ae9970);
  (*pcVar1)();
}



/* Entry: 101ae9a58; end: 101ae9a8b; -[SCSCFriendingMetricsLoggerServicesSaberServiceProvider provide] */

void FUN_101ae9a58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101ae9844();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101ae9a8c; end: 101ae9abf; -[SCSCFriendingMetricsLoggerServicesSaberServiceProvider __safeProvide] */

void FUN_101ae9a8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101ae9970();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101ae9ac0; end: 101ae9b03; -[SCSCFriendingMetricsLoggerServicesSaberServiceProvider end] */

void FUN_101ae9ac0(undefined8 param_1)

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



/* Entry: 101ae9b04; end: 101ae9c9b;  */

void FUN_101ae9b04(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef10057f0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010effa810,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ActiveUserSessionScopeGraphBridge/SCSCFriendingMetricsLoggerServicesSaberServiceProvider.swift"
                            ,0x5e,2,0x97,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ae9c9c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5222c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101ae9c9c; end: 101ae9d47; -[SCSCFriendingMetricsLoggerServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_101ae9c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101ae9b04(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101ae9d48; end: 101ae9dbb; -[SCSCFriendingMetricsLoggerServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ae9d48(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dfe4c0,0);
  func_0x000107c61614(param_1 + _DAT_112dfe4c8,0);
  *(undefined8 *)(param_1 + _DAT_112dfe4d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ae9dbc; end: 101ae9def;  */

void FUN_101ae9dbc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ae9df0; end: 101ae9e37; -[SCSCFriendingMetricsLoggerServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ae9df0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dfe4c0);
  func_0x000107c61610(param_1 + _DAT_112dfe4c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dfe4d0));
  return;
}



/* Entry: 101ae9e38; end: 101ae9e57;  */

void FUN_101ae9e38(void)

{
  func_0x000107c61168(&PTR_PTR_112dfe518);
  return;
}



/* Entry: 101ae9e58; end: 101ae9e63; -[SCSCInLensCreationLoggingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ae9e58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfe580;
  func_0x000107c61428(param_1 + _DAT_112dfe580,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ae9e64; end: 101ae9e6f; -[SCSCInLensCreationLoggingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ae9e64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfe580;
  func_0x000107c61428(param_1 + _DAT_112dfe580,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101ae9e70; end: 101ae9e7b; -[SCSCInLensCreationLoggingServicesSaberServiceProvider activeUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ae9e70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfe588;
  func_0x000107c61428(param_1 + _DAT_112dfe588,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ae9e7c; end: 101ae9ebf;  */

void FUN_101ae9e7c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101ae9ec0; end: 101ae9ecb; -[SCSCInLensCreationLoggingServicesSaberServiceProvider setActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ae9ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfe588;
  func_0x000107c61428(param_1 + _DAT_112dfe588,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101ae9ecc; end: 101ae9f1f;  */

void FUN_101ae9ecc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101ae9f20; end: 101aea133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101ae9f20(void)

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
    func_0x000107c3d1c8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000101ade0e8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112dfd3d0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dfe590);
      *(long *)(unaff_x20 + _DAT_112dfe590) = lVar4;
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
                      "ActiveUserSessionScopeGraphBridge/SCSCInLensCreationLoggingServicesSaberServiceProvider.swift"
                      ,0x5d,2,0x82,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aea04c);
  (*pcVar1)();
}



/* Entry: 101aea134; end: 101aea167; -[SCSCInLensCreationLoggingServicesSaberServiceProvider provide] */

void FUN_101aea134(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101ae9f20();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101aea168; end: 101aea19b; -[SCSCInLensCreationLoggingServicesSaberServiceProvider __safeProvide] */

void FUN_101aea168(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101aea04c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101aea19c; end: 101aea1df; -[SCSCInLensCreationLoggingServicesSaberServiceProvider end] */

void FUN_101aea19c(undefined8 param_1)

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



/* Entry: 101aea1e0; end: 101aea377;  */

void FUN_101aea1e0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef10057f0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010effa810,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ActiveUserSessionScopeGraphBridge/SCSCInLensCreationLoggingServicesSaberServiceProvider.swift"
                            ,0x5d,2,0x97,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101aea378);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5222c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101aea378; end: 101aea423; -[SCSCInLensCreationLoggingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_101aea378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101aea1e0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101aea424; end: 101aea497; -[SCSCInLensCreationLoggingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aea424(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dfe580,0);
  func_0x000107c61614(param_1 + _DAT_112dfe588,0);
  *(undefined8 *)(param_1 + _DAT_112dfe590) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101aea498; end: 101aea4cb;  */

void FUN_101aea498(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101aea4cc; end: 101aea513; -[SCSCInLensCreationLoggingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aea4cc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dfe580);
  func_0x000107c61610(param_1 + _DAT_112dfe588);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dfe590));
  return;
}



/* Entry: 101aea514; end: 101aea533;  */

void FUN_101aea514(void)

{
  func_0x000107c61168(&PTR_PTR_112dfe5d8);
  return;
}



/* Entry: 101aea534; end: 101aea53f; -[SCSCLeaveCustomStoryScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aea534(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfe640;
  func_0x000107c61428(param_1 + _DAT_112dfe640,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101aea540; end: 101aea54b; -[SCSCLeaveCustomStoryScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aea540(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfe640;
  func_0x000107c61428(param_1 + _DAT_112dfe640,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101aea54c; end: 101aea557; -[SCSCLeaveCustomStoryScopeServicesSaberServiceProvider activeUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aea54c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfe648;
  func_0x000107c61428(param_1 + _DAT_112dfe648,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101aea558; end: 101aea59b;  */

void FUN_101aea558(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101aea59c; end: 101aea5a7; -[SCSCLeaveCustomStoryScopeServicesSaberServiceProvider setActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aea59c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfe648;
  func_0x000107c61428(param_1 + _DAT_112dfe648,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101aea5a8; end: 101aea5fb;  */

void FUN_101aea5a8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101aea5fc; end: 101aea80f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101aea5fc(void)

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
    func_0x000107c3d1c8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000101ade214();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112dfd3e0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dfe650);
      *(long *)(unaff_x20 + _DAT_112dfe650) = lVar4;
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
                      "ActiveUserSessionScopeGraphBridge/SCSCLeaveCustomStoryScopeServicesSaberServiceProvider.swift"
                      ,0x5d,2,0x82,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aea728);
  (*pcVar1)();
}



/* Entry: 101aea810; end: 101aea843; -[SCSCLeaveCustomStoryScopeServicesSaberServiceProvider provide] */

void FUN_101aea810(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101aea5fc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101aea844; end: 101aea877; -[SCSCLeaveCustomStoryScopeServicesSaberServiceProvider __safeProvide] */

void FUN_101aea844(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101aea728();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101aea878; end: 101aea8bb; -[SCSCLeaveCustomStoryScopeServicesSaberServiceProvider end] */

void FUN_101aea878(undefined8 param_1)

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



/* Entry: 101aea8bc; end: 101aeaa53;  */

void FUN_101aea8bc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef10057f0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010effa810,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ActiveUserSessionScopeGraphBridge/SCSCLeaveCustomStoryScopeServicesSaberServiceProvider.swift"
                            ,0x5d,2,0x97,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101aeaa54);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5222c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101aeaa54; end: 101aeaaff; -[SCSCLeaveCustomStoryScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_101aeaa54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101aea8bc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101aeab00; end: 101aeab73; -[SCSCLeaveCustomStoryScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeab00(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dfe640,0);
  func_0x000107c61614(param_1 + _DAT_112dfe648,0);
  *(undefined8 *)(param_1 + _DAT_112dfe650) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101aeab74; end: 101aeaba7;  */

void FUN_101aeab74(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101aeaba8; end: 101aeabef; -[SCSCLeaveCustomStoryScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeaba8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dfe640);
  func_0x000107c61610(param_1 + _DAT_112dfe648);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dfe650));
  return;
}



/* Entry: 101aeabf0; end: 101aeac0f;  */

void FUN_101aeabf0(void)

{
  func_0x000107c61168(&PTR_PTR_112dfe698);
  return;
}



/* Entry: 101aeac10; end: 101aeac1b; -[SCSCLensCreatorBlocklistServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeac10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfe700;
  func_0x000107c61428(param_1 + _DAT_112dfe700,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101aeac1c; end: 101aeac27; -[SCSCLensCreatorBlocklistServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeac1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfe700;
  func_0x000107c61428(param_1 + _DAT_112dfe700,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101aeac28; end: 101aeac33; -[SCSCLensCreatorBlocklistServicesSaberServiceProvider activeUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeac28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfe708;
  func_0x000107c61428(param_1 + _DAT_112dfe708,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101aeac34; end: 101aeac77;  */

void FUN_101aeac34(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101aeac78; end: 101aeac83; -[SCSCLensCreatorBlocklistServicesSaberServiceProvider setActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeac78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfe708;
  func_0x000107c61428(param_1 + _DAT_112dfe708,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101aeac84; end: 101aeacd7;  */

void FUN_101aeac84(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101aeacd8; end: 101aeaeeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101aeacd8(void)

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
    func_0x000107c3d1c8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000101ade340();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112dfd3e8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dfe710);
      *(long *)(unaff_x20 + _DAT_112dfe710) = lVar4;
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
                      "ActiveUserSessionScopeGraphBridge/SCSCLensCreatorBlocklistServicesSaberServiceProvider.swift"
                      ,0x5c,2,0x82,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aeae04);
  (*pcVar1)();
}



/* Entry: 101aeaeec; end: 101aeaf1f; -[SCSCLensCreatorBlocklistServicesSaberServiceProvider provide] */

void FUN_101aeaeec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101aeacd8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101aeaf20; end: 101aeaf53; -[SCSCLensCreatorBlocklistServicesSaberServiceProvider __safeProvide] */

void FUN_101aeaf20(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101aeae04();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101aeaf54; end: 101aeaf97; -[SCSCLensCreatorBlocklistServicesSaberServiceProvider end] */

void FUN_101aeaf54(undefined8 param_1)

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



/* Entry: 101aeaf98; end: 101aeb12f;  */

void FUN_101aeaf98(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef10057f0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010effa810,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ActiveUserSessionScopeGraphBridge/SCSCLensCreatorBlocklistServicesSaberServiceProvider.swift"
                            ,0x5c,2,0x97,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101aeb130);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5222c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101aeb130; end: 101aeb1db; -[SCSCLensCreatorBlocklistServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_101aeb130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101aeaf98(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101aeb1dc; end: 101aeb24f; -[SCSCLensCreatorBlocklistServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeb1dc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dfe700,0);
  func_0x000107c61614(param_1 + _DAT_112dfe708,0);
  *(undefined8 *)(param_1 + _DAT_112dfe710) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101aeb250; end: 101aeb283;  */

void FUN_101aeb250(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101aeb284; end: 101aeb2cb; -[SCSCLensCreatorBlocklistServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeb284(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dfe700);
  func_0x000107c61610(param_1 + _DAT_112dfe708);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dfe710));
  return;
}



/* Entry: 101aeb2cc; end: 101aeb2eb;  */

void FUN_101aeb2cc(void)

{
  func_0x000107c61168(&PTR_PTR_112dfe758);
  return;
}



/* Entry: 101aeb2ec; end: 101aeb2f7; -[SCSCLensCreatorProfileScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeb2ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfe7c0;
  func_0x000107c61428(param_1 + _DAT_112dfe7c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101aeb2f8; end: 101aeb303; -[SCSCLensCreatorProfileScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeb2f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfe7c0;
  func_0x000107c61428(param_1 + _DAT_112dfe7c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101aeb304; end: 101aeb30f; -[SCSCLensCreatorProfileScopeServicesSaberServiceProvider activeUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeb304(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfe7c8;
  func_0x000107c61428(param_1 + _DAT_112dfe7c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101aeb310; end: 101aeb353;  */

void FUN_101aeb310(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101aeb354; end: 101aeb35f; -[SCSCLensCreatorProfileScopeServicesSaberServiceProvider setActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeb354(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfe7c8;
  func_0x000107c61428(param_1 + _DAT_112dfe7c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101aeb360; end: 101aeb3b3;  */

void FUN_101aeb360(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101aeb3b4; end: 101aeb5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101aeb3b4(void)

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
    func_0x000107c3d1c8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000101ade46c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112dfd3f0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dfe7d0);
      *(long *)(unaff_x20 + _DAT_112dfe7d0) = lVar4;
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
                      "ActiveUserSessionScopeGraphBridge/SCSCLensCreatorProfileScopeServicesSaberServiceProvider.swift"
                      ,0x5f,2,0x82,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aeb4e0);
  (*pcVar1)();
}



/* Entry: 101aeb5c8; end: 101aeb5fb; -[SCSCLensCreatorProfileScopeServicesSaberServiceProvider provide] */

void FUN_101aeb5c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101aeb3b4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101aeb5fc; end: 101aeb62f; -[SCSCLensCreatorProfileScopeServicesSaberServiceProvider __safeProvide] */

void FUN_101aeb5fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101aeb4e0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101aeb630; end: 101aeb673; -[SCSCLensCreatorProfileScopeServicesSaberServiceProvider end] */

void FUN_101aeb630(undefined8 param_1)

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



/* Entry: 101aeb674; end: 101aeb80b;  */

void FUN_101aeb674(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef10057f0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010effa810,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ActiveUserSessionScopeGraphBridge/SCSCLensCreatorProfileScopeServicesSaberServiceProvider.swift"
                            ,0x5f,2,0x97,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101aeb80c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5222c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101aeb80c; end: 101aeb8b7; -[SCSCLensCreatorProfileScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_101aeb80c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101aeb674(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101aeb8b8; end: 101aeb92b; -[SCSCLensCreatorProfileScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeb8b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dfe7c0,0);
  func_0x000107c61614(param_1 + _DAT_112dfe7c8,0);
  *(undefined8 *)(param_1 + _DAT_112dfe7d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101aeb92c; end: 101aeb95f;  */

void FUN_101aeb92c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101aeb960; end: 101aeb9a7; -[SCSCLensCreatorProfileScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeb960(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dfe7c0);
  func_0x000107c61610(param_1 + _DAT_112dfe7c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dfe7d0));
  return;
}



/* Entry: 101aeb9a8; end: 101aeb9c7;  */

void FUN_101aeb9a8(void)

{
  func_0x000107c61168(&PTR_PTR_112dfe818);
  return;
}



/* Entry: 101aeb9c8; end: 101aeb9d3; -[SCSCLensExplorerDeeplinkPresentationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeb9c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfe880;
  func_0x000107c61428(param_1 + _DAT_112dfe880,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101aeb9d4; end: 101aeb9df; -[SCSCLensExplorerDeeplinkPresentationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeb9d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfe880;
  func_0x000107c61428(param_1 + _DAT_112dfe880,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101aeb9e0; end: 101aeb9eb; -[SCSCLensExplorerDeeplinkPresentationServicesSaberServiceProvider activeUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeb9e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfe888;
  func_0x000107c61428(param_1 + _DAT_112dfe888,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101aeb9ec; end: 101aeba2f;  */

void FUN_101aeb9ec(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101aeba30; end: 101aeba3b; -[SCSCLensExplorerDeeplinkPresentationServicesSaberServiceProvider setActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aeba30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfe888;
  func_0x000107c61428(param_1 + _DAT_112dfe888,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101aeba3c; end: 101aeba8f;  */

void FUN_101aeba3c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101aeba90; end: 101aebca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101aeba90(void)

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
    func_0x000107c3d1c8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000101ade598();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112dfd3f8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dfe890);
      *(long *)(unaff_x20 + _DAT_112dfe890) = lVar4;
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
                      "ActiveUserSessionScopeGraphBridge/SCSCLensExplorerDeeplinkPresentationServicesSaberServiceProvider.swift"
                      ,0x68,2,0x82,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aebbbc);
  (*pcVar1)();
}



/* Entry: 101aebca4; end: 101aebcd7; -[SCSCLensExplorerDeeplinkPresentationServicesSaberServiceProvider provide] */

void FUN_101aebca4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101aeba90();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101aebcd8; end: 101aebd0b; -[SCSCLensExplorerDeeplinkPresentationServicesSaberServiceProvider __safeProvide] */

void FUN_101aebcd8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101aebbbc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101aebd0c; end: 101aebd4f; -[SCSCLensExplorerDeeplinkPresentationServicesSaberServiceProvider end] */

void FUN_101aebd0c(undefined8 param_1)

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



/* Entry: 101aebd50; end: 101aebee7;  */

void FUN_101aebd50(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef10057f0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010effa810,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ActiveUserSessionScopeGraphBridge/SCSCLensExplorerDeeplinkPresentationServicesSaberServiceProvider.swift"
                            ,0x68,2,0x97,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101aebee8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5222c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101aebee8; end: 101aebf93; -[SCSCLensExplorerDeeplinkPresentationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_101aebee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101aebd50(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101aebf94; end: 101aec007; -[SCSCLensExplorerDeeplinkPresentationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aebf94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dfe880,0);
  func_0x000107c61614(param_1 + _DAT_112dfe888,0);
  *(undefined8 *)(param_1 + _DAT_112dfe890) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101aec008; end: 101aec03b;  */

void FUN_101aec008(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101aec03c; end: 101aec083; -[SCSCLensExplorerDeeplinkPresentationServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aec03c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dfe880);
  func_0x000107c61610(param_1 + _DAT_112dfe888);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dfe890));
  return;
}



/* Entry: 101aec084; end: 101aec0a3;  */

void FUN_101aec084(void)

{
  func_0x000107c61168(&PTR_PTR_112dfe8d8);
  return;
}



/* Entry: 101aec0a4; end: 101aec0af; -[SCSCLensHintProvidingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aec0a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfe940;
  func_0x000107c61428(param_1 + _DAT_112dfe940,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101aec0b0; end: 101aec0bb; -[SCSCLensHintProvidingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aec0b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfe940;
  func_0x000107c61428(param_1 + _DAT_112dfe940,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101aec0bc; end: 101aec0c7; -[SCSCLensHintProvidingServicesSaberServiceProvider activeUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aec0bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfe948;
  func_0x000107c61428(param_1 + _DAT_112dfe948,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101aec0c8; end: 101aec10b;  */

void FUN_101aec0c8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101aec10c; end: 101aec117; -[SCSCLensHintProvidingServicesSaberServiceProvider setActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aec10c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfe948;
  func_0x000107c61428(param_1 + _DAT_112dfe948,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101aec118; end: 101aec16b;  */

void FUN_101aec118(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101aec16c; end: 101aec37f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101aec16c(void)

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
    func_0x000107c3d1c8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000101ade6c4();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112dfd400);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dfe950);
      *(long *)(unaff_x20 + _DAT_112dfe950) = lVar4;
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
                      "ActiveUserSessionScopeGraphBridge/SCSCLensHintProvidingServicesSaberServiceProvider.swift"
                      ,0x59,2,0x82,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aec298);
  (*pcVar1)();
}



/* Entry: 101aec380; end: 101aec3b3; -[SCSCLensHintProvidingServicesSaberServiceProvider provide] */

void FUN_101aec380(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101aec16c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


