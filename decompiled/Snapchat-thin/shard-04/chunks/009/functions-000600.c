/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1039c2284; end: 1039c241b;  */

void FUN_1039c2284(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e7baf0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f184510,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ConvoActiveUserSessionScopeGraphBridge/SCSCSavedStorySendingServicesSaberServiceProvider.swift"
                            ,0x5e,2,0x48,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039c241c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5398c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039c241c; end: 1039c24c7; -[SCSCSavedStorySendingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039c241c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039c2284(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039c24c8; end: 1039c253b; -[SCSCSavedStorySendingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c24c8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc4280,0);
  func_0x000107c61614(param_1 + _DAT_112fc4288,0);
  *(undefined8 *)(param_1 + _DAT_112fc4290) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039c253c; end: 1039c256f;  */

void FUN_1039c253c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039c2570; end: 1039c25b7; -[SCSCSavedStorySendingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c2570(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc4280);
  func_0x000107c61610(param_1 + _DAT_112fc4288);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc4290));
  return;
}



/* Entry: 1039c25b8; end: 1039c25d7;  */

void FUN_1039c25b8(void)

{
  func_0x000107c61168(&PTR_PTR_112fc42d8);
  return;
}



/* Entry: 1039c25d8; end: 1039c25e3; -[SCSCStoriesOperaSaveFriendStoryPluginServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c25d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc4340;
  func_0x000107c61428(param_1 + _DAT_112fc4340,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039c25e4; end: 1039c25ef; -[SCSCStoriesOperaSaveFriendStoryPluginServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c25e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc4340;
  func_0x000107c61428(param_1 + _DAT_112fc4340,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039c25f0; end: 1039c25fb; -[SCSCStoriesOperaSaveFriendStoryPluginServicesSaberServiceProvider convoActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c25f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc4348;
  func_0x000107c61428(param_1 + _DAT_112fc4348,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039c25fc; end: 1039c263f;  */

void FUN_1039c25fc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039c2640; end: 1039c264b; -[SCSCStoriesOperaSaveFriendStoryPluginServicesSaberServiceProvider setConvoActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c2640(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc4348;
  func_0x000107c61428(param_1 + _DAT_112fc4348,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039c264c; end: 1039c269f;  */

void FUN_1039c264c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039c26a0; end: 1039c28b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039c26a0(void)

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
    func_0x000107c40750();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039ba2c0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fc33b0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc4350);
      *(long *)(unaff_x20 + _DAT_112fc4350) = lVar4;
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
                      "ConvoActiveUserSessionScopeGraphBridge/SCSCStoriesOperaSaveFriendStoryPluginServicesSaberServiceProvider.swift"
                      ,0x6e,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039c27cc);
  (*pcVar1)();
}



/* Entry: 1039c28b4; end: 1039c28e7; -[SCSCStoriesOperaSaveFriendStoryPluginServicesSaberServiceProvider provide] */

void FUN_1039c28b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039c26a0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039c28e8; end: 1039c291b; -[SCSCStoriesOperaSaveFriendStoryPluginServicesSaberServiceProvider __safeProvide] */

void FUN_1039c28e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039c27cc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039c291c; end: 1039c295f; -[SCSCStoriesOperaSaveFriendStoryPluginServicesSaberServiceProvider end] */

void FUN_1039c291c(undefined8 param_1)

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



/* Entry: 1039c2960; end: 1039c2af7;  */

void FUN_1039c2960(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e7baf0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f184510,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ConvoActiveUserSessionScopeGraphBridge/SCSCStoriesOperaSaveFriendStoryPluginServicesSaberServiceProvider.swift"
                            ,0x6e,2,0x48,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039c2af8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5398c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039c2af8; end: 1039c2ba3; -[SCSCStoriesOperaSaveFriendStoryPluginServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039c2af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039c2960(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039c2ba4; end: 1039c2c17; -[SCSCStoriesOperaSaveFriendStoryPluginServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c2ba4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc4340,0);
  func_0x000107c61614(param_1 + _DAT_112fc4348,0);
  *(undefined8 *)(param_1 + _DAT_112fc4350) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039c2c18; end: 1039c2c4b;  */

void FUN_1039c2c18(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039c2c4c; end: 1039c2c93; -[SCSCStoriesOperaSaveFriendStoryPluginServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c2c4c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc4340);
  func_0x000107c61610(param_1 + _DAT_112fc4348);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc4350));
  return;
}



/* Entry: 1039c2c94; end: 1039c2cb3;  */

void FUN_1039c2c94(void)

{
  func_0x000107c61168(&PTR_PTR_112fc4398);
  return;
}



/* Entry: 1039c2cb4; end: 1039c2cbf; -[SCSnapSendingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c2cb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc4400;
  func_0x000107c61428(param_1 + _DAT_112fc4400,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039c2cc0; end: 1039c2ccb; -[SCSnapSendingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c2cc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc4400;
  func_0x000107c61428(param_1 + _DAT_112fc4400,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039c2ccc; end: 1039c2cd7; -[SCSnapSendingServicesSaberServiceProvider convoActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c2ccc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc4408;
  func_0x000107c61428(param_1 + _DAT_112fc4408,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039c2cd8; end: 1039c2d1b;  */

void FUN_1039c2cd8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039c2d1c; end: 1039c2d27; -[SCSnapSendingServicesSaberServiceProvider setConvoActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c2d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc4408;
  func_0x000107c61428(param_1 + _DAT_112fc4408,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039c2d28; end: 1039c2d7b;  */

void FUN_1039c2d28(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039c2d7c; end: 1039c2f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039c2d7c(void)

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
    func_0x000107c40750();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039ba3ec();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fc33c0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc4410);
      *(long *)(unaff_x20 + _DAT_112fc4410) = lVar4;
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
                      "ConvoActiveUserSessionScopeGraphBridge/SCSnapSendingServicesSaberServiceProvider.swift"
                      ,0x56,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039c2ea8);
  (*pcVar1)();
}



/* Entry: 1039c2f90; end: 1039c2fc3; -[SCSnapSendingServicesSaberServiceProvider provide] */

void FUN_1039c2f90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039c2d7c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039c2fc4; end: 1039c2ff7; -[SCSnapSendingServicesSaberServiceProvider __safeProvide] */

void FUN_1039c2fc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039c2ea8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039c2ff8; end: 1039c303b; -[SCSnapSendingServicesSaberServiceProvider end] */

void FUN_1039c2ff8(undefined8 param_1)

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



/* Entry: 1039c303c; end: 1039c31d3;  */

void FUN_1039c303c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e7baf0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f184510,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ConvoActiveUserSessionScopeGraphBridge/SCSnapSendingServicesSaberServiceProvider.swift"
                            ,0x56,2,0x48,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039c31d4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5398c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039c31d4; end: 1039c327f; -[SCSnapSendingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039c31d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039c303c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039c3280; end: 1039c32f3; -[SCSnapSendingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c3280(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc4400,0);
  func_0x000107c61614(param_1 + _DAT_112fc4408,0);
  *(undefined8 *)(param_1 + _DAT_112fc4410) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039c32f4; end: 1039c3327;  */

void FUN_1039c32f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039c3328; end: 1039c336f; -[SCSnapSendingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c3328(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc4400);
  func_0x000107c61610(param_1 + _DAT_112fc4408);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc4410));
  return;
}



/* Entry: 1039c3370; end: 1039c33cb;  */

void FUN_1039c3370(void)

{
  func_0x000107c61168(&PTR_PTR_112fc4458);
  return;
}



/* Entry: 1039c33cc; end: 1039c33db;  */

void FUN_1039c33cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039c33dc; end: 1039c340b;  */

void FUN_1039c33dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000100292e98();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1039c340c; end: 1039c3477;  */

void FUN_1039c340c(undefined8 param_1)

{
  if (lRam0000000112fc44e8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7986f0);
  return;
}



/* Entry: 1039c3478; end: 1039c34db; -[_TtC30PublicGroupsChatImplementation38PublicGroupsChatDeckTransitionServices init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c3478(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112fc4588;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039c34dc; end: 1039c350f;  */

void FUN_1039c34dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039c3510; end: 1039c351f; -[_TtC30PublicGroupsChatImplementation38PublicGroupsChatDeckTransitionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c3510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc4588));
  return;
}



/* Entry: 1039c3520; end: 1039c541b;  */

undefined8
FUN_1039c3520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001039c35f8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17);
  return unaff_x20;
}



/* Entry: 1039c541c; end: 1039c5467;  */

void FUN_1039c541c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1039c5468; end: 1039c54ab;  */

void FUN_1039c5468(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039c54ac; end: 1039c54af;  */

void FUN_1039c54ac(void)

{
  return;
}



/* Entry: 1039c54b0; end: 1039c54e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039c54b0(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_113034838),param_2,0);
  return 0;
}



/* Entry: 1039c54e4; end: 1039c556b;  */

ulong FUN_1039c54e4(uint param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  ulong uStack_28;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1039c556c);
    (*pcVar2)();
  }
  uStack_28 = 0;
  func_0x000107c61598(&uStack_28,8);
  uVar4 = (uStack_28 & 0xffffffff) * (ulong)param_1;
  uVar3 = (uint)uVar4;
  if (uVar3 < param_1) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = -param_1 / param_1;
    }
    while (uVar3 < -param_1 - uVar1 * param_1) {
      uStack_28 = 0;
      func_0x000107c61598(&uStack_28,8);
      uVar4 = (uStack_28 & 0xffffffff) * (ulong)param_1;
      uVar3 = (uint)uVar4;
    }
  }
  return uVar4 >> 0x20;
}



/* Entry: 1039c556c; end: 1039c55a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c556c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fc4588),PTR_s_next__112614028,
             param_1);
  return;
}



/* Entry: 1039c55a4; end: 1039c55c3;  */

void FUN_1039c55a4(void)

{
  func_0x000107c61168(&PTR_PTR_112fc45f8);
  return;
}



/* Entry: 1039c55c4; end: 1039c566b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039c55c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc4678) = param_2;
  puVar1 = PTR_s_initWithRootViewController__1125edab8;
  func_0x000107c61174(param_2);
  func_0x000107c61154(auStack_40,puVar1,param_1);
  func_0x000107c61180();
  func_0x000107c5677c();
  func_0x000107c569d4(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return puVar2;
}



/* Entry: 1039c566c; end: 1039c56c3; -[_TtC30PublicGroupsChatImplementation36PublicGroupsChatNavigationController initWithCoder:] */

void FUN_1039c566c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "PublicGroupsChatImplementation/PublicGroupsChatNavigationController.swift",
                      0x49,2,0x16,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039c56c4);
  (*pcVar1)();
}



/* Entry: 1039c56c4; end: 1039c56ef; -[_TtC30PublicGroupsChatImplementation36PublicGroupsChatNavigationController initWithNavigationBarClass:toolbarClass:] */

void FUN_1039c56c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PublicGroupsChatImplementation.PublicGroupsChatNavigationController",0x43,
                      "init(navigationBarClass:toolbarClass:)",0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039c56f0);
  (*pcVar1)();
}



/* Entry: 1039c56f0; end: 1039c571b; -[_TtC30PublicGroupsChatImplementation36PublicGroupsChatNavigationController initWithRootViewController:] */

void FUN_1039c56f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PublicGroupsChatImplementation.PublicGroupsChatNavigationController",0x43,
                      "init(rootViewController:)",0x19,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039c571c);
  (*pcVar1)();
}



/* Entry: 1039c571c; end: 1039c577b; -[_TtC30PublicGroupsChatImplementation36PublicGroupsChatNavigationController initWithNibName:bundle:] */

void FUN_1039c571c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PublicGroupsChatImplementation.PublicGroupsChatNavigationController",0x43,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039c5748);
  (*pcVar1)();
}



/* Entry: 1039c577c; end: 1039c578b; -[_TtC30PublicGroupsChatImplementation36PublicGroupsChatNavigationController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c577c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc4678));
  return;
}



/* Entry: 1039c578c; end: 1039c5793; -[_TtC30PublicGroupsChatImplementation36PublicGroupsChatNavigationController presentationMode] */

undefined8 FUN_1039c578c(void)

{
  return 3;
}



/* Entry: 1039c5794; end: 1039c5797; -[_TtC30PublicGroupsChatImplementation36PublicGroupsChatNavigationController interactiveDismissalWillBegin:] */

void FUN_1039c5794(void)

{
  return;
}



/* Entry: 1039c5798; end: 1039c57e3; -[_TtC30PublicGroupsChatImplementation36PublicGroupsChatNavigationController interactiveDismissalDidComplete:] */

/* WARNING: Possible PIC construction at 0x0001039c57cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039c57d0) */

void FUN_1039c5798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1039c57e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1039c57e4; end: 1039c57e7; -[_TtC30PublicGroupsChatImplementation36PublicGroupsChatNavigationController interactionControllerPercentageDidChange:] */

void FUN_1039c57e4(void)

{
  return;
}



/* Entry: 1039c57e8; end: 1039c586f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c57e8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113034850;
  lVar2 = *(long *)(unaff_x20 + _DAT_112fc4678);
  func_0x000107c61428(lVar2 + _DAT_113034850,auStack_38,0,0);
  lVar1 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x000107c41864(*(undefined8 *)(lVar2 + _DAT_113034838));
  }
  else {
    func_0x000107c41b10();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1039c5870; end: 1039c588f;  */

void FUN_1039c5870(void)

{
  func_0x000107c61168(&PTR_PTR_112910528);
  return;
}



/* Entry: 1039c5890; end: 1039c5c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1039c5890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc46a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fc46b0) = 0;
  lVar1 = _DAT_112fc46b8;
  FUN_1039c54e4(0xffffffff);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d0();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112fc46c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fc46c8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fc46d0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fc46d8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fc46e0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fc46e8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fc46f0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fc46f8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112fc4700) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112fc4708) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112fc4710) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112fc4718) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112fc4720) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112fc4728) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112fc4730) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112fc4738) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112fc4740) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112fc4748) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112fc4750) = param_19;
  puVar2 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c61174();
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c615f0(param_10);
  func_0x000107c615f0(param_11);
  func_0x000107c61174();
  func_0x000107c615f0(param_13);
  func_0x000107c615f0(param_14);
  func_0x000107c615f0(param_15);
  func_0x000107c615f0(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,puVar2,0,0);
  func_0x000107c61180();
  func_0x000107c5677c();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_9);
  func_0x000107c615e8(param_10);
  func_0x000107c615e8(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c615e8(param_13);
  func_0x000107c615e8(param_14);
  func_0x000107c615e8(param_15);
  func_0x000107c615e8(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  return puVar3;
}



/* Entry: 1039c5c4c; end: 1039c5d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039c5c4c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112fc46b0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112fc46b0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112fc4748);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fc4750);
    FUN_1039c85e4();
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174(uVar4);
    lVar2 = unaff_x20;
    func_0x000107c61174();
    func_0x0001039c8284(lVar3,uVar4,lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1039c5d0c; end: 1039c5d33; -[_TtC30PublicGroupsChatImplementation30PublicGroupsChatViewController initWithCoder:] */

void FUN_1039c5d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1039c6ab0();
  return;
}



/* Entry: 1039c5d34; end: 1039c5d3b; -[_TtC30PublicGroupsChatImplementation30PublicGroupsChatViewController supportedInterfaceOrientations] */

undefined8 FUN_1039c5d34(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 1039c5d3c; end: 1039c61d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c5d3c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar13 = _DAT_112fc46a8;
  func_0x000107c61428(unaff_x20 + _DAT_112fc46a8,auStack_78,0,0);
  lVar13 = *(long *)(unaff_x20 + lVar13);
  if (lVar13 != 0) {
    lVar12 = *(long *)(unaff_x20 + _DAT_112fc46c0);
    puVar1 = (undefined8 *)(lVar12 + _DAT_113034840);
    uVar4 = *puVar1;
    uVar2 = puVar1[1];
    puVar3 = PTR_PTR_1126ad838;
    func_0x000107c610f8();
    func_0x000107c61434(uVar2);
    func_0x000107c615f0(lVar13);
    func_0x000107c5fadc(uVar4,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c4616c();
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(lVar12 + _DAT_113034848);
    func_0x000100c6f294(uVar4);
    func_0x000107c61180();
    func_0x000107c59558(puVar3);
    func_0x000107c61170(uVar4);
    lVar12 = lVar13;
    func_0x000107c41408(lVar13);
    func_0x000107c61180();
    puVar5 = &UNK_1106b8fe0;
    func_0x000107c613fc(&UNK_1106b8fe0,0x18,7);
    lVar14 = unaff_x20;
    func_0x000107c61614(puVar5 + 0x10);
    puVar6 = PTR_PTR_1126ad840;
    func_0x000107c610f8(PTR_PTR_1126ad840);
    pcStack_88 = FUN_1039c6a6c;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1106b8ff8;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4();
    func_0x000107c6157c(puVar5);
    func_0x000107c4640c(puVar6);
    func_0x000107c615e8(lVar12);
    func_0x000107c60bd0(ppuVar7);
    puVar8 = puStack_80;
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar8);
    func_0x000107c57b54(puVar6);
    func_0x000107c58b50(puVar6);
    func_0x000107c5a6a4(puVar6);
    func_0x000107c56678(puVar6);
    func_0x000107c5a2d8(puVar6);
    func_0x000107c54c28(puVar6);
    puVar5 = PTR_PTR_1126a65a8;
    func_0x000107c610f8(PTR_PTR_1126a65a8);
    func_0x000107c453e4();
    func_0x000107c59724();
    func_0x000107c56644(puVar6);
    puVar8 = PTR_PTR_1126a65b0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar9 = PTR_PTR_1126b1588;
    func_0x000107c610f8(PTR_PTR_1126b1588);
    func_0x000107c453e4();
    func_0x000107c596ac(puVar8);
    func_0x000108ef72cc();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    func_0x000107c43b74(puVar9);
    func_0x000107c61170(puVar10);
    puVar10 = PTR_PTR_1126b1588;
    func_0x000107c610f8(PTR_PTR_1126b1588);
    func_0x000107c453e4();
    puVar11 = puVar8;
    func_0x000107c563b4();
    func_0x00010043f068();
    func_0x000107c61180();
    if (puVar11 == (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      lVar14 = -0x2000000000000000;
    }
    else {
      puVar15 = puVar11;
      func_0x000107c5faec();
      func_0x000107c61170(puVar11);
    }
    func_0x000107c5fadc(puVar15,lVar14);
    func_0x000107c6142c(lVar14);
    func_0x000107c43b74(puVar10);
    func_0x000107c61170(puVar15);
    puVar11 = puVar6;
    func_0x000107c579ec(puVar6);
    FUN_1039c5c4c();
    func_0x000107c59730(puVar6);
    func_0x000107c61170(puVar11);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fc4740);
    func_0x000107c5cb24(uVar4);
    func_0x000107c61180();
    func_0x000107c53e9c(puVar6);
    func_0x000107c61170(uVar4);
    puVar11 = PTR_PTR_1126ad848;
    func_0x000107c610f8(PTR_PTR_1126ad848);
    func_0x000107c49520();
    func_0x000107c5a568();
    func_0x000107c615e8(lVar13);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar11);
  }
  return;
}



/* Entry: 1039c61d8; end: 1039c629f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c61d8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_113034850;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112fc46c0);
    func_0x000107c61428(lVar2 + _DAT_113034850,auStack_60,0,0);
    lVar1 = lVar2 + lVar1;
    func_0x000107c61618();
    if (lVar1 == 0) {
      func_0x000107c41864(*(undefined8 *)(lVar2 + _DAT_113034838));
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c41b10();
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1039c62a0; end: 1039c62c7; -[_TtC30PublicGroupsChatImplementation30PublicGroupsChatViewController loadView] */

void FUN_1039c62a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1039c5d3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1039c62c8; end: 1039c63f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c62c8(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x000107c614f0();
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112fc46c0) + _DAT_113034848);
  uVar4 = 0x4024000000000000;
  if (lVar3 != 0x31 && lVar3 != 0) {
    uVar4 = 0;
  }
  puVar1 = PTR_PTR_1126df560;
  func_0x000107c610f8(PTR_PTR_1126df560);
  func_0x000107c45690();
  puVar2 = PTR_PTR_1126df568;
  func_0x000107c610f8(PTR_PTR_1126df568);
  func_0x000107c480a0(uVar4,0x404e000000000000);
  func_0x000107c61170(puVar1);
  func_0x000107c571b4(puVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fc4740);
  puVar1 = PTR_PTR_1126df558;
  func_0x000107c610f8(PTR_PTR_1126df558);
  func_0x000107c46384();
  func_0x000107c4d664(uVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewWillAppear__1126853f0,param_1 & 1);
  return;
}



/* Entry: 1039c63f8; end: 1039c6427; -[_TtC30PublicGroupsChatImplementation30PublicGroupsChatViewController viewWillAppear:] */

void FUN_1039c63f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1039c62c8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1039c6428; end: 1039c6557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6428(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x000107c614f0();
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112fc46c0) + _DAT_113034848);
  uVar4 = 0x4024000000000000;
  if (lVar3 != 0x31 && lVar3 != 0) {
    uVar4 = 0;
  }
  puVar1 = PTR_PTR_1126df560;
  func_0x000107c610f8(PTR_PTR_1126df560);
  func_0x000107c45690();
  puVar2 = PTR_PTR_1126df568;
  func_0x000107c610f8(PTR_PTR_1126df568);
  func_0x000107c480a0(uVar4,0x404e000000000000);
  func_0x000107c61170(puVar1);
  func_0x000107c571b4(puVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fc4740);
  puVar1 = PTR_PTR_1126df558;
  func_0x000107c610f8(PTR_PTR_1126df558);
  func_0x000107c46384();
  func_0x000107c4d664(uVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidAppear__112684bd0,param_1 & 1);
  return;
}



/* Entry: 1039c6558; end: 1039c6587; -[_TtC30PublicGroupsChatImplementation30PublicGroupsChatViewController viewDidAppear:] */

void FUN_1039c6558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1039c6428(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1039c6588; end: 1039c66b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6588(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x000107c614f0();
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112fc46c0) + _DAT_113034848);
  uVar4 = 0x4024000000000000;
  if (lVar3 != 0x31 && lVar3 != 0) {
    uVar4 = 0;
  }
  puVar1 = PTR_PTR_1126df560;
  func_0x000107c610f8(PTR_PTR_1126df560);
  func_0x000107c45690();
  puVar2 = PTR_PTR_1126df568;
  func_0x000107c610f8(PTR_PTR_1126df568);
  func_0x000107c480a0(0x404e000000000000,uVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c571b4(puVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fc4740);
  puVar1 = PTR_PTR_1126df558;
  func_0x000107c610f8(PTR_PTR_1126df558);
  func_0x000107c46384();
  func_0x000107c4d664(uVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewWillDisappear__112685438,param_1 & 1);
  return;
}



/* Entry: 1039c66b8; end: 1039c66e7; -[_TtC30PublicGroupsChatImplementation30PublicGroupsChatViewController viewWillDisappear:] */

void FUN_1039c66b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1039c6588(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1039c66e8; end: 1039c6817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c66e8(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x000107c614f0();
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112fc46c0) + _DAT_113034848);
  uVar4 = 0x4024000000000000;
  if (lVar3 != 0x31 && lVar3 != 0) {
    uVar4 = 0;
  }
  puVar1 = PTR_PTR_1126df560;
  func_0x000107c610f8(PTR_PTR_1126df560);
  func_0x000107c45690();
  puVar2 = PTR_PTR_1126df568;
  func_0x000107c610f8(PTR_PTR_1126df568);
  func_0x000107c480a0(0x404e000000000000,uVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c571b4(puVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fc4740);
  puVar1 = PTR_PTR_1126df558;
  func_0x000107c610f8(PTR_PTR_1126df558);
  func_0x000107c46384();
  func_0x000107c4d664(uVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidDisappear__112684c48,param_1 & 1);
  return;
}



/* Entry: 1039c6818; end: 1039c6847; -[_TtC30PublicGroupsChatImplementation30PublicGroupsChatViewController viewDidDisappear:] */

void FUN_1039c6818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1039c66e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1039c6848; end: 1039c68a7; -[_TtC30PublicGroupsChatImplementation30PublicGroupsChatViewController initWithNibName:bundle:] */

void FUN_1039c6848(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PublicGroupsChatImplementation.PublicGroupsChatViewController",0x3d,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039c6874);
  (*pcVar1)();
}



/* Entry: 1039c68a8; end: 1039c6a1f; -[_TtC30PublicGroupsChatImplementation30PublicGroupsChatViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039c68d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039c6984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039c69d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039c69f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039c69d8) */
/* WARNING: Removing unreachable block (ram,0x0001039c6988) */
/* WARNING: Removing unreachable block (ram,0x0001039c68d8) */
/* WARNING: Removing unreachable block (ram,0x0001039c69f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c68a8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fc46a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc46c0));
  return;
}



/* Entry: 1039c6a20; end: 1039c6a3f; -[_TtC30PublicGroupsChatImplementation30PublicGroupsChatViewController defaultProjectNameV2] */

void FUN_1039c6a20(void)

{
  func_0x000107c5fadc(0x74616843,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039c6a40; end: 1039c6a6b; -[_TtC30PublicGroupsChatImplementation30PublicGroupsChatViewController defaultSubProjectName] */

void FUN_1039c6a40(void)

{
  func_0x000107c5fadc(0x6843206369706f54,0xea00000000007461);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039c6a6c; end: 1039c6a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6a6c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_113034850;
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + _DAT_112fc46c0);
    func_0x000107c61428(lVar3 + _DAT_113034850,auStack_60,0,0);
    lVar2 = lVar3 + lVar2;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c41864(*(undefined8 *)(lVar3 + _DAT_113034838));
      func_0x000107c61170(lVar1);
    }
    else {
      func_0x000107c41b10();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1039c6a90; end: 1039c6aaf;  */

void FUN_1039c6a90(void)

{
  func_0x000107c61168(&PTR_PTR_1129105e8);
  return;
}



/* Entry: 1039c6ab0; end: 1039c6b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6ab0(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fc46a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fc46b0) = 0;
  lVar1 = _DAT_112fc46b8;
  FUN_1039c54e4(0xffffffff);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d0();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "PublicGroupsChatImplementation/PublicGroupsChatViewController.swift",0x43,2,
                      0x6d,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1039c6b54);
  (*pcVar2)();
}



/* Entry: 1039c6b54; end: 1039c6b5f; -[SCPublicGroupsChatEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6b54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc4780;
  func_0x000107c61428(param_1 + _DAT_112fc4780,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039c6b60; end: 1039c6b6b; -[SCPublicGroupsChatEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc4780;
  func_0x000107c61428(param_1 + _DAT_112fc4780,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039c6b6c; end: 1039c6b77; -[SCPublicGroupsChatEntryPoint systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6b6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc4788;
  func_0x000107c61428(param_1 + _DAT_112fc4788,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039c6b78; end: 1039c6b83; -[SCPublicGroupsChatEntryPoint setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6b78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc4788;
  func_0x000107c61428(param_1 + _DAT_112fc4788,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039c6b84; end: 1039c6b8f; -[SCPublicGroupsChatEntryPoint deckServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6b84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc4790;
  func_0x000107c61428(param_1 + _DAT_112fc4790,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039c6b90; end: 1039c6b9b; -[SCPublicGroupsChatEntryPoint setDeckServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc4790;
  func_0x000107c61428(param_1 + _DAT_112fc4790,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039c6b9c; end: 1039c6ba7; -[SCPublicGroupsChatEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6b9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc4798;
  func_0x000107c61428(param_1 + _DAT_112fc4798,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039c6ba8; end: 1039c6bb3; -[SCPublicGroupsChatEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc4798;
  func_0x000107c61428(param_1 + _DAT_112fc4798,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039c6bb4; end: 1039c6bbf; -[SCPublicGroupsChatEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6bb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc47a0;
  func_0x000107c61428(param_1 + _DAT_112fc47a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039c6bc0; end: 1039c6bcb; -[SCPublicGroupsChatEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc47a0;
  func_0x000107c61428(param_1 + _DAT_112fc47a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039c6bcc; end: 1039c6bd7; -[SCPublicGroupsChatEntryPoint composerTopicServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6bcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc47a8;
  func_0x000107c61428(param_1 + _DAT_112fc47a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039c6bd8; end: 1039c6be3; -[SCPublicGroupsChatEntryPoint setComposerTopicServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6bd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc47a8;
  func_0x000107c61428(param_1 + _DAT_112fc47a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039c6be4; end: 1039c6bef; -[SCPublicGroupsChatEntryPoint composerApplicationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6be4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc47b0;
  func_0x000107c61428(param_1 + _DAT_112fc47b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039c6bf0; end: 1039c6bfb; -[SCPublicGroupsChatEntryPoint setComposerApplicationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039c6bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc47b0;
  func_0x000107c61428(param_1 + _DAT_112fc47b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


