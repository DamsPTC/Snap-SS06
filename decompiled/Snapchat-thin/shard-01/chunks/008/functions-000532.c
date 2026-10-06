/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014ed988; end: 1014ed9cb; -[SCShakeToReportScopeGraphBridgeSaberEntryPoint end] */

void FUN_1014ed988(undefined8 param_1)

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



/* Entry: 1014ed9cc; end: 1014edb63;  */

void FUN_1014ed9cc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef1077bf0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010ef88410,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ShakeToReportScopeGraphBridge/SCShakeToReportScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x52,2,0x30,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014edb64);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59054();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1014edb64; end: 1014edc0f; -[SCShakeToReportScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1014edb64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1014ed9cc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1014edc10; end: 1014edc7b; -[SCShakeToReportScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014edc10(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112daadf8,0);
  *(undefined8 *)(param_1 + _DAT_112daae00) = 0;
  *(undefined8 *)(param_1 + _DAT_112daae08) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014edc7c; end: 1014edcaf;  */

void FUN_1014edc7c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014edcb0; end: 1014edcf7; -[SCShakeToReportScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014edcdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014edce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014edcb0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112daadf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daae00));
  return;
}



/* Entry: 1014edcf8; end: 1014edd17;  */

void FUN_1014edcf8(void)

{
  func_0x000107c61168(&PTR_PTR_1127dce18);
  return;
}



/* Entry: 1014edd18; end: 1014edd23; -[SCSIGCodematizerServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014edd18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daae38;
  func_0x000107c61428(param_1 + _DAT_112daae38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014edd24; end: 1014edd2f; -[SCSIGCodematizerServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014edd24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daae38;
  func_0x000107c61428(param_1 + _DAT_112daae38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1014edd30; end: 1014edd3b; -[SCSIGCodematizerServicesSaberEntryPoint shakeToReportScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014edd30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daae40;
  func_0x000107c61428(param_1 + _DAT_112daae40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014edd3c; end: 1014edd7f;  */

void FUN_1014edd3c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1014edd80; end: 1014edd8b; -[SCSIGCodematizerServicesSaberEntryPoint setShakeToReportScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014edd80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daae40;
  func_0x000107c61428(param_1 + _DAT_112daae40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1014edd8c; end: 1014edddf;  */

void FUN_1014edd8c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1014edde0; end: 1014ede27; -[SCSIGCodematizerServicesSaberEntryPoint sIGCodematizerServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014edde0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daae48;
  func_0x000107c61428(param_1 + _DAT_112daae48,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1014ede28; end: 1014ede8b; -[SCSIGCodematizerServicesSaberEntryPoint setSIGCodematizerServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ede28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daae48;
  func_0x000107c61428(param_1 + _DAT_112daae48,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1014ede8c; end: 1014ee00f;  */

/* WARNING: Possible PIC construction at 0x0001014edf8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014edf9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014edfb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014edf90) */
/* WARNING: Removing unreachable block (ram,0x0001014edfa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ede8c(void)

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
    func_0x000107c5a920();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51594();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_1014ecfc0();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112daada0);
        *(undefined8 *)(lVar2 + _DAT_112daad20) = uVar6;
        *(long *)(lVar2 + _DAT_112daad28) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112daad28);
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



/* Entry: 1014ee010; end: 1014ee037; -[SCSIGCodematizerServicesSaberEntryPoint begin] */

void FUN_1014ee010(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1014ede8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014ee038; end: 1014ee07b; -[SCSIGCodematizerServicesSaberEntryPoint end] */

void FUN_1014ee038(undefined8 param_1)

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



/* Entry: 1014ee07c; end: 1014ee27f;  */

void FUN_1014ee07c(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000025;
    if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef1077b60)) ||
       (func_0x000107c605b8(0xd000000000000025,0x800000010ef884a0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c59050();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef1077b30)) {
        uVar2 = 0xd00000000000001d;
        func_0x000107c605b8(0xd00000000000001d,0x800000010ef884d0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ShakeToReportScopeGraphBridge/SCSIGCodematizerServicesSaberEntryPoint.swift"
                              ,0x4b,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1014ee280);
          (*pcVar1)();
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58b3c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1014ee280; end: 1014ee32b; -[SCSIGCodematizerServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1014ee280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1014ee07c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1014ee32c; end: 1014ee3ab; -[SCSIGCodematizerServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ee32c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112daae38,0);
  func_0x000107c61614(param_1 + _DAT_112daae40,0);
  *(undefined8 *)(param_1 + _DAT_112daae48) = 0;
  *(undefined8 *)(param_1 + _DAT_112daae50) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014ee3ac; end: 1014ee3df;  */

void FUN_1014ee3ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014ee3e0; end: 1014ee437; -[SCSIGCodematizerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014ee41c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014ee420) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ee3e0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112daae38);
  func_0x000107c61610(param_1 + _DAT_112daae40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daae48));
  return;
}



/* Entry: 1014ee438; end: 1014ee457;  */

void FUN_1014ee438(void)

{
  func_0x000107c61168(&PTR_PTR_1127dcee0);
  return;
}



/* Entry: 1014ee458; end: 1014ee49f; -[SCSCShakeToReportScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ee458(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daae80;
  func_0x000107c61428(param_1 + _DAT_112daae80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014ee4a0; end: 1014ee4f7; -[SCSCShakeToReportScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ee4a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daae80;
  func_0x000107c61428(param_1 + _DAT_112daae80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1014ee4f8; end: 1014ee5cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ee4f8(undefined8 param_1,long param_2)

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
    FUN_1014ed218();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112daad58) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014ee5d0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112daad60);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112daae88);
    *(long **)(unaff_x20 + _DAT_112daae88) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1014ee5d0; end: 1014ee5f7; -[SCSCShakeToReportScopedServicesSaberEntryPoint begin] */

void FUN_1014ee5d0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1014ee4f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014ee5f8; end: 1014ee76f;  */

/* WARNING: Possible PIC construction at 0x0001014ee660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014ee6f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014ee664) */
/* WARNING: Removing unreachable block (ram,0x0001014ee6fc) */
/* WARNING: Removing unreachable block (ram,0x0001014ee714) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ee5f8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112daae88);
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



/* Entry: 1014ee770; end: 1014ee777;  */

void FUN_1014ee770(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1014ee778; end: 1014ee7ab; -[SCSCShakeToReportScopedServicesSaberEntryPoint end] */

void FUN_1014ee778(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1014ee5f8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1014ee7ac; end: 1014ee8cb;  */

void FUN_1014ee7ac(long param_1,long param_2,long param_3)

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
                        "ShakeToReportScopeGraphBridge/SCSCShakeToReportScopedServicesSaberEntryPoint.swift"
                        ,0x52,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014ee8cc);
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



/* Entry: 1014ee8cc; end: 1014ee977; -[SCSCShakeToReportScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1014ee8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1014ee7ac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1014ee978; end: 1014ee9d7; -[SCSCShakeToReportScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ee978(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112daae80,0);
  *(undefined8 *)(param_1 + _DAT_112daae88) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014ee9d8; end: 1014eea0b;  */

void FUN_1014ee9d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014eea0c; end: 1014eea43; -[SCSCShakeToReportScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014eea0c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112daae80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daae88));
  return;
}



/* Entry: 1014eea44; end: 1014eea63;  */

void FUN_1014eea44(void)

{
  func_0x000107c61168(&PTR_PTR_1127dcfb0);
  return;
}



/* Entry: 1014eea64; end: 1014eee0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014eea64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long **pplVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 unaff_x20;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  func_0x0001000bb420(param_1,auStack_80);
  uVar6 = 0;
  func_0x0001014f0398(0,0x112daaeb8,&PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  puVar4 = PTR___sypN_11034f1a8;
  pplVar7 = &plStack_88;
  func_0x000107c6147c(pplVar7,auStack_80,PTR___sypN_11034f1a8 + 8,uVar6,6);
  plVar13 = plStack_88;
  if (((ulong)pplVar7 & 1) == 0) {
    return;
  }
  func_0x0001000bb420(param_2,auStack_80);
  uVar6 = 0x112daaec0;
  func_0x0001000285a8(0x112daaec0,&UNK_10d9538e0);
  pplVar7 = &plStack_88;
  func_0x000107c6147c(pplVar7,auStack_80,puVar4 + 8,uVar6,6);
  plVar5 = plStack_88;
  if (((ulong)pplVar7 & 1) == 0) goto LAB_1014eede8;
  func_0x0001014f0350(param_9,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    FUN_1014f02a8(auStack_80,0x112d387f8,&UNK_10d902650);
    plVar10 = (long *)0x0;
  }
  else {
    uVar6 = 0;
    func_0x0001014f0398(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
    pplVar7 = &plStack_88;
    func_0x000107c6147c(pplVar7,auStack_80,puVar4 + 8,uVar6,6);
    plVar10 = plStack_88;
    if ((int)pplVar7 == 0) {
      plVar10 = (long *)0x0;
    }
  }
  lVar8 = 0;
  FUN_1014faf70();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(undefined8 *)(lVar9 + _DAT_112dab7f8) = 0;
  *(undefined8 *)(lVar9 + _DAT_112dab7b8) = unaff_x20;
  *(long **)(lVar9 + _DAT_112dab7c0) = plVar5;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112dab7c8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar2 = (ulong *)(lVar9 + _DAT_112dab7d0);
  *puVar2 = param_5;
  puVar2[1] = param_6;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112dab7d8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(long **)(lVar9 + _DAT_112dab7e0) = plVar10;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112dab7e8);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  if (param_6 == 0) {
LAB_1014eeccc:
    func_0x000107c61174(plVar10);
    func_0x000107c6157c(param_11);
    func_0x000107c615f4(plVar5,2);
    func_0x000107c61434(param_6);
    func_0x000107c61174();
    func_0x000107c61434(param_4);
    func_0x000107c61434();
    FUN_1014efc44();
    if (param_8 != 0) {
      param_6 = 0;
      lVar11 = param_8;
      FUN_1014fe138();
      if (lVar11 != 0) {
        func_0x000107c6157c();
        param_5 = 0;
        FUN_1014fb384();
        func_0x000107c61578(lVar11,2);
        func_0x000107c61170(param_8);
        goto LAB_1014eed7c;
      }
      func_0x000107c61170(param_8);
    }
    param_6 = 0x800000010ef885a0;
    param_5 = 0xd000000000000012;
  }
  else {
    uVar3 = param_5 & 0xffffffffffff;
    if ((param_6 & 0x2000000000000000) != 0) {
      uVar3 = param_6 >> 0x38 & 0xf;
    }
    if (uVar3 == 0) goto LAB_1014eeccc;
    func_0x000107c61174(plVar10);
    func_0x000107c6157c(param_11);
    func_0x000107c615f4(plVar5,2);
    func_0x000107c61434(param_6);
    func_0x000107c61174();
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_8);
    func_0x0001014f22e8(param_5,param_6,param_7,param_8);
  }
LAB_1014eed7c:
  puVar2 = (ulong *)(lVar9 + _DAT_112dab7f0);
  *puVar2 = param_5;
  puVar2[1] = param_6;
  plVar12 = &lStack_98;
  lStack_98 = lVar9;
  lStack_90 = lVar8;
  func_0x000107c61154(plVar12,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c615e8(plVar5);
  func_0x000107c61170(plVar10);
  func_0x000107c4f6f4(plVar13);
  func_0x000107c61170(plVar13);
  func_0x000107c615e8(plVar5);
  plVar13 = plVar12;
LAB_1014eede8:
  func_0x000107c61170(plVar13);
  return;
}



/* Entry: 1014eee0c; end: 1014ef9ef; -[_TtC14SIGCodematizer14SIGCodematizer pushExportUIOnNavigationController:runtime:surfaceName:capturedViewStack:capturedViewControllerStack:capturedScreenshot:onComplete:] */

void FUN_1014eee0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  func_0x000107c60bc4();
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  lVar2 = param_7;
  func_0x000107c61174();
  func_0x000107c615f0(param_8);
  func_0x000107c60234(auStack_80,param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c60234(auStack_a0,param_4);
  func_0x000107c615e8(param_4);
  uVar3 = param_5;
  func_0x000107c5faec(param_5);
  uVar5 = param_2;
  func_0x000107c61170(param_5);
  if (param_6 == 0) {
    lVar7 = 0;
    uVar1 = 0;
    uVar6 = uVar5;
  }
  else {
    lVar7 = param_6;
    func_0x000107c5faec(param_6);
    uVar6 = uVar5;
    func_0x000107c61170(param_6);
    uVar1 = uVar5;
  }
  if (lVar2 == 0) {
    param_7 = 0;
    uVar6 = 0;
  }
  else {
    func_0x000107c5faec(param_7);
    func_0x000107c61170(lVar2);
  }
  if (param_8 == 0) {
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c60234(&uStack_c0,param_8);
    func_0x000107c615e8(param_8);
  }
  puVar4 = &UNK_1103d3770;
  func_0x000107c613fc(&UNK_1103d3770,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_9;
  FUN_1014eea64(auStack_80,auStack_a0,uVar3,param_2,lVar7,uVar1,param_7,uVar6,&uStack_c0,0x1014f00d4
                ,puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(puVar4);
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(uVar1);
  FUN_1014f02a8(&uStack_c0,0x112d387f8,&UNK_10d902650);
  func_0x000100183ab8(auStack_a0);
  func_0x000100183ab8(auStack_80);
  return;
}



/* Entry: 1014ef9f0; end: 1014efae7; -[_TtC14SIGCodematizer14SIGCodematizer exportWithSurfaceName:notes:completion:] */

/* WARNING: Possible PIC construction at 0x0001014efac4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014efac8) */

void FUN_1014ef9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    param_4 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c5faec(param_4);
  }
  puVar1 = &UNK_1103d3748;
  func_0x000107c613fc(&UNK_1103d3748,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_1);
  func_0x0001014ef018(param_3,param_2,param_4,uVar2,0,0,0,0,0,FUN_1014f00cc,puVar1);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014efae8; end: 1014efb57;  */

/* WARNING: Possible PIC construction at 0x0001014efb34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014efb38) */

void FUN_1014efae8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  if (param_3 != 0) {
    func_0x000107c5ed2c(param_3);
  }
  (**(code **)(param_4 + 0x10))(param_4,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014efb58; end: 1014efbbf;  */

void FUN_1014efb58(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef890a0);
  func_0x000107c53e28(puVar1);
  func_0x000107c61170(uVar2);
  puRam0000000112daaf00 = puVar1;
  return;
}



/* Entry: 1014efbc0; end: 1014efc1f; -[_TtC14SIGCodematizer14SIGCodematizer init] */

void FUN_1014efbc0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SIGCodematizer.SIGCodematizer",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014efbec);
  (*pcVar1)();
}



/* Entry: 1014efc20; end: 1014efc43; -[_TtC14SIGCodematizer14SIGCodematizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014efc20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112daaec8));
  return;
}



/* Entry: 1014efc44; end: 1014f00ab;  */

ulong FUN_1014efc44(double param_1)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  double dVar18;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  ulong *puStack_90;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar11 = puVar4;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar5 = 0;
  func_0x0001014f0398(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar6 = uVar5;
  FUN_100deaee4();
  puVar4 = puVar11;
  func_0x000107c5fe10(puVar11,uVar5,uVar6);
  func_0x000107c61170();
  if (((ulong)puVar4 & 0xc000000000000001) == 0) {
    lStack_80 = 0;
    uVar16 = -1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
    puVar13 = (ulong *)(puVar4 + 0x38);
    uVar10 = ~uVar16;
    uVar16 = -uVar16;
    uStack_78 = 0xffffffffffffffff;
    if (uVar16 < 0x40) {
      uStack_78 = ~(-1L << (uVar16 & 0x3f));
    }
    uStack_78 = uStack_78 & *puVar13;
  }
  else {
    puVar11 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar11 = puVar4;
    }
    func_0x000107c60288();
    func_0x000107c5fe30(&puStack_98);
    uVar10 = uStack_88;
    puVar4 = puStack_98;
    puVar13 = puStack_90;
  }
  uVar16 = uStack_78;
  lVar17 = lStack_80;
  while( true ) {
    uVar14 = uVar16;
    lVar12 = lVar17;
    if ((long)puVar4 < 0) {
      func_0x000107c602ac();
      if (puVar11 == (undefined *)0x0) goto LAB_1014eff68;
      puStack_a8 = puVar11;
      func_0x000107c6147c(&puStack_a0,&puStack_a8,PTR___syXlN_11034f1a0 + 8,uVar5,7);
      puVar15 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar11 = puStack_a0;
    }
    else {
      while (uVar14 == 0) {
        lVar1 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1014effa4);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x40 >> 6) <= lVar1) {
          uVar16 = 0;
          goto LAB_1014eff68;
        }
        lVar12 = lVar1;
        uVar14 = puVar13[lVar1];
      }
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      puVar11 = *(undefined **)
                 (*(long *)(puVar4 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 8 +
                 lVar12 * 0x200);
      func_0x000107c61174(puVar11);
      puVar15 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar15;
    if (puVar11 == (undefined *)0x0) goto LAB_1014eff68;
    func_0x000107c61168(puVar15);
    puVar9 = puVar11;
    func_0x000107c6148c(puVar11,puVar15);
    if ((puVar9 != (undefined *)0x0) &&
       (puVar15 = puVar11, func_0x000107c3d0e4(), puVar15 == (undefined *)0x0)) break;
    func_0x000107c61170();
    uVar16 = uVar14;
    lVar17 = lVar12;
  }
  puVar15 = puVar9;
  func_0x000107c5e408();
  func_0x000107c61180();
  uVar6 = 0;
  func_0x0001014f0398(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
  puVar7 = puVar15;
  func_0x000107c5fc54(puVar15,uVar6);
  func_0x000107c61170(puVar15);
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar15 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar15 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar15 = puVar7;
    }
    func_0x000107c60480();
  }
  if (puVar15 != (undefined *)0x0) {
    dVar18 = *(double *)PTR__UIWindowLevelNormal_110345e88;
    lVar12 = 4;
    do {
      uVar14 = lVar12 - 4;
      if (((ulong)puVar7 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1014effac);
          (*pcVar3)();
        }
        uVar8 = *(ulong *)(puVar7 + lVar12 * 8);
        func_0x000107c61174();
      }
      else {
        uVar8 = uVar14;
        FUN_100de9de8();
      }
      puVar2 = (undefined *)(lVar12 + -3);
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1014effa8);
        (*pcVar3)();
      }
      uVar14 = uVar8;
      func_0x000107c49eac();
      if (((uVar14 & 1) == 0) && (func_0x000107c5e3fc(uVar8), param_1 == dVar18)) {
        FUN_100deaf38(puVar4,puVar13,uVar10,lVar17,uVar16);
        func_0x000107c6142c(puVar7);
        func_0x000107c61170(puVar11);
        return uVar8;
      }
      func_0x000107c61170(uVar8);
      lVar12 = lVar12 + 1;
    } while (puVar2 != puVar15);
  }
  func_0x000107c6142c(puVar7);
  func_0x000107c5e408();
  func_0x000107c61180();
  puVar15 = puVar9;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar9);
  if ((ulong)puVar15 >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar9 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar15) {
      puVar9 = puVar15;
    }
    func_0x000107c60480();
  }
  if (puVar9 == (undefined *)0x0) {
    func_0x000107c6142c(puVar15);
    func_0x000107c61170(puVar11);
LAB_1014eff68:
    FUN_100deaf38(puVar4,puVar13,uVar10,lVar17,uVar16);
    uVar14 = 0;
  }
  else {
    if (((ulong)puVar15 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f00ac);
        (*pcVar3)();
      }
      uVar14 = *(ulong *)(puVar15 + 0x20);
      func_0x000107c61174(uVar14);
    }
    else {
      uVar14 = 0;
      FUN_100de9de8(0,puVar15);
    }
    func_0x000107c6142c(puVar15);
    func_0x000107c61170(puVar11);
    FUN_100deaf38(puVar4,puVar13,uVar10,lVar17,uVar16);
  }
  return uVar14;
}



/* Entry: 1014f00ac; end: 1014f00cb;  */

void FUN_1014f00ac(void)

{
  func_0x000107c61168(&PTR_PTR_1127dd070);
  return;
}



/* Entry: 1014f00cc; end: 1014f00df;  */

/* WARNING: Possible PIC construction at 0x0001014efb34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014efb38) */

void FUN_1014f00cc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  if (param_3 != 0) {
    func_0x000107c5ed2c(param_3);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014f00e0; end: 1014f02a7;  */

undefined *
FUN_1014f00e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  uVar2 = 0;
  func_0x0001014f0398(0,0x112daaf08,&PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
  func_0x000107c614e8();
  func_0x000107c4eca8();
  func_0x000107c61180();
  func_0x000107c3ec60(param_5);
  puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x000107c45a60(param_1,param_2,param_3,param_4);
  puVar4 = &UNK_1103d3798;
  func_0x000107c613fc(&UNK_1103d3798,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_5;
  puVar5 = &UNK_1103d37c0;
  func_0x000107c613fc(&UNK_1103d37c0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x1014f02e8;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_80 = 0x1014f0314;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100f9148c;
  puStack_88 = &UNK_1103d37d8;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar7 = puStack_78;
  func_0x000107c61174(param_5);
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = puVar3;
  func_0x000107c45138(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c60bd0(ppuVar6);
  puVar3 = puVar5;
  func_0x000107c61544(puVar5,"",0x44,0xdf,0x1f,1);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar3 & 1) == 0) {
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014f02a8);
  (*pcVar1)();
}



/* Entry: 1014f02a8; end: 1014f0333;  */

undefined8 FUN_1014f02a8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1014f0334; end: 1014f034f;  */

void FUN_1014f0334(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1014f0350; end: 1014f03d7;  */

undefined8 FUN_1014f0350(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1014f03d8; end: 1014f0597;  */

void FUN_1014f03d8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  func_0x000107c60bb4(0x3fe999999999999a);
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    puVar3 = &UNK_1103d3810;
    func_0x000107c613fc(&UNK_1103d3810,0x20,7);
    *(long *)(puVar3 + 0x10) = lVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    func_0x00010006c00c(lVar2,param_2);
    uVar4 = 0x68736e6565726373;
    func_0x000107c5fadc(0x68736e6565726373,0xee0067706a2e746f);
    pcStack_50 = FUN_1014f0af8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_1014f0a2c;
    puStack_58 = &UNK_1103d3828;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = PTR_PTR_1126b9fa8;
    func_0x000107c61168();
    func_0x000107c3e0f4();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61574(puStack_48);
    func_0x000107c61428(unaff_x20 + 0x18,&puStack_70,0x21,0);
    FUN_1014f0b44();
    uVar7 = *(ulong *)(unaff_x20 + 0x18);
    uVar8 = uVar7 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar8 + 0x10);
    uVar6 = uVar7;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      FUN_1014f1188(uVar6,uVar1 + 1,1,uVar7,FUN_1014fb12c,0x1014f1558);
      uVar8 = uVar6 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
    *(undefined **)(uVar8 + uVar1 * 8 + 0x20) = puVar3;
    *(ulong *)(unaff_x20 + 0x18) = uVar6;
    func_0x000107c614a8(&puStack_70);
    func_0x00010006c090(lVar2,param_2);
  }
  return;
}



/* Entry: 1014f0598; end: 1014f07b7;  */

void FUN_1014f0598(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x8;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5fb10();
  lVar12 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_90 = param_3;
  uStack_88 = param_4;
  func_0x000107c5fb04(lVar11);
  FUN_100e8b654();
  uVar8 = 0;
  lVar4 = lVar11;
  func_0x000107c60214(lVar11,0,PTR___sSSN_11034da80,lVar3);
  (**(code **)(lVar12 + 8))(lVar11,lVar2);
  if (uVar8 >> 0x3c < 0xf) {
    puVar5 = &UNK_1103d3860;
    func_0x000107c613fc(&UNK_1103d3860,0x20,7);
    *(long *)(puVar5 + 0x10) = lVar4;
    *(ulong *)(puVar5 + 0x18) = uVar8;
    func_0x00010006c00c(lVar4,uVar8);
    func_0x000107c5fadc(param_1,param_2);
    uStack_70 = 0x1014f16dc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1014f0a2c;
    puStack_78 = &UNK_1103d3878;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = PTR_PTR_1126b9fa8;
    func_0x000107c61168();
    func_0x000107c3e0f4();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(param_1);
    func_0x000107c61574(puStack_68);
    func_0x000107c61428(unaff_x20 + 0x18,&puStack_90,0x21,0);
    FUN_1014f0b44();
    uVar9 = *(ulong *)(unaff_x20 + 0x18);
    uVar10 = uVar9 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar10 + 0x10);
    uVar7 = uVar9;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_1014f1188(uVar7,uVar1 + 1,1,uVar9,FUN_1014fb12c,0x1014f1558);
      uVar10 = uVar7 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
    *(undefined **)(uVar10 + uVar1 * 8 + 0x20) = puVar5;
    *(ulong *)(unaff_x20 + 0x18) = uVar7;
    func_0x000107c614a8(&puStack_90);
    func_0x0001000b44c0(lVar4,uVar8);
  }
  return;
}



/* Entry: 1014f07b8; end: 1014f0a2b;  */

void FUN_1014f07b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long extraout_x8;
  ulong *unaff_x20;
  ulong *puVar13;
  undefined **unaff_x21;
  long lVar14;
  code *pcVar15;
  long alStack_120 [8];
  undefined **ppuStack_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [104];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_120[7] = *unaff_x20;
  uVar2 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(uVar2 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar13 = (ulong *)((long)alStack_120 + lVar1 + 0x30);
  unaff_x20[3] = (ulong)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5ed80(puVar13,param_1,param_2);
  func_0x000107c6142c(param_2);
  lVar3 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  puVar11 = auStack_d0;
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  ppuVar4 = &PTR____CFConstantStringClassReference_110f769d8;
  func_0x000107c5faec();
  ppuStack_e0 = ppuVar4;
  puStack_d8 = puVar11;
  func_0x000107c61434(puVar11);
  func_0x000107c602d4(lVar3 + 0x20,&ppuStack_e0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *(undefined **)(lVar3 + 0x60) = PTR___sSbN_11034dd40;
  func_0x000107c6142c(puVar11);
  *(undefined1 *)(lVar3 + 0x48) = 1;
  lVar5 = lVar3;
  FUN_100dfa3f0(lVar3);
  func_0x000107c61588(lVar3);
  FUN_100e1766c(lVar3 + 0x20);
  puVar6 = PTR_PTR_1126b9fb0;
  func_0x000107c610f8();
  puVar7 = puVar6;
  func_0x000107c5ed90();
  lVar3 = lVar5;
  func_0x000107c5f9dc(lVar5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar5);
  ppuStack_e0 = (undefined **)0x0;
  func_0x000107c48fd8();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar3);
  ppuVar4 = ppuStack_e0;
  if (puVar6 == (undefined *)0x0) {
    ppuVar8 = ppuStack_e0;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(ppuVar8);
    func_0x000107c61654();
    (**(code **)(lVar14 + 8))(puVar13,uVar2);
    func_0x000107c6142c(unaff_x20[3]);
    puVar9 = unaff_x20;
    uVar2 = alStack_120[7];
    func_0x000107c61464();
  }
  else {
    pcVar15 = *(code **)(lVar14 + 8);
    func_0x000107c61174();
    puVar9 = puVar13;
    (*pcVar15)();
    unaff_x20[2] = (ulong)puVar6;
    ppuVar4 = unaff_x21;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  *(undefined ***)((long)alStack_120 + lVar1) = ppuVar4;
  *(undefined ***)((long)alStack_120 + lVar1 + 8) = ppuVar4;
  *(ulong **)((long)alStack_120 + lVar1 + 0x10) = puVar13;
  *(ulong **)((long)alStack_120 + lVar1 + 0x18) = unaff_x20;
  *(undefined1 **)((long)alStack_120 + lVar1 + 0x20) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_120 + lVar1 + 0x28) = FUN_1014f0a2c;
  pcVar15 = (code *)puVar9[4];
  uVar10 = puVar9[5];
  uVar12 = uVar2;
  func_0x000107c6157c(uVar10);
  (*pcVar15)(uVar2);
  func_0x000107c61574(uVar10);
  if (uVar12 >> 0x3c < 0xf) {
    uVar10 = uVar2;
    func_0x000107c5ee20(uVar2,uVar12);
    func_0x0001000b44c0(uVar2,uVar12);
  }
  else {
    uVar10 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 1014f0a2c; end: 1014f0aab;  */

void FUN_1014f0a2c(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = param_2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
  if (uVar4 >> 0x3c < 0xf) {
    uVar3 = param_2;
    func_0x000107c5ee20(param_2,uVar4);
    func_0x0001000b44c0(param_2,uVar4);
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1014f0aac; end: 1014f0af7;  */

void FUN_1014f0aac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014f0af8; end: 1014f0b27;  */

undefined1  [16] FUN_1014f0af8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1014f0b28; end: 1014f0b43;  */

void FUN_1014f0b28(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1014f0b44; end: 1014f0bc3;  */

void FUN_1014f0b44(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_1014f1188(0,uVar1 + 1,1,uVar3,FUN_1014fb12c,0x1014f1558);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 1014f0bc4; end: 1014f0cf3;  */

undefined * FUN_1014f0bc4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014f0cf4);
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
    puVar3 = (undefined *)0x112daafd0;
    func_0x0001000285a8(0x112daafd0,&UNK_10d953950);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112daafd8;
    func_0x0001000285a8(0x112daafd8,&UNK_10d953958);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1014f0cf4; end: 1014f1043;  */

undefined * FUN_1014f0cf4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014f0e10);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112daafc0;
    func_0x0001000285a8(0x112daafc0,&UNK_10d953940);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1103d3a28);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1014f1044; end: 1014f1173;  */

undefined * FUN_1014f1044(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014f1174);
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
    puVar3 = (undefined *)0x112d77ed0;
    func_0x0001000285a8(0x112d77ed0,&UNK_10d9379c0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1014f1174; end: 1014f1187;  */

ulong FUN_1014f1174(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014f12c4);
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
  FUN_1014f13e0(uVar2,uVar4,FUN_1014fb0d0);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014f12c0);
      (*pcVar1)();
    }
    FUN_1014f1460(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1014f1188; end: 1014f12c3;  */

ulong FUN_1014f1188(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014f12c4);
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
  FUN_1014f13e0(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014f12c0);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1014f12c4; end: 1014f13df;  */

undefined * FUN_1014f12c4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014f13e0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112daafb8;
    func_0x0001000285a8(0x112daafb8,&UNK_10d953938);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x50) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1103d3aa8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x50 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x50);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1014f13e0; end: 1014f145f;  */

undefined * FUN_1014f13e0(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1014f1460; end: 1014f166f;  */

long FUN_1014f1460(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f1554);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f1558);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x0001014fcd40(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x0001014fcd40(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f1550);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1014f1670; end: 1014f16af;  */

void FUN_1014f1670(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1014f16b0; end: 1014f16d3;  */

void FUN_1014f16b0(void)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014f16d4; end: 1014f16df;  */

void FUN_1014f16d4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1014f16e0; end: 1014f1887;  */

undefined1  [16]
FUN_1014f16e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eb9c();
  lVar7 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  uVar6 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    uStack_70 = param_1;
    lStack_68 = param_2;
    func_0x000107c5eb88(uVar6);
    FUN_100e8b654();
    uVar3 = uVar6;
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c601f0(uVar6,PTR___sSSN_11034da80,lVar2);
    (**(code **)(lVar7 + 8))(uVar6,lVar1);
    func_0x000107c6142c(puVar5);
    uVar6 = uVar3 & 0xffffffffffff;
    if (((ulong)puVar5 & 0x2000000000000000) != 0) {
      uVar6 = (ulong)puVar5 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) {
      uVar4 = param_1;
      lVar2 = param_2;
      func_0x0001014f22e8(param_1,param_2,param_3,param_4);
      uStack_70 = 0;
      lStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x50);
      func_0x000107c5fb78(0xd000000000000027,0x800000010ef890c0);
      func_0x000107c5fb78(uVar4,lVar2);
      func_0x000107c6142c(lVar2);
      func_0x000107c5fb78(0xd000000000000021,0x800000010ef890f0);
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0x6060600a,0xe400000000000000);
      goto LAB_1014f1868;
    }
  }
  lStack_68 = 0x800000010ef88600;
  uStack_70 = 0xd000000000000025;
LAB_1014f1868:
  auVar8._8_8_ = lStack_68;
  auVar8._0_8_ = uStack_70;
  return auVar8;
}



/* Entry: 1014f1888; end: 1014f1c0b;  */

undefined1  [16] FUN_1014f1888(double param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined *puStack_78;
  undefined *apuStack_70 [2];
  
  puVar11 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar3 = puVar11;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  uVar4 = 0;
  func_0x0001014f8fe4(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar7 = uVar4;
  FUN_100deaee4();
  puVar11 = puVar3;
  func_0x000107c5fe10(puVar3,uVar4,uVar7);
  func_0x000107c61170(puVar3);
  puVar3 = puVar11;
  FUN_1014f3bf8();
  func_0x000107c6142c(puVar11);
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      puVar11 = puVar3;
    }
    func_0x000107c60480();
  }
  if (puVar11 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= puVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1014f1b8c);
          (*pcVar2)();
        }
        puVar5 = *(undefined **)(puVar3 + (long)puVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar5 = puVar12;
        FUN_1012bfb38(puVar12,puVar3);
      }
      puVar1 = puVar12 + 1;
      if (SCARRY8((long)puVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014f1b88);
        (*pcVar2)();
      }
      puVar6 = puVar5;
      func_0x000107c3d0e4();
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c6142c(puVar3);
        puVar11 = puVar5;
        func_0x000107c5e408();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        uVar7 = 0;
        func_0x0001014f8fe4(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
        puVar3 = puVar11;
        func_0x000107c5fc54(puVar11,uVar7);
        func_0x000107c61170(puVar11);
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar11 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar11 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar3) {
            puVar11 = puVar3;
          }
          func_0x000107c60480();
        }
        if (puVar11 != (undefined *)0x0) {
          uVar13 = 0;
          dVar14 = *(double *)PTR__UIWindowLevelNormal_110345e88;
          goto LAB_1014f1a44;
        }
        break;
      }
      func_0x000107c61170(puVar5);
      puVar12 = puVar12 + 1;
    } while (puVar1 != puVar11);
  }
  goto LAB_1014f1bc8;
  while( true ) {
    func_0x000107c61170(uVar8);
    uVar13 = uVar13 + 1;
    if (puVar12 == puVar11) break;
LAB_1014f1a44:
    if (((ulong)puVar3 & 0xc000000000000001) == 0) {
      if (*(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014f1b94);
        (*pcVar2)();
      }
      uVar8 = *(ulong *)(puVar3 + uVar13 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar8 = uVar13;
      FUN_100de9de8(uVar13,puVar3);
    }
    puVar12 = (undefined *)(uVar13 + 1);
    if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014f1b90);
      (*pcVar2)();
    }
    uVar9 = uVar8;
    func_0x000107c49eac();
    if (((uVar9 & 1) == 0) && (func_0x000107c5e3fc(uVar8), param_1 == dVar14)) {
      func_0x000107c6142c(puVar3);
      uVar13 = uVar8;
      func_0x000107c508f0();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      if (uVar13 == 0) goto LAB_1014f1bd0;
      apuStack_70[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      puStack_78 = PTR___swiftEmptySetSingleton_11034f1d8;
      FUN_1014f3ebc(uVar13,0,apuStack_70,&puStack_78);
      uVar7 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar4 = uVar7;
      func_0x00010011d734();
      uVar10 = 0xe100000000000000;
      func_0x000107c5fa80(10,0xe100000000000000,uVar7,uVar4);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar10);
      func_0x000107c5fb78(10,0xe100000000000000);
      func_0x000107c61170(uVar13);
      func_0x000107c6142c(puStack_78);
      func_0x000107c6142c(apuStack_70[0]);
      uVar7 = 0xd000000000000014;
      uVar4 = 0x800000010ef89060;
      goto LAB_1014f1bec;
    }
  }
LAB_1014f1bc8:
  func_0x000107c6142c(puVar3);
LAB_1014f1bd0:
  uVar4 = 0x800000010ef89290;
  uVar7 = 0xd000000000000033;
LAB_1014f1bec:
  auVar15._8_8_ = uVar4;
  auVar15._0_8_ = uVar7;
  return auVar15;
}



/* Entry: 1014f1c0c; end: 1014f3957;  */

undefined1  [16] FUN_1014f1c0c(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long unaff_x27;
  long lVar25;
  undefined *unaff_x28;
  long lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long alStack_260 [17];
  undefined1 auStack_1d8 [8];
  long alStack_1d0 [2];
  undefined1 auStack_1c0 [8];
  undefined *puStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_1c0 + lVar2;
  if (param_1 == 0) {
    puVar20 = (undefined *)0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(puVar20 + 0x18) = 4;
    *(undefined8 *)(puVar20 + 0x10) = 2;
    *(undefined8 *)(puVar20 + 0x20) = 0x736769666e6f63;
    *(undefined8 *)(puVar20 + 0x28) = 0xe700000000000000;
    uVar3 = 0x112daafe8;
    func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
    *(undefined **)(puVar20 + 0x30) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined8 *)(puVar20 + 0x48) = uVar3;
    *(undefined8 *)(puVar20 + 0x50) = 0x726f727265;
    puVar16 = PTR___sSSN_11034da80;
    *(undefined **)(puVar20 + 0x78) = PTR___sSSN_11034da80;
    *(undefined8 *)(puVar20 + 0x58) = 0xe500000000000000;
    *(undefined8 *)(puVar20 + 0x60) = 0xd000000000000021;
    *(undefined8 *)(puVar20 + 0x68) = 0x800000010ef89180;
    puVar6 = puVar20;
    func_0x000100214a84();
    func_0x000107c61588(puVar20);
    uVar3 = 0x112d4b5f0;
    func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
    func_0x000107c61408(puVar20 + 0x20,2,uVar3);
    puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    puVar20 = PTR___sypN_11034f1a8;
    puVar8 = puVar6;
    puVar19 = PTR___sSSSHsWP_11034da90;
    func_0x000107c5f9dc(puVar6,puVar16,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    puVar9 = puVar7;
    puVar18 = puVar8;
    func_0x000107c4a6cc();
    func_0x000107c61170(puVar8);
    puVar12 = puVar7;
    puVar10 = puVar20;
    puVar16 = puVar6;
    if ((int)puVar9 == 0) goto LAB_1014f2290;
    puVar8 = puVar6;
    puVar12 = PTR___sSSN_11034da80;
    func_0x000107c5f9dc(puVar6,PTR___sSSN_11034da80,puVar20 + 8,PTR___sSSSHsWP_11034da90);
    puStack_188 = (undefined *)0x0;
    puVar19 = (undefined *)0x3;
    puVar18 = puVar8;
    func_0x000107c41300();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    puVar10 = puStack_188;
    func_0x000107c61174();
    puVar9 = puVar7;
    if (puVar7 == (undefined *)0x0) {
      puVar12 = puVar10;
      func_0x000107c5ed30();
      func_0x000107c61170(puVar10);
      func_0x000107c61654();
      func_0x000107c614ac(puVar12);
      puVar10 = puVar12;
      goto LAB_1014f2290;
    }
    puVar8 = puVar7;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar7);
    func_0x000107c5fb04(puVar15);
    puVar11 = puVar8;
    puVar10 = puVar12;
    puVar18 = puVar15;
    func_0x000107c5faf0(puVar8,puVar12,puVar15);
    if (puVar10 == (undefined *)0x0) {
      func_0x00010006c090(puVar8,puVar12);
      puVar10 = puVar20;
      goto LAB_1014f2290;
    }
    puStack_188 = puVar11;
    puStack_180 = puVar10;
    func_0x000107c61434(puVar10);
    func_0x000107c5fb78(10,0xe100000000000000);
    func_0x000107c6142c(puVar10);
    func_0x00010006c090(puVar8,puVar12);
LAB_1014f223c:
    func_0x000107c6142c();
    puVar20 = puStack_180;
    puVar11 = puStack_188;
    puVar9 = puVar7;
  }
  else {
    uVar22 = param_1;
    func_0x000107c615f0();
    func_0x000107c43ec0();
    func_0x000107c61180();
    uVar3 = 0;
    func_0x0001014f8fe4(0,0x112d7acb0,&PTR_PTR_1126b7830);
    uVar4 = uVar22;
    func_0x000107c5fc54(uVar22,uVar3);
    func_0x000107c61170(uVar22);
    uStack_1b0 = param_1;
    if (uVar4 >> 0x3e == 0) {
      uVar22 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
      if (uVar22 == 0) goto LAB_1014f2038;
LAB_1014f1cdc:
      puStack_188 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_101395f90(0,uVar22 & ((long)uVar22 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014f22e4);
        (*pcVar1)();
      }
      uVar23 = 0;
      uStack_1a0 = uVar4 & 0xc000000000000001;
      uStack_1a8 = uVar4 & 0xffffffffffffff8;
      puStack_1b8 = puVar15;
      do {
        puVar15 = puStack_188;
        if (uStack_1a0 == 0) {
          if (*(long *)(uStack_1a8 + 0x10) <= (long)uVar23) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1014f201c);
            (*pcVar1)();
          }
          uVar5 = *(ulong *)(uVar4 + uVar23 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar23;
          FUN_1013cf8a0();
        }
        uStack_198 = uVar5;
        FUN_1014f46d4(&puStack_190,&uStack_198);
        func_0x000107c61170(uVar5);
        puVar16 = puStack_190;
        uVar5 = *(ulong *)(puVar15 + 0x10);
        unaff_x27 = uVar5 + 1;
        puStack_188 = puVar15;
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar5) {
          FUN_101395f90(1 < *(ulong *)(puVar15 + 0x18),unaff_x27,1);
        }
        unaff_x28 = puStack_188;
        uVar23 = uVar23 + 1;
        *(long *)(puStack_188 + 0x10) = unaff_x27;
        *(undefined **)(puStack_188 + uVar5 * 8 + 0x20) = puVar16;
      } while (uVar22 != uVar23);
      func_0x000107c6142c(uVar4);
      puVar15 = puStack_1b8;
    }
    else {
      uVar22 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar22 = uVar4;
      }
      func_0x000107c60480();
      if (uVar22 != 0) goto LAB_1014f1cdc;
LAB_1014f2038:
      puVar16 = (undefined *)0x0;
      func_0x000107c6142c(uVar4);
      unaff_x28 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    puVar20 = (undefined *)0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(puVar20 + 0x20) = 0x635f6769666e6f63;
    *(undefined8 *)(puVar20 + 0x18) = 4;
    *(undefined8 *)(puVar20 + 0x10) = 2;
    *(undefined8 *)(puVar20 + 0x28) = 0xec000000746e756f;
    puVar6 = PTR___sSiN_11034deb0;
    *(undefined8 *)(puVar20 + 0x30) = *(undefined8 *)(unaff_x28 + 0x10);
    *(undefined **)(puVar20 + 0x48) = puVar6;
    *(undefined8 *)(puVar20 + 0x50) = 0x736769666e6f63;
    *(undefined8 *)(puVar20 + 0x58) = 0xe700000000000000;
    uVar3 = 0x112d77ec8;
    func_0x0001000285a8(0x112d77ec8,&UNK_10d953980);
    *(undefined8 *)(puVar20 + 0x78) = uVar3;
    *(undefined **)(puVar20 + 0x60) = unaff_x28;
    puVar6 = puVar20;
    func_0x000100214a84();
    func_0x000107c61588(puVar20);
    uVar3 = 0x112d4b5f0;
    func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
    func_0x000107c61408(puVar20 + 0x20,2,uVar3);
    puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    puVar20 = PTR___sypN_11034f1a8;
    puVar12 = puVar6;
    puVar19 = PTR___sSSSHsWP_11034da90;
    func_0x000107c5f9dc(puVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    puVar7 = puVar9;
    puVar18 = puVar12;
    func_0x000107c4a6cc();
    func_0x000107c61170(puVar12);
    puVar8 = puVar6;
    if ((int)puVar7 != 0) {
      puVar10 = puVar6;
      puVar12 = PTR___sSSN_11034da80;
      func_0x000107c5f9dc(puVar6,PTR___sSSN_11034da80,puVar20 + 8,PTR___sSSSHsWP_11034da90);
      puStack_188 = (undefined *)0x0;
      puVar19 = (undefined *)0x3;
      puVar18 = puVar10;
      func_0x000107c41300();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      puVar10 = puStack_188;
      func_0x000107c61174();
      if (puVar9 == (undefined *)0x0) {
        puVar12 = puVar10;
        func_0x000107c5ed30();
        func_0x000107c61170(puVar10);
        func_0x000107c61654();
        func_0x000107c614ac(puVar12);
        puVar20 = puVar12;
      }
      else {
        puVar7 = puVar9;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar9);
        func_0x000107c5fb04(puVar15);
        puVar9 = puVar7;
        puVar10 = puVar12;
        puVar18 = puVar15;
        func_0x000107c5faf0(puVar7,puVar12,puVar15);
        if (puVar10 != (undefined *)0x0) {
          puStack_188 = puVar9;
          puStack_180 = puVar10;
          func_0x000107c61434(puVar10);
          func_0x000107c5fb78(10,0xe100000000000000);
          func_0x000107c6142c(puVar10);
          func_0x00010006c090(puVar7,puVar12);
          func_0x000107c615e8(uStack_1b0);
          goto LAB_1014f223c;
        }
        func_0x00010006c090(puVar7,puVar12);
      }
    }
    func_0x000107c615e8(uStack_1b0);
    puVar10 = puVar20;
    puVar9 = puVar7;
LAB_1014f2290:
    puVar11 = (undefined *)0xd00000000000002c;
    func_0x000107c6142c();
    puVar20 = (undefined *)0x800000010ef891b0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar27._8_8_ = puVar20;
    auVar27._0_8_ = puVar11;
    return auVar27;
  }
  func_0x000107c60e78();
  *(undefined **)((long)alStack_260 + lVar2 + 0x40) = unaff_x28;
  *(long *)((long)alStack_260 + lVar2 + 0x48) = unaff_x27;
  *(undefined **)((long)alStack_260 + lVar2 + 0x50) = puVar15;
  *(undefined **)((long)alStack_260 + lVar2 + 0x58) = puVar9;
  *(undefined **)((long)alStack_260 + lVar2 + 0x60) = puVar8;
  *(undefined **)((long)alStack_260 + lVar2 + 0x68) = puVar16;
  *(undefined **)((long)alStack_260 + lVar2 + 0x70) = puVar10;
  *(undefined **)((long)alStack_260 + lVar2 + 0x78) = puVar12;
  *(undefined **)((long)alStack_260 + lVar2 + 0x80) = puVar11;
  *(undefined1 **)(auStack_1d8 + lVar2) = auStack_1c0;
  *(undefined1 **)((long)alStack_1d0 + lVar2) = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)alStack_1d0 + lVar2 + 8) = 0x1014f22e8;
  lVar13 = 0;
  func_0x000107c5eb9c();
  lVar25 = *(long *)(lVar13 + -8);
  lVar26 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar25 + 0x40));
  uVar22 = (long)alStack_260 + (lVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  if (puVar20 != (undefined *)0x0) {
    *(undefined **)((long)alStack_260 + lVar2 + 0x30) = puVar6;
    *(undefined **)((long)alStack_260 + lVar2 + 0x38) = puVar20;
    func_0x000107c5eb88(uVar22);
    FUN_100e8b654();
    uVar4 = uVar22;
    puVar15 = PTR___sSSN_11034da80;
    func_0x000107c601f0(uVar22,PTR___sSSN_11034da80,lVar26);
    (**(code **)(lVar25 + 8))(uVar22,lVar13);
    func_0x000107c6142c(puVar15);
    uVar22 = uVar4 & 0xffffffffffff;
    if (((ulong)puVar15 & 0x2000000000000000) != 0) {
      uVar22 = (ulong)puVar15 >> 0x38 & 0xf;
    }
    if (uVar22 != 0) {
      func_0x0001014f2980(puVar6,puVar20);
      puVar15 = puVar6;
      func_0x0001014f2fdc();
      if (*(long *)(puVar15 + 0x10) == 0) {
        func_0x000107c6142c(puVar15);
        puVar15 = puVar6;
        func_0x0001014f3800();
      }
      func_0x000107c6142c(puVar6);
      puVar20 = puVar15;
      FUN_1014f3958();
      func_0x0001014f64bc(puVar18,puVar19);
      *(undefined **)((long)alStack_260 + lVar2 + 0x30) = puVar20;
      FUN_10109a32c();
      lVar13 = *(long *)((long)alStack_260 + lVar2 + 0x30);
      lVar26 = lVar13;
      func_0x0001014f62dc();
      func_0x000107c6142c(lVar13);
      puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar22 = *(ulong *)(lVar26 + 0x10);
      *(undefined **)((long)alStack_260 + lVar2 + 0x10) = puVar15;
      if (uVar22 == 0) {
        lVar13 = 0;
        puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        *(undefined8 *)((long)alStack_260 + lVar2 + 0x30) = 0;
        *(undefined8 *)((long)alStack_260 + lVar2 + 0x38) = 0xe000000000000000;
        func_0x000107c602fc(0x14);
        func_0x000107c6142c(*(undefined8 *)((long)alStack_260 + lVar2 + 0x38));
        *(undefined8 *)((long)alStack_260 + lVar2 + 0x30) = 0xd000000000000012;
        *(undefined8 *)((long)alStack_260 + lVar2 + 0x38) = 0x800000010ef892f0;
        *(ulong *)((long)alStack_260 + lVar2 + 8) = uVar22;
        if (0xb < uVar22) {
          uVar22 = 0xc;
        }
        if (*(ulong *)(lVar26 + 0x10) < uVar22) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1014f28a0);
          (*pcVar1)();
        }
        *(undefined **)((long)alStack_260 + lVar2 + 0x28) = puVar20;
        func_0x000107c61434(lVar26);
        func_0x000100403514(0,uVar22,0);
        lVar13 = *(long *)((long)alStack_260 + lVar2 + 0x28);
        *(long *)((long)alStack_260 + lVar2) = lVar26;
        puVar24 = (undefined8 *)(lVar26 + 0x28);
        do {
          if (uVar22 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1014f289c);
            (*pcVar1)();
          }
          uVar3 = puVar24[-1];
          uVar21 = *puVar24;
          *(undefined8 *)((long)alStack_260 + lVar2 + 0x18) = 0x202d;
          *(undefined8 *)((long)alStack_260 + lVar2 + 0x20) = 0xe200000000000000;
          func_0x000107c61434(uVar21);
          func_0x000107c5fb78(uVar3,uVar21);
          func_0x000107c6142c(uVar21);
          uVar3 = *(undefined8 *)((long)alStack_260 + lVar2 + 0x18);
          uVar21 = *(undefined8 *)((long)alStack_260 + lVar2 + 0x20);
          *(long *)((long)alStack_260 + lVar2 + 0x28) = lVar13;
          uVar4 = *(ulong *)(lVar13 + 0x10);
          if (*(ulong *)(lVar13 + 0x18) >> 1 <= uVar4) {
            func_0x000100403514(1 < *(ulong *)(lVar13 + 0x18),uVar4 + 1,1);
            lVar13 = *(long *)((long)alStack_260 + lVar2 + 0x28);
          }
          *(ulong *)(lVar13 + 0x10) = uVar4 + 1;
          lVar26 = lVar13 + uVar4 * 0x10;
          *(undefined8 *)(lVar26 + 0x20) = uVar3;
          *(undefined8 *)(lVar26 + 0x28) = uVar21;
          puVar24 = puVar24 + 2;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
        lVar26 = *(long *)((long)alStack_260 + lVar2);
        func_0x000107c6142c(lVar26);
        *(long *)((long)alStack_260 + lVar2 + 0x18) = lVar13;
        uVar3 = 0x112d38270;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        uVar21 = uVar3;
        func_0x00010011d734();
        uVar14 = 10;
        uVar17 = 0xe100000000000000;
        func_0x000107c5fa80(10,0xe100000000000000,uVar3,uVar21);
        func_0x000107c6142c(lVar13);
        func_0x000107c5fb78(uVar14,uVar17);
        func_0x000107c6142c(uVar17);
        uVar3 = *(undefined8 *)((long)alStack_260 + lVar2 + 0x30);
        uVar21 = *(undefined8 *)((long)alStack_260 + lVar2 + 0x38);
        puVar15 = (undefined *)0x0;
        func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
        uVar22 = *(ulong *)(puVar15 + 0x10);
        puVar16 = puVar15;
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar22) {
          puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
          func_0x0001000d182c(puVar16,uVar22 + 1,1,puVar15);
        }
        puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
        lVar13 = *(long *)((long)alStack_260 + lVar2 + 8);
        puVar15 = *(undefined **)((long)alStack_260 + lVar2 + 0x10);
        *(ulong *)(puVar16 + 0x10) = uVar22 + 1;
        *(undefined8 *)(puVar16 + uVar22 * 0x10 + 0x20) = uVar3;
        *(undefined8 *)(puVar16 + uVar22 * 0x10 + 0x28) = uVar21;
      }
      lVar25 = *(long *)(puVar15 + 0x10);
      func_0x000107c6142c(lVar26);
      if (lVar25 == 0) {
        func_0x000107c6142c(puVar15);
        puVar15 = puVar16;
        func_0x000107c61558();
        if (lVar13 == 0) {
          puVar20 = puVar16;
          if (((ulong)puVar15 & 1) == 0) {
            puVar20 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
          }
          uVar22 = *(ulong *)(puVar20 + 0x10);
          lVar26 = uVar22 + 1;
          puVar15 = puVar20;
          if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar22) {
            puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
            func_0x0001000d182c(puVar15,lVar26,1,puVar20);
          }
          uVar21 = 0x800000010ef893e0;
          uVar3 = 0xd000000000000040;
        }
        else {
          puVar20 = puVar16;
          if (((ulong)puVar15 & 1) == 0) {
            puVar20 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
          }
          uVar22 = *(ulong *)(puVar20 + 0x10);
          lVar26 = uVar22 + 1;
          puVar15 = puVar20;
          if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar22) {
            puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
            func_0x0001000d182c(puVar15,lVar26,1,puVar20);
          }
          uVar21 = 0x800000010ef89330;
          uVar3 = 0xd0000000000000ac;
        }
      }
      else {
        *(undefined8 *)((long)alStack_260 + lVar2 + 0x30) = 0;
        *(undefined8 *)((long)alStack_260 + lVar2 + 0x38) = 0xe000000000000000;
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(*(undefined8 *)((long)alStack_260 + lVar2 + 0x38));
        *(undefined8 *)((long)alStack_260 + lVar2 + 0x30) = 0xd000000000000013;
        *(undefined8 *)((long)alStack_260 + lVar2 + 0x38) = 0x800000010ef89310;
        lVar26 = *(long *)(puVar15 + 0x10);
        if (lVar26 != 0) {
          *(undefined **)((long)alStack_260 + lVar2 + 0x18) = puVar20;
          func_0x000100403514(0,lVar26,0);
          puVar20 = *(undefined **)((long)alStack_260 + lVar2 + 0x18);
          puVar24 = (undefined8 *)(puVar15 + 0x30);
          do {
            uVar3 = puVar24[-2];
            uVar21 = puVar24[-1];
            uVar17 = *puVar24;
            func_0x000107c61434(uVar21);
            func_0x000107c61434(uVar17);
            uVar14 = 0;
            FUN_1014f3a04(0,uVar3,uVar21,uVar17);
            func_0x000107c6142c(uVar17);
            func_0x000107c6142c(uVar21);
            *(undefined **)((long)alStack_260 + lVar2 + 0x18) = puVar20;
            uVar22 = *(ulong *)(puVar20 + 0x10);
            if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar22) {
              func_0x000100403514(1 < *(ulong *)(puVar20 + 0x18),uVar22 + 1,1);
              puVar20 = *(undefined **)((long)alStack_260 + lVar2 + 0x18);
            }
            puVar24 = puVar24 + 3;
            *(ulong *)(puVar20 + 0x10) = uVar22 + 1;
            *(undefined8 *)(puVar20 + uVar22 * 0x10 + 0x20) = uVar14;
            *(undefined8 *)(puVar20 + uVar22 * 0x10 + 0x28) = uVar3;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          puVar15 = *(undefined **)((long)alStack_260 + lVar2 + 0x10);
        }
        func_0x000107c6142c(puVar15);
        *(undefined **)((long)alStack_260 + lVar2 + 0x18) = puVar20;
        uVar3 = 0x112d38270;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        uVar21 = uVar3;
        func_0x00010011d734();
        uVar14 = 10;
        uVar17 = 0xe100000000000000;
        func_0x000107c5fa80(10,0xe100000000000000,uVar3,uVar21);
        func_0x000107c6142c(puVar20);
        func_0x000107c5fb78(uVar14,uVar17);
        func_0x000107c6142c(uVar17);
        uVar3 = *(undefined8 *)((long)alStack_260 + lVar2 + 0x30);
        uVar21 = *(undefined8 *)((long)alStack_260 + lVar2 + 0x38);
        puVar15 = puVar16;
        func_0x000107c61558();
        puVar20 = puVar16;
        if (((ulong)puVar15 & 1) == 0) {
          puVar20 = (undefined *)0x0;
          func_0x0001000d182c(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
        }
        uVar22 = *(ulong *)(puVar20 + 0x10);
        lVar26 = uVar22 + 1;
        puVar15 = puVar20;
        if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar22) {
          puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
          func_0x0001000d182c(puVar15,lVar26,1,puVar20);
        }
      }
      *(long *)(puVar15 + 0x10) = lVar26;
      *(undefined8 *)(puVar15 + uVar22 * 0x10 + 0x20) = uVar3;
      *(undefined8 *)(puVar15 + uVar22 * 0x10 + 0x28) = uVar21;
      *(undefined **)((long)alStack_260 + lVar2 + 0x30) = puVar15;
      uVar3 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar21 = uVar3;
      func_0x00010011d734();
      uVar14 = 0xa0a;
      uVar17 = 0xe200000000000000;
      func_0x000107c5fa80(0xa0a,0xe200000000000000,uVar3,uVar21);
      func_0x000107c6142c(puVar15);
      goto LAB_1014f284c;
    }
  }
  uVar17 = 0x800000010ef885a0;
  uVar14 = 0xd000000000000012;
LAB_1014f284c:
  auVar28._8_8_ = uVar17;
  auVar28._0_8_ = uVar14;
  return auVar28;
}



/* Entry: 1014f3958; end: 1014f3a03;  */

undefined * FUN_1014f3958(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR___swiftEmptySetSingleton_11034f1d8;
  puStack_50 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar1 = puVar6[-2];
      uVar2 = puVar6[-1];
      uVar4 = *puVar6;
      func_0x000107c61434(uVar2);
      func_0x000107c61434(uVar4);
      FUN_1014f5470(uVar1,uVar2,uVar4,&puStack_48,&puStack_50);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar2);
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 3;
    } while (lVar5 != 0);
  }
  puVar3 = puStack_50;
  func_0x000107c6142c(puStack_48);
  return puVar3;
}



/* Entry: 1014f3a04; end: 1014f3bf7;  */

undefined1  [16] FUN_1014f3a04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  
  uVar4 = 0x2020;
  uVar7 = 0xe200000000000000;
  func_0x000107c5fbc0(0x2020,0xe200000000000000,param_1);
  func_0x000107c5fb78(0x202d,0xe200000000000000);
  func_0x000107c5fb78(param_2,param_3);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(param_4 + 0x10);
  if (lVar9 != 0) {
    func_0x000100403514(0,lVar9,0);
    if (SCARRY8(param_1,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f3bf8);
      (*pcVar3)();
    }
    puVar11 = (undefined8 *)(param_4 + 0x30);
    do {
      uVar6 = puVar11[-2];
      uVar8 = puVar11[-1];
      uVar10 = *puVar11;
      func_0x000107c61434(uVar8);
      func_0x000107c61434(uVar10);
      lVar5 = param_1 + 1;
      FUN_1014f3a04(param_1 + 1,uVar6,uVar8,uVar10);
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c(uVar8);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      puVar11 = puVar11 + 3;
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(long *)(puVar2 + uVar1 * 0x10 + 0x20) = lVar5;
      *(undefined8 *)(puVar2 + uVar1 * 0x10 + 0x28) = uVar6;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  lVar9 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x18) = 2;
  *(undefined8 *)(lVar9 + 0x10) = 1;
  *(undefined8 *)(lVar9 + 0x20) = uVar4;
  *(undefined8 *)(lVar9 + 0x28) = uVar7;
  FUN_10109a32c(puVar2);
  uVar4 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar7 = uVar4;
  func_0x00010011d734();
  uVar6 = 10;
  uVar8 = 0xe100000000000000;
  func_0x000107c5fa80(10,0xe100000000000000,uVar4,uVar7);
  func_0x000107c6142c(lVar9);
  auVar12._8_8_ = uVar8;
  auVar12._0_8_ = uVar6;
  return auVar12;
}



/* Entry: 1014f3bf8; end: 1014f3ebb;  */

undefined * FUN_1014f3bf8(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar13;
    uVar13 = -uVar13;
    uVar9 = 0xffffffffffffffff;
    if (uVar13 < 0x40) {
      uVar9 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar9 = uVar9 & *puVar12;
    puVar10 = param_1;
    func_0x000107c61434();
    lStack_70 = 0;
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar4 = 0;
    func_0x0001014f8fe4(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    FUN_100deaee4();
    func_0x000107c5fe30(&puStack_88,puVar10,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    uVar9 = uStack_68;
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = lStack_70;
  do {
    uVar13 = uVar9;
    lVar2 = lVar14;
    if ((long)param_1 < 0) {
      func_0x000107c602ac();
      if (puVar10 == (undefined *)0x0) {
LAB_1014f3e78:
        puStack_58 = (undefined *)0x0;
LAB_1014f3e7c:
        FUN_100deaf38(param_1,puVar12,uVar11,lVar14,uVar9);
        return puStack_98;
      }
      uVar5 = 0;
      puStack_90 = puVar10;
      func_0x0001014f8fe4(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar10 = puStack_58;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f3ebc);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_1014f3e78;
        }
        lVar2 = lVar1;
        uVar13 = puVar12[lVar1];
      }
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      func_0x000107c61174(puVar10);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
    if (puVar10 == (undefined *)0x0) goto LAB_1014f3e7c;
    func_0x000107c61168(puVar7);
    puVar6 = puVar10;
    func_0x000107c6148c(puVar10,puVar7);
    uVar9 = uVar13;
    lVar14 = lVar2;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
    }
    else {
      puVar10 = puStack_98;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puStack_98 < 0)) || (((ulong)puStack_98 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_98 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puStack_98 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_98) {
            puVar7 = puStack_98;
          }
          func_0x000107c60480(puVar7);
        }
        puVar10 = (undefined *)0x0;
        FUN_10109b320(0,puVar7 + 1,1,puStack_98);
        puStack_98 = puVar10;
      }
      uVar8 = (ulong)puStack_98 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar13) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_10109b320(puVar10,uVar13 + 1,1,puStack_98);
        uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
        puStack_98 = puVar10;
      }
      *(ulong *)(uVar8 + 0x10) = uVar13 + 1;
      *(undefined **)(uVar8 + uVar13 * 8 + 0x20) = puVar6;
    }
  } while( true );
}



/* Entry: 1014f3ebc; end: 1014f46d3;  */

void FUN_1014f3ebc(ulong param_1,long param_2,ulong *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar13 = param_1;
  FUN_1014f49b4(param_1,*param_4);
  if ((uVar13 & 1) != 0) {
    return;
  }
  FUN_10125e974(&uStack_70,param_1);
  uVar4 = 0x2020;
  uVar11 = 0xe200000000000000;
  func_0x000107c5fbc0(0x2020,0xe200000000000000,param_2);
  uVar13 = param_1;
  func_0x000107c614f0();
  uVar7 = 0x112daaff8;
  uStack_70 = uVar13;
  func_0x0001000285a8(0x112daaff8,&UNK_10d953990);
  puVar5 = &uStack_70;
  func_0x000107c5fb18(puVar5,uVar7);
  puVar6 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x000107c61168(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  uVar13 = param_1;
  func_0x000107c6148c(param_1,puVar6);
  if (uVar13 == 0) {
    puVar6 = PTR__OBJC_CLASS___UITabBarController_1126d5098;
    func_0x000107c61168(PTR__OBJC_CLASS___UITabBarController_1126d5098);
    uVar13 = param_1;
    func_0x000107c6148c(param_1,puVar6);
    if (uVar13 != 0) {
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      uVar10 = param_1;
      func_0x000107c61174();
      func_0x000107c602fc(0x1e);
      uVar2 = uStack_68;
      func_0x000107c61434(uVar11);
      func_0x000107c6142c(uVar2);
      uStack_70 = uVar4;
      uStack_68 = uVar11;
      func_0x000107c5fb78(0x202d,0xe200000000000000);
      func_0x000107c5fb78(puVar5,uVar7);
      func_0x000107c6142c(uVar7);
      func_0x000107c5fb78(0xd000000000000015,0x800000010ef892d0);
      func_0x000107c51c6c();
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      func_0x000107c5fb78(0x29,0xe100000000000000);
      uVar7 = uStack_68;
      uVar9 = uStack_70;
      uVar12 = *param_3;
      uVar14 = uVar12;
      func_0x000107c61558();
      uVar8 = uVar12;
      if ((uVar14 & 1) == 0) {
        uVar8 = 0;
        func_0x0001000d182c(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      }
      uVar14 = *(ulong *)(uVar8 + 0x10);
      uVar12 = uVar8;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar14) {
        uVar12 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        func_0x0001000d182c(uVar12,uVar14 + 1,1,uVar8);
      }
      *(ulong *)(uVar12 + 0x10) = uVar14 + 1;
      lVar1 = uVar12 + uVar14 * 0x10;
      *(ulong *)(lVar1 + 0x20) = uVar9;
      *(undefined8 *)(lVar1 + 0x28) = uVar7;
      *param_3 = uVar12;
      func_0x000107c51cc4();
      func_0x000107c61180();
      if (uVar13 == 0) {
        func_0x000107c61170(uVar10);
      }
      else {
        if (SCARRY8(param_2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f4628);
          (*pcVar3)();
        }
        FUN_1014f3ebc();
        func_0x000107c61170(uVar13);
        func_0x000107c61170(uVar10);
      }
      goto LAB_1014f4320;
    }
    uStack_70 = uVar4;
    uStack_68 = uVar11;
    func_0x000107c61434(uVar11);
    func_0x000107c5fb78(0x202d,0xe200000000000000);
    func_0x000107c5fb78(puVar5,uVar7);
    func_0x000107c6142c(uVar7);
    uVar7 = uStack_68;
    uVar13 = uStack_70;
    uVar14 = *param_3;
    uVar9 = uVar14;
    func_0x000107c61558();
    uVar10 = uVar14;
    if ((uVar9 & 1) == 0) {
      uVar10 = 0;
      func_0x0001000d182c(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
    }
    uVar9 = *(ulong *)(uVar10 + 0x10);
    uVar14 = uVar10;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
      uVar14 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      func_0x0001000d182c(uVar14,uVar9 + 1,1,uVar10);
    }
    *(ulong *)(uVar14 + 0x10) = uVar9 + 1;
    lVar1 = uVar14 + uVar9 * 0x10;
    *(ulong *)(lVar1 + 0x20) = uVar13;
    *(undefined8 *)(lVar1 + 0x28) = uVar7;
    *param_3 = uVar14;
    uVar13 = param_1;
    func_0x000107c3f9e0();
    func_0x000107c61180();
    uVar7 = 0;
    func_0x0001014f8fe4(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
    uVar9 = uVar13;
    func_0x000107c5fc54(uVar13,uVar7);
    func_0x000107c61170(uVar13);
    if (uVar9 >> 0x3e == 0) {
      uVar13 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar13 = uVar9 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar9) {
        uVar13 = uVar9;
      }
      func_0x000107c60480();
    }
    if (uVar13 == 0) goto LAB_1014f4318;
    if (SCARRY8(param_2,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f46d0);
      (*pcVar3)();
    }
    if ((long)uVar13 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f46d4);
      (*pcVar3)();
    }
    uVar10 = 0;
    do {
      if ((uVar9 & 0xc000000000000001) == 0) {
        uVar14 = *(ulong *)(uVar9 + uVar10 * 8 + 0x20);
        func_0x000107c61174(uVar14);
      }
      else {
        uVar14 = uVar10;
        FUN_100f3b77c(uVar10,uVar9);
      }
      uVar10 = uVar10 + 1;
      FUN_1014f3ebc();
      func_0x000107c61170(uVar14);
    } while (uVar13 != uVar10);
  }
  else {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    uVar10 = param_1;
    func_0x000107c61174();
    func_0x000107c602fc(0x1b);
    uVar2 = uStack_68;
    func_0x000107c61434(uVar11);
    func_0x000107c6142c(uVar2);
    uStack_70 = uVar4;
    uStack_68 = uVar11;
    func_0x000107c5fb78(0x202d,0xe200000000000000);
    func_0x000107c5fb78(puVar5,uVar7);
    func_0x000107c6142c(uVar7);
    func_0x000107c5fb78(0x61676976616e2820,0xee00202c6e6f6974);
    uVar9 = uVar13;
    func_0x000107c5de94();
    func_0x000107c61180();
    uVar7 = 0;
    func_0x0001014f8fe4(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
    uVar14 = uVar9;
    func_0x000107c5fc54(uVar9,uVar7);
    func_0x000107c61170(uVar9);
    if (uVar14 >> 0x3e != 0) {
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar14);
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0x2973435620,0xe500000000000000);
    uVar7 = uStack_68;
    uVar9 = uStack_70;
    uVar12 = *param_3;
    uVar14 = uVar12;
    func_0x000107c61558();
    uVar8 = uVar12;
    if ((uVar14 & 1) == 0) {
      uVar8 = 0;
      func_0x0001000d182c(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar14 = *(ulong *)(uVar8 + 0x10);
    uVar12 = uVar8;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar14) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      func_0x0001000d182c(uVar12,uVar14 + 1,1,uVar8);
    }
    *(ulong *)(uVar12 + 0x10) = uVar14 + 1;
    lVar1 = uVar12 + uVar14 * 0x10;
    *(ulong *)(lVar1 + 0x20) = uVar9;
    *(undefined8 *)(lVar1 + 0x28) = uVar7;
    *param_3 = uVar12;
    func_0x000107c5de94();
    func_0x000107c61180();
    uVar9 = uVar13;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar13);
    if (uVar9 >> 0x3e == 0) {
      uVar13 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar13 = uVar9 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar9) {
        uVar13 = uVar9;
      }
      func_0x000107c60480();
    }
    if (uVar13 == 0) {
      func_0x000107c61170(uVar10);
LAB_1014f4318:
      func_0x000107c6142c(uVar9);
      goto LAB_1014f4320;
    }
    if (SCARRY8(param_2,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f45e0);
      (*pcVar3)();
    }
    if ((long)uVar13 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f45e4);
      (*pcVar3)();
    }
    uVar14 = 0;
    do {
      if ((uVar9 & 0xc000000000000001) == 0) {
        uVar8 = *(ulong *)(uVar9 + uVar14 * 8 + 0x20);
        func_0x000107c61174(uVar8);
      }
      else {
        uVar8 = uVar14;
        FUN_100f3b77c(uVar14,uVar9);
      }
      uVar14 = uVar14 + 1;
      FUN_1014f3ebc();
      func_0x000107c61170(uVar8);
    } while (uVar13 != uVar14);
    func_0x000107c61170(uVar10);
  }
  func_0x000107c6142c(uVar9);
LAB_1014f4320:
  uVar13 = param_1;
  func_0x000107c4f078();
  func_0x000107c61180();
  if (uVar13 != 0) {
    uVar9 = uVar13;
    func_0x000107c4f090();
    func_0x000107c61180();
    if ((uVar9 != 0) && (func_0x000107c61170(), uVar9 == param_1)) {
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x11);
      func_0x000107c6142c(uStack_68);
      uStack_70 = uVar4;
      uStack_68 = uVar11;
      func_0x000107c5fb78(0x6572705b202d2020,0xef5d6465746e6573);
      uVar7 = uStack_68;
      uVar4 = uStack_70;
      uVar14 = *param_3;
      uVar9 = uVar14;
      func_0x000107c61558();
      uVar10 = uVar14;
      if ((uVar9 & 1) == 0) {
        uVar10 = 0;
        func_0x0001000d182c(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
      }
      uVar9 = *(ulong *)(uVar10 + 0x10);
      uVar14 = uVar10;
      if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
        uVar14 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
        func_0x0001000d182c(uVar14,uVar9 + 1,1,uVar10);
      }
      *(ulong *)(uVar14 + 0x10) = uVar9 + 1;
      lVar1 = uVar14 + uVar9 * 0x10;
      *(ulong *)(lVar1 + 0x20) = uVar4;
      *(undefined8 *)(lVar1 + 0x28) = uVar7;
      *param_3 = uVar14;
      if (!SCARRY8(param_2,2)) {
        FUN_1014f3ebc(uVar13,param_2 + 2,param_3,param_4);
        func_0x000107c61170(uVar13);
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f466c);
      (*pcVar3)();
    }
    func_0x000107c61170(uVar13);
  }
  func_0x000107c6142c(uVar11);
  return;
}



/* Entry: 1014f46d4; end: 1014f49b3;  */

void FUN_1014f46d4(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [304];
  undefined1 auStack_b0 [24];
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar8 = *param_2;
  lVar1 = lVar8;
  func_0x000107c40098();
  func_0x000107c61180();
  if (lVar1 == 0) {
    param_3 = 0xe100000000000000;
    lVar9 = 0x3f;
  }
  else {
    lVar9 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  uVar2 = 0x65756c6176;
  func_0x000107c5fadc(0x65756c6176,0xe500000000000000);
  func_0x000107c5dc2c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (lVar8 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(&uStack_90,lVar8);
    func_0x000107c615e8(lVar8);
  }
  func_0x000100672b50(&uStack_90,auStack_b0);
  if (lStack_98 == 0) {
    puVar10 = (undefined *)0xe300000000000000;
    puVar11 = (undefined1 *)0x6c696e;
  }
  else {
    func_0x000100102924(auStack_b0,auStack_1e0);
    func_0x0001000bb420(auStack_1e0,auStack_200);
    puVar11 = auStack_200;
    puVar10 = PTR___sypN_11034f1a8 + 8;
    func_0x000107c5fb18();
    func_0x000100183ab8(auStack_1e0);
  }
  puVar3 = puVar11;
  puVar5 = puVar10;
  func_0x0001014f79b4();
  puVar6 = puVar5;
  func_0x0001014f7cec();
  func_0x000107c6142c(puVar5);
  lVar1 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x20) = 0x695f6769666e6f63;
  *(undefined8 *)(lVar1 + 0x18) = 10;
  *(undefined8 *)(lVar1 + 0x10) = 5;
  puVar5 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar1 + 0x28) = 0xe900000000000064;
  *(long *)(lVar1 + 0x30) = lVar9;
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  *(undefined **)(lVar1 + 0x48) = puVar5;
  *(undefined8 *)(lVar1 + 0x50) = 0x696b5f65756c6176;
  *(undefined8 *)(lVar1 + 0x58) = 0xea0000000000646e;
  puVar4 = puVar3;
  puVar7 = puVar6;
  FUN_1014f7fb8();
  *(undefined1 **)(lVar1 + 0x60) = puVar4;
  *(undefined **)(lVar1 + 0x68) = puVar7;
  *(undefined **)(lVar1 + 0x78) = puVar5;
  *(undefined8 *)(lVar1 + 0x80) = 0x72616e69625f7369;
  *(undefined8 *)(lVar1 + 0x88) = 0xef6f746f72705f79;
  puVar4 = puVar3;
  FUN_1014f81b0(puVar3,puVar6);
  puVar7 = PTR___sSbN_11034dd40;
  *(byte *)(lVar1 + 0x90) = (byte)puVar4 & 1;
  *(undefined **)(lVar1 + 0xa8) = puVar7;
  *(undefined8 *)(lVar1 + 0xb0) = 0x747865745f776172;
  *(undefined8 *)(lVar1 + 0xb8) = 0xe800000000000000;
  *(undefined1 **)(lVar1 + 0xc0) = puVar11;
  *(undefined **)(lVar1 + 200) = puVar10;
  *(undefined **)(lVar1 + 0xd8) = puVar5;
  *(undefined8 *)(lVar1 + 0xe0) = 0x7a696c616d726f6e;
  *(undefined **)(lVar1 + 0x108) = puVar5;
  *(undefined8 *)(lVar1 + 0xe8) = 0xef747865745f6465;
  *(undefined1 **)(lVar1 + 0xf0) = puVar3;
  *(undefined **)(lVar1 + 0xf8) = puVar6;
  lVar8 = lVar1;
  func_0x000100214a84();
  func_0x000107c61588(lVar1);
  uVar2 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar1 + 0x20),5,uVar2);
  func_0x0001014f8fa4(&uStack_90,0x112d387f8,&UNK_10d902650);
  *param_1 = lVar8;
  return;
}



/* Entry: 1014f49b4; end: 1014f4a4b;  */

undefined1 FUN_1014f49b4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  uVar1 = *(ulong *)(param_2 + 0x28);
  func_0x000107c60688(uVar1,param_1);
  uVar2 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(long *)(*(long *)(param_2 + 0x30) + uVar1 * 8) == param_1) {
        return 1;
      }
      uVar1 = uVar1 + 1 & ~uVar2;
    } while ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 1014f4a4c; end: 1014f4d2f;  */

void FUN_1014f4a4c(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  long alStack_b0 [2];
  undefined1 auStack_a0 [8];
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x112d483a8;
  puStack_98 = param_1;
  func_0x0001000285a8(0x112d483a8,&UNK_10d910f00);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_a0 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5eb9c();
  lVar13 = *(long *)(lVar3 + -8);
  lVar2 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  uVar14 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar9 = *param_2;
  puVar7 = (undefined8 *)param_2[1];
  uStack_90 = uVar9;
  puStack_88 = puVar7;
  func_0x000107c5eb68(uVar14);
  FUN_100e8b654();
  uVar4 = uVar14;
  puVar10 = PTR___sSSN_11034da80;
  func_0x000107c601f0(uVar14,PTR___sSSN_11034da80,lVar2);
  (**(code **)(lVar13 + 8))(uVar14,lVar3);
  uVar6 = uVar4 & 0xffffffffffff;
  if (((ulong)puVar10 & 0x2000000000000000) != 0) {
    uVar6 = (ulong)puVar10 >> 0x38 & 0xf;
  }
  if (uVar6 == 0) {
    func_0x000107c6142c(puVar10);
  }
  else {
    puVar11 = puVar10;
    FUN_1014f5ae0();
    func_0x000107c6142c(puVar10);
    if (puVar11 != (undefined *)0x0) {
      uStack_70 = 0x3c;
      uStack_68 = 0xe100000000000000;
      lVar3 = 0;
      uStack_90 = uVar9;
      puStack_88 = puVar7;
      func_0x000107c5ef14();
      (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar15,1,1,lVar3);
      *(long *)(uVar14 - 0x10) = lVar2;
      *(long *)(uVar14 - 8) = lVar2;
      puVar5 = &uStack_70;
      uVar12 = 0;
      func_0x000107c60218(puVar5,0,0,0,1,puVar15,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
      func_0x0001014f8fa4(puVar15,0x112d483a8,&UNK_10d910f00);
      if ((uVar12 & 0xff) != 1) {
        uVar6 = 0xf;
        func_0x000107c5fbd8(0xf,puVar5,uVar9);
        func_0x000107c5fb2c();
        puVar8 = puVar5;
        func_0x000107c6142c();
        uStack_70 = 0;
        uStack_68 = 0xe000000000000000;
        uStack_78 = uVar6 & 0xffffffffffff;
        if (((ulong)puVar5 & 0x2000000000000000) != 0) {
          uStack_78 = (ulong)puVar5 >> 0x38 & 0xf;
        }
        uStack_80 = 0;
        uStack_90 = uVar6;
        puStack_88 = puVar5;
        func_0x000107c5fb84();
        if (puVar8 == (undefined8 *)0x0) {
          uVar9 = 0;
          uVar16 = 0xe000000000000000;
        }
        else {
          do {
            if (((puVar7 == (undefined8 *)0x7c) && (puVar8 == (undefined8 *)0xe100000000000000)) ||
               (puVar5 = puVar8, func_0x000107c605b8(), ((ulong)puVar7 & 1) != 0)) {
              puVar5 = puVar8;
              func_0x000107c5fb74();
            }
            func_0x000107c6142c();
            func_0x000107c5fb84();
            puVar7 = puVar8;
            uVar9 = uStack_70;
            puVar8 = puVar5;
            uVar16 = uStack_68;
          } while (puVar5 != (undefined8 *)0x0);
        }
        func_0x000107c6142c(puStack_88);
        func_0x000107c5fb5c(uVar9,uVar16);
        func_0x000107c6142c(uVar16);
        *puStack_98 = uVar9;
        puStack_98[1] = uVar4;
        puStack_98[2] = puVar11;
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014f4d30);
      (*pcVar1)();
    }
  }
  *puStack_98 = 0;
  puStack_98[1] = 0;
  puStack_98[2] = 0;
  return;
}



/* Entry: 1014f4d30; end: 1014f546f;  */

ulong FUN_1014f4d30(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puStack_78;
  
  uVar11 = 0;
  uVar9 = *(ulong *)(param_3 + 0x10);
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar8 = uVar11;
    if (uVar11 <= uVar9) {
      uVar8 = uVar9;
    }
    puVar7 = (undefined8 *)(param_3 + 0x30 + uVar11 * 0x18);
    do {
      if (uVar9 == uVar11) {
        func_0x000107c61438(param_2,2);
        uVar11 = param_1;
        FUN_1014f5da4(param_1,param_2);
        if ((uVar11 & 1) == 0) {
          uVar11 = *(ulong *)(puStack_78 + 0x10);
          uVar9 = param_1;
          FUN_1014f5fd4(param_1,param_2,param_4,uVar11 != 0);
          func_0x000107c6142c(param_2);
          puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if ((uVar9 & 1) != 0) {
            uVar11 = 4;
            if (param_4 < 2) {
              uVar11 = 8;
            }
            uVar8 = *(ulong *)(puStack_78 + 0x10);
            uVar9 = uVar8;
            if (uVar11 <= uVar8) {
              uVar9 = uVar11;
            }
            if (uVar8 != 0) {
              func_0x0001014fd0cc(0,uVar9,0);
              puVar7 = (undefined8 *)(puStack_78 + 0x30);
              do {
                if (uVar9 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f5164);
                  (*pcVar3)();
                }
                uVar10 = puVar7[-2];
                uVar6 = puVar7[-1];
                uVar12 = *puVar7;
                uVar11 = *(ulong *)(puVar4 + 0x10);
                uVar8 = *(ulong *)(puVar4 + 0x18);
                func_0x000107c61434(uVar6);
                func_0x000107c61434(uVar12);
                if (uVar8 >> 1 <= uVar11) {
                  func_0x0001014fd0cc(1 < uVar8,uVar11 + 1,1);
                }
                *(ulong *)(puVar4 + 0x10) = uVar11 + 1;
                *(undefined8 *)(puVar4 + uVar11 * 0x18 + 0x20) = uVar10;
                *(undefined8 *)(puVar4 + uVar11 * 0x18 + 0x28) = uVar6;
                *(undefined8 *)(puVar4 + uVar11 * 0x18 + 0x30) = uVar12;
                puVar7 = puVar7 + 3;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
              func_0x000107c615e8(puStack_78);
              return param_1;
            }
            func_0x000107c615e8(puStack_78);
            return param_1;
          }
          if (*(ulong *)(puStack_78 + 0x10) == 1) {
            func_0x000107c6142c(param_2);
            if (*(long *)(puStack_78 + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f516c);
              (*pcVar3)();
            }
LAB_1014f4ff0:
            uVar11 = *(ulong *)(puStack_78 + 0x20);
            uVar10 = *(undefined8 *)(puStack_78 + 0x30);
            func_0x000107c61434(*(undefined8 *)(puStack_78 + 0x28));
            func_0x000107c61434(uVar10);
            func_0x000107c6142c(puStack_78);
            return uVar11;
          }
          if (uVar11 != 0) {
            if (5 < uVar11) {
              uVar11 = 6;
            }
            if (uVar11 <= *(ulong *)(puStack_78 + 0x10)) {
              func_0x0001014fd0cc(0,uVar11,0);
              puVar7 = (undefined8 *)(puStack_78 + 0x30);
              do {
                if (uVar11 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f5168);
                  (*pcVar3)();
                }
                uVar10 = puVar7[-2];
                uVar6 = puVar7[-1];
                uVar12 = *puVar7;
                uVar9 = *(ulong *)(puVar4 + 0x10);
                uVar8 = *(ulong *)(puVar4 + 0x18);
                func_0x000107c61434(uVar6);
                func_0x000107c61434(uVar12);
                if (uVar8 >> 1 <= uVar9) {
                  func_0x0001014fd0cc(1 < uVar8,uVar9 + 1,1);
                }
                *(ulong *)(puVar4 + 0x10) = uVar9 + 1;
                *(undefined8 *)(puVar4 + uVar9 * 0x18 + 0x20) = uVar10;
                *(undefined8 *)(puVar4 + uVar9 * 0x18 + 0x28) = uVar6;
                *(undefined8 *)(puVar4 + uVar9 * 0x18 + 0x30) = uVar12;
                puVar7 = puVar7 + 3;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
              func_0x000107c6142c(puStack_78);
              return param_1;
            }
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f5170);
            (*pcVar3)();
          }
        }
        else {
          func_0x000107c6142c(param_2);
          if (*(long *)(puStack_78 + 0x10) != 0) {
            if (*(long *)(puStack_78 + 0x10) != 1) {
              return param_1;
            }
            func_0x000107c6142c(param_2);
            if (*(long *)(puStack_78 + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f4edc);
              (*pcVar3)();
            }
            goto LAB_1014f4ff0;
          }
        }
        func_0x000107c6142c(puStack_78);
        func_0x000107c6142c(param_2);
        return 0;
      }
      uVar11 = uVar11 + 1;
      if (uVar8 + 1 == uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f515c);
        (*pcVar3)();
      }
      if (SCARRY8(param_4,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1014f5160);
        (*pcVar3)();
      }
      lVar2 = puVar7[-1];
      uVar10 = *puVar7;
      uVar12 = puVar7[-2];
      func_0x000107c61434(lVar2);
      func_0x000107c61434(uVar10);
      lVar5 = lVar2;
      uVar6 = uVar10;
      FUN_1014f4d30();
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c(lVar2);
      puVar7 = puVar7 + 3;
    } while (lVar5 == 0);
    puVar4 = puStack_78;
    func_0x000107c61558();
    if (((ulong)puVar4 & 1) == 0) {
      plVar1 = (long *)(puStack_78 + 0x10);
      puStack_78 = (undefined *)0x0;
      FUN_1014f0cf4(0,*plVar1 + 1,1);
    }
    uVar8 = *(ulong *)(puStack_78 + 0x10);
    if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar8) {
      puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puStack_78 + 0x18));
      FUN_1014f0cf4(puVar4,uVar8 + 1,1,puStack_78);
      puStack_78 = puVar4;
    }
    *(ulong *)(puStack_78 + 0x10) = uVar8 + 1;
    *(undefined8 *)(puStack_78 + uVar8 * 0x18 + 0x20) = uVar12;
    *(long *)(puStack_78 + uVar8 * 0x18 + 0x28) = lVar5;
    *(undefined8 *)(puStack_78 + uVar8 * 0x18 + 0x30) = uVar6;
  } while( true );
}



/* Entry: 1014f5470; end: 1014f5607;  */

void FUN_1014f5470(ulong param_1,undefined8 param_2,long param_3,undefined8 *param_4,ulong *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  func_0x000107c61438(param_2,2);
  uVar2 = param_1;
  FUN_1014f60a8(param_1,param_2);
  if ((uVar2 & 1) != 0) {
    uVar5 = *param_4;
    func_0x000107c61434(uVar5);
    uVar2 = param_1;
    func_0x0001000f66f0(param_1,param_2,uVar5);
    func_0x000107c6142c(uVar5);
    if ((uVar2 & 1) == 0) {
      func_0x000100403b00(auStack_60,param_1,param_2);
      func_0x000107c6142c(uStack_58);
      uVar7 = *param_5;
      uVar2 = uVar7;
      func_0x000107c61558();
      *param_5 = uVar7;
      uVar3 = uVar7;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        func_0x0001000d182c(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
        *param_5 = uVar3;
      }
      uVar2 = *(ulong *)(uVar3 + 0x10);
      uVar7 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        func_0x0001000d182c(uVar7,uVar2 + 1,1,uVar3);
        *param_5 = uVar7;
      }
      *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
      lVar6 = uVar7 + uVar2 * 0x10;
      *(ulong *)(lVar6 + 0x20) = param_1;
      *(undefined8 *)(lVar6 + 0x28) = param_2;
      lVar6 = *(long *)(param_3 + 0x10);
      goto joined_r0x0001014f54f8;
    }
  }
  func_0x000107c61430(param_2,2);
  lVar6 = *(long *)(param_3 + 0x10);
joined_r0x0001014f54f8:
  if (lVar6 != 0) {
    puVar8 = (undefined8 *)(param_3 + 0x30);
    do {
      uVar5 = puVar8[-2];
      uVar1 = puVar8[-1];
      uVar4 = *puVar8;
      func_0x000107c61434(uVar1);
      func_0x000107c61434(uVar4);
      FUN_1014f5470(uVar5,uVar1,uVar4,param_4,param_5);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar1);
      lVar6 = lVar6 + -1;
      puVar8 = puVar8 + 3;
    } while (lVar6 != 0);
  }
  return;
}



/* Entry: 1014f5608; end: 1014f5acb;  */

void FUN_1014f5608(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long alStack_c0 [2];
  long lStack_b0;
  ulong *puStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  code *pcStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  lVar3 = 0x112d483a8;
  func_0x0001000285a8(0x112d483a8,&UNK_10d910f00);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)&lStack_b0 - extraout_x8;
  lVar4 = 0;
  func_0x000107c5eb9c();
  lVar19 = *(long *)(lVar4 + -8);
  lVar3 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  uVar20 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_98 = *param_2;
  puStack_a0 = (undefined *)param_2[1];
  uStack_70 = uStack_98;
  puStack_68 = puStack_a0;
  func_0x000107c5eb68(uVar20);
  FUN_100e8b654();
  uVar5 = uVar20;
  puVar10 = PTR___sSSN_11034da80;
  func_0x000107c601f0(uVar20,PTR___sSSN_11034da80,lVar3);
  pcStack_90 = *(code **)(lVar19 + 8);
  lStack_88 = lVar4;
  (*pcStack_90)(uVar20,lVar4);
  uVar11 = uVar5 & 0xffffffffffff;
  if (((ulong)puVar10 & 0x2000000000000000) != 0) {
    uVar11 = (ulong)puVar10 >> 0x38 & 0xf;
  }
  if (uVar11 != 0) {
    uStack_80 = 0x3c;
    uStack_78 = 0xe100000000000000;
    lVar4 = 0;
    uStack_70 = uVar5;
    puStack_68 = puVar10;
    func_0x000107c5ef14();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar18,1,1,lVar4);
    *(long *)(uVar20 - 0x10) = lVar3;
    *(long *)(uVar20 - 8) = lVar3;
    uVar11 = 0;
    uVar14 = 0;
    uVar16 = 0;
    func_0x000107c60218(&uStack_80,0,0,0,1,lVar18,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
    func_0x0001014f8fa4(lVar18,0x112d483a8,&UNK_10d910f00);
    if ((uVar14 & 0xff) != 1) {
      puVar15 = puVar10;
      lStack_b0 = lVar3;
      puStack_a8 = param_1;
      FUN_100ed9f54(uVar11,uVar5,puVar10);
      func_0x000107c6142c(puVar10);
      uVar8 = uVar11;
      uVar13 = uVar5;
      if (0x3fff < (uVar11 ^ uVar5)) {
        while ((uVar6 = uVar8, uVar12 = uVar11,
               func_0x000107c601b4(uVar8,uVar11,uVar5,puVar15,uVar16), uVar13 = uVar8, uVar6 != 0x3a
               || (uVar12 != 0xe100000000000000))) {
          uVar7 = uVar6;
          func_0x000107c605b8(uVar6,uVar12,0x3a,0xe100000000000000,0);
          if (((uVar7 & 1) != 0) || (uVar6 == 0x3b && uVar12 == 0xe100000000000000)) break;
          uVar7 = uVar6;
          func_0x000107c605b8(uVar6,uVar12,0x3b,0xe100000000000000,0);
          if (((uVar7 & 1) != 0) || (uVar6 == 0x20 && uVar12 == 0xe100000000000000)) break;
          uVar7 = uVar6;
          func_0x000107c605b8(uVar6,uVar12,0x20,0xe100000000000000,0);
          if (((uVar7 & 1) != 0) || (uVar6 == 0x3e && uVar12 == 0xe100000000000000)) break;
          func_0x000107c605b8(uVar6,uVar12,0x3e,0xe100000000000000,0);
          func_0x000107c6142c(uVar12);
          if (((uVar6 & 1) != 0) ||
             (func_0x000107c601a4(uVar8,uVar11,uVar5,puVar15,uVar16), uVar13 = uVar5,
             (uVar8 ^ uVar5) < 0x4000)) goto LAB_1014f5910;
        }
        func_0x000107c6142c(uVar12);
      }
LAB_1014f5910:
      if (uVar13 >> 0xe < uVar11 >> 0xe) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014f5acc);
        (*pcVar2)();
      }
      uVar8 = uVar11;
      func_0x000107c601b8(uVar11,uVar13,uVar11,uVar5,puVar15,uVar16);
      func_0x000107c6142c(uVar16);
      func_0x000107c5fb2c(uVar11,uVar13,uVar8,uVar5);
      func_0x000107c6142c(uVar5);
      uStack_70 = uVar11;
      puStack_68 = (undefined *)uVar13;
      func_0x000107c5eb88(uVar20);
      lVar3 = lStack_b0;
      uVar5 = uVar20;
      puVar10 = PTR___sSSN_11034da80;
      func_0x000107c601f0(uVar20,PTR___sSSN_11034da80,lStack_b0);
      (*pcStack_90)(uVar20,lStack_88);
      func_0x000107c6142c(uVar13);
      uVar11 = uVar5 & 0xffffffffffff;
      if (((ulong)puVar10 & 0x2000000000000000) != 0) {
        uVar11 = (ulong)puVar10 >> 0x38 & 0xf;
      }
      if (uVar11 != 0) {
        uStack_80 = 0x2e;
        uStack_78 = 0xe100000000000000;
        puVar9 = &uStack_80;
        uStack_70 = uVar5;
        puStack_68 = puVar10;
        func_0x000107c601dc(puVar9,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar3,lVar3);
        puVar1 = puStack_a8;
        plVar17 = puVar9 + 2;
        if (*plVar17 == 0) {
          func_0x000107c6142c();
        }
        else {
          uVar5 = plVar17[*plVar17 * 2];
          puVar15 = (undefined *)(plVar17 + *plVar17 * 2)[1];
          func_0x000107c61434(puVar15);
          func_0x000107c6142c(puVar10);
          func_0x000107c6142c(puVar9);
          puVar10 = puVar15;
        }
        uStack_70 = uStack_98;
        puStack_68 = puStack_a0;
        uStack_80 = 0xd000000000000011;
        uStack_78 = 0x800000010ef89630;
        puVar9 = &uStack_80;
        func_0x000107c6022c(puVar9,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar3,lVar3);
        *puVar1 = uVar5;
        puVar1[1] = (ulong)puVar10;
        *(byte *)(puVar1 + 2) = ((byte)puVar9 ^ 0xff) & 1;
        return;
      }
      func_0x000107c6142c(puVar10);
      *puStack_a8 = 0;
      puStack_a8[1] = 0;
      *(undefined1 *)(puStack_a8 + 2) = 0;
      return;
    }
  }
  func_0x000107c6142c(puVar10);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 1014f5acc; end: 1014f5adf;  */

/* WARNING: Removing unreachable block (ram,0x0001014f0be4) */
/* WARNING: Removing unreachable block (ram,0x0001014f0bf4) */
/* WARNING: Removing unreachable block (ram,0x0001014f0cf0) */
/* WARNING: Removing unreachable block (ram,0x0001014f0c00) */
/* WARNING: Removing unreachable block (ram,0x0001014f0c08) */
/* WARNING: Removing unreachable block (ram,0x0001014f0c80) */
/* WARNING: Removing unreachable block (ram,0x0001014f0c88) */
/* WARNING: Removing unreachable block (ram,0x0001014f0c8c) */
/* WARNING: Removing unreachable block (ram,0x0001014f0c90) */
/* WARNING: Removing unreachable block (ram,0x0001014f0ca0) */

undefined * FUN_1014f5acc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar6) {
    lVar1 = lVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112daafd0;
    func_0x0001000285a8(0x112daafd0,&UNK_10d953950);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 5) << 1;
  }
  uVar5 = 0x112daafd8;
  func_0x0001000285a8(0x112daafd8,&UNK_10d953958);
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar6,uVar5);
  func_0x000107c6142c(param_1);
  return puVar3;
}



/* Entry: 1014f5ae0; end: 1014f5da3;  */

undefined1  [16] FUN_1014f5ae0(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long extraout_x8;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_80 [8];
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar13 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0x3c;
  uVar8 = 0;
  uVar12 = param_2;
  FUN_10143c25c(0x3c,0xe100000000000000,param_1,param_2);
  puVar4 = (undefined1 *)0x0;
  puVar9 = (undefined *)0x0;
  if ((uVar8 & 0xff) != 1) {
    func_0x000107c5fb60(uVar3,param_1,param_2);
    FUN_100ed9f54();
    uVar7 = uVar3;
    uVar11 = param_1;
    if (0x3fff < (uVar3 ^ param_1)) {
      while ((lStack_78 = lVar2, uVar5 = uVar7, uVar10 = uVar3,
             func_0x000107c601b4(uVar7,uVar3,param_1,param_2,uVar12), uVar11 = uVar7, uVar5 != 0x3a
             || (uVar10 != 0xe100000000000000))) {
        uVar6 = uVar5;
        func_0x000107c605b8(uVar5,uVar10,0x3a,0xe100000000000000,0);
        if (((uVar6 & 1) != 0) || (uVar5 == 0x3b && uVar10 == 0xe100000000000000)) break;
        uVar6 = uVar5;
        func_0x000107c605b8(uVar5,uVar10,0x3b,0xe100000000000000,0);
        if (((uVar6 & 1) != 0) || (uVar5 == 0x3e && uVar10 == 0xe100000000000000)) break;
        func_0x000107c605b8(uVar5,uVar10,0x3e,0xe100000000000000,0);
        func_0x000107c6142c(uVar10);
        lVar2 = lStack_78;
        if (((uVar5 & 1) != 0) ||
           (func_0x000107c601a4(uVar7,uVar3,param_1,param_2,uVar12), lVar2 = lStack_78,
           uVar11 = param_1, (uVar7 ^ param_1) < 0x4000)) goto LAB_1014f5ca4;
      }
      func_0x000107c6142c(uVar10);
      lVar2 = lStack_78;
    }
LAB_1014f5ca4:
    if (uVar11 >> 0xe < uVar3 >> 0xe) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014f5da4);
      (*pcVar1)();
    }
    uVar7 = uVar3;
    func_0x000107c601b8(uVar3,uVar11,uVar3,param_1,param_2,uVar12);
    func_0x000107c6142c(uVar12);
    func_0x000107c5fb2c(uVar3,uVar11,uVar7,param_1);
    func_0x000107c6142c(param_1);
    uStack_70 = uVar3;
    uStack_68 = uVar11;
    func_0x000107c5eb88(puVar13);
    FUN_100e8b654();
    puVar4 = puVar13;
    puVar9 = PTR___sSSN_11034da80;
    func_0x000107c601f0(puVar13,PTR___sSSN_11034da80,param_1);
    (**(code **)(lVar14 + 8))(puVar13,lVar2);
    func_0x000107c6142c(uVar11);
    uVar3 = (ulong)puVar4 & 0xffffffffffff;
    if (((ulong)puVar9 & 0x2000000000000000) != 0) {
      uVar3 = (ulong)puVar9 >> 0x38 & 0xf;
    }
    if (uVar3 == 0) {
      func_0x000107c6142c(puVar9);
      puVar4 = (undefined1 *)0x0;
      puVar9 = (undefined *)0x0;
    }
  }
  auVar15._8_8_ = puVar9;
  auVar15._0_8_ = puVar4;
  return auVar15;
}



/* Entry: 1014f5da4; end: 1014f5fd3;  */

uint FUN_1014f5da4(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dab138 != -1) {
    func_0x000107c61568(0x112dab138,0x1014f5170);
  }
  uVar3 = param_1;
  func_0x0001000f66f0(param_1,param_2,uRam0000000112dab140);
  uVar5 = uRam0000000112dab178;
  uVar4 = uRam0000000112dab170;
  if ((uVar3 & 1) == 0) {
    func_0x000107c61434(uRam0000000112dab178);
    func_0x000107c5fbb4(uVar4,uVar5,param_1,param_2);
    func_0x000107c6142c(uVar5);
    puVar1 = PTR_s_in_the_capture__10ef89400_0x30_112dab188;
    uVar3 = uRam0000000112dab180;
    if ((uVar4 & 1) == 0) {
      func_0x000107c61434(PTR_s_in_the_capture__10ef89400_0x30_112dab188);
      func_0x000107c5fbb4(uVar3,puVar1,param_1,param_2);
      func_0x000107c6142c(puVar1);
      puVar1 = PTR_s_UITransitionView_112dab198;
      uVar4 = uRam0000000112dab190;
      if ((uVar3 & 1) == 0) {
        func_0x000107c61434(PTR_s_UITransitionView_112dab198);
        func_0x000107c5fbb4(uVar4,puVar1,param_1,param_2);
        func_0x000107c6142c(puVar1);
        puVar1 = PTR_s_UIDropShadowView_112dab1a8;
        uVar3 = uRam0000000112dab1a0;
        if ((uVar4 & 1) == 0) {
          func_0x000107c61434(PTR_s_UIDropShadowView_112dab1a8);
          func_0x000107c5fbb4(uVar3,puVar1,param_1,param_2);
          func_0x000107c6142c(puVar1);
          puVar1 = PTR_s_UILayoutContainerView_112dab1b8;
          uVar4 = uRam0000000112dab1b0;
          if ((uVar3 & 1) == 0) {
            func_0x000107c61434(PTR_s_UILayoutContainerView_112dab1b8);
            func_0x000107c5fbb4(uVar4,puVar1,param_1,param_2);
            func_0x000107c6142c(puVar1);
            puVar1 = PTR_s_UINavigationTransitionView_112dab1c8;
            uVar3 = uRam0000000112dab1c0;
            if ((uVar4 & 1) == 0) {
              func_0x000107c61434(PTR_s_UINavigationTransitionView_112dab1c8);
              func_0x000107c5fbb4(uVar3,puVar1,param_1,param_2);
              func_0x000107c6142c(puVar1);
              puVar1 = PTR_s_UIViewControllerWrapperView_112dab1d8;
              uVar4 = uRam0000000112dab1d0;
              if ((uVar3 & 1) == 0) {
                func_0x000107c61434(PTR_s_UIViewControllerWrapperView_112dab1d8);
                func_0x000107c5fbb4(uVar4,puVar1,param_1,param_2);
                func_0x000107c6142c(puVar1);
                uVar2 = uRam0000000112dab1e8;
                uVar5 = uRam0000000112dab1e0;
                if ((uVar4 & 1) == 0) {
                  func_0x000107c61434(uRam0000000112dab1e8);
                  func_0x000107c5fbb4(uVar5,uVar2,param_1,param_2);
                  func_0x000107c6142c(uVar2);
                  return (uint)uVar5 & 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}



/* Entry: 1014f5fd4; end: 1014f60a7;  */

uint FUN_1014f5fd4(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((1 < param_3) || ((param_4 & 1) == 0)) {
    lVar6 = 0x12;
    uVar3 = param_1;
    uStack_60 = param_1;
    uStack_58 = param_2;
    FUN_100e8b654();
    puVar1 = PTR___sSSN_11034da80;
    puVar5 = (undefined8 *)0x112dab030;
    do {
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) {
        if ((param_4 & 1) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0x4353;
          func_0x000107c5fbb4(0x4353,0xe200000000000000,param_1,param_2);
        }
        goto LAB_1014f6064;
      }
      uStack_70 = puVar5[-1];
      uStack_68 = *puVar5;
      uVar4 = 0;
      func_0x000107c6022c(&uStack_70,puVar1,puVar1,uVar3,uVar3);
      puVar5 = puVar5 + 2;
    } while ((uVar4 & 1) == 0);
  }
  uVar2 = 1;
LAB_1014f6064:
  return uVar2 & 1;
}



/* Entry: 1014f60a8; end: 1014f612b;  */

bool FUN_1014f60a8(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR___sSSN_11034da80;
  lVar4 = 0x12;
  puVar3 = (undefined8 *)0x112dab370;
  puStack_40 = param_1;
  uStack_38 = param_2;
  do {
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) break;
    uStack_50 = puVar3[-1];
    uStack_48 = *puVar3;
    FUN_100e8b654();
    puVar2 = &uStack_50;
    func_0x000107c6022c(&uStack_50,puVar1,puVar1,param_1,param_1);
    param_1 = (undefined1 *)puVar2;
    puVar3 = puVar3 + 2;
  } while (((ulong)puVar2 & 1) == 0);
  return lVar4 != 0;
}



/* Entry: 1014f612c; end: 1014f7fb7;  */

undefined * FUN_1014f612c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  undefined8 uStack_88;
  long lStack_80;
  byte bStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  func_0x000107c5eb9c();
  lVar12 = *(long *)(lVar5 + -8);
  lVar6 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_88 = param_1;
  lStack_80 = param_2;
  func_0x000107c5eb94(puVar11);
  FUN_100e8b654();
  puVar7 = puVar11;
  func_0x000107c601d8(puVar11,PTR___sSSN_11034da80,lVar6);
  (**(code **)(lVar12 + 8))(puVar11,lVar5);
  uVar13 = *(ulong *)(puVar7 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    uVar14 = 0;
    puVar15 = (undefined8 *)(puVar7 + 0x28);
    puStack_98 = puVar7;
    do {
      if (*(ulong *)(puVar7 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1014f62dc);
        (*pcVar4)();
      }
      uStack_70 = puVar15[-1];
      uStack_68 = *puVar15;
      FUN_1014f5608(&uStack_88,&uStack_70);
      bVar3 = bStack_78;
      lVar6 = lStack_80;
      uVar2 = uStack_88;
      if (lStack_80 != 0) {
        puVar8 = puVar9;
        func_0x000107c61558();
        puVar10 = puVar9;
        if (((ulong)puVar8 & 1) == 0) {
          puVar10 = (undefined *)0x0;
          func_0x0001014f0f2c(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
        }
        uVar1 = *(ulong *)(puVar10 + 0x10);
        puVar9 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
          func_0x0001014f0f2c(puVar9,uVar1 + 1,1,puVar10);
        }
        *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar9 + uVar1 * 0x18 + 0x20) = uVar2;
        *(long *)(puVar9 + uVar1 * 0x18 + 0x28) = lVar6;
        puVar9[uVar1 * 0x18 + 0x30] = bVar3 & 1;
        puVar7 = puStack_98;
      }
      uVar14 = uVar14 + 1;
      puVar15 = puVar15 + 2;
    } while (uVar13 != uVar14);
  }
  func_0x000107c6142c(puVar7);
  return puVar9;
}



/* Entry: 1014f7fb8; end: 1014f81af;  */

undefined1  [16] FUN_1014f7fb8(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  ulong uStack_60;
  ulong uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eb9c();
  lVar9 = *(long *)(lVar1 + -8);
  lVar3 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar4 = param_2 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    lVar3 = -0x1b00000000000000;
    uVar8 = 0x7974706d65;
  }
  else {
    uStack_60 = param_1;
    uStack_58 = param_2;
    func_0x000107c5eb94(lVar7);
    FUN_100e8b654();
    lVar2 = lVar7;
    func_0x000107c601d8(lVar7,PTR___sSSN_11034da80,lVar3);
    (**(code **)(lVar9 + 8))(lVar7,lVar1);
    lVar1 = lVar2;
    if (*(long *)(lVar2 + 0x10) != 0) {
      uVar6 = *(undefined8 *)(lVar2 + 0x20);
      lVar1 = *(long *)(lVar2 + 0x28);
      func_0x000107c61434(lVar1);
      func_0x000107c6142c(lVar2);
      lVar3 = 0x20;
      uVar5 = 0;
      FUN_10143c25c(0x20,0xe100000000000000,uVar6,lVar1);
      if ((uVar5 & 0xff) != 1) {
        uVar8 = 0xf;
        lVar7 = lVar1;
        func_0x000107c5fbd8(0xf,lVar3,uVar6,lVar1);
        func_0x000107c6142c(lVar1);
        func_0x000107c5fb2c(uVar8,lVar3,uVar6,lVar7);
        func_0x000107c6142c(lVar7);
        uVar4 = 0x65756c61765f;
        func_0x000107c5fbb8(0x65756c61765f,0xe600000000000000,uVar8,lVar3);
        lVar1 = lVar3;
        if ((uVar4 & 1) != 0) goto LAB_1014f818c;
      }
    }
    uVar8 = 0x6c696e;
    func_0x000107c6142c(lVar1);
    if (((param_1 == 0x6c696e) && (param_2 == 0xe300000000000000)) ||
       (func_0x000107c605b8(param_1,param_2,0x6c696e,0xe300000000000000,0), (param_1 & 1) != 0)) {
      lVar3 = -0x1d00000000000000;
    }
    else {
      lVar3 = -0x1a00000000000000;
      uVar8 = 0x72616c616373;
    }
  }
LAB_1014f818c:
  auVar10._8_8_ = lVar3;
  auVar10._0_8_ = uVar8;
  return auVar10;
}



/* Entry: 1014f81b0; end: 1014f83b3;  */

uint FUN_1014f81b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long extraout_x8;
  long lVar6;
  uint uVar7;
  long alStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = 0x112d483a8;
  func_0x0001000285a8(0x112d483a8,&UNK_10d910f00);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar6 = (long)&uStack_60 + lVar1;
  uStack_60 = 0x756c61765f796e61;
  uStack_58 = 0xe900000000000065;
  uStack_50 = param_1;
  uStack_48 = param_2;
  FUN_100e8b654();
  puVar3 = &uStack_60;
  func_0x000107c6022c(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar2,lVar2);
  if (((ulong)puVar3 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uStack_60 = 0xd000000000000021;
    uStack_58 = 0x800000010ef891e0;
    lVar4 = 0;
    uStack_50 = param_1;
    uStack_48 = param_2;
    func_0x000107c5ef14();
    uVar7 = 1;
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar6,1,1,lVar4);
    *(long *)((long)alStack_70 + lVar1) = lVar2;
    *(long *)((long)alStack_70 + lVar1 + 8) = lVar2;
    uVar5 = 0;
    func_0x000107c60218(&uStack_60,0x400,0,0,1,lVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
    func_0x0001014f8fa4(lVar6,0x112d483a8,&UNK_10d910f00);
    if ((uVar5 & 0xff) == 1) {
      uStack_60 = 0x5c6e5c;
      uStack_58 = 0xe300000000000000;
      puVar3 = &uStack_60;
      uStack_50 = param_1;
      uStack_48 = param_2;
      func_0x000107c6022c(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar2,lVar2);
      if (((ulong)puVar3 & 1) == 0) {
        uStack_60 = 0x3031305c;
        uStack_58 = 0xe400000000000000;
        puVar3 = &uStack_60;
        uStack_50 = param_1;
        uStack_48 = param_2;
        func_0x000107c6022c(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar2,lVar2);
        if (((ulong)puVar3 & 1) == 0) {
          uStack_60 = 0x3530305c;
          uStack_58 = 0xe400000000000000;
          puVar3 = &uStack_60;
          uStack_50 = param_1;
          uStack_48 = param_2;
          func_0x000107c6022c(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar2,lVar2);
          uVar7 = (uint)puVar3;
        }
      }
    }
  }
  return uVar7 & 1;
}



/* Entry: 1014f83b4; end: 1014f8f77;  */

undefined1  [16] FUN_1014f83b4(undefined8 *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar15;
  long extraout_x8_03;
  long extraout_x12;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  code *pcVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  code *pcVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long alStack_660 [11];
  undefined1 auStack_608 [8];
  long alStack_600 [2];
  undefined1 auStack_5f0 [8];
  undefined8 *puStack_5e8;
  undefined *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined1 *puStack_5b8;
  undefined *puStack_5b0;
  long lStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  long lStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined1 auStack_190 [256];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  func_0x000107c5efa8();
  lVar21 = *(long *)(lVar3 + -8);
  lStack_5a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar3 = 0;
  puStack_5b8 = auStack_5f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ef14();
  lVar18 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar17 = (long)(auStack_5f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  uVar5 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef3e8d0);
  puVar6 = puVar4;
  func_0x000107c4d9bc();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  if (puVar6 == (undefined *)0x0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(&uStack_90,puVar6);
    func_0x000107c615e8(puVar6);
  }
  puVar6 = PTR___sypN_11034f1a8;
  uStack_588 = uStack_88;
  uStack_590 = uStack_90;
  lStack_578 = lStack_78;
  uStack_580 = uStack_80;
  if (lStack_78 == 0) {
    func_0x0001014f8fa4(&uStack_590,0x112d387f8,&UNK_10d902650);
LAB_1014f853c:
    uStack_5c8 = 0x3f;
    uStack_5c0 = 0xe100000000000000;
  }
  else {
    puVar7 = &uStack_5a0;
    func_0x000107c6147c(puVar7,&uStack_590,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar7 & 1) == 0) goto LAB_1014f853c;
    uStack_5c8 = uStack_5a0;
    uStack_5c0 = uStack_598;
  }
  uVar5 = 0x656c646e75424643;
  func_0x000107c5fadc(0x656c646e75424643,0xef6e6f6973726556);
  puVar8 = puVar4;
  func_0x000107c4d9bc();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  if (puVar8 == (undefined *)0x0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(&uStack_90,puVar8);
    func_0x000107c615e8(puVar8);
  }
  uStack_588 = uStack_88;
  uStack_590 = uStack_90;
  lStack_578 = lStack_78;
  uStack_580 = uStack_80;
  puStack_5b0 = puVar4;
  if (lStack_78 == 0) {
    puVar7 = (undefined8 *)0x112d387f8;
    func_0x0001014f8fa4(&uStack_590,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar9 = &uStack_5a0;
    puVar7 = &uStack_590;
    func_0x000107c6147c(puVar9,puVar7,puVar6 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar9 & 1) != 0) {
      uStack_5d8 = uStack_5a0;
      uStack_5d0 = uStack_598;
      goto LAB_1014f8618;
    }
  }
  uStack_5d8 = 0x3f;
  uStack_5d0 = 0xe100000000000000;
LAB_1014f8618:
  puVar4 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x000107c5c650();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar6;
  func_0x000107c5faec();
  puStack_5e8 = puVar7;
  puStack_5e0 = puVar4;
  func_0x000107c61170(puVar6);
  uVar13 = 0x500;
  func_0x000107c60ee4(&uStack_590);
  func_0x000107c616a0(&uStack_590);
  puVar10 = auStack_190;
  func_0x000107c5fb80();
  puVar11 = puVar10;
  uVar5 = uVar13;
  func_0x000107c5ef04(lVar17);
  func_0x000107c5eed4();
  lVar15 = lVar17;
  (**(code **)(lVar18 + 8))();
  puVar1 = puStack_5b8;
  func_0x000107c5efa4(puStack_5b8);
  func_0x000107c5ef94();
  (**(code **)(lVar21 + 8))(puVar1,lStack_5a8);
  lStack_578 = 0;
  uStack_580 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  uStack_588 = 0;
  uStack_590 = 0;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xc);
  uVar12 = (ulong)*(uint *)PTR__mach_task_self__11034c5c8;
  uVar14 = 0x14;
  func_0x000107c61678(uVar12,0x14,&uStack_590,&uStack_90);
  puVar4 = puStack_5b0;
  func_0x000107c61170(puStack_5b0);
  dVar26 = (double)NEON_ucvtf(uStack_588);
  dVar26 = dVar26 * 9.5367431640625e-07;
  *param_1 = uStack_5c8;
  param_1[1] = uStack_5c0;
  if ((int)uVar12 != 0) {
    dVar26 = -1.0;
  }
  param_1[2] = uStack_5d8;
  param_1[3] = uStack_5d0;
  param_1[4] = puStack_5e0;
  param_1[5] = puStack_5e8;
  param_1[6] = puVar10;
  param_1[7] = uVar13;
  param_1[8] = puVar11;
  param_1[9] = uVar5;
  param_1[10] = lVar15;
  param_1[0xb] = lVar3;
  param_1[0xc] = dVar26;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    *(undefined1 **)(lVar17 + -0x60) = puVar10;
    *(long *)(lVar17 + -0x58) = lVar15;
    *(ulong *)(lVar17 + -0x50) = uVar12;
    *(undefined1 **)(lVar17 + -0x48) = puVar11;
    *(undefined8 *)(lVar17 + -0x40) = uVar5;
    *(long *)(lVar17 + -0x38) = lVar3;
    *(undefined8 *)(lVar17 + -0x30) = uVar13;
    *(undefined8 **)(lVar17 + -0x28) = param_1;
    *(undefined1 **)(lVar17 + -0x20) = puVar1;
    *(undefined1 **)(lVar17 + -0x18) = auStack_5f0;
    *(undefined1 **)(lVar17 + -0x10) = &stack0xfffffffffffffff0;
    *(undefined8 *)(lVar17 + -8) = 0x1014f8794;
    lVar3 = 0;
    func_0x000107c5f23c();
    lVar16 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
    uVar19 = (lVar17 + -0x70) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    lVar18 = 0;
    func_0x000107c5f260();
    lVar24 = *(long *)(lVar18 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar24 + 0x40));
    lVar22 = uVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uVar23 = lVar22 - extraout_x12;
    lVar21 = 0;
    func_0x000107c5f268();
    lVar15 = *(long *)(lVar21 + -8);
    *(long *)(lVar17 + -0x70) = lVar15;
    *(long *)(lVar17 + -0x68) = lVar21;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
    lVar21 = uVar23 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
    uVar5 = 0;
    func_0x000107c5f254();
    func_0x000107c613fc();
    func_0x000107c5f250();
    func_0x000107c5f240(lVar21);
    func_0x000107c5f24c();
    func_0x000107c5f264(uVar23);
    (**(code **)(lVar24 + 0x68))
              (lVar22,*(undefined4 *)PTR___s7Network6NWPathV6StatusO9satisfiedyA2EmFWC_110351520,
               lVar18);
    uVar12 = uVar23;
    func_0x000107c5f25c(uVar23,lVar22);
    pcVar25 = *(code **)(lVar24 + 8);
    (*pcVar25)(lVar22,lVar18);
    (*pcVar25)(uVar23,lVar18);
    if ((uVar12 & 1) == 0) {
      func_0x000107c61574(uVar5);
      uVar5 = 0x656e696c66664f;
      uVar13 = 0xe700000000000000;
    }
    else {
      pcVar20 = *(code **)(lVar16 + 0x68);
      (*pcVar20)(uVar19,*(undefined4 *)
                         PTR___s7Network11NWInterfaceV13InterfaceTypeO4wifiyA2EmFWC_1103514b8,lVar3)
      ;
      uVar12 = uVar19;
      func_0x000107c5f258();
      pcVar25 = *(code **)(lVar16 + 8);
      (*pcVar25)(uVar19,lVar3);
      if ((uVar12 & 1) == 0) {
        (*pcVar20)(uVar19,*(undefined4 *)
                           PTR___s7Network11NWInterfaceV13InterfaceTypeO8cellularyA2EmFWC_1103514c0,
                   lVar3);
        uVar12 = uVar19;
        func_0x000107c5f258();
        (*pcVar25)(uVar19,lVar3);
        if ((uVar12 & 1) == 0) {
          (*pcVar20)(uVar19,*(undefined4 *)
                             PTR___s7Network11NWInterfaceV13InterfaceTypeO13wiredEthernetyA2EmFWC_1103514b0
                     ,lVar3);
          uVar12 = uVar19;
          func_0x000107c5f258();
          (*pcVar25)(uVar19,lVar3);
          func_0x000107c61574(uVar5);
          bVar2 = (uVar12 & 1) == 0;
          uVar5 = 0x74656e7265687445;
          if (bVar2) {
            uVar5 = 0x657463656e6e6f43;
          }
          uVar13 = 0xe800000000000000;
          if (bVar2) {
            uVar13 = 0xe900000000000064;
          }
        }
        else {
          func_0x000107c61574(uVar5);
          uVar5 = 0x72616c756c6c6543;
          uVar13 = 0xe800000000000000;
        }
      }
      else {
        func_0x000107c61574(uVar5);
        uVar5 = 0x69466957;
        uVar13 = 0xe400000000000000;
      }
    }
    (**(code **)(*(long *)(lVar17 + -0x70) + 8))(lVar21,*(undefined8 *)(lVar17 + -0x68));
    auVar28._8_8_ = uVar13;
    auVar28._0_8_ = uVar5;
    return auVar28;
  }
  auVar27._8_8_ = uVar14;
  auVar27._0_8_ = puVar4;
  return auVar27;
}



/* Entry: 1014f8f78; end: 1014f9023;  */

undefined8 FUN_1014f8f78(undefined8 param_1)

{
  FUN_1014f9704(param_1,&UNK_1103d3b38);
  return param_1;
}



/* Entry: 1014f9024; end: 1014f902b;  */

void FUN_1014f9024(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1014f902c; end: 1014f90ab;  */

undefined8 * FUN_1014f902c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1014f90ac; end: 1014f914b;  */

int FUN_1014f90ac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1014f914c; end: 1014f917f;  */

undefined8 * FUN_1014f914c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1014f9180; end: 1014f91d3;  */

undefined8 * FUN_1014f9180(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1014f91d4; end: 1014f920f;  */

undefined8 * FUN_1014f91d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1014f9210; end: 1014f92b7;  */

int FUN_1014f9210(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}


