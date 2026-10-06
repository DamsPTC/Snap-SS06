/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1030dfce4; end: 1030dfef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1030dfce4(void)

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
    func_0x000107c3efe4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001030dcec4();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f3bb50);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f3bd48);
      *(long *)(unaff_x20 + _DAT_112f3bd48) = lVar4;
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
                      "CallUIScopeGraphBridge/SCSCConnectedLensInTalkServicesSaberServiceProvider.swift"
                      ,0x50,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030dfe10);
  (*pcVar1)();
}



/* Entry: 1030dfef8; end: 1030dff2b; -[SCSCConnectedLensInTalkServicesSaberServiceProvider provide] */

void FUN_1030dfef8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1030dfce4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030dff2c; end: 1030dff5f; -[SCSCConnectedLensInTalkServicesSaberServiceProvider __safeProvide] */

void FUN_1030dff2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001030dfe10();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030dff60; end: 1030dffa3; -[SCSCConnectedLensInTalkServicesSaberServiceProvider end] */

void FUN_1030dff60(undefined8 param_1)

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



/* Entry: 1030dffa4; end: 1030e013b;  */

void FUN_1030dffa4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0edeb60)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001e,0x800000010f1214a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CallUIScopeGraphBridge/SCSCConnectedLensInTalkServicesSaberServiceProvider.swift"
                            ,0x50,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030e013c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52f64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1030e013c; end: 1030e01e7; -[SCSCConnectedLensInTalkServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1030e013c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030dffa4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030e01e8; end: 1030e025b; -[SCSCConnectedLensInTalkServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e01e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f3bd38,0);
  func_0x000107c61614(param_1 + _DAT_112f3bd40,0);
  *(undefined8 *)(param_1 + _DAT_112f3bd48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030e025c; end: 1030e028f;  */

void FUN_1030e025c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030e0290; end: 1030e02d7; -[SCSCConnectedLensInTalkServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e0290(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f3bd38);
  func_0x000107c61610(param_1 + _DAT_112f3bd40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f3bd48));
  return;
}



/* Entry: 1030e02d8; end: 1030e02f7;  */

void FUN_1030e02d8(void)

{
  func_0x000107c61168(&PTR_PTR_112f3bd90);
  return;
}



/* Entry: 1030e02f8; end: 1030e0303; -[SCSCLensCallLoggingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e02f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bdf8;
  func_0x000107c61428(param_1 + _DAT_112f3bdf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030e0304; end: 1030e030f; -[SCSCLensCallLoggingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e0304(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bdf8;
  func_0x000107c61428(param_1 + _DAT_112f3bdf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030e0310; end: 1030e031b; -[SCSCLensCallLoggingServicesSaberServiceProvider callUIScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e0310(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3be00;
  func_0x000107c61428(param_1 + _DAT_112f3be00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030e031c; end: 1030e035f;  */

void FUN_1030e031c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1030e0360; end: 1030e036b; -[SCSCLensCallLoggingServicesSaberServiceProvider setCallUIScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e0360(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3be00;
  func_0x000107c61428(param_1 + _DAT_112f3be00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030e036c; end: 1030e03bf;  */

void FUN_1030e036c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030e03c0; end: 1030e05d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1030e03c0(void)

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
    func_0x000107c3efe4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001030dcff0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f3bb58);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f3be08);
      *(long *)(unaff_x20 + _DAT_112f3be08) = lVar4;
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
                      "CallUIScopeGraphBridge/SCSCLensCallLoggingServicesSaberServiceProvider.swift"
                      ,0x4c,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030e04ec);
  (*pcVar1)();
}



/* Entry: 1030e05d4; end: 1030e0607; -[SCSCLensCallLoggingServicesSaberServiceProvider provide] */

void FUN_1030e05d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1030e03c0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030e0608; end: 1030e063b; -[SCSCLensCallLoggingServicesSaberServiceProvider __safeProvide] */

void FUN_1030e0608(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001030e04ec();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030e063c; end: 1030e067f; -[SCSCLensCallLoggingServicesSaberServiceProvider end] */

void FUN_1030e063c(undefined8 param_1)

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



/* Entry: 1030e0680; end: 1030e0817;  */

void FUN_1030e0680(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0edeb60)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001e,0x800000010f1214a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CallUIScopeGraphBridge/SCSCLensCallLoggingServicesSaberServiceProvider.swift"
                            ,0x4c,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030e0818);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52f64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1030e0818; end: 1030e08c3; -[SCSCLensCallLoggingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1030e0818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030e0680(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030e08c4; end: 1030e0937; -[SCSCLensCallLoggingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e08c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f3bdf8,0);
  func_0x000107c61614(param_1 + _DAT_112f3be00,0);
  *(undefined8 *)(param_1 + _DAT_112f3be08) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030e0938; end: 1030e096b;  */

void FUN_1030e0938(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030e096c; end: 1030e09b3; -[SCSCLensCallLoggingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e096c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f3bdf8);
  func_0x000107c61610(param_1 + _DAT_112f3be00);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f3be08));
  return;
}



/* Entry: 1030e09b4; end: 1030e09d3;  */

void FUN_1030e09b4(void)

{
  func_0x000107c61168(&PTR_PTR_112f3be50);
  return;
}



/* Entry: 1030e09d4; end: 1030e09df; -[SCSCLensTalkVideoHandlingScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e09d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3beb8;
  func_0x000107c61428(param_1 + _DAT_112f3beb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030e09e0; end: 1030e09eb; -[SCSCLensTalkVideoHandlingScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e09e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3beb8;
  func_0x000107c61428(param_1 + _DAT_112f3beb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030e09ec; end: 1030e09f7; -[SCSCLensTalkVideoHandlingScopeServicesSaberServiceProvider callUIScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e09ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bec0;
  func_0x000107c61428(param_1 + _DAT_112f3bec0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030e09f8; end: 1030e0a3b;  */

void FUN_1030e09f8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1030e0a3c; end: 1030e0a47; -[SCSCLensTalkVideoHandlingScopeServicesSaberServiceProvider setCallUIScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e0a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bec0;
  func_0x000107c61428(param_1 + _DAT_112f3bec0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030e0a48; end: 1030e0a9b;  */

void FUN_1030e0a48(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030e0a9c; end: 1030e0caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1030e0a9c(void)

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
    func_0x000107c3efe4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001030dd11c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f3bb68);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f3bec8);
      *(long *)(unaff_x20 + _DAT_112f3bec8) = lVar4;
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
                      "CallUIScopeGraphBridge/SCSCLensTalkVideoHandlingScopeServicesSaberServiceProvider.swift"
                      ,0x57,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030e0bc8);
  (*pcVar1)();
}



/* Entry: 1030e0cb0; end: 1030e0ce3; -[SCSCLensTalkVideoHandlingScopeServicesSaberServiceProvider provide] */

void FUN_1030e0cb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1030e0a9c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030e0ce4; end: 1030e0d17; -[SCSCLensTalkVideoHandlingScopeServicesSaberServiceProvider __safeProvide] */

void FUN_1030e0ce4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001030e0bc8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030e0d18; end: 1030e0d5b; -[SCSCLensTalkVideoHandlingScopeServicesSaberServiceProvider end] */

void FUN_1030e0d18(undefined8 param_1)

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



/* Entry: 1030e0d5c; end: 1030e0ef3;  */

void FUN_1030e0d5c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0edeb60)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001e,0x800000010f1214a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CallUIScopeGraphBridge/SCSCLensTalkVideoHandlingScopeServicesSaberServiceProvider.swift"
                            ,0x57,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030e0ef4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52f64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1030e0ef4; end: 1030e0f9f; -[SCSCLensTalkVideoHandlingScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1030e0ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030e0d5c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030e0fa0; end: 1030e1013; -[SCSCLensTalkVideoHandlingScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e0fa0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f3beb8,0);
  func_0x000107c61614(param_1 + _DAT_112f3bec0,0);
  *(undefined8 *)(param_1 + _DAT_112f3bec8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030e1014; end: 1030e1047;  */

void FUN_1030e1014(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030e1048; end: 1030e108f; -[SCSCLensTalkVideoHandlingScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e1048(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f3beb8);
  func_0x000107c61610(param_1 + _DAT_112f3bec0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f3bec8));
  return;
}



/* Entry: 1030e1090; end: 1030e10af;  */

void FUN_1030e1090(void)

{
  func_0x000107c61168(&PTR_PTR_112f3bf10);
  return;
}



/* Entry: 1030e10b0; end: 1030e10bb; -[SCSCTalkLensProcessingResolvingSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e10b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bf78;
  func_0x000107c61428(param_1 + _DAT_112f3bf78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030e10bc; end: 1030e10c7; -[SCSCTalkLensProcessingResolvingSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e10bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bf78;
  func_0x000107c61428(param_1 + _DAT_112f3bf78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030e10c8; end: 1030e10d3; -[SCSCTalkLensProcessingResolvingSaberServiceProvider callUIScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e10c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3bf80;
  func_0x000107c61428(param_1 + _DAT_112f3bf80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030e10d4; end: 1030e1117;  */

void FUN_1030e10d4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1030e1118; end: 1030e1123; -[SCSCTalkLensProcessingResolvingSaberServiceProvider setCallUIScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e1118(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3bf80;
  func_0x000107c61428(param_1 + _DAT_112f3bf80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030e1124; end: 1030e1177;  */

void FUN_1030e1124(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030e1178; end: 1030e138b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1030e1178(void)

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
    func_0x000107c3efe4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001030dd248();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f3bb70);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f3bf88);
      *(long *)(unaff_x20 + _DAT_112f3bf88) = lVar4;
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
                      "CallUIScopeGraphBridge/SCSCTalkLensProcessingResolvingSaberServiceProvider.swift"
                      ,0x50,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030e12a4);
  (*pcVar1)();
}



/* Entry: 1030e138c; end: 1030e13bf; -[SCSCTalkLensProcessingResolvingSaberServiceProvider provide] */

void FUN_1030e138c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1030e1178();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030e13c0; end: 1030e13f3; -[SCSCTalkLensProcessingResolvingSaberServiceProvider __safeProvide] */

void FUN_1030e13c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001030e12a4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030e13f4; end: 1030e1437; -[SCSCTalkLensProcessingResolvingSaberServiceProvider end] */

void FUN_1030e13f4(undefined8 param_1)

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



/* Entry: 1030e1438; end: 1030e15cf;  */

void FUN_1030e1438(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0edeb60)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001e,0x800000010f1214a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CallUIScopeGraphBridge/SCSCTalkLensProcessingResolvingSaberServiceProvider.swift"
                            ,0x50,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030e15d0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52f64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1030e15d0; end: 1030e167b; -[SCSCTalkLensProcessingResolvingSaberServiceProvider setValue:forIvarName:] */

void FUN_1030e15d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030e1438(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030e167c; end: 1030e16ef; -[SCSCTalkLensProcessingResolvingSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e167c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f3bf78,0);
  func_0x000107c61614(param_1 + _DAT_112f3bf80,0);
  *(undefined8 *)(param_1 + _DAT_112f3bf88) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030e16f0; end: 1030e1723;  */

void FUN_1030e16f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030e1724; end: 1030e176b; -[SCSCTalkLensProcessingResolvingSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e1724(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f3bf78);
  func_0x000107c61610(param_1 + _DAT_112f3bf80);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f3bf88));
  return;
}



/* Entry: 1030e176c; end: 1030e178b;  */

void FUN_1030e176c(void)

{
  func_0x000107c61168(&PTR_PTR_112f3bfd0);
  return;
}



/* Entry: 1030e178c; end: 1030e17d3; -[SCCallUIScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e178c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3c038;
  func_0x000107c61428(param_1 + _DAT_112f3c038,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030e17d4; end: 1030e182b; -[SCCallUIScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e17d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3c038;
  func_0x000107c61428(param_1 + _DAT_112f3c038,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030e182c; end: 1030e1903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e182c(undefined8 param_1,long param_2)

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
    FUN_1030dd51c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f3bad8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030e1904);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f3bae0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f3c040);
    *(long **)(unaff_x20 + _DAT_112f3c040) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1030e1904; end: 1030e192b; -[SCCallUIScopedServicesSaberEntryPoint begin] */

void FUN_1030e1904(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030e182c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030e192c; end: 1030e1aa3;  */

/* WARNING: Possible PIC construction at 0x0001030e1994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030e1a2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030e1998) */
/* WARNING: Removing unreachable block (ram,0x0001030e1a30) */
/* WARNING: Removing unreachable block (ram,0x0001030e1a48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e192c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f3c040);
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



/* Entry: 1030e1aa4; end: 1030e1aab;  */

void FUN_1030e1aa4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1030e1aac; end: 1030e1adf; -[SCCallUIScopedServicesSaberEntryPoint end] */

void FUN_1030e1aac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1030e192c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030e1ae0; end: 1030e1bff;  */

void FUN_1030e1ae0(long param_1,long param_2,long param_3)

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
                        "CallUIScopeGraphBridge/SCCallUIScopedServicesSaberEntryPoint.swift",0x42,2,
                        0x35,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030e1c00);
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



/* Entry: 1030e1c00; end: 1030e1cab; -[SCCallUIScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1030e1c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030e1ae0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030e1cac; end: 1030e1d0b; -[SCCallUIScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e1cac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f3c038,0);
  *(undefined8 *)(param_1 + _DAT_112f3c040) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030e1d0c; end: 1030e1d3f;  */

void FUN_1030e1d0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030e1d40; end: 1030e1d77; -[SCCallUIScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e1d40(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f3c038);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3c040));
  return;
}



/* Entry: 1030e1d78; end: 1030e1d97;  */

void FUN_1030e1d78(void)

{
  func_0x000107c61168(&PTR_PTR_1128b6c40);
  return;
}



/* Entry: 1030e1d98; end: 1030e1dcb; -[_TtC19LensCallLoggingImpl31LensCallLoggingInfoProviderImpl screenshotLensMetadata] */

void FUN_1030e1d98(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1030e1dcc();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030e1dcc; end: 1030e231b;  */

void FUN_1030e1dcc(undefined8 param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long unaff_x20;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_a8;
  long lStack_90;
  ulong uStack_88;
  long lStack_78;
  ulong uStack_70;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar2 == 0) {
    return;
  }
  uVar3 = uVar2;
  func_0x000107c40f64();
  func_0x000107c61180();
  if (uVar3 == 0) {
    func_0x000107c615e8(uVar2);
    return;
  }
  uVar4 = uVar3;
  func_0x000107c49a2c();
  if ((uVar4 & 1) != 0) {
LAB_1030e1f2c:
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(uVar3);
    return;
  }
  uVar4 = uVar3;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar19 = uVar4;
  func_0x000107c5faec();
  lVar15 = param_2;
  func_0x000107c61170(uVar4);
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c3dff4();
  func_0x000107c61180();
  if (uVar4 == 0) {
    func_0x000107c6142c(param_2);
    goto LAB_1030e1f2c;
  }
  uVar5 = uVar4;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = uVar5;
  func_0x000107c5faec();
  lVar16 = lVar15;
  func_0x000107c61170(uVar5);
  if ((uVar19 == uVar4) && (param_2 == lVar15)) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar15);
  }
  else {
    lVar16 = param_2;
    func_0x000107c605b8(uVar19,param_2,uVar4,lVar15,0);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar15);
    if ((uVar19 & 1) == 0) goto LAB_1030e1f2c;
  }
  uVar4 = uVar2;
  func_0x000107c4b3f8();
  func_0x000107c61180();
  if (uVar4 == 0) {
    uVar19 = 0;
    lVar21 = 0;
    lVar15 = lVar16;
  }
  else {
    uVar19 = uVar4;
    func_0x000107c5faec();
    lVar15 = lVar16;
    func_0x000107c61170(uVar4);
    lVar21 = lVar16;
  }
  uVar4 = uVar3;
  func_0x000107c4b1dc(uVar3);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5faec();
  lVar16 = lVar15;
  func_0x000107c61170(uVar4);
  puVar6 = PTR_PTR_1126bd498;
  func_0x000107c61168();
  func_0x000107c5d0f0(uVar3);
  func_0x000107c3eab8();
  uVar4 = uVar2;
  func_0x000107c4b414();
  uVar7 = uVar2;
  func_0x000107c40f78();
  func_0x000107c61180();
  if (uVar7 == 0) {
    lStack_78 = 0;
    uStack_70 = 0;
    lVar23 = lVar16;
  }
  else {
    uStack_70 = uVar7;
    func_0x000107c5faec();
    lVar23 = lVar16;
    func_0x000107c61170(uVar7);
    lStack_78 = lVar16;
  }
  uVar7 = uVar2;
  func_0x000107c40f7c();
  uVar8 = uVar3;
  func_0x000107c5c764();
  func_0x000107c61180();
  if (uVar8 == 0) {
    lStack_90 = 0;
    uStack_88 = 0;
    lStack_a8 = lVar23;
  }
  else {
    uStack_88 = uVar8;
    func_0x000107c5faec();
    lStack_a8 = lVar23;
    func_0x000107c61170(uVar8);
    lStack_90 = lVar23;
  }
  uVar8 = uVar2;
  func_0x000107c3e584();
  if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030e2314);
    (*pcVar1)();
  }
  uVar9 = uVar2;
  func_0x000107c43b40();
  if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030e2318);
    (*pcVar1)();
  }
  uVar10 = uVar3;
  func_0x000107c5062c();
  func_0x000107c61180();
  if (uVar10 == 0) {
LAB_1030e20c0:
    uVar17 = 0;
    lVar16 = lStack_a8;
LAB_1030e20c4:
    lStack_a8 = 0;
  }
  else {
    uVar17 = uVar10;
    func_0x000107c40fd8();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    lVar16 = lStack_a8;
    if (uVar17 == 0) goto LAB_1030e20c4;
    uVar10 = uVar17;
    func_0x000107c3ac3c();
    func_0x000107c61180();
    func_0x000107c61170(uVar17);
    if (uVar10 == 0) goto LAB_1030e20c0;
    uVar17 = uVar10;
    func_0x000107c5faec();
    lVar16 = lStack_a8;
    func_0x000107c61170(uVar10);
  }
  uVar10 = uVar2;
  func_0x000107c4b000();
  if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030e231c);
    (*pcVar1)();
  }
  uVar11 = uVar2;
  func_0x000107c40f74();
  uVar12 = uVar3;
  func_0x000107c4d420();
  func_0x000107c61180();
  if (uVar12 == 0) {
    lStack_e8 = 0;
    uStack_e0 = 0;
    lStack_f8 = lVar16;
  }
  else {
    uStack_e0 = uVar12;
    func_0x000107c5faec();
    lStack_f8 = lVar16;
    func_0x000107c61170(uVar12);
    lStack_e8 = lVar16;
  }
  uVar12 = uVar3;
  func_0x000107c5d2d8();
  func_0x000107c61180();
  lStack_108 = lStack_f8;
  if (uVar12 == 0) {
LAB_1030e2164:
    lStack_f8 = 0;
    uStack_f0 = 0;
  }
  else {
    uVar22 = uVar12;
    func_0x000107c4f8bc();
    func_0x000107c61180();
    func_0x000107c61170(uVar12);
    lStack_108 = lStack_f8;
    if (uVar22 == 0) goto LAB_1030e2164;
    uStack_f0 = uVar22;
    func_0x000107c5faec();
    lStack_108 = lStack_f8;
    func_0x000107c61170(uVar22);
  }
  uVar12 = uVar3;
  func_0x000107c5d2d8();
  func_0x000107c61180();
  lVar16 = lStack_108;
  if (uVar12 != 0) {
    uVar22 = uVar12;
    func_0x000107c4f8b8();
    func_0x000107c61180();
    func_0x000107c61170(uVar12);
    lVar16 = lStack_108;
    if (uVar22 != 0) {
      uStack_100 = uVar22;
      func_0x000107c5faec();
      lVar16 = lStack_108;
      func_0x000107c61170(uVar22);
      goto LAB_1030e21bc;
    }
  }
  lStack_108 = 0;
  uStack_100 = 0;
LAB_1030e21bc:
  puVar13 = PTR_PTR_1126c83e0;
  func_0x000107c61168();
  func_0x000107c3d2e0();
  func_0x000107c61180();
  if (puVar13 == (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    lVar18 = 0;
    lVar23 = lVar16;
  }
  else {
    puVar20 = puVar13;
    func_0x000107c5faec();
    lVar23 = lVar16;
    func_0x000107c61170(puVar13);
    lVar18 = lVar16;
  }
  uVar12 = uVar2;
  func_0x000107c4b474();
  func_0x000107c61180();
  if (uVar12 == 0) {
    uVar22 = 0;
    lVar23 = 0;
  }
  else {
    uVar22 = uVar12;
    func_0x000107c5faec();
    func_0x000107c61170(uVar12);
  }
  uVar12 = uVar3;
  func_0x000107c4a4c0();
  uVar14 = 0;
  FUN_1037c3a30(0);
  func_0x000107c610f8();
  func_0x0001037c3024(uVar14,uVar19,lVar21,uVar5,lVar15,puVar6,uVar4,uStack_70,lStack_78,uVar7,
                      uStack_88,lStack_90,uVar8,uVar9,uVar17,lStack_a8,uVar10,uVar11,uStack_e0,
                      lStack_e8,uStack_f0,lStack_f8,uStack_100,lStack_108,puVar20,lVar18,uVar22,
                      lVar23,(char)uVar12);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1030e231c; end: 1030e2367;  */

void FUN_1030e231c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030e2368; end: 1030e249b;  */

void FUN_1030e2368(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f3c118,&UNK_10db88ba0);
  puVar1 = &UNK_11060c180;
  func_0x000107c613fc(&UNK_11060c180,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1030e249c,puVar1);
  return;
}



/* Entry: 1030e249c; end: 1030e24b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e249c(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar4 = ((undefined8 *)(lStack_38 + _DAT_11307b898))[1];
  uVar3 = *(undefined8 *)(lStack_38 + _DAT_11307b898);
  func_0x000107c615f0(uVar3);
  func_0x000107c61170(lStack_38);
  func_0x000100083b20(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c4af30();
  func_0x000107c61180();
  func_0x000107c61170(uStack_40);
  lVar2 = 0;
  func_0x0001030e2348();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = uVar4;
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  *param_1 = lVar2;
  return;
}



/* Entry: 1030e24b4; end: 1030e251f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e24b4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1030e28a8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f3c128) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1030e2520; end: 1030e258b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e2520(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f3c128) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030e258c; end: 1030e25eb; -[_TtC40CallUICameraScopedFactoryServiceProvider26CallUICameraScopedServices init] */

void FUN_1030e258c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallUICameraScopedFactoryServiceProvider.CallUICameraScopedServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030e25b8);
  (*pcVar1)();
}



/* Entry: 1030e25ec; end: 1030e25fb; -[_TtC40CallUICameraScopedFactoryServiceProvider26CallUICameraScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e25ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f3c128));
  return;
}



/* Entry: 1030e25fc; end: 1030e2667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030e25fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11060c380;
  func_0x000107c613fc(&UNK_11060c380,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1030e2940,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1030e2668; end: 1030e2703;  */

void FUN_1030e2668(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11060c290;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11060c290;
  return;
}



/* Entry: 1030e2704; end: 1030e273b;  */

void FUN_1030e2704(long *param_1)

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



/* Entry: 1030e273c; end: 1030e2743;  */

undefined8 FUN_1030e273c(void)

{
  return 0x1b;
}



/* Entry: 1030e2744; end: 1030e2877;  */

void FUN_1030e2744(undefined8 *param_1)

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
  puVar1 = &UNK_11060c3a8;
  func_0x000107c613fc(&UNK_11060c3a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1030e2918;
  func_0x00010058fa64(FUN_1030e2918,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1030e2878; end: 1030e28a7;  */

undefined ** FUN_1030e2878(void)

{
  return &PTR_DAT_113066538;
}



/* Entry: 1030e28a8; end: 1030e28c7;  */

void FUN_1030e28a8(void)

{
  func_0x000107c61168(&PTR_PTR_1128b6d00);
  return;
}



/* Entry: 1030e28c8; end: 1030e2917;  */

undefined1  [16] FUN_1030e28c8(void)

{
  return ZEXT816(0x11060c2e0);
}



/* Entry: 1030e2918; end: 1030e293f;  */

void FUN_1030e2918(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1030e2940; end: 1030e2943;  */

void FUN_1030e2940(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1030e2944; end: 1030e2fb7;  */

void FUN_1030e2944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f3c190,&UNK_10db88de0);
  puVar1 = &UNK_11060c3e8;
  func_0x000107c613fc(&UNK_11060c3e8,0x148,7);
  *(undefined8 *)(puVar1 + 0x10) = param_14;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_35;
  *(undefined8 *)(puVar1 + 0x30) = param_38;
  *(undefined8 *)(puVar1 + 0x38) = param_32;
  *(undefined8 *)(puVar1 + 0x40) = param_1;
  *(undefined8 *)(puVar1 + 0x48) = param_2;
  *(undefined8 *)(puVar1 + 0x50) = param_3;
  *(undefined8 *)(puVar1 + 0x58) = param_6;
  *(undefined8 *)(puVar1 + 0x60) = param_7;
  *(undefined8 *)(puVar1 + 0x68) = param_9;
  *(undefined8 *)(puVar1 + 0x70) = param_10;
  *(undefined8 *)(puVar1 + 0x78) = param_11;
  *(undefined8 *)(puVar1 + 0x80) = param_12;
  *(undefined8 *)(puVar1 + 0x88) = param_13;
  *(undefined8 *)(puVar1 + 0x90) = param_15;
  *(undefined8 *)(puVar1 + 0x98) = param_16;
  *(undefined8 *)(puVar1 + 0xa0) = param_17;
  *(undefined8 *)(puVar1 + 0xa8) = param_18;
  *(undefined8 *)(puVar1 + 0xb0) = param_19;
  *(undefined8 *)(puVar1 + 0xb8) = param_20;
  *(undefined8 *)(puVar1 + 0xc0) = param_21;
  *(undefined8 *)(puVar1 + 200) = param_22;
  *(undefined8 *)(puVar1 + 0xd0) = param_23;
  *(undefined8 *)(puVar1 + 0xd8) = param_24;
  *(undefined8 *)(puVar1 + 0xe0) = param_25;
  *(undefined8 *)(puVar1 + 0xe8) = param_26;
  *(undefined8 *)(puVar1 + 0xf0) = param_27;
  *(undefined8 *)(puVar1 + 0xf8) = param_28;
  *(undefined8 *)(puVar1 + 0x100) = param_29;
  *(undefined8 *)(puVar1 + 0x108) = param_30;
  *(undefined8 *)(puVar1 + 0x110) = param_31;
  *(undefined8 *)(puVar1 + 0x118) = param_33;
  *(undefined8 *)(puVar1 + 0x120) = param_34;
  *(undefined8 *)(puVar1 + 0x128) = param_36;
  *(undefined8 *)(puVar1 + 0x130) = param_37;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_8;
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(FUN_1030e2fb8,puVar1);
  return;
}



/* Entry: 1030e2fb8; end: 1030e3033;  */

void FUN_1030e2fb8(void)

{
  long unaff_x20;
  
  func_0x0001030e2c68(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                      *(undefined8 *)(unaff_x20 + 0x140));
  return;
}



/* Entry: 1030e3034; end: 1030e3043;  */

undefined1  [16] FUN_1030e3034(void)

{
  return ZEXT816(0x11060c410);
}



/* Entry: 1030e3044; end: 1030e375f;  */

void FUN_1030e3044(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 auStack_70 [2];
  
  uVar18 = *param_2;
  func_0x0001000285a8(0x112f3c1a0,&UNK_10db88e28);
  puVar1 = auStack_70;
  auStack_70[0] = uVar18;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001030f4c98();
  pcVar3 = "SCLensTalkCarouselScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCLensTalkCarouselScopeExposerSubjectServiceProvider",0x34,2);
  FUN_1030f4ce4();
  func_0x000100082720("SCViewfinderScopeExposerSubjectServiceProvider",0x2e,2);
  puVar4 = puVar2;
  FUN_1030f4cd8();
  func_0x000100082720("SCLensTalkCarouselScopeExposerObservableServiceProvider",0x37,2);
  pcVar5 = pcVar3;
  FUN_1030f4d70();
  func_0x000100082720("SCViewfinderScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_1030e2704;
  func_0x0001000823a8(FUN_1030e2704,0);
  func_0x000100082720("CallUICameraScopedServicesCleanupRelayServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f3c1a8,&UNK_10db88e50);
  puVar7 = &UNK_11060c458;
  func_0x000107c613fc(&UNK_11060c458,0x50,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = param_3;
  *(undefined8 *)(puVar7 + 0x20) = param_4;
  *(undefined8 *)(puVar7 + 0x28) = param_5;
  *(undefined8 *)(puVar7 + 0x30) = param_6;
  *(undefined8 *)(puVar7 + 0x38) = param_7;
  *(undefined8 *)(puVar7 + 0x40) = param_8;
  *(char **)(puVar7 + 0x48) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(pcVar5);
  pcVar8 = FUN_1030e3958;
  func_0x0001000823a8(FUN_1030e3958,puVar7);
  func_0x000100082720("CallUICameraEntryPointWrapperServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112f3c1b0,&UNK_10db88e30);
  func_0x000107c6157c(pcVar8);
  uVar18 = 0x1030e396c;
  func_0x0001000823a8(0x1030e396c,pcVar8);
  func_0x000100082720("CallUICameraViewfinderServiceServiceProvider",0x2c,2);
  uVar9 = uVar18;
  FUN_103153f90();
  func_0x000100082720("CallUICameraScopedLensProcessingCarouselServiceProvider",0x37,2);
  uVar10 = uVar18;
  FUN_103153e14();
  func_0x000100082720("CallUICameraScopedLensProcessingServiceProvider",0x2f,2);
  uVar11 = uVar18;
  FUN_1030f498c(uVar18,uVar9,uVar10,puVar2,pcVar3);
  func_0x000100082720("CallUICameraScopeGraphBridgeServicesServiceProvider",0x33,2);
  uVar12 = uVar18;
  FUN_103153c94();
  func_0x000100082720("CallUICameraScopedViewfinderUIServiceProvider",0x2d,2);
  FUN_1030f7964(param_9,param_10,param_11,uVar12,param_12,param_13,param_14,param_15,param_16,
                param_17,param_18,uVar9,param_19,param_20,param_21,param_22,param_23,param_24,
                param_25,param_26,param_27,param_28,param_29,param_30,param_31,param_32,param_33,
                param_34,param_35,param_8,param_36,param_37,param_38,param_39,param_40);
  func_0x000100082720("SCLensTalkCarouselScopedFactoryServiceProvider",0x2e,2);
  uVar13 = param_9;
  FUN_10386ffe0();
  func_0x000100082720("SCLensTalkCarouselScopeServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112f3c1b8,&UNK_10db88fe0);
  puVar7 = &UNK_11060c480;
  func_0x000107c613fc(&UNK_11060c480,0x40,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar13;
  *(undefined8 *)(puVar7 + 0x20) = param_41;
  *(undefined8 *)(puVar7 + 0x28) = param_3;
  *(undefined8 *)(puVar7 + 0x30) = param_22;
  *(undefined8 **)(puVar7 + 0x38) = puVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(puVar4);
  uVar14 = 0x1030e3974;
  func_0x0001000823a8(0x1030e3974,puVar7);
  func_0x000100082720("LensTalkCarouselScopeEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f3c1c0,&UNK_10db88e40);
  puVar7 = &UNK_11060c4a8;
  func_0x000107c613fc(&UNK_11060c4a8,0x38,7);
  *(code **)(puVar7 + 0x10) = pcVar8;
  *(undefined8 **)(puVar7 + 0x18) = puVar1;
  *(undefined8 *)(puVar7 + 0x20) = uVar11;
  *(code **)(puVar7 + 0x28) = pcVar6;
  *(undefined8 *)(puVar7 + 0x30) = uVar14;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(uVar14);
  uVar15 = 0x1030e3984;
  func_0x0001000823a8(0x1030e3984,puVar7);
  func_0x000100082720("CallUICameraScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f3c130,&UNK_10db88bf0);
  func_0x000107c6157c(uVar15);
  uVar16 = 0x1030e3994;
  func_0x0001000823a8(0x1030e3994,uVar15);
  func_0x000100082720("CallUICameraScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112f3c120,&UNK_10db88be0);
  func_0x000107c6157c(uVar16);
  uVar17 = 0x1030e399c;
  func_0x0001000823a8(0x1030e399c,uVar16);
  func_0x000100082720("CallUICameraScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar7 = &UNK_11060c4d0;
  func_0x000107c613fc(&UNK_11060c4d0,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar17;
  *(code **)(puVar7 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar17 = 0x1030e39a4;
  func_0x0001000823a8(0x1030e39a4,puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(param_9);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar16);
  func_0x000100082720("CallUICameraScopeEntryPointProvider",0x23,2);
  *param_1 = uVar17;
  return;
}



/* Entry: 1030e3760; end: 1030e38b3;  */

void FUN_1030e3760(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1030e38b4; end: 1030e3957;  */

void FUN_1030e38b4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1030e3044(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x140));
  return;
}



/* Entry: 1030e3958; end: 1030e39ab;  */

void FUN_1030e3958(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000100083b20(&uStack_68,lVar4,*(undefined8 *)(unaff_x20 + 0x18),uVar1,uVar2,
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  FUN_1030e4018();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x28) = uStack_70;
  *(undefined8 *)(lVar4 + 0x30) = uVar1;
  *(undefined8 *)(lVar4 + 0x38) = uVar2;
  *(undefined8 *)(lVar4 + 0x40) = uStack_78;
  *(undefined8 *)(lVar4 + 0x48) = uStack_80;
  *(undefined8 *)(lVar4 + 0x50) = uStack_88;
  func_0x0001000285a8(0x112dbeec0,&UNK_10db88e60);
  func_0x000107c610f8();
  uVar5 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  uVar6 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar7 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar8 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar9 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(lVar4 + 0x18) = puVar10;
  puVar11 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + 0x20) = puVar11;
  FUN_1030e9894();
  func_0x000107c613fc();
  func_0x000107c61174(uVar5);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = uVar9;
  func_0x0001030e953c(uVar9,uVar5,uVar1,uVar2,uVar6,uVar7,uVar8,puVar11,puVar10);
  *(undefined8 *)(lVar4 + 0x10) = uVar12;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar11 != (undefined *)0x0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61574(uStack_90);
    *(undefined **)(lVar4 + 0x58) = puVar11;
    *param_1 = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1030e3c44);
  (*pcVar3)();
}



/* Entry: 1030e39ac; end: 1030e3e83;  */

void FUN_1030e39ac(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
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
  FUN_1030e4018();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = param_4;
  *(undefined8 *)(param_2 + 0x38) = param_5;
  *(undefined8 *)(param_2 + 0x40) = uStack_78;
  *(undefined8 *)(param_2 + 0x48) = uStack_80;
  *(undefined8 *)(param_2 + 0x50) = uStack_88;
  func_0x0001000285a8(0x112dbeec0,&UNK_10db88e60);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar6);
  *(undefined **)(param_2 + 0x18) = puVar7;
  puVar8 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar8;
  FUN_1030e9894();
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = uVar6;
  func_0x0001030e953c(uVar6,uVar2,param_4,param_5,uVar3,uVar4,uVar5,puVar8,puVar7);
  *(undefined8 *)(param_2 + 0x10) = uVar9;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61574(uStack_90);
    *(undefined **)(param_2 + 0x58) = puVar8;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030e3c44);
  (*pcVar1)();
}



/* Entry: 1030e3e84; end: 1030e3f07;  */

void FUN_1030e3e84(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1030e3f08; end: 1030e3f5b;  */

void FUN_1030e3f08(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}


