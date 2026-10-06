/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a8a5a4; end: 103a8a5af; -[SCSCPostCapturePlusLensRemoteApiHandlerBridgeSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8a5a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdd3a0;
  func_0x000107c61428(param_1 + _DAT_112fdd3a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a8a5b0; end: 103a8a5bb; -[SCSCPostCapturePlusLensRemoteApiHandlerBridgeSaberServiceProvider plusActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8a5b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdd3a8;
  func_0x000107c61428(param_1 + _DAT_112fdd3a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a8a5bc; end: 103a8a5ff;  */

void FUN_103a8a5bc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a8a600; end: 103a8a60b; -[SCSCPostCapturePlusLensRemoteApiHandlerBridgeSaberServiceProvider setPlusActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8a600(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdd3a8;
  func_0x000107c61428(param_1 + _DAT_112fdd3a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a8a60c; end: 103a8a65f;  */

void FUN_103a8a60c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a8a660; end: 103a8a873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a8a660(void)

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
    func_0x000107c4ea20();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a89250();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fdd130);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fdd3b0);
      *(long *)(unaff_x20 + _DAT_112fdd3b0) = lVar4;
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
                      "PlusActiveUserSessionScopeGraphBridge/SCSCPostCapturePlusLensRemoteApiHandlerBridgeSaberServiceProvider.swift"
                      ,0x6d,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a8a78c);
  (*pcVar1)();
}



/* Entry: 103a8a874; end: 103a8a8a7; -[SCSCPostCapturePlusLensRemoteApiHandlerBridgeSaberServiceProvider provide] */

void FUN_103a8a874(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a8a660();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a8a8a8; end: 103a8a8db; -[SCSCPostCapturePlusLensRemoteApiHandlerBridgeSaberServiceProvider __safeProvide] */

void FUN_103a8a8a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a8a78c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a8a8dc; end: 103a8a91f; -[SCSCPostCapturePlusLensRemoteApiHandlerBridgeSaberServiceProvider end] */

void FUN_103a8a8dc(undefined8 param_1)

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



/* Entry: 103a8a920; end: 103a8aab7;  */

void FUN_103a8a920(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e6c440)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f193bc0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PlusActiveUserSessionScopeGraphBridge/SCSCPostCapturePlusLensRemoteApiHandlerBridgeSaberServiceProvider.swift"
                            ,0x6d,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a8aab8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57548();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a8aab8; end: 103a8ab63; -[SCSCPostCapturePlusLensRemoteApiHandlerBridgeSaberServiceProvider setValue:forIvarName:] */

void FUN_103a8aab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103a8a920(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a8ab64; end: 103a8abd7; -[SCSCPostCapturePlusLensRemoteApiHandlerBridgeSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8ab64(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdd3a0,0);
  func_0x000107c61614(param_1 + _DAT_112fdd3a8,0);
  *(undefined8 *)(param_1 + _DAT_112fdd3b0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a8abd8; end: 103a8ac0b;  */

void FUN_103a8abd8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a8ac0c; end: 103a8ac53; -[SCSCPostCapturePlusLensRemoteApiHandlerBridgeSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8ac0c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdd3a0);
  func_0x000107c61610(param_1 + _DAT_112fdd3a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdd3b0));
  return;
}



/* Entry: 103a8ac54; end: 103a8ac73;  */

void FUN_103a8ac54(void)

{
  func_0x000107c61168(&PTR_PTR_112fdd3f8);
  return;
}



/* Entry: 103a8ac74; end: 103a8ac7f; -[SCSimpleSnapchatExperimentServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8ac74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdd460;
  func_0x000107c61428(param_1 + _DAT_112fdd460,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a8ac80; end: 103a8ac8b; -[SCSimpleSnapchatExperimentServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8ac80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdd460;
  func_0x000107c61428(param_1 + _DAT_112fdd460,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a8ac8c; end: 103a8ac97; -[SCSimpleSnapchatExperimentServicesSaberServiceProvider plusActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8ac8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdd468;
  func_0x000107c61428(param_1 + _DAT_112fdd468,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a8ac98; end: 103a8acdb;  */

void FUN_103a8ac98(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a8acdc; end: 103a8ace7; -[SCSimpleSnapchatExperimentServicesSaberServiceProvider setPlusActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8acdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdd468;
  func_0x000107c61428(param_1 + _DAT_112fdd468,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a8ace8; end: 103a8ad3b;  */

void FUN_103a8ace8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a8ad3c; end: 103a8af4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a8ad3c(void)

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
    func_0x000107c4ea20();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a8937c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fdd138);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fdd470);
      *(long *)(unaff_x20 + _DAT_112fdd470) = lVar4;
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
                      "PlusActiveUserSessionScopeGraphBridge/SCSimpleSnapchatExperimentServicesSaberServiceProvider.swift"
                      ,0x62,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a8ae68);
  (*pcVar1)();
}



/* Entry: 103a8af50; end: 103a8af83; -[SCSimpleSnapchatExperimentServicesSaberServiceProvider provide] */

void FUN_103a8af50(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a8ad3c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a8af84; end: 103a8afb7; -[SCSimpleSnapchatExperimentServicesSaberServiceProvider __safeProvide] */

void FUN_103a8af84(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a8ae68();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a8afb8; end: 103a8affb; -[SCSimpleSnapchatExperimentServicesSaberServiceProvider end] */

void FUN_103a8afb8(undefined8 param_1)

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



/* Entry: 103a8affc; end: 103a8b193;  */

void FUN_103a8affc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e6c440)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f193bc0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PlusActiveUserSessionScopeGraphBridge/SCSimpleSnapchatExperimentServicesSaberServiceProvider.swift"
                            ,0x62,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a8b194);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57548();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a8b194; end: 103a8b23f; -[SCSimpleSnapchatExperimentServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a8b194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103a8affc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a8b240; end: 103a8b2b3; -[SCSimpleSnapchatExperimentServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8b240(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdd460,0);
  func_0x000107c61614(param_1 + _DAT_112fdd468,0);
  *(undefined8 *)(param_1 + _DAT_112fdd470) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a8b2b4; end: 103a8b2e7;  */

void FUN_103a8b2b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a8b2e8; end: 103a8b32f; -[SCSimpleSnapchatExperimentServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8b2e8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdd460);
  func_0x000107c61610(param_1 + _DAT_112fdd468);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdd470));
  return;
}



/* Entry: 103a8b330; end: 103a8b34f;  */

void FUN_103a8b330(void)

{
  func_0x000107c61168(&PTR_PTR_112fdd4b8);
  return;
}



/* Entry: 103a8b350; end: 103a8b37b; +[SCPlusLensRemoteApiEndpoints plusState] */

void FUN_103a8b350(void)

{
  func_0x000107c5fadc(0xd000000000000013,0x800000010f193e20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a8b37c; end: 103a8b3a7; +[SCPlusLensRemoteApiEndpoints plusSubscribe] */

void FUN_103a8b37c(void)

{
  func_0x000107c5fadc(0xd000000000000019,0x800000010f193e40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a8b3a8; end: 103a8b3d3; +[SCPlusLensRemoteApiEndpoints lensPlusSubscribe] */

void FUN_103a8b3a8(void)

{
  func_0x000107c5fadc(0xd000000000000015,0x800000010f193e60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a8b3d4; end: 103a8b3ff; +[SCPlusLensRemoteApiEndpoints plusGifting] */

void FUN_103a8b3d4(void)

{
  func_0x000107c5fadc(0xd000000000000012,0x800000010f193e80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a8b400; end: 103a8b57f;  */

void FUN_103a8b400(void)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_a8 [72];
  
  func_0x0001000285a8(0x112d46b30,&UNK_10d917640);
  lVar7 = 4;
  func_0x000107c602e8();
  lVar14 = 0;
  lVar1 = lVar7 + 0x38;
  do {
    uVar3 = *(ulong *)(lVar14 * 0x10 + 0x112fdd580);
    puVar4 = (&PTR_s_viceProvider_swift_10f193dd0_0x50_112fdd588)[lVar14 * 2];
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    func_0x000107c61434(puVar4);
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,puVar4);
    func_0x000107c606a8();
    uVar12 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar12 ^ 0xffffffffffffffff);
    uVar9 = uVar13 >> 6;
    uVar10 = *(ulong *)(lVar1 + uVar9 * 8);
    uVar11 = 1L << (uVar13 & 0x3f);
    if ((uVar11 & uVar10) != 0) {
      do {
        puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar13 * 0x10);
        uVar9 = *puVar2;
        puVar5 = (undefined *)puVar2[1];
        if ((uVar9 == uVar3 && puVar5 == puVar4) ||
           (func_0x000107c605b8(uVar9,puVar5,uVar3,puVar4,0), (uVar9 & 1) != 0)) {
          func_0x000107c6142c(puVar4);
          goto LAB_103a8b468;
        }
        uVar13 = uVar13 + 1 & ~uVar12;
        uVar9 = uVar13 >> 6;
        uVar10 = *(ulong *)(lVar1 + uVar9 * 8);
        uVar11 = 1L << (uVar13 & 0x3f);
      } while ((uVar11 & uVar10) != 0);
    }
    *(ulong *)(lVar1 + uVar9 * 8) = uVar11 | uVar10;
    puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar13 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = (ulong)puVar4;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103a8b580);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
LAB_103a8b468:
    lVar14 = lVar14 + 1;
    if (lVar14 == 4) {
      func_0x000107c61408(0x112fdd580,4,PTR___sSSN_11034da80);
      lRam000000011380cca8 = lVar7;
      return;
    }
  } while( true );
}



/* Entry: 103a8b580; end: 103a8b5d3; +[SCPlusLensRemoteApiEndpoints all] */

void FUN_103a8b580(void)

{
  if (lRam0000000112fdd520 != -1) {
    func_0x000107c61568(0x112fdd520,FUN_103a8b400);
  }
  func_0x000107c5fe08(uRam000000011380cca8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a8b5d4; end: 103a8b60f; -[SCPlusLensRemoteApiEndpoints init] */

void FUN_103a8b5d4(undefined8 param_1)

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



/* Entry: 103a8b610; end: 103a8b643;  */

void FUN_103a8b610(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a8b644; end: 103a8b647; -[SCPlusLensRemoteApiEndpoints .cxx_destruct] */

void FUN_103a8b644(void)

{
  return;
}



/* Entry: 103a8b648; end: 103a8b85f;  */

undefined8 FUN_103a8b648(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == 0) {
LAB_103a8b848:
    uVar2 = 4;
  }
  else {
    lVar3 = param_2;
    func_0x000107c5fb1c();
    func_0x000107c6142c(param_2);
    uVar1 = 0xd000000000000013;
    lVar4 = -0x7ffffffef0e6c1e0;
    func_0x000107c5fb1c();
    if (uVar1 == param_1 && lVar4 == lVar3) {
      func_0x000107c6142c(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c605b8();
      func_0x000107c6142c(lVar4);
      if ((uVar1 & 1) == 0) {
        uVar1 = 0xd000000000000019;
        lVar4 = -0x7ffffffef0e6c1c0;
        func_0x000107c5fb1c();
        if ((uVar1 == param_1) && (lVar4 == lVar3)) {
          func_0x000107c6142c(lVar3);
          lVar3 = lVar4;
LAB_103a8b750:
          func_0x000107c6142c(lVar3);
          return 1;
        }
        func_0x000107c605b8();
        func_0x000107c6142c(lVar4);
        if ((uVar1 & 1) != 0) goto LAB_103a8b750;
        uVar1 = 0xd000000000000015;
        lVar4 = -0x7ffffffef0e6c1a0;
        func_0x000107c5fb1c();
        if ((uVar1 == param_1) && (lVar4 == lVar3)) {
          func_0x000107c6142c(lVar3);
          lVar3 = lVar4;
LAB_103a8b7c0:
          func_0x000107c6142c(lVar3);
          return 2;
        }
        func_0x000107c605b8();
        func_0x000107c6142c(lVar4);
        if ((uVar1 & 1) != 0) goto LAB_103a8b7c0;
        lVar4 = -0x7ffffffef0e6c180;
        uVar1 = 0xd000000000000012;
        func_0x000107c5fb1c();
        if ((uVar1 == param_1) && (lVar4 == lVar3)) {
          func_0x000107c6142c(lVar3);
          func_0x000107c6142c(lVar4);
          return 3;
        }
        func_0x000107c605b8();
        func_0x000107c6142c(lVar3);
        func_0x000107c6142c(lVar4);
        if ((uVar1 & 1) != 0) {
          return 3;
        }
        goto LAB_103a8b848;
      }
    }
    func_0x000107c6142c(lVar3);
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 103a8b860; end: 103a8b873;  */

bool FUN_103a8b860(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a8b874; end: 103a8b91f;  */

void FUN_103a8b874(void)

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



/* Entry: 103a8b920; end: 103a8b923;  */

void FUN_103a8b920(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdd528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc477b0;
  func_0x000107c61520(&UNK_10dc477b0,&UNK_1106c7328);
  puRam0000000112fdd528 = puVar1;
  return;
}



/* Entry: 103a8b924; end: 103a8b983;  */

void FUN_103a8b924(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdd528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc477b0;
  func_0x000107c61520(&UNK_10dc477b0,&UNK_1106c7328);
  puRam0000000112fdd528 = puVar1;
  return;
}



/* Entry: 103a8b984; end: 103a8bae7;  */

int FUN_103a8b984(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103a8ba00;
        goto LAB_103a8b9e4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103a8b9e4:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_103a8ba00:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103a8bae8; end: 103a8bb2f; -[_TtC20PlusLensRemoteApiAPI43SCPostCapturePlusLensRemoteApiHandlerBridge proxyHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8bae8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdd5c0;
  func_0x000107c61428(param_1 + _DAT_112fdd5c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a8bb30; end: 103a8bb6f; -[_TtC20PlusLensRemoteApiAPI43SCPostCapturePlusLensRemoteApiHandlerBridge setProxyHandler:] */

void FUN_103a8bb30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103a8bb70(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103a8bb70; end: 103a8bc1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8bb70(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112fdd5c0;
  func_0x000107c61428(unaff_x20 + _DAT_112fdd5c0,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  lVar1 = _DAT_112fdd5c8;
  if (lVar2 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112fdd5c8,auStack_60,0,0);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c615f0(uVar3);
    func_0x000107c57b70(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 103a8bc20; end: 103a8bc67; -[_TtC20PlusLensRemoteApiAPI43SCPostCapturePlusLensRemoteApiHandlerBridge requestHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8bc20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdd5c8;
  func_0x000107c61428(param_1 + _DAT_112fdd5c8,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a8bc68; end: 103a8bca7; -[_TtC20PlusLensRemoteApiAPI43SCPostCapturePlusLensRemoteApiHandlerBridge setRequestHandler:] */

void FUN_103a8bc68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103a8bca8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103a8bca8; end: 103a8bdf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8bca8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdd5c8;
  func_0x000107c61428(unaff_x20 + _DAT_112fdd5c8,auStack_48,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c615f0(param_1);
  func_0x000107c615e8(uVar3);
  lVar2 = _DAT_112fdd5c0;
  func_0x000107c61428(unaff_x20 + _DAT_112fdd5c0,auStack_60,0,0);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c615f0(uVar3);
    func_0x000107c57b70(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 103a8bdf4; end: 103a8be1b; -[_TtC20PlusLensRemoteApiAPI43SCPostCapturePlusLensRemoteApiHandlerBridge clearProxyHandler] */

void FUN_103a8bdf4(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000103a8bd64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103a8be1c; end: 103a8be7b; -[_TtC20PlusLensRemoteApiAPI43SCPostCapturePlusLensRemoteApiHandlerBridge init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8be1c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdd5c0,0);
  *(undefined8 *)(param_1 + _DAT_112fdd5c8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a8be7c; end: 103a8beaf;  */

void FUN_103a8be7c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a8beb0; end: 103a8bfb7; -[_TtC20PlusLensRemoteApiAPI43SCPostCapturePlusLensRemoteApiHandlerBridge .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8beb0(long param_1)

{
  func_0x000103a8bee8(param_1 + _DAT_112fdd5c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fdd5c8));
  return;
}



/* Entry: 103a8bfb8; end: 103a8bfbb;  */

void FUN_103a8bfb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdd5f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc47930;
  func_0x000107c61520(&UNK_10dc47930,&UNK_1106c7470);
  puRam0000000112fdd5f8 = puVar1;
  return;
}



/* Entry: 103a8bfbc; end: 103a8bffb;  */

void FUN_103a8bfbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdd5f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc47930;
  func_0x000107c61520(&UNK_10dc47930,&UNK_1106c7470);
  puRam0000000112fdd5f8 = puVar1;
  return;
}



/* Entry: 103a8bffc; end: 103a8c183;  */

void FUN_103a8bffc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103a8c184; end: 103a8c3db;  */

long FUN_103a8c184(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103a8c3dc; end: 103a8c437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8c3dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fdd608);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a8c438; end: 103a8c493; -[_TtC22SongGenerationServices22SongGenerationServices init] */

void FUN_103a8c438(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SongGenerationServices.SongGenerationServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a8c464);
  (*pcVar1)();
}



/* Entry: 103a8c494; end: 103a8c4b3; -[_TtC22SongGenerationServices22SongGenerationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8c494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fdd608));
  return;
}



/* Entry: 103a8c4b4; end: 103a8c53b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a8c4b4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100aa5ef0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fdd638) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fdd640) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a8c53c);
  (*pcVar1)();
}



/* Entry: 103a8c53c; end: 103a8c59b; -[_TtC40PreviewActiveUserSessionScopeGraphBridge55PreviewActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103a8c53c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewActiveUserSessionScopeGraphBridge.PreviewActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a8c568);
  (*pcVar1)();
}



/* Entry: 103a8c59c; end: 103a8c5d3; -[_TtC40PreviewActiveUserSessionScopeGraphBridge55PreviewActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a8c5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a8c5bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8c59c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdd638));
  return;
}



/* Entry: 103a8c5d4; end: 103a8c5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8c5d4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fdd640),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fdd638));
  return;
}



/* Entry: 103a8c5fc; end: 103a8c65f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a8c5fc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fddd00);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a8c660; end: 103a8c667;  */

void FUN_103a8c660(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a8c668; end: 103a8c68b;  */

void FUN_103a8c668(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a8c68c; end: 103a8c6ab;  */

void FUN_103a8c68c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a8c6ac; end: 103a8c70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a8c6ac(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fddd08);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a8c710; end: 103a8c717;  */

void FUN_103a8c710(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a8c718; end: 103a8c7b7;  */

void FUN_103a8c718(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a8c7b8; end: 103a8c7d7;  */

void FUN_103a8c7b8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a8c7d8; end: 103a8c83b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a8c7d8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fddd10);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a8c83c; end: 103a8c843;  */

void FUN_103a8c83c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a8c844; end: 103a8c8e3;  */

void FUN_103a8c844(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a8c8e4; end: 103a8c903;  */

void FUN_103a8c8e4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a8c904; end: 103a8c967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a8c904(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fddd18);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a8c968; end: 103a8c96f;  */

void FUN_103a8c968(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a8c970; end: 103a8ca0f;  */

void FUN_103a8c970(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a8ca10; end: 103a8ca2f;  */

void FUN_103a8ca10(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a8ca30; end: 103a8ca93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a8ca30(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fddd20);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a8ca94; end: 103a8ca9b;  */

void FUN_103a8ca94(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a8ca9c; end: 103a8cb3b;  */

void FUN_103a8ca9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a8cb3c; end: 103a8cb5b;  */

void FUN_103a8cb3c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a8cb5c; end: 103a8cbbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a8cb5c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fddd28);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a8cbc0; end: 103a8cbc7;  */

void FUN_103a8cbc0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a8cbc8; end: 103a8cc67;  */

void FUN_103a8cbc8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a8cc68; end: 103a8cc87;  */

void FUN_103a8cc68(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a8cc88; end: 103a8cceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a8cc88(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fddd30);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a8ccec; end: 103a8ccf3;  */

void FUN_103a8ccec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a8ccf4; end: 103a8cd17;  */

void FUN_103a8ccf4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a8cd18; end: 103a8cd37;  */

void FUN_103a8cd18(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a8cd38; end: 103a8cd9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a8cd38(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fddd38);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a8cd9c; end: 103a8cda3;  */

void FUN_103a8cd9c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a8cda4; end: 103a8ce43;  */

void FUN_103a8cda4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a8ce44; end: 103a8ce63;  */

void FUN_103a8ce44(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a8ce64; end: 103a8cf3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8ce64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fddd00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fddd08) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fddd10) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fddd18) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fddd20) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fddd28) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fddd30) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fddd38) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}


