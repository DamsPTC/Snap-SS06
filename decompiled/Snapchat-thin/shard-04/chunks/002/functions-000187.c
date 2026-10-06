/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032afdb4; end: 1032afe5f; -[SCGamesExplorerScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1032afdb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032afc1c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032afe60; end: 1032afecb; -[SCGamesExplorerScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032afe60(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f52648,0);
  *(undefined8 *)(param_1 + _DAT_112f52650) = 0;
  *(undefined8 *)(param_1 + _DAT_112f52658) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032afecc; end: 1032afeff;  */

void FUN_1032afecc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032aff00; end: 1032aff47; -[SCGamesExplorerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032aff2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032aff30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aff00(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f52648);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f52650));
  return;
}



/* Entry: 1032aff48; end: 1032aff67;  */

void FUN_1032aff48(void)

{
  func_0x000107c61168(&PTR_PTR_1128c8fd8);
  return;
}



/* Entry: 1032aff68; end: 1032aff73; -[SCSCGamesExplorerScopedLensExplorerSessionLoggingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aff68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52688;
  func_0x000107c61428(param_1 + _DAT_112f52688,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032aff74; end: 1032aff7f; -[SCSCGamesExplorerScopedLensExplorerSessionLoggingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aff74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52688;
  func_0x000107c61428(param_1 + _DAT_112f52688,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032aff80; end: 1032aff8b; -[SCSCGamesExplorerScopedLensExplorerSessionLoggingServicesSaberEntryPoint gamesExplorerScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aff80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52690;
  func_0x000107c61428(param_1 + _DAT_112f52690,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032aff8c; end: 1032affcf;  */

void FUN_1032aff8c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1032affd0; end: 1032affdb; -[SCSCGamesExplorerScopedLensExplorerSessionLoggingServicesSaberEntryPoint setGamesExplorerScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032affd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52690;
  func_0x000107c61428(param_1 + _DAT_112f52690,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032affdc; end: 1032b002f;  */

void FUN_1032affdc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032b0030; end: 1032b0077; -[SCSCGamesExplorerScopedLensExplorerSessionLoggingServicesSaberEntryPoint sCGamesExplorerScopedLensExplorerSessionLoggingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b0030(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52698;
  func_0x000107c61428(param_1 + _DAT_112f52698,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1032b0078; end: 1032b00db; -[SCSCGamesExplorerScopedLensExplorerSessionLoggingServicesSaberEntryPoint setSCGamesExplorerScopedLensExplorerSessionLoggingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b0078(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52698;
  func_0x000107c61428(param_1 + _DAT_112f52698,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032b00dc; end: 1032b025f;  */

/* WARNING: Possible PIC construction at 0x0001032b01dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032b01ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032b0208: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b01e0) */
/* WARNING: Removing unreachable block (ram,0x0001032b01f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b00dc(void)

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
    func_0x000107c43d04();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50db8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_1032af210();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112f525f0);
        *(undefined8 *)(lVar2 + _DAT_112f52570) = uVar6;
        *(long *)(lVar2 + _DAT_112f52578) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112f52578);
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



/* Entry: 1032b0260; end: 1032b0287; -[SCSCGamesExplorerScopedLensExplorerSessionLoggingServicesSaberEntryPoint begin] */

void FUN_1032b0260(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032b00dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032b0288; end: 1032b02cb; -[SCSCGamesExplorerScopedLensExplorerSessionLoggingServicesSaberEntryPoint end] */

void FUN_1032b0288(undefined8 param_1)

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



/* Entry: 1032b02cc; end: 1032b04cf;  */

void FUN_1032b02cc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0ec8870)) {
      uVar2 = 0xd000000000000025;
      func_0x000107c605b8(0xd000000000000025,0x800000010f137790,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffc2) || (param_3 != -0x7ffffffef0ec8840)) &&
           (func_0x000107c605b8(0xd00000000000003e,0x800000010f1377c0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "GamesExplorerScopeGraphBridge/SCSCGamesExplorerScopedLensExplorerSessionLoggingServicesSaberEntryPoint.swift"
                              ,0x6c,2,0x39,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b04d0);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58360();
        goto LAB_1032b0358;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54db0();
  }
LAB_1032b0358:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1032b04d0; end: 1032b057b; -[SCSCGamesExplorerScopedLensExplorerSessionLoggingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1032b04d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032b02cc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032b057c; end: 1032b05fb; -[SCSCGamesExplorerScopedLensExplorerSessionLoggingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b057c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f52688,0);
  func_0x000107c61614(param_1 + _DAT_112f52690,0);
  *(undefined8 *)(param_1 + _DAT_112f52698) = 0;
  *(undefined8 *)(param_1 + _DAT_112f526a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032b05fc; end: 1032b062f;  */

void FUN_1032b05fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032b0630; end: 1032b0687; -[SCSCGamesExplorerScopedLensExplorerSessionLoggingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032b066c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b0670) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b0630(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f52688);
  func_0x000107c61610(param_1 + _DAT_112f52690);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f52698));
  return;
}



/* Entry: 1032b0688; end: 1032b06a7;  */

void FUN_1032b0688(void)

{
  func_0x000107c61168(&PTR_PTR_1128c90a0);
  return;
}



/* Entry: 1032b06a8; end: 1032b06ef; -[SCGamesExplorerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b06a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f526d0;
  func_0x000107c61428(param_1 + _DAT_112f526d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032b06f0; end: 1032b0747; -[SCGamesExplorerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b06f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f526d0;
  func_0x000107c61428(param_1 + _DAT_112f526d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032b0748; end: 1032b081f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b0748(undefined8 param_1,long param_2)

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
    FUN_1032af468();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f525a8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032b0820);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f525b0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f526d8);
    *(long **)(unaff_x20 + _DAT_112f526d8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1032b0820; end: 1032b0847; -[SCGamesExplorerScopedServicesSaberEntryPoint begin] */

void FUN_1032b0820(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032b0748();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032b0848; end: 1032b09bf;  */

/* WARNING: Possible PIC construction at 0x0001032b08b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032b0948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b08b4) */
/* WARNING: Removing unreachable block (ram,0x0001032b094c) */
/* WARNING: Removing unreachable block (ram,0x0001032b0964) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b0848(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f526d8);
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



/* Entry: 1032b09c0; end: 1032b09c7;  */

void FUN_1032b09c0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032b09c8; end: 1032b09fb; -[SCGamesExplorerScopedServicesSaberEntryPoint end] */

void FUN_1032b09c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1032b0848();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032b09fc; end: 1032b0b1b;  */

void FUN_1032b09fc(long param_1,long param_2,long param_3)

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
                        "GamesExplorerScopeGraphBridge/SCGamesExplorerScopedServicesSaberEntryPoint.swift"
                        ,0x50,2,0x31,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b0b1c);
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



/* Entry: 1032b0b1c; end: 1032b0bc7; -[SCGamesExplorerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1032b0b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032b09fc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032b0bc8; end: 1032b0c27; -[SCGamesExplorerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b0bc8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f526d0,0);
  *(undefined8 *)(param_1 + _DAT_112f526d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032b0c28; end: 1032b0c5b;  */

void FUN_1032b0c28(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032b0c5c; end: 1032b0c93; -[SCGamesExplorerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b0c5c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f526d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f526d8));
  return;
}



/* Entry: 1032b0c94; end: 1032b0cb3;  */

void FUN_1032b0c94(void)

{
  func_0x000107c61168(&PTR_PTR_1128c9170);
  return;
}



/* Entry: 1032b0cb4; end: 1032b0d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b0cb4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1032b10a8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f52710) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1032b0d20; end: 1032b0d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b0d20(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f52710) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032b0d8c; end: 1032b0deb; -[_TtC46ImageToVideoWriterScopedFactoryServiceProvider34SCImageToVideoWriterScopedServices init] */

void FUN_1032b0d8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ImageToVideoWriterScopedFactoryServiceProvider.SCImageToVideoWriterScopedServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b0db8);
  (*pcVar1)();
}



/* Entry: 1032b0dec; end: 1032b0dfb; -[_TtC46ImageToVideoWriterScopedFactoryServiceProvider34SCImageToVideoWriterScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b0dec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f52710));
  return;
}



/* Entry: 1032b0dfc; end: 1032b0e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b0dfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110634c48;
  func_0x000107c613fc(&UNK_110634c48,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1032b1140,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1032b0e68; end: 1032b0f03;  */

void FUN_1032b0e68(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110634b58;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110634b58;
  return;
}



/* Entry: 1032b0f04; end: 1032b0f3b;  */

void FUN_1032b0f04(long *param_1)

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



/* Entry: 1032b0f3c; end: 1032b0f43;  */

undefined8 FUN_1032b0f3c(void)

{
  return 0x1b;
}



/* Entry: 1032b0f44; end: 1032b1077;  */

void FUN_1032b0f44(undefined8 *param_1)

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
  puVar1 = &UNK_110634c70;
  func_0x000107c613fc(&UNK_110634c70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032b1118;
  func_0x00010058fa64(FUN_1032b1118,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032b1078; end: 1032b10a7;  */

undefined ** FUN_1032b1078(void)

{
  return &PTR_DAT_113066b98;
}



/* Entry: 1032b10a8; end: 1032b10c7;  */

void FUN_1032b10a8(void)

{
  func_0x000107c61168(&PTR_PTR_1128c9230);
  return;
}



/* Entry: 1032b10c8; end: 1032b1117;  */

undefined1  [16] FUN_1032b10c8(void)

{
  return ZEXT816(0x110634ba8);
}



/* Entry: 1032b1118; end: 1032b113f;  */

void FUN_1032b1118(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1032b1140; end: 1032b1153;  */

void FUN_1032b1140(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032b1154; end: 1032b144f;  */

void FUN_1032b1154(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f52788,&UNK_10dba8e20);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1032b20f0();
  func_0x000100082720("ImageToVideoWriterScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f52790,&UNK_10dba8e30);
  puVar3 = &UNK_110634cd0;
  func_0x000107c613fc(&UNK_110634cd0,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar9 = 0x1032b1458;
  func_0x0001000823a8(0x1032b1458,puVar3);
  func_0x000100082720("SCImageToVideoWriterEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1032b0f04;
  func_0x0001000823a8(FUN_1032b0f04,0);
  func_0x000100082720("SCImageToVideoWriterScopedServicesCleanupRelayServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f52798,&UNK_10dba8e28);
  puVar3 = &UNK_110634cf8;
  func_0x000107c613fc(&UNK_110634cf8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1032b1460;
  func_0x0001000823a8(0x1032b1460,puVar3);
  func_0x000100082720("SCImageToVideoWriterScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112f52718,&UNK_10dba8bb0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1032b146c;
  func_0x0001000823a8(0x1032b146c,uVar5);
  func_0x000100082720("SCImageToVideoWriterScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112f52708,&UNK_10dba8ba0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1032b1474;
  func_0x0001000823a8(0x1032b1474,uVar6);
  func_0x000100082720("SCImageToVideoWriterScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110634d20;
  func_0x000107c613fc(&UNK_110634d20,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1032b14a8;
  func_0x0001000823a8(FUN_1032b14a8,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCImageToVideoWriterScopeEntryPointProvider",0x2b,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1032b1450; end: 1032b147b;  */

void FUN_1032b1450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f52788,&UNK_10dba8e20);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1032b20f0();
  func_0x000100082720("ImageToVideoWriterScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f52790,&UNK_10dba8e30);
  puVar3 = &UNK_110634cd0;
  func_0x000107c613fc(&UNK_110634cd0,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  uVar9 = 0x1032b1458;
  func_0x0001000823a8(0x1032b1458,puVar3);
  func_0x000100082720("SCImageToVideoWriterEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1032b0f04;
  func_0x0001000823a8(FUN_1032b0f04,0);
  func_0x000100082720("SCImageToVideoWriterScopedServicesCleanupRelayServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f52798,&UNK_10dba8e28);
  puVar3 = &UNK_110634cf8;
  func_0x000107c613fc(&UNK_110634cf8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1032b1460;
  func_0x0001000823a8(0x1032b1460,puVar3);
  func_0x000100082720("SCImageToVideoWriterScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112f52718,&UNK_10dba8bb0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1032b146c;
  func_0x0001000823a8(0x1032b146c,uVar5);
  func_0x000100082720("SCImageToVideoWriterScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112f52708,&UNK_10dba8ba0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1032b1474;
  func_0x0001000823a8(0x1032b1474,uVar6);
  func_0x000100082720("SCImageToVideoWriterScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110634d20;
  func_0x000107c613fc(&UNK_110634d20,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1032b14a8;
  func_0x0001000823a8(FUN_1032b14a8,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCImageToVideoWriterScopeEntryPointProvider",0x2b,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1032b147c; end: 1032b14a7;  */

void FUN_1032b147c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032b14a8; end: 1032b14af;  */

void FUN_1032b14a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110634b58;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110634b58;
  return;
}



/* Entry: 1032b14b0; end: 1032b1597;  */

void FUN_1032b14b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_1032b17fc();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1032b16b4(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032b1598; end: 1032b15c3;  */

void FUN_1032b1598(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032b15c4; end: 1032b15cb;  */

undefined8 FUN_1032b15c4(void)

{
  return 0x1b;
}



/* Entry: 1032b15cc; end: 1032b164f;  */

void FUN_1032b15cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1032b183c,param_2,FUN_1032b1840,param_2,FUN_1032b1868,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1032b1650; end: 1032b169f;  */

undefined8 FUN_1032b1650(void)

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



/* Entry: 1032b16a0; end: 1032b16b3;  */

void FUN_1032b16a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110634d38;
  return;
}



/* Entry: 1032b16b4; end: 1032b17df;  */

void FUN_1032b16b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126acfc8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f137af0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032b17e0; end: 1032b17fb;  */

undefined ** FUN_1032b17e0(void)

{
  return &PTR_DAT_113066b98;
}



/* Entry: 1032b17fc; end: 1032b181b;  */

void FUN_1032b17fc(void)

{
  func_0x000107c61168(&PTR_PTR_112f52808);
  return;
}



/* Entry: 1032b181c; end: 1032b183f;  */

undefined1  [16] FUN_1032b181c(void)

{
  return ZEXT816(0x110634d78);
}



/* Entry: 1032b1840; end: 1032b1867;  */

void FUN_1032b1840(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1032b1868; end: 1032b186f;  */

undefined8 FUN_1032b1868(void)

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



/* Entry: 1032b1870; end: 1032b18ab;  */

void FUN_1032b1870(undefined8 *param_1,undefined8 param_2)

{
  FUN_1032b18ac();
  func_0x0001000a7f38("SCImageToVideoWriterScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = param_2;
  return;
}



/* Entry: 1032b18ac; end: 1032b1a97;  */

void FUN_1032b18ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d5c8;
  ppuVar4 = &PTR_DAT_113066b98;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110634dc8;
  func_0x000107c613fc(&UNK_110634dc8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f52870;
  func_0x0001000285a8(0x112f52870,&UNK_10dba8f78);
  func_0x0001000a6ee8(&UNK_110634fd8,
                      "ImageToVideoWriterScopeGraphBridgeScopeInitializationPluginKey",0x3e,2,
                      FUN_1032b1a98,puVar2,uVar3,&UNK_110634fd8,&PTR_DAT_112f52900);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110634d78,
                      "SCImageToVideoWriterEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_1032b1b4c,param_3,uVar3,&UNK_110634d78,&PTR_DAT_112f527a0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110634df0;
  func_0x000107c613fc(&UNK_110634df0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110634be8,
                      "SCImageToVideoWriterScopedServicesScopeInitializationPluginKey",0x3e,2,
                      FUN_1032b1bfc,puVar2,uVar3,&UNK_110634be8,&PTR_DAT_112f52720);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f52878;
  func_0x0001000285a8(0x112f52878,&UNK_10dba8f80);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1032b1a98; end: 1032b1ad7;  */

void FUN_1032b1a98(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1032b21d4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ImageToVideoWriterScopeGraphBridgeScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032b1ad8; end: 1032b1b4b;  */

void FUN_1032b1ad8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1032b1c38;
  func_0x0001000823a8(0x1032b1c38,param_3);
  func_0x000100082720("SCImageToVideoWriterEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032b1b4c; end: 1032b1b53;  */

void FUN_1032b1b4c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1032b1c38;
  func_0x0001000823a8();
  func_0x000100082720("SCImageToVideoWriterEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032b1b54; end: 1032b1bfb;  */

void FUN_1032b1b54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110634e18;
  func_0x000107c613fc(&UNK_110634e18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1032b1c30;
  func_0x0001000823a8(FUN_1032b1c30,puVar1);
  func_0x000100082720("SCImageToVideoWriterScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1032b1bfc; end: 1032b1c03;  */

void FUN_1032b1bfc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110634e18;
  func_0x000107c613fc(&UNK_110634e18,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1032b1c30;
  func_0x0001000823a8(FUN_1032b1c30,puVar3);
  func_0x000100082720("SCImageToVideoWriterScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1032b1c04; end: 1032b1c2f;  */

void FUN_1032b1c04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032b1c30; end: 1032b1c3f;  */

void FUN_1032b1c30(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110634c70;
  func_0x000107c613fc(&UNK_110634c70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032b1118;
  func_0x00010058fa64(FUN_1032b1118,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032b1c40; end: 1032b1cc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032b1c40(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1032b2000();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f52880) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f52888) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b1cc8);
  (*pcVar1)();
}



/* Entry: 1032b1cc8; end: 1032b1d27; -[_TtC34ImageToVideoWriterScopeGraphBridge49ImageToVideoWriterScopeGraphBridgeSaberEntryPoint init] */

void FUN_1032b1cc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ImageToVideoWriterScopeGraphBridge.ImageToVideoWriterScopeGraphBridgeSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b1cf4);
  (*pcVar1)();
}



/* Entry: 1032b1d28; end: 1032b1d5f; -[_TtC34ImageToVideoWriterScopeGraphBridge49ImageToVideoWriterScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032b1d44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032b1d48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b1d28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f52880));
  return;
}



/* Entry: 1032b1d60; end: 1032b1d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b1d60(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f52888),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f52880));
  return;
}



/* Entry: 1032b1d88; end: 1032b1da7;  */

void FUN_1032b1d88(void)

{
  func_0x000107c61168(&PTR_PTR_1128c92f0);
  return;
}



/* Entry: 1032b1da8; end: 1032b1e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032b1da8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f528b8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f528c0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032b1e30);
  (*pcVar2)();
}



/* Entry: 1032b1e30; end: 1032b1f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032b1e30(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f528b8);
  *(undefined **)(unaff_x20 + _DAT_112f528b8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f528c0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f528c0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110634f38;
  func_0x000107c613fc(&UNK_110634f38,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1032b1f1c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1032b1f18; end: 1032b1f23;  */

void FUN_1032b1f18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032b1f24; end: 1032b1f83; -[_TtC34ImageToVideoWriterScopeGraphBridge49SCImageToVideoWriterScopedServicesSaberEntryPoint init] */

void FUN_1032b1f24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ImageToVideoWriterScopeGraphBridge.SCImageToVideoWriterScopedServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032b1f50);
  (*pcVar1)();
}



/* Entry: 1032b1f84; end: 1032b1fbb; -[_TtC34ImageToVideoWriterScopeGraphBridge49SCImageToVideoWriterScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b1f84(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f528c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f528b8));
  return;
}



/* Entry: 1032b1fbc; end: 1032b1fbf;  */

void FUN_1032b1fbc(void)

{
  return;
}



/* Entry: 1032b1fc0; end: 1032b1fdf;  */

void FUN_1032b1fc0(void)

{
  FUN_1032b1e30();
  return;
}



/* Entry: 1032b1fe0; end: 1032b1fff;  */

void FUN_1032b1fe0(void)

{
  func_0x000107c61168(&PTR_PTR_1128c93b8);
  return;
}



/* Entry: 1032b2000; end: 1032b20cf;  */

undefined8 FUN_1032b2000(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f528f0,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1032b20d0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1032b20d0; end: 1032b20ef;  */

void FUN_1032b20d0(void)

{
  func_0x000107c61168(&PTR_PTR_1128c9480);
  return;
}



/* Entry: 1032b20f0; end: 1032b215b;  */

void FUN_1032b20f0(void)

{
  func_0x0001000285a8(0x112f528f8,&UNK_10dba9058);
  func_0x0001000823a8(0x1032b2130,0);
  return;
}



/* Entry: 1032b215c; end: 1032b2197; -[_TtC34ImageToVideoWriterScopeGraphBridge42ImageToVideoWriterScopeGraphBridgeServices init] */

void FUN_1032b215c(undefined8 param_1)

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



/* Entry: 1032b2198; end: 1032b21cb;  */

void FUN_1032b2198(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032b21cc; end: 1032b21d3;  */

undefined8 FUN_1032b21cc(void)

{
  return 0x1b;
}



/* Entry: 1032b21d4; end: 1032b234b;  */

void FUN_1032b21d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110634f80;
  func_0x000107c613fc(&UNK_110634f80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1032b234c,puVar1);
  return;
}



/* Entry: 1032b234c; end: 1032b2353;  */

void FUN_1032b234c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f528f0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f528f0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110635018;
  func_0x000107c613fc(&UNK_110635018,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1032b2400;
  func_0x00010058fa64(0x1032b2400,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032b2354; end: 1032b23af;  */

void FUN_1032b2354(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f528f0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f528f0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1032b23b0; end: 1032b2407;  */

undefined ** FUN_1032b23b0(void)

{
  return &PTR_DAT_113066b98;
}



/* Entry: 1032b2408; end: 1032b244f; -[SCImageToVideoWriterScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b2408(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52950;
  func_0x000107c61428(param_1 + _DAT_112f52950,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032b2450; end: 1032b24a7; -[SCImageToVideoWriterScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b2450(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52950;
  func_0x000107c61428(param_1 + _DAT_112f52950,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032b24a8; end: 1032b24ef; -[SCImageToVideoWriterScopeGraphBridgeSaberEntryPoint imageToVideoWriterScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b24a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52958;
  func_0x000107c61428(param_1 + _DAT_112f52958,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}


