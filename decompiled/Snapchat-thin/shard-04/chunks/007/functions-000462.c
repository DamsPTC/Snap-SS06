/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1037c0044; end: 1037c00df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c0044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f952e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f952e8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f952f0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f952f8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f95300) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037c00e0; end: 1037c013f; -[_TtC33AdlUserNavigationScopeGraphBridge41AdlUserNavigationScopeGraphBridgeServices init] */

void FUN_1037c00e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdlUserNavigationScopeGraphBridge.AdlUserNavigationScopeGraphBridgeServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c010c);
  (*pcVar1)();
}



/* Entry: 1037c0140; end: 1037c0203; -[_TtC33AdlUserNavigationScopeGraphBridge41AdlUserNavigationScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037c015c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037c017c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037c0160) */
/* WARNING: Removing unreachable block (ram,0x0001037c0180) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c0140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f952e0));
  return;
}



/* Entry: 1037c0204; end: 1037c023b;  */

undefined1  [16] FUN_1037c0204(void)

{
  return ZEXT816(0x110695d38);
}



/* Entry: 1037c023c; end: 1037c027f; -[SCAdlUserNavigationScopeGraphBridgeSaberEntryPoint end] */

void FUN_1037c023c(undefined8 param_1)

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



/* Entry: 1037c0280; end: 1037c02b3;  */

void FUN_1037c0280(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037c02b4; end: 1037c02fb; -[SCAdlUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037c02e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037c02e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c02b4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f95358);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f95360));
  return;
}



/* Entry: 1037c02fc; end: 1037c031b;  */

void FUN_1037c02fc(void)

{
  func_0x000107c61168(&PTR_PTR_1128ec410);
  return;
}



/* Entry: 1037c031c; end: 1037c035f; -[SCCallUILaunchingServicesSaberEntryPoint end] */

void FUN_1037c031c(undefined8 param_1)

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



/* Entry: 1037c0360; end: 1037c0393;  */

void FUN_1037c0360(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037c0394; end: 1037c03eb; -[SCCallUILaunchingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037c03d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037c03d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c0394(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f95398);
  func_0x000107c61610(param_1 + _DAT_112f953a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f953a8));
  return;
}



/* Entry: 1037c03ec; end: 1037c040b;  */

void FUN_1037c03ec(void)

{
  func_0x000107c61168(&PTR_PTR_1128ec4d8);
  return;
}



/* Entry: 1037c040c; end: 1037c044f; -[SCSCCustomStatusBarStyleContextServicesSaberEntryPoint end] */

void FUN_1037c040c(undefined8 param_1)

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



/* Entry: 1037c0450; end: 1037c0483;  */

void FUN_1037c0450(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037c0484; end: 1037c04db; -[SCSCCustomStatusBarStyleContextServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037c04c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037c04c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c0484(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f953e0);
  func_0x000107c61610(param_1 + _DAT_112f953e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f953f0));
  return;
}



/* Entry: 1037c04dc; end: 1037c04fb;  */

void FUN_1037c04dc(void)

{
  func_0x000107c61168(&PTR_PTR_1128ec5a8);
  return;
}



/* Entry: 1037c04fc; end: 1037c0507; -[SCTalkScreenshotSendingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c04fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f95428;
  func_0x000107c61428(param_1 + _DAT_112f95428,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037c0508; end: 1037c0513; -[SCTalkScreenshotSendingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c0508(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f95428;
  func_0x000107c61428(param_1 + _DAT_112f95428,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c0514; end: 1037c051f; -[SCTalkScreenshotSendingServicesSaberServiceProvider adlUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c0514(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f95430;
  func_0x000107c61428(param_1 + _DAT_112f95430,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037c0520; end: 1037c0563;  */

void FUN_1037c0520(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037c0564; end: 1037c056f; -[SCTalkScreenshotSendingServicesSaberServiceProvider setAdlUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c0564(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f95430;
  func_0x000107c61428(param_1 + _DAT_112f95430,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c0570; end: 1037c05c3;  */

void FUN_1037c0570(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c05c4; end: 1037c07d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037c05c4(void)

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
    func_0x000107c3d9cc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037bfd50();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f95300);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f95438);
      *(long *)(unaff_x20 + _DAT_112f95438) = lVar4;
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
                      "AdlUserNavigationScopeGraphBridge/SCTalkScreenshotSendingServicesSaberServiceProvider.swift"
                      ,0x5b,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c06f0);
  (*pcVar1)();
}



/* Entry: 1037c07d8; end: 1037c080b; -[SCTalkScreenshotSendingServicesSaberServiceProvider provide] */

void FUN_1037c07d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037c05c4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037c080c; end: 1037c083f; -[SCTalkScreenshotSendingServicesSaberServiceProvider __safeProvide] */

void FUN_1037c080c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037c06f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037c0840; end: 1037c0883; -[SCTalkScreenshotSendingServicesSaberServiceProvider end] */

void FUN_1037c0840(undefined8 param_1)

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



/* Entry: 1037c0884; end: 1037c0a1b;  */

void FUN_1037c0884(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e97af0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f168510,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdlUserNavigationScopeGraphBridge/SCTalkScreenshotSendingServicesSaberServiceProvider.swift"
                            ,0x5b,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c0a1c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52530();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037c0a1c; end: 1037c0ac7; -[SCTalkScreenshotSendingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037c0a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037c0884(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037c0ac8; end: 1037c0b3b; -[SCTalkScreenshotSendingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c0ac8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f95428,0);
  func_0x000107c61614(param_1 + _DAT_112f95430,0);
  *(undefined8 *)(param_1 + _DAT_112f95438) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037c0b3c; end: 1037c0b6f;  */

void FUN_1037c0b3c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037c0b70; end: 1037c0bb7; -[SCTalkScreenshotSendingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c0b70(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f95428);
  func_0x000107c61610(param_1 + _DAT_112f95430);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f95438));
  return;
}



/* Entry: 1037c0bb8; end: 1037c0bd7;  */

void FUN_1037c0bb8(void)

{
  func_0x000107c61168(&PTR_PTR_112f95480);
  return;
}



/* Entry: 1037c0bd8; end: 1037c0be3; -[SCSCCallLauncherServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c0bd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f954e8;
  func_0x000107c61428(param_1 + _DAT_112f954e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037c0be4; end: 1037c0bef; -[SCSCCallLauncherServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c0be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f954e8;
  func_0x000107c61428(param_1 + _DAT_112f954e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c0bf0; end: 1037c0bfb; -[SCSCCallLauncherServicesSaberServiceProvider adlUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c0bf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f954f0;
  func_0x000107c61428(param_1 + _DAT_112f954f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037c0bfc; end: 1037c0c3f;  */

void FUN_1037c0bfc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037c0c40; end: 1037c0c4b; -[SCSCCallLauncherServicesSaberServiceProvider setAdlUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c0c40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f954f0;
  func_0x000107c61428(param_1 + _DAT_112f954f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c0c4c; end: 1037c0c9f;  */

void FUN_1037c0c4c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c0ca0; end: 1037c0eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037c0ca0(void)

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
    func_0x000107c3d9cc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037bfe7c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f952e8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f954f8);
      *(long *)(unaff_x20 + _DAT_112f954f8) = lVar4;
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
                      "AdlUserNavigationScopeGraphBridge/SCSCCallLauncherServicesSaberServiceProvider.swift"
                      ,0x54,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c0dcc);
  (*pcVar1)();
}



/* Entry: 1037c0eb4; end: 1037c0ee7; -[SCSCCallLauncherServicesSaberServiceProvider provide] */

void FUN_1037c0eb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037c0ca0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037c0ee8; end: 1037c0f1b; -[SCSCCallLauncherServicesSaberServiceProvider __safeProvide] */

void FUN_1037c0ee8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037c0dcc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037c0f1c; end: 1037c0f5f; -[SCSCCallLauncherServicesSaberServiceProvider end] */

void FUN_1037c0f1c(undefined8 param_1)

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



/* Entry: 1037c0f60; end: 1037c10f7;  */

void FUN_1037c0f60(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e97af0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f168510,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdlUserNavigationScopeGraphBridge/SCSCCallLauncherServicesSaberServiceProvider.swift"
                            ,0x54,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c10f8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52530();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037c10f8; end: 1037c11a3; -[SCSCCallLauncherServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037c10f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037c0f60(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037c11a4; end: 1037c1217; -[SCSCCallLauncherServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c11a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f954e8,0);
  func_0x000107c61614(param_1 + _DAT_112f954f0,0);
  *(undefined8 *)(param_1 + _DAT_112f954f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037c1218; end: 1037c124b;  */

void FUN_1037c1218(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037c124c; end: 1037c1293; -[SCSCCallLauncherServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c124c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f954e8);
  func_0x000107c61610(param_1 + _DAT_112f954f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f954f8));
  return;
}



/* Entry: 1037c1294; end: 1037c12b3;  */

void FUN_1037c1294(void)

{
  func_0x000107c61168(&PTR_PTR_112f95540);
  return;
}



/* Entry: 1037c12b4; end: 1037c12bf; -[SCSCCustomStatusBarScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c12b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f955a8;
  func_0x000107c61428(param_1 + _DAT_112f955a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037c12c0; end: 1037c12cb; -[SCSCCustomStatusBarScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c12c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f955a8;
  func_0x000107c61428(param_1 + _DAT_112f955a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c12cc; end: 1037c12d7; -[SCSCCustomStatusBarScopeServicesSaberServiceProvider adlUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c12cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f955b0;
  func_0x000107c61428(param_1 + _DAT_112f955b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037c12d8; end: 1037c131b;  */

void FUN_1037c12d8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037c131c; end: 1037c1327; -[SCSCCustomStatusBarScopeServicesSaberServiceProvider setAdlUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c131c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f955b0;
  func_0x000107c61428(param_1 + _DAT_112f955b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c1328; end: 1037c137b;  */

void FUN_1037c1328(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c137c; end: 1037c158f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037c137c(void)

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
    func_0x000107c3d9cc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037bffa8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f952f0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f955b8);
      *(long *)(unaff_x20 + _DAT_112f955b8) = lVar4;
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
                      "AdlUserNavigationScopeGraphBridge/SCSCCustomStatusBarScopeServicesSaberServiceProvider.swift"
                      ,0x5c,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c14a8);
  (*pcVar1)();
}



/* Entry: 1037c1590; end: 1037c15c3; -[SCSCCustomStatusBarScopeServicesSaberServiceProvider provide] */

void FUN_1037c1590(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037c137c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037c15c4; end: 1037c15f7; -[SCSCCustomStatusBarScopeServicesSaberServiceProvider __safeProvide] */

void FUN_1037c15c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037c14a8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037c15f8; end: 1037c163b; -[SCSCCustomStatusBarScopeServicesSaberServiceProvider end] */

void FUN_1037c15f8(undefined8 param_1)

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



/* Entry: 1037c163c; end: 1037c17d3;  */

void FUN_1037c163c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e97af0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f168510,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdlUserNavigationScopeGraphBridge/SCSCCustomStatusBarScopeServicesSaberServiceProvider.swift"
                            ,0x5c,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c17d4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52530();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037c17d4; end: 1037c187f; -[SCSCCustomStatusBarScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037c17d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037c163c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037c1880; end: 1037c18f3; -[SCSCCustomStatusBarScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c1880(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f955a8,0);
  func_0x000107c61614(param_1 + _DAT_112f955b0,0);
  *(undefined8 *)(param_1 + _DAT_112f955b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037c18f4; end: 1037c1927;  */

void FUN_1037c18f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037c1928; end: 1037c196f; -[SCSCCustomStatusBarScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c1928(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f955a8);
  func_0x000107c61610(param_1 + _DAT_112f955b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f955b8));
  return;
}



/* Entry: 1037c1970; end: 1037c198f;  */

void FUN_1037c1970(void)

{
  func_0x000107c61168(&PTR_PTR_112f95600);
  return;
}



/* Entry: 1037c1990; end: 1037c19fb;  */

void FUN_1037c1990(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110695e50;
  if (lRam0000000112f95668 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f95668 = param_1;
  }
  return;
}



/* Entry: 1037c19fc; end: 1037c1a1b; -[TalkScreenshotSendingServices talkScreenshotSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c19fc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f95678));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037c1a1c; end: 1037c1ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c1a1c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f95678) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037c1ab4; end: 1037c1b0b; -[TalkScreenshotSendingServices initWithTalkScreenshotSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c1ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f95678) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1037c1b0c; end: 1037c1b6b; -[TalkScreenshotSendingServices init] */

void FUN_1037c1b0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TalkScreenshotSendingServices.TalkScreenshotSendingServices",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c1b38);
  (*pcVar1)();
}



/* Entry: 1037c1b6c; end: 1037c1b7b; -[TalkScreenshotSendingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c1b6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f95678));
  return;
}



/* Entry: 1037c1b7c; end: 1037c28e3;  */

long FUN_1037c1b7c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1037c28e4; end: 1037c28f3; -[SCTalkScreenshotMetadata lensMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c28e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f956a8));
  return;
}



/* Entry: 1037c28f4; end: 1037c293f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c28f4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f956a8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037c2940; end: 1037c2997; -[SCTalkScreenshotMetadata initWithLensMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c2940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f956a8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1037c2998; end: 1037c2aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c2998(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined1 auStack_210 [8];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  func_0x000107c610f8();
  uStack_78 = param_1[0x15];
  uStack_80 = param_1[0x14];
  uStack_68 = param_1[0x17];
  uStack_70 = param_1[0x16];
  uStack_60 = param_1[0x18];
  uStack_58 = (undefined1)param_1[0x19];
  uStack_4f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_98 = param_1[0x11];
  uStack_a0 = param_1[0x10];
  uStack_88 = param_1[0x13];
  uStack_90 = param_1[0x12];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  iVar1 = (int)&uStack_120;
  FUN_1037c2ab0();
  if (iVar1 == 1) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uStack_158 = uStack_78;
    uStack_160 = uStack_80;
    uStack_148 = uStack_68;
    uStack_150 = uStack_70;
    uStack_138 = uStack_58;
    uStack_140 = uStack_60;
    uStack_12f = uStack_4f;
    uStack_137 = uStack_57;
    uStack_130 = uStack_50;
    uStack_198 = uStack_b8;
    uStack_1a0 = uStack_c0;
    uStack_188 = uStack_a8;
    uStack_190 = uStack_b0;
    uStack_178 = uStack_98;
    uStack_180 = uStack_a0;
    uStack_168 = uStack_88;
    uStack_170 = uStack_90;
    uStack_1d8 = uStack_f8;
    uStack_1e0 = uStack_100;
    uStack_1c8 = uStack_e8;
    uStack_1d0 = uStack_f0;
    uStack_1b8 = uStack_d8;
    uStack_1c0 = uStack_e0;
    uStack_1a8 = uStack_c8;
    uStack_1b0 = uStack_d0;
    uStack_1f8 = uStack_118;
    uStack_200 = uStack_120;
    uStack_1e8 = uStack_108;
    uStack_1f0 = uStack_110;
    FUN_1037c3a30(0);
    func_0x000107c610f8();
    puVar2 = &uStack_200;
    FUN_1037c34a8();
  }
  *(undefined8 **)(unaff_x20 + _DAT_112f956a8) = puVar2;
  func_0x000107c61154(auStack_210,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037c2ab0; end: 1037c2ac7;  */

int FUN_1037c2ab0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1037c2ac8; end: 1037c2acb; -[SCTalkScreenshotMetadata copyWithZone:] */

void FUN_1037c2ac8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1037c2acc; end: 1037c2b23; -[SCTalkScreenshotMetadata description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c2acc(long param_1)

{
  undefined1 auStack_f0 [224];
  
  if (*(long *)(param_1 + _DAT_112f956a8) == 0) {
    func_0x0001037c2bb0(auStack_f0);
  }
  else {
    FUN_1037c3850(auStack_f0);
    FUN_1037c2c0c(auStack_f0);
  }
  FUN_1037c2bd8(auStack_f0);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037c2b24; end: 1037c2b9f; -[SCTalkScreenshotMetadata init] */

void FUN_1037c2b24(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "TalkScreenshotSendingServices/TalkScreenshotMetadataWrapper.swift",0x41,2,
                      0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c2b6c);
  (*pcVar1)();
}



/* Entry: 1037c2ba0; end: 1037c2bd7; -[SCTalkScreenshotMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c2ba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f956a8));
  return;
}



/* Entry: 1037c2bd8; end: 1037c2c0b;  */

undefined8 FUN_1037c2bd8(undefined8 param_1)

{
  (*(code *)(undefined *)0x1037c1ba8)();
  return param_1;
}



/* Entry: 1037c2c0c; end: 1037c2c0f;  */

void FUN_1037c2c0c(void)

{
  return;
}



/* Entry: 1037c2c10; end: 1037c2c2f;  */

void FUN_1037c2c10(void)

{
  func_0x000107c61168(&PTR_PTR_1128ec810);
  return;
}



/* Entry: 1037c2c30; end: 1037c2c5f;  */

void FUN_1037c2c30(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_1037c34a8(param_1);
  return;
}



/* Entry: 1037c2c60; end: 1037c2c6b; -[SCTalkScreenshotLensMetadata lensSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c2c60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f956d8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f956d8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037c2c6c; end: 1037c2cb7; -[SCTalkScreenshotLensMetadata lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c2c6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f956e0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f956e0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037c2cb8; end: 1037c2cc7; -[SCTalkScreenshotLensMetadata lensType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037c2cb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f956e8);
}



/* Entry: 1037c2cc8; end: 1037c2cd7; -[SCTalkScreenshotLensMetadata lensSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037c2cc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f956f0);
}



/* Entry: 1037c2cd8; end: 1037c2ce3; -[SCTalkScreenshotLensMetadata lensOptionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c2cd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f956f8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f956f8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037c2ce4; end: 1037c2cf3; -[SCTalkScreenshotLensMetadata lensOptionSourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037c2ce4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f95700);
}



/* Entry: 1037c2cf4; end: 1037c2cff; -[SCTalkScreenshotLensMetadata targetingCampaignId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c2cf4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f95708))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f95708);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037c2d00; end: 1037c2d0f; -[SCTalkScreenshotLensMetadata faceBackCameraCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037c2d00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f95710);
}



/* Entry: 1037c2d10; end: 1037c2d1f; -[SCTalkScreenshotLensMetadata faceFrontCameraCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037c2d10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f95718);
}



/* Entry: 1037c2d20; end: 1037c2d2b; -[SCTalkScreenshotLensMetadata lensBundleUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c2d20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f95720))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f95720);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037c2d2c; end: 1037c2d3b; -[SCTalkScreenshotLensMetadata lensIndexCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037c2d2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f95728);
}



/* Entry: 1037c2d3c; end: 1037c2d4b; -[SCTalkScreenshotLensMetadata lensIndexPos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037c2d3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f95730);
}



/* Entry: 1037c2d4c; end: 1037c2d57; -[SCTalkScreenshotLensMetadata lensNamespace] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c2d4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f95738))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f95738);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037c2d58; end: 1037c2d63; -[SCTalkScreenshotLensMetadata rankingId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c2d58(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f95740))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f95740);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037c2d64; end: 1037c2d6f; -[SCTalkScreenshotLensMetadata rankingData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c2d64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f95748))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f95748);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037c2d70; end: 1037c2d7b; -[SCTalkScreenshotLensMetadata adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c2d70(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f95750))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f95750);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


