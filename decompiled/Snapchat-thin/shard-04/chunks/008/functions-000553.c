/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10392fdcc; end: 10392fdd3;  */

void FUN_10392fdcc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10392fdd4; end: 10392fe73;  */

void FUN_10392fdd4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10392fe74; end: 10392fe93;  */

void FUN_10392fe74(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10392fe94; end: 10392ff1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10392fe94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb1c58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fb1c60) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fb1c68) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fb1c70) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10392ff20; end: 10392ff7f; -[_TtC34PushUserNavigationScopeGraphBridge42PushUserNavigationScopeGraphBridgeServices init] */

void FUN_10392ff20(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PushUserNavigationScopeGraphBridge.PushUserNavigationScopeGraphBridgeServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10392ff4c);
  (*pcVar1)();
}



/* Entry: 10392ff80; end: 103930033; -[_TtC34PushUserNavigationScopeGraphBridge42PushUserNavigationScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010392ff9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010392ffbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010392ffa0) */
/* WARNING: Removing unreachable block (ram,0x00010392ffc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10392ff80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb1c70));
  return;
}



/* Entry: 103930034; end: 10393006b;  */

undefined1  [16] FUN_103930034(void)

{
  return ZEXT816(0x1106aead0);
}



/* Entry: 10393006c; end: 1039300af; -[SCPushUserNavigationScopeGraphBridgeSaberEntryPoint end] */

void FUN_10393006c(undefined8 param_1)

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



/* Entry: 1039300b0; end: 1039300e3;  */

void FUN_1039300b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039300e4; end: 10393012b; -[SCPushUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103930110: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103930114) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039300e4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb1cc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb1cd0));
  return;
}



/* Entry: 10393012c; end: 10393014b;  */

void FUN_10393012c(void)

{
  func_0x000107c61168(&PTR_PTR_112902658);
  return;
}



/* Entry: 10393014c; end: 10393018f; -[SCSCNotificationCustomUIServicesSaberEntryPoint end] */

void FUN_10393014c(undefined8 param_1)

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



/* Entry: 103930190; end: 1039301c3;  */

void FUN_103930190(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039301c4; end: 10393021b; -[SCSCNotificationCustomUIServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103930200: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103930204) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039301c4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb1d08);
  func_0x000107c61610(param_1 + _DAT_112fb1d10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb1d18));
  return;
}



/* Entry: 10393021c; end: 10393023b;  */

void FUN_10393021c(void)

{
  func_0x000107c61168(&PTR_PTR_112902720);
  return;
}



/* Entry: 10393023c; end: 103930247; -[SCNotificationCenterFactoryServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393023c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb1d50;
  func_0x000107c61428(param_1 + _DAT_112fb1d50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103930248; end: 103930253; -[SCNotificationCenterFactoryServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103930248(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb1d50;
  func_0x000107c61428(param_1 + _DAT_112fb1d50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103930254; end: 10393025f; -[SCNotificationCenterFactoryServicesSaberServiceProvider pushUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103930254(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb1d58;
  func_0x000107c61428(param_1 + _DAT_112fb1d58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103930260; end: 1039302a3;  */

void FUN_103930260(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039302a4; end: 1039302af; -[SCNotificationCenterFactoryServicesSaberServiceProvider setPushUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039302a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb1d58;
  func_0x000107c61428(param_1 + _DAT_112fb1d58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039302b0; end: 103930303;  */

void FUN_1039302b0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103930304; end: 103930517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103930304(void)

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
    func_0x000107c4f6e4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010392fba0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fb1c58);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fb1d60);
      *(long *)(unaff_x20 + _DAT_112fb1d60) = lVar4;
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
                      "PushUserNavigationScopeGraphBridge/SCNotificationCenterFactoryServicesSaberServiceProvider.swift"
                      ,0x60,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103930430);
  (*pcVar1)();
}



/* Entry: 103930518; end: 10393054b; -[SCNotificationCenterFactoryServicesSaberServiceProvider provide] */

void FUN_103930518(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103930304();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10393054c; end: 10393057f; -[SCNotificationCenterFactoryServicesSaberServiceProvider __safeProvide] */

void FUN_10393054c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103930430();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103930580; end: 1039305c3; -[SCNotificationCenterFactoryServicesSaberServiceProvider end] */

void FUN_103930580(undefined8 param_1)

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



/* Entry: 1039305c4; end: 10393075b;  */

void FUN_1039305c4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e87e20)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f1781e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PushUserNavigationScopeGraphBridge/SCNotificationCenterFactoryServicesSaberServiceProvider.swift"
                            ,0x60,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10393075c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57a5c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10393075c; end: 103930807; -[SCNotificationCenterFactoryServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10393075c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039305c4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103930808; end: 10393087b; -[SCNotificationCenterFactoryServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103930808(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb1d50,0);
  func_0x000107c61614(param_1 + _DAT_112fb1d58,0);
  *(undefined8 *)(param_1 + _DAT_112fb1d60) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10393087c; end: 1039308af;  */

void FUN_10393087c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039308b0; end: 1039308f7; -[SCNotificationCenterFactoryServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039308b0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb1d50);
  func_0x000107c61610(param_1 + _DAT_112fb1d58);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb1d60));
  return;
}



/* Entry: 1039308f8; end: 103930917;  */

void FUN_1039308f8(void)

{
  func_0x000107c61168(&PTR_PTR_112fb1da8);
  return;
}



/* Entry: 103930918; end: 103930923; -[SCSCBillboardSignalDependencyServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103930918(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb1e10;
  func_0x000107c61428(param_1 + _DAT_112fb1e10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103930924; end: 10393092f; -[SCSCBillboardSignalDependencyServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103930924(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb1e10;
  func_0x000107c61428(param_1 + _DAT_112fb1e10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103930930; end: 10393093b; -[SCSCBillboardSignalDependencyServicesSaberServiceProvider pushUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103930930(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb1e18;
  func_0x000107c61428(param_1 + _DAT_112fb1e18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10393093c; end: 10393097f;  */

void FUN_10393093c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103930980; end: 10393098b; -[SCSCBillboardSignalDependencyServicesSaberServiceProvider setPushUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103930980(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb1e18;
  func_0x000107c61428(param_1 + _DAT_112fb1e18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10393098c; end: 1039309df;  */

void FUN_10393098c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039309e0; end: 103930bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039309e0(void)

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
    func_0x000107c4f6e4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010392fccc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fb1c60);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fb1e20);
      *(long *)(unaff_x20 + _DAT_112fb1e20) = lVar4;
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
                      "PushUserNavigationScopeGraphBridge/SCSCBillboardSignalDependencyServicesSaberServiceProvider.swift"
                      ,0x62,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103930b0c);
  (*pcVar1)();
}



/* Entry: 103930bf4; end: 103930c27; -[SCSCBillboardSignalDependencyServicesSaberServiceProvider provide] */

void FUN_103930bf4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039309e0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103930c28; end: 103930c5b; -[SCSCBillboardSignalDependencyServicesSaberServiceProvider __safeProvide] */

void FUN_103930c28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103930b0c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103930c5c; end: 103930c9f; -[SCSCBillboardSignalDependencyServicesSaberServiceProvider end] */

void FUN_103930c5c(undefined8 param_1)

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



/* Entry: 103930ca0; end: 103930e37;  */

void FUN_103930ca0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e87e20)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f1781e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PushUserNavigationScopeGraphBridge/SCSCBillboardSignalDependencyServicesSaberServiceProvider.swift"
                            ,0x62,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103930e38);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57a5c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103930e38; end: 103930ee3; -[SCSCBillboardSignalDependencyServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103930e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103930ca0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103930ee4; end: 103930f57; -[SCSCBillboardSignalDependencyServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103930ee4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb1e10,0);
  func_0x000107c61614(param_1 + _DAT_112fb1e18,0);
  *(undefined8 *)(param_1 + _DAT_112fb1e20) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103930f58; end: 103930f8b;  */

void FUN_103930f58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103930f8c; end: 103930fd3; -[SCSCBillboardSignalDependencyServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103930f8c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb1e10);
  func_0x000107c61610(param_1 + _DAT_112fb1e18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb1e20));
  return;
}



/* Entry: 103930fd4; end: 103930ff3;  */

void FUN_103930fd4(void)

{
  func_0x000107c61168(&PTR_PTR_112fb1e68);
  return;
}



/* Entry: 103930ff4; end: 103930fff; -[SCSCLegacyNotificationSettingsServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103930ff4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb1ed0;
  func_0x000107c61428(param_1 + _DAT_112fb1ed0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103931000; end: 10393100b; -[SCSCLegacyNotificationSettingsServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103931000(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb1ed0;
  func_0x000107c61428(param_1 + _DAT_112fb1ed0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10393100c; end: 103931017; -[SCSCLegacyNotificationSettingsServicesSaberServiceProvider pushUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393100c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb1ed8;
  func_0x000107c61428(param_1 + _DAT_112fb1ed8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103931018; end: 10393105b;  */

void FUN_103931018(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10393105c; end: 103931067; -[SCSCLegacyNotificationSettingsServicesSaberServiceProvider setPushUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393105c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb1ed8;
  func_0x000107c61428(param_1 + _DAT_112fb1ed8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103931068; end: 1039310bb;  */

void FUN_103931068(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039310bc; end: 1039312cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039310bc(void)

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
    func_0x000107c4f6e4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010392fdf8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fb1c68);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fb1ee0);
      *(long *)(unaff_x20 + _DAT_112fb1ee0) = lVar4;
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
                      "PushUserNavigationScopeGraphBridge/SCSCLegacyNotificationSettingsServicesSaberServiceProvider.swift"
                      ,99,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039311e8);
  (*pcVar1)();
}



/* Entry: 1039312d0; end: 103931303; -[SCSCLegacyNotificationSettingsServicesSaberServiceProvider provide] */

void FUN_1039312d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039310bc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103931304; end: 103931337; -[SCSCLegacyNotificationSettingsServicesSaberServiceProvider __safeProvide] */

void FUN_103931304(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039311e8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103931338; end: 10393137b; -[SCSCLegacyNotificationSettingsServicesSaberServiceProvider end] */

void FUN_103931338(undefined8 param_1)

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



/* Entry: 10393137c; end: 103931513;  */

void FUN_10393137c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e87e20)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f1781e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PushUserNavigationScopeGraphBridge/SCSCLegacyNotificationSettingsServicesSaberServiceProvider.swift"
                            ,99,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103931514);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57a5c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103931514; end: 1039315bf; -[SCSCLegacyNotificationSettingsServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103931514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10393137c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039315c0; end: 103931633; -[SCSCLegacyNotificationSettingsServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039315c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb1ed0,0);
  func_0x000107c61614(param_1 + _DAT_112fb1ed8,0);
  *(undefined8 *)(param_1 + _DAT_112fb1ee0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103931634; end: 103931667;  */

void FUN_103931634(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103931668; end: 1039316af; -[SCSCLegacyNotificationSettingsServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103931668(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb1ed0);
  func_0x000107c61610(param_1 + _DAT_112fb1ed8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb1ee0));
  return;
}



/* Entry: 1039316b0; end: 1039316cf;  */

void FUN_1039316b0(void)

{
  func_0x000107c61168(&PTR_PTR_112fb1f28);
  return;
}



/* Entry: 1039316d0; end: 103931793;  */

void FUN_1039316d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112fb1f90;
  func_0x0001000285a8(0x112fb1f90,&UNK_10dc25d30);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103931794; end: 103931797;  */

void FUN_103931794(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb1fa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc25d40;
  func_0x000107c61520(&UNK_10dc25d40,&UNK_1106aec58);
  puRam0000000112fb1fa0 = puVar1;
  return;
}



/* Entry: 103931798; end: 103931803;  */

void FUN_103931798(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb1fa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc25d40;
  func_0x000107c61520(&UNK_10dc25d40,&UNK_1106aec58);
  puRam0000000112fb1fa0 = puVar1;
  return;
}



/* Entry: 103931804; end: 103931807;  */

void FUN_103931804(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb1fb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc25de8;
  func_0x000107c61520(&UNK_10dc25de8,&UNK_1106aece8);
  puRam0000000112fb1fb8 = puVar1;
  return;
}



/* Entry: 103931808; end: 103931873;  */

void FUN_103931808(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb1fb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc25de8;
  func_0x000107c61520(&UNK_10dc25de8,&UNK_1106aece8);
  puRam0000000112fb1fb8 = puVar1;
  return;
}



/* Entry: 103931874; end: 1039318f7;  */

void FUN_103931874(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1039318f8; end: 1039318fb;  */

void FUN_1039318f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb1fd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc25e58;
  func_0x000107c61520(&UNK_10dc25e58,&UNK_1106aece8);
  puRam0000000112fb1fd0 = puVar1;
  return;
}



/* Entry: 1039318fc; end: 10393193b;  */

void FUN_1039318fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb1fd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc25e58;
  func_0x000107c61520(&UNK_10dc25e58,&UNK_1106aece8);
  puRam0000000112fb1fd0 = puVar1;
  return;
}



/* Entry: 10393193c; end: 10393193f;  */

void FUN_10393193c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb1fd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc25e10;
  func_0x000107c61520(&UNK_10dc25e10,&UNK_1106aece8);
  puRam0000000112fb1fd8 = puVar1;
  return;
}



/* Entry: 103931940; end: 10393197f;  */

void FUN_103931940(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb1fd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc25e10;
  func_0x000107c61520(&UNK_10dc25e10,&UNK_1106aece8);
  puRam0000000112fb1fd8 = puVar1;
  return;
}



/* Entry: 103931980; end: 103931b17;  */

void FUN_103931980(void)

{
  return;
}



/* Entry: 103931b18; end: 103931b63;  */

void FUN_103931b18(long *param_1,long param_2)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x00010037ab48();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_28;
  *param_1 = param_2;
  return;
}



/* Entry: 103931b64; end: 103931b6b;  */

void FUN_103931b64(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x00010037ab48();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 103931b6c; end: 103931b9b;  */

void FUN_103931b6c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 103931b9c; end: 103931ca7;  */

undefined * FUN_103931b9c(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 uStack_69;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar7 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_69 = *(undefined1 *)(lVar7 + 0x112fb2098);
    func_0x00010008a7c8(&lStack_68,&uStack_69);
    lVar2 = lStack_68;
    if (lStack_68 != 0) {
      func_0x000100083b20(&lStack_60);
      func_0x000107c61574(lVar2);
      uVar3 = uStack_58;
      lVar2 = lStack_60;
      if (lStack_60 != 0) {
        puVar4 = puVar5;
        func_0x000107c61558();
        puVar6 = puVar5;
        if (((ulong)puVar4 & 1) == 0) {
          puVar6 = (undefined *)0x0;
          FUN_103931ccc(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
        }
        uVar1 = *(ulong *)(puVar6 + 0x10);
        puVar5 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
          FUN_103931ccc(puVar5,uVar1 + 1,1,puVar6);
        }
        *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
        *(long *)(puVar5 + uVar1 * 0x10 + 0x20) = lVar2;
        *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = uVar3;
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 4);
  return puVar5;
}



/* Entry: 103931ca8; end: 103931ccb;  */

void FUN_103931ca8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103931ccc; end: 103931dfb;  */

undefined * FUN_103931ccc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103931dfc);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112fb2140;
    func_0x0001000285a8(0x112fb2140,&UNK_10dc25fb8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112fb2148;
    func_0x0001000285a8(0x112fb2148,&UNK_10dc25fc0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 103931dfc; end: 103931e0b;  */

undefined1  [16] FUN_103931dfc(void)

{
  return ZEXT816(0x1106aed68);
}



/* Entry: 103931e0c; end: 103931e2b; -[_TtC33NotificationCenterFactoryServices33NotificationCenterFactoryServices builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103931e0c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fb2150));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103931e2c; end: 103931e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103931e2c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb2150) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103931e78; end: 103931ed7; -[_TtC33NotificationCenterFactoryServices33NotificationCenterFactoryServices init] */

void FUN_103931e78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NotificationCenterFactoryServices.NotificationCenterFactoryServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103931ea4);
  (*pcVar1)();
}



/* Entry: 103931ed8; end: 103931ee7; -[_TtC33NotificationCenterFactoryServices33NotificationCenterFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103931ed8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fb2150));
  return;
}



/* Entry: 103931ee8; end: 103931f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103931ee8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100adb618();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fb2180) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fb2188) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103931f70);
  (*pcVar1)();
}



/* Entry: 103931f70; end: 103931fcf; -[_TtC36SaturnUserNavigationScopeGraphBridge51SaturnUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_103931f70(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaturnUserNavigationScopeGraphBridge.SaturnUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103931f9c);
  (*pcVar1)();
}



/* Entry: 103931fd0; end: 103932007; -[_TtC36SaturnUserNavigationScopeGraphBridge51SaturnUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103931fec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103931ff0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103931fd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb2180));
  return;
}



/* Entry: 103932008; end: 10393202f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103932008(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fb2188),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fb2180));
  return;
}



/* Entry: 103932030; end: 1039320cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103932030(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fb2480);
  *(undefined8 *)(unaff_x20 + _DAT_112fb21b8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fb21c0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1039320cc; end: 10393212b; -[_TtC36SaturnUserNavigationScopeGraphBridge54SCCommunitiesAttributionHandlerServicesSaberEntryPoint init] */

void FUN_1039320cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaturnUserNavigationScopeGraphBridge.SCCommunitiesAttributionHandlerServicesSaberEntryPoint"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039320f8);
  (*pcVar1)();
}



/* Entry: 10393212c; end: 1039321bf; -[_TtC36SaturnUserNavigationScopeGraphBridge54SCCommunitiesAttributionHandlerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10393212c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fb21b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb21c0));
  return;
}



/* Entry: 1039321c0; end: 1039321c7;  */

undefined8 FUN_1039321c0(void)

{
  return 0;
}



/* Entry: 1039321c8; end: 10393222b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039321c8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb2470);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10393222c; end: 103932233;  */

void FUN_10393222c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103932234; end: 1039322d3;  */

void FUN_103932234(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039322d4; end: 1039322f3;  */

void FUN_1039322d4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039322f4; end: 103932357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039322f4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb2478);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103932358; end: 10393235f;  */

void FUN_103932358(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103932360; end: 1039323ff;  */

void FUN_103932360(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


