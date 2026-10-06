/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103990e5c; end: 103990e9f; -[SCSCPasskeyStoreServicesSaberEntryPoint end] */

void FUN_103990e5c(undefined8 param_1)

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



/* Entry: 103990ea0; end: 103990ed3;  */

void FUN_103990ea0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103990ed4; end: 103990f2b; -[SCSCPasskeyStoreServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103990f10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103990f14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103990ed4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbb760);
  func_0x000107c61610(param_1 + _DAT_112fbb768);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbb770));
  return;
}



/* Entry: 103990f2c; end: 103990f4b;  */

void FUN_103990f2c(void)

{
  func_0x000107c61168(&PTR_PTR_1129099f8);
  return;
}



/* Entry: 103990f4c; end: 103991077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103990f4c(void)

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
    func_0x000107c3d018();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000100ba66cc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fbb6a8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fbb7b8);
      *(long *)(unaff_x20 + _DAT_112fbb7b8) = lVar4;
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
                      "ActivActiveUserSessionScopeGraphBridge/SCBadgeRankerServicesSaberServiceProvider.swift"
                      ,0x56,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103991078);
  (*pcVar1)();
}



/* Entry: 103991078; end: 1039910ab; -[SCBadgeRankerServicesSaberServiceProvider provide] */

void FUN_103991078(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103990f4c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039910ac; end: 1039910ef; -[SCBadgeRankerServicesSaberServiceProvider end] */

void FUN_1039910ac(undefined8 param_1)

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



/* Entry: 1039910f0; end: 103991123;  */

void FUN_1039910f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103991124; end: 10399116b; -[SCBadgeRankerServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103991124(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbb7a8);
  func_0x000107c61610(param_1 + _DAT_112fbb7b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbb7b8));
  return;
}



/* Entry: 10399116c; end: 10399118b;  */

void FUN_10399116c(void)

{
  func_0x000107c61168(&PTR_PTR_112fbb800);
  return;
}



/* Entry: 10399118c; end: 103991197; -[SCSCChallengeOrchestrationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10399118c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbb868;
  func_0x000107c61428(param_1 + _DAT_112fbb868,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103991198; end: 1039911a3; -[SCSCChallengeOrchestrationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103991198(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbb868;
  func_0x000107c61428(param_1 + _DAT_112fbb868,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039911a4; end: 1039911af; -[SCSCChallengeOrchestrationServicesSaberServiceProvider activActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039911a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbb870;
  func_0x000107c61428(param_1 + _DAT_112fbb870,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039911b0; end: 1039911f3;  */

void FUN_1039911b0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039911f4; end: 1039911ff; -[SCSCChallengeOrchestrationServicesSaberServiceProvider setActivActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039911f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbb870;
  func_0x000107c61428(param_1 + _DAT_112fbb870,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103991200; end: 103991253;  */

void FUN_103991200(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103991254; end: 103991467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103991254(void)

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
    func_0x000107c3d018();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103990890();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fbb6b0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fbb878);
      *(long *)(unaff_x20 + _DAT_112fbb878) = lVar4;
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
                      "ActivActiveUserSessionScopeGraphBridge/SCSCChallengeOrchestrationServicesSaberServiceProvider.swift"
                      ,99,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103991380);
  (*pcVar1)();
}



/* Entry: 103991468; end: 10399149b; -[SCSCChallengeOrchestrationServicesSaberServiceProvider provide] */

void FUN_103991468(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103991254();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10399149c; end: 1039914cf; -[SCSCChallengeOrchestrationServicesSaberServiceProvider __safeProvide] */

void FUN_10399149c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103991380();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039914d0; end: 103991513; -[SCSCChallengeOrchestrationServicesSaberServiceProvider end] */

void FUN_1039914d0(undefined8 param_1)

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



/* Entry: 103991514; end: 1039916ab;  */

void FUN_103991514(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e810a0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f17ef60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ActivActiveUserSessionScopeGraphBridge/SCSCChallengeOrchestrationServicesSaberServiceProvider.swift"
                            ,99,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039916ac);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c521a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039916ac; end: 103991757; -[SCSCChallengeOrchestrationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039916ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103991514(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103991758; end: 1039917cb; -[SCSCChallengeOrchestrationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103991758(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbb868,0);
  func_0x000107c61614(param_1 + _DAT_112fbb870,0);
  *(undefined8 *)(param_1 + _DAT_112fbb878) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039917cc; end: 1039917ff;  */

void FUN_1039917cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103991800; end: 103991847; -[SCSCChallengeOrchestrationServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103991800(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbb868);
  func_0x000107c61610(param_1 + _DAT_112fbb870);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbb878));
  return;
}



/* Entry: 103991848; end: 103991867;  */

void FUN_103991848(void)

{
  func_0x000107c61168(&PTR_PTR_112fbb8c0);
  return;
}



/* Entry: 103991868; end: 103991873; -[SCSCContactsOSPermissionOnCameraServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103991868(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbb928;
  func_0x000107c61428(param_1 + _DAT_112fbb928,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103991874; end: 10399187f; -[SCSCContactsOSPermissionOnCameraServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103991874(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbb928;
  func_0x000107c61428(param_1 + _DAT_112fbb928,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103991880; end: 10399188b; -[SCSCContactsOSPermissionOnCameraServicesSaberServiceProvider activActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103991880(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbb930;
  func_0x000107c61428(param_1 + _DAT_112fbb930,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10399188c; end: 1039918cf;  */

void FUN_10399188c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039918d0; end: 1039918db; -[SCSCContactsOSPermissionOnCameraServicesSaberServiceProvider setActivActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039918d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbb930;
  func_0x000107c61428(param_1 + _DAT_112fbb930,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039918dc; end: 10399192f;  */

void FUN_1039918dc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103991930; end: 103991b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103991930(void)

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
    func_0x000107c3d018();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039909bc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fbb6b8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fbb938);
      *(long *)(unaff_x20 + _DAT_112fbb938) = lVar4;
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
                      "ActivActiveUserSessionScopeGraphBridge/SCSCContactsOSPermissionOnCameraServicesSaberServiceProvider.swift"
                      ,0x69,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103991a5c);
  (*pcVar1)();
}



/* Entry: 103991b44; end: 103991b77; -[SCSCContactsOSPermissionOnCameraServicesSaberServiceProvider provide] */

void FUN_103991b44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103991930();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103991b78; end: 103991bab; -[SCSCContactsOSPermissionOnCameraServicesSaberServiceProvider __safeProvide] */

void FUN_103991b78(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103991a5c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103991bac; end: 103991bef; -[SCSCContactsOSPermissionOnCameraServicesSaberServiceProvider end] */

void FUN_103991bac(undefined8 param_1)

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



/* Entry: 103991bf0; end: 103991d87;  */

void FUN_103991bf0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e810a0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f17ef60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ActivActiveUserSessionScopeGraphBridge/SCSCContactsOSPermissionOnCameraServicesSaberServiceProvider.swift"
                            ,0x69,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103991d88);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c521a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103991d88; end: 103991e33; -[SCSCContactsOSPermissionOnCameraServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103991d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103991bf0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103991e34; end: 103991ea7; -[SCSCContactsOSPermissionOnCameraServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103991e34(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbb928,0);
  func_0x000107c61614(param_1 + _DAT_112fbb930,0);
  *(undefined8 *)(param_1 + _DAT_112fbb938) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103991ea8; end: 103991edb;  */

void FUN_103991ea8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103991edc; end: 103991f23; -[SCSCContactsOSPermissionOnCameraServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103991edc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbb928);
  func_0x000107c61610(param_1 + _DAT_112fbb930);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbb938));
  return;
}



/* Entry: 103991f24; end: 103991f43;  */

void FUN_103991f24(void)

{
  func_0x000107c61168(&PTR_PTR_112fbb980);
  return;
}



/* Entry: 103991f44; end: 103991f4f; -[SCSCPermissionRequestServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103991f44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbb9e8;
  func_0x000107c61428(param_1 + _DAT_112fbb9e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103991f50; end: 103991f5b; -[SCSCPermissionRequestServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103991f50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbb9e8;
  func_0x000107c61428(param_1 + _DAT_112fbb9e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103991f5c; end: 103991f67; -[SCSCPermissionRequestServicesSaberServiceProvider activActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103991f5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbb9f0;
  func_0x000107c61428(param_1 + _DAT_112fbb9f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103991f68; end: 103991fab;  */

void FUN_103991f68(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103991fac; end: 103991fb7; -[SCSCPermissionRequestServicesSaberServiceProvider setActivActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103991fac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbb9f0;
  func_0x000107c61428(param_1 + _DAT_112fbb9f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103991fb8; end: 10399200b;  */

void FUN_103991fb8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10399200c; end: 10399221f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10399200c(void)

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
    func_0x000107c3d018();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103990ae8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fbb6c8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fbb9f8);
      *(long *)(unaff_x20 + _DAT_112fbb9f8) = lVar4;
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
                      "ActivActiveUserSessionScopeGraphBridge/SCSCPermissionRequestServicesSaberServiceProvider.swift"
                      ,0x5e,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103992138);
  (*pcVar1)();
}



/* Entry: 103992220; end: 103992253; -[SCSCPermissionRequestServicesSaberServiceProvider provide] */

void FUN_103992220(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10399200c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103992254; end: 103992287; -[SCSCPermissionRequestServicesSaberServiceProvider __safeProvide] */

void FUN_103992254(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103992138();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103992288; end: 1039922cb; -[SCSCPermissionRequestServicesSaberServiceProvider end] */

void FUN_103992288(undefined8 param_1)

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



/* Entry: 1039922cc; end: 103992463;  */

void FUN_1039922cc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e810a0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f17ef60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ActivActiveUserSessionScopeGraphBridge/SCSCPermissionRequestServicesSaberServiceProvider.swift"
                            ,0x5e,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103992464);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c521a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103992464; end: 10399250f; -[SCSCPermissionRequestServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103992464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039922cc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103992510; end: 103992583; -[SCSCPermissionRequestServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103992510(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbb9e8,0);
  func_0x000107c61614(param_1 + _DAT_112fbb9f0,0);
  *(undefined8 *)(param_1 + _DAT_112fbb9f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103992584; end: 1039925b7;  */

void FUN_103992584(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039925b8; end: 1039925ff; -[SCSCPermissionRequestServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039925b8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbb9e8);
  func_0x000107c61610(param_1 + _DAT_112fbb9f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbb9f8));
  return;
}



/* Entry: 103992600; end: 10399261f;  */

void FUN_103992600(void)

{
  func_0x000107c61168(&PTR_PTR_112fbba40);
  return;
}



/* Entry: 103992620; end: 1039926bf;  */

void FUN_103992620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1039926c0; end: 1039926df;  */

void FUN_1039926c0(void)

{
  func_0x000103992664();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039926e0; end: 1039926ef; -[SCBadgeRankerHandle resultObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039926e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbbaa8));
  return;
}



/* Entry: 1039926f0; end: 103992897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039926f0(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  *(long *)(unaff_x20 + _DAT_112fbbab0) = param_1;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = 0;
  FUN_10399379c(0);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(uVar4);
  pcVar2 = FUN_103992898;
  func_0x0001000bfde0(FUN_103992898,0,uVar1);
  func_0x000107c61574();
  func_0x0001004575f0();
  func_0x000107c61574(pcVar2);
  *(undefined8 *)(unaff_x20 + _DAT_112fbbaa8) = uVar4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar3;
}



/* Entry: 103992898; end: 103992967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103992898(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_50;
  lVar5 = *param_2;
  if (lVar5 == 0) {
    lVar2 = 0;
    FUN_10399379c();
    lVar5 = lVar2;
    func_0x000107c610f8();
    *(undefined1 *)(lVar5 + _DAT_112fbbba0) = 0;
    *(undefined8 *)(lVar5 + _DAT_112fbbba8) = 0;
    plVar3 = &lStack_40;
    puVar4 = PTR_s_init_1125d9248;
    lStack_40 = lVar5;
    lStack_38 = lVar2;
  }
  else {
    lVar1 = 0;
    FUN_10399379c();
    lVar2 = lVar1;
    func_0x000107c610f8();
    *(undefined1 *)(lVar2 + _DAT_112fbbba0) = 1;
    *(long *)(lVar2 + _DAT_112fbbba8) = lVar5;
    puVar4 = PTR_s_init_1125d9248;
    lStack_50 = lVar2;
    lStack_48 = lVar1;
    func_0x000107c61174(lVar5);
  }
  func_0x000107c61154(plVar3,puVar4);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 103992968; end: 1039929c7; -[SCBadgeRankerHandle init] */

void FUN_103992968(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BadgeRankerServices.SCBadgeRankerHandle",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103992994);
  (*pcVar1)();
}



/* Entry: 1039929c8; end: 1039929ff; -[SCBadgeRankerHandle .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039929c8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fbbaa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbbab0));
  return;
}



/* Entry: 103992a00; end: 103992a03;  */

void FUN_103992a00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 103992a04; end: 103992a4f;  */

void FUN_103992a04(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBoWV_11034d678 + 0x40;
  puStack_18 = &UNK_10dc2d798;
  func_0x000107c61524(param_1,0,2,&puStack_20,param_1 + 0x58);
  return;
}



/* Entry: 103992a50; end: 103992a5b;  */

void FUN_103992a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e793f6c);
  return;
}



/* Entry: 103992a5c; end: 103992a7b;  */

void FUN_103992a5c(void)

{
  func_0x000107c61168(&PTR_PTR_112909be8);
  return;
}



/* Entry: 103992a7c; end: 103992adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103992a7c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbbb60) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fbbb68) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103992ae0; end: 103992b3f; -[_TtC19BadgeRankerServices19BadgeRankerServices init] */

void FUN_103992ae0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BadgeRankerServices.BadgeRankerServices",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103992b0c);
  (*pcVar1)();
}



/* Entry: 103992b40; end: 103992b77; -[_TtC19BadgeRankerServices19BadgeRankerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103992b40(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fbbb60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbbb68));
  return;
}



/* Entry: 103992b78; end: 103992b8b;  */

bool FUN_103992b78(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103992b8c; end: 103992c63;  */

void FUN_103992b8c(void)

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



/* Entry: 103992c64; end: 103992c6f;  */

void FUN_103992c64(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103992c70; end: 103992d6b;  */

undefined1  [16] FUN_103992c70(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 3) {
    if (lStack_18 == 0) {
      uVar3 = 0xe400000000000000;
      uVar2 = 0x74616863;
    }
    else if (lStack_18 == 1) {
      uVar2 = 0x6e69646e65697266;
      uVar3 = 0xe900000000000067;
    }
    else {
      if (lStack_18 != 2) {
LAB_103992d50:
        func_0x000107c60614(param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103992d6c);
        (*pcVar1)();
      }
      uVar3 = 0xe800000000000000;
      uVar2 = 0x7265766f63736964;
    }
  }
  else if (lStack_18 == 3) {
    uVar3 = 0xe800000000000000;
    uVar2 = 0x736569726f6d656d;
  }
  else if (lStack_18 == 4) {
    uVar3 = 0xe900000000000074;
    uVar2 = 0x6867696c746f7073;
  }
  else {
    if (lStack_18 != 5) goto LAB_103992d50;
    uVar3 = 0xe700000000000000;
    uVar2 = 0x656c69666f7270;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 103992d6c; end: 103992d7f;  */

undefined1  [16] FUN_103992d6c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = param_1;
  }
  auVar2[8] = 5 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103992d80; end: 103992dbf;  */

void FUN_103992d80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbbb98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2d810;
  func_0x000107c61520(&UNK_10dc2d810,&UNK_1106b5710);
  puRam0000000112fbbb98 = puVar1;
  return;
}



/* Entry: 103992dc0; end: 103992dcf;  */

undefined1  [16] FUN_103992dc0(void)

{
  return ZEXT816(0x1106b5710);
}



/* Entry: 103992dd0; end: 103992e6b;  */

bool FUN_103992dd0(long param_1)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))(puVar2);
  puVar1 = puVar2;
  (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + -8) + 0x30))(puVar2,1);
  (**(code **)(lVar3 + 8))(puVar2,param_1);
  return (int)puVar1 != 1;
}



/* Entry: 103992e6c; end: 103992e7b; -[SCBadgeUpdateEmission isActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103992e6c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fbbba0);
}



/* Entry: 103992e7c; end: 103992e8b; -[SCBadgeUpdateEmission value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103992e7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbbba8));
  return;
}



/* Entry: 103992e8c; end: 103992ef7; +[SCBadgeUpdateEmission active:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103992e8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112fbbba0) = 1;
  *(undefined8 *)(lVar2 + _DAT_112fbbba8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103992ef8; end: 103992f4f; +[SCBadgeUpdateEmission notActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103992ef8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112fbbba0) = 0;
  *(undefined8 *)(lVar1 + _DAT_112fbbba8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103992f50; end: 103992faf; -[SCBadgeUpdateEmission init] */

void FUN_103992f50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BadgeRankerServices.SCBadgeUpdateEmission",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103992f7c);
  (*pcVar1)();
}



/* Entry: 103992fb0; end: 103992fc7; -[SCBadgeUpdateEmission .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103992fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbbba8));
  return;
}



/* Entry: 103992fc8; end: 10399301f;  */

void FUN_103992fc8(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    func_0x000107c61530(param_1,0,*(long *)(lVar1 + -8) + 0x40,1);
  }
  return;
}



/* Entry: 103993020; end: 103993103;  */

long * FUN_103993020(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(ulong *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    uVar2 = uVar2 + 1;
  }
  uVar3 = (ulong)*(uint *)(lVar5 + 0x50) & 0xff;
  if (((uint)uVar3 < 8 && (*(uint *)(lVar5 + 0x50) & 0x100000) == 0) && uVar2 < 0x19) {
    plVar1 = param_2;
    (**(code **)(lVar5 + 0x30))(param_2,1,lVar4);
    if ((int)plVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar2);
      return param_1;
    }
    (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar4);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103993104; end: 1039931ff;  */

void FUN_103993104(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(lVar2 + -8);
  uVar1 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,1,lVar2);
  if ((int)uVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010399315c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,lVar2);
  return;
}



/* Entry: 103993200; end: 1039932eb;  */

undefined8 FUN_103993200(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(lVar3 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  uVar1 = param_1;
  (*pcVar5)(param_1,1,lVar3);
  uVar2 = param_2;
  (*pcVar5)(param_2,1,lVar3);
  if ((int)uVar1 == 0) {
    if ((int)uVar2 != 0) {
      (**(code **)(lVar4 + 8))(param_1,lVar3);
      goto LAB_103993294;
    }
    (**(code **)(lVar4 + 0x18))(param_1,param_2,lVar3);
  }
  else {
    if ((int)uVar2 != 0) {
LAB_103993294:
      lVar3 = *(long *)(lVar4 + 0x40);
      if (*(int *)(lVar4 + 0x54) == 0) {
        lVar3 = lVar3 + 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar3);
      return param_1;
    }
    (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar3);
    (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar3);
  }
  return param_1;
}



/* Entry: 1039932ec; end: 10399338b;  */

undefined8 FUN_1039932ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(lVar2 + -8);
  uVar1 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,1,lVar2);
  if ((int)uVar1 != 0) {
    lVar2 = *(long *)(lVar3 + 0x40);
    if (*(int *)(lVar3 + 0x54) == 0) {
      lVar2 = lVar2 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar2);
    return param_1;
  }
  (**(code **)(lVar3 + 0x20))(param_1,param_2,lVar2);
  (**(code **)(lVar3 + 0x38))(param_1,0,1,lVar2);
  return param_1;
}



/* Entry: 10399338c; end: 103993477;  */

undefined8 FUN_10399338c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(lVar3 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  uVar1 = param_1;
  (*pcVar5)(param_1,1,lVar3);
  uVar2 = param_2;
  (*pcVar5)(param_2,1,lVar3);
  if ((int)uVar1 == 0) {
    if ((int)uVar2 != 0) {
      (**(code **)(lVar4 + 8))(param_1,lVar3);
      goto LAB_103993420;
    }
    (**(code **)(lVar4 + 0x28))(param_1,param_2,lVar3);
  }
  else {
    if ((int)uVar2 != 0) {
LAB_103993420:
      lVar3 = *(long *)(lVar4 + 0x40);
      if (*(int *)(lVar4 + 0x54) == 0) {
        lVar3 = lVar3 + 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar3);
      return param_1;
    }
    (**(code **)(lVar4 + 0x20))(param_1,param_2,lVar3);
    (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar3);
  }
  return param_1;
}



/* Entry: 103993478; end: 10399359f;  */

int FUN_103993478(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = uVar3 - 1;
  }
  lVar7 = *(long *)(lVar5 + 0x40);
  if (uVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_10399351c;
  uVar6 = (uint)lVar7;
  uVar4 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_10399351c;
      goto LAB_1039934b4;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + lVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + lVar7);
    }
  }
  else {
LAB_1039934b4:
    uVar8 = (uint)*(byte *)((long)param_1 + lVar7);
  }
  if (uVar8 != 0) {
    uVar3 = 0;
    if (uVar6 < 4) {
      uVar3 = uVar8 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 4;
      if (uVar6 < 4) {
        uVar4 = uVar6;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar4 = (uint)(byte)*param_1;
        }
        else {
          uVar4 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar4 = (uint)(uint3)*param_1;
      }
      else {
        uVar4 = *param_1;
      }
    }
    return uVar1 + (uVar4 | uVar3) + 1;
  }
LAB_10399351c:
  if (uVar3 < 2) {
    return 0;
  }
  (**(code **)(lVar5 + 0x30))();
  iVar2 = 0;
  if ((int)param_1 != 0) {
    iVar2 = (int)param_1 + -1;
  }
  return iVar2;
}



/* Entry: 1039935a0; end: 103993763;  */

void FUN_1039935a0(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  
  bVar9 = 0;
  lVar5 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar3 - 1;
  }
  lVar6 = *(long *)(lVar5 + 0x40);
  if (uVar3 == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar7 = (uint)lVar6;
  if (uVar2 <= param_3 && param_3 - uVar2 != 0) {
    if (uVar7 < 4) {
      uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar7 << 3 & 0x1f)) >> (ulong)(uVar7 << 3 & 0x1f)
              ) + 1;
      bVar9 = 2;
      if (0xffff < uVar1) {
        bVar9 = 4;
      }
      if (uVar1 < 0x100) {
        bVar9 = 1 < uVar1;
      }
    }
    else {
      bVar9 = 1;
    }
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar7 < 4) {
      iVar8 = (param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + 1;
      if (uVar7 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        func_0x000107c60ee4(param_1,lVar6);
        uVar4 = (undefined2)uVar2;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar7 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      func_0x000107c60ee4(param_1,lVar6);
      *param_1 = param_2;
      iVar8 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + lVar6) = (char)iVar8;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + lVar6) = (short)iVar8;
    }
    else {
      *(int *)((long)param_1 + lVar6) = iVar8;
    }
  }
  else {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(undefined1 *)((long)param_1 + lVar6) = 0;
      }
    }
    else if (bVar9 == 2) {
      *(undefined2 *)((long)param_1 + lVar6) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar6) = 0;
    }
    if ((param_2 != 0) && (1 < uVar3)) {
                    /* WARNING: Could not recover jumptable at 0x000103993700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x38))(param_1,param_2 + 1);
      return;
    }
  }
  return;
}



/* Entry: 103993764; end: 10399379b;  */

void FUN_103993764(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000103993774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x30))(param_1,1);
  return;
}



/* Entry: 10399379c; end: 1039937bb;  */

void FUN_10399379c(void)

{
  func_0x000107c61168(&PTR_PTR_112909d78);
  return;
}



/* Entry: 1039937bc; end: 1039937cf;  */

bool FUN_1039937bc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1039937d0; end: 10399387b;  */

void FUN_1039937d0(void)

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



/* Entry: 10399387c; end: 1039938a3;  */

void FUN_10399387c(ulong *param_1,ulong *param_2)

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



/* Entry: 1039938a4; end: 1039938ff;  */

undefined4 FUN_1039938a4(undefined8 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long *unaff_x20;
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar1 = 0x68737570;
  }
  else {
    if (lStack_18 != 1) {
      func_0x000107c60614(param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103993900);
      (*pcVar2)();
    }
    uVar1 = 0x6c6c7570;
  }
  return uVar1;
}


