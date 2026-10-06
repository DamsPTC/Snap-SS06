/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c20f04; end: 102c20f0f; -[SCSCOperaDebugServicesWrapperSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c20f04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f004b0;
  func_0x000107c61428(param_1 + _DAT_112f004b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c20f10; end: 102c20f1b; -[SCSCOperaDebugServicesWrapperSaberServiceProvider operaSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c20f10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f004b8;
  func_0x000107c61428(param_1 + _DAT_112f004b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c20f1c; end: 102c20f5f;  */

void FUN_102c20f1c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102c20f60; end: 102c20f6b; -[SCSCOperaDebugServicesWrapperSaberServiceProvider setOperaSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c20f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f004b8;
  func_0x000107c61428(param_1 + _DAT_112f004b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c20f6c; end: 102c20fbf;  */

void FUN_102c20f6c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c20fc0; end: 102c211d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c20fc0(void)

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
    func_0x000107c4df60();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102c1f00c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f00328);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f004c0);
      *(long *)(unaff_x20 + _DAT_112f004c0) = lVar4;
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
                      "OperaSessionScopeGraphBridge/SCSCOperaDebugServicesWrapperSaberServiceProvider.swift"
                      ,0x54,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c210ec);
  (*pcVar1)();
}



/* Entry: 102c211d4; end: 102c21207; -[SCSCOperaDebugServicesWrapperSaberServiceProvider provide] */

void FUN_102c211d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c20fc0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c21208; end: 102c2123b; -[SCSCOperaDebugServicesWrapperSaberServiceProvider __safeProvide] */

void FUN_102c21208(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102c210ec();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c2123c; end: 102c2127f; -[SCSCOperaDebugServicesWrapperSaberServiceProvider end] */

void FUN_102c2123c(undefined8 param_1)

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



/* Entry: 102c21280; end: 102c21417;  */

void FUN_102c21280(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0f00630)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000024,0x800000010f0ff9d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "OperaSessionScopeGraphBridge/SCSCOperaDebugServicesWrapperSaberServiceProvider.swift"
                            ,0x54,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c21418);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57024();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102c21418; end: 102c214c3; -[SCSCOperaDebugServicesWrapperSaberServiceProvider setValue:forIvarName:] */

void FUN_102c21418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c21280(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c214c4; end: 102c21537; -[SCSCOperaDebugServicesWrapperSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c214c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f004b0,0);
  func_0x000107c61614(param_1 + _DAT_112f004b8,0);
  *(undefined8 *)(param_1 + _DAT_112f004c0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c21538; end: 102c2156b;  */

void FUN_102c21538(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c2156c; end: 102c215b3; -[SCSCOperaDebugServicesWrapperSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2156c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f004b0);
  func_0x000107c61610(param_1 + _DAT_112f004b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f004c0));
  return;
}



/* Entry: 102c215b4; end: 102c215d3;  */

void FUN_102c215b4(void)

{
  func_0x000107c61168(&PTR_PTR_112f00508);
  return;
}



/* Entry: 102c215d4; end: 102c215df; -[SCSCOperaInternalServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c215d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f00570;
  func_0x000107c61428(param_1 + _DAT_112f00570,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c215e0; end: 102c215eb; -[SCSCOperaInternalServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c215e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f00570;
  func_0x000107c61428(param_1 + _DAT_112f00570,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c215ec; end: 102c215f7; -[SCSCOperaInternalServicesSaberServiceProvider operaSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c215ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f00578;
  func_0x000107c61428(param_1 + _DAT_112f00578,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c215f8; end: 102c2163b;  */

void FUN_102c215f8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102c2163c; end: 102c21647; -[SCSCOperaInternalServicesSaberServiceProvider setOperaSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2163c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f00578;
  func_0x000107c61428(param_1 + _DAT_112f00578,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c21648; end: 102c2169b;  */

void FUN_102c21648(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c2169c; end: 102c218af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c2169c(void)

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
    func_0x000107c4df60();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102c1f138();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f00330);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f00580);
      *(long *)(unaff_x20 + _DAT_112f00580) = lVar4;
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
                      "OperaSessionScopeGraphBridge/SCSCOperaInternalServicesSaberServiceProvider.swift"
                      ,0x50,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c217c8);
  (*pcVar1)();
}



/* Entry: 102c218b0; end: 102c218e3; -[SCSCOperaInternalServicesSaberServiceProvider provide] */

void FUN_102c218b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c2169c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c218e4; end: 102c21917; -[SCSCOperaInternalServicesSaberServiceProvider __safeProvide] */

void FUN_102c218e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102c217c8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c21918; end: 102c2195b; -[SCSCOperaInternalServicesSaberServiceProvider end] */

void FUN_102c21918(undefined8 param_1)

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



/* Entry: 102c2195c; end: 102c21af3;  */

void FUN_102c2195c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0f00630)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000024,0x800000010f0ff9d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "OperaSessionScopeGraphBridge/SCSCOperaInternalServicesSaberServiceProvider.swift"
                            ,0x50,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c21af4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57024();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102c21af4; end: 102c21b9f; -[SCSCOperaInternalServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102c21af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c2195c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c21ba0; end: 102c21c13; -[SCSCOperaInternalServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c21ba0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f00570,0);
  func_0x000107c61614(param_1 + _DAT_112f00578,0);
  *(undefined8 *)(param_1 + _DAT_112f00580) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c21c14; end: 102c21c47;  */

void FUN_102c21c14(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c21c48; end: 102c21c8f; -[SCSCOperaInternalServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c21c48(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f00570);
  func_0x000107c61610(param_1 + _DAT_112f00578);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f00580));
  return;
}



/* Entry: 102c21c90; end: 102c21caf;  */

void FUN_102c21c90(void)

{
  func_0x000107c61168(&PTR_PTR_112f005c8);
  return;
}



/* Entry: 102c21cb0; end: 102c21cbb; -[SCSCOperaMediaResolverServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c21cb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f00630;
  func_0x000107c61428(param_1 + _DAT_112f00630,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c21cbc; end: 102c21cc7; -[SCSCOperaMediaResolverServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c21cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f00630;
  func_0x000107c61428(param_1 + _DAT_112f00630,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c21cc8; end: 102c21cd3; -[SCSCOperaMediaResolverServiceSaberServiceProvider operaSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c21cc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f00638;
  func_0x000107c61428(param_1 + _DAT_112f00638,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c21cd4; end: 102c21d17;  */

void FUN_102c21cd4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102c21d18; end: 102c21d23; -[SCSCOperaMediaResolverServiceSaberServiceProvider setOperaSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c21d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f00638;
  func_0x000107c61428(param_1 + _DAT_112f00638,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c21d24; end: 102c21d77;  */

void FUN_102c21d24(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c21d78; end: 102c21f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c21d78(void)

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
    func_0x000107c4df60();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102c1f264();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f00338);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f00640);
      *(long *)(unaff_x20 + _DAT_112f00640) = lVar4;
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
                      "OperaSessionScopeGraphBridge/SCSCOperaMediaResolverServiceSaberServiceProvider.swift"
                      ,0x54,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c21ea4);
  (*pcVar1)();
}



/* Entry: 102c21f8c; end: 102c21fbf; -[SCSCOperaMediaResolverServiceSaberServiceProvider provide] */

void FUN_102c21f8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c21d78();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c21fc0; end: 102c21ff3; -[SCSCOperaMediaResolverServiceSaberServiceProvider __safeProvide] */

void FUN_102c21fc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102c21ea4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c21ff4; end: 102c22037; -[SCSCOperaMediaResolverServiceSaberServiceProvider end] */

void FUN_102c21ff4(undefined8 param_1)

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



/* Entry: 102c22038; end: 102c221cf;  */

void FUN_102c22038(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0f00630)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000024,0x800000010f0ff9d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "OperaSessionScopeGraphBridge/SCSCOperaMediaResolverServiceSaberServiceProvider.swift"
                            ,0x54,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c221d0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57024();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102c221d0; end: 102c2227b; -[SCSCOperaMediaResolverServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_102c221d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c22038(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c2227c; end: 102c222ef; -[SCSCOperaMediaResolverServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2227c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f00630,0);
  func_0x000107c61614(param_1 + _DAT_112f00638,0);
  *(undefined8 *)(param_1 + _DAT_112f00640) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c222f0; end: 102c22323;  */

void FUN_102c222f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c22324; end: 102c2236b; -[SCSCOperaMediaResolverServiceSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c22324(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f00630);
  func_0x000107c61610(param_1 + _DAT_112f00638);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f00640));
  return;
}



/* Entry: 102c2236c; end: 102c2238b;  */

void FUN_102c2236c(void)

{
  func_0x000107c61168(&PTR_PTR_112f00688);
  return;
}



/* Entry: 102c2238c; end: 102c22397; -[SCSCOperaTrackerServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2238c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f006f0;
  func_0x000107c61428(param_1 + _DAT_112f006f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c22398; end: 102c223a3; -[SCSCOperaTrackerServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c22398(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f006f0;
  func_0x000107c61428(param_1 + _DAT_112f006f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c223a4; end: 102c223af; -[SCSCOperaTrackerServiceSaberServiceProvider operaSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c223a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f006f8;
  func_0x000107c61428(param_1 + _DAT_112f006f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c223b0; end: 102c223f3;  */

void FUN_102c223b0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102c223f4; end: 102c223ff; -[SCSCOperaTrackerServiceSaberServiceProvider setOperaSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c223f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f006f8;
  func_0x000107c61428(param_1 + _DAT_112f006f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c22400; end: 102c22453;  */

void FUN_102c22400(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c22454; end: 102c22667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c22454(void)

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
    func_0x000107c4df60();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102c1f390();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f00340);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f00700);
      *(long *)(unaff_x20 + _DAT_112f00700) = lVar4;
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
                      "OperaSessionScopeGraphBridge/SCSCOperaTrackerServiceSaberServiceProvider.swift"
                      ,0x4e,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c22580);
  (*pcVar1)();
}



/* Entry: 102c22668; end: 102c2269b; -[SCSCOperaTrackerServiceSaberServiceProvider provide] */

void FUN_102c22668(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c22454();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c2269c; end: 102c226cf; -[SCSCOperaTrackerServiceSaberServiceProvider __safeProvide] */

void FUN_102c2269c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102c22580();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c226d0; end: 102c22713; -[SCSCOperaTrackerServiceSaberServiceProvider end] */

void FUN_102c226d0(undefined8 param_1)

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



/* Entry: 102c22714; end: 102c228ab;  */

void FUN_102c22714(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0f00630)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000024,0x800000010f0ff9d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "OperaSessionScopeGraphBridge/SCSCOperaTrackerServiceSaberServiceProvider.swift"
                            ,0x4e,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c228ac);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57024();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102c228ac; end: 102c22957; -[SCSCOperaTrackerServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_102c228ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c22714(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c22958; end: 102c229cb; -[SCSCOperaTrackerServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c22958(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f006f0,0);
  func_0x000107c61614(param_1 + _DAT_112f006f8,0);
  *(undefined8 *)(param_1 + _DAT_112f00700) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c229cc; end: 102c229ff;  */

void FUN_102c229cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c22a00; end: 102c22a47; -[SCSCOperaTrackerServiceSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c22a00(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f006f0);
  func_0x000107c61610(param_1 + _DAT_112f006f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f00700));
  return;
}



/* Entry: 102c22a48; end: 102c22a67;  */

void FUN_102c22a48(void)

{
  func_0x000107c61168(&PTR_PTR_112f00748);
  return;
}



/* Entry: 102c22a68; end: 102c22aaf; -[SCSCOperaSessionScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c22a68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f007b0;
  func_0x000107c61428(param_1 + _DAT_112f007b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c22ab0; end: 102c22b07; -[SCSCOperaSessionScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c22ab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f007b0;
  func_0x000107c61428(param_1 + _DAT_112f007b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c22b08; end: 102c22bdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c22b08(undefined8 param_1,long param_2)

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
    FUN_102c1f664();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f002d0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c22be0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f002d8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f007b8);
    *(long **)(unaff_x20 + _DAT_112f007b8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102c22be0; end: 102c22c07; -[SCSCOperaSessionScopedServicesSaberEntryPoint begin] */

void FUN_102c22be0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c22b08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c22c08; end: 102c22d7f;  */

/* WARNING: Possible PIC construction at 0x000102c22c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c22d08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c22c74) */
/* WARNING: Removing unreachable block (ram,0x000102c22d0c) */
/* WARNING: Removing unreachable block (ram,0x000102c22d24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c22c08(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f007b8);
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



/* Entry: 102c22d80; end: 102c22d87;  */

void FUN_102c22d80(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102c22d88; end: 102c22dbb; -[SCSCOperaSessionScopedServicesSaberEntryPoint end] */

void FUN_102c22d88(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c22c08();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c22dbc; end: 102c22edb;  */

void FUN_102c22dbc(long param_1,long param_2,long param_3)

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
                        "OperaSessionScopeGraphBridge/SCSCOperaSessionScopedServicesSaberEntryPoint.swift"
                        ,0x50,2,0x35,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c22edc);
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



/* Entry: 102c22edc; end: 102c22f87; -[SCSCOperaSessionScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102c22edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102c22dbc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c22f88; end: 102c22fe7; -[SCSCOperaSessionScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c22f88(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f007b0,0);
  *(undefined8 *)(param_1 + _DAT_112f007b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c22fe8; end: 102c2301b;  */

void FUN_102c22fe8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c2301c; end: 102c23053; -[SCSCOperaSessionScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2301c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f007b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f007b8));
  return;
}



/* Entry: 102c23054; end: 102c23073;  */

void FUN_102c23054(void)

{
  func_0x000107c61168(&PTR_PTR_112897fd8);
  return;
}



/* Entry: 102c23074; end: 102c2307b;  */

undefined8 FUN_102c23074(void)

{
  return 1;
}



/* Entry: 102c2307c; end: 102c230bb;  */

void FUN_102c2307c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f007e8;
  func_0x0001000285a8(0x112f007e8,&UNK_10db33b50);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102c230bc; end: 102c230c3;  */

undefined8 FUN_102c230bc(void)

{
  return 1;
}



/* Entry: 102c230c4; end: 102c2313f;  */

void FUN_102c230c4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102c23140; end: 102c23143;  */

void FUN_102c23140(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f007f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db33b60;
  func_0x000107c61520(&UNK_10db33b60,&UNK_1105b3988);
  puRam0000000112f007f8 = puVar1;
  return;
}



/* Entry: 102c23144; end: 102c231af;  */

void FUN_102c23144(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f007f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db33b60;
  func_0x000107c61520(&UNK_10db33b60,&UNK_1105b3988);
  puRam0000000112f007f8 = puVar1;
  return;
}



/* Entry: 102c231b0; end: 102c231b3;  */

void FUN_102c231b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f00810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db33c08;
  func_0x000107c61520(&UNK_10db33c08,&UNK_1105b3a18);
  puRam0000000112f00810 = puVar1;
  return;
}



/* Entry: 102c231b4; end: 102c2321f;  */

void FUN_102c231b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f00810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db33c08;
  func_0x000107c61520(&UNK_10db33c08,&UNK_1105b3a18);
  puRam0000000112f00810 = puVar1;
  return;
}



/* Entry: 102c23220; end: 102c232a3;  */

void FUN_102c23220(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 102c232a4; end: 102c232a7;  */

void FUN_102c232a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f00828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db33c78;
  func_0x000107c61520(&UNK_10db33c78,&UNK_1105b3a18);
  puRam0000000112f00828 = puVar1;
  return;
}



/* Entry: 102c232a8; end: 102c232e7;  */

void FUN_102c232a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f00828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db33c78;
  func_0x000107c61520(&UNK_10db33c78,&UNK_1105b3a18);
  puRam0000000112f00828 = puVar1;
  return;
}



/* Entry: 102c232e8; end: 102c232eb;  */

void FUN_102c232e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f00830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db33c30;
  func_0x000107c61520(&UNK_10db33c30,&UNK_1105b3a18);
  puRam0000000112f00830 = puVar1;
  return;
}



/* Entry: 102c232ec; end: 102c2332b;  */

void FUN_102c232ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f00830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db33c30;
  func_0x000107c61520(&UNK_10db33c30,&UNK_1105b3a18);
  puRam0000000112f00830 = puVar1;
  return;
}



/* Entry: 102c2332c; end: 102c2345f;  */

undefined8 FUN_102c2332c(void)

{
  return 0;
}



/* Entry: 102c23460; end: 102c234ab;  */

void FUN_102c23460(undefined8 param_1)

{
  func_0x0001000285a8(0x112f008c0,&UNK_10db33d00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102c23518,param_1);
  return;
}



/* Entry: 102c234ac; end: 102c23517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c234ac(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102c23890();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f008c8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102c23518; end: 102c2351f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c23518(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102c23890();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f008c8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 102c23520; end: 102c2356b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c23520(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f008c8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c2356c; end: 102c23673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c2356c(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lStack_40;
  long lStack_38;
  
  func_0x00010008a7c8(&lStack_40);
  if (lStack_40 != 0) {
    func_0x000100083b20(&lStack_38);
    func_0x000107c61574(lStack_40);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lStack_38 != 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61550();
      if (((ulong)puVar3 >> 0x3e != 0) || (((ulong)puVar2 & 1) == 0)) {
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar2 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar2 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar3) {
            puVar2 = puVar3;
          }
          func_0x000107c60480(puVar2);
        }
        puVar3 = (undefined *)0x0;
        FUN_102c23758(0,puVar2 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      }
      uVar4 = (ulong)puVar3 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar4 + 0x10);
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_102c23758(uVar4,uVar1 + 1,1,puVar3);
        uVar4 = uVar4 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
      *(long *)(uVar4 + uVar1 * 8 + 0x20) = lStack_38;
    }
  }
  return;
}



/* Entry: 102c23674; end: 102c236d3; -[_TtC37SCLensStoryOperaFeaturePluginRegistry41SCLensStoryOperaFeaturePluginSaberService buildSaberPlugins] */

void FUN_102c23674(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c2356c();
  func_0x000107c61170(param_1);
  uVar2 = 0x112f008f8;
  func_0x0001000285a8(0x112f008f8,&UNK_10db33d80);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102c236d4; end: 102c23733; -[_TtC37SCLensStoryOperaFeaturePluginRegistry41SCLensStoryOperaFeaturePluginSaberService init] */

void FUN_102c236d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensStoryOperaFeaturePluginRegistry.SCLensStoryOperaFeaturePluginSaberService"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c23700);
  (*pcVar1)();
}



/* Entry: 102c23734; end: 102c23757; -[_TtC37SCLensStoryOperaFeaturePluginRegistry41SCLensStoryOperaFeaturePluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c23734(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f008c8));
  return;
}



/* Entry: 102c23758; end: 102c2387f;  */

ulong FUN_102c23758(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102c23880);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_102c238b0(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102c2387c);
      (*pcVar1)();
    }
    FUN_102c23930(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102c23880; end: 102c2388f;  */

undefined1  [16] FUN_102c23880(void)

{
  return ZEXT816(0x1105b3a98);
}


