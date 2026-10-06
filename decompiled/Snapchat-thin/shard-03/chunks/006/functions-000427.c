/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102afafa4; end: 102afafe7; -[SCDirectorModeScopeGraphBridgeSaberEntryPoint end] */

void FUN_102afafa4(undefined8 param_1)

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



/* Entry: 102afafe8; end: 102afb1eb;  */

void FUN_102afafe8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0faf8f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010f050710,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002b;
        if (((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0f13f20)) &&
           (func_0x000107c605b8(0xd00000000000002b,0x800000010f0ec0e0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "DirectorModeScopeGraphBridge/SCDirectorModeScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x50,2,0x35,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102afb1ec);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5413c();
        goto LAB_102afb074;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c580e8();
  }
LAB_102afb074:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102afb1ec; end: 102afb297; -[SCDirectorModeScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102afb1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102afafe8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102afb298; end: 102afb30f; -[SCDirectorModeScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afb298(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eee4d8,0);
  *(undefined8 *)(param_1 + _DAT_112eee4e0) = 0;
  *(undefined8 *)(param_1 + _DAT_112eee4e8) = 0;
  *(undefined8 *)(param_1 + _DAT_112eee4f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102afb310; end: 102afb343;  */

void FUN_102afb310(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102afb344; end: 102afb39b; -[SCDirectorModeScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102afb370: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102afb374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afb344(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eee4d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eee4e0));
  return;
}



/* Entry: 102afb39c; end: 102afb3bb;  */

void FUN_102afb39c(void)

{
  func_0x000107c61168(&PTR_PTR_112888788);
  return;
}



/* Entry: 102afb3bc; end: 102afb3c7; -[SCSCDirectorModeWorkflowServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afb3bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eee520;
  func_0x000107c61428(param_1 + _DAT_112eee520,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102afb3c8; end: 102afb3d3; -[SCSCDirectorModeWorkflowServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afb3c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eee520;
  func_0x000107c61428(param_1 + _DAT_112eee520,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102afb3d4; end: 102afb3df; -[SCSCDirectorModeWorkflowServicesSaberEntryPoint directorModeScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afb3d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eee528;
  func_0x000107c61428(param_1 + _DAT_112eee528,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102afb3e0; end: 102afb423;  */

void FUN_102afb3e0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102afb424; end: 102afb42f; -[SCSCDirectorModeWorkflowServicesSaberEntryPoint setDirectorModeScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afb424(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eee528;
  func_0x000107c61428(param_1 + _DAT_112eee528,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102afb430; end: 102afb483;  */

void FUN_102afb430(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102afb484; end: 102afb4cb; -[SCSCDirectorModeWorkflowServicesSaberEntryPoint sCDirectorModeWorkflowServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afb484(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eee530;
  func_0x000107c61428(param_1 + _DAT_112eee530,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102afb4cc; end: 102afb52f; -[SCSCDirectorModeWorkflowServicesSaberEntryPoint setSCDirectorModeWorkflowServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afb4cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eee530;
  func_0x000107c61428(param_1 + _DAT_112eee530,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102afb530; end: 102afb6b3;  */

/* WARNING: Possible PIC construction at 0x000102afb630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102afb640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102afb65c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102afb634) */
/* WARNING: Removing unreachable block (ram,0x000102afb644) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afb530(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c41e84();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50d20();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_102afa34c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112eee480);
        *(undefined8 *)(lVar2 + _DAT_112eee3f8) = uVar6;
        *(long *)(lVar2 + _DAT_112eee400) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112eee400);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 102afb6b4; end: 102afb6db; -[SCSCDirectorModeWorkflowServicesSaberEntryPoint begin] */

void FUN_102afb6b4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102afb530();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102afb6dc; end: 102afb71f; -[SCSCDirectorModeWorkflowServicesSaberEntryPoint end] */

void FUN_102afb6dc(undefined8 param_1)

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



/* Entry: 102afb720; end: 102afb923;  */

void FUN_102afb720(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0f13e90)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000024,0x800000010f0ec170,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000025;
        if (((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0f13e60)) &&
           (func_0x000107c605b8(0xd000000000000025,0x800000010f0ec1a0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "DirectorModeScopeGraphBridge/SCSCDirectorModeWorkflowServicesSaberEntryPoint.swift"
                              ,0x52,2,0x35,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102afb924);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c582c8();
        goto LAB_102afb7ac;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54138();
  }
LAB_102afb7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102afb924; end: 102afb9cf; -[SCSCDirectorModeWorkflowServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102afb924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102afb720(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102afb9d0; end: 102afba4f; -[SCSCDirectorModeWorkflowServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afb9d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eee520,0);
  func_0x000107c61614(param_1 + _DAT_112eee528,0);
  *(undefined8 *)(param_1 + _DAT_112eee530) = 0;
  *(undefined8 *)(param_1 + _DAT_112eee538) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102afba50; end: 102afba83;  */

void FUN_102afba50(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102afba84; end: 102afbadb; -[SCSCDirectorModeWorkflowServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102afbac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102afbac4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afba84(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eee520);
  func_0x000107c61610(param_1 + _DAT_112eee528);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eee530));
  return;
}



/* Entry: 102afbadc; end: 102afbafb;  */

void FUN_102afbadc(void)

{
  func_0x000107c61168(&PTR_PTR_112888858);
  return;
}



/* Entry: 102afbafc; end: 102afbb43; -[SCSCDirectorModeScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afbafc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eee568;
  func_0x000107c61428(param_1 + _DAT_112eee568,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102afbb44; end: 102afbb9b; -[SCSCDirectorModeScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afbb44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eee568;
  func_0x000107c61428(param_1 + _DAT_112eee568,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102afbb9c; end: 102afbc73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afbb9c(undefined8 param_1,long param_2)

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
    FUN_102afa5a4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112eee430) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102afbc74);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112eee438);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112eee570);
    *(long **)(unaff_x20 + _DAT_112eee570) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102afbc74; end: 102afbc9b; -[SCSCDirectorModeScopedServicesSaberEntryPoint begin] */

void FUN_102afbc74(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102afbb9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102afbc9c; end: 102afbe13;  */

/* WARNING: Possible PIC construction at 0x000102afbd04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102afbd9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102afbd08) */
/* WARNING: Removing unreachable block (ram,0x000102afbda0) */
/* WARNING: Removing unreachable block (ram,0x000102afbdb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afbc9c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112eee570);
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



/* Entry: 102afbe14; end: 102afbe1b;  */

void FUN_102afbe14(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102afbe1c; end: 102afbe4f; -[SCSCDirectorModeScopedServicesSaberEntryPoint end] */

void FUN_102afbe1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102afbc9c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102afbe50; end: 102afbf6f;  */

void FUN_102afbe50(long param_1,long param_2,long param_3)

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
                        "DirectorModeScopeGraphBridge/SCSCDirectorModeScopedServicesSaberEntryPoint.swift"
                        ,0x50,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102afbf70);
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



/* Entry: 102afbf70; end: 102afc01b; -[SCSCDirectorModeScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102afbf70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102afbe50(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102afc01c; end: 102afc07b; -[SCSCDirectorModeScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afc01c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eee568,0);
  *(undefined8 *)(param_1 + _DAT_112eee570) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102afc07c; end: 102afc0af;  */

void FUN_102afc07c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102afc0b0; end: 102afc0e7; -[SCSCDirectorModeScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afc0b0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eee568);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eee570));
  return;
}



/* Entry: 102afc0e8; end: 102afc107;  */

void FUN_102afc0e8(void)

{
  func_0x000107c61168(&PTR_PTR_112888928);
  return;
}



/* Entry: 102afc108; end: 102afc173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afc108(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eee5a8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102afc174; end: 102afc1d3; -[_TtC38MainCameraScopedFactoryServiceProvider26SCMainCameraScopedServices init] */

void FUN_102afc174(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MainCameraScopedFactoryServiceProvider.SCMainCameraScopedServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102afc1a0);
  (*pcVar1)();
}



/* Entry: 102afc1d4; end: 102afc1e3; -[_TtC38MainCameraScopedFactoryServiceProvider26SCMainCameraScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afc1d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eee5a8));
  return;
}



/* Entry: 102afc1e4; end: 102afc24f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102afc1e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11059a378;
  func_0x000107c613fc(&UNK_11059a378,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102afc2d8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102afc250; end: 102afc2af;  */

undefined1  [16] FUN_102afc250(void)

{
  return ZEXT816(0x11059a2b8);
}



/* Entry: 102afc2b0; end: 102afc2d7;  */

void FUN_102afc2b0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102afc2d8; end: 102afc2eb;  */

void FUN_102afc2d8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102afc2ec; end: 102afc387;  */

long FUN_102afc2ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001007b7d14(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x0001007b8004(param_1,param_2,param_3);
  *(long *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174();
  return unaff_x20;
}



/* Entry: 102afc388; end: 102afc3c3;  */

void FUN_102afc388(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102afc3c4; end: 102afc407;  */

undefined1  [16] FUN_102afc3c4(void)

{
  return ZEXT816(0x11059a708);
}



/* Entry: 102afc408; end: 102afc433;  */

undefined8 FUN_102afc408(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 102afc434; end: 102afc7c3;  */

long FUN_102afc434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  *(undefined8 *)(unaff_x20 + 0x48) = param_6;
  *(undefined8 *)(unaff_x20 + 0x50) = param_7;
  *(undefined8 *)(unaff_x20 + 0x58) = param_8;
  *(undefined8 *)(unaff_x20 + 0x60) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_10;
  *(undefined8 *)(unaff_x20 + 0x70) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_12;
  *(undefined8 *)(unaff_x20 + 0x80) = param_13;
  *(undefined8 *)(unaff_x20 + 0x88) = param_14;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  func_0x0001007b6618();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = param_1;
  func_0x0001007b6638(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14,puVar2,puVar3);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
  func_0x000107c6157c();
  func_0x0001007b6828();
  func_0x000107c61574(uVar4);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102afc7c0);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x90) = puVar2;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    *(undefined **)(unaff_x20 + 0x98) = puVar3;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102afc7c4);
  (*pcVar1)();
}



/* Entry: 102afc7c4; end: 102afc887;  */

void FUN_102afc7c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 102afc888; end: 102afc8db;  */

undefined1  [16] FUN_102afc888(void)

{
  return ZEXT816(0x11059a7a8);
}



/* Entry: 102afc8dc; end: 102afc907;  */

undefined8 FUN_102afc8dc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 102afc908; end: 102afcb47;  */

long FUN_102afc908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  func_0x0001007db3d8();
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001007db3f8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  func_0x0001007dbbcc();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 102afcb48; end: 102afcbcb;  */

void FUN_102afcb48(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102afcbcc; end: 102afcbff;  */

undefined1  [16] FUN_102afcbcc(void)

{
  return ZEXT816(0x11059a868);
}



/* Entry: 102afcc00; end: 102afcc2b;  */

undefined8 FUN_102afcc00(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 102afcc2c; end: 102afccbb;  */

long FUN_102afcc2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001007dc798(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x0001007dc7b8(param_1,param_2,param_3);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 102afccbc; end: 102afccef;  */

void FUN_102afccbc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102afccf0; end: 102afcd23;  */

undefined1  [16] FUN_102afccf0(void)

{
  return ZEXT816(0x11059a8e8);
}



/* Entry: 102afcd24; end: 102afcd4f;  */

undefined8 FUN_102afcd24(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 102afcd50; end: 102afce4f;  */

long FUN_102afcd50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  func_0x0001007dccf0(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x0001007dcd10(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 102afce50; end: 102afcebb;  */

void FUN_102afce50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 102afcebc; end: 102afceef;  */

undefined1  [16] FUN_102afcebc(void)

{
  return ZEXT816(0x11059a968);
}



/* Entry: 102afcef0; end: 102afcf1b;  */

undefined8 FUN_102afcef0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 102afcf1c; end: 102afd023;  */

long FUN_102afcf1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  func_0x0001000285a8(0x112e4b708,&UNK_10da44ae8);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c6157c(param_4);
  func_0x00010025a71c();
  puVar2 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x0001007de290(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar2);
  func_0x0001007de2b0(param_1,param_2,param_3,puVar2);
  func_0x000107c61574(param_4);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 102afd024; end: 102afd05f;  */

void FUN_102afd024(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102afd060; end: 102afd093;  */

undefined1  [16] FUN_102afd060(void)

{
  return ZEXT816(0x11059a9e8);
}



/* Entry: 102afd094; end: 102afd0bf;  */

undefined8 FUN_102afd094(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 102afd0c0; end: 102afd19f;  */

long FUN_102afd0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001007defbc(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001007defdc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  func_0x0001007df010();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 102afd1a0; end: 102afd1d3;  */

void FUN_102afd1a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102afd1d4; end: 102afd207;  */

undefined1  [16] FUN_102afd1d4(void)

{
  return ZEXT816(0x11059aa68);
}



/* Entry: 102afd208; end: 102afd233;  */

undefined8 FUN_102afd208(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 102afd234; end: 102afd2a7;  */

long FUN_102afd234(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x0001007df39c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x0001007df3bc(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 102afd2a8; end: 102afd2d3;  */

void FUN_102afd2a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102afd2d4; end: 102afd31b;  */

undefined8 FUN_102afd2d4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000103375db4();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 102afd31c; end: 102afd357;  */

undefined1  [16] FUN_102afd31c(void)

{
  return ZEXT816(0x11059aae8);
}



/* Entry: 102afd358; end: 102afd543;  */

long FUN_102afd358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  func_0x0001007e09d8();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x0001007e09f8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14,param_15,param_16);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 102afd544; end: 102afd5f7;  */

void FUN_102afd544(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 102afd5f8; end: 102afd62b;  */

undefined1  [16] FUN_102afd5f8(void)

{
  return ZEXT816(0x11059ab68);
}



/* Entry: 102afd62c; end: 102afd657;  */

undefined8 FUN_102afd62c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 102afd658; end: 102afdbff;  */

long FUN_102afd658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  func_0x0001000285a8(0x112eeefd0,&UNK_10db1e410);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_10;
  func_0x000107c6157c(param_10);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar2 = PTR_PTR_1126abf38;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0x656d61436e69616d;
  func_0x000107c5fadc(0x656d61436e69616d,0xef65706f63536172);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2a290);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0ed880);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85540);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1df60);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0ed8a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0ed8d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0ed8f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  puVar1 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61574(param_10);
  *(undefined **)(unaff_x20 + 0x60) = puVar1;
  return unaff_x20;
}



/* Entry: 102afdc00; end: 102afdc8b;  */

void FUN_102afdc00(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102afdc8c; end: 102afdcdb;  */

undefined8 FUN_102afdc8c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102afdcdc; end: 102afdd1f;  */

undefined1  [16] FUN_102afdcdc(void)

{
  return ZEXT816(0x11059abe8);
}



/* Entry: 102afdd20; end: 102afdd47;  */

void FUN_102afdd20(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102afdd48; end: 102afdd4f;  */

undefined8 FUN_102afdd48(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102afdd50; end: 102afe0b3;  */

long FUN_102afdd50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126abf40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar4 = 0x656d61436e69616d;
  func_0x000107c5fadc(0x656d61436e69616d,0xef65706f63536172);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f0ed910);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f0ed940);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_5);
    *(undefined **)(unaff_x20 + 0x40) = puVar2;
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102afe0b4);
  (*pcVar1)();
}



/* Entry: 102afe0b4; end: 102afe11f;  */

void FUN_102afe0b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 102afe120; end: 102afe16f;  */

undefined8 FUN_102afe120(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102afe170; end: 102afe1b3;  */

undefined1  [16] FUN_102afe170(void)

{
  return ZEXT816(0x11059ac88);
}



/* Entry: 102afe1b4; end: 102afe1db;  */

void FUN_102afe1b4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102afe1dc; end: 102afe1e3;  */

undefined8 FUN_102afe1dc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102afe1e4; end: 102afe21f;  */

undefined8 FUN_102afe1e4(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001007ad3a8(param_1);
  return unaff_x20;
}



/* Entry: 102afe220; end: 102afe24b;  */

void FUN_102afe220(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102afe24c; end: 102afe29b;  */

undefined8 FUN_102afe24c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102afe29c; end: 102afe2df;  */

undefined1  [16] FUN_102afe29c(void)

{
  return ZEXT816(0x11059ad28);
}



/* Entry: 102afe2e0; end: 102afe307;  */

void FUN_102afe2e0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102afe308; end: 102afe30f;  */

undefined8 FUN_102afe308(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102afe310; end: 102b00ef3;  */

long FUN_102afe310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3;
  *(undefined8 *)(unaff_x20 + 0x48) = param_4;
  *(undefined8 *)(unaff_x20 + 0x50) = param_5;
  *(undefined8 *)(unaff_x20 + 0x58) = param_6;
  *(undefined8 *)(unaff_x20 + 0x60) = param_7;
  *(undefined8 *)(unaff_x20 + 0x68) = param_8;
  *(undefined8 *)(unaff_x20 + 0x70) = param_9;
  *(undefined8 *)(unaff_x20 + 0x78) = param_10;
  *(undefined8 *)(unaff_x20 + 0x80) = param_11;
  *(undefined8 *)(unaff_x20 + 0x88) = param_12;
  *(undefined8 *)(unaff_x20 + 0x90) = param_13;
  *(undefined8 *)(unaff_x20 + 0x98) = param_14;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_15;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_16;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_17;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_18;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_19;
  *(undefined8 *)(unaff_x20 + 200) = param_20;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_21;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_22;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_23;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_24;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_25;
  *(undefined8 *)(unaff_x20 + 0xf8) = param_26;
  *(undefined8 *)(unaff_x20 + 0x100) = param_27;
  *(undefined8 *)(unaff_x20 + 0x108) = param_28;
  *(undefined8 *)(unaff_x20 + 0x110) = param_29;
  *(undefined8 *)(unaff_x20 + 0x118) = param_30;
  *(undefined8 *)(unaff_x20 + 0x120) = param_31;
  *(undefined8 *)(unaff_x20 + 0x128) = param_32;
  *(undefined8 *)(unaff_x20 + 0x130) = param_33;
  *(undefined8 *)(unaff_x20 + 0x138) = param_34;
  *(undefined8 *)(unaff_x20 + 0x140) = param_35;
  *(undefined8 *)(unaff_x20 + 0x148) = param_36;
  *(undefined8 *)(unaff_x20 + 0x150) = param_37;
  *(undefined8 *)(unaff_x20 + 0x158) = param_38;
  *(undefined8 *)(unaff_x20 + 0x160) = param_39;
  *(undefined8 *)(unaff_x20 + 0x168) = param_40;
  *(undefined8 *)(unaff_x20 + 0x170) = param_41;
  *(undefined8 *)(unaff_x20 + 0x178) = param_42;
  *(undefined8 *)(unaff_x20 + 0x180) = param_43;
  *(undefined8 *)(unaff_x20 + 0x188) = param_44;
  *(undefined8 *)(unaff_x20 + 400) = param_45;
  *(undefined8 *)(unaff_x20 + 0x198) = param_46;
  *(undefined8 *)(unaff_x20 + 0x1a0) = param_47;
  *(undefined8 *)(unaff_x20 + 0x1a8) = param_48;
  *(undefined8 *)(unaff_x20 + 0x1b0) = param_49;
  *(undefined8 *)(unaff_x20 + 0x1b8) = param_50;
  *(undefined8 *)(unaff_x20 + 0x1c0) = param_51;
  *(undefined8 *)(unaff_x20 + 0x1c8) = param_52;
  *(undefined8 *)(unaff_x20 + 0x1d0) = param_53;
  *(undefined8 *)(unaff_x20 + 0x1d8) = param_54;
  *(undefined8 *)(unaff_x20 + 0x1e0) = param_55;
  *(undefined8 *)(unaff_x20 + 0x1e8) = param_56;
  *(undefined8 *)(unaff_x20 + 0x1f0) = param_57;
  *(undefined8 *)(unaff_x20 + 0x1f8) = param_58;
  *(undefined8 *)(unaff_x20 + 0x200) = param_59;
  *(undefined8 *)(unaff_x20 + 0x208) = param_60;
  *(undefined8 *)(unaff_x20 + 0x210) = param_61;
  *(undefined8 *)(unaff_x20 + 0x218) = param_62;
  *(undefined8 *)(unaff_x20 + 0x220) = param_63;
  *(undefined8 *)(unaff_x20 + 0x228) = param_64;
  *(undefined8 *)(unaff_x20 + 0x230) = param_65;
  *(undefined8 *)(unaff_x20 + 0x238) = param_66;
  *(undefined8 *)(unaff_x20 + 0x240) = param_67;
  *(undefined8 *)(unaff_x20 + 0x248) = param_68;
  *(undefined8 *)(unaff_x20 + 0x250) = param_69;
  *(undefined8 *)(unaff_x20 + 600) = param_70;
  *(undefined8 *)(unaff_x20 + 0x260) = in_stack_000001f0;
  *(undefined8 *)(unaff_x20 + 0x268) = in_stack_000001f8;
  *(undefined8 *)(unaff_x20 + 0x270) = in_stack_00000200;
  *(undefined8 *)(unaff_x20 + 0x278) = in_stack_00000208;
  *(undefined8 *)(unaff_x20 + 0x280) = in_stack_00000210;
  *(undefined8 *)(unaff_x20 + 0x288) = in_stack_00000218;
  *(undefined8 *)(unaff_x20 + 0x290) = in_stack_00000220;
  *(undefined8 *)(unaff_x20 + 0x298) = in_stack_00000228;
  *(undefined8 *)(unaff_x20 + 0x2a0) = in_stack_00000230;
  *(undefined8 *)(unaff_x20 + 0x2a8) = in_stack_00000238;
  *(undefined8 *)(unaff_x20 + 0x2b0) = in_stack_00000240;
  func_0x0001000285a8(0x112eeaca0,&UNK_10db1e9b0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = in_stack_00000248;
  func_0x000107c6157c(in_stack_00000248);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar4;
  func_0x0001000285a8(0x112ea2ce8,&UNK_10db185d0);
  func_0x000107c610f8();
  uVar2 = in_stack_00000250;
  func_0x000107c6157c(in_stack_00000250);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *(undefined **)(unaff_x20 + 0x20) = puVar5;
  func_0x0001000285a8(0x112e1ffe0,&UNK_10db1e9c0);
  func_0x000107c610f8();
  uVar2 = in_stack_00000258;
  func_0x000107c6157c();
  func_0x0001003b3b80();
  puVar6 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *(undefined **)(unaff_x20 + 0x28) = puVar6;
  puVar7 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x30) = puVar7;
  puVar3 = PTR_PTR_1126abf50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x656d61436e69616d;
  func_0x000107c5fadc(0x656d61436e69616d,0xef65706f63536172);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0ed970);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f0ed9a0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c615f0(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0ed9e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c615f0(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0eda00);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0eda20);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f0eda50);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0eda80);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f0edaa0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef3a1f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  uVar2 = uVar10;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000012;
  uVar2 = uVar8;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f086f40);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef38480);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000014;
  uVar2 = uVar9;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f052080);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  uVar2 = uVar11;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010effce40);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f0edad0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0edb00);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc1b80);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_20);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar11;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_21);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0edb20);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_22);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar8;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_23);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x726553646e756f73;
  func_0x000107c5fadc(0x726553646e756f73,0xed00007365636976);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_24);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f0edb50);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_25);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar9;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1ae00);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_26);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f07dc00);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_27);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar11;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef3c3c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_28);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26b50);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_29);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f01a160);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_30);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar9;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f03efe0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_31);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc3430);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_32);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2a530);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_33);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef21f60);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_34);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_35);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f03ef90);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_36);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0edb80);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_37);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar11;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_38);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000032;
  func_0x000107c5fadc(0xd000000000000032,0x800000010f0edbb0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_39);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f0edbf0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_40);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_41);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f0ed910);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_42);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_43);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_44);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x536e496b63656863;
  func_0x000107c5fadc(0x536e496b63656863,0xef73656369767265);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_45);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f088370);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_46);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar9;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_47);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef85580);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_48);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f0edc20);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_49);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef383e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar9;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0dbb00);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_51);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar2 = uVar10;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_52);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85500);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_53);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar2 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0edc60);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_54);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef252f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_55);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_56);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_57);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f088f10);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_58);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar2 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0edc90);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_59);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85560);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_60);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_61);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0edcc0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_62);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0881f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_63);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f05c220);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_64);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_65);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_66);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x726553636973756d;
  func_0x000107c5fadc(0x726553636973756d,0xed00007365636976);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_67);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f0edce0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_68);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef1ba20);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_69);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f05c530);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_70);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0e84c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(in_stack_000001f0);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(in_stack_000001f8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f006f40);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(in_stack_00000200);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f01ac50);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(in_stack_00000208);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(in_stack_00000210);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(in_stack_00000218);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26270);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(in_stack_00000220);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(in_stack_00000228);
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0edd20);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(in_stack_00000228);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(in_stack_00000230);
  func_0x000107c61174(puVar3);
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(in_stack_00000230);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(in_stack_00000238);
  func_0x000107c61174(puVar3);
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef20290);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(in_stack_00000238);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f05c280);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(in_stack_00000240);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0e8650);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0e8540);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(puVar3);
  func_0x000107c61174(puVar5);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0e8560);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(puVar3);
  func_0x000107c61174(puVar6);
  uVar2 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f00d000);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c615e8(param_5);
    func_0x000107c615e8(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(param_23);
    func_0x000107c61170(param_24);
    func_0x000107c61170(param_25);
    func_0x000107c61170(param_26);
    func_0x000107c61170(param_27);
    func_0x000107c61170(param_28);
    func_0x000107c61170(param_29);
    func_0x000107c61170(param_30);
    func_0x000107c61170(param_31);
    func_0x000107c61170(param_32);
    func_0x000107c61170(param_33);
    func_0x000107c61170(param_34);
    func_0x000107c61170(param_35);
    func_0x000107c61170(param_36);
    func_0x000107c61170(param_37);
    func_0x000107c61170(param_38);
    func_0x000107c61170(param_39);
    func_0x000107c61170(param_40);
    func_0x000107c61170(param_41);
    func_0x000107c61170(param_42);
    func_0x000107c61170(param_43);
    func_0x000107c61170(param_44);
    func_0x000107c61170(param_45);
    func_0x000107c61170(param_46);
    func_0x000107c61170(param_47);
    func_0x000107c61170(param_48);
    func_0x000107c61170(param_49);
    func_0x000107c61170(param_50);
    func_0x000107c61170(param_51);
    func_0x000107c61170(param_52);
    func_0x000107c61170(param_53);
    func_0x000107c61170(param_54);
    func_0x000107c61170(param_55);
    func_0x000107c61170(param_56);
    func_0x000107c61170(param_57);
    func_0x000107c61170(param_58);
    func_0x000107c61170(param_59);
    func_0x000107c61170(param_60);
    func_0x000107c61170(param_61);
    func_0x000107c61170(param_62);
    func_0x000107c61170(param_63);
    func_0x000107c61170(param_64);
    func_0x000107c61170(param_65);
    func_0x000107c61170(param_66);
    func_0x000107c61170(param_67);
    func_0x000107c61170(param_68);
    func_0x000107c61170(param_69);
    func_0x000107c61170(param_70);
    func_0x000107c61170(in_stack_000001f0);
    func_0x000107c61170(in_stack_000001f8);
    func_0x000107c61170(in_stack_00000200);
    func_0x000107c61170(in_stack_00000208);
    func_0x000107c61170(in_stack_00000210);
    func_0x000107c61170(in_stack_00000218);
    func_0x000107c61170(in_stack_00000220);
    func_0x000107c61170(in_stack_00000228);
    func_0x000107c61170(in_stack_00000230);
    func_0x000107c61170(in_stack_00000238);
    func_0x000107c61170(in_stack_00000240);
    func_0x000107c61574(in_stack_00000248);
    func_0x000107c61574(in_stack_00000250);
    func_0x000107c61574(in_stack_00000258);
    *(undefined **)(unaff_x20 + 0x2b8) = puVar7;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b00ef4);
  (*pcVar1)();
}



/* Entry: 102b00ef4; end: 102b011d7;  */

void FUN_102b00ef4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2b8));
  return;
}


