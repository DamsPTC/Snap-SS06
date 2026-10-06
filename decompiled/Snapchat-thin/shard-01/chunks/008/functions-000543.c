/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10151c7b0; end: 10151c7f7; -[SCRegistrationScopeGraphBridgeSaberEntryPoint registrationScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151c7b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daf120;
  func_0x000107c61428(param_1 + _DAT_112daf120,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10151c7f8; end: 10151c85b; -[SCRegistrationScopeGraphBridgeSaberEntryPoint setRegistrationScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151c7f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daf120;
  func_0x000107c61428(param_1 + _DAT_112daf120,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10151c85c; end: 10151c98f;  */

/* WARNING: Possible PIC construction at 0x00010151c914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010151c930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010151c94c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010151c918) */
/* WARNING: Removing unreachable block (ram,0x00010151c934) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151c85c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c4fd1c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_10151bec4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_10151c268();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10151c990);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112daef70) = lVar5;
    *(long *)(lVar4 + _DAT_112daef78) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10151c990; end: 10151c9b7; -[SCRegistrationScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10151c990(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10151c85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10151c9b8; end: 10151c9fb; -[SCRegistrationScopeGraphBridgeSaberEntryPoint end] */

void FUN_10151c9b8(undefined8 param_1)

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



/* Entry: 10151c9fc; end: 10151cb93;  */

void FUN_10151c9fc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef1072e50)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010ef8d1b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "RegistrationScopeGraphBridge/SCRegistrationScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x50,2,0x48,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10151cb94);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57c60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10151cb94; end: 10151cc3f; -[SCRegistrationScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10151cb94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10151c9fc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10151cc40; end: 10151ccab; -[SCRegistrationScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151cc40(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112daf118,0);
  *(undefined8 *)(param_1 + _DAT_112daf120) = 0;
  *(undefined8 *)(param_1 + _DAT_112daf128) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10151ccac; end: 10151ccdf;  */

void FUN_10151ccac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10151cce0; end: 10151cd27; -[SCRegistrationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010151cd0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010151cd10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151cce0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112daf118);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daf120));
  return;
}



/* Entry: 10151cd28; end: 10151cd47;  */

void FUN_10151cd28(void)

{
  func_0x000107c61168(&PTR_PTR_1127deee0);
  return;
}



/* Entry: 10151cd48; end: 10151cd53; -[SCSCRegistrationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151cd48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daf158;
  func_0x000107c61428(param_1 + _DAT_112daf158,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10151cd54; end: 10151cd5f; -[SCSCRegistrationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151cd54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daf158;
  func_0x000107c61428(param_1 + _DAT_112daf158,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10151cd60; end: 10151cd6b; -[SCSCRegistrationServicesSaberServiceProvider registrationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151cd60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daf160;
  func_0x000107c61428(param_1 + _DAT_112daf160,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10151cd6c; end: 10151cdaf;  */

void FUN_10151cd6c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10151cdb0; end: 10151cdbb; -[SCSCRegistrationServicesSaberServiceProvider setRegistrationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151cdb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daf160;
  func_0x000107c61428(param_1 + _DAT_112daf160,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10151cdbc; end: 10151ce0f;  */

void FUN_10151cdbc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10151ce10; end: 10151d023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10151ce10(void)

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
    func_0x000107c4fd18();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010151bf74();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112daf0c0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112daf168);
      *(long *)(unaff_x20 + _DAT_112daf168) = lVar4;
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
                      "RegistrationScopeGraphBridge/SCSCRegistrationServicesSaberServiceProvider.swift"
                      ,0x4f,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10151cf3c);
  (*pcVar1)();
}



/* Entry: 10151d024; end: 10151d057; -[SCSCRegistrationServicesSaberServiceProvider provide] */

void FUN_10151d024(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10151ce10();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10151d058; end: 10151d08b; -[SCSCRegistrationServicesSaberServiceProvider __safeProvide] */

void FUN_10151d058(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010151cf3c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10151d08c; end: 10151d0cf; -[SCSCRegistrationServicesSaberServiceProvider end] */

void FUN_10151d08c(undefined8 param_1)

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



/* Entry: 10151d0d0; end: 10151d267;  */

void FUN_10151d0d0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef1072d70)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000024,0x800000010ef8d290,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "RegistrationScopeGraphBridge/SCSCRegistrationServicesSaberServiceProvider.swift"
                            ,0x4f,2,0x4e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10151d268);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57c5c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10151d268; end: 10151d313; -[SCSCRegistrationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10151d268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10151d0d0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10151d314; end: 10151d387; -[SCSCRegistrationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151d314(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112daf158,0);
  func_0x000107c61614(param_1 + _DAT_112daf160,0);
  *(undefined8 *)(param_1 + _DAT_112daf168) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10151d388; end: 10151d3bb;  */

void FUN_10151d388(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10151d3bc; end: 10151d403; -[SCSCRegistrationServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151d3bc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112daf158);
  func_0x000107c61610(param_1 + _DAT_112daf160);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112daf168));
  return;
}



/* Entry: 10151d404; end: 10151d423;  */

void FUN_10151d404(void)

{
  func_0x000107c61168(&PTR_PTR_112daf1b0);
  return;
}



/* Entry: 10151d424; end: 10151d46b; -[SCSCRegistrationScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151d424(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daf218;
  func_0x000107c61428(param_1 + _DAT_112daf218,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10151d46c; end: 10151d4c3; -[SCSCRegistrationScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151d46c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daf218;
  func_0x000107c61428(param_1 + _DAT_112daf218,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10151d4c4; end: 10151d59b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151d4c4(undefined8 param_1,long param_2)

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
    FUN_10151c248();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112daf078) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10151d59c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112daf080);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112daf220);
    *(long **)(unaff_x20 + _DAT_112daf220) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10151d59c; end: 10151d5c3; -[SCSCRegistrationScopedServicesSaberEntryPoint begin] */

void FUN_10151d59c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10151d4c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10151d5c4; end: 10151d73b;  */

/* WARNING: Possible PIC construction at 0x00010151d62c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010151d6c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010151d630) */
/* WARNING: Removing unreachable block (ram,0x00010151d6c8) */
/* WARNING: Removing unreachable block (ram,0x00010151d6e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151d5c4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112daf220);
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



/* Entry: 10151d73c; end: 10151d743;  */

void FUN_10151d73c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10151d744; end: 10151d777; -[SCSCRegistrationScopedServicesSaberEntryPoint end] */

void FUN_10151d744(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10151d5c4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10151d778; end: 10151d897;  */

void FUN_10151d778(long param_1,long param_2,long param_3)

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
                        "RegistrationScopeGraphBridge/SCSCRegistrationScopedServicesSaberEntryPoint.swift"
                        ,0x50,2,0x44,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10151d898);
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



/* Entry: 10151d898; end: 10151d943; -[SCSCRegistrationScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10151d898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10151d778(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10151d944; end: 10151d9a3; -[SCSCRegistrationScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151d944(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112daf218,0);
  *(undefined8 *)(param_1 + _DAT_112daf220) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10151d9a4; end: 10151d9d7;  */

void FUN_10151d9a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10151d9d8; end: 10151da0f; -[SCSCRegistrationScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151d9d8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112daf218);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daf220));
  return;
}



/* Entry: 10151da10; end: 10151da2f;  */

void FUN_10151da10(void)

{
  func_0x000107c61168(&PTR_PTR_1127deff0);
  return;
}



/* Entry: 10151da30; end: 10151da3f; -[ChangeUsernameCOFConfigServices changeUsernameCOFConfigService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151da30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112daf250));
  return;
}



/* Entry: 10151da40; end: 10151dad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151da40(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112daf250) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10151dad8; end: 10151db0b;  */

void FUN_10151dad8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10151db0c; end: 10151db1b; -[ChangeUsernameCOFConfigServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151db0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daf250));
  return;
}



/* Entry: 10151db1c; end: 10151db3b;  */

void FUN_10151db1c(void)

{
  func_0x000107c61168(&PTR_PTR_1127df0b0);
  return;
}



/* Entry: 10151db3c; end: 10151db4b; -[ChangeUsernameStorageServices changeUsernameStorageService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151db3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112daf280));
  return;
}



/* Entry: 10151db4c; end: 10151dbe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151db4c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112daf280) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10151dbe4; end: 10151dc17;  */

void FUN_10151dbe4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10151dc18; end: 10151dc27; -[ChangeUsernameStorageServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151dc18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daf280));
  return;
}



/* Entry: 10151dc28; end: 10151dc47;  */

void FUN_10151dc28(void)

{
  func_0x000107c61168(&PTR_PTR_1127df170);
  return;
}



/* Entry: 10151dc48; end: 10151ddb7;  */

/* WARNING: Removing unreachable block (ram,0x00010151dccc) */

undefined * FUN_10151dc48(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar2 = PTR_PTR_1126af7d0;
  func_0x000107c610f8(PTR_PTR_1126af7d0);
  func_0x000107c453e4();
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_58 = param_3[3];
  uStack_60 = param_3[2];
  uStack_50 = param_3[4];
  puVar3 = puVar2;
  func_0x0001014a87f0();
  func_0x000100075890(&uStack_80,0,0,&UNK_1103d6a90,PTR___s10Foundation4DataVN_110350ae0,puVar3,
                      &PTR_DAT_110789f58);
  uVar4 = uStack_80;
  func_0x000107c5ee20(uStack_80,uStack_78);
  func_0x00010006c090(uStack_80,uStack_78);
  func_0x000107c5a494(puVar2);
  func_0x000107c61170(uVar4);
  puVar3 = PTR_PTR_1126af9b8;
  func_0x000107c610f8(PTR_PTR_1126af9b8);
  func_0x000107c453e4();
  func_0x000107c52744();
  puVar5 = PTR_PTR_1126af9b0;
  func_0x000107c610f8();
  func_0x000107c61174(puVar3);
  func_0x000107c5fadc(param_2,0xe100000000000000);
  func_0x000107c48e54();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10151ddb8);
    (*pcVar1)();
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  return puVar5;
}



/* Entry: 10151ddb8; end: 10151ddc3; -[_TtC12OAuthLoginAB33OAuthLoginABInternalSegmentConfig treatments] */

void FUN_10151ddb8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_10151e6ec();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0;
    func_0x00010151edb0(0);
    lVar2 = param_1;
    func_0x000107c5fc48(param_1,uVar1);
    func_0x000107c6142c(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10151ddc4; end: 10151ddef; -[_TtC12OAuthLoginAB33OAuthLoginABInternalSegmentConfig studyExposureName] */

void FUN_10151ddc4(void)

{
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef8d3f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10151ddf0; end: 10151ddfb; -[_TtC12OAuthLoginAB33OAuthLoginABInternalSegmentConfig expirationTime] */

void FUN_10151ddf0(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5ee88(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      0x41da37345c000000);
  func_0x000107c5ee70();
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10151ddfc; end: 10151de03; -[_TtC12OAuthLoginAB33OAuthLoginABInternalSegmentConfig version] */

undefined8 FUN_10151ddfc(void)

{
  return 3;
}



/* Entry: 10151de04; end: 10151de0f; -[_TtC12OAuthLoginAB33OAuthLoginABInternalSegmentConfig userRange] */

undefined1  [16] FUN_10151de04(void)

{
  return ZEXT816(100) << 0x40;
}



/* Entry: 10151de10; end: 10151de1b; -[_TtC12OAuthLoginAB29OAuthLoginABProdSegmentConfig treatments] */

void FUN_10151de10(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  (*(code *)0x10151e8c0)();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0;
    func_0x00010151edb0(0);
    lVar2 = param_1;
    func_0x000107c5fc48(param_1,uVar1);
    func_0x000107c6142c(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10151de1c; end: 10151de6b;  */

void FUN_10151de1c(long param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  (*param_3)();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0;
    func_0x00010151edb0(0);
    lVar2 = param_1;
    func_0x000107c5fc48(param_1,uVar1);
    func_0x000107c6142c(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10151de6c; end: 10151de97; -[_TtC12OAuthLoginAB29OAuthLoginABProdSegmentConfig studyExposureName] */

void FUN_10151de6c(void)

{
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef8d3d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10151de98; end: 10151dea3; -[_TtC12OAuthLoginAB29OAuthLoginABProdSegmentConfig expirationTime] */

void FUN_10151de98(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5ee88(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      0x41da39d75c000000);
  func_0x000107c5ee70();
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10151dea4; end: 10151df33;  */

void FUN_10151dea4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5ee88(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1)
  ;
  func_0x000107c5ee70();
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10151df34; end: 10151df3b; -[_TtC12OAuthLoginAB29OAuthLoginABProdSegmentConfig version] */

undefined8 FUN_10151df34(void)

{
  return 2;
}



/* Entry: 10151df3c; end: 10151df47; -[_TtC12OAuthLoginAB29OAuthLoginABProdSegmentConfig userRange] */

undefined1  [16] FUN_10151df3c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = 0x46;
  return auVar1;
}



/* Entry: 10151df48; end: 10151df4b; -[_TtC12OAuthLoginAB29OAuthLoginABProdSegmentConfig init] */

void FUN_10151df48(undefined8 param_1)

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



/* Entry: 10151df4c; end: 10151df87;  */

void FUN_10151df4c(undefined8 param_1)

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



/* Entry: 10151df88; end: 10151dfeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151df88(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112daf2b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112daf2b8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10151dfec; end: 10151e127; -[_TtC12OAuthLoginAB21OAuthLoginABRetriever initWithClientHardcodedABValueRetriever:authenticationExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151dfec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112daf2b0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112daf2b8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10151e128; end: 10151e167;  */

void FUN_10151e128(void)

{
  func_0x000107c61168(&PTR_PTR_1127df230);
  return;
}



/* Entry: 10151e168; end: 10151e18f; -[_TtC12OAuthLoginAB21OAuthLoginABRetriever registerConfigs] */

void FUN_10151e168(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010151e064();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10151e190; end: 10151e21b; -[_TtC12OAuthLoginAB21OAuthLoginABRetriever startUsingAB] */

/* WARNING: Possible PIC construction at 0x00010151e204: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151e190(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112daf2b0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    param_1 = -0x2fffffffffffffee;
    func_0x000107c5fadc(0xd000000000000012,0x800000010ef853e0);
    func_0x000107c5bc2c(lVar1);
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10151e21c; end: 10151e2a7; -[_TtC12OAuthLoginAB21OAuthLoginABRetriever doneUsingAB] */

/* WARNING: Possible PIC construction at 0x00010151e290: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151e21c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112daf2b0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    param_1 = -0x2fffffffffffffee;
    func_0x000107c5fadc(0xd000000000000012,0x800000010ef853e0);
    func_0x000107c42228(lVar1);
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10151e2a8; end: 10151e38f;  */

bool FUN_10151e2a8(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_2 & 0xffffffffffffff8;
  if (param_2 >> 0x3e == 0) {
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    uVar5 = uVar6;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60480();
  }
  uVar2 = 0;
  do {
    uVar4 = uVar2;
    if (uVar5 == uVar4) break;
    if ((param_2 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar6 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10151e37c);
        (*pcVar1)();
      }
      uVar2 = *(ulong *)(param_2 + uVar4 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar2 = uVar4;
      FUN_10151e550(uVar4,param_2);
    }
    if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10151e378);
      (*pcVar1)();
    }
    func_0x00010405fa24(0);
    uVar3 = uVar2;
    func_0x000107c60118(uVar2,param_1);
    func_0x000107c61170(uVar2);
    uVar2 = uVar4 + 1;
  } while ((uVar3 & 1) == 0);
  return uVar5 != uVar4;
}



/* Entry: 10151e390; end: 10151e40b; -[_TtC12OAuthLoginAB21OAuthLoginABRetriever supportedOAuthLoginTypesOn:] */

void FUN_10151e390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10151ec70(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x00010486de80(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10151e40c; end: 10151e473; -[_TtC12OAuthLoginAB21OAuthLoginABRetriever shouldSkipPassword:] */

uint FUN_10151e40c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010486de80(0);
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x00010486dd30();
  uVar2 = param_3;
  func_0x000107c60118(param_3,uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 10151e474; end: 10151e477;  */

void FUN_10151e474(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10151e478; end: 10151e4ab;  */

void FUN_10151e478(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10151e4ac; end: 10151e4e3; -[_TtC12OAuthLoginAB21OAuthLoginABRetriever .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010151e4c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010151e4cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151e4ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daf2b0));
  return;
}



/* Entry: 10151e4e4; end: 10151e54f;  */

void FUN_10151e4e4(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10151e550; end: 10151e6eb;  */

ulong FUN_10151e550(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10151e620);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10151e624);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x00010405fa24(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x00010405fa24(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000012,0x800000010ef8d410);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10151e6ec);
  (*pcVar2)();
}



/* Entry: 10151e6ec; end: 10151ec6f;  */

long FUN_10151e6ec(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_118 [40];
  undefined1 auStack_f0 [40];
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
  
  lVar1 = 0x10151edb0;
  FUN_10151e4e4(0x10151edb0,0x112daf5c8,&UNK_10d957ec8);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 5;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  FUN_10151f054(auStack_f0);
  uVar2 = 0;
  FUN_10151dc48(0,0x34,auStack_f0);
  FUN_10151edf4(auStack_f0);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  FUN_10151f054(&uStack_c8);
  uStack_90 = uStack_c0;
  uStack_a0 = uStack_c8;
  uStack_98 = uStack_b8;
  uVar2 = 0x112daf388;
  func_0x0001000285a8(0x112daf388,&UNK_10d957ee0);
  uVar3 = uVar2;
  func_0x000107c61538();
  func_0x00010151ee28(&uStack_a0,0x112daf390,&UNK_10d957eb0);
  uVar4 = 0x112daf3e0;
  func_0x0001000285a8(0x112daf3e0,&UNK_10d957eb8);
  func_0x000107c61538();
  func_0x00010151ee28(&uStack_98,0x112daf3e8,&UNK_10d957ec0);
  func_0x000107c61538(uVar2,0x112daf4c0);
  func_0x00010151ee28(&uStack_90,0x112daf390,&UNK_10d957eb0);
  uStack_70 = uStack_b0;
  uStack_68 = uStack_a8;
  uStack_88 = uVar3;
  uStack_80 = uVar2;
  uStack_78 = uVar4;
  func_0x00010151ee68(&uStack_88,auStack_118);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar3);
  func_0x00010006c090(uStack_b0,uStack_a8);
  uVar2 = 100;
  FUN_10151dc48(100,0x35,&uStack_88);
  FUN_10151edf4(&uStack_88);
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  return lVar1;
}



/* Entry: 10151ec70; end: 10151ed8f;  */

undefined * FUN_10151ec70(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = &SUB_10405fa24;
  FUN_10151e4e4(&SUB_10405fa24,0x112da3e10,&UNK_10d957ed0);
  func_0x000107c61534();
  *(undefined8 *)(puVar2 + 0x18) = 5;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  puVar3 = puVar2;
  func_0x00010405f740();
  *(undefined **)(puVar2 + 0x20) = puVar3;
  func_0x00010405f750();
  *(undefined **)(puVar2 + 0x28) = puVar3;
  FUN_10151e2a8(param_1,puVar2);
  func_0x000107c61588(puVar2);
  func_0x000107c61408(puVar2 + 0x20,*(undefined8 *)(puVar2 + 0x10),uVar1);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((param_1 & 1) != 0) {
    puVar2 = &SUB_10486de80;
    FUN_10151e4e4(&SUB_10486de80,0x112da3e18,&UNK_10d948a98);
    func_0x000107c613fc();
    *(undefined8 *)(puVar2 + 0x18) = 5;
    *(undefined8 *)(puVar2 + 0x10) = 2;
    uVar4 = 0;
    func_0x00010486de80();
    func_0x00010486dd40();
    *(undefined8 *)(puVar2 + 0x20) = uVar4;
    func_0x00010486dd30();
    *(undefined8 *)(puVar2 + 0x28) = uVar4;
  }
  return puVar2;
}



/* Entry: 10151ed90; end: 10151edf3;  */

void FUN_10151ed90(void)

{
  func_0x000107c61168(&PTR_PTR_1127df390);
  return;
}



/* Entry: 10151edf4; end: 10151eea3;  */

undefined8 FUN_10151edf4(undefined8 param_1)

{
  (*(code *)(undefined *)0x10151fe54)();
  return param_1;
}



/* Entry: 10151eea4; end: 10151eea7; -[_TtC12OAuthLoginAB33OAuthLoginABInternalSegmentConfig seed] */

void FUN_10151eea4(void)

{
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef8d3f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10151eea8; end: 10151eeab; -[_TtC12OAuthLoginAB29OAuthLoginABProdSegmentConfig seed] */

void FUN_10151eea8(void)

{
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef8d3d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10151eeac; end: 10151eecf; -[_TtC12OAuthLoginAB33OAuthLoginABInternalSegmentConfig init] */

void FUN_10151eeac(undefined8 param_1)

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



/* Entry: 10151eed0; end: 10151ef0f;  */

void FUN_10151eed0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112daf388;
  func_0x0001000285a8(0x112daf388,&UNK_10d957ee0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10151ef10; end: 10151ef2b;  */

void FUN_10151ef10(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 10151ef2c; end: 10151f053;  */

void FUN_10151ef2c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  func_0x00010151fa24();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10151f054; end: 10151f073;  */

void FUN_10151f054(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = puVar1;
  param_1[2] = puVar1;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  return;
}



/* Entry: 10151f074; end: 10151f0bb;  */

void FUN_10151f074(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9582c0,0x23,2);
  uRam00000001137ff518 = uStack_38;
  uRam00000001137ff510 = uStack_40;
  uRam00000001137ff528 = uStack_28;
  uRam00000001137ff520 = uStack_30;
  uRam00000001137ff538 = uStack_18;
  uRam00000001137ff530 = uStack_20;
  return;
}



/* Entry: 10151f0bc; end: 10151f1bf;  */

void FUN_10151f0bc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 400);
        func_0x00010151fa70();
LAB_10151f144:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 400);
          FUN_10151fa30();
          goto LAB_10151f144;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 400);
          FUN_10151fa30();
          goto LAB_10151f144;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10151f1c0; end: 10151f2d3;  */

void FUN_10151f1c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *unaff_x20;
  lVar1 = param_1;
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_3 + 400);
    FUN_10151fa30();
    (*pcVar3)(lVar2,1,&UNK_1103d6b30,lVar1,param_2,param_3);
    lVar1 = lVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  lVar2 = unaff_x20[1];
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_3 + 400);
    FUN_10151fa30();
    (*pcVar3)(lVar2,2,&UNK_1103d6b30,lVar1,param_2,param_3);
    lVar1 = lVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  lVar2 = unaff_x20[2];
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_3 + 400);
    func_0x00010151fa70();
    (*pcVar3)(lVar2,3,&UNK_1103d6bc0,lVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  return;
}



/* Entry: 10151f2d4; end: 10151f317;  */

void FUN_10151f2d4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = puVar1;
  param_1[2] = puVar1;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  return;
}



/* Entry: 10151f318; end: 10151f347;  */

undefined1  [16] FUN_10151f318(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 10151f348; end: 10151f37b;  */

void FUN_10151f348(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 10151f37c; end: 10151f38f;  */

undefined1  [16] FUN_10151f37c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x10151f38c;
  return auVar1;
}



/* Entry: 10151f390; end: 10151f3b7;  */

void FUN_10151f390(void)

{
  FUN_10151f0bc();
  return;
}



/* Entry: 10151f3b8; end: 10151f3bb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10151f3b8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10151f3bc; end: 10151f3f3;  */

uint FUN_10151f3bc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_1015200a8();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}


