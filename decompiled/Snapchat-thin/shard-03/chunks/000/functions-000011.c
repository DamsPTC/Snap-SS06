/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10237d5d0; end: 10237d617; -[SCSCPreviewTooltipsServicesSaberEntryPoint sCPreviewTooltipsServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237d5d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8cbb8;
  func_0x000107c61428(param_1 + _DAT_112e8cbb8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10237d618; end: 10237d67b; -[SCSCPreviewTooltipsServicesSaberEntryPoint setSCPreviewTooltipsServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237d618(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e8cbb8;
  func_0x000107c61428(param_1 + _DAT_112e8cbb8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10237d67c; end: 10237d7ff;  */

/* WARNING: Possible PIC construction at 0x00010237d77c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010237d78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010237d7a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010237d780) */
/* WARNING: Removing unreachable block (ram,0x00010237d790) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237d67c(void)

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
    func_0x000107c4f18c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c511e8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_10236455c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e8c478);
        *(undefined8 *)(lVar2 + _DAT_112e86e58) = uVar6;
        *(long *)(lVar2 + _DAT_112e86e60) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e86e60);
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



/* Entry: 10237d800; end: 10237d827; -[SCSCPreviewTooltipsServicesSaberEntryPoint begin] */

void FUN_10237d800(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10237d67c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10237d828; end: 10237d86b; -[SCSCPreviewTooltipsServicesSaberEntryPoint end] */

void FUN_10237d828(undefined8 param_1)

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



/* Entry: 10237d86c; end: 10237da6f;  */

void FUN_10237d86c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f6d8c0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f092740,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef0f6cfa0)) &&
           (func_0x000107c605b8(0xd000000000000020,0x800000010f093060,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "PreviewScopeGraphBridge/SCSCPreviewTooltipsServicesSaberEntryPoint.swift"
                              ,0x48,2,0xca,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10237da70);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58790();
        goto LAB_10237d8f8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c577d4();
  }
LAB_10237d8f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10237da70; end: 10237db1b; -[SCSCPreviewTooltipsServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10237da70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10237d86c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10237db1c; end: 10237db9b; -[SCSCPreviewTooltipsServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237db1c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e8cba8,0);
  func_0x000107c61614(param_1 + _DAT_112e8cbb0,0);
  *(undefined8 *)(param_1 + _DAT_112e8cbb8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e8cbc0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10237db9c; end: 10237dbcf;  */

void FUN_10237db9c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10237dbd0; end: 10237dc27; -[SCSCPreviewTooltipsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010237dc0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010237dc10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237dbd0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e8cba8);
  func_0x000107c61610(param_1 + _DAT_112e8cbb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e8cbb8));
  return;
}



/* Entry: 10237dc28; end: 10237dc47;  */

void FUN_10237dc28(void)

{
  func_0x000107c61168(&PTR_PTR_1128371a8);
  return;
}



/* Entry: 10237dc48; end: 10237dc53; -[SCSCSendFlowDependentTasksServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237dc48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8cbf0;
  func_0x000107c61428(param_1 + _DAT_112e8cbf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10237dc54; end: 10237dc5f; -[SCSCSendFlowDependentTasksServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237dc54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e8cbf0;
  func_0x000107c61428(param_1 + _DAT_112e8cbf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10237dc60; end: 10237dc6b; -[SCSCSendFlowDependentTasksServicesSaberEntryPoint previewScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237dc60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8cbf8;
  func_0x000107c61428(param_1 + _DAT_112e8cbf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10237dc6c; end: 10237dcaf;  */

void FUN_10237dc6c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10237dcb0; end: 10237dcbb; -[SCSCSendFlowDependentTasksServicesSaberEntryPoint setPreviewScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237dcb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e8cbf8;
  func_0x000107c61428(param_1 + _DAT_112e8cbf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10237dcbc; end: 10237dd0f;  */

void FUN_10237dcbc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10237dd10; end: 10237dd57; -[SCSCSendFlowDependentTasksServicesSaberEntryPoint sCSendFlowDependentTasksServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237dd10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8cc00;
  func_0x000107c61428(param_1 + _DAT_112e8cc00,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10237dd58; end: 10237ddbb; -[SCSCSendFlowDependentTasksServicesSaberEntryPoint setSCSendFlowDependentTasksServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237dd58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e8cc00;
  func_0x000107c61428(param_1 + _DAT_112e8cc00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10237ddbc; end: 10237df3f;  */

/* WARNING: Possible PIC construction at 0x00010237debc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010237decc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010237dee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010237dec0) */
/* WARNING: Removing unreachable block (ram,0x00010237ded0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237ddbc(void)

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
    func_0x000107c4f18c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51284();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_102364714();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e8c4b0);
        *(undefined8 *)(lVar2 + _DAT_112e86e90) = uVar6;
        *(long *)(lVar2 + _DAT_112e86e98) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e86e98);
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



/* Entry: 10237df40; end: 10237df67; -[SCSCSendFlowDependentTasksServicesSaberEntryPoint begin] */

void FUN_10237df40(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10237ddbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10237df68; end: 10237dfab; -[SCSCSendFlowDependentTasksServicesSaberEntryPoint end] */

void FUN_10237df68(undefined8 param_1)

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



/* Entry: 10237dfac; end: 10237e1af;  */

void FUN_10237dfac(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f6d8c0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f092740,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000027;
        if (((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0f6cf20)) &&
           (func_0x000107c605b8(0xd000000000000027,0x800000010f0930e0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "PreviewScopeGraphBridge/SCSCSendFlowDependentTasksServicesSaberEntryPoint.swift"
                              ,0x4f,2,0xca,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10237e1b0);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5882c();
        goto LAB_10237e038;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c577d4();
  }
LAB_10237e038:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10237e1b0; end: 10237e25b; -[SCSCSendFlowDependentTasksServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10237e1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10237dfac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10237e25c; end: 10237e2db; -[SCSCSendFlowDependentTasksServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237e25c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e8cbf0,0);
  func_0x000107c61614(param_1 + _DAT_112e8cbf8,0);
  *(undefined8 *)(param_1 + _DAT_112e8cc00) = 0;
  *(undefined8 *)(param_1 + _DAT_112e8cc08) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10237e2dc; end: 10237e30f;  */

void FUN_10237e2dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10237e310; end: 10237e367; -[SCSCSendFlowDependentTasksServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010237e34c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010237e350) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237e310(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e8cbf0);
  func_0x000107c61610(param_1 + _DAT_112e8cbf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e8cc00));
  return;
}



/* Entry: 10237e368; end: 10237e387;  */

void FUN_10237e368(void)

{
  func_0x000107c61168(&PTR_PTR_112837278);
  return;
}



/* Entry: 10237e388; end: 10237e393; -[SCSCUcoCommandMapperServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237e388(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8cc38;
  func_0x000107c61428(param_1 + _DAT_112e8cc38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10237e394; end: 10237e39f; -[SCSCUcoCommandMapperServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237e394(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e8cc38;
  func_0x000107c61428(param_1 + _DAT_112e8cc38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10237e3a0; end: 10237e3ab; -[SCSCUcoCommandMapperServicesSaberEntryPoint previewScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237e3a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8cc40;
  func_0x000107c61428(param_1 + _DAT_112e8cc40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10237e3ac; end: 10237e3ef;  */

void FUN_10237e3ac(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10237e3f0; end: 10237e3fb; -[SCSCUcoCommandMapperServicesSaberEntryPoint setPreviewScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237e3f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e8cc40;
  func_0x000107c61428(param_1 + _DAT_112e8cc40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10237e3fc; end: 10237e44f;  */

void FUN_10237e3fc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10237e450; end: 10237e497; -[SCSCUcoCommandMapperServicesSaberEntryPoint sCUcoCommandMapperServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237e450(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8cc48;
  func_0x000107c61428(param_1 + _DAT_112e8cc48,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10237e498; end: 10237e4fb; -[SCSCUcoCommandMapperServicesSaberEntryPoint setSCUcoCommandMapperServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237e498(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e8cc48;
  func_0x000107c61428(param_1 + _DAT_112e8cc48,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10237e4fc; end: 10237e67f;  */

/* WARNING: Possible PIC construction at 0x00010237e5fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010237e60c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010237e628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010237e600) */
/* WARNING: Removing unreachable block (ram,0x00010237e610) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237e4fc(void)

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
    func_0x000107c4f18c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c514bc();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_1023648cc();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e8c4e8);
        *(undefined8 *)(lVar2 + _DAT_112e86ec8) = uVar6;
        *(long *)(lVar2 + _DAT_112e86ed0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e86ed0);
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



/* Entry: 10237e680; end: 10237e6a7; -[SCSCUcoCommandMapperServicesSaberEntryPoint begin] */

void FUN_10237e680(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10237e4fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10237e6a8; end: 10237e6eb; -[SCSCUcoCommandMapperServicesSaberEntryPoint end] */

void FUN_10237e6a8(undefined8 param_1)

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



/* Entry: 10237e6ec; end: 10237e8ef;  */

void FUN_10237e6ec(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f6d8c0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f092740,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000021;
        if (((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0f6cea0)) &&
           (func_0x000107c605b8(0xd000000000000021,0x800000010f093160,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "PreviewScopeGraphBridge/SCSCUcoCommandMapperServicesSaberEntryPoint.swift"
                              ,0x49,2,0xca,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10237e8f0);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58a64();
        goto LAB_10237e778;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c577d4();
  }
LAB_10237e778:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10237e8f0; end: 10237e99b; -[SCSCUcoCommandMapperServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10237e8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10237e6ec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10237e99c; end: 10237ea1b; -[SCSCUcoCommandMapperServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237e99c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e8cc38,0);
  func_0x000107c61614(param_1 + _DAT_112e8cc40,0);
  *(undefined8 *)(param_1 + _DAT_112e8cc48) = 0;
  *(undefined8 *)(param_1 + _DAT_112e8cc50) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10237ea1c; end: 10237ea4f;  */

void FUN_10237ea1c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10237ea50; end: 10237eaa7; -[SCSCUcoCommandMapperServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010237ea8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010237ea90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237ea50(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e8cc38);
  func_0x000107c61610(param_1 + _DAT_112e8cc40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e8cc48));
  return;
}



/* Entry: 10237eaa8; end: 10237eac7;  */

void FUN_10237eaa8(void)

{
  func_0x000107c61168(&PTR_PTR_112837348);
  return;
}



/* Entry: 10237eac8; end: 10237ead3; -[SCSCUcoImageProcessServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237eac8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8cc80;
  func_0x000107c61428(param_1 + _DAT_112e8cc80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10237ead4; end: 10237eadf; -[SCSCUcoImageProcessServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237ead4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e8cc80;
  func_0x000107c61428(param_1 + _DAT_112e8cc80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10237eae0; end: 10237eaeb; -[SCSCUcoImageProcessServicesSaberEntryPoint previewScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237eae0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8cc88;
  func_0x000107c61428(param_1 + _DAT_112e8cc88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10237eaec; end: 10237eb2f;  */

void FUN_10237eaec(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10237eb30; end: 10237eb3b; -[SCSCUcoImageProcessServicesSaberEntryPoint setPreviewScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237eb30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e8cc88;
  func_0x000107c61428(param_1 + _DAT_112e8cc88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10237eb3c; end: 10237eb8f;  */

void FUN_10237eb3c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10237eb90; end: 10237ebd7; -[SCSCUcoImageProcessServicesSaberEntryPoint sCUcoImageProcessServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237eb90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8cc90;
  func_0x000107c61428(param_1 + _DAT_112e8cc90,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10237ebd8; end: 10237ec3b; -[SCSCUcoImageProcessServicesSaberEntryPoint setSCUcoImageProcessServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237ebd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e8cc90;
  func_0x000107c61428(param_1 + _DAT_112e8cc90,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10237ec3c; end: 10237edbf;  */

/* WARNING: Possible PIC construction at 0x00010237ed3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010237ed4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010237ed68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010237ed40) */
/* WARNING: Removing unreachable block (ram,0x00010237ed50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237ec3c(void)

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
    func_0x000107c4f18c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c514c4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_102364a84();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e8c4f0);
        *(undefined8 *)(lVar2 + _DAT_112e86f00) = uVar6;
        *(long *)(lVar2 + _DAT_112e86f08) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e86f08);
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



/* Entry: 10237edc0; end: 10237ede7; -[SCSCUcoImageProcessServicesSaberEntryPoint begin] */

void FUN_10237edc0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10237ec3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10237ede8; end: 10237ee2b; -[SCSCUcoImageProcessServicesSaberEntryPoint end] */

void FUN_10237ede8(undefined8 param_1)

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



/* Entry: 10237ee2c; end: 10237f02f;  */

void FUN_10237ee2c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f6d8c0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f092740,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef0f6ce20)) &&
           (func_0x000107c605b8(0xd000000000000020,0x800000010f0931e0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "PreviewScopeGraphBridge/SCSCUcoImageProcessServicesSaberEntryPoint.swift"
                              ,0x48,2,0xca,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10237f030);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58a6c();
        goto LAB_10237eeb8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c577d4();
  }
LAB_10237eeb8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10237f030; end: 10237f0db; -[SCSCUcoImageProcessServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10237f030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10237ee2c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10237f0dc; end: 10237f15b; -[SCSCUcoImageProcessServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237f0dc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e8cc80,0);
  func_0x000107c61614(param_1 + _DAT_112e8cc88,0);
  *(undefined8 *)(param_1 + _DAT_112e8cc90) = 0;
  *(undefined8 *)(param_1 + _DAT_112e8cc98) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10237f15c; end: 10237f18f;  */

void FUN_10237f15c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10237f190; end: 10237f1e7; -[SCSCUcoImageProcessServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010237f1cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010237f1d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237f190(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e8cc80);
  func_0x000107c61610(param_1 + _DAT_112e8cc88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e8cc90));
  return;
}



/* Entry: 10237f1e8; end: 10237f207;  */

void FUN_10237f1e8(void)

{
  func_0x000107c61168(&PTR_PTR_112837418);
  return;
}



/* Entry: 10237f208; end: 10237f213; -[SCSCUcoMemoriesSpectaclesServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237f208(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8ccc8;
  func_0x000107c61428(param_1 + _DAT_112e8ccc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10237f214; end: 10237f21f; -[SCSCUcoMemoriesSpectaclesServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237f214(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e8ccc8;
  func_0x000107c61428(param_1 + _DAT_112e8ccc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10237f220; end: 10237f22b; -[SCSCUcoMemoriesSpectaclesServicesSaberEntryPoint previewScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237f220(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8ccd0;
  func_0x000107c61428(param_1 + _DAT_112e8ccd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10237f22c; end: 10237f26f;  */

void FUN_10237f22c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10237f270; end: 10237f27b; -[SCSCUcoMemoriesSpectaclesServicesSaberEntryPoint setPreviewScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237f270(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e8ccd0;
  func_0x000107c61428(param_1 + _DAT_112e8ccd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10237f27c; end: 10237f2cf;  */

void FUN_10237f27c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10237f2d0; end: 10237f317; -[SCSCUcoMemoriesSpectaclesServicesSaberEntryPoint sCUcoMemoriesSpectaclesServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237f2d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8ccd8;
  func_0x000107c61428(param_1 + _DAT_112e8ccd8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10237f318; end: 10237f37b; -[SCSCUcoMemoriesSpectaclesServicesSaberEntryPoint setSCUcoMemoriesSpectaclesServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237f318(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e8ccd8;
  func_0x000107c61428(param_1 + _DAT_112e8ccd8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10237f37c; end: 10237f4ff;  */

/* WARNING: Possible PIC construction at 0x00010237f47c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010237f48c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010237f4a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010237f480) */
/* WARNING: Removing unreachable block (ram,0x00010237f490) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237f37c(void)

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
    func_0x000107c4f18c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c514c8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_102364c3c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e8c4f8);
        *(undefined8 *)(lVar2 + _DAT_112e86f38) = uVar6;
        *(long *)(lVar2 + _DAT_112e86f40) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e86f40);
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



/* Entry: 10237f500; end: 10237f527; -[SCSCUcoMemoriesSpectaclesServicesSaberEntryPoint begin] */

void FUN_10237f500(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10237f37c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10237f528; end: 10237f56b; -[SCSCUcoMemoriesSpectaclesServicesSaberEntryPoint end] */

void FUN_10237f528(undefined8 param_1)

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



/* Entry: 10237f56c; end: 10237f76f;  */

void FUN_10237f56c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f6d8c0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f092740,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0f6cda0)) &&
           (func_0x000107c605b8(0xd000000000000026,0x800000010f093260,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "PreviewScopeGraphBridge/SCSCUcoMemoriesSpectaclesServicesSaberEntryPoint.swift"
                              ,0x4e,2,0xca,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10237f770);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58a70();
        goto LAB_10237f5f8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c577d4();
  }
LAB_10237f5f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10237f770; end: 10237f81b; -[SCSCUcoMemoriesSpectaclesServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10237f770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10237f56c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10237f81c; end: 10237f89b; -[SCSCUcoMemoriesSpectaclesServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237f81c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e8ccc8,0);
  func_0x000107c61614(param_1 + _DAT_112e8ccd0,0);
  *(undefined8 *)(param_1 + _DAT_112e8ccd8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e8cce0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10237f89c; end: 10237f8cf;  */

void FUN_10237f89c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10237f8d0; end: 10237f927; -[SCSCUcoMemoriesSpectaclesServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010237f90c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010237f910) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237f8d0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e8ccc8);
  func_0x000107c61610(param_1 + _DAT_112e8ccd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e8ccd8));
  return;
}



/* Entry: 10237f928; end: 10237f947;  */

void FUN_10237f928(void)

{
  func_0x000107c61168(&PTR_PTR_1128374e8);
  return;
}



/* Entry: 10237f948; end: 10237f953; -[SCSCUploadHostServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237f948(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8cd10;
  func_0x000107c61428(param_1 + _DAT_112e8cd10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10237f954; end: 10237f95f; -[SCSCUploadHostServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237f954(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e8cd10;
  func_0x000107c61428(param_1 + _DAT_112e8cd10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10237f960; end: 10237f96b; -[SCSCUploadHostServicesSaberEntryPoint previewScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237f960(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8cd18;
  func_0x000107c61428(param_1 + _DAT_112e8cd18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10237f96c; end: 10237f9af;  */

void FUN_10237f96c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10237f9b0; end: 10237f9bb; -[SCSCUploadHostServicesSaberEntryPoint setPreviewScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237f9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e8cd18;
  func_0x000107c61428(param_1 + _DAT_112e8cd18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10237f9bc; end: 10237fa0f;  */

void FUN_10237f9bc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10237fa10; end: 10237fa57; -[SCSCUploadHostServicesSaberEntryPoint sCUploadHostServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237fa10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8cd20;
  func_0x000107c61428(param_1 + _DAT_112e8cd20,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10237fa58; end: 10237fabb; -[SCSCUploadHostServicesSaberEntryPoint setSCUploadHostServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237fa58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e8cd20;
  func_0x000107c61428(param_1 + _DAT_112e8cd20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10237fabc; end: 10237fc3f;  */

/* WARNING: Possible PIC construction at 0x00010237fbbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010237fbcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010237fbe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010237fbc0) */
/* WARNING: Removing unreachable block (ram,0x00010237fbd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237fabc(void)

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
    func_0x000107c4f18c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c514e8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_102364df4();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e8c508);
        *(undefined8 *)(lVar2 + _DAT_112e86f70) = uVar6;
        *(long *)(lVar2 + _DAT_112e86f78) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e86f78);
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



/* Entry: 10237fc40; end: 10237fc67; -[SCSCUploadHostServicesSaberEntryPoint begin] */

void FUN_10237fc40(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10237fabc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10237fc68; end: 10237fcab; -[SCSCUploadHostServicesSaberEntryPoint end] */

void FUN_10237fc68(undefined8 param_1)

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



/* Entry: 10237fcac; end: 10237feaf;  */

void FUN_10237fcac(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f6d8c0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f092740,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef0f6cd20)) {
          uVar2 = 0xd00000000000001b;
          func_0x000107c605b8(0xd00000000000001b,0x800000010f0932e0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "PreviewScopeGraphBridge/SCSCUploadHostServicesSaberEntryPoint.swift"
                                ,0x43,2,0xca,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10237feb0);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58a90();
        goto LAB_10237fd38;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c577d4();
  }
LAB_10237fd38:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10237feb0; end: 10237ff5b; -[SCSCUploadHostServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10237feb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10237fcac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10237ff5c; end: 10237ffdb; -[SCSCUploadHostServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10237ff5c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e8cd10,0);
  func_0x000107c61614(param_1 + _DAT_112e8cd18,0);
  *(undefined8 *)(param_1 + _DAT_112e8cd20) = 0;
  *(undefined8 *)(param_1 + _DAT_112e8cd28) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10237ffdc; end: 10238000f;  */

void FUN_10237ffdc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102380010; end: 102380067; -[SCSCUploadHostServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010238004c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102380050) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102380010(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e8cd10);
  func_0x000107c61610(param_1 + _DAT_112e8cd18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e8cd20));
  return;
}



/* Entry: 102380068; end: 102380087;  */

void FUN_102380068(void)

{
  func_0x000107c61168(&PTR_PTR_1128375b8);
  return;
}



/* Entry: 102380088; end: 102380093; -[SCAudioEffectsMixingServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102380088(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8cd58;
  func_0x000107c61428(param_1 + _DAT_112e8cd58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102380094; end: 10238009f; -[SCAudioEffectsMixingServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102380094(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e8cd58;
  func_0x000107c61428(param_1 + _DAT_112e8cd58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023800a0; end: 1023800ab; -[SCAudioEffectsMixingServiceSaberServiceProvider previewScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023800a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e8cd60;
  func_0x000107c61428(param_1 + _DAT_112e8cd60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023800ac; end: 1023800ef;  */

void FUN_1023800ac(long param_1,undefined8 param_2,long *param_3)

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


