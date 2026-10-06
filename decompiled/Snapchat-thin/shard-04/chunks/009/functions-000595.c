/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1039b5850; end: 1039b59e7;  */

void FUN_1039b5850(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e7c9f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f183610,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ContextActiveUserSessionScopeGraphBridge/SCSCContextCardsServicesSaberServiceProvider.swift"
                            ,0x5b,2,0x37,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b59e8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c538d0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039b59e8; end: 1039b5a93; -[SCSCContextCardsServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039b59e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039b5850(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039b5a94; end: 1039b5b07; -[SCSCContextCardsServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b5a94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc1d60,0);
  func_0x000107c61614(param_1 + _DAT_112fc1d68,0);
  *(undefined8 *)(param_1 + _DAT_112fc1d70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039b5b08; end: 1039b5b3b;  */

void FUN_1039b5b08(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039b5b3c; end: 1039b5b83; -[SCSCContextCardsServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b5b3c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc1d60);
  func_0x000107c61610(param_1 + _DAT_112fc1d68);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc1d70));
  return;
}



/* Entry: 1039b5b84; end: 1039b5ba3;  */

void FUN_1039b5b84(void)

{
  func_0x000107c61168(&PTR_PTR_112fc1db8);
  return;
}



/* Entry: 1039b5ba4; end: 1039b5baf; -[SCSCContextIconServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b5ba4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc1e20;
  func_0x000107c61428(param_1 + _DAT_112fc1e20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039b5bb0; end: 1039b5bbb; -[SCSCContextIconServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b5bb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc1e20;
  func_0x000107c61428(param_1 + _DAT_112fc1e20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b5bbc; end: 1039b5bc7; -[SCSCContextIconServicesSaberServiceProvider contextActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b5bbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc1e28;
  func_0x000107c61428(param_1 + _DAT_112fc1e28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039b5bc8; end: 1039b5c0b;  */

void FUN_1039b5bc8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039b5c0c; end: 1039b5c17; -[SCSCContextIconServicesSaberServiceProvider setContextActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b5c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc1e28;
  func_0x000107c61428(param_1 + _DAT_112fc1e28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b5c18; end: 1039b5c6b;  */

void FUN_1039b5c18(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b5c6c; end: 1039b5e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039b5c6c(void)

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
    func_0x000107c40548();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039b45f8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fc1b58);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc1e30);
      *(long *)(unaff_x20 + _DAT_112fc1e30) = lVar4;
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
                      "ContextActiveUserSessionScopeGraphBridge/SCSCContextIconServicesSaberServiceProvider.swift"
                      ,0x5a,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b5d98);
  (*pcVar1)();
}



/* Entry: 1039b5e80; end: 1039b5eb3; -[SCSCContextIconServicesSaberServiceProvider provide] */

void FUN_1039b5e80(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039b5c6c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039b5eb4; end: 1039b5ee7; -[SCSCContextIconServicesSaberServiceProvider __safeProvide] */

void FUN_1039b5eb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039b5d98();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039b5ee8; end: 1039b5f2b; -[SCSCContextIconServicesSaberServiceProvider end] */

void FUN_1039b5ee8(undefined8 param_1)

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



/* Entry: 1039b5f2c; end: 1039b60c3;  */

void FUN_1039b5f2c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e7c9f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f183610,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ContextActiveUserSessionScopeGraphBridge/SCSCContextIconServicesSaberServiceProvider.swift"
                            ,0x5a,2,0x37,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b60c4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c538d0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039b60c4; end: 1039b616f; -[SCSCContextIconServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039b60c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039b5f2c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039b6170; end: 1039b61e3; -[SCSCContextIconServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b6170(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc1e20,0);
  func_0x000107c61614(param_1 + _DAT_112fc1e28,0);
  *(undefined8 *)(param_1 + _DAT_112fc1e30) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039b61e4; end: 1039b6217;  */

void FUN_1039b61e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039b6218; end: 1039b625f; -[SCSCContextIconServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b6218(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc1e20);
  func_0x000107c61610(param_1 + _DAT_112fc1e28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc1e30));
  return;
}



/* Entry: 1039b6260; end: 1039b627f;  */

void FUN_1039b6260(void)

{
  func_0x000107c61168(&PTR_PTR_112fc1e78);
  return;
}



/* Entry: 1039b6280; end: 1039b628b; -[SCSCContextLoggingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b6280(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc1ee0;
  func_0x000107c61428(param_1 + _DAT_112fc1ee0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039b628c; end: 1039b6297; -[SCSCContextLoggingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b628c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc1ee0;
  func_0x000107c61428(param_1 + _DAT_112fc1ee0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b6298; end: 1039b62a3; -[SCSCContextLoggingServicesSaberServiceProvider contextActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b6298(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc1ee8;
  func_0x000107c61428(param_1 + _DAT_112fc1ee8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039b62a4; end: 1039b62e7;  */

void FUN_1039b62a4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039b62e8; end: 1039b62f3; -[SCSCContextLoggingServicesSaberServiceProvider setContextActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b62e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc1ee8;
  func_0x000107c61428(param_1 + _DAT_112fc1ee8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b62f4; end: 1039b6347;  */

void FUN_1039b62f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b6348; end: 1039b655b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039b6348(void)

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
    func_0x000107c40548();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039b4724();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fc1b60);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc1ef0);
      *(long *)(unaff_x20 + _DAT_112fc1ef0) = lVar4;
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
                      "ContextActiveUserSessionScopeGraphBridge/SCSCContextLoggingServicesSaberServiceProvider.swift"
                      ,0x5d,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b6474);
  (*pcVar1)();
}



/* Entry: 1039b655c; end: 1039b658f; -[SCSCContextLoggingServicesSaberServiceProvider provide] */

void FUN_1039b655c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039b6348();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039b6590; end: 1039b65c3; -[SCSCContextLoggingServicesSaberServiceProvider __safeProvide] */

void FUN_1039b6590(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039b6474();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039b65c4; end: 1039b6607; -[SCSCContextLoggingServicesSaberServiceProvider end] */

void FUN_1039b65c4(undefined8 param_1)

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



/* Entry: 1039b6608; end: 1039b679f;  */

void FUN_1039b6608(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e7c9f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f183610,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ContextActiveUserSessionScopeGraphBridge/SCSCContextLoggingServicesSaberServiceProvider.swift"
                            ,0x5d,2,0x37,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b67a0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c538d0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039b67a0; end: 1039b684b; -[SCSCContextLoggingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039b67a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039b6608(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039b684c; end: 1039b68bf; -[SCSCContextLoggingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b684c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc1ee0,0);
  func_0x000107c61614(param_1 + _DAT_112fc1ee8,0);
  *(undefined8 *)(param_1 + _DAT_112fc1ef0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039b68c0; end: 1039b68f3;  */

void FUN_1039b68c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039b68f4; end: 1039b693b; -[SCSCContextLoggingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b68f4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc1ee0);
  func_0x000107c61610(param_1 + _DAT_112fc1ee8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc1ef0));
  return;
}



/* Entry: 1039b693c; end: 1039b695b;  */

void FUN_1039b693c(void)

{
  func_0x000107c61168(&PTR_PTR_112fc1f38);
  return;
}



/* Entry: 1039b695c; end: 1039b6967; -[SCSCContextOperaUCCExperimentsServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b695c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc1fa0;
  func_0x000107c61428(param_1 + _DAT_112fc1fa0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039b6968; end: 1039b6973; -[SCSCContextOperaUCCExperimentsServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b6968(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc1fa0;
  func_0x000107c61428(param_1 + _DAT_112fc1fa0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b6974; end: 1039b697f; -[SCSCContextOperaUCCExperimentsServicesSaberServiceProvider contextActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b6974(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc1fa8;
  func_0x000107c61428(param_1 + _DAT_112fc1fa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039b6980; end: 1039b69c3;  */

void FUN_1039b6980(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039b69c4; end: 1039b69cf; -[SCSCContextOperaUCCExperimentsServicesSaberServiceProvider setContextActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b69c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc1fa8;
  func_0x000107c61428(param_1 + _DAT_112fc1fa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b69d0; end: 1039b6a23;  */

void FUN_1039b69d0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b6a24; end: 1039b6c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039b6a24(void)

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
    func_0x000107c40548();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039b4850();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fc1b70);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc1fb0);
      *(long *)(unaff_x20 + _DAT_112fc1fb0) = lVar4;
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
                      "ContextActiveUserSessionScopeGraphBridge/SCSCContextOperaUCCExperimentsServicesSaberServiceProvider.swift"
                      ,0x69,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b6b50);
  (*pcVar1)();
}



/* Entry: 1039b6c38; end: 1039b6c6b; -[SCSCContextOperaUCCExperimentsServicesSaberServiceProvider provide] */

void FUN_1039b6c38(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039b6a24();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039b6c6c; end: 1039b6c9f; -[SCSCContextOperaUCCExperimentsServicesSaberServiceProvider __safeProvide] */

void FUN_1039b6c6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039b6b50();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039b6ca0; end: 1039b6ce3; -[SCSCContextOperaUCCExperimentsServicesSaberServiceProvider end] */

void FUN_1039b6ca0(undefined8 param_1)

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



/* Entry: 1039b6ce4; end: 1039b6e7b;  */

void FUN_1039b6ce4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e7c9f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f183610,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ContextActiveUserSessionScopeGraphBridge/SCSCContextOperaUCCExperimentsServicesSaberServiceProvider.swift"
                            ,0x69,2,0x37,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b6e7c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c538d0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039b6e7c; end: 1039b6f27; -[SCSCContextOperaUCCExperimentsServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039b6e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039b6ce4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039b6f28; end: 1039b6f9b; -[SCSCContextOperaUCCExperimentsServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b6f28(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc1fa0,0);
  func_0x000107c61614(param_1 + _DAT_112fc1fa8,0);
  *(undefined8 *)(param_1 + _DAT_112fc1fb0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039b6f9c; end: 1039b6fcf;  */

void FUN_1039b6f9c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039b6fd0; end: 1039b7017; -[SCSCContextOperaUCCExperimentsServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b6fd0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc1fa0);
  func_0x000107c61610(param_1 + _DAT_112fc1fa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc1fb0));
  return;
}



/* Entry: 1039b7018; end: 1039b7037;  */

void FUN_1039b7018(void)

{
  func_0x000107c61168(&PTR_PTR_112fc1ff8);
  return;
}



/* Entry: 1039b7038; end: 1039b7077; -[AIFTopLevelCardsHelperServices experimentsServiceObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b7038(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001003a5b88();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039b7078; end: 1039b70db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b7078(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc2060) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fc2068) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039b70dc; end: 1039b713b; -[AIFTopLevelCardsHelperServices init] */

void FUN_1039b70dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AIFTopLevelCardsHelperServices.AIFTopLevelCardsHelperServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b7108);
  (*pcVar1)();
}



/* Entry: 1039b713c; end: 1039b7173; -[AIFTopLevelCardsHelperServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039b7158: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039b715c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b713c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc2060));
  return;
}



/* Entry: 1039b7174; end: 1039b7187;  */

bool FUN_1039b7174(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1039b7188; end: 1039b7233;  */

void FUN_1039b7188(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1039b7234; end: 1039b7237;  */

void FUN_1039b7234(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc2098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc31cd0;
  func_0x000107c61520(&UNK_10dc31cd0,&UNK_1106b86e0);
  puRam0000000112fc2098 = puVar1;
  return;
}



/* Entry: 1039b7238; end: 1039b7277;  */

void FUN_1039b7238(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc2098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc31cd0;
  func_0x000107c61520(&UNK_10dc31cd0,&UNK_1106b86e0);
  puRam0000000112fc2098 = puVar1;
  return;
}



/* Entry: 1039b7278; end: 1039b73db;  */

int FUN_1039b7278(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1039b72f4;
        goto LAB_1039b72d8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1039b72d8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1039b72f4:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1039b73dc; end: 1039b7553;  */

/* WARNING: Possible PIC construction at 0x0001039b7478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039b74a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039b747c) */
/* WARNING: Removing unreachable block (ram,0x0001039b74a8) */

void FUN_1039b73dc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = unaff_x20[1];
  if (lVar6 == 0) {
    func_0x000107c60690(0);
    return;
  }
  uVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  lVar3 = unaff_x20[4];
  lVar4 = unaff_x20[5];
  lVar5 = unaff_x20[6];
  uVar7 = *unaff_x20;
  func_0x000107c60690(1);
  func_0x000107c5fb58(param_1,uVar7,lVar6);
  if (lVar2 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(param_1,uVar1,lVar2);
  }
  if (lVar3 == 0) {
    func_0x000107c60694(0);
    if (lVar4 == 0) {
      func_0x000107c60694(0);
      if (lVar5 == 0) {
        func_0x000107c60694(0);
        return;
      }
      func_0x000107c60694(1);
      func_0x000107c61174(lVar5);
      func_0x000107c6011c(param_1);
    }
    else {
      func_0x000107c60694(1);
      func_0x000107c61174(lVar4);
      func_0x000107c6011c(param_1);
      lVar5 = lVar4;
    }
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c61174(lVar3);
    func_0x000107c6011c(param_1);
    lVar5 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1039b7554; end: 1039b758f;  */

void FUN_1039b7554(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  FUN_1039b73dc(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 1039b7590; end: 1039b7593;  */

/* WARNING: Possible PIC construction at 0x0001039b7478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039b74a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039b747c) */
/* WARNING: Removing unreachable block (ram,0x0001039b74a8) */

void FUN_1039b7590(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = unaff_x20[1];
  if (lVar6 == 0) {
    func_0x000107c60690(0);
    return;
  }
  uVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  lVar3 = unaff_x20[4];
  lVar4 = unaff_x20[5];
  lVar5 = unaff_x20[6];
  uVar7 = *unaff_x20;
  func_0x000107c60690(1);
  func_0x000107c5fb58(param_1,uVar7,lVar6);
  if (lVar2 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(param_1,uVar1,lVar2);
  }
  if (lVar3 == 0) {
    func_0x000107c60694(0);
    if (lVar4 == 0) {
      func_0x000107c60694(0);
      if (lVar5 == 0) {
        func_0x000107c60694(0);
        return;
      }
      func_0x000107c60694(1);
      func_0x000107c61174(lVar5);
      func_0x000107c6011c(param_1);
    }
    else {
      func_0x000107c60694(1);
      func_0x000107c61174(lVar4);
      func_0x000107c6011c(param_1);
      lVar5 = lVar4;
    }
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c61174(lVar3);
    func_0x000107c6011c(param_1);
    lVar5 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1039b7594; end: 1039b75cb;  */

void FUN_1039b7594(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_1039b73dc(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 1039b75cc; end: 1039b7623;  */

uint FUN_1039b75cc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_1039b7624(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1039b7624; end: 1039b780b;  */

bool FUN_1039b7624(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_1[1] == 0) {
    return param_2[1] == 0;
  }
  if (param_2[1] == 0) {
    return false;
  }
  uVar4 = *param_1;
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar7 = param_1[4];
  uVar9 = param_1[5];
  uVar10 = param_1[6];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  uVar6 = param_2[4];
  uVar8 = param_2[5];
  uVar11 = param_2[6];
  if (((uVar4 != *param_2) || (param_1[1] != param_2[1])) &&
     (func_0x000107c605b8(), (uVar4 & 1) == 0)) {
    return false;
  }
  if (uVar2 == 0) {
    if (uVar3 != 0) {
      return false;
    }
  }
  else {
    if (uVar3 == 0) {
      return false;
    }
    if (((uVar5 != uVar1) || (uVar2 != uVar3)) &&
       (func_0x000107c605b8(uVar5,uVar2,uVar1,uVar3,0), (uVar5 & 1) == 0)) {
      return false;
    }
  }
  if (uVar7 == 0) {
    if (uVar6 != 0) {
      return false;
    }
  }
  else {
    if (uVar6 == 0) {
      return false;
    }
    func_0x0001044254f0(0);
    func_0x000107c61174(uVar6);
    func_0x000107c61174();
    uVar5 = uVar7;
    func_0x000107c60118();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    if ((uVar5 & 1) == 0) {
      return false;
    }
  }
  if (uVar9 == 0) {
    if (uVar8 != 0) {
      return false;
    }
  }
  else {
    if (uVar8 == 0) {
      return false;
    }
    func_0x0001044254f0(0);
    func_0x000107c61174(uVar8);
    func_0x000107c61174();
    uVar5 = uVar9;
    func_0x000107c60118();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    if ((uVar5 & 1) == 0) {
      return false;
    }
  }
  if (uVar10 == 0) {
    if (uVar11 == 0) {
      return true;
    }
  }
  else if (uVar11 != 0) {
    func_0x000101cbf458(0);
    func_0x000107c61174(uVar11);
    func_0x000107c61174();
    uVar5 = uVar10;
    func_0x000107c60118();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    if ((uVar5 & 1) != 0) {
      return true;
    }
  }
  return false;
}



/* Entry: 1039b780c; end: 1039b780f;  */

void FUN_1039b780c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4e7d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc31dd0;
  func_0x000107c61520(&UNK_10dc31dd0,&UNK_1106b8828);
  puRam0000000112f4e7d8 = puVar1;
  return;
}



/* Entry: 1039b7810; end: 1039b7893;  */

long FUN_1039b7810(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1039b7894; end: 1039b7abf;  */

undefined8 * FUN_1039b7894(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar4 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar4;
    uVar3 = param_2[4];
    uVar5 = param_2[5];
    param_1[4] = uVar3;
    param_1[5] = uVar5;
    uVar2 = param_2[6];
    param_1[6] = uVar2;
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar4);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar2);
    return param_1;
  }
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 1039b7ac0; end: 1039b7baf;  */

undefined8 * FUN_1039b7ac0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1[1];
  if (uVar2 < 0xffffffff) {
    uVar1 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    uVar1 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
    param_1[6] = param_2[6];
  }
  else {
    uVar3 = param_2[1];
    if (uVar3 < 0xffffffff) {
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(param_1[3]);
      func_0x000107c61170(param_1[4]);
      func_0x000107c61170(param_1[5]);
      func_0x000107c61170(param_1[6]);
      uVar1 = *param_2;
      uVar5 = param_2[3];
      uVar4 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar1;
      param_1[3] = uVar5;
      param_1[2] = uVar4;
      uVar1 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar1;
      param_1[6] = param_2[6];
    }
    else {
      *param_1 = *param_2;
      param_1[1] = uVar3;
      func_0x000107c6142c(uVar2);
      param_1[2] = param_2[2];
      func_0x000107c6142c(param_1[3]);
      uVar1 = param_1[4];
      uVar4 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar4;
      func_0x000107c61170(uVar1);
      func_0x000107c61170(param_1[5]);
      uVar1 = param_1[6];
      uVar4 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar4;
      func_0x000107c61170(uVar1);
    }
  }
  return param_1;
}



/* Entry: 1039b7bb0; end: 1039b7ccf;  */

int FUN_1039b7bb0(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 1039b7cd0; end: 1039b7d7b;  */

void FUN_1039b7cd0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1039b7d7c; end: 1039b7da3;  */

void FUN_1039b7d7c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 1039b7da4; end: 1039b7f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1039b7da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_88 [8];
  
  func_0x000107c610f8();
  lVar1 = unaff_x20 + _DAT_112fc20a0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  func_0x000107c61428();
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112fc20a8) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112fc20b0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fc20b8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fc20c0) = param_6;
  puVar2 = auStack_88;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 1039b7f8c; end: 1039b7feb; -[SCContextTopLevelCardsScope init] */

void FUN_1039b7f8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextTopLevelCardsScope.SCContextTopLevelCardsScope",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b7fb8);
  (*pcVar1)();
}



/* Entry: 1039b7fec; end: 1039b8057; -[SCContextTopLevelCardsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b7fec(long param_1)

{
  func_0x0001039b8034(param_1 + _DAT_112fc20a0);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fc20a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc20c0));
  return;
}



/* Entry: 1039b8058; end: 1039b805b;  */

void FUN_1039b8058(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc20c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc31e30;
  func_0x000107c61520(&UNK_10dc31e30,&UNK_1106b8880);
  puRam0000000112fc20c8 = puVar1;
  return;
}



/* Entry: 1039b805c; end: 1039b809b;  */

void FUN_1039b805c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc20c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc31e30;
  func_0x000107c61520(&UNK_10dc31e30,&UNK_1106b8880);
  puRam0000000112fc20c8 = puVar1;
  return;
}



/* Entry: 1039b809c; end: 1039b80ab;  */

undefined1  [16] FUN_1039b809c(void)

{
  return ZEXT816(0x1106b8880);
}



/* Entry: 1039b80ac; end: 1039b80cb;  */

void FUN_1039b80ac(void)

{
  func_0x000107c61168(&PTR_PTR_11290f168);
  return;
}



/* Entry: 1039b80cc; end: 1039b80df;  */

bool FUN_1039b80cc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1039b80e0; end: 1039b81b7;  */

void FUN_1039b80e0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1039b81b8; end: 1039b81d7;  */

void FUN_1039b81b8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1039b81d8; end: 1039b8217;  */

void FUN_1039b81d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc20f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc31f40;
  func_0x000107c61520(&UNK_10dc31f40,&UNK_1106b8978);
  puRam0000000112fc20f8 = puVar1;
  return;
}



/* Entry: 1039b8218; end: 1039b8227;  */

undefined1  [16] FUN_1039b8218(void)

{
  return ZEXT816(0x1106b8978);
}



/* Entry: 1039b8228; end: 1039b8237; -[SCContextNotificationsServices notificationManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b8228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fc2100));
  return;
}



/* Entry: 1039b8238; end: 1039b8283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b8238(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc2100) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039b8284; end: 1039b82db; -[SCContextNotificationsServices initWithNotificationManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b8284(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fc2100) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1039b82dc; end: 1039b833b; -[SCContextNotificationsServices init] */

void FUN_1039b82dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextNotificationsServices.SCContextNotificationsServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b8308);
  (*pcVar1)();
}



/* Entry: 1039b833c; end: 1039b834b; -[SCContextNotificationsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b833c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc2100));
  return;
}



/* Entry: 1039b834c; end: 1039b83e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b834c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc2130) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039b83e4; end: 1039b8443; -[_TtC21SCContextIconServices21SCContextIconServices init] */

void FUN_1039b83e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextIconServices.SCContextIconServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b8410);
  (*pcVar1)();
}



/* Entry: 1039b8444; end: 1039b8453; -[_TtC21SCContextIconServices21SCContextIconServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b8444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc2130));
  return;
}



/* Entry: 1039b8454; end: 1039b84db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039b8454(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100a9f2a0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fc2160) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fc2168) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b84dc);
  (*pcVar1)();
}



/* Entry: 1039b84dc; end: 1039b853b; -[_TtC38ConvoActiveUserSessionScopeGraphBridge53ConvoActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_1039b84dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ConvoActiveUserSessionScopeGraphBridge.ConvoActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b8508);
  (*pcVar1)();
}



/* Entry: 1039b853c; end: 1039b8573; -[_TtC38ConvoActiveUserSessionScopeGraphBridge53ConvoActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039b8558: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039b855c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b853c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc2160));
  return;
}



/* Entry: 1039b8574; end: 1039b859b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b8574(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fc2168),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fc2160));
  return;
}


